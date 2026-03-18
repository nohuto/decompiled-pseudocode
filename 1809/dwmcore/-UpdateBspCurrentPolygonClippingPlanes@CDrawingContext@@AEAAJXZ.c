/*
 * XREFs of ?UpdateBspCurrentPolygonClippingPlanes@CDrawingContext@@AEAAJXZ @ 0x1801673D8
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800B23D0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B3200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18017A2BC (-ClipToPolygon@ClipPlaneIterator@@QEAAJPEAVCPolygon@@AEBVCMILMatrix@@AEBV-$TMilRect_@HUtagRECT@@.c)
 */

__int64 __fastcall CDrawingContext::UpdateBspCurrentPolygonClippingPlanes(CDrawingContext *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  _BYTE v6[64]; // [rsp+30h] [rbp-78h] BYREF
  int v7; // [rsp+70h] [rbp-38h]
  _BYTE v8[16]; // [rsp+80h] [rbp-28h] BYREF

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 44) + 56LL))(*((_QWORD *)this + 44), v8);
  v7 = 0;
  CMatrixStack::Top((CDrawingContext *)((char *)this + 480), (struct CMILMatrix *)v6);
  v2 = ClipPlaneIterator::ClipToPolygon((CDrawingContext *)((char *)this + 3520));
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x1997u);
  return v4;
}
