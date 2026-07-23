/*
 * XREFs of RtlpProtectReadOnlyHeap @ 0x18010456C
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180065EC0 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RtlpProtectReadOnlyHeap(int a1)
{
  LdrProtectMrdataHeap(a1);
}
