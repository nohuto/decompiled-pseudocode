/*
 * XREFs of KeSetThreadSchedulerAssist @ 0x140297F34
 * Callers:
 *     VmSetThreadSchedulerAssist @ 0x14030B920 (VmSetThreadSchedulerAssist.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KiAcquireThreadStateLock @ 0x1400CFAD0 (KiAcquireThreadStateLock.c)
 *     KiReleaseThreadStateLock @ 0x1400D80E4 (KiReleaseThreadStateLock.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x1401B4B10 (KiReadGuestSchedulerAssistPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeCheckAndApplyBamQos @ 0x140297E80 (KeCheckAndApplyBamQos.c)
 */

void __fastcall KeSetThreadSchedulerAssist(PKTHREAD Thread, void *a2, __int64 a3)
{
  int v4; // r8d
  KPRIORITY GuestSchedulerAssistPriority; // edx
  _DWORD *SchedulerAssist; // rdx
  unsigned __int8 CurrentIrql; // bp
  __int16 v8; // r14
  int v9; // r8d
  bool v10; // r14
  signed __int32 v11; // ett
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 v13; // r14
  struct _KPRCB *v14; // rbp
  _DWORD *v15; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  struct _KPRCB *v20; // rcx
  volatile signed __int64 *v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22[3]; // [rsp+28h] [rbp-20h] BYREF
  int v23; // [rsp+40h] [rbp-8h]
  int v24; // [rsp+60h] [rbp+18h] BYREF

  if ( (_DWORD)a3 )
  {
    v4 = a3 - 1;
    if ( v4 )
    {
      if ( (unsigned int)(v4 - 1) > 1 )
        return;
      GuestSchedulerAssistPriority = KiReadGuestSchedulerAssistPriority((__int64)Thread);
      goto LABEL_50;
    }
    SchedulerAssist = Thread->SchedulerAssist;
    if ( (KiVelocityFlags & 0x10) != 0 && SchedulerAssist )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v8 = v23;
      _disable();
      v9 = SchedulerAssist[1];
      v10 = (v8 & 0x200) != 0;
      if ( v9 != (*((_DWORD *)&Thread->0 + 1) & 3) && v9 < 4 )
      {
        do
          v11 = *(&Thread->MiscFlags + 1);
        while ( v11 != _InterlockedCompareExchange(
                         (volatile signed __int32 *)&Thread->116 + 1,
                         v9 | v11 & 0xFFFFFFFC,
                         v11) );
        KeCheckAndApplyBamQos((__int64)KeGetCurrentPrcb(), (__int64)Thread);
      }
      if ( v10 )
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
      v13 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v13 < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      v14 = KeGetCurrentPrcb();
      v24 = 0;
      while ( 1 )
      {
        v15 = v14->SchedulerAssist;
        if ( v15 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v16 = v15[5];
            v15[5] = v16 + 1;
            if ( v16 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v14);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&Thread->ThreadLock, 0LL) )
          break;
        v17 = v14->SchedulerAssist;
        if ( v17 )
        {
          if ( v14->NestingLevel <= 1u )
          {
            v18 = v17[5] - 1;
            v17[5] = v18;
            if ( !v18 )
              KiRemoveSystemWorkPriorityKick((__int64)v14);
          }
        }
        do
          KeYieldProcessorEx(&v24, (__int64)a2, a3);
        while ( Thread->ThreadLock );
      }
      KiAcquireThreadStateLock((__int64)Thread, (__int64)v22, (volatile signed __int32 **)&v21);
      _interlockedbittestandreset((volatile signed __int32 *)&Thread->116 + 1, 0x16u);
      Thread->SchedulerAssist = 0LL;
      if ( (KiVelocityFlags & 0x400) != 0 )
        _interlockedbittestandreset(&Thread->Header.Lock, 0x16u);
      KiReleaseThreadStateLock(v19, v22[0], v21);
      KiReleaseThreadLockSafe((__int64)Thread);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
      {
        v20 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v20);
      }
      __writecr8(v13);
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
