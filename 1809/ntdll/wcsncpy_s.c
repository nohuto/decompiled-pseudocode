/*
 * XREFs of wcsncpy_s @ 0x18009BA90
 * Callers:
 *     _wsplitpath_s @ 0x18009AE10 (_wsplitpath_s.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 */

errno_t __cdecl wcsncpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source, rsize_t MaxCount)
{
  errno_t v5; // ebx
  wchar_t *v6; // r11
  rsize_t v7; // r10
  signed __int64 v8; // r11
  wchar_t v9; // ax
  signed __int64 v10; // r8
  wchar_t v11; // ax

  if ( MaxCount )
  {
    if ( !Destination )
      goto LABEL_4;
  }
  else if ( !Destination )
  {
    if ( SizeInWords )
    {
LABEL_4:
      invalid_parameter();
      return 22;
    }
    return 0;
  }
  if ( !SizeInWords )
    goto LABEL_4;
  if ( !MaxCount )
  {
    *Destination = 0;
    return 0;
  }
  if ( Source )
  {
    v6 = Destination;
    v7 = SizeInWords;
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
        --v7;
      }
      while ( v7 );
    }
    else
    {
      v10 = (char *)Source - (char *)Destination;
      do
      {
        v11 = *(wchar_t *)((char *)v6 + v10);
        *v6++ = v11;
        if ( !v11 )
          break;
        if ( !--v7 )
          break;
        --MaxCount;
      }
      while ( MaxCount );
      if ( !MaxCount )
        *v6 = 0;
    }
    if ( v7 )
      return 0;
    if ( MaxCount == -1LL )
    {
      Destination[SizeInWords - 1] = 0;
      return 80;
    }
    v5 = 34;
  }
  else
  {
    v5 = 22;
  }
  *Destination = 0;
  invalid_parameter();
  return v5;
}
