/*
 * XREFs of PopThermalSxExit @ 0x140166DB0
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     PopCoolingSxTransition @ 0x1401671AC (PopCoolingSxTransition.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopThermalSxExit(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v5; // rdi
  void *v6; // rax

  if ( PoResumeFromHibernate )
  {
    PopAcquirePolicyLock(a1, a2);
    if ( PopThermalHibernateInitiated )
    {
      PopThermalHibernateInitiated = 0;
      ZwUpdateWnfStateData(&WNF_PO_THERMAL_HIBERNATE_OCCURRED, 0LL, 0, 0LL, 0LL, 0, 0);
    }
    PopReleasePolicyLock(v3, v2);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPolicyDeviceLock, 0LL);
  v5 = (PVOID *)PopThermal;
  if ( PopThermal != &PopThermal )
  {
    do
    {
      PopAcquireRwLockExclusive((ULONG_PTR)(v5 + 54));
      v6 = (void *)MEMORY[0xFFFFF78000000008];
      v5[64] = (PVOID)MEMORY[0xFFFFF78000000008];
      v5[65] = v6;
      *((_BYTE *)v5 + 504) = 0;
      PopReleaseRwLock((ULONG_PTR)(v5 + 54));
      v5 = (PVOID *)*v5;
    }
    while ( v5 != &PopThermal );
  }
  PopReleaseRwLock((ULONG_PTR)&PopPolicyDeviceLock);
  return PopCoolingSxTransition(0LL);
}
