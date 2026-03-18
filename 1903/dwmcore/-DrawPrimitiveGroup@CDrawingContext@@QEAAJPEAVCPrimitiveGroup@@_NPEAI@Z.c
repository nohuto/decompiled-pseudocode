/*
 * XREFs of ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18016DEE8
 * Callers:
 *     ?DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180079C90 (-DrawWorker@CPrimitiveGroup@@AEAAJ_NPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MU.c)
 * Callees:
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180019460 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18002B3C0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?DoesContain@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180053490 (-DoesContain@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800535C0 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800583E0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180070580 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18007A99C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7F40 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016D0A8 (-DrawColorRectangleAsDrawList@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUMilRec.c)
 *     ?DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z @ 0x18016D9E0 (-DrawLegacyD2DCommandList@CDrawingContext@@AEAAJPEAUID2D1PrivateCompositorCommandList@@M_NI@Z.c)
 *     ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x1801C650C (-GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext.c)
 */

__int64 __fastcall CDrawingContext::DrawPrimitiveGroup(
        CDrawingContext *this,
        struct CPrimitiveGroup *a2,
        __int64 a3,
        unsigned int *a4)
{
  unsigned int v7; // esi
  char v8; // r15
  __int64 v9; // rdx
  CDrawingContext *v10; // rcx
  char v11; // r8
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  signed int v15; // eax
  __int64 v16; // rcx
  signed int v17; // eax
  __int64 v18; // rcx
  int v19; // eax
  float v20; // xmm6_4
  float v21; // xmm2_4
  const struct CMILMatrix *TopByReference; // rax
  __int64 v23; // rcx
  signed int ClippedD2D1CommandListForContext; // eax
  __int64 v25; // rcx
  signed int v26; // eax
  __int64 v27; // rcx
  signed int v28; // eax
  __int64 v29; // rcx
  signed int v30; // eax
  __int64 v31; // rcx
  struct ID2D1PrivateCompositorCommandList *v33; // [rsp+30h] [rbp-40h] BYREF
  __int128 v34; // [rsp+38h] [rbp-38h] BYREF
  struct D2D_RECT_F v35; // [rsp+48h] [rbp-28h] BYREF

  v33 = 0LL;
  v7 = 0;
  v8 = 1;
  if ( CDrawingContext::IsBounding(this) )
  {
    v12 = (*(__int64 (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, struct D2D_RECT_F *))(*(_QWORD *)v9 + 208LL))(
            a2,
            0LL,
            0LL,
            &v35);
    v14 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x6DDu, 0LL);
    }
    else
    {
      *(_QWORD *)&v34 = 0x3F8000003F800000LL;
      *((_QWORD *)&v34 + 1) = 0x3F8000003F800000LL;
      v15 = CDrawingContext::DrawSolidRectangle(this, &v35, &v34);
      v14 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x6E0u, 0LL);
    }
    goto LABEL_29;
  }
  if ( v11 )
  {
    v7 = *(_DWORD *)(v9 + 572);
    v8 = *(_BYTE *)(v9 + 576);
    v34 = *(_OWORD *)(v9 + 556);
  }
  v17 = CDrawingContext::ApplyRenderStateInternal(v10, 0);
  v14 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x6ECu, 0LL);
    goto LABEL_29;
  }
  v19 = *((_DWORD *)this + 816);
  if ( v19 )
    v20 = *(float *)(*((_QWORD *)this + 410) + 4LL * (unsigned int)(v19 - 1));
  else
    v20 = *(float *)&FLOAT_1_0;
  if ( v7 )
  {
    v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20 - 1.0)) & _xmm);
    if ( v21 >= 0.0000011920929 )
      goto LABEL_16;
    if ( v8 )
      goto LABEL_18;
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    if ( CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)TopByReference) )
    {
      CMILMatrix::Transform2DBoundsHelper<1>(v23, (float *)&v34, &v35.left);
      CScopedClipStack::GetClipBoundsWorld((__int64)this + 1008, (__int64)&v34);
      v7 &= -TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesContain(&v35.left, (float *)&v34);
    }
    else
    {
LABEL_16:
      v7 = 0;
    }
  }
LABEL_18:
  ClippedD2D1CommandListForContext = CPrimitiveGroup::GetClippedD2D1CommandListForContext(
                                       a2,
                                       (struct ID2DContextOwner *)(((unsigned __int64)this + 8) & -(__int64)(this != 0LL)),
                                       *((struct ID2DContext **)this + 48),
                                       *((struct CPolygon **)this + 439),
                                       &v33);
  v14 = ClippedD2D1CommandListForContext;
  if ( ClippedD2D1CommandListForContext < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, ClippedD2D1CommandListForContext, 0x71Eu, 0LL);
    goto LABEL_29;
  }
  v26 = CDrawingContext::DrawLegacyD2DCommandList(this, v33, v20);
  v14 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x723u, 0LL);
    goto LABEL_29;
  }
  if ( !CCommonRegistryData::m_fRenderPathTestMode )
    goto LABEL_25;
  v28 = (*(__int64 (__fastcall **)(struct CPrimitiveGroup *, _QWORD, _QWORD, struct D2D_RECT_F *, unsigned int))(*(_QWORD *)a2 + 208LL))(
          a2,
          0LL,
          0LL,
          &v35,
          v7);
  v14 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x72Au, 0LL);
    goto LABEL_29;
  }
  *(_QWORD *)&v34 = 0LL;
  *((float *)&v34 + 2) = v35.right - v35.left;
  *((float *)&v34 + 3) = v35.bottom - v35.top;
  v30 = CDrawingContext::DrawColorRectangleAsDrawList(this, (__int128 *)((char *)this + 6328), (__int64)&v34);
  v14 = v30;
  if ( v30 >= 0 )
  {
LABEL_25:
    *a4 = v7;
    goto LABEL_29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x72Du, 0LL);
LABEL_29:
  ReleaseInterface<IBitmapLock>((__int64 *)&v33);
  return v14;
}
