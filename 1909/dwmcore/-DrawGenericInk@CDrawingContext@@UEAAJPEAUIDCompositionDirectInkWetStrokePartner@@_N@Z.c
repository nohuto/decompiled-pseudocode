/*
 * XREFs of ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x18016BF20
 * Callers:
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180213960 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?IsIn3DMode@CDrawingContext@@UEBA_NXZ @ 0x180042990 (-IsIn3DMode@CDrawingContext@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007DB04 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x18008E940 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?D2DPrimitiveBlendFromMilCompositingMode@@YA?AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@@@Z @ 0x18016B598 (-D2DPrimitiveBlendFromMilCompositingMode@@YA-AW4D2D1_PRIMITIVE_BLEND@@W4Enum@MilCompositingMode@.c)
 *     ??$Is2DTransformExceptForZTranslation@$00@CMILMatrix@@AEBA_NXZ @ 0x18021AFD0 (--$Is2DTransformExceptForZTranslation@$00@CMILMatrix@@AEBA_NXZ.c)
 */

__int64 __fastcall CDrawingContext::DrawGenericInk(
        CDrawingContext *this,
        struct IDCompositionDirectInkWetStrokePartner *a2,
        char a3)
{
  char v6; // si
  const struct CMILMatrix *TopByReference; // rax
  __int128 *v8; // rcx
  __int128 v9; // xmm0
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int128 v12; // xmm4
  signed int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // ebx
  signed int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // xmm0_4
  int v20; // eax
  __int64 (__fastcall *v21)(__int64, char *, struct IDCompositionDirectInkWetStrokePartner *, bool, int, int, char); // r10
  __int64 v22; // r11
  signed int v23; // eax
  __int64 v24; // rcx
  _OWORD v26[4]; // [rsp+40h] [rbp-A8h] BYREF
  int v27; // [rsp+80h] [rbp-68h]
  __int128 v28; // [rsp+C0h] [rbp-28h]

  v6 = 0;
  if ( CDrawingContext::IsIn3DMode((CDrawingContext *)((char *)this + 8)) )
  {
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 480));
    if ( !(unsigned __int8)CMILMatrix::Is2DTransformExceptForZTranslation<1>(TopByReference) )
    {
      v15 = -2147467263;
      MilInstrumentationCheckHR_MaybeFailFast((__int64)v8, 0LL, 0, 0x80004001, 0x692u, 0LL);
      return v15;
    }
    v9 = v8[3];
    v27 = 0;
    v10 = *v8;
    v11 = v8[1];
    v12 = v8[2];
    v28 = v9;
    DWORD2(v28) = 0;
    v26[3] = v28;
    v26[0] = v10;
    v26[1] = v11;
    v26[2] = v12;
    v13 = CDrawingContext::PushTransformInternal(this, 0LL, (const struct CMILMatrix *)v26, 0LL, 1);
    v15 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x68Du, 0LL);
      return v15;
    }
    v6 = 1;
  }
  v16 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  v15 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x696u, 0LL);
  }
  else
  {
    v18 = *((_DWORD *)this + 816);
    if ( v18 )
      v19 = *(_DWORD *)(*((_QWORD *)this + 410) + 4LL * (unsigned int)(v18 - 1));
    else
      v19 = (int)FLOAT_1_0;
    v20 = D2DPrimitiveBlendFromMilCompositingMode(*((_DWORD *)this + 64));
    v23 = v21(v22, (char *)this + 8, a2, *((_DWORD *)this + 63) != 0, v20, v19, a3);
    v15 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x6A1u, 0LL);
  }
  if ( v6 )
    CDrawingContext::PopTransformInternal(this, 1);
  return v15;
}
