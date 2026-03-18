/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180029760
 * Callers:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@1PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x18000F5F0 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CLayerVisual@@UEAAJAEBVCMILMatrix@@AEB.c)
 * Callees:
 *     ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@AEBVCMILMatrix@@0_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@4@Z @ 0x18000F8D8 (-CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CTreeEffect@@QEAA_NAEBV-$TMil3DRect@MV.c)
 *     ?Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18000FAFC (-Get2DBoundsUsing2DInverse@CMILMatrix@@QEAA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x18001028C (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x1800102E0 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18002AF70 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18002E49C (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180040650 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@PEAV2@@Z @ 0x180195220 (-GetSourceInputBoundsUnion@CEffectBrush@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 */

__int64 __fastcall CVisual::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        CLayerVisual *this,
        CMILMatrix *a2,
        float *a3,
        __int64 a4,
        __int128 *a5,
        __int128 *a6)
{
  unsigned int v6; // esi
  __int128 v11; // xmm0
  char v13; // r9
  __int64 (*v14)(void); // rax
  _QWORD *v15; // rdi
  int v16; // eax
  unsigned int v17; // ecx
  void (__fastcall *v18)(CLayerVisual *, __int128 *, __int128 *); // rax
  int v19; // xmm3_4
  int v20; // xmm2_4
  int v21; // eax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  unsigned int v25[2]; // [rsp+20h] [rbp-E0h]
  bool FlatteningToLocalSpace; // [rsp+28h] [rbp-D8h]
  float v27[4]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v28[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+90h] [rbp-70h]
  __int128 v30; // [rsp+A0h] [rbp-60h] BYREF
  int v31; // [rsp+B0h] [rbp-50h]
  int v32; // [rsp+B4h] [rbp-4Ch]
  __int128 v33; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v34; // [rsp+C8h] [rbp-38h]
  int v35; // [rsp+D8h] [rbp-28h]
  int v36; // [rsp+DCh] [rbp-24h]
  __int128 v37; // [rsp+E0h] [rbp-20h]

  v6 = 0;
  if ( (**((_DWORD **)this + 28) & 0x200000) != 0
    && (*(_QWORD *)&v33 = CVisual::GetEffectInternal(this),
        (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v33 + 48LL))(v33, 54LL)) )
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, CMILMatrix *, float *, __int64, __int128 *, __int128 *))(*(_QWORD *)v33 + 200LL))(
            v33,
            a2,
            a3,
            a4,
            a5,
            a6);
    v6 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0xF28u);
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *))(*(_QWORD *)this + 176LL))(this) )
    {
      CLayerVisual::GetAutomaticBoundsExpansion(this);
      if ( CVisual::GetEffectiveSize(this, v27, (float *)&v33) || v13 )
      {
        v14 = *(__int64 (**)(void))(*(_QWORD *)this + 184LL);
        LODWORD(v27[1]) = v33;
        *(_QWORD *)&v33 = v14();
        FlatteningToLocalSpace = CLayerVisual::GetFlatteningToLocalSpace(this);
        *(_QWORD *)v25 = a3;
        v15 = (_QWORD *)v33;
        if ( (unsigned __int8)CTreeEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds((_QWORD *)v33) )
          return v6;
        if ( *v15 )
          CEffectBrush::GetSourceInputBoundsUnion(
            *v15,
            (char *)this + 164,
            v27,
            &v30,
            *(_QWORD *)v25,
            FlatteningToLocalSpace,
            a5,
            a6);
        v18 = *(void (__fastcall **)(CLayerVisual *, __int128 *, __int128 *))(*(_QWORD *)this + 288LL);
        v33 = *(_OWORD *)((char *)this + 164);
        v18(this, &v33, &v33);
        if ( CLayerVisual::GetFlatteningToLocalSpace(this) )
        {
          *a5 = v30;
          v11 = v33;
        }
        else
        {
          v19 = *((_DWORD *)this + 46);
          v20 = *((_DWORD *)this + 45);
          v34 = v30;
          v36 = v19;
          v30 = v33;
          v35 = v20;
          v32 = v19;
          v31 = v20;
          CMILMatrix::Transform3DBoundsHelper<1>(a2);
          CMILMatrix::Transform3DBoundsHelper<1>(a2);
          *a5 = v37;
          v11 = v34;
        }
      }
      else
      {
        *a5 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v30 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
        v11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      }
    }
    else if ( (*(unsigned __int8 (__fastcall **)(CLayerVisual *, __int64))(*(_QWORD *)this + 48LL))(this, 86LL)
           && CLayerVisual::GetFlatteningToLocalSpace(this) )
    {
      v21 = *((_DWORD *)a2 + 16);
      v22 = *((_OWORD *)a2 + 1);
      v28[0] = *(_OWORD *)a2;
      v23 = *((_OWORD *)a2 + 2);
      v29 = v21;
      v28[1] = v22;
      v24 = *((_OWORD *)a2 + 3);
      v28[2] = v23;
      v28[3] = v24;
      if ( CMILMatrix::Get2DBoundsUsing2DInverse((CMILMatrix *)v28, a3) )
      {
        v11 = v30;
        *a5 = v30;
      }
      else
      {
        *a5 = *(_OWORD *)((char *)this + 164);
        v11 = *(_OWORD *)((char *)this + 140);
      }
    }
    else
    {
      *a5 = *(_OWORD *)a3;
      v11 = *(_OWORD *)a3;
    }
    *a6 = v11;
  }
  return v6;
}
