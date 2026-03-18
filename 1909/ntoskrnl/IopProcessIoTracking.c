/*
 * XREFs of IopProcessIoTracking @ 0x14029A838
 * Callers:
 *     IopPerfCompleteRequest @ 0x14029A368 (IopPerfCompleteRequest.c)
 * Callees:
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003EEB0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryAcquirePushLockShared @ 0x1400C74B0 (ExfTryAcquirePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

char __fastcall IopProcessIoTracking(__int64 a1, int a2)
{
  char v2; // si
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v4; // rbx
  _KLOCK_ENTRY *v5; // rdi
  unsigned __int8 AbEntrySummary; // cl
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v8; // rax
  int SessionId; // eax
  __int64 v10; // rcx
  bool v11; // zf
  char result; // al
  __int64 i; // rbx
  _DWORD v14[4]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  int v16; // [rsp+40h] [rbp-38h]
  int v17; // [rsp+44h] [rbp-34h]

  v15[1] = a1;
  v15[0] = 24LL;
  v17 = 0;
  v2 = 0;
  v16 = a2;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v2 = 1;
  }
  v14[0] = 0;
  v4 = KeGetCurrentThread();
  --v4->SpecialApcDisable;
  if ( ++v4->AbAllocationRegionCount != 1 )
  {
    v5 = 0LL;
LABEL_5:
    _interlockedbittestandset((volatile signed __int32 *)&v4->116 + 1, 0x10u);
    goto LABEL_18;
  }
  AbEntrySummary = v4->AbEntrySummary;
  if ( AbEntrySummary )
    goto LABEL_9;
  if ( v4->AbOrphanedEntrySummary )
  {
    AbOrphanedEntrySummary = v4->AbOrphanedEntrySummary;
    v4->AbOrphanedEntrySummary = 0;
    AbEntrySummary = AbOrphanedEntrySummary | v4->AbEntrySummary;
LABEL_9:
    _BitScanForward((unsigned int *)&v8, AbEntrySummary);
    v14[2] = v8;
    v4->AbEntrySummary = AbEntrySummary & ~(1 << v8);
    v5 = &v4->LockEntries[v8];
    goto LABEL_10;
  }
  v5 = 0LL;
  if ( (WORD2(PerfGlobalGroupMask) & 0x200) == 0 )
    goto LABEL_5;
  EtwTraceAutoBoostEntryExhaustion((__int64)v4, (__int64)&IopPerfIoTrackingLock);
LABEL_10:
  if ( !v5 )
    goto LABEL_5;
  if ( (unsigned __int64)&IopPerfIoTrackingLock >= 0xFFFF800000000000uLL
    && byte_140467140[(((unsigned __int64)&IopPerfIoTrackingLock >> 39) & 0x1FF) - 256] == 1 )
  {
    SessionId = MmGetSessionIdEx((__int64)v4->ApcState.Process);
  }
  else
  {
    SessionId = -1;
  }
  v5->LockState.SessionId = SessionId;
  v5->LockState.0 = ($A1A49EE4C6E599293708B9EDC35F5B5E)((unsigned __int64)&IopPerfIoTrackingLock & 0x7FFFFFFFFFFFFFFCLL);
LABEL_18:
  --v4->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v4, (__int64)&IopPerfIoTrackingLock, v14);
  v11 = v4->SpecialApcDisable++ == -1;
  if ( v11 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)v4->ApcState.ApcListHead[0].Flink != &v4->152 )
    KiCheckForKernelApcDelivery(v10);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 17LL, 0LL)
    || (result = ExfTryAcquirePushLockShared(&IopPerfIoTrackingLock)) != 0 )
  {
    if ( v5 )
      v5->AcquiredByte |= 1u;
    for ( i = IopPerfIoTrackingListHead; (__int64 *)i != &IopPerfIoTrackingListHead; i = *(_QWORD *)i )
      (*(void (__fastcall **)(_QWORD *))(i + 16))(v15);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&IopPerfIoTrackingLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&IopPerfIoTrackingLock);
    result = KeAbPostRelease((ULONG_PTR)&IopPerfIoTrackingLock);
  }
  else if ( v5 )
  {
    result = KeAbPostReleaseEx((ULONG_PTR)&IopPerfIoTrackingLock, v5);
  }
  if ( v2 == 1 )
    return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return result;
}
