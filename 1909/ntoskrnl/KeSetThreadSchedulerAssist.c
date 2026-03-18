/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x1402AE954
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x140328E70 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KiAcquireThreadStateLock @ 0x14000FCA0 (KiAcquireThreadStateLock.c)
 *     KiReleaseThreadStateLock @ 0x14000FFF0 (KiReleaseThreadStateLock.c)
 *     KeSetPriorityThread @ 0x140010D60 (KeSetPriorityThread.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCheckAndApplyBamQos @ 0x1402AE8A0 (KeCheckAndApplyBamQos.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1402AF84C (KiReadGuestSchedulerAssistPriority.c)
 */

void __fastcall KeSetThreadSchedulerAssist(PKTHREAD Thread, void *a2, int a3)
{
  int v4; // r8d
  __int64 v5; // r8
  KPRIORITY GuestSchedulerAssistPriority; // edx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int8 CurrentIrql; // bp
  __int16 v9; // r14
  int v10; // r8d
  bool v11; // r14
  signed __int32 v12; // ett
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v14; // r14
  struct _KPRCB *v15; // rbp
  _DWORD *v16; // rcx
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  struct _KPRCB *v21; // rcx
  volatile signed __int64 *v22; // [rsp+20h] [rbp-28h] BYREF
  __int64 v23[3]; // [rsp+28h] [rbp-20h] BYREF
  int v24; // [rsp+40h] [rbp-8h]
  int v25; // [rsp+60h] [rbp+18h] BYREF

  if ( a3 )
  {
    v4 = a3 - 1;
    if ( v4 )
    {
      v5 = (unsigned int)(v4 - 1);
      if ( (unsigned int)v5 > 1 )
        return;
      GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority(Thread, a2, v5);
      goto LABEL_50;
    }
    SchedulerAssist = Thread->SchedulerAssist;
    if ( (KiVelocityFlags & 0x10) != 0 && SchedulerAssist )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v9 = v24;
      _disable();
      v10 = SchedulerAssist[1];
      v11 = (v9 & 0x200) != 0;
      if ( v10 != (*((_DWORD *)&Thread->0 + 1) & 3) && v10 < 4 )
      {
        do
          v12 = *(&Thread->MiscFlags + 1);
        while ( v12 != _InterlockedCompareExchange(
                         (volatile signed __int32 *)&Thread->116 + 1,
                         v10 | v12 & 0xFFFFFFFC,
                         v12) );
        KeCheckAndApplyBamQos((__int64)KeGetCurrentPrcb(), (__int64)Thread);
      }
      if ( v11 )
        _enable();
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    if ( !a2 )
    {
      v14 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v14 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v15 = KeGetCurrentPrcb();
      v25 = 0;
      while ( 1 )
      {
        v16 = v15->SchedulerAssist;
        if ( v16 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v17 = v16[5];
            v16[5] = v17 + 1;
            if ( v17 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v15);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
          break;
        v18 = v15->SchedulerAssist;
        if ( v18 )
        {
          if ( v15->NestingLevel <= 1u )
          {
            v19 = v18[5] - 1;
            v18[5] = v19;
            if ( !v19 )
              KiRemoveSystemWorkPriorityKick((__int64)v15);
          }
        }
        do
          KeYieldProcessorEx(&v25);
        while ( Thread->ThreadLock );
      }
      KiAcquireThreadStateLock((__int64)Thread, v23, (volatile signed __int32 **)&v22);
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 0x16u);
      Thread->SchedulerAssist = 0LL;
      if ( (KiVelocityFlags & 0x400) != 0 )
        _interlockedbittestandreset(&Thread->Header.Lock, 0x16u);
      KiReleaseThreadStateLock(v20, v23[0], v22);
      KiReleaseThreadLockSafe((__int64)Thread);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
      {
        v21 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v21);
      }
      __writecr8(v14);
      GuestSchedulerAssistPriority = Thread->BasePriority;
LABEL_50:
      KeSetPriorityThread(Thread, GuestSchedulerAssistPriority);
      return;
    }
    Thread->SchedulerAssist = a2;
    _interlockedbittestandset((volatile signed __int32 *)&Thread->116 + 1, 0x16u);
    if ( (KiVelocityFlags & 0x400) != 0 )
      _interlockedbittestandset(&Thread->Header.Lock, 0x16u);
  }
}
