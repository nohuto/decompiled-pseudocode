/*
 * XREFs of ?Draw@CSnapshot@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180218250
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z @ 0x1800B54B0 (-DrawBitmap@CDrawingContext@@UEAAJPEAVCResource@@@Z.c)
 */

__int64 __fastcall CSnapshot::Draw(__int64 a1, CDrawingContext *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  signed int v6; // eax
  __int64 v7; // rcx

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 72);
  if ( v4 && !*(_BYTE *)(a1 + 80) )
  {
    *(_BYTE *)(a1 + 80) = 1;
    v6 = CDrawingContext::DrawBitmap(a2, (struct CResource *)(v4 + 16));
    v3 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x69u, 0LL);
    *(_BYTE *)(a1 + 80) = 0;
  }
  return v3;
}
