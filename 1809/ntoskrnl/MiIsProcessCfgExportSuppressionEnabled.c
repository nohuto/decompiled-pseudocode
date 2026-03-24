/*
 * XREFs of MiIsProcessCfgExportSuppressionEnabled @ 0x140089560
 * Callers:
 *     MiCfgMarkValidEntries @ 0x1405F631C (MiCfgMarkValidEntries.c)
 *     MiValidateUserCallTarget @ 0x1406A7648 (MiValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgExportSuppressionEnabled()
{
  return *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 400LL)
      && (KeGetCurrentThread()->ApcState.Process[2].UserTime & 2) != 0;
}
