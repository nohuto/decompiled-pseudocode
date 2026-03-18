/*
 * XREFs of ?NotifyRenderedRect@COverlayRenderTargetEngine@@IEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A3240
 * Callers:
 *     ?Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z @ 0x1801A36C0 (-Render@COverlayRenderTargetEngine@@UEAAJPEA_N@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x180022AA8 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18003A410 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetBounds@COverlayRenderTargetEngine@@QEAAXPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A31B0 (-GetBounds@COverlayRenderTargetEngine@@QEAAXPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 */

__int64 __fastcall COverlayRenderTargetEngine::NotifyRenderedRect(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // edx
  FLOAT *v3; // r9
  FLOAT v4; // xmm0_4
  float left; // xmm5_4
  float v6; // xmm0_4
  float top; // xmm1_4
  float v8; // xmm0_4
  float right; // xmm2_4
  float v10; // xmm3_4
  float bottom; // xmm0_4
  FLOAT *v12; // rax
  __int64 v13; // r10
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  struct D2D_RECT_F v18; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-20h] BYREF

  v1 = 0;
  COverlayRenderTargetEngine::GetBounds(a1, 0LL, (__int64)&v18);
  v4 = *v3;
  left = v18.left;
  if ( *v3 > v18.left )
  {
    v18.left = *v3;
    left = v4;
  }
  v6 = v3[1];
  top = v18.top;
  if ( v6 > v18.top )
  {
    v18.top = v3[1];
    top = v6;
  }
  v8 = v3[2];
  right = v18.right;
  if ( v18.right > v8 )
  {
    v18.right = v3[2];
    right = v8;
  }
  v10 = v3[3];
  bottom = v18.bottom;
  if ( v18.bottom > v10 )
  {
    v18.bottom = v3[3];
    bottom = v10;
  }
  if ( right <= left || bottom <= top )
  {
    LODWORD(v18.bottom) &= v2;
    LODWORD(v18.right) &= v2;
    LODWORD(v18.top) &= v2;
    LODWORD(v18.left) &= v2;
  }
  if ( !IsEmpty(&v18) )
  {
    v12 = (FLOAT *)PixelAlign((__int64)v19, (__int64)&v18);
    v18.left = *v12;
    v18.top = v12[1];
    v18.right = v12[2];
    v14 = *(_QWORD *)(v13 + 224);
    v18.bottom = v12[3];
    v15 = (*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)v14 + 168LL))(v14, &v18);
    v1 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1B4u, 0LL);
  }
  return v1;
}
