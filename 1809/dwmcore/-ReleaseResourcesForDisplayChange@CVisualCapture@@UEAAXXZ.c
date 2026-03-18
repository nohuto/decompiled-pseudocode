/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CVisualCapture@@UEAAXXZ @ 0x1801CD750
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x18001E250 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

void __fastcall CVisualCapture::ReleaseResourcesForDisplayChange(CVisualCapture *this)
{
  if ( !*((_BYTE *)this + 385) )
    CVisualCapture::SendCaptureCompleted((CVisualCapture *)((char *)this - 64));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 8) + 224LL))((char *)this - 64);
}
