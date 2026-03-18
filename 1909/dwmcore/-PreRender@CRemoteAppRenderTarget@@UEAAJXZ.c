/*
 * XREFs of ?PreRender@CRemoteAppRenderTarget@@UEAAJXZ @ 0x1801A4490
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FDD0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 *     ?EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ @ 0x1801A3F1C (-EnsureRenderTarget@CRemoteAppRenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::PreRender(CRemoteAppRenderTarget *this)
{
  unsigned int v1; // ebx
  signed int v3; // eax
  __int64 v4; // rcx
  signed int v5; // eax
  __int64 v6; // rcx

  v1 = 0;
  if ( *(int *)(*((_QWORD *)this - 6) + 1096LL) >= 5
    && *((_QWORD *)this + 7)
    && *((_DWORD *)this + 6)
    && *((_DWORD *)this + 7) )
  {
    v3 = CRemoteAppRenderTarget::EnsureRenderTarget((CRemoteAppRenderTarget *)((char *)this - 64));
    v1 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x72u, 0LL);
    }
    else
    {
      v5 = CVisualTree::PreCompute(*((_QWORD *)this + 7), 0LL);
      v1 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x74u, 0LL);
    }
  }
  return v1;
}
