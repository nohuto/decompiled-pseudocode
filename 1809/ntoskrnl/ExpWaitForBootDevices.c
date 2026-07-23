/*
 * XREFs of ExpWaitForBootDevices @ 0x14031A3D0
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     KeFreezeExecution @ 0x1402971B8 (KeFreezeExecution.c)
 *     KeThawExecution @ 0x14029766C (KeThawExecution.c)
 */

void __fastcall __noreturn ExpWaitForBootDevices(PVOID StartContext)
{
  int v1; // esi
  __int64 *v2; // rbx
  KIRQL v3; // al
  KIRQL v4; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v6; // rcx

  while ( 1 )
  {
    KeWaitForSingleObject(&ExBootDevicesRemovedEvent, Executive, 0, 0, 0LL);
    v1 = 60;
    while ( 1 )
    {
      v2 = &ExBootDeviceList;
      while ( 1 )
      {
        v3 = KeAcquireSpinLockRaiseToDpc(&ExBootDeviceListSpinLock);
        v2 = (__int64 *)v2[1];
        v4 = v3;
        KxReleaseSpinLock(&ExBootDeviceListSpinLock);
        if ( v2 == &ExBootDeviceList )
          break;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(v4);
        if ( *((_DWORD *)v2 - 1)
          && ((unsigned __int8 (__fastcall *)(__int64, __int64))v2[5])(v2[4], v2[6])
          && _InterlockedExchangeAdd((volatile signed __int32 *)v2 - 1, 0xFFFFFFFF) == 1
          && _InterlockedExchangeAdd(&ExNumMissingBootDevices, 0xFFFFFFFF) == 1 )
        {
          goto LABEL_20;
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
      {
        v6 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v6->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)v6);
      }
      __writecr8(v4);
LABEL_20:
      if ( !ExNumMissingBootDevices )
        break;
      KeFreezeExecution();
      KeStallExecutionProcessor(0xF4240u);
      KeThawExecution(1);
      if ( !--v1 )
        KeBugCheckEx(0x7Bu, 0LL, 0LL, 3uLL, 0LL);
    }
  }
}
