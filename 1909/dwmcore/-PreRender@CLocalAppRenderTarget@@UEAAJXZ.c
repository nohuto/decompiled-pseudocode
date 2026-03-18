/*
 * XREFs of ?PreRender@CLocalAppRenderTarget@@UEAAJXZ @ 0x18024F010
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007FDD0 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 */

__int64 __fastcall CLocalAppRenderTarget::PreRender(CLocalAppRenderTarget *this)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx
  signed int v3; // eax
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 7);
  v2 = 0;
  if ( v1 )
  {
    v3 = CVisualTree::PreCompute(v1, 0LL);
    v2 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x42u, 0LL);
  }
  return v2;
}
