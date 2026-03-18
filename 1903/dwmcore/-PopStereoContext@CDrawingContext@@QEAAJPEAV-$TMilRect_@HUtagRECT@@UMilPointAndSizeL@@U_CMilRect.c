/*
 * XREFs of ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180170170
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180049A44 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x18019AF70 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A9370 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ??$SAFE_DELETE@VCLayer@@@@YAXAEAPEAVCLayer@@@Z @ 0x18003BC2C (--$SAFE_DELETE@VCLayer@@@@YAXAEAPEAVCLayer@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800B130C (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopStereoContext(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // r10
  _OWORD *v4; // r11
  unsigned int v5; // r8d
  __int64 v6; // rcx
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v12[16]; // [rsp+40h] [rbp-28h] BYREF

  v3 = a1;
  if ( a2 )
  {
    v11 = *(_OWORD *)PixelAlign((__int64)v12, (_DWORD *)(a1 + 6304), a3);
    *v4 = v11;
  }
  v5 = *(_DWORD *)(v3 + 568) - 1;
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 544) + 8LL * v5);
  *(_DWORD *)(v3 + 568) = v5;
  *(_QWORD *)&v11 = v6;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, v3);
  v9 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xF0Bu, 0LL);
  SAFE_DELETE<CLayer>((__int64 (__fastcall ****)(_QWORD, __int64))&v11);
  return v9;
}
