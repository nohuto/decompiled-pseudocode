/*
 * XREFs of KiProcessPendingForegroundBoosts @ 0x1400E97B0
 * Callers:
 *     <none>
 * Callees:
 *     KiReadyDeferredReadyList @ 0x140012840 (KiReadyDeferredReadyList.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x140091710 (KxAcquireSpinLock.c)
 *     KeSetTimer2 @ 0x14009C070 (KeSetTimer2.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiApplyForegroundBoostThread @ 0x1400E9970 (KiApplyForegroundBoostThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 *v13; // rsi
  __int64 v14; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v17; // rcx
  int v18; // eax
  int v19; // eax
  int v20; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v21; // [rsp+28h] [rbp-30h] BYREF
  __int64 v22; // [rsp+30h] [rbp-28h] BYREF
  __int64 v23; // [rsp+38h] [rbp-20h]

  v22 = 0LL;
  v23 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  v5 = 0;
  v6 = MEMORY[0xFFFFF78000000320];
  KxAcquireSpinLock(&qword_14044D958);
  v7 = (__int64 *)qword_14044D948;
  while ( v7 != &qword_14044D948 )
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
  v12 = qword_14044D948 != (_QWORD)&qword_14044D948;
  KxReleaseSpinLock(&qword_14044D958);
  if ( v12 )
  {
    v22 = 0LL;
    v23 = -1LL;
    KeSetTimer2((__int64)&KiForegroundState, -150000LL * (KiForegroundBoostTicks - v5), 0LL, (__int64)&v22);
  }
  while ( v4 )
  {
    v13 = v4;
    v4 = (__int64 *)*v4;
    v14 = (__int64)(v13 - 179);
    *(_QWORD *)(v14 + 1432) = 1LL;
    CurrentPrcb = KeGetCurrentPrcb();
    v20 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v18 = SchedulerAssist[5];
          SchedulerAssist[5] = v18 + 1;
          if ( v18 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v14 + 64), 0LL) )
        break;
      v17 = CurrentPrcb->SchedulerAssist;
      if ( v17 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v19 = v17[5] - 1;
          v17[5] = v19;
          if ( !v19 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v20);
      while ( *(_QWORD *)(v14 + 64) );
    }
    KiApplyForegroundBoostThread(v14, &v21);
    KiReleaseThreadLockSafe(v14);
    _InterlockedAdd16((volatile signed __int16 *)(v14 + 1420), 0xFFFFu);
  }
  KiReadyDeferredReadyList((__int64)KeGetCurrentPrcb(), &v21);
}
