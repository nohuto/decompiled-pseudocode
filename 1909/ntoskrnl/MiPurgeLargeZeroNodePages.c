/*
 * XREFs of MiPurgeLargeZeroNodePages @ 0x140160D28
 * Callers:
 *     MiPurgeZeroList @ 0x140160BEC (MiPurgeZeroList.c)
 * Callees:
 *     KxAcquireQueuedSpinLock @ 0x14000D050 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiMoveLargeZeroToFree @ 0x140160F08 (MiMoveLargeZeroToFree.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPurgeLargeZeroNodePages(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 result; // rax
  unsigned __int64 *v3; // r12
  unsigned __int8 CurrentIrql; // di
  unsigned int v5; // eax
  int *v6; // rcx
  _QWORD *v7; // r13
  unsigned int v8; // edx
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // ebp
  _QWORD *v12; // rsi
  unsigned int v13; // r14d
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v15; // rcx
  int *v16; // [rsp+30h] [rbp-78h]
  _QWORD *v17; // [rsp+38h] [rbp-70h]
  _QWORD *v18; // [rsp+40h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-60h] BYREF
  int v20; // [rsp+B0h] [rbp+8h]
  unsigned int v21; // [rsp+B8h] [rbp+10h]
  int v22; // [rsp+C0h] [rbp+18h]
  __int64 v23; // [rsp+C8h] [rbp+20h]

  v20 = a1;
  v1 = *(_QWORD **)(a1 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = (unsigned __int16)KeNumberNodes;
  v18 = &v1[248 * (unsigned __int16)KeNumberNodes];
  if ( v1 < v18 )
  {
    v3 = v1 + 244;
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = v3;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v3);
      v5 = 0;
      v17 = v1;
      v6 = dword_140465840;
      v21 = 0;
      v16 = dword_140465840;
      v7 = v1;
      do
      {
        if ( *v7 )
        {
          v8 = *v6;
          v9 = 0LL;
          v22 = *v6;
          if ( MmNumberOfChannels )
          {
            do
            {
              v10 = 8 * v9 + 144;
              v11 = 0;
              v23 = v10;
              do
              {
                v12 = *(_QWORD **)((char *)v7 + v10);
                v13 = 0;
                if ( v8 )
                {
                  do
                  {
                    if ( (_QWORD *)*v12 != v12 )
                    {
                      if ( !(unsigned int)MiMoveLargeZeroToFree(v20, (_DWORD)v1, v21, v11, v13, v9) )
                      {
                        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
                        {
                          CurrentPrcb = KeGetCurrentPrcb();
                          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                        }
                        __writecr8(CurrentIrql);
                        --v13;
                        v12 -= 3;
                        CurrentIrql = KeGetCurrentIrql();
                        __writecr8(2uLL);
                        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
                          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
                        LockHandle.LockQueue.Next = 0LL;
                        LockHandle.LockQueue.Lock = v3;
                        KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v3);
                      }
                      v8 = v22;
                    }
                    ++v13;
                    v12 += 3;
                  }
                  while ( v13 < v8 );
                  v7 = v17;
                  v10 = v23;
                }
                v10 += 64LL;
                ++v11;
                v23 = v10;
              }
              while ( v11 <= 1 );
              v9 = (unsigned int)(v9 + 1);
            }
            while ( (unsigned int)v9 < MmNumberOfChannels );
            v5 = v21;
            v6 = v16;
          }
        }
        ++v5;
        ++v6;
        v7 += 34;
        v21 = v5;
        v16 = v6;
        v17 = v7;
      }
      while ( v5 < 3 );
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v15 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v15);
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
      v1 += 248;
      v3 += 248;
    }
    while ( v1 < v18 );
  }
  return result;
}
