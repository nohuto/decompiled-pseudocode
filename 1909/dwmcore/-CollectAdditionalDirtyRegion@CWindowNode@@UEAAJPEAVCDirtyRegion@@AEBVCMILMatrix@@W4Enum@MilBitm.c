/*
 * XREFs of ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800797D0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180029740 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180033BE4 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x1800799F0 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x180079BF8 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x18007A268 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008A330 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?SubmitComposeTopContent@CWindowNode@@AEAA_NAEBVCMILMatrix@@PEBVCShapePtr@@@Z @ 0x1802186A8 (-SubmitComposeTopContent@CWindowNode@@AEAA_NAEBVCMILMatrix@@PEBVCShapePtr@@@Z.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRegion(
        CWindowNode *this,
        CDirtyRegion *a2,
        struct CMILMatrix *a3,
        int a4,
        __int64 a5)
{
  __int64 v5; // r12
  const struct CMILMatrix *v6; // r14
  int v7; // esi
  signed int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
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
  float v26; // xmm1_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  signed int v30; // eax
  __int64 v31; // rcx
  bool v32; // zf
  float v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm6_4
  float v37; // xmm5_4
  float v38; // xmm0_4
  __int64 v39; // rcx
  signed int v40; // eax
  __int64 v41; // rcx
  __int64 v44; // [rsp+40h] [rbp-31h] BYREF
  float v45; // [rsp+48h] [rbp-29h]
  float v46; // [rsp+4Ch] [rbp-25h]
  unsigned __int64 v47; // [rsp+50h] [rbp-21h] BYREF
  float v48; // [rsp+58h] [rbp-19h]
  float v49; // [rsp+5Ch] [rbp-15h]

  v5 = a5;
  v6 = a3;
  v7 = *((_DWORD *)this + 158);
  v44 = a5;
  v10 = CVisual::CollectAdditionalDirtyRegion(this, a2, 0LL);
  v14 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v10, 0x331u, 0LL);
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
            CMergedRectBase<4>::SwapExisting((char *)this + 560, v15, v18);
          ++v15;
        }
        ++v18;
        ++v19;
      }
      while ( v18 < 4 );
      v17 = *((_DWORD *)this + 158);
      v5 = v44;
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
        v47 = __PAIR64__(LODWORD(v23), LODWORD(v22));
        v48 = v24;
        v49 = v25;
        if ( a4 == 1 || a4 == 6 )
        {
          *(float *)&v47 = v22 - 0.5;
          *((float *)&v47 + 1) = v23 - 0.5;
          v48 = v24 + 0.5;
          v49 = v25 + 0.5;
        }
        CMILMatrix::Transform2DBoundsHelper<1>((__int64)a3, (float *)&v47, (float *)&v44);
        v26 = *(float *)&v44;
        if ( v5 )
        {
          v34 = *(float *)v5;
          if ( *(float *)v5 > *(float *)&v44 )
          {
            LODWORD(v44) = *(_DWORD *)v5;
            v26 = v34;
          }
          v29 = *((float *)&v44 + 1);
          v35 = *(float *)(v5 + 4);
          v36 = *((float *)&v44 + 1);
          if ( v35 > *((float *)&v44 + 1) )
          {
            HIDWORD(v44) = *(_DWORD *)(v5 + 4);
            v29 = v35;
            v36 = v35;
          }
          v28 = v45;
          v37 = v45;
          if ( v45 > *(float *)(v5 + 8) )
          {
            v45 = *(float *)(v5 + 8);
            v28 = v45;
            v37 = v45;
          }
          v27 = v46;
          v38 = v46;
          if ( v46 > *(float *)(v5 + 12) )
          {
            v46 = *(float *)(v5 + 12);
            v27 = v46;
            v38 = v46;
          }
          if ( v37 <= v26 || v38 <= v36 )
          {
            v27 = 0.0;
            v28 = 0.0;
            v29 = 0.0;
            v46 = 0.0;
            v26 = 0.0;
            v45 = 0.0;
            v44 = 0LL;
          }
        }
        else
        {
          v27 = v46;
          v28 = v45;
          v29 = *((float *)&v44 + 1);
        }
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= v26
          && v28 >= *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
          || *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= v29
          && v27 >= *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
        {
          CDirtyRegion::SetFullDirty(a2);
        }
        if ( *((_BYTE *)a2 + 2883) || *((_DWORD *)a2 + 714) )
        {
          v14 = 0;
        }
        else
        {
          v30 = CDirtyRegion::_Add(a2);
          v14 = v30;
          if ( v30 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x1A8u, 0LL);
          if ( (v14 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v14, 0x369u, 0LL);
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
      v47 = 0LL;
      LOBYTE(v48) = 0;
      LOBYTE(v13) = 1;
      v40 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, __int64))(*(_QWORD *)v39 + 184LL))(v39, &v47, v13);
      v14 = v40;
      if ( v40 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x376u, 0LL);
      else
        CWindowNode::SubmitComposeTopContent(this, v6, (const struct CShapePtr *)&v47);
      CShapePtr::Release((CShapePtr *)&v47);
    }
  }
  return v14;
}
