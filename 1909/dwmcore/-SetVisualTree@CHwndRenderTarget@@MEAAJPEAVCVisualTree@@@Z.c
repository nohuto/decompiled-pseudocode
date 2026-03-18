/*
 * XREFs of ?SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800AE910
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x1800AE950 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::SetVisualTree(CHwndRenderTarget *this, struct CVisualTree *a2)
{
  signed int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  v3 = CRenderTarget::SetVisualTree(this, a2);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x282u, 0LL);
  else
    *((_BYTE *)this + 161) = 1;
  return v5;
}
