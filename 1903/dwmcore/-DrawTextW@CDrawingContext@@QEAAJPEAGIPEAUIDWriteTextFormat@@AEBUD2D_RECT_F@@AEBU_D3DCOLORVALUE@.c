/*
 * XREFs of ?DrawTextW@CDrawingContext@@QEAAJPEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@@Z @ 0x18016EF44
 * Callers:
 *     ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x180192EF0 (-DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingCon.c)
 *     ?Draw@CTextBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FC8D0 (-Draw@CTextBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMi.c)
 * Callees:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800583E0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18016CC7C (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 */

__int64 __fastcall CDrawingContext::DrawTextW(
        CDrawingContext *this,
        unsigned __int16 *a2,
        unsigned int a3,
        struct IDWriteTextFormat *a4,
        const struct D2D_RECT_F *a5,
        const struct _D3DCOLORVALUE *a6)
{
  signed int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  int v13; // eax
  __int64 (__fastcall *v14)(__int64, char *, unsigned __int16 *, _QWORD, struct IDWriteTextFormat *, const struct D2D_RECT_F *, const struct _D3DCOLORVALUE *, bool, int, _DWORD, _DWORD); // r10
  __int64 v15; // r11
  signed int v16; // eax
  __int64 v17; // rcx

  v10 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v12 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x2362u, 0LL);
  }
  else
  {
    v13 = D2DPrimitiveBlendFromMilCompositingMode(*((_DWORD *)this + 69));
    v16 = v14(v15, (char *)this + 8, a2, a3, a4, a5, a6, *((_DWORD *)this + 63) != 0, v13, 0, 0);
    v12 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x236Bu, 0LL);
  }
  return v12;
}
