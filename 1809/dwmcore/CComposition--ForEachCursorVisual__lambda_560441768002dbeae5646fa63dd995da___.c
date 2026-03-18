/*
 * XREFs of CComposition::ForEachCursorVisual__lambda_560441768002dbeae5646fa63dd995da___ @ 0x180157794
 * Callers:
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@EEAAJPEAVCDrawingContext@@@Z @ 0x180158DB0 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008D6A8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComposition::ForEachCursorVisual__lambda_560441768002dbeae5646fa63dd995da___(
        __int64 a1,
        struct CComposition ***a2)
{
  int v2; // ebx
  __int64 i; // rdi
  struct CVisual *v6; // r9
  struct CVisual *v7; // rcx
  int v8; // eax
  __int64 v9; // rcx

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 920); i = (unsigned int)(i + 1) )
  {
    v6 = *(struct CVisual **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 896) + 8 * i) + 8LL) + 16LL);
    v7 = v6;
    if ( v6 )
    {
      while ( v7 != (*a2)[63] )
      {
        v7 = (struct CVisual *)*((_QWORD *)v7 + 10);
        if ( !v7 )
          goto LABEL_5;
      }
      v2 = 0;
    }
    else
    {
LABEL_5:
      v8 = CDrawingContext::DrawVisual(a2[1], v6, 0);
      v2 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x11Du);
      if ( v2 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v2, 0x2CAu);
        return (unsigned int)v2;
      }
    }
  }
  return (unsigned int)v2;
}
