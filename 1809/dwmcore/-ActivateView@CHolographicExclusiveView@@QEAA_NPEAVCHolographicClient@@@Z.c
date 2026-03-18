/*
 * XREFs of ?ActivateView@CHolographicExclusiveView@@QEAA_NPEAVCHolographicClient@@@Z @ 0x18020C7B8
 * Callers:
 *     ?FrameUpdate@CHolographicClient@@UEAAJII@Z @ 0x180212450 (-FrameUpdate@CHolographicClient@@UEAAJII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ @ 0x18020C718 (-ActivateSwapChain@CHolographicExclusiveView@@AEAAJXZ.c)
 *     ?DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ @ 0x18020C958 (-DeactivateSwapChain@CHolographicExclusiveView@@AEAAXXZ.c)
 *     ?OnExclusiveViewActivate@CHolographicClient@@QEAA_NIPEAPEAX@Z @ 0x180212624 (-OnExclusiveViewActivate@CHolographicClient@@QEAA_NIPEAPEAX@Z.c)
 */

bool __fastcall CHolographicExclusiveView::ActivateView(CHolographicExclusiveView *this, struct CHolographicClient *a2)
{
  int v2; // edi
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v2 = 0;
  if ( *((_BYTE *)this + 75) )
  {
    *((_BYTE *)this + 72) = 1;
  }
  else
  {
    v5 = CHolographicExclusiveView::ActivateSwapChain(this);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xD4u);
    }
    else if ( !CHolographicClient::OnExclusiveViewActivate(a2, *((_DWORD *)this + 36), (void **)this + 19) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147467259, 0xD7u);
LABEL_8:
      CHolographicExclusiveView::DeactivateSwapChain(this);
      return *((_BYTE *)this + 72);
    }
  }
  if ( v2 < 0 )
    goto LABEL_8;
  return *((_BYTE *)this + 72);
}
