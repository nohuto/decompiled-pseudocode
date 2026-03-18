/*
 * XREFs of ?NotifyRenderedRect@CLocalAppRenderTarget@@IEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1802505E0
 * Callers:
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ @ 0x180250998 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x1800B130C (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLocalAppRenderTarget::NotifyRenderedRect(__int64 a1, FLOAT *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  float v4; // xmm0_4
  double v5; // xmm2_8
  float v6; // xmm1_4
  FLOAT v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm3_4
  double v10; // xmm3_8
  float v11; // xmm3_4
  FLOAT *v12; // rax
  __int64 v13; // r10
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  struct D2D_RECT_F v18; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v19[16]; // [rsp+40h] [rbp-20h] BYREF

  v2 = *(_DWORD *)(a1 + 88);
  v3 = 0;
  v18.left = 0.0;
  HIDWORD(v5) = 0;
  v18.top = 0.0;
  v4 = 0.0;
  *(float *)&v5 = (float)v2;
  v6 = (float)*(int *)(a1 + 92);
  v18.right = (float)v2;
  v18.bottom = v6;
  if ( a2 )
  {
    v7 = *a2;
    v8 = 0.0;
    if ( *a2 > 0.0 )
    {
      v18.left = *a2;
      v8 = v7;
    }
    v9 = a2[1];
    if ( v9 > 0.0 )
    {
      v18.top = a2[1];
      v4 = v9;
    }
    *(_QWORD *)&v10 = *((unsigned int *)a2 + 2);
    if ( *(float *)&v5 > *(float *)&v10 )
    {
      v18.right = a2[2];
      v5 = v10;
    }
    v11 = a2[3];
    if ( v6 > v11 )
    {
      v18.bottom = a2[3];
      v6 = v11;
    }
    if ( *(float *)&v5 <= v8 || v6 <= v4 )
    {
      v18.bottom = 0.0;
      v18.right = 0.0;
      v18.top = 0.0;
      v18.left = 0.0;
    }
  }
  if ( !IsEmpty(&v18) )
  {
    v12 = (FLOAT *)PixelAlign((__int64)v19, &v18, v5);
    v18.left = *v12;
    v18.top = v12[1];
    v18.right = v12[2];
    v14 = *(_QWORD *)(v13 + 176);
    v18.bottom = v12[3];
    v15 = (*(__int64 (__fastcall **)(__int64, struct D2D_RECT_F *))(*(_QWORD *)v14 + 168LL))(v14, &v18);
    v3 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0xFEu, 0LL);
  }
  return v3;
}
