/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800B8870
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180012590 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x180012878 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV-$TMil3DRect@MV.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180012A9C (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x1800130B8 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x18001310C (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800600B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180087C04 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18008BC4C (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x1801CB440 (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 */

__int64 __fastcall CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CLayerVisual *this,
        CMILMatrix *a2,
        float *a3,
        __int64 a4,
        __int128 *a5,
        __int128 *a6)
{
  _DWORD *v6; // rax
  unsigned int v7; // r12d
  __int128 v11; // xmm1
  char v13; // r9
  __int64 (*v14)(void); // rax
  _QWORD *v15; // r15
  struct CEffect *EffectInternal; // r13
  signed int v17; // eax
  __int64 v18; // rcx
  void (__fastcall *v19)(CLayerVisual *, __int128 *, __int128 *); // rax
  int v20; // xmm3_4
  int v21; // xmm2_4
  int v22; // eax
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  unsigned int v27[2]; // [rsp+20h] [rbp-E0h]
  bool FlatteningToLocalSpace; // [rsp+28h] [rbp-D8h]
  float v29[4]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v30[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+90h] [rbp-70h]
  __int128 v32; // [rsp+A0h] [rbp-60h] BYREF
  int v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B4h] [rbp-4Ch]
  __int128 v35; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v36; // [rsp+C8h] [rbp-38h] BYREF
  int v37; // [rsp+D8h] [rbp-28h]
  int v38; // [rsp+DCh] [rbp-24h]
  __int128 v39; // [rsp+E0h] [rbp-20h] BYREF

  v6 = (_DWORD *)*((_QWORD *)this + 28);
  v7 = 0;
  *(_QWORD *)&v35 = a4;
  if ( (*v6 & 0x200000) != 0
    && (EffectInternal = CVisual::GetEffectInternal(this),
        (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
          EffectInternal,
          56LL)) )
  {
    v17 = (*(__int64 (__fastcall **)(struct CEffect *, CMILMatrix *, float *, _QWORD, __int128 *, __int128 *))(*(_QWORD *)EffectInternal + 240LL))(
            EffectInternal,
            a2,
            a3,
            v35,
            a5,
            a6);
    v7 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0xF98u, 0LL);
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 216LL))(this) )
    {
      CLayerVisual::GetAutomaticBoundsExpansion(this);
      if ( CVisual::GetEffectiveSize(this, v29, (float *)&v35) || v13 )
      {
        v14 = *(__int64 (**)(void))(*(_QWORD *)this + 224LL);
        LODWORD(v29[1]) = v35;
        *(_QWORD *)&v35 = v14();
        FlatteningToLocalSpace = CLayerVisual::GetFlatteningToLocalSpace(this);
        *(_QWORD *)v27 = a3;
        v15 = (_QWORD *)v35;
        if ( (unsigned __int8)CTreeEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds((_QWORD *)v35) )
          return v7;
        if ( *v15 )
          CEffectBrush::GetSourceInputBoundsUnion(
            *v15,
            (char *)this + 164,
            v29,
            &v32,
            *(_QWORD *)v27,
            FlatteningToLocalSpace,
            a5,
            a6);
        v19 = *(void (__fastcall **)(CLayerVisual *, __int128 *, __int128 *))(*(_QWORD *)this + 328LL);
        v35 = *(_OWORD *)((char *)this + 164);
        v19(this, &v35, &v35);
        if ( CLayerVisual::GetFlatteningToLocalSpace(this) )
        {
          v11 = v35;
          *a5 = v32;
        }
        else
        {
          v20 = *((_DWORD *)this + 46);
          v21 = *((_DWORD *)this + 45);
          v36 = v32;
          v38 = v20;
          v32 = v35;
          v37 = v21;
          v34 = v20;
          v33 = v21;
          CMILMatrix::Transform3DBoundsHelper<1>(a2, (__int64)&v36, (__m128 *)&v39);
          CMILMatrix::Transform3DBoundsHelper<1>(a2, (__int64)&v32, (__m128 *)&v36);
          v11 = v36;
          *a5 = v39;
        }
      }
      else
      {
        *a5 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v32 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      }
    }
    else if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 91LL)
           && CLayerVisual::GetFlatteningToLocalSpace(this) )
    {
      v22 = *((_DWORD *)a2 + 16);
      v23 = *((_OWORD *)a2 + 1);
      v30[0] = *(_OWORD *)a2;
      v24 = *((_OWORD *)a2 + 2);
      v31 = v22;
      v30[1] = v23;
      v25 = *((_OWORD *)a2 + 3);
      v30[2] = v24;
      v30[3] = v25;
      if ( CMILMatrix::Get2DBoundsUsing2DInverse((CMILMatrix *)v30, a3) )
      {
        v26 = v32;
        *a5 = v32;
        *a6 = v26;
        return v7;
      }
      *a5 = *(_OWORD *)((char *)this + 164);
      v11 = *(_OWORD *)((char *)this + 140);
    }
    else
    {
      *a5 = *(_OWORD *)a3;
      v11 = *(_OWORD *)a3;
    }
    *a6 = v11;
  }
  return v7;
}
