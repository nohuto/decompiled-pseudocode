/*
 * XREFs of ?DpiAcpiEventCallback@@YAXPEAXK@Z @ 0x1C004A500
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     ?DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z @ 0x1C004A2A4 (-DpiAcpiCallAcpiEventHandler@@YAJPEAU_DEVICE_OBJECT@@W4_DXGK_EVENT_TYPE@@KPEAX@Z.c)
 */

void __fastcall DpiAcpiEventCallback(PVOID Object, unsigned int a2, const GUID *a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0q((__int64)Object, &EventACPIEvent, a3, a2);
  DpiAcpiCallAcpiEventHandler(Object, 1u, a2, 0LL);
}
