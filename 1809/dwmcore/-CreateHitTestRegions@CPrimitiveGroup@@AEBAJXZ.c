/*
 * XREFs of ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180011A20
 * Callers:
 *     ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x1800119F4 (-EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x180011FA0 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x18001206C (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x1800121B8 (-Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180012220 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x180012444 (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180016D7C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18009266C (--1CRegionShape@@UEAA@XZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180096D48 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18009B9D4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z @ 0x1801AB1EC (-AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CPrimitiveGroup::CreateHitTestRegions(CPrimitiveGroup *this, __int64 a2, double a3)
{
  int v4; // ebx
  MILMatrix3x2 *v5; // rcx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  char v8; // r12
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v11; // r14d
  unsigned int v12; // r11d
  _DWORD *v13; // rsi
  int v14; // eax
  unsigned __int64 v15; // rdx
  char v16; // r10
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // edi
  unsigned int v20; // ecx
  unsigned __int64 v21; // rax
  unsigned int v22; // r15d
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // r8d
  int v26; // edx
  int v27; // ecx
  int v28; // eax
  unsigned int v29; // eax
  bool v30; // zf
  char v31; // cl
  int v32; // eax
  unsigned int v33; // ecx
  int D2DGeometry; // eax
  unsigned int v35; // ecx
  unsigned int v37; // r14d
  unsigned int v38; // r15d
  _BYTE *v39; // rax
  const struct MilRectF *v40; // r10
  float *v41; // rcx
  float *v42; // r9
  __int64 v43; // r10
  unsigned int v44; // r11d
  float v45; // xmm0_4
  int v46; // r8d
  float v47; // xmm0_4
  int v48; // edx
  float v49; // xmm0_4
  float v50; // xmm0_4
  int v51; // eax
  unsigned int v52; // eax
  __int64 v53; // r9
  unsigned int v54; // r11d
  int v55; // r8d
  __m128 v56; // xmm1
  int v57; // edx
  __m128 v58; // xmm1
  int v59; // ecx
  __m128 v60; // xmm1
  int v61; // eax
  __m128 v62; // xmm1
  unsigned int v63; // eax
  int v64; // eax
  float v65; // xmm0_4
  float v66; // xmm1_4
  struct D2D_POINT_2F *v67; // rax
  FLOAT v68; // xmm2_4
  __int64 v69; // rdx
  float v70; // xmm0_4
  __m128 v71; // xmm1
  __m128 v72; // xmm1
  __m128 v73; // xmm1
  __m128 v74; // xmm1
  int v75; // eax
  int D2DFactoryNoRef; // eax
  int v77; // r9d
  __m128 v78; // xmm1
  __m128 v79; // xmm1
  __m128 v80; // xmm1
  __m128 v81; // xmm1
  int v82; // eax
  struct D2D_POINT_2F *v83; // rax
  FLOAT v84; // xmm2_4
  float v85; // xmm0_4
  float v86; // xmm1_4
  __int64 v87; // rdx
  float v88; // xmm1_4
  __int64 v89; // rax
  unsigned int v90; // [rsp+28h] [rbp-E0h]
  float v91; // [rsp+38h] [rbp-D0h]
  float v92; // [rsp+38h] [rbp-D0h]
  float v93; // [rsp+38h] [rbp-D0h]
  float v94; // [rsp+38h] [rbp-D0h]
  float v95; // [rsp+38h] [rbp-D0h]
  float v96; // [rsp+38h] [rbp-D0h]
  float v97; // [rsp+38h] [rbp-D0h]
  float v98; // [rsp+38h] [rbp-D0h]
  float v99; // [rsp+38h] [rbp-D0h]
  float v100; // [rsp+38h] [rbp-D0h]
  float v101; // [rsp+38h] [rbp-D0h]
  float v102; // [rsp+38h] [rbp-D0h]
  char v103; // [rsp+40h] [rbp-C8h]
  __int64 v104; // [rsp+48h] [rbp-C0h] BYREF
  struct ID2D1GeometrySink *v105; // [rsp+50h] [rbp-B8h] BYREF
  struct CD2DFactory *v106; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v107; // [rsp+60h] [rbp-A8h]
  struct CD2DFactory *v108; // [rsp+68h] [rbp-A0h] BYREF
  struct CD2DFactory *v109[2]; // [rsp+70h] [rbp-98h] BYREF
  MILMatrix3x2 *i; // [rsp+80h] [rbp-88h] BYREF
  float v111; // [rsp+88h] [rbp-80h]
  float v112; // [rsp+8Ch] [rbp-7Ch]
  __int128 v113; // [rsp+90h] [rbp-78h] BYREF
  __int128 v114; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v115[3]; // [rsp+B8h] [rbp-50h] BYREF
  int v116; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v117; // [rsp+110h] [rbp+8h]
  _QWORD v118[2]; // [rsp+118h] [rbp+10h] BYREF
  unsigned int v119; // [rsp+12Ch] [rbp+24h]
  unsigned int v120; // [rsp+130h] [rbp+28h]
  struct D2D_POINT_2F v121; // [rsp+238h] [rbp+130h] BYREF
  float v122; // [rsp+240h] [rbp+138h]
  FLOAT y; // [rsp+244h] [rbp+13Ch]
  unsigned __int64 v124; // [rsp+248h] [rbp+140h]
  FLOAT v125; // [rsp+250h] [rbp+148h]
  float v126; // [rsp+254h] [rbp+14Ch]

  v4 = 0;
  DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>(v118);
  v104 = 0LL;
  v105 = 0LL;
  ReleaseInterface<ID2D1Geometry>((char *)this + 72);
  ReleaseInterface<ID2D1Geometry>((char *)this + 80);
  v6 = *((_QWORD *)this + 67);
  v7 = v6 + *((_QWORD *)this + 68);
  if ( v6 < v7 )
  {
    v37 = (unsigned int)v106;
    v38 = (unsigned int)v106;
    do
    {
      v39 = (_BYTE *)(v6 + 16);
      v40 = (const struct MilRectF *)v6;
      v6 += 17LL;
      if ( (unsigned __int64)v39 > v7 || v6 > v7 )
      {
        v90 = 1205;
        goto LABEL_121;
      }
      if ( *v39 )
      {
        v5 = (MILMatrix3x2 *)v6;
        v6 += 24LL;
        if ( v6 > v7 )
        {
          v90 = 1216;
LABEL_121:
          v77 = -2147467259;
          v4 = -2147467259;
          goto LABEL_122;
        }
        if ( !MILMatrix3x2::Is2DAxisAlignedPreservingApprox(v5) )
        {
          v67 = &v121;
          v68 = *(float *)v53;
          v69 = 4LL;
          v70 = *(float *)(v53 + 8);
          v121.y = *(FLOAT *)(v53 + 4);
          y = v121.y;
          HIDWORD(v124) = *(_DWORD *)(v53 + 12);
          v126 = *((float *)&v124 + 1);
          v121.x = v68;
          v122 = v70;
          *(float *)&v124 = v70;
          v125 = v68;
          do
          {
            *(_OWORD *)&a3 = LODWORD(v67->y);
            *(float *)&a3 = (float)(*(float *)&a3 * v41[3]) + (float)(v41[1] * v67->x);
            v67->x = (float)((float)(v67->y * v41[2]) + (float)(*v41 * v67->x)) + v41[4];
            v67->y = *(float *)&a3 + v41[5];
            ++v67;
            --v69;
          }
          while ( v69 );
          goto LABEL_104;
        }
        MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v41, (const struct MilRectF *)v53, (struct MilRectF *)&i);
        if ( !IsPixelAligned((const struct MilRectF *)&i) )
        {
          *(_OWORD *)&a3 = (unsigned int)i;
          v65 = v111;
          v121.y = *((FLOAT *)&i + 1);
          y = *((float *)&i + 1);
          v66 = v112;
LABEL_103:
          v126 = v66;
          v125 = *(float *)&a3;
          v124 = __PAIR64__(LODWORD(v66), LODWORD(v65));
          v122 = v65;
          v121.x = *(FLOAT *)&a3;
LABEL_104:
          if ( !v104 )
          {
            D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)v41, &v106);
            v4 = D2DFactoryNoRef;
            if ( D2DFactoryNoRef < 0 )
            {
              v90 = 1313;
              goto LABEL_118;
            }
            D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v106 + 3) + 80LL))(
                                *((_QWORD *)v106 + 3),
                                &v104);
            v4 = D2DFactoryNoRef;
            if ( D2DFactoryNoRef < 0 )
            {
              v90 = 1315;
              goto LABEL_118;
            }
            D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v104 + 136LL))(
                                v104,
                                &v105);
            v4 = D2DFactoryNoRef;
            if ( D2DFactoryNoRef < 0 )
            {
              v90 = 1317;
              goto LABEL_118;
            }
            (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v105 + 24LL))(v105, 1LL);
          }
          CPrimitiveGroup::AddFilledPolygonToD2DSink(v105, &v121);
          continue;
        }
        if ( (v54 & LODWORD(v112)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v112 - v112;
          v56.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v56);
          v55 = (int)v112 - LODWORD(a3);
        }
        else
        {
          v99 = v112 + 6291456.25;
          v55 = (int)(LODWORD(v99) << 10) >> 11;
        }
        if ( (v54 & LODWORD(v111)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v111 - v111;
          v58.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v58);
          v57 = (int)v111 - LODWORD(a3);
        }
        else
        {
          v100 = v111 + 6291456.25;
          v57 = (int)(LODWORD(v100) << 10) >> 11;
        }
        if ( (v54 & HIDWORD(i)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*((float *)&i + 1) - *((float *)&i + 1);
          v60.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v60);
          v59 = (int)*((float *)&i + 1) - LODWORD(a3);
        }
        else
        {
          v101 = *((float *)&i + 1) + 6291456.25;
          v59 = (int)(LODWORD(v101) << 10) >> 11;
        }
        if ( (v54 & (unsigned int)i) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)&i - *(float *)&i;
          v62.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v62);
          v61 = (int)*(float *)&i - LODWORD(a3);
        }
        else
        {
          v102 = *(float *)&i + 6291456.25;
          v61 = (int)(LODWORD(v102) << 10) >> 11;
        }
        *(struct CD2DFactory **)((char *)v109 + 4) = (struct CD2DFactory *)__PAIR64__(v57, v59);
        LODWORD(v5) = v120;
        LODWORD(v109[0]) = v61;
        HIDWORD(v109[1]) = v55;
        v63 = v120 + 1;
        if ( v120 + 1 >= v120 )
          v37 = v120 + 1;
        v4 = v63 < v120 ? 0x80070216 : 0;
        if ( v63 < v120 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v120, 0LL, 0, v4, 0xB5u);
        }
        else if ( v37 > v119 )
        {
          v64 = DynArrayImpl<0>::AddMultipleAndSet(v118, 16LL, 1LL, v109);
          v4 = v64;
          if ( v64 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v64, 0xC0u);
        }
        else
        {
          *(_OWORD *)(v118[0] + 16LL * v120) = *(_OWORD *)v109;
          v120 = v37;
        }
        if ( v4 < 0 )
        {
          v90 = 1235;
LABEL_111:
          v77 = v4;
          goto LABEL_122;
        }
      }
      else
      {
        if ( !IsPixelAligned(v40) )
        {
          *(_OWORD *)&a3 = *(unsigned int *)v42;
          v65 = v42[2];
          v121.y = v42[1];
          y = v121.y;
          v66 = *(float *)(v43 + 12);
          goto LABEL_103;
        }
        v45 = *(float *)(v43 + 12);
        if ( (v44 & LODWORD(v45)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v45 - v45;
          v71.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v71);
          v46 = (int)v45 - LODWORD(a3);
        }
        else
        {
          v95 = v45 + 6291456.25;
          v46 = (int)(LODWORD(v95) << 10) >> 11;
        }
        v47 = v42[2];
        if ( (v44 & LODWORD(v47)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v47 - v47;
          v72.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v72);
          v48 = (int)v47 - LODWORD(a3);
        }
        else
        {
          v96 = v47 + 6291456.25;
          v48 = (int)(LODWORD(v96) << 10) >> 11;
        }
        v49 = v42[1];
        if ( (v44 & LODWORD(v49)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v49 - v49;
          v73.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v73);
          LODWORD(v5) = (int)v49 - LODWORD(a3);
        }
        else
        {
          v97 = v49 + 6291456.25;
          LODWORD(v5) = (int)(LODWORD(v97) << 10) >> 11;
        }
        v50 = *v42;
        if ( (v44 & *(_DWORD *)v42) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v50 - v50;
          v74.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v74);
          v51 = (int)v50 - LODWORD(a3);
        }
        else
        {
          v98 = v50 + 6291456.25;
          v51 = (int)(LODWORD(v98) << 10) >> 11;
        }
        *(_QWORD *)&v113 = __PAIR64__((unsigned int)v5, v51);
        *((_QWORD *)&v113 + 1) = __PAIR64__(v46, v48);
        v52 = v120 + 1;
        if ( v120 + 1 >= v120 )
          v38 = v120 + 1;
        v4 = v52 < v120 ? 0x80070216 : 0;
        if ( v52 < v120 )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v4, 0xB5u);
        }
        else if ( v38 > v119 )
        {
          v75 = DynArrayImpl<0>::AddMultipleAndSet(v118, 16LL, 1LL, &v113);
          v4 = v75;
          if ( v75 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v75, 0xC0u);
        }
        else
        {
          *(_OWORD *)(v118[0] + 16LL * v120) = v113;
          v120 = v38;
        }
        if ( v4 < 0 )
        {
          v90 = 1286;
          goto LABEL_111;
        }
      }
    }
    while ( v6 < v7 );
  }
  v5 = (MILMatrix3x2 *)*((_QWORD *)this + 63);
  v8 = 0;
  v9 = *((_DWORD *)this + 128);
  v10 = 0;
  LODWORD(v106) = v9;
  v11 = v9;
  for ( i = v5; ; v5 = i )
  {
    v12 = v10 + 144;
    LODWORD(v107) = v10 + 144;
    if ( v10 + 144 > v9 )
    {
      if ( v105 )
      {
        D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v105 + 72LL))(v105);
        v4 = D2DFactoryNoRef;
        if ( D2DFactoryNoRef < 0 )
        {
          v90 = 1467;
          goto LABEL_118;
        }
        v89 = v104;
        v104 = 0LL;
        *((_QWORD *)this + 10) = v89;
      }
      if ( !v120 )
        goto LABEL_39;
      v115[1] = 0LL;
      v116 = 0;
      v117 = 0LL;
      v115[0] = &CRegionShape::`vftable';
      v115[2] = &v116;
      v32 = CRegionShape::BuildFromRects(v115, v118[0]);
      v4 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x5C7u);
      }
      else
      {
        D2DGeometry = CRegionShape::GetD2DGeometry((CRegionShape *)v115, 0LL, (struct ID2D1Geometry **)this + 9);
        v4 = D2DGeometry;
        if ( D2DGeometry >= 0 )
        {
          CRegionShape::~CRegionShape((CRegionShape *)v115);
LABEL_39:
          *((_BYTE *)this + 88) = 1;
          goto LABEL_40;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, D2DGeometry, 0x5CCu);
      }
      CRegionShape::~CRegionShape((CRegionShape *)v115);
      goto LABEL_40;
    }
    v13 = (_DWORD *)((char *)v5 + v10);
    v14 = v13[1];
    v15 = (unsigned int)v13[4];
    if ( (v14 & 0x20) != 0 && (_DWORD)v15 != *((_DWORD *)this + 117) )
      break;
    v16 = 0;
    LODWORD(v5) = v13[1];
    v103 = 0;
    if ( !v8 && (v14 & 2) == 0 )
      goto LABEL_7;
LABEL_31:
    v30 = ((unsigned __int8)v5 & 0x20) == 0;
    v31 = v16;
    v10 = v12;
    if ( v30 )
      v31 = v8;
    v9 = (unsigned int)v106;
    v8 = v31;
  }
  v103 = 1;
LABEL_7:
  v17 = *((_QWORD *)this + 66);
  if ( v15 >= v17
    || (v18 = (unsigned int)v13[5], LODWORD(v5) = 148 * v18, (unsigned __int64)(148 * v18) > 0xFFFFFFFF)
    || (v19 = 148 * v18, LODWORD(v5) = -1, v19 + (unsigned int)v15 < v19)
    || (LODWORD(v5) = v19 + v15, v19 + (unsigned int)v15 > v17) )
  {
    v90 = 1362;
    goto LABEL_121;
  }
  v20 = 0;
  v21 = v15 + *((_QWORD *)this + 65);
  *(_QWORD *)&v113 = v21;
  while ( 2 )
  {
    v22 = v20 + 148;
    if ( v20 + 148 > v19 )
    {
      LODWORD(v5) = v13[1];
      v16 = v103;
      v12 = v107;
      goto LABEL_31;
    }
    if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)(v21 + v20 + 16)) )
    {
      MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v24, (const struct MilRectF *)v23, (struct MilRectF *)v109);
      if ( IsPixelAligned((const struct MilRectF *)v109) )
      {
        if ( (HIDWORD(v109[1]) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*((float *)&v109[1] + 1) - *((float *)&v109[1] + 1);
          v78.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v78);
          v25 = (int)*((float *)&v109[1] + 1) - LODWORD(a3);
        }
        else
        {
          v91 = *((float *)&v109[1] + 1) + 6291456.25;
          v25 = (int)(LODWORD(v91) << 10) >> 11;
        }
        if ( (unsigned __int64)((__int64)v109[1] & 0x7FFFFFFF) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)&v109[1] - *(float *)&v109[1];
          v79.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v79);
          v26 = (int)*(float *)&v109[1] - LODWORD(a3);
        }
        else
        {
          v92 = *(float *)&v109[1] + 6291456.25;
          v26 = (int)(LODWORD(v92) << 10) >> 11;
        }
        if ( (HIDWORD(v109[0]) & 0x7FFFFFFFu) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*((float *)v109 + 1) - *((float *)v109 + 1);
          v80.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v80);
          v27 = (int)*((float *)v109 + 1) - LODWORD(a3);
        }
        else
        {
          v93 = *((float *)v109 + 1) + 6291456.25;
          v27 = (int)(LODWORD(v93) << 10) >> 11;
        }
        if ( (unsigned __int64)((__int64)v109[0] & 0x7FFFFFFF) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)v109 - *(float *)v109;
          v81.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v81);
          v28 = (int)*(float *)v109 - LODWORD(a3);
        }
        else
        {
          v94 = *(float *)v109 + 6291456.25;
          v28 = (int)(LODWORD(v94) << 10) >> 11;
        }
        *(_QWORD *)((char *)&v114 + 4) = __PAIR64__(v26, v27);
        LODWORD(v5) = v120;
        LODWORD(v114) = v28;
        HIDWORD(v114) = v25;
        v29 = v120 + 1;
        if ( v120 + 1 >= v120 )
          v11 = v120 + 1;
        v4 = v29 < v120 ? 0x80070216 : 0;
        if ( v29 < v120 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v120, 0LL, 0, v4, 0xB5u);
        }
        else if ( v11 > v119 )
        {
          v82 = DynArrayImpl<0>::AddMultipleAndSet(v118, 16LL, 1LL, &v114);
          v4 = v82;
          if ( v82 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v82, 0xC0u);
        }
        else
        {
          *(_OWORD *)(v118[0] + 16LL * v120) = v114;
          v120 = v11;
        }
        if ( v4 < 0 )
        {
          v90 = 1392;
          goto LABEL_111;
        }
        goto LABEL_29;
      }
      *(_OWORD *)&a3 = LODWORD(v109[0]);
      y = *((float *)v109 + 1);
      v126 = *((float *)&v109[1] + 1);
      v121 = (struct D2D_POINT_2F)v109[0];
      v122 = *(float *)&v109[1];
      v124 = (unsigned __int64)v109[1];
      v125 = *(float *)v109;
    }
    else
    {
      v83 = &v121;
      v84 = *(float *)v23;
      v85 = *(float *)(v23 + 8);
      v121.y = *(FLOAT *)(v23 + 4);
      y = v121.y;
      v86 = *(float *)(v23 + 12);
      v87 = 4LL;
      v126 = v86;
      v121.x = v84;
      v122 = v85;
      v124 = __PAIR64__(LODWORD(v86), LODWORD(v85));
      v125 = v84;
      do
      {
        *(_OWORD *)&a3 = *(unsigned int *)(v24 + 8);
        v88 = (float)(*(float *)(v24 + 12) * v83->y) + (float)(*(float *)(v24 + 4) * v83->x);
        v83->x = (float)((float)(*(float *)&a3 * v83->y) + (float)(*(float *)v24 * v83->x)) + *(float *)(v24 + 16);
        v83->y = v88 + *(float *)(v24 + 20);
        ++v83;
        --v87;
      }
      while ( v87 );
    }
    if ( v104 )
    {
LABEL_140:
      CPrimitiveGroup::AddFilledPolygonToD2DSink(v105, &v121);
LABEL_29:
      v21 = v113;
      v20 = v22;
      continue;
    }
    break;
  }
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)v24, &v108);
  v4 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef >= 0 )
  {
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v108 + 3) + 80LL))(
                        *((_QWORD *)v108 + 3),
                        &v104);
    v4 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v90 = 1443;
      goto LABEL_118;
    }
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v104 + 136LL))(
                        v104,
                        &v105);
    v4 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v90 = 1445;
      goto LABEL_118;
    }
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v105 + 24LL))(v105, 1LL);
    goto LABEL_140;
  }
  v90 = 1441;
LABEL_118:
  v77 = D2DFactoryNoRef;
LABEL_122:
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v77, v90);
LABEL_40:
  if ( v105 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v105 + 16LL))(v105);
  if ( v104 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 16LL))(v104);
  DynArrayImpl<1>::~DynArrayImpl<1>(v118);
  return (unsigned int)v4;
}
