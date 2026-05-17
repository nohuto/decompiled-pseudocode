/*
 * XREFs of RtlpProtectInvertedFunctionTable @ 0x180106E80
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x18006F8F0 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlpProtectInvertedFunctionTable(int a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  return LdrProtectMrdata(a1, a2, a3, a4);
}
