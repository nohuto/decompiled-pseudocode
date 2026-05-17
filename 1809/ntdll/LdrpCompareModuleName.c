/*
 * XREFs of LdrpCompareModuleName @ 0x180054144
 * Callers:
 *     LdrpCheckForRetryLoading @ 0x18002ADB8 (LdrpCheckForRetryLoading.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x1800571D0 (RtlCompareUnicodeStrings.c)
 */

__int64 __fastcall LdrpCompareModuleName(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = (unsigned int)(*(_DWORD *)(a2 + 40) - *(_DWORD *)(a1 + 264));
  if ( !(_DWORD)result )
    return RtlCompareUnicodeStrings(
             *(_QWORD *)(a2 - 144),
             (unsigned __int64)*(unsigned __int16 *)(a2 - 152) >> 1,
             *(_QWORD *)(a1 + 80),
             (unsigned __int64)*(unsigned __int16 *)(a1 + 72) >> 1,
             1);
  return result;
}
