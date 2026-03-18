/*
 * XREFs of ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x1801826BC
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801840C8 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 * Callees:
 *     ?BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18006CD24 (-BeginIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x1800BF920 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ??0?$CMergedRectBase@$01@@QEAA@XZ @ 0x180181A58 (--0-$CMergedRectBase@$01@@QEAA@XZ.c)
 *     ?Add@?$CMergedRectBase@$01@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180182378 (-Add@-$CMergedRectBase@$01@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 *     ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x180185A4C (-Optimize@-$CMergedRectBase@$01@@IEAAX_N@Z.c)
 */

void __fastcall COverlayContext::CheckAndComputeDesktopPlaneSplit(
        COverlayContext *this,
        FastRegion::Internal::CRgnData **a2,
        unsigned int *a3,
        struct tagRECT *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v10; // rcx
  unsigned int v11; // ecx
  signed __int64 v12; // rdx
  signed __int64 v13; // r8
  LONG *p_right; // r9
  __int64 v15; // r10
  float v16; // xmm0_4
  float v17; // eax
  double v18; // xmm0_8
  int v19; // eax
  double v20; // xmm0_8
  int v21; // [rsp+20h] [rbp-49h]
  float v22; // [rsp+20h] [rbp-49h]
  _DWORD v23[4]; // [rsp+28h] [rbp-41h]
  _BYTE v24[8]; // [rsp+38h] [rbp-31h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-29h]
  _DWORD *v26; // [rsp+48h] [rbp-21h]
  __int64 v27; // [rsp+50h] [rbp-19h]
  int v28; // [rsp+58h] [rbp-11h]
  char v29[4]; // [rsp+68h] [rbp-1h] BYREF
  char v30; // [rsp+6Ch] [rbp+3h] BYREF
  unsigned int v31; // [rsp+90h] [rbp+27h]
  struct D2D_RECT_F v32; // [rsp+98h] [rbp+2Fh] BYREF

  CMergedRectBase<2>::CMergedRectBase<2>(v29);
  FastRegion::Internal::CRgnData::BeginIterator(*a2, (struct FastRegion::CRegion::Iterator *)v24);
  while ( (unsigned __int64)v26 < v25 )
  {
    v23[1] = *v26;
    v23[3] = v26[2];
    v8 = 2 * v28;
    v23[0] = *(_DWORD *)(v27 + 4 * v8);
    v23[2] = *(_DWORD *)(v27 + 4 * v8 + 4);
    for ( i = 0LL; i < 4; ++i )
      *(float *)((char *)&v32.left + i * 4) = (float)(int)v23[i];
    CMergedRectBase<2>::Add((__int64)v29, &v32);
    FastRegion::Internal::CRgnData::StepIterator(v10, (struct FastRegion::CRegion::Iterator *)v24);
  }
  LOBYTE(v7) = 1;
  CMergedRectBase<2>::Optimize(v29, v7);
  v11 = v31;
  if ( v31 )
  {
    v12 = v29 - (char *)a4;
    v13 = &v30 - (char *)a4;
    p_right = &a4->right;
    v15 = v31;
    do
    {
      v16 = *(float *)((char *)p_right + v12 - 8) + 6291456.25;
      v17 = v16;
      v18 = *(float *)((char *)p_right + v13 - 8);
      *(p_right - 2) = (int)(LODWORD(v17) << 10) >> 11;
      *(float *)&v18 = v18 + 6291456.25;
      v19 = LODWORD(v18);
      v20 = *(float *)((char *)p_right + v12);
      *(p_right - 1) = v19 << 10 >> 11;
      *(float *)&v20 = v20 + 6291456.25;
      v21 = LODWORD(v20);
      LODWORD(v20) = *(LONG *)((char *)p_right + v13);
      *p_right = v21 << 10 >> 11;
      v22 = *(float *)&v20 + 6291456.25;
      p_right[1] = (int)(LODWORD(v22) << 10) >> 11;
      p_right += 4;
      --v15;
    }
    while ( v15 );
  }
  *a3 = v11;
}
