/*
 * XREFs of PoEnergyEstimationEnabled @ 0x1400ACEC0
 * Callers:
 *     KiInitializeBootStructures @ 0x140570E10 (KiInitializeBootStructures.c)
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140601010 (PspQueryProcessAccountingInformationCallback.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406047D8 (PspFoldProcessAccountingIntoJob.c)
 *     NtCreateJobObject @ 0x140606F80 (NtCreateJobObject.c)
 *     ExpQuerySystemInformation @ 0x1406273B0 (ExpQuerySystemInformation.c)
 *     AlpcpCaptureAttributes @ 0x140637400 (AlpcpCaptureAttributes.c)
 *     PsQueryProcessEnergyValues @ 0x1406382C0 (PsQueryProcessEnergyValues.c)
 *     PspAllocateProcess @ 0x14064CE78 (PspAllocateProcess.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406B64C0 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PpmCheckReInit @ 0x140750304 (PpmCheckReInit.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14084B180 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
