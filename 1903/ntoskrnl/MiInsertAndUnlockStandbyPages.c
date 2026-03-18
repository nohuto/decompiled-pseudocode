/*
 * XREFs of MiInsertAndUnlockStandbyPages @ 0x140025F10
 * Callers:
 *     MiDecrementAndInsertStandbyPages @ 0x14002C330 (MiDecrementAndInsertStandbyPages.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiCopyDataPageToImagePage @ 0x1400A6A0C (MiCopyDataPageToImagePage.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000CE20 (KxAcquireQueuedSpinLock.c)
 *     MiInsertProtectedStandbyPage @ 0x140024110 (MiInsertProtectedStandbyPage.c)
 *     MiInsertPageInList @ 0x1400262A0 (MiInsertPageInList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __fastcall MiInsertAndUnlockStandbyPages(__int64 a1, __int64 *a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned int v5; // r13d
  unsigned __int8 v6; // bl
  ULONG_PTR *v7; // r14
  __int64 v9; // r15
  int v10; // r12d
  unsigned int v11; // esi
  ULONG_PTR v12; // rdi
  char v13; // cl
  unsigned __int64 v14; // r8
  char v15; // al
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  ULONG_PTR *v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rbx
  __int64 v21; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF

  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a4;
  v7 = (ULONG_PTR *)a2;
  v9 = 0LL;
  if ( !a1 )
  {
    v10 = 0xFFFFFF;
    v11 = 0;
    if ( !a3 )
      goto LABEL_19;
    do
    {
      v12 = *v7;
      if ( (*(_QWORD *)(*v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0
        || (v13 = *(_BYTE *)(v12 + 34), (v13 & 7) == 6)
        || (v13 & 0x10) != 0 )
      {
        KeBugCheckEx(
          0x4Eu,
          6uLL,
          (__int64)(*v7 + 0x58000000000LL) / 48,
          *(_QWORD *)(*v7 + 24) & 0x3FFFFFFFFFFFFFFFLL,
          *(unsigned int *)(v12 + 32));
      }
      v14 = *(_QWORD *)(v12 + 40);
      if ( (v14 & 0x10000000000000LL) != 0 || (v15 = *(_BYTE *)(v12 + 35), (v15 & 0x40) != 0) )
      {
        if ( v10 != 0xFFFFFF )
        {
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          v10 = 0xFFFFFF;
        }
      }
      else
      {
        if ( (v15 & 8) != 0 )
          v16 = 5;
        else
          v16 = v15 & 7;
        if ( !v9 )
          v9 = *(_QWORD *)(qword_140466188 + 8LL * ((HIDWORD(v14) >> 8) & 0x3FF));
        if ( v16 != v10 || v9 != *(_QWORD *)(qword_140466188 + 8 * ((v14 >> 40) & 0x3FF)) )
        {
          if ( v10 != 0xFFFFFF )
          {
            KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            v14 = *(_QWORD *)(v12 + 40);
          }
          v10 = v16;
          v9 = *(_QWORD *)(qword_140466188 + 8 * ((v14 >> 40) & 0x3FF));
          LockHandle.LockQueue.Next = 0LL;
          LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v9 + 40 * (v16 + 60LL));
          KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)LockHandle.LockQueue.Lock);
        }
      }
      MiInsertPageInList(v12);
      ++v11;
      ++v7;
    }
    while ( v11 < a3 );
    if ( v10 != 0xFFFFFF )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v7 = (ULONG_PTR *)a2;
    goto LABEL_18;
  }
  if ( a3 )
  {
    v20 = a2;
    v21 = a3;
    do
    {
      MiInsertProtectedStandbyPage(a1, *v20++);
      --v21;
    }
    while ( v21 );
LABEL_18:
    v6 = a4;
  }
LABEL_19:
  v17 = a3 - 1;
  if ( v6 == 17 )
    v17 = a3;
  if ( v17 )
  {
    v18 = v7;
    v19 = v17;
    v5 = v17;
    do
    {
      _InterlockedAnd64((volatile signed __int64 *)(*v18++ + 24), 0x7FFFFFFFFFFFFFFFuLL);
      --v19;
    }
    while ( v19 );
  }
  if ( v6 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v7[v5] + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v6);
  }
}
