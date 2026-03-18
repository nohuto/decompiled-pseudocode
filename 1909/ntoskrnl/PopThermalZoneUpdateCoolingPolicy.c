/*
 * XREFs of PopThermalZoneUpdateCoolingPolicy @ 0x1408A8954
 * Callers:
 *     PopThermalCoolingPowerSettingCallback @ 0x140177CF0 (PopThermalCoolingPowerSettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     IoCancelIrp @ 0x140128400 (IoCancelIrp.c)
 */

void PopThermalZoneUpdateCoolingPolicy()
{
  struct _KTHREAD *CurrentThread; // rax
  PIRP i; // rdi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  for ( i = (PIRP)PopThermal; i != (PIRP)&PopThermal; i = *(PIRP *)&i->Type )
  {
    PopAcquireRwLockExclusive((ULONG_PTR)&i[2].Flags);
    IoCancelIrp((PIRP)i->IoStatus.Information);
    PopReleaseRwLock((ULONG_PTR)&i[2].Flags);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
