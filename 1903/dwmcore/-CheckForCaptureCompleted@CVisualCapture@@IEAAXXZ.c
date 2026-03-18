/*
 * XREFs of ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801FD61C
 * Callers:
 *     ?CheckOcclusionState@CVisualCapture@@UEAAJXZ @ 0x1801FD660 (-CheckOcclusionState@CVisualCapture@@UEAAJXZ.c)
 *     ?PostPresent@CVisualCapture@@UEAAJ_N@Z @ 0x1801FDBC0 (-PostPresent@CVisualCapture@@UEAAJ_N@Z.c)
 * Callees:
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801FDCD4 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
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
