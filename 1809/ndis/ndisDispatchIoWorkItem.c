/*
 * XREFs of ndisDispatchIoWorkItem @ 0x1C00D2BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisDispatchIoWorkItem(PDEVICE_OBJECT DeviceObject, void (__fastcall **Context)(_QWORD))
{
  Context[4](Context[5]);
}
