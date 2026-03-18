/*
 * XREFs of ?PreRender@CRemoteAppRenderTarget@@UEAAJXZ @ 0x18015FAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x18015F568 (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::PreRender(struct CVisualTree **this)
{
  unsigned int v1; // ebx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx

  v1 = 0;
  if ( *((int *)*(this - 6) + 270) >= 5 && this[7] && *((_DWORD *)this + 6) && *((_DWORD *)this + 7) )
  {
    v3 = CRemoteAppRenderTarget::EnsureRenderTarget((CRemoteAppRenderTarget *)(this - 8));
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x71u);
    }
    else
    {
      v5 = CVisualTree::PreCompute(this[7], 0LL);
      v1 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x73u);
    }
  }
  return v1;
}
