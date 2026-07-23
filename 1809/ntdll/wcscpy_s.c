/*
 * XREFs of wcscpy_s @ 0x18009B8E0
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x180040940 (RtlConvertSidToUnicodeString.c)
 *     CsrpLocalSetupForSecureProcess @ 0x1800CD524 (CsrpLocalSetupForSecureProcess.c)
 * Callees:
 *     _invalid_parameter @ 0x18008FDF8 (_invalid_parameter.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Destination, rsize_t SizeInWords, const wchar_t *Source)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  wchar_t v6; // ax

  if ( Destination && SizeInWords )
  {
    if ( !Source )
    {
      v4 = 22;
LABEL_10:
      *Destination = 0;
      invalid_parameter();
      return v4;
    }
    v5 = (char *)Destination - (char *)Source;
    do
    {
      v6 = *Source;
      *(const wchar_t *)((char *)Source + v5) = *Source;
      ++Source;
      if ( !v6 )
        break;
      --SizeInWords;
    }
    while ( SizeInWords );
    if ( !SizeInWords )
    {
      v4 = 34;
      goto LABEL_10;
    }
    return 0;
  }
  else
  {
    invalid_parameter();
    return 22;
  }
}
