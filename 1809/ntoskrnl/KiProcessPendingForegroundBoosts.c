/*
 * XREFs of KiProcessPendingForegroundBoosts @ 0x1400D7D30
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReadyDeferredReadyList @ 0x1400CDCA4 (KiReadyDeferredReadyList.c)
 *     KiApplyForegroundBoostThread @ 0x1400D7EEC (KiApplyForegroundBoostThread.c)
 *     KeSetTimer2 @ 0x1400FC1F0 (KeSetTimer2.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiProcessPendingForegroundBoosts(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  __int64 *v4; // rbx
  unsigned int v5; // esi
  int v6; // edi
  __int64 *v7; // rdx
  __int64 *v8; // rax
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 **v11; // rcx
  bool v12; // di
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  __int64 *v16; // rsi
  __int64 *v17; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v20; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v24; // [rsp+28h] [rbp-30h] BYREF
  _QWORD v25[5]; // [rsp+30h] [rbp-28h] BYREF

  v24 = 0LL;
  v4 = 0LL;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  KxAcquireSpinLock(&qword_140423078);
  v7 = (__int64 *)qword_140423068;
  while ( v7 != &qword_140423068 )
  {
    v8 = v7;
    v7 = (__int64 *)*v7;
    v9 = v6 - *((_DWORD *)v8 - 2);
    if ( v9 < KiForegroundBoostTicks )
    {
      if ( v9 > v5 )
        v5 = v6 - *((_DWORD *)v8 - 2);
    }
    else
    {
      v10 = *v8;
      v11 = (__int64 **)v8[1];
      if ( *(__int64 **)(*v8 + 8) != v8 || *v11 != v8 )
        __fastfail(3u);
      *v11 = (__int64 *)v10;
      *(_QWORD *)(v10 + 8) = v11;
      *v8 = (__int64)v4;
      v4 = v8;
      v8[1] = 0LL;
      _InterlockedAdd16((volatile signed __int16 *)v8 - 6, 1u);
    }
  }
  v12 = qword_140423068 != (_QWORD)&qword_140423068;
  KxReleaseSpinLock(&qword_140423078);
  if ( v12 )
  {
    v25[1] = -1LL;
    v25[0] = 0LL;
    KeSetTimer2(&KiForegroundState, -150000LL * (KiForegroundBoostTicks - v5), 0LL, v25);
  }
  while ( v4 )
  {
    v16 = v4;
    v4 = (__int64 *)*v4;
    v17 = v16 - 179;
    v17[179] = 1LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v23 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v21 = SchedulerAssist[5];
          SchedulerAssist[5] = v21 + 1;
          if ( v21 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)v17 + 16, 0LL) )
        break;
      v20 = CurrentPrcb->SchedulerAssist;
      if ( v20 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v22 = v20[5] - 1;
          v20[5] = v22;
          if ( !v22 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v23, v13, v14);
      while ( v17[8] );
    }
    KiApplyForegroundBoostThread(v17, &v24);
    KiReleaseThreadLockSafe(v17);
    _InterlockedAdd16((volatile signed __int16 *)v17 + 710, 0xFFFFu);
  }
  KiReadyDeferredReadyList((__int64)KeGetCurrentPrcb(), &v24, v14, v15);
}
