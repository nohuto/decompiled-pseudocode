/*
 * XREFs of ?SetVisualTree@CHwndRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180077910
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180077950 (-SetVisualTree@CRenderTarget@@MEAAJPEAVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::SetVisualTree(CHwndRenderTarget *this, struct CVisualTree *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // ebx

  v3 = CRenderTarget::SetVisualTree(this, a2);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x27Du);
  else
    *((_BYTE *)this + 161) = 1;
  return v5;
}
