/*
 * XREFs of ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180249F64
 * Callers:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D46C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18008C790 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094470 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002ADC8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180042950 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18004FC88 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2600 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z @ 0x180158654 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1802499F0 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18024A728 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CShape::D2DCombine(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, int a5, CComplexShape **a6)
{
  int D2DFactoryNoRef; // eax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int128 *v13; // r8
  unsigned int v14; // xmm1_4
  int v15; // xmm0_4
  int v16; // xmm1_4
  signed int v17; // eax
  __int64 v18; // rcx
  struct CRectanglesShape *v19; // rcx
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v21; // rdx
  int v22; // r8d
  unsigned int v23; // r9d
  CComplexShape *v24; // rax
  CComplexShape *v25; // rax
  unsigned int v27; // [rsp+20h] [rbp-E0h]
  struct ID2D1Geometry *v28; // [rsp+50h] [rbp-B0h] BYREF
  struct ID2D1Geometry *v29; // [rsp+58h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v30; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v31; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+78h] [rbp-88h]
  int v33; // [rsp+7Ch] [rbp-84h]
  struct CD2DFactory *v34[2]; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v35[4]; // [rsp+90h] [rbp-70h] BYREF
  int v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B4h] [rbp-4Ch]
  _BYTE v38[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-30h]
  _QWORD v40[4]; // [rsp+E0h] [rbp-20h] BYREF
  int v41; // [rsp+100h] [rbp+0h]
  __int64 v42; // [rsp+104h] [rbp+4h]
  _BYTE v43[16]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v44; // [rsp+120h] [rbp+20h]

  v40[2] = v43;
  v40[1] = 0LL;
  v40[3] = v43;
  v44 = 0LL;
  v35[2] = v38;
  v41 = 1;
  v42 = 1LL;
  v40[0] = &CRectanglesShape::`vftable';
  v35[3] = v38;
  v35[1] = 0LL;
  v35[0] = &CRectanglesShape::`vftable';
  v36 = 1;
  v37 = 1LL;
  v39 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v28 = 0LL;
  v34[0] = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)&CRectanglesShape::`vftable', v34);
  v11 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v27 = 469;
    goto LABEL_40;
  }
  if ( a1 )
  {
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)a1 + 24LL))(
                        a1,
                        0LL,
                        &v29);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v27 = 473;
LABEL_40:
      v23 = D2DFactoryNoRef;
      goto LABEL_41;
    }
  }
  else
  {
    D2DFactoryNoRef = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v40, 0LL, &v29);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v27 = 477;
      goto LABEL_40;
    }
  }
  if ( a3 )
  {
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)a3 + 24LL))(
                        a3,
                        0LL,
                        &v30);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v27 = 482;
      goto LABEL_40;
    }
  }
  else
  {
    D2DFactoryNoRef = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v35, 0LL, &v30);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v27 = 486;
      goto LABEL_40;
    }
  }
  if ( a5 )
  {
    if ( a5 == 1 )
      v12 = 1LL;
    else
      v12 = 3LL;
  }
  else
  {
    v12 = 0LL;
  }
  if ( a4 )
  {
    v13 = &v31;
    v14 = a4[1];
    LODWORD(v31) = *a4;
    *(_QWORD *)((char *)&v31 + 4) = __PAIR64__(a4[4], v14);
    v15 = a4[12];
    HIDWORD(v31) = a4[5];
    v16 = a4[13];
    v32 = v15;
    v33 = v16;
  }
  else
  {
    v13 = 0LL;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct ID2D1Geometry *, _QWORD, struct ID2D1Geometry *, __int128 *, _DWORD, struct ID2D1Geometry **))(**((_QWORD **)v34[0] + 4) + 32LL))(
          *((_QWORD *)v34[0] + 4),
          v12,
          v29,
          0LL,
          v30,
          v13,
          LODWORD(FLOAT_0_25),
          &v28);
  v11 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x1EEu, 0LL);
    goto LABEL_42;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, struct CD2DFactory **))(*(_QWORD *)v28 + 32LL))(
                      v28,
                      0LL,
                      v34);
  v11 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v27 = 500;
    goto LABEL_40;
  }
  v31 = *(_OWORD *)v34;
  if ( !IsRectEmptyOrInvalid((float *)&v31) )
  {
    v24 = (CComplexShape *)DefaultHeap::Alloc(0x18uLL);
    if ( v24 )
      v25 = CComplexShape::CComplexShape(v24, v28);
    else
      v25 = 0LL;
    if ( v25 )
    {
      *a6 = v25;
      goto LABEL_42;
    }
    v23 = -2147024882;
    v11 = -2147024882;
    v27 = 511;
    goto LABEL_41;
  }
  ObjectCache = CThreadContext::GetObjectCache(v19);
  v21 = 0LL;
  v22 = *((_DWORD *)ObjectCache + 1);
  if ( v22 )
  {
    v21 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v21;
    v10 = (unsigned int)(v22 - 1);
    *((_DWORD *)ObjectCache + 1) = v10;
  }
  if ( v21 || (v21 = DefaultHeap::Alloc(0x48uLL)) != 0LL )
  {
    v21[1] = 0LL;
    *v21 = &CRectanglesShape::`vftable';
    v21[2] = v21 + 6;
    v21[3] = v21 + 6;
    *((_DWORD *)v21 + 8) = 1;
    *(_QWORD *)((char *)v21 + 36) = 1LL;
    v21[8] = 0LL;
  }
  else
  {
    v21 = 0LL;
  }
  *a6 = (CComplexShape *)v21;
  if ( !v21 )
  {
    v23 = -2147024882;
    v11 = -2147024882;
    v27 = 506;
LABEL_41:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v23, v27, 0LL);
  }
LABEL_42:
  ReleaseInterface<ID2D1Geometry>((__int64 *)&v28);
  if ( v29 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v29 + 16LL))(v29);
  if ( v30 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v30 + 16LL))(v30);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v35);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v40);
  return v11;
}
