/*
 * XREFs of ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x18016C100
 * Callers:
 *     ?Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180215070 (-Draw@CInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 * Callees:
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180042990 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007DB04 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008E940 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18016B598 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ??$Is2DTransformExceptForZTranslation@$00@CMILMatrix@@AEBA_NXZ @ 0x18021AFD0 (--$Is2DTransformExceptForZTranslation@$00@CMILMatrix@@AEBA_NXZ.c)
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
  signed int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  signed int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  float v22; // xmm1_4
  int v23; // ecx
  int v24; // eax
  __int64 (__fastcall *v25)(__int64, unsigned __int64, struct ID2D1Ink *, __int128 *, struct ID2D1InkStyle *, bool, int); // r10
  __int64 v26; // r11
  signed int v27; // eax
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
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v11, 0LL, 0, 0x80004001, 0x663u, 0LL);
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
    v16 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v30, 0LL, 1);
    v18 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x65Eu, 0LL);
      return v18;
    }
    v9 = 1;
  }
  v19 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v18 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x667u, 0LL);
  }
  else
  {
    v21 = *((_DWORD *)this + 816);
    v33 = *(_OWORD *)&a3->r;
    if ( v21 )
      v22 = *(float *)(*((_QWORD *)this + 410) + 4LL * (unsigned int)(v21 - 1));
    else
      v22 = *(float *)&FLOAT_1_0;
    v23 = *((_DWORD *)this + 64);
    *((float *)&v33 + 3) = *((float *)&v33 + 3) * v22;
    v24 = D2DPrimitiveBlendFromMilCompositingMode(v23);
    v27 = v25(v26, v4 & -(__int64)(this != 0LL), a2, &v33, a4, *((_DWORD *)this + 63) != 0, v24);
    v18 = v27;
    if ( v27 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x673u, 0LL);
  }
  if ( v9 )
    CDrawingContext::PopTransformInternal(this, 1);
  return v18;
}
