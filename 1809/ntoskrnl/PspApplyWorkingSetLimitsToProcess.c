/*
 * XREFs of PspApplyWorkingSetLimitsToProcess @ 0x140605D74
 * Callers:
 *     PspImplicitAssignProcessToJob @ 0x1406057A0 (PspImplicitAssignProcessToJob.c)
 *     PspAssignProcessToJob @ 0x140606664 (PspAssignProcessToJob.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     MmEnforceWorkingSetLimit @ 0x14008FA70 (MmEnforceWorkingSetLimit.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSize @ 0x14018EE70 (MmAdjustWorkingSetSize.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall PspApplyWorkingSetLimitsToProcess(ULONG_PTR BugCheckParameter1)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v3; // r15
  int v4; // esi
  int v5; // r13d
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 *v8; // rcx
  unsigned __int64 v10; // [rsp+20h] [rbp-78h]
  unsigned __int64 v11; // [rsp+28h] [rbp-70h]
  _BYTE v12[48]; // [rsp+30h] [rbp-68h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = *(_QWORD *)(BugCheckParameter1 + 944);
  v4 = 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v12);
  --CurrentThread->SpecialApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 56), 1u);
  v10 = *(_QWORD *)(v3 + 792);
  v11 = *(_QWORD *)(v3 + 800);
  v5 = ((*(_DWORD *)(v3 + 848) & 1) == 0) + 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140406830, 0LL);
  _InterlockedOr((volatile signed __int32 *)(v3 + 1304), 0x100u);
  ExReleaseResourceLite((PERESOURCE)(v3 + 56));
  if ( v5 == 2 || (v4 = MmAdjustWorkingSetSize(v10, v11, 0, 1), v4 >= 0) )
  {
    MmEnforceWorkingSetLimit((_KPROCESS *)BugCheckParameter1, v5);
    _InterlockedAnd((volatile signed __int32 *)(v3 + 1304), 0xFFFFFEFF);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140406830, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140406830);
    KeAbPostRelease((ULONG_PTR)&qword_140406830);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    v6 = *(_QWORD *)(BugCheckParameter1 + 1016);
    if ( v6 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 772) & 8) != 0 )
      {
        v4 = 0;
      }
      else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
      {
        v7 = 0LL;
        v8 = *(__int64 **)(BugCheckParameter1 + 1064);
        if ( v8 )
          v7 = *v8;
        _interlockedbittestandset((volatile signed __int32 *)(v6 + 80), 0);
        if ( v7 )
          _interlockedbittestandset((volatile signed __int32 *)(v7 + 40), 0);
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760));
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
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140406830, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140406830);
    KeAbPostRelease((ULONG_PTR)&qword_140406830);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  KiUnstackDetachProcess((__int64)v12, 0LL);
  return (unsigned int)v4;
}
