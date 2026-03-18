/*
 * XREFs of ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x1801FC560
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801996B0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x1801FBFA0 (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801FC5E4 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::Render(CVisualCapture *this, bool *a2)
{
  int v2; // ebx
  signed int v4; // eax
  __int64 v5; // rcx
  signed int v6; // eax
  __int64 v7; // rcx

  v2 = 0;
  if ( *((_BYTE *)this + 202) )
  {
    v4 = COffScreenRenderTarget::Render(this, a2);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x96u, 0LL);
    }
    else
    {
      v6 = CVisualCapture::EnqueueSetEvent((CVisualCapture *)((char *)this - 64));
      v2 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x98u, 0LL);
    }
  }
  *((_BYTE *)this + 202) = 0;
  if ( v2 < 0 )
    CVisualCapture::SendCaptureCompleted((CVisualCapture *)((char *)this - 64));
  return 0LL;
}
