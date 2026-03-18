/*
 * XREFs of ACPITableUnloadCallBack @ 0x1C005D930
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildIssueInvalidateRelationsWorker @ 0x1C002A574 (ACPIBuildIssueInvalidateRelationsWorker.c)
 *     AMLIRestartContext @ 0x1C0061240 (AMLIRestartContext.c)
 */

__int64 __fastcall ACPITableUnloadCallBack(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = RootDeviceExtension;
  KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
  ACPIBuildIssueInvalidateRelationsWorker(v2);
  KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  return AMLIRestartContext(a2);
}
