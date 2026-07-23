/*
 * XREFs of CmpArmLazyWriter @ 0x14008CC94
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x14000EDFC (CmpRecheckHiveVolumePolicy.c)
 *     CmpEnableLazyFlush @ 0x14017806C (CmpEnableLazyFlush.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     HvpMarkDirty @ 0x1405FBD2C (HvpMarkDirty.c)
 *     HvMarkBaseBlockDirty @ 0x1406CC1D4 (HvMarkBaseBlockDirty.c)
 * Callees:
 *     KeSetCoalescableTimer @ 0x14001CDE0 (KeSetCoalescableTimer.c)
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14008CE50 (KiQueryUnbiasedInterruptTime.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CmpArmLazyWriter(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdi
  __int64 UnbiasedInterruptTime; // rax
  unsigned __int64 *v6; // r11
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rdi
  KIRQL v10; // bp
  unsigned __int64 v11; // rcx
  int v12; // ecx
  int v13; // ecx
  unsigned __int64 v14; // rbx
  ULONG v15; // r9d
  __int64 v16; // rdx
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = (int)a1;
  if ( !CmpWorkerDataInitialized || CmpHoldLazyFlush )
    return;
  LOBYTE(a1) = 1;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime(a1);
  if ( v6 )
  {
    v7 = UnbiasedInterruptTime + 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * v4 + 45);
    v8 = *v6;
    if ( *v6 >= v7 )
      v8 = v7;
  }
  else if ( a3 )
  {
    v8 = UnbiasedInterruptTime + 20000000;
  }
  else
  {
    v8 = 10000000LL * *((unsigned int *)&CmpLazyWriterData + 48 * v4 + 45) + UnbiasedInterruptTime;
  }
  v9 = 192 * v4;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v9 + 152));
  v11 = *(_QWORD *)((char *)&CmpLazyWriterData + v9 + 168) & 7LL;
  if ( v11 <= 3 )
  {
    if ( !(_DWORD)v11 )
    {
LABEL_22:
      v14 = 1LL;
LABEL_17:
      *(_QWORD *)((char *)&CmpLazyWriterData + v9 + 168) = v14;
      if ( v14 == 1 )
      {
        if ( a3 )
        {
          v16 = -20000000LL;
          v15 = 1000;
        }
        else
        {
          v15 = *(_DWORD *)((char *)&CmpLazyWriterData + v9 + 184);
          v16 = -10000000LL * *(int *)((char *)&CmpLazyWriterData + v9 + 180);
        }
        KeSetCoalescableTimer(
          (struct _KTIMER *)((char *)&CmpLazyWriterData + v9),
          (LARGE_INTEGER)v16,
          0,
          v15,
          (PKDPC)((char *)&CmpLazyWriterData + v9 + 64));
      }
      goto LABEL_10;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( !v13 || v13 == 1 && v8 < (*(_QWORD *)((char *)&CmpLazyWriterData + v9 + 168) & 0xFFFFFFFFFFFFFFF8uLL) )
      {
        v14 = v8 & 0xFFFFFFFFFFFFFFF8uLL | 3;
        goto LABEL_17;
      }
    }
    else if ( a3 && KeCancelTimer((struct _KTIMER *)((char *)&CmpLazyWriterData + v9)) )
    {
      goto LABEL_22;
    }
  }
LABEL_10:
  KxReleaseSpinLock((PKSPIN_LOCK)((char *)&CmpLazyWriterData + v9 + 152));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v10 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v10);
}
