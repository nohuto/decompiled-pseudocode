/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x1800BB4A0
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18000D5A0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18000D888 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV-$TMil3DRect@MV.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000DAAC (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x18000E0C8 (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x18000E11C (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029BA0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x180066F00 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18007FADC (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x1801C9CA0 (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 */

__int64 __fastcall CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CLayerVisual *this,
        __int64 a2,
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
  char FlatteningToLocalSpace; // al
  _QWORD *v16; // r15
  struct CEffect *EffectInternal; // r13
  signed int v18; // eax
  __int64 v19; // rcx
  void (__fastcall *v20)(CLayerVisual *, __int128 *, __int128 *); // rax
  int v21; // xmm3_4
  int v22; // xmm2_4
  int v23; // eax
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 v28; // [rsp+20h] [rbp-E0h]
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
    v18 = (*(__int64 (__fastcall **)(struct CEffect *, __int64, float *, _QWORD, __int128 *, __int128 *))(*(_QWORD *)EffectInternal + 240LL))(
            EffectInternal,
            a2,
            a3,
            v35,
            a5,
            a6);
    v7 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0xF98u, 0LL);
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
        v28 = (__int64)a3;
        v16 = (_QWORD *)v35;
        if ( (unsigned __int8)CTreeEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
                                (_QWORD *)v35,
                                (int)this + 164,
                                (int)v29,
                                a2,
                                v28,
                                FlatteningToLocalSpace,
                                (__int64)a5,
                                (__int64)a6) )
          return v7;
        if ( *v16 )
          CEffectBrush::GetSourceInputBoundsUnion(*v16, (char *)this + 164, v29, &v32);
        v20 = *(void (__fastcall **)(CLayerVisual *, __int128 *, __int128 *))(*(_QWORD *)this + 328LL);
        v35 = *(_OWORD *)((char *)this + 164);
        v20(this, &v35, &v35);
        if ( CLayerVisual::GetFlatteningToLocalSpace(this) )
        {
          v11 = v35;
          *a5 = v32;
        }
        else
        {
          v21 = *((_DWORD *)this + 46);
          v22 = *((_DWORD *)this + 45);
          v36 = v32;
          v38 = v21;
          v32 = v35;
          v37 = v22;
          v34 = v21;
          v33 = v22;
          CMILMatrix::Transform3DBoundsHelper<1>(a2, (float *)&v36, (__m128 *)&v39);
          CMILMatrix::Transform3DBoundsHelper<1>(a2, (float *)&v32, (__m128 *)&v36);
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
      v23 = *(_DWORD *)(a2 + 64);
      v24 = *(_OWORD *)(a2 + 16);
      v30[0] = *(_OWORD *)a2;
      v25 = *(_OWORD *)(a2 + 32);
      v31 = v23;
      v30[1] = v24;
      v26 = *(_OWORD *)(a2 + 48);
      v30[2] = v25;
      v30[3] = v26;
      if ( CMILMatrix::Get2DBoundsUsing2DInverse((CMILMatrix *)v30, a3) )
      {
        v27 = v32;
        *a5 = v32;
        *a6 = v27;
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
