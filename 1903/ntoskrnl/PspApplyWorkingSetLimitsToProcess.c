/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x1406950B0
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x140694880 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140695C0C (PspAssignProcessToJob.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     MmEnforceWorkingSetLimit @ 0x1400E5BCC (MmEnforceWorkingSetLimit.c)
 *     MmAdjustWorkingSetSize @ 0x14018F270 (MmAdjustWorkingSetSize.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // r15
  int v4; // esi
  int v5; // r13d
  char v6; // bl
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 *v9; // rcx
  char v11; // bl
  unsigned __int64 v12; // [rsp+20h] [rbp-78h]
  unsigned __int64 v13; // [rsp+28h] [rbp-70h]
  _BYTE v14[48]; // [rsp+38h] [rbp-60h] BYREF

  memset(v14, 0, sizeof(v14));
  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(BugCheckParameter1 + 952);
  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v14);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 56), 1u);
  v12 = *(_QWORD *)(v3 + 792);
  v13 = *(_QWORD *)(v3 + 800);
  v5 = ((*(_DWORD *)(v3 + 848) & 1) == 0) + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14042BDB0, 0LL);
  _InterlockedOr((volatile signed __int32 *)(v3 + 1304), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v3 + 56));
  if ( v5 == 2 || (v4 = MmAdjustWorkingSetSize(v12, v13, 0, 1), v4 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)BugCheckParameter1, v5);
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1304), 0xFFFFFEFF);
    v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14042BDB0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14042BDB0);
    KeAbPostRelease((ULONG_PTR)&qword_14042BDB0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v7 = *(_QWORD *)(BugCheckParameter1 + 1016);
    if ( v7 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 780) & 8) != 0 )
      {
        v4 = 0;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768)) )
      {
        v8 = 0LL;
        v9 = *(__int64 **)(BugCheckParameter1 + 1064);
        if ( v9 )
          v8 = *v9;
        _interlockedbittestandset((volatile signed __int32 *)(v7 + 80), 0);
        if ( v8 )
          _interlockedbittestandset((volatile signed __int32 *)(v8 + 40), 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
      }
      else
      {
        v4 = -1073741558;
      }
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1304), 0xFFFFFEFF);
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_14042BDB0, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_14042BDB0);
    KeAbPostRelease((ULONG_PTR)&qword_14042BDB0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v14, 0);
  return (unsigned int)v4;
}
