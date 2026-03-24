/*
 * XREFs of PoEnergyEstimationEnabled @ 0x1400ACF80
 * Callers:
 *     KiInitializeBootStructures @ 0x14056FE10 (KiInitializeBootStructures.c)
 *     PspAllocateThread @ 0x1405F7E84 (PspAllocateThread.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140600010 (PspQueryProcessAccountingInformationCallback.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406037D8 (PspFoldProcessAccountingIntoJob.c)
 *     NtCreateJobObject @ 0x140605F80 (NtCreateJobObject.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     AlpcpCaptureAttributes @ 0x1406363E0 (AlpcpCaptureAttributes.c)
 *     PsQueryProcessEnergyValues @ 0x1406372A0 (PsQueryProcessEnergyValues.c)
 *     PspAllocateProcess @ 0x14064BCB8 (PspAllocateProcess.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406B5220 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PpmCheckReInit @ 0x14074F114 (PpmCheckReInit.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140849F20 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
