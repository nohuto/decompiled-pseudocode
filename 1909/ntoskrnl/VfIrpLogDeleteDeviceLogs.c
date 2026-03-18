/*
 * XREFs of VfIrpLogDeleteDeviceLogs @ 0x1409809E0
 * Callers:
 *     VfIoDeleteDevice @ 0x140973760 (VfIoDeleteDevice.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ViIrpLogDatabaseFindPointer @ 0x14098116C (ViIrpLogDatabaseFindPointer.c)
 */

__int64 __fastcall VfIrpLogDeleteDeviceLogs(__int64 a1)
{
  KIRQL v2; // di
  __int64 Pointer; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 result; // rax
  _DWORD *v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  Pointer = ViIrpLogDatabaseFindPointer(a1, &v9);
  v4 = (_QWORD *)Pointer;
  if ( Pointer )
  {
    if ( *v9 )
    {
      *(_DWORD *)(Pointer + 24) |= 4u;
    }
    else
    {
      ObfDereferenceObject(*(PVOID *)Pointer);
      v5 = v4[1];
      v6 = (_QWORD *)v4[2];
      if ( *(_QWORD **)(v5 + 8) != v4 + 1 || (_QWORD *)*v6 != v4 + 1 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      ExFreePoolWithTag(v4, 0);
    }
  }
  KxReleaseSpinLock(&ViIrpLogDatabaseLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v2 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
  }
  result = v2;
  __writecr8(v2);
  return result;
}
