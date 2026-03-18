/*
 * XREFs of HvcallInitInputControl @ 0x140344014
 * Callers:
 *     HvlpCreateRootVirtualProcessor @ 0x1408512F4 (HvlpCreateRootVirtualProcessor.c)
 *     HvlpCondenseMicrocode @ 0x1408514B4 (HvlpCondenseMicrocode.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140851528 (HvlpDynamicUpdateMicrocode.c)
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
