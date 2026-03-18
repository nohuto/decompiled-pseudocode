/*
 * XREFs of CmpArmLazyWriter @ 0x140007920
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x1400ED6CC (CmpRecheckHiveVolumePolicy.c)
 *     CmpEnableLazyFlush @ 0x140181F94 (CmpEnableLazyFlush.c)
 *     HvpMarkDirty @ 0x1405D58F0 (HvpMarkDirty.c)
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     HvMarkBaseBlockDirty @ 0x1406EBEC4 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KeSetCoalescableTimer @ 0x1400E29F0 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x1400E2D90 (KeCancelTimer.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CmpArmLazyWriter(int a1, unsigned __int64 *a2, char a3)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r14
  KIRQL v8; // si
  unsigned __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // ecx
  unsigned __int64 v12; // rbx
  ULONG v13; // r9d
  __int64 v14; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  if ( !CmpWorkerDataInitialized || CmpHoldLazyFlush )
    return;
  v4 = MEMORY[0xFFFFF78000000008] - MEMORY[0xFFFFF780000003B0];
  if ( a2 )
  {
    v5 = v4 + 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * a1 + 45);
    v6 = *a2;
    if ( *a2 >= v5 )
      v6 = v5;
  }
  else if ( a3 )
  {
    v6 = v4 + 20000000;
  }
  else
  {
    v6 = 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * a1 + 45) + v4;
  }
  v7 = 192LL * a1;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v7 + 152));
  v9 = *(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) & 7LL;
  if ( v9 <= 3 )
  {
    if ( (_DWORD)v9 == 1 )
    {
      if ( a3 && KeCancelTimer((struct _KTIMER *)((char *)&CmpLazyWriterData + v7)) )
        goto LABEL_24;
    }
    else
    {
      if ( !(_DWORD)v9 )
      {
LABEL_24:
        v12 = 1LL;
LABEL_17:
        *(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) = v12;
        if ( v12 == 1 )
        {
          if ( a3 )
          {
            v14 = -20000000LL;
            v13 = 1000;
          }
          else
          {
            v13 = *(_DWORD *)((char *)&CmpLazyWriterData + v7 + 184);
            v14 = -10000000LL * *(int *)((char *)&CmpLazyWriterData + v7 + 180);
          }
          KeSetCoalescableTimer(
            (struct _KTIMER *)((char *)&CmpLazyWriterData + v7),
            (LARGE_INTEGER)v14,
            0,
            v13,
            (PKDPC)((char *)&CmpLazyWriterData + v7 + 64));
        }
        goto LABEL_9;
      }
      v11 = v9 - 2;
      if ( !v11 || v11 == 1 && v6 < (*(_QWORD *)((char *)&CmpLazyWriterData + v7 + 168) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        v12 = v6 & 0xFFFFFFFFFFFFFFF8uLL | 3;
        goto LABEL_17;
      }
    }
  }
LABEL_9:
  KxReleaseSpinLock((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v7 + 152));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb, v10);
  }
  __writecr8(v8);
}
