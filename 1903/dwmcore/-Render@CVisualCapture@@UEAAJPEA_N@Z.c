/*
 * XREFs of ?Render@CVisualCapture@@UEAAJPEA_N@Z @ 0x1801FDC50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18019AF70 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?EnqueueSetEvent@CVisualCapture@@IEAAJXZ @ 0x1801FD690 (-EnqueueSetEvent@CVisualCapture@@IEAAJXZ.c)
 *     ?SendCaptureCompleted@CVisualCapture@@IEAAXXZ @ 0x1801FDCD4 (-SendCaptureCompleted@CVisualCapture@@IEAAXXZ.c)
 */

__int64 __fastcall CVisualCapture::Render(CVisualCapture *this, bool *a2, double a3)
{
  int v3; // ebx
  signed int v5; // eax
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx

  v3 = 0;
  if ( *((_BYTE *)this + 202) )
  {
    v5 = COffScreenRenderTarget::Render(this, a2, a3);
    v3 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x96u, 0LL);
    }
    else
    {
      v7 = CVisualCapture::EnqueueSetEvent((CVisualCapture *)((char *)this - 64));
      v3 = v7;
      if ( v7 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x98u, 0LL);
    }
  }
  *((_BYTE *)this + 202) = 0;
  if ( v3 < 0 )
    CVisualCapture::SendCaptureCompleted((CVisualCapture *)((char *)this - 64));
  return 0LL;
}
