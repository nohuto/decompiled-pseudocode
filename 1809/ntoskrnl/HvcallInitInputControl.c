/*
 * XREFs of HvcallInitInputControl @ 0x140322724
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x140818AD0 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpCondenseMicrocode @ 0x140818C84 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140818CF0 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvcallInitInputControl(int a1, _QWORD *a2)
{
  __int64 result; // rax

  result = a1;
  *a2 = a1;
  return result;
}
