/*
 * XREFs of RtlpProtectInvertedFunctionTable @ 0x180104560
 * Callers:
 *     RtlAddGrowableFunctionTable @ 0x180065EC0 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall RtlpProtectInvertedFunctionTable(int a1)
{
  LdrProtectMrdata(a1);
}
