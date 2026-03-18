/*
 * XREFs of CComposition::ForEachCursorVisual__lambda_ea7f4e07214ebedb7f6a77cfc24d0f02___ @ 0x1800EDCF8
 * Callers:
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z @ 0x18024E490 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18002407C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CComposition::ForEachCursorVisual__lambda_ea7f4e07214ebedb7f6a77cfc24d0f02___(
        __int64 a1,
        struct CComposition ***a2)
{
  unsigned int v2; // ebx
  __int64 i; // rdi
  struct CVisual *v6; // r9
  struct CVisual *v7; // rcx
  signed int v8; // eax
  __int64 v9; // rcx

  v2 = 0;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 936); i = (unsigned int)(i + 1) )
  {
    v6 = *(struct CVisual **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 912) + 8 * i) + 8LL) + 16LL);
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
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x110u, 0LL);
      if ( (v2 & 0x80000000) != 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v2, 0x310u, 0LL);
        return v2;
      }
    }
  }
  return v2;
}
