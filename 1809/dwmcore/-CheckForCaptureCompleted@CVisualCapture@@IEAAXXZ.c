/*
 * XREFs of ?CheckForCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x18001E20C
 * Callers:
 *     ?CheckOcclusionState@CVisualCapture@@UEAAJXZ @ 0x18001E190 (-CheckOcclusionState@CVisualCapture@@UEAAJXZ.c)
 *     ?PostPresent@CVisualCapture@@UEAAJ_N@Z @ 0x18001E1C0 (-PostPresent@CVisualCapture@@UEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CVisualCapture::CheckForCaptureCompleted(CVisualCapture *this)
{
  void *v2; // rcx

  if ( !*((_BYTE *)this + 449) )
  {
    v2 = (void *)*((_QWORD *)this + 55);
    if ( v2 )
    {
      if ( !WaitForSingleObject(v2, 0) )
        CVisualCapture::SendCaptureCompleted(this);
    }
  }
}
