/*
 * XREFs of MiFreeMdlTracker @ 0x1402A8458
 * Callers:
 *     MmUnlockPages @ 0x140033580 (MmUnlockPages.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     MiValidateMdlTracker @ 0x1402A8C08 (MiValidateMdlTracker.c)
 */

__int64 __fastcall MiFreeMdlTracker(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  PEPROCESS v2; // rdi
  __int64 v5; // rsi
  unsigned __int64 *v6; // r14
  unsigned __int64 *v7; // rbx
  ULONG_PTR v8; // rax
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v2 = *(PEPROCESS *)(BugCheckParameter2 + 16);
  if ( v2 || (v2 = PsInitialSystemProcess) != 0LL )
  {
    v5 = *(_QWORD *)&v2[1].ThreadSeed[6];
    if ( v5 )
    {
      v6 = 0LL;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 24), &LockHandle);
      v7 = *(unsigned __int64 **)v5;
      while ( v7 )
      {
        v8 = v7[3];
        if ( BugCheckParameter2 < v8 )
        {
          v7 = (unsigned __int64 *)*v7;
        }
        else
        {
          if ( BugCheckParameter2 <= v8 )
          {
            v6 = v7;
            MiValidateMdlTracker((ULONG_PTR)v7);
            RtlAvlRemoveNode((unsigned __int64 *)v5, v7);
            *(_QWORD *)(v5 + 16) -= a2;
            break;
          }
          v7 = (unsigned __int64 *)v7[1];
        }
      }
      KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
      OldIrql = LockHandle.OldIrql;
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(OldIrql);
      if ( v6 )
      {
        ExFreeToNPagedLookasideList(&stru_14043BBC0, v6);
      }
      else if ( *(_DWORD *)(v5 + 32) )
      {
        KeBugCheckEx(0x76u, 1uLL, BugCheckParameter2, v2[1].Affinity.Bitmap[14], *(_QWORD *)&v2[1].ThreadSeed[6]);
      }
    }
  }
  return 1LL;
}
