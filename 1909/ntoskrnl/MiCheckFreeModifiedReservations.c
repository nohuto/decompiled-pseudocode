/*
 * XREFs of MiCheckFreeModifiedReservations @ 0x14015B73C
 * Callers:
 *     MiModifiedPageWriter @ 0x140192C90 (MiModifiedPageWriter.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DC40 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400447C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140082D98 (KiQueryUnbiasedInterruptTime.c)
 *     MiInitializePagefileBitmapsCache @ 0x140193658 (MiInitializePagefileBitmapsCache.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiFreeModifiedReservations @ 0x1402CE220 (MiFreeModifiedReservations.c)
 */

__int64 __fastcall MiCheckFreeModifiedReservations(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned __int64 v2; // r12
  __int64 result; // rax
  unsigned __int64 v5; // rcx
  unsigned int v6; // ecx
  unsigned __int64 v7; // r15
  __int64 *v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rdi
  char v11; // al
  unsigned __int8 OldIrql; // bp
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v14[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 8560);
  v2 = *(_QWORD *)(a1 + 2688);
  memset(&LockHandle, 0, sizeof(LockHandle));
  result = *(_QWORD *)(a1 + 8128);
  v5 = 0LL;
  if ( result >= 0 )
    v5 = result;
  if ( *(_QWORD *)(a1 + 824) < 0x800uLL )
  {
    result = *(_QWORD *)(a1 + 7888) >> 2;
    if ( v1 > result || v1 > v5 >> 2 )
    {
      v6 = *(_DWORD *)(a1 + 840);
      if ( v6 >= 0x40 )
      {
        result = *(_DWORD *)(a1 + 832) / v6;
        if ( (unsigned int)result < (unsigned int)dword_14057119C >> 3 )
        {
          result = *(unsigned int *)(a1 + 7896);
          v7 = 3 * (v1 >> 2);
          if ( (_DWORD)result )
          {
            v8 = (__int64 *)(a1 + 7904);
            v9 = (unsigned int)result;
            do
            {
              v10 = *v8;
              result = *(unsigned __int16 *)(*v8 + 204);
              if ( (result & 0x60) == 0 )
              {
                if ( v2 > v7 )
                {
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 232), &LockHandle);
                  v11 = *(_BYTE *)(v10 + 207);
                  if ( (v11 & 1) == 0 )
                  {
                    *(_BYTE *)(v10 + 207) = v11 | 1;
                    MiInitializePagefileBitmapsCache(v10);
                    *(_DWORD *)(v10 + 124) = dword_14057119C;
                  }
                  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
                  OldIrql = LockHandle.OldIrql;
                  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
                    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                  }
                  __writecr8(OldIrql);
                }
                result = MiFreeModifiedReservations(v10, 0LL);
              }
              ++v8;
              --v9;
            }
            while ( v9 );
          }
          ++*(_DWORD *)(a1 + 848);
          if ( v2 > v7 )
          {
            result = KiQueryUnbiasedInterruptTime();
            *(_QWORD *)(a1 + 856) = result;
            _InterlockedOr(v14, 0);
            *(_WORD *)(a1 + 868) |= 1u;
            ++*(_DWORD *)(a1 + 844);
          }
          *(_DWORD *)(a1 + 840) = 0;
          *(_QWORD *)(a1 + 832) = 0LL;
        }
      }
    }
  }
  return result;
}
