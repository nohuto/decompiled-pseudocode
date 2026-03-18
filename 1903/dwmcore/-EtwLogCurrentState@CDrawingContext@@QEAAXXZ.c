/*
 * XREFs of ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18007A9BC
 * Callers:
 *     ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180013C40 (-DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$.c)
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x18004F290 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180079C90 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 * Callees:
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006F7D4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180077400 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0ppffffubr6q @ 0x180171D98 (McTemplateU0ppffffubr6q.c)
 */

void __fastcall CDrawingContext::EtwLogCurrentState(CDrawingContext *this)
{
  struct CVisual *CurrentVisual; // rax
  unsigned int v3; // eax
  int v4; // edx
  int v5; // ecx
  _BYTE v6[64]; // [rsp+60h] [rbp-78h] BYREF
  int v7; // [rsp+A0h] [rbp-38h]
  int v8; // [rsp+B0h] [rbp-28h] BYREF
  int v9; // [rsp+B4h] [rbp-24h]
  int v10; // [rsp+B8h] [rbp-20h]
  int v11; // [rsp+BCh] [rbp-1Ch]

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
  {
    v7 = 0;
    if ( ((*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 114) + 8LL * (unsigned int)(*((_DWORD *)this + 234) - 1)) + 128LL)
         + 1) & 0xFFFFFFFE) == 0
      && CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8)) )
    {
      CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
      (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)CurrentVisual + 144LL))(CurrentVisual);
    }
    CScopedClipStack::GetClipBoundsWorld((__int64)this + 1008, (__int64)&v8);
    CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)v6);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
    {
      v3 = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
      McTemplateU0ppffffubr6q(v5, v4, (_DWORD)this, v3, v8, v9, v10, v11);
    }
  }
}
