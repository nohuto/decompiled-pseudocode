/*
 * XREFs of wcscpy_s @ 0x180098180
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x180014670 (RtlConvertSidToUnicodeString.c)
 *     sub_1800CBCD0 @ 0x1800CBCD0 (sub_1800CBCD0.c)
 * Callees:
 *     sub_18008C6D8 @ 0x18008C6D8 (sub_18008C6D8.c)
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
      sub_18008C6D8();
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
    sub_18008C6D8();
    return 22;
  }
}
