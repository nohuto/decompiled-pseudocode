/*
 * XREFs of KiAdjustThreadTimer @ 0x140298350
 * Callers:
 *     KeAdjustTimerDelayProcess @ 0x14028E758 (KeAdjustTimerDelayProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiResumeThread @ 0x1400F1CE0 (KiResumeThread.c)
 *     KiSuspendThread @ 0x1400F2428 (KiSuspendThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiAdjustThreadTimer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile signed __int32 *v4; // rbp
  char v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r8
  char result; // al
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // [rsp+50h] [rbp+8h] BYREF

  v4 = (volatile signed __int32 *)(a1 + 736);
  v9 = 0;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736), a2, a3);
  if ( *(char *)(a1 + 644) < 1 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
  {
    result = KiSuspendThread(a1, a2, v11);
    if ( !result )
      goto LABEL_29;
    v9 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = SchedulerAssist[5];
        SchedulerAssist[5] = v15 + 1;
        if ( v15 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v16 = CurrentPrcb->SchedulerAssist;
    if ( v16 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v17 = v16[5] - 1;
        v16[5] = v17;
        if ( !v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v20, v10, v11);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x60000) == 0x60000 && (*(_BYTE *)(a1 + 257) & 1) == 0 )
  {
    v18 = *(_QWORD *)(a1 + 280);
    if ( a3 >= 0 )
    {
      if ( a3 > 0 && v18 - a3 < v18 )
        v18 -= a3;
    }
    else
    {
      v19 = v18 - a3;
      v18 = 0LL;
      if ( v19 <= 0 )
        v18 = v19;
    }
    *(_QWORD *)(a1 + 280) = v18;
  }
  *(_DWORD *)(a1 + 1504) = a4;
  result = KiReleaseThreadLockSafe(a1);
  if ( v9 )
    result = KiResumeThread(a1, a2, 0LL);
LABEL_29:
  _InterlockedAnd(v4, 0xFFFFFF7F);
  return result;
}
