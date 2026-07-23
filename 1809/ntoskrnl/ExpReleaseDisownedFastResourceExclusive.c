/*
 * XREFs of ExpReleaseDisownedFastResourceExclusive @ 0x14016483C
 * Callers:
 *     ExReleaseDisownedFastResource @ 0x140164CD0 (ExReleaseDisownedFastResource.c)
 *     ExReleaseDisownedFastResourceExclusive @ 0x14031B3B0 (ExReleaseDisownedFastResourceExclusive.c)
 *     ExReleaseDisownedFastResourceShared @ 0x14031B4C0 (ExReleaseDisownedFastResourceShared.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AC8F0 (KxAcquireQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeWakeWaitChain @ 0x140125CA8 (KeWakeWaitChain.c)
 *     KeAbCrossThreadRelease @ 0x140164F40 (KeAbCrossThreadRelease.c)
 *     ExpRotateFastOwnerEntrySublistHead @ 0x140165244 (ExpRotateFastOwnerEntrySublistHead.c)
 *     ExpPrepareToWakeResourceExclusive @ 0x140166664 (ExpPrepareToWakeResourceExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG_PTR __fastcall ExpReleaseDisownedFastResourceExclusive(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // r15
  __int64 v7; // r8
  _QWORD *v8; // rsi
  volatile __int64 *v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 *v13; // rcx
  __int64 **v14; // rax
  unsigned __int8 v15; // al
  LONG_PTR result; // rax
  __int64 v17; // r8
  __int64 *v18; // rcx
  __int64 **v19; // rax
  struct _KPRCB *v20; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
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
  if ( *((_BYTE *)a2 + 18) )
  {
    v8 = a2 + 5;
    v22 = 0LL;
    v9 = (volatile __int64 *)(a1 + 96);
    v23 = a1 + 96;
    if ( (_QWORD *)*v8 == v8 )
    {
      KxAcquireQueuedSpinLock((__int64)&v22, v9, v7);
      ExpPrepareToWakeResourceExclusive(a1, &v27, &v26, &v25, v22, v23);
      v10 = a2 + 7;
      v11 = a2[7];
      v12 = (_QWORD *)a2[8];
      if ( *(__int64 **)(v11 + 8) == a2 + 7 && (_QWORD *)*v12 == v10 )
      {
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        *v10 = 0LL;
        a2[8] = 0LL;
        KxReleaseQueuedSpinLock(&v22);
        *((_BYTE *)a2 + 18) = 0;
        v13 = (__int64 *)*a2;
        v14 = (__int64 **)a2[1];
        if ( *(__int64 **)(*a2 + 8) == a2 && *v14 == a2 )
        {
          *v14 = v13;
          v13[1] = (__int64)v14;
          *a2 = 0LL;
          a2[1] = 0LL;
          *v8 = 0LL;
          a2[6] = 0LL;
          KxReleaseQueuedSpinLock(v24);
          KeWakeWaitChain(&v27, 0, 2 * (unsigned int)(v26 != 0) + 1);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
          __writecr8(CurrentIrql);
          v15 = *((_BYTE *)a2 + 16);
          if ( v15 )
            KeAbCrossThreadRelease(a1, v15, v6);
          result = ObfDereferenceObjectWithTag((PVOID)a2[4], 0x746C6644u);
          goto LABEL_12;
        }
      }
LABEL_29:
      __fastfail(3u);
    }
    KxAcquireQueuedSpinLock((__int64)&v22, v9, v7);
    LOBYTE(v17) = 1;
    ExpRotateFastOwnerEntrySublistHead(a1, a2, v17);
    KxReleaseQueuedSpinLock(&v22);
  }
  v18 = (__int64 *)*a2;
  v19 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v19 != a2 )
    goto LABEL_29;
  *v19 = v18;
  v18[1] = (__int64)v19;
  *a2 = 0LL;
  a2[1] = 0LL;
  KxReleaseQueuedSpinLock(v24);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v20 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v20->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v20);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
LABEL_12:
  *((_BYTE *)a2 + 17) &= 0xFAu;
  *((_BYTE *)a2 + 16) = 0;
  a2[3] = 0LL;
  return result;
}
