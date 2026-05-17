/*
 * XREFs of RtlStringCchLengthW @ 0x180040694
 * Callers:
 *     RtlpCheckMuiMultiStringSafe @ 0x18003B37C (RtlpCheckMuiMultiStringSafe.c)
 *     LdrpMultiSZCchLength @ 0x18003B3F4 (LdrpMultiSZCchLength.c)
 *     RtlGetParentLocaleName @ 0x18003B4B0 (RtlGetParentLocaleName.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18004230C (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpNameprepAsciiRealWorker @ 0x180046788 (RtlpNameprepAsciiRealWorker.c)
 *     RtlpIdnToUnicodeWorker @ 0x180047580 (RtlpIdnToUnicodeWorker.c)
 *     RtlpValidAttribute @ 0x1800EB300 (RtlpValidAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchLengthW(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 i; // r9
  __int64 result; // rax

  if ( a1 && a2 <= 0x7FFFFFFF )
  {
    for ( i = a2; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    result = i == 0 ? 0xC000000D : 0;
    if ( a3 )
    {
      if ( i )
        *a3 = a2 - i;
      else
        *a3 = 0LL;
    }
  }
  else
  {
    result = 3221225485LL;
  }
  if ( (int)result < 0 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}
