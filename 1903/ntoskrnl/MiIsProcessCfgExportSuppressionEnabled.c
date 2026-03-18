/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x14001C5F4
 * Callers:
 *     MiCfgMarkValidEntries @ 0x1405EC3AC (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x1406CD724 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgExportSuppressionEnabled()
{
  return *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 448LL)
      && (*(_DWORD *)&KeGetCurrentThread()->ApcState.Process[2].Spare2[7] & 2) != 0;
}
