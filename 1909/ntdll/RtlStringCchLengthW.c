/*
 * XREFs of RtlStringCchLengthW @ 0x180016C58
 * Callers:
 *     RtlpCheckMuiMultiStringSafe @ 0x18000EE3C (RtlpCheckMuiMultiStringSafe.c)
 *     LdrpMultiSZCchLength @ 0x18000EEB4 (LdrpMultiSZCchLength.c)
 *     RtlGetParentLocaleName @ 0x18000EFE0 (RtlGetParentLocaleName.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x1800157A4 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpNameprepAsciiRealWorker @ 0x18002B144 (RtlpNameprepAsciiRealWorker.c)
 *     RtlpIdnToUnicodeWorker @ 0x18002BFC0 (RtlpIdnToUnicodeWorker.c)
 *     RtlpValidAttribute @ 0x1800E840C (RtlpValidAttribute.c)
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
