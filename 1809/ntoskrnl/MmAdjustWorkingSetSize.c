/*
 * XREFs of MmAdjustWorkingSetSize @ 0x14018ED10
 * Callers:
 *     PspApplyWorkingSetLimitsToProcess @ 0x140604D74 (PspApplyWorkingSetLimitsToProcess.c)
 *     CmpInitializeRegistryProcess @ 0x1407572EC (CmpInitializeRegistryProcess.c)
 *     PspApplyWorkingSetLimits @ 0x140889804 (PspApplyWorkingSetLimits.c)
 * Callees:
 *     MmAdjustWorkingSetSizeEx @ 0x14013C044 (MmAdjustWorkingSetSizeEx.c)
 */

__int64 __fastcall MmAdjustWorkingSetSize(unsigned __int64 a1, unsigned __int64 a2, int a3, char a4)
{
  _BYTE v5[24]; // [rsp+30h] [rbp-18h] BYREF

  return MmAdjustWorkingSetSizeEx(a1, a2, a3, a4, 0, v5);
}
