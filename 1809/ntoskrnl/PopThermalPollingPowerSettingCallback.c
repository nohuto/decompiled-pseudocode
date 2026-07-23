/*
 * XREFs of PopThermalPollingPowerSettingCallback @ 0x140193750
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     IoCancelIrp @ 0x140121F00 (IoCancelIrp.c)
 */

__int64 PopThermalPollingPowerSettingCallback()
{
  char v0; // al
  struct _KTHREAD *CurrentThread; // rax
  PIRP i; // rbx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopThermalLock);
  v0 = !PopPdcIdleResiliency || dword_14041918C != 1;
  if ( PopThermalPollingMode && PopThermalPollingWakesAllowed != v0 )
  {
    PopThermalPollingWakesAllowed = v0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
    for ( i = (PIRP)PopThermal; i != (PIRP)&PopThermal; i = *(PIRP *)&i->Type )
    {
      PopAcquireRwLockExclusive((ULONG_PTR)&i[2].Flags);
      if ( i[1].AssociatedIrp.IrpCount || (i->PendingReturned & 1) != 0 && LODWORD(i->CancelRoutine) )
        IoCancelIrp((PIRP)i->IoStatus.Information);
      PopReleaseRwLock((ULONG_PTR)&i[2].Flags);
    }
    PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  }
  PopReleaseRwLock((ULONG_PTR)&PopThermalLock);
  return 0LL;
}
