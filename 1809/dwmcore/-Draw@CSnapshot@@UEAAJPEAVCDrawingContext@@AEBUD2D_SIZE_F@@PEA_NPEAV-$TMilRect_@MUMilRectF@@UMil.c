/*
 * XREFs of ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B2910
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x18008D940 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSnapshot::Draw(__int64 a1, CDrawingContext *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 && !*(_BYTE *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 80) = 1;
    v6 = CDrawingContext::DrawBitmap(a2, (struct CResource *)(v4 + 16));
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x6Au);
    *(_BYTE *)(a1 + 80) = 0;
  }
  return v3;
}
