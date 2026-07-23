/*
 * XREFs of ExpReleaseFastResourceShared @ 0x1401650A0
 * Callers:
 *     ExReleaseFastResource @ 0x140165010 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceShared @ 0x14031B710 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeWakeWaitChain @ 0x140125CA8 (KeWakeWaitChain.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x140165244 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceShared @ 0x140165334 (ExpPrepareToWakeResourceShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int8 __fastcall ExpReleaseFastResourceShared(ULONG_PTR BugCheckParameter2, __int64 *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  _QWORD *v6; // rsi
  volatile __int64 *v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rcx
  __int64 **v10; // rax
  unsigned __int8 result; // al
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 *v15; // rcx
  __int64 **v16; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v18; // rcx
  volatile signed __int64 *v19; // [rsp+20h] [rbp-20h] BYREF
  ULONG_PTR v20; // [rsp+28h] [rbp-18h]
  char v21; // [rsp+88h] [rbp+48h] BYREF
  __int64 v22; // [rsp+90h] [rbp+50h] BYREF
  __int64 *v23; // [rsp+98h] [rbp+58h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( !*((_BYTE *)a2 + 18) )
  {
    v9 = (__int64 *)*a2;
    v10 = (__int64 **)a2[1];
    goto LABEL_5;
  }
  v6 = a2 + 5;
  v19 = 0LL;
  v7 = (volatile __int64 *)(BugCheckParameter2 + 96);
  v20 = BugCheckParameter2 + 96;
  if ( (_QWORD *)*v6 != v6 )
  {
    KxAcquireQueuedSpinLock((__int64)&v19, v7, a3);
    LOBYTE(v8) = 1;
    ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, v8);
    KxReleaseQueuedSpinLock(&v19);
    v9 = (__int64 *)*a2;
    v10 = (__int64 **)a2[1];
LABEL_5:
    if ( (__int64 *)v9[1] == a2 && *v10 == a2 )
    {
      *v10 = v9;
      v9[1] = (__int64)v10;
      *a2 = 0LL;
      a2[1] = 0LL;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      goto LABEL_9;
    }
LABEL_17:
    __fastfail(3u);
  }
  KxAcquireQueuedSpinLock((__int64)&v19, v7, a3);
  ExpPrepareToWakeResourceShared(BugCheckParameter2, &v23, &v22, &v21, v19, v20);
  v12 = a2 + 7;
  v13 = a2[7];
  v14 = (_QWORD *)a2[8];
  if ( *(__int64 **)(v13 + 8) != a2 + 7 )
    goto LABEL_17;
  if ( (_QWORD *)*v14 != v12 )
    goto LABEL_17;
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *v12 = 0LL;
  a2[8] = 0LL;
  KxReleaseQueuedSpinLock(&v19);
  KeWakeWaitChain(&v23, 0, 2 * (unsigned int)(v22 != 0) + 1);
  *((_BYTE *)a2 + 18) = 0;
  v15 = (__int64 *)*a2;
  v16 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v16 != a2 )
    goto LABEL_17;
  *v16 = v15;
  v15[1] = (__int64)v16;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v6 = 0LL;
  v6[1] = 0LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(CurrentIrql);
  result = *((_BYTE *)a2 + 16);
  if ( result )
    result = KeAbPostReleaseEx(BugCheckParameter2, (_KLOCK_ENTRY *)result);
LABEL_9:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}
