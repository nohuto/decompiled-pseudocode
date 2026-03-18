/*
 * XREFs of ?DrawAsDrawList@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180063CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x1800132E8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B30B0 (-DrawAsDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::DrawAsDrawList(
        __int64 a1,
        COverlayContext **a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  int v6; // esi
  int (__fastcall ***v7)(_QWORD, GUID *, struct ISwapChainContent **); // rcx
  int v11; // eax
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  struct ISwapChainContent *v14; // rcx
  int v16; // eax
  unsigned int v17; // ecx
  struct ISwapChainContent *v18; // [rsp+30h] [rbp-28h] BYREF
  bool v19; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0LL;
  v6 = a1;
  v7 = *(int (__fastcall ****)(_QWORD, GUID *, struct ISwapChainContent **))(a1 + 96);
  if ( !v7 || (**v7)(v7, &GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2, &v18) < 0 )
    goto LABEL_3;
  v19 = 0;
  v16 = CDrawingContext::DrawAsOverlay(a2, v18, &v19);
  v13 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x192u);
    goto LABEL_5;
  }
  if ( !v19 && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v18 + 112LL))(v18) )
  {
LABEL_3:
    v11 = CSpriteVisualContent::DrawAsDrawList(v6, (_DWORD)a2, a3, a4, a5, a6);
    v13 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x1A1u);
  }
LABEL_5:
  v14 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v13;
}
