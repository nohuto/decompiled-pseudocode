/*
 * XREFs of IopCancelIrpsInFileObjectList @ 0x140121AFC
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x140285000 (IopRevokeFileObjectForProcess.c)
 *     NtCancelIoFile @ 0x1406A78B0 (NtCancelIoFile.c)
 *     NtCancelIoFileEx @ 0x1406A7B50 (NtCancelIoFileEx.c)
 *     IopCleanupProcessResources @ 0x1406A7C68 (IopCleanupProcessResources.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 *     IopCheckListForCancelableIrp @ 0x140121D08 (IopCheckListForCancelableIrp.c)
 *     IoCancelIrp @ 0x140121F00 (IoCancelIrp.c)
 *     IopInterlockedAdd @ 0x14012FA8C (IopInterlockedAdd.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall IopCancelIrpsInFileObjectList(__int64 a1, int a2, int a3, int a4, char a5, char a6)
{
  KSPIN_LOCK *v6; // rsi
  int v8; // r13d
  int v9; // ebx
  __int64 Flink; // r15
  KIRQL v11; // di
  _QWORD *v12; // r12
  __int64 v13; // r14
  char v15; // al
  PIRP v16; // rbx
  struct _KPRCB *v17; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v19; // rcx
  PIRP Irp; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp-60h] BYREF
  __int64 v22; // [rsp+40h] [rbp-58h]
  unsigned int v23; // [rsp+A0h] [rbp+8h]

  Interval.QuadPart = -10000LL;
  v6 = (KSPIN_LOCK *)(a1 + 184);
  Irp = 0LL;
  v23 = 0;
  v22 = 0LL;
  v8 = 1;
  v9 = a4;
  Flink = 0LL;
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  if ( a6 )
    *(_DWORD *)(a1 + 80) |= 0x400u;
  v12 = (_QWORD *)(a1 + 192);
  while ( 1 )
  {
    v13 = Flink;
    if ( (_QWORD *)*v12 == v12 )
      break;
    v15 = IopCheckListForCancelableIrp((int)a1 + 192, a2, a3, v9, Flink, (__int64)&Irp);
    v16 = Irp;
    Flink = 0LL;
    if ( !Irp )
    {
      if ( !a5 )
        break;
      if ( v15 )
      {
        if ( !v13 )
          break;
      }
      else
      {
        v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 88LL);
        KxReleaseSpinLock(v6);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v11);
        KeDelayExecutionThread(0, 0, &Interval);
        if ( v8 < 100 )
        {
          v8 *= 2;
          Interval.QuadPart = -10000 * v8;
        }
        v11 = KeAcquireSpinLockRaiseToDpc(v6);
      }
      goto LABEL_26;
    }
    if ( !Irp->Cancel )
    {
      v23 = 1;
      Irp->Cancel = 1;
      KxReleaseSpinLock(v6);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
      {
        v17 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v17);
        v16 = Irp;
      }
      __writecr8(v11);
      IoCancelIrp(v16);
      v11 = KeAcquireSpinLockRaiseToDpc(v6);
    }
    if ( (v16->Flags & 0x2000) != 0 )
      Flink = (__int64)v16->ThreadListEntry.Flink;
    if ( !(unsigned int)IopInterlockedAdd(&v16->Overlay, 0xFFFFFFFFLL) )
      IoFreeIrp(v16);
    v9 = a4;
    if ( (_QWORD *)Flink == v12 )
    {
      if ( !a5 )
        break;
      Flink = 0LL;
LABEL_26:
      v9 = a4;
    }
  }
  KxReleaseSpinLock(v6);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
  {
    v19 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v19->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v19);
  }
  __writecr8(v11);
  return v23;
}
