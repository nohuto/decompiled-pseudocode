/*
 * XREFs of PoEnergyEstimationEnabled @ 0x14000E310
 * Callers:
 *     KiInitializeBootStructures @ 0x14059FFC0 (KiInitializeBootStructures.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     AlpcpCaptureAttributes @ 0x1405E3090 (AlpcpCaptureAttributes.c)
 *     PsQueryProcessEnergyValues @ 0x1405E3F00 (PsQueryProcessEnergyValues.c)
 *     PspAllocateThread @ 0x14060DC44 (PspAllocateThread.c)
 *     PspQueryProcessAccountingInformationCallback @ 0x140612F70 (PspQueryProcessAccountingInformationCallback.c)
 *     PspAllocateProcess @ 0x14068E52C (PspAllocateProcess.c)
 *     NtCreateJobObject @ 0x140696550 (NtCreateJobObject.c)
 *     AlpcpCaptureWorkOnBehalfAttribute @ 0x1406D9AB8 (AlpcpCaptureWorkOnBehalfAttribute.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1406DA794 (PspFoldProcessAccountingIntoJob.c)
 *     PpmCheckReInit @ 0x14077387C (PpmCheckReInit.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140885460 (NtAlpcImpersonateClientContainerOfPort.c)
 *     InitBootProcessor @ 0x140A0816C (InitBootProcessor.c)
 * Callees:
 *     <none>
 */

char PoEnergyEstimationEnabled()
{
  return PopEnergyEstimationEnabled;
}
