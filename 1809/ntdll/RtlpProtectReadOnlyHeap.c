/*
 * XREFs of RtlpProtectReadOnlyHeap @ 0x180106E8C
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x18006F8F0 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall RtlpProtectReadOnlyHeap(int a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  return LdrProtectMrdataHeap(a1, a2, a3, a4);
}
