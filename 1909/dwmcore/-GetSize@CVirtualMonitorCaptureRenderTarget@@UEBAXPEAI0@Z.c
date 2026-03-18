/*
 * XREFs of ?GetSize@CVirtualMonitorCaptureRenderTarget@@UEBAXPEAI0@Z @ 0x1800DB250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualMonitorCaptureRenderTarget::GetSize(
        CVirtualMonitorCaptureRenderTarget *this,
        unsigned int *a2,
        unsigned int *a3)
{
  *a2 = *((_DWORD *)this + 157);
  *a3 = *((_DWORD *)this + 158);
}
