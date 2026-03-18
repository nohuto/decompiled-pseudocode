/*
 * XREFs of ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x18001C1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x18001C23C (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18001C3C0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x18001E250 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisualCapture::Render(CVisualCapture *this, bool *a2)
{
  int v2; // ebx
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // eax
  unsigned int v7; // ecx

  v2 = 0;
  if ( *((_BYTE *)this + 202) )
  {
    v4 = COffScreenRenderTarget::Render(this, a2);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x98u);
    }
    else
    {
      v6 = CVisualCapture::EnqueueSetEvent((CVisualCapture *)((char *)this - 64));
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x9Au);
    }
  }
  *((_BYTE *)this + 202) = 0;
  if ( v2 < 0 )
    CVisualCapture::SendCaptureCompleted((CVisualCapture *)((char *)this - 64));
  return 0LL;
}
