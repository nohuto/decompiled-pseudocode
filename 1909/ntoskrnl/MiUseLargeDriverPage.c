/*
 * XREFs of MiUseLargeDriverPage @ 0x14071EE20
 * Callers:
 *     MmLoadSystemImageEx @ 0x14070F890 (MmLoadSystemImageEx.c)
 *     MiHandleBootImage @ 0x1409EF61C (MiHandleBootImage.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x140666E20 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall MiUseLargeDriverPage(PCUNICODE_STRING String1)
{
  __int64 i; // rbx

  if ( (MiFlags & 0x8000) != 0 || (MiFlags & 0x10000) != 0 )
    return 0LL;
  if ( byte_1404645E9 != 1 )
  {
    for ( i = qword_1404645F8; (__int64 *)i != &qword_1404645F8; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString(String1, (PCUNICODE_STRING)(i + 16), 1u) )
        return 1LL;
    }
    return 0LL;
  }
  return 1LL;
}
