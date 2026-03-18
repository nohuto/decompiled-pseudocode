/*
 * XREFs of KiAdjustThreadTimer @ 0x1402AED70
 * Callers:
 *     KeAdjustTimerDelayProcess @ 0x1402A4D8C (KeAdjustTimerDelayProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiResumeThread @ 0x1400817C8 (KiResumeThread.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiAcquireKobjectLockSafe @ 0x1400E3310 (KiAcquireKobjectLockSafe.c)
 *     KiSuspendThread @ 0x1400E5914 (KiSuspendThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiAdjustThreadTimer(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  volatile signed __int32 *v4; // rbp
  char v9; // r14
  char result; // al
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  int v13; // eax
  _DWORD *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // [rsp+50h] [rbp+8h] BYREF

  v4 = (volatile signed __int32 *)(a1 + 736);
  v9 = 0;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736));
  if ( *(char *)(a1 + 644) < 1 && (*(_DWORD *)(a1 + 120) & 0x4000) == 0 )
  {
    result = KiSuspendThread(a1, a2);
    if ( !result )
      goto LABEL_29;
    v9 = 1;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v18 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = SchedulerAssist[5];
        SchedulerAssist[5] = v13 + 1;
        if ( v13 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v14 = CurrentPrcb->SchedulerAssist;
    if ( v14 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v15 = v14[5] - 1;
        v14[5] = v15;
        if ( !v15 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v18);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x60000) == 0x60000 && (*(_BYTE *)(a1 + 257) & 1) == 0 )
  {
    v16 = *(_QWORD *)(a1 + 280);
    if ( a3 >= 0 )
    {
      if ( a3 > 0 && v16 - a3 < v16 )
        v16 -= a3;
    }
    else
    {
      v17 = v16 - a3;
      v16 = 0LL;
      if ( v17 <= 0 )
        v16 = v17;
    }
    *(_QWORD *)(a1 + 280) = v16;
  }
  *(_DWORD *)(a1 + 1504) = a4;
  result = KiReleaseThreadLockSafe(a1);
  if ( v9 )
    result = KiResumeThread(a1, a2, 0LL);
LABEL_29:
  _InterlockedAnd(v4, 0xFFFFFF7F);
  return result;
}
