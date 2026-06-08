/*
 * XREFs of PepUpdateIdleStateWorker @ 0x1C0037420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PepUpdateIdleStateWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  _BYTE *DeviceExtension; // rbx

  DeviceExtension = DeviceObject->DeviceExtension;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    qword_1C001B3A0,
    0LL);
  DeviceExtension[1160] = 0;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(WdfDriverGlobals, qword_1C001B3A0);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *((_QWORD *)DeviceExtension + 26),
    0LL);
  ((void (__fastcall *)(_BYTE *))qword_1C001B758)(DeviceExtension);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *((_QWORD *)DeviceExtension + 26));
}
