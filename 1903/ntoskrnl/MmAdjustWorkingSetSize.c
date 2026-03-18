/*
 * XREFs of MmAdjustWorkingSetSize @ 0x14018F270
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x1406950B0 (PspApplyWorkingSetLimitsToProcess.c)
 *     CmpInitializeRegistryProcess @ 0x140769834 (CmpInitializeRegistryProcess.c)
 *     PspApplyWorkingSetLimits @ 0x1408C7744 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14012D4BC (MmAdjustWorkingSetSizeEx.c)
 */

__int64 __fastcall MmAdjustWorkingSetSize(unsigned __int64 a1, unsigned __int64 a2, int a3, char a4)
{
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  return MmAdjustWorkingSetSizeEx(a1, a2, a3, a4, 0, v5);
}
