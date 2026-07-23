/*
 * XREFs of ExpReleaseFastResourceExclusive @ 0x1401664B8
 * Callers:
 *     ExReleaseFastResource @ 0x140165010 (ExReleaseFastResource.c)
 *     ExReleaseFastResourceExclusive @ 0x14031B5E0 (ExReleaseFastResourceExclusive.c)
 *     ExReleaseFastResourceShared @ 0x14031B710 (ExReleaseFastResourceShared.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeWakeWaitChain @ 0x140125CA8 (KeWakeWaitChain.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x140165244 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x140166664 (ExpPrepareToWakeResourceExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int8 __fastcall ExpReleaseFastResourceExclusive(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  _QWORD *v6; // rsi
  volatile __int64 *v7; // rdx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  _QWORD *v12; // rax
  unsigned __int8 result; // al
  __int64 v14; // rcx
  _QWORD *v15; // rax
  struct _KPRCB *v16; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  volatile signed __int64 *v18; // [rsp+20h] [rbp-20h] BYREF
  ULONG_PTR v19; // [rsp+28h] [rbp-18h]
  char v20; // [rsp+88h] [rbp+48h] BYREF
  __int64 v21; // [rsp+90h] [rbp+50h] BYREF
  __int64 *v22; // [rsp+98h] [rbp+58h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( *(_BYTE *)(a2 + 18) )
  {
    v6 = (_QWORD *)(a2 + 40);
    v18 = 0LL;
    v7 = (volatile __int64 *)(BugCheckParameter2 + 96);
    v19 = BugCheckParameter2 + 96;
    if ( (_QWORD *)*v6 == v6 )
    {
      KxAcquireQueuedSpinLock((__int64)&v18, v7, a3);
      ExpPrepareToWakeResourceExclusive(BugCheckParameter2, &v22, &v21, &v20, v18, v19);
      v8 = (_QWORD *)(a2 + 56);
      v9 = *(_QWORD *)(a2 + 56);
      v10 = *(_QWORD **)(a2 + 64);
      if ( *(_QWORD *)(v9 + 8) == a2 + 56 && (_QWORD *)*v10 == v8 )
      {
        *v10 = v9;
        *(_QWORD *)(v9 + 8) = v10;
        *v8 = 0LL;
        *(_QWORD *)(a2 + 64) = 0LL;
        KxReleaseQueuedSpinLock(&v18);
        KeWakeWaitChain(&v22, 0, 2 * (unsigned int)(v21 != 0) + 1);
        *(_BYTE *)(a2 + 18) = 0;
        v11 = *(_QWORD *)a2;
        v12 = *(_QWORD **)(a2 + 8);
        if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) == a2 && *v12 == a2 )
        {
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          *(_QWORD *)a2 = 0LL;
          *(_QWORD *)(a2 + 8) = 0LL;
          *v6 = 0LL;
          v6[1] = 0LL;
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(CurrentIrql);
          result = *(_BYTE *)(a2 + 16);
          if ( result )
            result = KeAbPostReleaseEx(BugCheckParameter2, (_KLOCK_ENTRY *)result);
          goto LABEL_11;
        }
      }
LABEL_18:
      __fastfail(3u);
    }
    KxAcquireQueuedSpinLock((__int64)&v18, v7, a3);
    ExpRotateFastOwnerEntrySublistHead(BugCheckParameter2, a2, 1);
    KxReleaseQueuedSpinLock(&v18);
    v14 = *(_QWORD *)a2;
    v15 = *(_QWORD **)(a2 + 8);
  }
  else
  {
    v14 = *(_QWORD *)a2;
    v15 = *(_QWORD **)(a2 + 8);
  }
  if ( *(_QWORD *)(v14 + 8) != a2 || *v15 != a2 )
    goto LABEL_18;
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v16);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_11:
  *(_BYTE *)(a2 + 17) &= 0xFAu;
  *(_BYTE *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0LL;
  return result;
}
