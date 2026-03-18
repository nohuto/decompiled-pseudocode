/*
 * XREFs of ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x1800084B4
 * Callers:
 *     ?UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z @ 0x180007C10 (-UpdateCasterEntry@CProjectedShadowScene@@AEAAJPEBVCVisualTree@@PEAUCasterEntry@1@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180066580 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x1800A1DC0 (-HasNonEmptyContent@CVisual@@UEAA_NXZ.c)
 *     ?HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ @ 0x1800AF390 (-HasNonEmptyContent@CSpriteVisual@@UEAA_NXZ.c)
 *     ?HasNonEmptyContent@CWindowNode@@UEAA_NXZ @ 0x1800BA750 (-HasNonEmptyContent@CWindowNode@@UEAA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CProjectedShadowCaster::IsEmptyMaskContent(CProjectedShadowCaster *this)
{
  __int64 v1; // rax
  __int64 v2; // r9
  __int128 v4; // [rsp+20h] [rbp-18h]
  char v5; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 7) )
    return 1;
  v1 = *((_QWORD *)this + 14);
  if ( v1 )
    v4 = *(_OWORD *)(v1 + 80);
  else
    HIDWORD(v4) = HIDWORD(_xmm);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v4 + 3)) & _xmm) < 0.0000011920929 )
    return 1;
  v2 = *((_QWORD *)this + 15);
  if ( !v2 )
    v2 = *(_QWORD *)(*((_QWORD *)this + 2) + 152LL);
  v5 = 1;
  return !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v2 + 336LL))(v2, 0LL, &v5) || v5;
}
