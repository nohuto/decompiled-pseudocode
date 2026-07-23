/*
 * XREFs of ExpReleaseDisownedFastResourceShared @ 0x140164D4C
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x140164CD0 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceShared @ 0x14031B4C0 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeWakeWaitChain @ 0x140125CA8 (KeWakeWaitChain.c)
 *     KeAbCrossThreadRelease @ 0x140164F40 (KeAbCrossThreadRelease.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x140165244 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceShared @ 0x140165334 (ExpPrepareToWakeResourceShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceShared(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 **v9; // rax
  LONG_PTR result; // rax
  _QWORD *v11; // rsi
  volatile __int64 *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 *v16; // rcx
  __int64 **v17; // rax
  unsigned __int8 v18; // al
  __int64 v19; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v21; // rcx
  volatile signed __int64 *v22; // [rsp+20h] [rbp-30h] BYREF
  __int64 v23; // [rsp+28h] [rbp-28h]
  volatile signed __int64 *v24[3]; // [rsp+38h] [rbp-18h] BYREF
  char v25; // [rsp+98h] [rbp+48h] BYREF
  __int64 v26; // [rsp+A0h] [rbp+50h] BYREF
  __int64 *v27; // [rsp+A8h] [rbp+58h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v6 = a2[4];
  v24[0] = 0LL;
  v24[1] = (volatile signed __int64 *)(v6 + 2040);
  KxAcquireQueuedSpinLock((__int64)v24, (volatile __int64 *)(v6 + 2040), a3);
  if ( !*((_BYTE *)a2 + 18) )
  {
LABEL_3:
    v8 = (__int64 *)*a2;
    v9 = (__int64 **)a2[1];
    if ( *(__int64 **)(*a2 + 8) == a2 && *v9 == a2 )
    {
      *v9 = v8;
      v8[1] = (__int64)v9;
      *a2 = 0LL;
      a2[1] = 0LL;
      KxReleaseQueuedSpinLock(v24);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      goto LABEL_7;
    }
LABEL_29:
    __fastfail(3u);
  }
  v11 = a2 + 5;
  v22 = 0LL;
  v12 = (volatile __int64 *)(a1 + 96);
  v23 = a1 + 96;
  if ( (_QWORD *)*v11 != v11 )
  {
    KxAcquireQueuedSpinLock((__int64)&v22, v12, v7);
    LOBYTE(v19) = 1;
    ExpRotateFastOwnerEntrySublistHead(a1, a2, v19);
    KxReleaseQueuedSpinLock(&v22);
    goto LABEL_3;
  }
  KxAcquireQueuedSpinLock((__int64)&v22, v12, v7);
  ExpPrepareToWakeResourceShared(a1, &v27, &v26, &v25, v22, v23);
  v13 = a2 + 7;
  v14 = a2[7];
  v15 = (_QWORD *)a2[8];
  if ( *(__int64 **)(v14 + 8) != a2 + 7 )
    goto LABEL_29;
  if ( (_QWORD *)*v15 != v13 )
    goto LABEL_29;
  *v15 = v14;
  *(_QWORD *)(v14 + 8) = v15;
  *v13 = 0LL;
  a2[8] = 0LL;
  KxReleaseQueuedSpinLock(&v22);
  *((_BYTE *)a2 + 18) = 0;
  v16 = (__int64 *)*a2;
  v17 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v17 != a2 )
    goto LABEL_29;
  *v17 = v16;
  v16[1] = (__int64)v17;
  *a2 = 0LL;
  a2[1] = 0LL;
  *v11 = 0LL;
  a2[6] = 0LL;
  KxReleaseQueuedSpinLock(v24);
  KeWakeWaitChain(&v27, 0, 2 * (unsigned int)(v26 != 0) + 1);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v21 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v21);
  }
  __writecr8(CurrentIrql);
  v18 = *((_BYTE *)a2 + 16);
  if ( v18 )
    KeAbCrossThreadRelease(a1, v18, v6);
  result = ObfDereferenceObjectWithTag((PVOID)a2[4], 0x746C6644u);
LABEL_7:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}
