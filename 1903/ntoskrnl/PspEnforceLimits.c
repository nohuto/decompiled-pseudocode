/*
 * XREFs of PspEnforceLimits @ 0x140610D60
 * Callers:
 *     PspJobTimeLimitsWork @ 0x140613980 (PspJobTimeLimitsWork.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x14003FAD0 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KiCheckForKernelApcDelivery @ 0x14009B920 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140611210 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspGetNextJob @ 0x140613880 (PspGetNextJob.c)
 */

LONG_PTR __fastcall PspEnforceLimits(char a1)
{
  LONG_PTR result; // rax
  LONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  __int64 *v5; // rsi
  __int64 *v6; // r14
  __int64 v7; // rcx
  _DWORD Buffer[4]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v10[8]; // [rsp+50h] [rbp-78h] BYREF

  memset(v10, 0, sizeof(v10));
  _InterlockedIncrement(&PspEnforcementSequenceNumber);
  if ( !a1 && PspNoWakeChargeReferencedProcess )
  {
    Buffer[0] = 0;
    ZwUpdateWnfStateData(&WNF_PS_WAKE_CHARGE_RESOURCE_POLICY, Buffer, 4u, 0LL, 0LL, 0, 0);
    ObfDereferenceObjectWithTag(PspNoWakeChargeReferencedProcess, 0x624A7350u);
    PspNoWakeChargeReferencedProcess = 0LL;
  }
  result = PspGetNextJob(0LL);
  v3 = result;
  if ( result )
  {
    do
    {
      if ( !*(_QWORD *)(v3 + 1072) && (!a1 || (*(_DWORD *)(v3 + 1304) & 0x100000) != 0) )
      {
        _InterlockedAnd((volatile signed __int32 *)(v3 + 1304), 0xFFEFFFFF);
        memset(v10, 0, sizeof(v10));
        PspEnumJobsAndProcessesInJobHierarchy((PVOID)v3, (__int64)v10, 6);
      }
      CurrentThread = KeGetCurrentThread();
      v5 = 0LL;
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PspJobListLock, 0LL);
      v6 = *(__int64 **)(v3 + 24);
      if ( v6 != &PspJobList )
      {
        while ( !ObReferenceObjectSafeWithTag((__int64)(v6 - 3)) )
        {
          v6 = (__int64 *)*v6;
          if ( v6 == &PspJobList )
            goto LABEL_9;
        }
        v5 = v6 - 3;
      }
LABEL_9:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspJobListLock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&PspJobListLock);
      KeAbPostRelease((ULONG_PTR)&PspJobListLock);
      if ( CurrentThread->SpecialApcDisable++ == -1
        && ($6EAC78A6FCFADE0A5FA44F358736B38F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery(v7);
      }
      result = ObfDereferenceObjectWithTag((PVOID)v3, 0x6E457350u);
      v3 = (LONG_PTR)v5;
    }
    while ( v5 );
  }
  return result;
}
