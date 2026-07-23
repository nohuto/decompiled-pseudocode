/*
 * XREFs of ExGetNextWakeTime @ 0x14057F734
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140567D74 (PopTransitionSystemPowerStateEx.c)
 *     PopIsWakeTimerImmanent @ 0x140870AFC (PopIsWakeTimerImmanent.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeQueryTimerDueTime @ 0x1402907B8 (KeQueryTimerDueTime.c)
 *     PoStoreDiagnosticContext @ 0x1402D3460 (PoStoreDiagnosticContext.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

bool __fastcall ExGetNextWakeTime(
        unsigned __int64 a1,
        unsigned __int64 a2,
        char a3,
        unsigned __int64 *a4,
        unsigned __int64 **a5)
{
  __int64 v6; // r12
  unsigned __int64 *v7; // r15
  __int64 v8; // rbx
  __int64 *v9; // r13
  __int64 v10; // rbp
  unsigned __int64 v11; // rdi
  KIRQL v12; // al
  __int64 v13; // r8
  __int64 v14; // rsi
  __int64 TimerDueTime; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 *PoolWithTag; // rax
  SIZE_T NumberOfBytes; // [rsp+20h] [rbp-68h] BYREF
  __int64 v20; // [rsp+28h] [rbp-60h]
  PKSPIN_LOCK SpinLock; // [rsp+30h] [rbp-58h]
  KIRQL v23; // [rsp+98h] [rbp+10h]

  v6 = 0LL;
  v7 = 0LL;
  v8 = MEMORY[0xFFFFF78000000014];
  v9 = (__int64 *)ExpWakeTimerList;
  v20 = MEMORY[0xFFFFF78000000008];
  if ( (__int64 *)ExpWakeTimerList == &ExpWakeTimerList )
    goto LABEL_24;
  do
  {
    v10 = (__int64)(v9 - 33);
    v11 = 0LL;
    v9 = (__int64 *)*v9;
    SpinLock = (PKSPIN_LOCK)(v10 + 64);
    v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 64));
    v14 = *(_QWORD *)(v10 + 256);
    v23 = v12;
    if ( a3 && (*(_BYTE *)(v10 + 304) & 4) == 0 )
      goto LABEL_12;
    if ( (*(_BYTE *)(v10 + 304) & 2) != 0 )
    {
      TimerDueTime = *(_QWORD *)(v10 + 312);
      if ( *(_BYTE *)(v10 + 248) == 1 )
      {
        v11 = 0LL;
        if ( TimerDueTime )
          v11 = TimerDueTime - v8 + v20;
        goto LABEL_10;
      }
    }
    else
    {
      TimerDueTime = KeQueryTimerDueTime(v10, 0LL, v13);
    }
    v11 = TimerDueTime;
LABEL_10:
    if ( v11 < a1 )
      v11 = 0LL;
LABEL_12:
    KxReleaseSpinLock(SpinLock);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v23 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v23);
    if ( v11 - 1 >= a2 - 1 )
    {
      v14 = v6;
      v11 = a2;
    }
    a2 = v11;
    v6 = v14;
  }
  while ( v9 != &ExpWakeTimerList );
  v7 = 0LL;
  if ( v14 )
  {
    PoStoreDiagnosticContext(v14, 0LL, &NumberOfBytes);
    PoolWithTag = (unsigned __int64 *)ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x53577254u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( (int)PoStoreDiagnosticContext(v14, PoolWithTag, &NumberOfBytes) < 0 )
      {
        ExFreePoolWithTag(v7, 0x53577254u);
        v7 = 0LL;
      }
    }
  }
LABEL_24:
  *a4 = a2;
  *a5 = v7;
  return v6 != 0;
}
