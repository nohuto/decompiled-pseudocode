/*
 * XREFs of ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18008B2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060DA0 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180070580 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x180089284 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18008B4D0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x18008B6D8 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800B908C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?SubmitComposeTopContent@CWindowNode@@AEAA_NAEBVCMILMatrix@@PEBVCShapePtr@@@Z @ 0x180219D98 (-SubmitComposeTopContent@CWindowNode@@AEAA_NAEBVCMILMatrix@@PEBVCShapePtr@@@Z.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRegion(
        CWindowNode *this,
        CDirtyRegion *a2,
        struct CMILMatrix *a3,
        int a4,
        FLOAT *a5)
{
  FLOAT *v5; // r12
  const struct CMILMatrix *v6; // r14
  int v7; // esi
  int v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // r8
  unsigned int v14; // ebx
  unsigned int v15; // r15d
  unsigned int v16; // eax
  unsigned int v17; // r14d
  unsigned int v18; // r14d
  _BYTE *v19; // r12
  unsigned int v20; // r15d
  float *v21; // rsi
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm2_4
  float v25; // xmm3_4
  float left; // xmm1_4
  float bottom; // xmm4_4
  float right; // xmm3_4
  float top; // xmm2_4
  int v30; // eax
  unsigned int v31; // ecx
  bool v32; // zf
  FLOAT v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm6_4
  float v37; // xmm5_4
  float v38; // xmm0_4
  __int64 v39; // rcx
  int v40; // eax
  unsigned int v41; // ecx
  struct D2D_RECT_F v44; // [rsp+40h] [rbp-31h] BYREF
  unsigned __int64 v45; // [rsp+50h] [rbp-21h] BYREF
  float v46; // [rsp+58h] [rbp-19h]
  float v47; // [rsp+5Ch] [rbp-15h]

  v5 = a5;
  v6 = a3;
  v7 = *((_DWORD *)this + 158);
  *(_QWORD *)&v44.left = a5;
  v10 = CVisual::CollectAdditionalDirtyRegion(this, a2, 0LL);
  v14 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v10, 0x330u, 0LL);
    return v14;
  }
  if ( v7 )
  {
    LOBYTE(v11) = 1;
    v15 = 0;
    CMergedRectBase<4>::Optimize((char *)this + 560, v11);
    v16 = *((_DWORD *)this + 158);
    v17 = v16;
    if ( v16 > 1 && v16 < 4 )
    {
      v18 = 0;
      v19 = (char *)this + 624;
      do
      {
        if ( *v19 )
        {
          if ( v18 != v15 )
            CMergedRectBase<4>::SwapExisting((__int64)this + 560, v15, v18);
          ++v15;
        }
        ++v18;
        ++v19;
      }
      while ( v18 < 4 );
      v17 = *((_DWORD *)this + 158);
      v5 = *(FLOAT **)&v44.left;
    }
    v20 = 0;
    if ( v17 )
    {
      v21 = (float *)((char *)this + 568);
      do
      {
        v22 = *(v21 - 2);
        v23 = *(v21 - 1);
        v24 = *v21;
        v25 = v21[1];
        v45 = __PAIR64__(LODWORD(v23), LODWORD(v22));
        v46 = v24;
        v47 = v25;
        if ( a4 == 1 || a4 == 6 )
        {
          *(float *)&v45 = v22 - 0.5;
          *((float *)&v45 + 1) = v23 - 0.5;
          v46 = v24 + 0.5;
          v47 = v25 + 0.5;
        }
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)a3, (float *)&v45, &v44.left);
        left = v44.left;
        if ( v5 )
        {
          v34 = *v5;
          if ( *v5 > v44.left )
          {
            v44.left = *v5;
            left = v34;
          }
          top = v44.top;
          v35 = v5[1];
          v36 = v44.top;
          if ( v35 > v44.top )
          {
            v44.top = v5[1];
            top = v35;
            v36 = v35;
          }
          right = v44.right;
          v37 = v44.right;
          if ( v44.right > v5[2] )
          {
            v44.right = v5[2];
            right = v44.right;
            v37 = v44.right;
          }
          bottom = v44.bottom;
          v38 = v44.bottom;
          if ( v44.bottom > v5[3] )
          {
            v44.bottom = v5[3];
            bottom = v44.bottom;
            v38 = v44.bottom;
          }
          if ( v37 <= left || v38 <= v36 )
          {
            bottom = 0.0;
            right = 0.0;
            top = 0.0;
            v44.bottom = 0.0;
            left = 0.0;
            v44.right = 0.0;
            *(_QWORD *)&v44.left = 0LL;
          }
        }
        else
        {
          bottom = v44.bottom;
          right = v44.right;
          top = v44.top;
        }
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= left
          && right >= *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
          || *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= top
          && bottom >= *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
        {
          CDirtyRegion::SetFullDirty(a2);
        }
        if ( *((_BYTE *)a2 + 2883) || *((_DWORD *)a2 + 714) )
        {
          v14 = 0;
        }
        else
        {
          v30 = CDirtyRegion::_Add(a2, (__int64)this, 0, &v44);
          v14 = v30;
          if ( v30 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x1A8u, 0LL);
          if ( (v14 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v14, 0x368u, 0LL);
            return v14;
          }
        }
        ++v20;
        v21 += 4;
      }
      while ( v20 < v17 );
    }
    v6 = a3;
  }
  *((_BYTE *)this + 93) |= 0x80u;
  v32 = *((_BYTE *)this + 938) == 0;
  *((_QWORD *)this + 29) = *(_QWORD *)(*((_QWORD *)this + 2) + 384LL);
  if ( !v32 )
  {
    v39 = *((_QWORD *)this + 93);
    if ( v39 )
    {
      v45 = 0LL;
      LOBYTE(v46) = 0;
      LOBYTE(v13) = 1;
      v40 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, __int64))(*(_QWORD *)v39 + 184LL))(v39, &v45, v13);
      v14 = v40;
      if ( v40 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x375u, 0LL);
      else
        CWindowNode::SubmitComposeTopContent(this, v6, (const struct CShapePtr *)&v45);
      CShapePtr::Release((CShapePtr *)&v45);
    }
  }
  return v14;
}
