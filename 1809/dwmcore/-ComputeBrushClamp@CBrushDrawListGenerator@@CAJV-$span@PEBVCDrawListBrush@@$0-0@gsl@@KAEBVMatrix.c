/*
 * XREFs of ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1801827E8
 * Callers:
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180182BCC (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x18000C9DC (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180026618 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18006C438 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800C1EF4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800C2D88 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CBrushDrawListGenerator::ComputeBrushClamp(__int64 *a1, int a2, float *a3, __int64 *a4)
{
  __int64 v5; // rax
  signed int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int8 v12; // cf
  unsigned int v13; // xmm0_4
  unsigned int v14; // xmm1_4
  unsigned int v15; // xmm1_4
  unsigned int v16; // xmm0_4
  int v17; // xmm1_4
  int v18; // xmm0_4
  unsigned int v19; // xmm1_4
  struct CShape *v20; // rcx
  int v21; // ebx
  __int64 (__fastcall ***v22)(_QWORD, __int64); // rdx
  CShape *v23; // rdx
  struct CShape *v24; // rcx
  __int64 (__fastcall ***v25)(_QWORD, __int64); // rdx
  CShape *v26; // rdx
  CShape *v27; // rax
  __int64 v28; // rcx
  __int64 v30; // rcx
  CShape *v31; // [rsp+30h] [rbp-D0h] BYREF
  CShape *v32; // [rsp+38h] [rbp-C8h] BYREF
  struct CShape *v33[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v34; // [rsp+50h] [rbp-B0h]
  int v35; // [rsp+60h] [rbp-A0h]
  __int128 v36; // [rsp+70h] [rbp-90h]
  _BYTE v37[48]; // [rsp+88h] [rbp-78h] BYREF
  __int128 v38; // [rsp+B8h] [rbp-48h]
  __int128 v39; // [rsp+D0h] [rbp-30h] BYREF
  __m256i v40; // [rsp+E0h] [rbp-20h]
  __int128 v41; // [rsp+100h] [rbp+0h]
  int v42; // [rsp+110h] [rbp+10h]
  __int128 v43; // [rsp+120h] [rbp+20h] BYREF
  void *v44[4]; // [rsp+130h] [rbp+30h] BYREF
  int v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+154h] [rbp+54h]
  _BYTE v47[16]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v48; // [rsp+170h] [rbp+70h]

  v5 = 0LL;
  v31 = 0LL;
  v9 = 0;
  if ( *a1 > 0 )
  {
    do
    {
      v10 = *(_QWORD *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a1, v5);
      if ( v10 && *(_BYTE *)(v10 + 52) )
      {
        v44[1] = 0LL;
        v44[0] = &CRectanglesShape::`vftable';
        v48 = 0LL;
        v44[2] = v47;
        v44[3] = v47;
        v45 = 1;
        v46 = 1LL;
        v43 = *(_OWORD *)(v10 + 32);
        CRectanglesShape::SetSingleRect((CRectanglesShape *)v44, (const struct MilRectF *)&v43);
        v12 = _bittest(&a2, v9);
        v42 = 0;
        v13 = *(_DWORD *)(v10 + 8);
        v14 = *(_DWORD *)(v10 + 12);
        if ( v12 )
        {
          LODWORD(v33[1]) = 0;
          v33[0] = (struct CShape *)__PAIR64__(v14, v13);
          v15 = *(_DWORD *)(v10 + 20);
          HIDWORD(v33[1]) = *(_DWORD *)(v10 + 16);
          v16 = *(_DWORD *)(v10 + 24);
          *(_QWORD *)&v34 = v15;
          *((_QWORD *)&v34 + 1) = __PAIR64__(*(_DWORD *)(v10 + 28), v16);
          v35 = 1065353216;
          Matrix3x3::operator*((float *)v33, (float *)v37, a3);
          LODWORD(v33[1]) = 0;
          DWORD2(v34) = 0;
          DWORD2(v36) = 0;
          v33[0] = *(struct CShape **)v37;
          HIDWORD(v33[1]) = *(_DWORD *)&v37[8];
          *(_QWORD *)&v36 = *(_QWORD *)&v37[24];
          *(_QWORD *)&v34 = *(_QWORD *)&v37[12];
          HIDWORD(v36) = *(_DWORD *)&v37[32];
          HIDWORD(v34) = *(_DWORD *)&v37[20];
          v39 = *(_OWORD *)v33;
          *(_OWORD *)v40.m256i_i8 = v34;
          v41 = v36;
          *(_OWORD *)&v40.m256i_u64[2] = _xmm;
        }
        else
        {
          *(_DWORD *)&v37[12] = 0;
          *(_DWORD *)v37 = v13;
          *(_DWORD *)&v37[16] = *(_DWORD *)(v10 + 16);
          *(_QWORD *)&v37[4] = v14;
          v17 = *(_DWORD *)(v10 + 20);
          *(_OWORD *)&v37[24] = 0LL;
          *(_QWORD *)&v37[40] = 1065353216LL;
          v18 = *(_DWORD *)(v10 + 24);
          *(_DWORD *)&v37[20] = v17;
          v19 = *(_DWORD *)(v10 + 28);
          LODWORD(v38) = v18;
          HIDWORD(v38) = 1065353216;
          *(_QWORD *)((char *)&v38 + 4) = v19;
          v39 = *(_OWORD *)v37;
          v40 = *(__m256i *)&v37[16];
          v41 = v38;
        }
        v42 = 0;
        v33[1] = 0LL;
        LOBYTE(v34) = 1;
        if ( v31 )
        {
          v32 = 0LL;
          v33[0] = (struct CShape *)&v32;
          v21 = CShape::Combine(v31, v11, (CShape *)v44, (float *)&v39, 1, &v33[1]);
          if ( (_BYTE)v34 )
          {
            v24 = v33[0];
            v25 = *(__int64 (__fastcall ****)(_QWORD, __int64))v33[0];
            *(_QWORD *)v33[0] = v33[1];
            if ( v25 )
              std::default_delete<CShape>::operator()((__int64)v24, v25);
          }
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v24, 0LL, 0, v21, 0x6Bu);
            if ( v32 )
              std::default_delete<CShape>::operator()(v30, (__int64 (__fastcall ***)(_QWORD, __int64))v32);
            goto LABEL_13;
          }
          v26 = v31;
          v27 = v32;
          v32 = 0LL;
          v31 = v27;
          if ( v26 )
          {
            std::default_delete<CShape>::operator()((__int64)v24, (__int64 (__fastcall ***)(_QWORD, __int64))v26);
            if ( v32 )
              std::default_delete<CShape>::operator()(v28, (__int64 (__fastcall ***)(_QWORD, __int64))v32);
          }
        }
        else
        {
          v33[0] = (struct CShape *)&v31;
          v21 = CShape::CopyShape((CShape *)v44, (const struct CMILMatrix *)&v39, &v33[1]);
          if ( (_BYTE)v34 )
          {
            v20 = v33[1];
            v22 = *(__int64 (__fastcall ****)(_QWORD, __int64))v33[0];
            *(_QWORD *)v33[0] = v33[1];
            if ( v22 )
              std::default_delete<CShape>::operator()((__int64)v20, v22);
          }
          if ( v21 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((__int64)v20, 0LL, 0, v21, 0x60u);
LABEL_13:
            CRectanglesShape::~CRectanglesShape(v44);
            v23 = v31;
            goto LABEL_25;
          }
        }
        CRectanglesShape::~CRectanglesShape(v44);
      }
      v5 = ++v9;
    }
    while ( v9 < *a1 );
    v5 = (__int64)v31;
  }
  v23 = 0LL;
  *a4 = v5;
  v31 = 0LL;
  v21 = 0;
LABEL_25:
  if ( v23 )
    std::default_delete<CShape>::operator()((__int64)a1, (__int64 (__fastcall ***)(_QWORD, __int64))v23);
  return (unsigned int)v21;
}
