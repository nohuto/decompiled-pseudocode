/*
 * XREFs of ?PopStereoContext@CDrawingContext@@QEAAJPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18016EA90
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x18005B6F4 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJPEA_N@Z @ 0x1801996B0 (-Render@COffScreenRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801A7AB0 (-RenderComposeTop@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180022AA8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@.c)
 *     ??$SAFE_DELETE@VCLayer@@@@YAXAEAPEAVCLayer@@@Z @ 0x18005103C (--$SAFE_DELETE@VCLayer@@@@YAXAEAPEAVCLayer@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PopStereoContext(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  _OWORD *v3; // r11
  unsigned int v4; // r8d
  __int64 v5; // rcx
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v11[16]; // [rsp+40h] [rbp-28h] BYREF

  v2 = a1;
  if ( a2 )
  {
    v10 = *(_OWORD *)PixelAlign((__int64)v11, a1 + 6304);
    *v3 = v10;
  }
  v4 = *(_DWORD *)(v2 + 568) - 1;
  v5 = *(_QWORD *)(*(_QWORD *)(v2 + 544) + 8LL * v4);
  *(_DWORD *)(v2 + 568) = v4;
  *(_QWORD *)&v10 = v5;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 24LL))(v5, v2);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xF0Bu, 0LL);
  SAFE_DELETE<CLayer>((__int64 (__fastcall ****)(_QWORD, __int64))&v10);
  return v8;
}
