/*
 * XREFs of wcscat_s @ 0x18009B840
 * Callers:
 *     BuildOverlayFilePath @ 0x180032EB0 (BuildOverlayFilePath.c)
 *     RtlConvertSidToUnicodeString @ 0x180040940 (RtlConvertSidToUnicodeString.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 */

errno_t __cdecl wcscat_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  wchar_t *v3; // r9
  signed __int64 v4; // r9
  wchar_t v5; // ax
  errno_t v6; // ebx

  if ( Destination && SizeInWords )
  {
    if ( !Source )
      goto LABEL_14;
    v3 = Destination;
    do
    {
      if ( !*v3 )
        break;
      ++v3;
      --SizeInWords;
    }
    while ( SizeInWords );
    if ( SizeInWords )
    {
      v4 = (char *)v3 - (char *)Source;
      do
      {
        v5 = *Source;
        *(const wchar_t *)((char *)Source + v4) = *Source;
        ++Source;
        if ( !v5 )
          break;
        --SizeInWords;
      }
      while ( SizeInWords );
      if ( SizeInWords )
        return 0;
      v6 = 34;
    }
    else
    {
LABEL_14:
      v6 = 22;
    }
    *Destination = 0;
    invalid_parameter();
    return v6;
  }
  else
  {
    invalid_parameter();
    return 22;
  }
}
