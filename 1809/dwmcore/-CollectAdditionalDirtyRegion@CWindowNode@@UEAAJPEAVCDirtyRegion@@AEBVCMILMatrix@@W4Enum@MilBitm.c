/*
 * XREFs of ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18002EF10
 * Callers:
 *     <none>
 * Callees:
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002F61C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18002F720 (-CollectAdditionalDirtyRegion@CVisual@@MEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapIn.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003F790 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18005CB5C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800A98DC (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DBCB0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?SubmitComposeTopContent@CWindowNode@@AEAA_NAEBVCMILMatrix@@PEBVCShapePtr@@@Z @ 0x1801BA0E0 (-SubmitComposeTopContent@CWindowNode@@AEAA_NAEBVCMILMatrix@@PEBVCShapePtr@@@Z.c)
 */

__int64 __fastcall CWindowNode::CollectAdditionalDirtyRegion(
        CWindowNode *this,
        CDirtyRegion *a2,
        struct CMILMatrix *a3,
        int a4,
        float *a5)
{
  const struct CMILMatrix *v5; // r12
  int v6; // esi
  int v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // r8
  unsigned int v12; // ebx
  unsigned int v13; // esi
  __int64 v14; // r12
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm3_4
  int v19; // eax
  unsigned int v20; // ecx
  bool v21; // zf
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm4_4
  float v29; // xmm3_4
  float v30; // xmm1_4
  __int64 v31; // rcx
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // [rsp+30h] [rbp-40h] BYREF
  int v35; // [rsp+34h] [rbp-3Ch]
  struct CMILMatrix *v36; // [rsp+38h] [rbp-38h]
  __int64 v37; // [rsp+40h] [rbp-30h] BYREF
  float v38; // [rsp+48h] [rbp-28h]
  float v39; // [rsp+4Ch] [rbp-24h]
  unsigned __int64 v40; // [rsp+50h] [rbp-20h] BYREF
  float v41; // [rsp+58h] [rbp-18h]
  float v42; // [rsp+5Ch] [rbp-14h]

  v5 = a3;
  v6 = *((_DWORD *)this + 158);
  v35 = a4;
  v36 = a3;
  v9 = CVisual::CollectAdditionalDirtyRegion(this);
  v12 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x342u);
    return v12;
  }
  if ( v6 )
  {
    CMergedRectBase<4>::GetRects((char *)this + 560, &v34, &v37);
    v13 = 0;
    if ( v34 )
    {
      v14 = v37;
      while ( 1 )
      {
        v15 = *(float *)(v14 + 16LL * v13);
        v16 = *(float *)(v14 + 16LL * v13 + 4);
        v17 = *(float *)(v14 + 16LL * v13 + 8);
        v18 = *(float *)(v14 + 16LL * v13 + 12);
        v40 = __PAIR64__(LODWORD(v16), LODWORD(v15));
        v41 = v17;
        v42 = v18;
        if ( v35 == 1 || v35 == 6 )
        {
          *(float *)&v40 = v15 - 0.5;
          *((float *)&v40 + 1) = v16 - 0.5;
          v41 = v17 + 0.5;
          v42 = v18 + 0.5;
        }
        CMILMatrix::Transform2DBoundsHelper<1>(v36, &v40, &v37);
        if ( a5 )
        {
          v23 = *a5;
          v24 = *(float *)&v37;
          if ( *a5 > *(float *)&v37 )
          {
            *(float *)&v37 = *a5;
            v24 = v23;
          }
          v25 = a5[1];
          v26 = *((float *)&v37 + 1);
          if ( v25 > *((float *)&v37 + 1) )
          {
            *((float *)&v37 + 1) = a5[1];
            v26 = v25;
          }
          v27 = a5[2];
          v28 = v38;
          if ( v38 > v27 )
          {
            v38 = a5[2];
            v28 = v27;
          }
          v29 = a5[3];
          v30 = v39;
          if ( v39 > v29 )
          {
            v39 = a5[3];
            v30 = v29;
          }
          if ( v28 <= v24 || v30 <= v26 )
          {
            v39 = 0.0;
            v38 = 0.0;
            v37 = 0LL;
          }
        }
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(&v37) )
          CDirtyRegion::SetFullDirty(a2);
        if ( *((_BYTE *)a2 + 2883) || *((_DWORD *)a2 + 714) )
        {
          v12 = 0;
        }
        else
        {
          v19 = CDirtyRegion::_Add(a2);
          v12 = v19;
          if ( v19 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x1ABu);
          if ( (v12 & 0x80000000) != 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v12, 0x37Au);
            return v12;
          }
        }
        if ( ++v13 >= v34 )
        {
          v5 = v36;
          break;
        }
      }
    }
  }
  *((_BYTE *)this + 93) |= 0x80u;
  v21 = *((_BYTE *)this + 954) == 0;
  *((_QWORD *)this + 29) = *(_QWORD *)(*((_QWORD *)this + 2) + 368LL);
  if ( !v21 )
  {
    v31 = *((_QWORD *)this + 95);
    if ( v31 )
    {
      v40 = 0LL;
      LOBYTE(v41) = 0;
      LOBYTE(v11) = 1;
      v32 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, __int64))(*(_QWORD *)v31 + 184LL))(v31, &v40, v11);
      v12 = v32;
      if ( v32 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x387u);
      else
        CWindowNode::SubmitComposeTopContent(this, v5, (const struct CShapePtr *)&v40);
      CShapePtr::Release((CShapePtr *)&v40);
    }
  }
  return v12;
}
