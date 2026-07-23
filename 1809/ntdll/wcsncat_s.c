/*
 * XREFs of wcsncat_s @ 0x18009B970
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 */

errno_t __cdecl wcsncat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  rsize_t v4; // r11
  wchar_t *v5; // r10
  errno_t v7; // ebx
  signed __int64 v8; // rcx
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax

  v4 = SizeInWords;
  v5 = Destination;
  if ( MaxCount )
  {
    if ( !Destination )
    {
LABEL_30:
      invalid_parameter();
      return 22;
    }
  }
  else if ( !Destination )
  {
    if ( !SizeInWords )
      return 0;
    goto LABEL_30;
  }
  if ( !SizeInWords )
    goto LABEL_30;
  if ( MaxCount && !Source )
    goto LABEL_12;
  do
  {
    if ( !*Destination )
      break;
    ++Destination;
    --SizeInWords;
  }
  while ( SizeInWords );
  if ( SizeInWords )
  {
    if ( MaxCount == -1LL )
    {
      v8 = (char *)Destination - (char *)Source;
      do
      {
        v9 = *Source;
        *(const wchar_t *)((char *)Source + v8) = *Source;
        ++Source;
        if ( !v9 )
          break;
        --SizeInWords;
      }
      while ( SizeInWords );
    }
    else
    {
      if ( !MaxCount )
        goto LABEL_24;
      v10 = (char *)Source - (char *)Destination;
      do
      {
        v11 = *(wchar_t *)((char *)Destination + v10);
        *Destination++ = v11;
        if ( !v11 )
          break;
        if ( !--SizeInWords )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
LABEL_24:
        *Destination = 0;
    }
    if ( SizeInWords )
      return 0;
    if ( MaxCount == -1LL )
    {
      v5[v4 - 1] = 0;
      return 80;
    }
    v7 = 34;
  }
  else
  {
LABEL_12:
    v7 = 22;
  }
  *v5 = 0;
  invalid_parameter();
  return v7;
}
