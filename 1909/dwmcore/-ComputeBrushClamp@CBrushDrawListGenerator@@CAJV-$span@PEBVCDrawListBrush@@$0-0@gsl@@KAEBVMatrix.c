/*
 * XREFs of ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1801AF1E8
 * Callers:
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801AF5F4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000ED24 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800427F8 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180042950 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D46C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008EE90 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800954E4 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBrushDrawListGenerator::ComputeBrushClamp(__int64 *a1, int a2, float *a3, __int64 *a4)
{
  __int64 v4; // r10
  signed int v5; // esi
  unsigned __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rdx
  struct CShape *v13; // r9
  unsigned __int8 v14; // cf
  unsigned int v15; // xmm0_4
  unsigned int v16; // xmm1_4
  unsigned int v17; // xmm1_4
  unsigned int v18; // xmm0_4
  int v19; // xmm1_4
  int v20; // xmm0_4
  unsigned int v21; // xmm1_4
  struct CShape *v22; // rcx
  signed int v23; // ebx
  __int64 (__fastcall ***v24)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v25)(_QWORD, __int64); // rdx
  struct CShape *v26; // rcx
  __int64 (__fastcall ***v27)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v28)(_QWORD, __int64); // rax
  __int64 (__fastcall ***v29)(_QWORD, __int64); // rdx
  __int64 v30; // rcx
  __int64 v32; // rcx
  __int64 (__fastcall ***v33)(_QWORD, __int64); // [rsp+30h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v34)(_QWORD, __int64); // [rsp+38h] [rbp-C8h] BYREF
  struct CShape *v35[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v36; // [rsp+50h] [rbp-B0h]
  int v37; // [rsp+60h] [rbp-A0h]
  __int128 v38; // [rsp+70h] [rbp-90h]
  _BYTE v39[48]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v40; // [rsp+B8h] [rbp-48h]
  __int128 v41; // [rsp+D0h] [rbp-30h] BYREF
  __m256i v42; // [rsp+E0h] [rbp-20h]
  __int128 v43; // [rsp+100h] [rbp+0h]
  int v44; // [rsp+110h] [rbp+10h]
  __int128 v45; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v46[4]; // [rsp+130h] [rbp+30h] BYREF
  int v47; // [rsp+150h] [rbp+50h]
  int v48; // [rsp+154h] [rbp+54h]
  int v49; // [rsp+158h] [rbp+58h]
  _BYTE v50[16]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v51; // [rsp+170h] [rbp+70h]

  v4 = 0LL;
  v5 = 0;
  v33 = 0LL;
  if ( *a1 <= 0 )
  {
LABEL_25:
    v25 = 0LL;
    *a4 = v4;
    v33 = 0LL;
    v23 = 0;
    goto LABEL_26;
  }
  v10 = 0LL;
  while ( 1 )
  {
    if ( v10 >= *a1 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v11 = *(_QWORD *)(a1[1] + 8 * v10);
    if ( !v11 || !*(_BYTE *)(v11 + 52) )
      goto LABEL_24;
    v46[1] = 0LL;
    v49 = 0;
    v51 = 0LL;
    v46[0] = &CRectanglesShape::`vftable';
    v46[2] = v50;
    v46[3] = v50;
    v47 = 1;
    v48 = 1;
    v45 = *(_OWORD *)(v11 + 32);
    CRectanglesShape::SetSingleRect((CRectanglesShape *)v46, (const struct MilRectF *)&v45);
    v13 = 0LL;
    v14 = _bittest(&a2, v5);
    v44 = 0;
    v15 = *(_DWORD *)(v11 + 8);
    v16 = *(_DWORD *)(v11 + 12);
    if ( v14 )
    {
      LODWORD(v35[1]) = 0;
      v35[0] = (struct CShape *)__PAIR64__(v16, v15);
      v17 = *(_DWORD *)(v11 + 20);
      HIDWORD(v35[1]) = *(_DWORD *)(v11 + 16);
      v18 = *(_DWORD *)(v11 + 24);
      *(_QWORD *)&v36 = v17;
      *((_QWORD *)&v36 + 1) = __PAIR64__(*(_DWORD *)(v11 + 28), v18);
      v37 = 1065353216;
      Matrix3x3::operator*((float *)v35, (float *)v39, a3);
      DWORD2(v36) &= (unsigned int)v13;
      LODWORD(v35[1]) &= (unsigned int)v13;
      DWORD2(v38) &= (unsigned int)v13;
      v35[0] = *(struct CShape **)v39;
      HIDWORD(v35[1]) = *(_DWORD *)&v39[8];
      *(_QWORD *)&v36 = *(_QWORD *)&v39[12];
      *(_QWORD *)&v38 = *(_QWORD *)&v39[24];
      HIDWORD(v36) = *(_DWORD *)&v39[20];
      HIDWORD(v38) = *(_DWORD *)&v39[32];
      *(_OWORD *)v42.m256i_i8 = v36;
      v41 = *(_OWORD *)v35;
      v43 = v38;
      *(_OWORD *)&v42.m256i_u64[2] = _xmm;
    }
    else
    {
      *(_DWORD *)&v39[12] = 0;
      *(_DWORD *)v39 = v15;
      *(_DWORD *)&v39[16] = *(_DWORD *)(v11 + 16);
      *(_QWORD *)&v39[4] = v16;
      v19 = *(_DWORD *)(v11 + 20);
      *(_OWORD *)&v39[24] = 0LL;
      *(_QWORD *)&v39[40] = 1065353216LL;
      v20 = *(_DWORD *)(v11 + 24);
      *(_DWORD *)&v39[20] = v19;
      v21 = *(_DWORD *)(v11 + 28);
      LODWORD(v40) = v20;
      HIDWORD(v40) = 1065353216;
      *(_QWORD *)((char *)&v40 + 4) = v21;
      v41 = *(_OWORD *)v39;
      v42 = *(__m256i *)&v39[16];
      v43 = v40;
    }
    v44 = (int)v13;
    v35[1] = v13;
    LOBYTE(v36) = 1;
    if ( !v33 )
    {
      v35[0] = (struct CShape *)&v33;
      v23 = CShape::CopyShape((CShape *)v46, (const struct CMILMatrix *)&v41, &v35[1]);
      if ( (_BYTE)v36 )
      {
        v22 = v35[1];
        v24 = *(__int64 (__fastcall ****)(_QWORD, __int64))v35[0];
        *(_QWORD *)v35[0] = v35[1];
        if ( v24 )
          std::default_delete<CShape>::operator()((__int64)v22, v24);
      }
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast((__int64)v22, 0LL, 0, v23, 0x60u, 0LL);
        goto LABEL_15;
      }
      goto LABEL_23;
    }
    v34 = (__int64 (__fastcall ***)(_QWORD, __int64))v13;
    v35[0] = (struct CShape *)&v34;
    v23 = CShape::Combine((__int64)v33, v12, (__int64)v46, (__int64)&v41, 1, &v35[1]);
    if ( (_BYTE)v36 )
    {
      v26 = v35[0];
      v27 = *(__int64 (__fastcall ****)(_QWORD, __int64))v35[0];
      *(_QWORD *)v35[0] = v35[1];
      if ( v27 )
        std::default_delete<CShape>::operator()((__int64)v26, v27);
    }
    if ( v23 < 0 )
      break;
    v28 = v34;
    v29 = v33;
    v34 = 0LL;
    v33 = v28;
    if ( v29 )
    {
      std::default_delete<CShape>::operator()((__int64)v26, v29);
      if ( v34 )
        std::default_delete<CShape>::operator()(v30, v34);
    }
LABEL_23:
    CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v46);
    v4 = (__int64)v33;
LABEL_24:
    ++v5;
    ++v10;
    if ( v5 >= *a1 )
      goto LABEL_25;
  }
  MilInstrumentationCheckHR_MaybeFailFast((__int64)v26, 0LL, 0, v23, 0x6Bu, 0LL);
  if ( v34 )
    std::default_delete<CShape>::operator()(v32, v34);
LABEL_15:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v46);
  v25 = v33;
LABEL_26:
  if ( v25 )
    std::default_delete<CShape>::operator()((__int64)a1, v25);
  return (unsigned int)v23;
}
