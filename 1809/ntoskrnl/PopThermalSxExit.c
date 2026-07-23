/*
 * XREFs of PopThermalSxExit @ 0x140142A78
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 */

void __fastcall PopThermalSxExit(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v2; // rdi

  if ( PoResumeFromHibernate )
  {
    PopAcquirePolicyLock(a1);
    if ( PopThermalHibernateInitiated )
    {
      PopThermalHibernateInitiated = 0;
      ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
    }
    PopReleasePolicyLock();
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  v2 = (PVOID *)PopThermal;
  if ( PopThermal != &PopThermal )
  {
    do
    {
      PopAcquireRwLockExclusive((ULONG_PTR)(v2 + 54));
      v2[64] = (PVOID)MEMORY[0xFFFFF78000000008];
      *((_BYTE *)v2 + 504) = 0;
      PopReleaseRwLock((ULONG_PTR)(v2 + 54));
      v2 = (PVOID *)*v2;
    }
    while ( v2 != &PopThermal );
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
}
