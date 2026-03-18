/*
 * XREFs of ?CheckOcclusionState@CVisualCapture@@UEAAJXZ @ 0x1801FBF70
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801FBF2C (-CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::CheckOcclusionState(CVisualCapture *this)
{
  CVisualCapture::CheckForCaptureCompleted((CVisualCapture *)((char *)this - 64));
  return *((_BYTE *)this + 202) == 0 ? 0x87A0001 : 0;
}
