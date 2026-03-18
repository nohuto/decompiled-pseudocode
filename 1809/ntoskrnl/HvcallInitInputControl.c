/*
 * XREFs of HvcallInitInputControl @ 0x140322434
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x1408178F0 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpCondenseMicrocode @ 0x140817AA4 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140817B10 (HvlpDynamicUpdateMicrocode.c)
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
