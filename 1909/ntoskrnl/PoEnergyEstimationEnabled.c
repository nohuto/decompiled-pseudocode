/*
 * XREFs of PoEnergyEstimationEnabled @ 0x14000E540
 * Callers:
 *     KiInitializeBootStructures @ 0x14059FFA0 (KiInitializeBootStructures.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     AlpcpCaptureAttributes @ 0x1405E3860 (AlpcpCaptureAttributes.c)
 *     PsQueryProcessEnergyValues @ 0x1405E46D0 (PsQueryProcessEnergyValues.c)
 *     PspAllocateThread @ 0x14060F754 (PspAllocateThread.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140614A80 (PspQueryProcessAccountingInformationCallback.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x140689AC0 (NtCreateJobObject.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406D9728 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406DB184 (PspFoldProcessAccountingIntoJob.c)
 *     PpmCheckReInit @ 0x140776E5C (PpmCheckReInit.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140884C00 (NtAlpcImpersonateClientContainerOfPort.c)
 *     InitBootProcessor @ 0x140A08698 (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
