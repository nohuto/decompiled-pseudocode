/*
 * XREFs of ?DdiCreateDevice@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEDEVICE@@@Z @ 0x1C0018B68
 * Callers:
 *     VidSchiCreateDeviceInternal @ 0x1C007B00C (VidSchiCreateDeviceInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiCreateDevice(ADAPTER_RENDER *this, struct _DXGKARG_CREATEDEVICE *a2)
{
  return ((__int64 (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_CREATEDEVICE *))DxgCoreInterface[16])(this, a2);
}
