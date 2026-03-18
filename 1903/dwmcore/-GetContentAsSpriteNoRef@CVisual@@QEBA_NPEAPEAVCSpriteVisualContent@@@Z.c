/*
 * XREFs of ?GetContentAsSpriteNoRef@CVisual@@QEBA_NPEAPEAVCSpriteVisualContent@@@Z @ 0x1800801C4
 * Callers:
 *     ?PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18000DE20 (-PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?IsReadyToDraw@CDropShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x180016AB0 (-IsReadyToDraw@CDropShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004F1B0 (-RenderContent@CSpriteVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?HasPixelSnappedContent@CVisual@@IEBA_NXZ @ 0x18007FCE0 (-HasPixelSnappedContent@CVisual@@IEBA_NXZ.c)
 *     ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18008007C (-UpdateBackdropBlurFlag@CVisual@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::GetContentAsSpriteNoRef(CVisual *this, struct CSpriteVisualContent **a2)
{
  char v3; // bl
  __int64 v4; // rcx

  v3 = 0;
  v4 = *((_QWORD *)this + 32);
  if ( v4 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 48LL))(v4, 14LL) )
  {
    v3 = 1;
    *a2 = (struct CSpriteVisualContent *)*((_QWORD *)this + 32);
  }
  return v3;
}
