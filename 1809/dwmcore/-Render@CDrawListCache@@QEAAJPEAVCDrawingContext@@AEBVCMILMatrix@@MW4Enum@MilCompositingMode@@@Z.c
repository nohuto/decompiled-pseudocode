/*
 * XREFs of ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800B35C0
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800B23D0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B3200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180182BCC (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801D4D6C (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18002B8C8 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x18005F5E8 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?last@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800B3AD0 (-last@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x1800B3B10 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18021DF58 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18021E000 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CDrawListCache::Render(__int64 a1, CDrawingContext *a2, CMILMatrix *a3, float a4)
{
  struct ID2D1Geometry *v4; // r14
  bool v5; // cc
  __int64 v6; // rax
  CDrawingContext *v7; // r12
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // esi
  int v12; // eax
  unsigned int v13; // ecx
  _QWORD *v14; // rbx
  __int64 v15; // rdi
  _QWORD *v16; // r15
  __int128 *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  bool v21; // zf
  float v22; // xmm7_4
  float v23; // xmm8_4
  float v24; // xmm9_4
  float v25; // xmm6_4
  int v26; // eax
  unsigned int v27; // ecx
  int D2DGeometry; // eax
  unsigned int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  char v35; // [rsp+40h] [rbp-C0h]
  __int128 v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+60h] [rbp-A0h] BYREF
  CMILMatrix *v39; // [rsp+68h] [rbp-98h]
  struct ID2D1Geometry *v40; // [rsp+70h] [rbp-90h] BYREF
  __int64 v41; // [rsp+78h] [rbp-88h]
  __int128 v42; // [rsp+80h] [rbp-80h]
  float v43; // [rsp+90h] [rbp-70h]
  float v44; // [rsp+94h] [rbp-6Ch]
  float v45; // [rsp+98h] [rbp-68h]
  float v46; // [rsp+9Ch] [rbp-64h]
  __int128 v47; // [rsp+A0h] [rbp-60h]
  struct D2D_RECT_F v48; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v49[16]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = 0LL;
  v5 = *(float *)(a1 + 48) <= *(float *)(a1 + 40);
  v6 = *((_QWORD *)a2 + 48);
  v7 = a2;
  v39 = a3;
  v41 = v6;
  v40 = 0LL;
  v35 = 0;
  if ( !v5 && *(float *)(a1 + 52) > *(float *)(a1 + 44) && a4 > 0.0 )
  {
    if ( (*(_BYTE *)(a1 + 92) & 0x20) != 0 )
    {
      v9 = CDrawingContext::ApplyRenderStateInternal(a2, 1);
      v11 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xC4u);
        return v11;
      }
    }
    else
    {
      v12 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
      v11 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC8u);
        return v11;
      }
    }
    v14 = (_QWORD *)detail::pointer_buffer_impl<CDrawListEntry *>::first(a1 + 32);
    v15 = detail::pointer_buffer_impl<CDrawListEntry *>::last(a1 + 32);
    while ( v14 != (_QWORD *)v15 )
    {
      v16 = (_QWORD *)*v14;
      v17 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*v14 + 56LL))(*v14, v49);
      v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v41 + 160LL))(v41);
      v19 = 0LL;
      v20 = *(_DWORD *)(v18 + 392);
      if ( v20 )
        v19 = *(_QWORD *)(*(_QWORD *)(v18 + 368) + 8LL * (unsigned int)(v20 - 1));
      v21 = *(_DWORD *)(v19 + 76) == 1;
      v37 = *(_OWORD *)(v19 + 60);
      if ( v21 )
      {
        v22 = (float)(int)CFloatFPU::CeilingSat(*(float *)&v37 - 0.5);
        v23 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v37 + 1) - 0.5);
        v24 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v37 + 2) - 0.5);
        v25 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v37 + 3) - 0.5);
      }
      else
      {
        v25 = *((float *)&v37 + 3);
        v24 = *((float *)&v37 + 2);
        v23 = *((float *)&v37 + 1);
        v22 = *(float *)&v37;
      }
      v42 = *v17;
      CMILMatrix::Transform2DBoundsHelper<0>(v39);
      if ( v24 <= v43 || v25 <= v44 || v45 <= v22 || v46 <= v23 )
      {
        v7 = a2;
      }
      else
      {
        v7 = a2;
        if ( v4 != (struct ID2D1Geometry *)v16[16] )
        {
          v4 = (struct ID2D1Geometry *)v16[16];
          if ( v35 )
          {
            v26 = CDrawingContext::PopLayer(a2);
            v11 = v26;
            if ( v26 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0xDCu);
              break;
            }
            v35 = 0;
            ReleaseInterface<ID2D1Geometry>((__int64 *)&v40);
            v4 = (struct ID2D1Geometry *)v16[16];
          }
          if ( v4 )
          {
            CComplexShape::CComplexShape((CComplexShape *)&v37, v4);
            D2DGeometry = CComplexShape::GetD2DGeometry((CComplexShape *)&v37, v39, &v40);
            v11 = D2DGeometry;
            if ( D2DGeometry < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, D2DGeometry, 0xECu);
LABEL_40:
              Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v38);
              if ( *((_QWORD *)&v37 + 1) )
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v37 + 1) + 16LL))(*((_QWORD *)&v37 + 1));
              break;
            }
            v47 = *(_OWORD *)(a1 + 40);
            CMILMatrix::Transform2DBoundsHelper<0>(v39);
            v30 = CDrawingContext::PushD2DLayer(a2, 0LL, &v48, v40, 0LL, 1.0, 0, 0);
            v11 = v30;
            if ( v30 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xF2u);
              goto LABEL_40;
            }
            v35 = 1;
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v38);
            if ( *((_QWORD *)&v37 + 1) )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v37 + 1) + 16LL))(*((_QWORD *)&v37 + 1));
          }
        }
        v32 = (*(__int64 (__fastcall **)(_QWORD *, CDrawingContext *, CMILMatrix *))(*v16 + 64LL))(v16, a2, v39);
        v11 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0xF7u);
          break;
        }
      }
      ++v14;
    }
    if ( v35 )
      CDrawingContext::PopLayer(v7);
    if ( v40 )
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v40 + 16LL))(v40);
    return v11;
  }
  return 0LL;
}
