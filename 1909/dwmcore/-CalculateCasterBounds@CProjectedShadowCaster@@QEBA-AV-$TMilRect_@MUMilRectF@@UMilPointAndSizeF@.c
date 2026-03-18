/*
 * XREFs of ?CalculateCasterBounds@CProjectedShadowCaster@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@PEA_N@Z @ 0x180004448
 * Callers:
 *     ?UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z @ 0x18000424C (-UpdateVisualProperty@CProjectedShadowCaster@@QEAAXPEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180004728 (-TryGetAxisAlignedRectangle@CGeometry@@QEAA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ??$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ @ 0x18001429C (--$IsTranslateAndScale@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x18008B720 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x1800C33A8 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CE4A8 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProjectedShadowCaster::CalculateCasterBounds(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v4; // rax
  float v5; // xmm6_4
  float v6; // xmm8_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  char v13; // si
  float v14; // xmm7_4
  float v15; // xmm9_4
  CVisual *v16; // rbx
  __int64 v17; // rcx
  struct TransformParentData *TransformParentDataInternal; // rax
  float v19; // xmm3_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  _BYTE v23[16]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v24[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+90h] [rbp-70h]
  _BYTE v26[64]; // [rsp+A0h] [rbp-60h] BYREF
  int v27; // [rsp+E0h] [rbp-20h]
  float v28; // [rsp+F0h] [rbp-10h]
  float v29; // [rsp+F4h] [rbp-Ch]
  float v30; // [rsp+F8h] [rbp-8h]
  float v31; // [rsp+FCh] [rbp-4h]
  float v32; // [rsp+100h] [rbp+0h] BYREF
  float v33; // [rsp+104h] [rbp+4h]
  float v34; // [rsp+108h] [rbp+8h]
  float v35; // [rsp+10Ch] [rbp+Ch]

  v4 = *(_QWORD *)(a1 + 56);
  v25 = 0;
  v5 = 0.0;
  v6 = 0.0;
  v9 = *(float *)(v4 + 132);
  v10 = *(float *)(v4 + 136) + 0.0;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  v28 = 0.0;
  v29 = 0.0;
  v13 = 0;
  *(float *)(a2 + 12) = v10;
  *(float *)(a2 + 8) = v9 + 0.0;
  v14 = *(float *)(v4 + 132) + 0.0;
  v15 = *(float *)(v4 + 136) + 0.0;
  v16 = *(CVisual **)(a1 + 56);
  v24[0] = _xmm;
  v24[1] = _xmm;
  v30 = v14;
  v31 = v15;
  v24[2] = _xmm;
  v24[3] = _xmm;
  LOWORD(v25) = 32085;
  while ( v16 )
  {
    v17 = *((_QWORD *)v16 + 31);
    if ( v17 && (unsigned __int8)CGeometry::TryGetAxisAlignedRectangle(v17, (char *)v16 + 132, &v32) )
    {
      if ( v32 > v5 )
      {
        v28 = v32;
        v5 = v32;
      }
      v19 = v6;
      if ( v33 > v6 )
      {
        v29 = v33;
        v6 = v33;
        v19 = v33;
      }
      v20 = v14;
      if ( v14 > v34 )
      {
        v30 = v34;
        v14 = v34;
        v20 = v34;
      }
      v21 = v15;
      if ( v15 > v35 )
      {
        v31 = v35;
        v15 = v35;
        v21 = v35;
      }
      if ( v20 <= v5 || v21 <= v19 )
      {
        v14 = 0.0;
        v31 = 0.0;
        v5 = 0.0;
        v30 = 0.0;
        v28 = 0.0;
        v15 = 0.0;
        v29 = 0.0;
        v6 = 0.0;
      }
      v13 = 1;
    }
    if ( !*(_QWORD *)(a1 + 64) )
      break;
    TransformParentDataInternal = CVisual::GetTransformParentDataInternal(v16);
    if ( TransformParentDataInternal )
      TransformParentDataInternal = (struct TransformParentData *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)TransformParentDataInternal + 192LL))(*(_QWORD *)TransformParentDataInternal);
    if ( TransformParentDataInternal )
      break;
    v27 = 0;
    CVisual::CalcEffectiveTransform(v16, 0LL, 0LL, v23, v26, a3, 0LL);
    if ( v23[0] )
    {
      if ( !(unsigned __int8)CMILMatrix::IsTranslateAndScale<1>(v26) )
        break;
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v26);
      CMILMatrix::Multiply((CMILMatrix *)v24, (const struct CMILMatrix *)v26);
      v15 = v31;
      v14 = v30;
      v6 = v29;
      v5 = v28;
    }
    v16 = (CVisual *)*((_QWORD *)v16 + 10);
  }
  if ( CMILMatrix::Invert((CMILMatrix *)v24) )
  {
    *a4 = v13;
    CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v24);
  }
  return a2;
}
