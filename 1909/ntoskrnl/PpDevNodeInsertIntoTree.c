/*
 * XREFs of PpDevNodeInsertIntoTree @ 0x14015E16C
 * Callers:
 *     PipProcessEnumeratedChildDevice @ 0x140707EAC (PipProcessEnumeratedChildDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x140723480 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1408769E0 (PiInitializeDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PpDevNodeInsertIntoTree(__int64 a1, __int64 a2)
{
  KIRQL v4; // si
  int v5; // r8d
  _QWORD *v6; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v4 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v5 = *(_DWORD *)(a1 + 136) + 1;
  *(_QWORD *)(a2 + 16) = a1;
  *(_DWORD *)(a2 + 136) = v5;
  _InterlockedOr(v9, 0);
  v6 = *(_QWORD **)(a1 + 24);
  if ( v6 )
    *v6 = a2;
  else
    *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 24) = a2;
  KxReleaseSpinLock(&PnpSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  result = v4;
  __writecr8(v4);
  return result;
}
