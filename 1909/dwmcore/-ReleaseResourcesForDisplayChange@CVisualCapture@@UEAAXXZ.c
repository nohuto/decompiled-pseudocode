/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CVisualCapture@@UEAAXXZ @ 0x1801FC520
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801FC5E4 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

void __fastcall CVisualCapture::ReleaseResourcesForDisplayChange(CVisualCapture *this)
{
  if ( !*((_BYTE *)this + 377) )
    CVisualCapture::SendCaptureCompleted((CVisualCapture *)((char *)this - 64));
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 8) + 368LL))((char *)this - 64);
}
