/*
 * XREFs of ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x180162EF0
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019B020 (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x18008DBB0 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18016240C (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ??$Is2DTransformExceptForZTranslation@$00@CMILMatrix@@AEBA_NXZ @ 0x1801E21E8 (--$Is2DTransformExceptForZTranslation@$00@CMILMatrix@@AEBA_NXZ.c)
 */

__int64 __fastcall CDrawingContext::DrawInk(
        CDrawingContext *this,
        struct ID2D1Ink *a2,
        const struct _D3DCOLORVALUE *a3,
        struct ID2D1InkStyle *a4)
{
  unsigned __int64 v4; // r15
  char v9; // si
  const struct CMILMatrix *TopByReference; // rax
  __int128 *v11; // rcx
  __int128 v12; // xmm0
  __int128 v13; // xmm2
  __int128 v14; // xmm3
  __int128 v15; // xmm4
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  float v22; // xmm1_4
  int v23; // ecx
  int v24; // eax
  __int64 v25; // r10
  __int64 v26; // r11
  int v27; // eax
  __int64 v28; // rcx
  _OWORD v30[4]; // [rsp+40h] [rbp-99h] BYREF
  int v31; // [rsp+80h] [rbp-59h]
  __int128 v32; // [rsp+C0h] [rbp-19h]
  __int128 v33; // [rsp+D0h] [rbp-9h] BYREF

  v4 = (unsigned __int64)this + 8;
  v9 = 0;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
  {
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    if ( !(unsigned __int8)CMILMatrix::Is2DTransformExceptForZTranslation<1>(TopByReference) )
    {
      v18 = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, -2147467263, 0x666u);
      return v18;
    }
    v12 = v11[3];
    v31 = 0;
    v13 = *v11;
    v14 = v11[1];
    v15 = v11[2];
    v32 = v12;
    DWORD2(v32) = 0;
    v30[3] = v32;
    v30[0] = v13;
    v30[1] = v14;
    v30[2] = v15;
    v16 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v30, 0, 1);
    v18 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x661u);
      return v18;
    }
    v9 = 1;
  }
  v19 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v18 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x66Au);
  }
  else
  {
    v21 = *((_DWORD *)this + 816);
    v33 = *(_OWORD *)&a3->r;
    if ( v21 )
      v22 = *(float *)(*((_QWORD *)this + 410) + 4LL * (unsigned int)(v21 - 1));
    else
      v22 = FLOAT_1_0;
    v23 = *((_DWORD *)this + 64);
    *((float *)&v33 + 3) = *((float *)&v33 + 3) * v22;
    v24 = D2DPrimitiveBlendFromMilCompositingMode(v23);
    v27 = (*(__int64 (__fastcall **)(__int64, unsigned __int64, struct ID2D1Ink *, __int128 *, struct ID2D1InkStyle *, bool, int))(v25 + 176))(
            v26,
            v4 & -(__int64)(this != 0LL),
            a2,
            &v33,
            a4,
            *((_DWORD *)this + 63) != 0,
            v24);
    v18 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x676u);
  }
  if ( v9 )
    CDrawingContext::PopTransformInternal(this, 1);
  return v18;
}
