/*
 * XREFs of Controller_AddControllerToGlobalControllerList @ 0x1C000B3A0
 * Callers:
 *     Controller_WdfEvtDeviceAdd @ 0x1C005BDD0 (Controller_WdfEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Controller_AddControllerToGlobalControllerList(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rcx
  _QWORD *v4; // rbx
  _QWORD *v5; // rdx

  (*(void (__fastcall **)(unsigned __int64, _QWORD, __int64 (__fastcall *)(), __int64, const char *))(WdfFunctions_01023 + 1640))(
    WPP_MAIN_CB.Dpc.ProcessorHistory,
    *(_QWORD *)(a1 + 8),
    Controller_AddControllerToGlobalControllerList,
    7109LL,
    "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c");
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 16LL));
  v3 = *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  v4 = (_QWORD *)(a1 + 24);
  v5 = *(_QWORD **)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type + 8LL);
  if ( *v5 != *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
    __fastfail(3u);
  *v4 = *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.Type;
  v4[1] = v5;
  *v5 = v4;
  *(_QWORD *)(v3 + 8) = v4;
  ++*(_DWORD *)(v3 + 24);
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 16), v2);
}
