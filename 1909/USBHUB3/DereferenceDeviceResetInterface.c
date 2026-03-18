/*
 * XREFs of DereferenceDeviceResetInterface @ 0x1C0040010
 * Callers:
 *     HUBPDO_EvtDevicePrepareHardware @ 0x1C0074BD0 (HUBPDO_EvtDevicePrepareHardware.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C00757C0 (HUBPDO_EvtDeviceReleaseHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

void *__fastcall DereferenceDeviceResetInterface(_QWORD *a1)
{
  void (__fastcall *v1)(_QWORD); // rax

  v1 = (void (__fastcall *)(_QWORD))a1[3];
  if ( v1 )
    v1(a1[1]);
  return memset(a1, 0, 0x38uLL);
}
