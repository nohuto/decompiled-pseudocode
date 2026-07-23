/*
 * XREFs of IopCancelIrpsInCurrentThreadList @ 0x140121DC4
 * Callers:
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1406A7860 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     IopCancelIrpsInThreadList @ 0x1406A7CA8 (IopCancelIrpsInThreadList.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoCancelIrp @ 0x140121F00 (IoCancelIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopCancelIrpsInCurrentThreadList(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  KSPIN_LOCK *v4; // rdi
  _QWORD *v6; // r13
  unsigned int v8; // r12d
  KIRQL v9; // al
  _QWORD *v10; // rsi
  KIRQL v11; // r15
  unsigned __int8 v13; // cl
  int v14; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *v17; // rcx
  struct _KPRCB *v18; // rcx
  KIRQL v19; // [rsp+68h] [rbp+10h]

  v4 = (KSPIN_LOCK *)(a2 + 1856);
  v6 = (_QWORD *)(a2 + 1648);
  v8 = 0;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 1856));
  v10 = (_QWORD *)*v6;
  v19 = v9;
  v11 = v9;
  if ( v6 != (_QWORD *)*v6 )
  {
    while ( *((char *)v10 + 35) >= *((char *)v10 + 34) + 2 )
    {
LABEL_7:
      v10 = (_QWORD *)*v10;
      if ( v6 == v10 )
      {
        v11 = v19;
        goto LABEL_9;
      }
    }
    if ( a4 )
    {
      if ( a1 && v10[20] != a1 )
        goto LABEL_7;
      if ( a3 && v10[5] != a3 )
        goto LABEL_7;
      v14 = *((_DWORD *)v10 - 4);
      if ( (v14 & 0x402) != 0 || (v14 & 0x84) == 0 && (*((_BYTE *)v10 + 39) & 2) == 0 )
        goto LABEL_7;
      v8 = 1;
      KxReleaseSpinLock(v4);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(1uLL);
      IoCancelIrp((PIRP)(v10 - 4));
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || CurrentIrql >= 2u )
        goto LABEL_15;
    }
    else
    {
      if ( (*(_DWORD *)(v10 - 2) & 2) != 0 || a1 && v10[20] != a1 || a3 && v10[5] != a3 )
        goto LABEL_7;
      v8 = 1;
      KxReleaseSpinLock(v4);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v17);
      }
      __writecr8(1uLL);
      IoCancelIrp((PIRP)(v10 - 4));
      v13 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( !KiIrqlFlags || (KiIrqlFlags & 1) == 0 || v13 >= 2u )
        goto LABEL_15;
    }
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
LABEL_15:
    KxAcquireSpinLock(v4);
    goto LABEL_7;
  }
LABEL_9:
  KxReleaseSpinLock(v4);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(v11);
  return v8;
}
