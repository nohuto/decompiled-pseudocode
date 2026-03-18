/*
 * XREFs of DereferenceDeviceResetInterface @ 0x1C003B3A0
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C006E360 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C006EE00 (HUBPDO_EvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

void *__fastcall DereferenceDeviceResetInterface(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD); // rax

  v1 = (void (__fastcall *)(_QWORD))a1[3];
  if ( v1 )
    v1(a1[1]);
  return memset(a1, 0, 0x38uLL);
}
