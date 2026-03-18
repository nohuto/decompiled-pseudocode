/*
 * XREFs of ?PopLayerInternal@CDrawingContext@@AEAAJW4LayerType@CLayer@@@Z @ 0x180050FCC
 * Callers:
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180050F4C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18005AEC0 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18005C990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180213960 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ??$SAFE_DELETE@VCLayer@@@@YAXAEAPEAVCLayer@@@Z @ 0x18005103C (--$SAFE_DELETE@VCLayer@@@@YAXAEAPEAVCLayer@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopLayerInternal(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r8
  __int64 v3; // r10
  int v4; // edx
  int v5; // eax
  unsigned int v6; // ecx
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = (unsigned int)(*(_DWORD *)(a1 + 568) - 1);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 544) + 8 * v2);
  *(_DWORD *)(a1 + 568) = v2;
  v4 = *(_DWORD *)(a1 + 632);
  v8 = v3;
  if ( v4 && *(_QWORD *)(*(_QWORD *)(a1 + 608) + 8LL * (unsigned int)(v4 - 1)) == v3 )
  {
    *(_DWORD *)(a1 + 632) = v4 - 1;
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a1);
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1631u, 0LL);
  }
  SAFE_DELETE<CLayer>(&v8);
  return v1;
}
