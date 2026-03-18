/*
 * XREFs of ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801FBF2C
 * Callers:
 *     ?CheckOcclusionState@CVisualCapture@@UEAAJXZ @ 0x1801FBF70 (-CheckOcclusionState@CVisualCapture@@UEAAJXZ.c)
 *     ?PostPresent@CVisualCapture@@UEAAJ_N@Z @ 0x1801FC4D0 (-PostPresent@CVisualCapture@@UEAAJ_N@Z.c)
 * Callees:
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801FC5E4 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

void __fastcall CVisualCapture::CheckForCaptureCompleted(CVisualCapture *this)
{
  void *v2; // rcx

  if ( !*((_BYTE *)this + 441) )
  {
    v2 = (void *)*((_QWORD *)this + 54);
    if ( v2 )
    {
      if ( !WaitForSingleObject(v2, 0) )
        CVisualCapture::SendCaptureCompleted(this);
    }
  }
}
