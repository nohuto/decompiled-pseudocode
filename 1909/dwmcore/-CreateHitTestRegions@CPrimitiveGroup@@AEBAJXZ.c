/*
 * XREFs of ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000AC3C
 * Callers:
 *     ?EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000AAC4 (-EnsureHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 * Callees:
 *     ?IsPixelAligned@@YA_NAEBUMilRectF@@@Z @ 0x18000B160 (-IsPixelAligned@@YA_NAEBUMilRectF@@@Z.c)
 *     ?Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z @ 0x18000B22C (-Transform2DBounds@MILMatrix3x2@@QEBAXAEBUMilRectF@@AEAU2@@Z.c)
 *     ?Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ @ 0x18000B378 (-Is2DAxisAlignedPreservingApprox@MILMatrix3x2@@QEBA_NXZ.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18000B3E0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@QEAA@XZ @ 0x18000B6BC (--0-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002ADC8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??1CRegionShape@@UEAA@XZ @ 0x18004AF7C (--1CRegionShape@@UEAA@XZ.c)
 *     ?BuildFromRects@CRegionShape@@QEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18004E5C4 (-BuildFromRects@CRegionShape@@QEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Re.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800D2600 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z @ 0x1801C40AC (-AddFilledPolygonToD2DSink@CPrimitiveGroup@@CAXPEAUID2D1GeometrySink@@PEAUD2D_POINT_2F@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CPrimitiveGroup::CreateHitTestRegions(CPrimitiveGroup *this, __int64 a2, double a3)
{
  int v4; // ebx
  MILMatrix3x2 *v5; // rcx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned int v8; // r14d
  __int64 v9; // rcx
  char v10; // r12
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v13; // r9d
  _DWORD *v14; // rdi
  int v15; // eax
  unsigned __int64 v16; // rdx
  char v17; // r13
  int v18; // ecx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  float *v24; // rcx
  unsigned int v25; // r10d
  unsigned int v26; // r11d
  int v27; // r8d
  int v28; // edx
  int v29; // ecx
  int v30; // eax
  unsigned int v31; // ecx
  bool v32; // zf
  char v33; // cl
  int v34; // eax
  unsigned int v35; // ecx
  int D2DGeometry; // eax
  unsigned int v37; // ecx
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
  int v50; // ecx
  float v51; // xmm0_4
  int v52; // eax
  __int128 v53; // xmm0
  __int64 v54; // rax
  __int64 v55; // r9
  unsigned int v56; // r11d
  int v57; // r8d
  __m128 v58; // xmm1
  int v59; // edx
  __m128 v60; // xmm1
  int v61; // ecx
  __m128 v62; // xmm1
  int v63; // eax
  __m128 v64; // xmm1
  int v65; // eax
  float v66; // xmm0_4
  float v67; // xmm1_4
  struct D2D_POINT_2F *v68; // rax
  FLOAT v69; // xmm2_4
  __int64 v70; // rdx
  float v71; // xmm0_4
  FLOAT v72; // xmm3_4
  __m128 v73; // xmm1
  __m128 v74; // xmm1
  __m128 v75; // xmm1
  __m128 v76; // xmm1
  int v77; // eax
  int D2DFactoryNoRef; // eax
  int v79; // r9d
  __m128 v80; // xmm1
  __m128 v81; // xmm1
  __m128 v82; // xmm1
  __m128 v83; // xmm1
  int v84; // eax
  struct D2D_POINT_2F *v85; // rax
  FLOAT v86; // xmm2_4
  float v87; // xmm0_4
  float v88; // xmm1_4
  __int64 v89; // rdx
  FLOAT v90; // xmm3_4
  unsigned int v91; // [rsp+28h] [rbp-E0h]
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
  float v103; // [rsp+38h] [rbp-D0h]
  __int64 v104; // [rsp+40h] [rbp-C8h] BYREF
  struct ID2D1GeometrySink *v105; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v106; // [rsp+50h] [rbp-B8h]
  struct CD2DFactory *v107; // [rsp+58h] [rbp-B0h] BYREF
  struct CD2DFactory *v108; // [rsp+60h] [rbp-A8h] BYREF
  struct CD2DFactory *v109[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v110; // [rsp+78h] [rbp-90h] BYREF
  float v111; // [rsp+80h] [rbp-88h]
  float v112; // [rsp+84h] [rbp-84h]
  __int128 v113; // [rsp+88h] [rbp-80h] BYREF
  __int128 v114; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v115[3]; // [rsp+A8h] [rbp-60h] BYREF
  int v116; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v117; // [rsp+100h] [rbp-8h]
  _QWORD v118[2]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v119; // [rsp+11Ch] [rbp+14h]
  unsigned int v120; // [rsp+120h] [rbp+18h]
  struct D2D_POINT_2F v121; // [rsp+228h] [rbp+120h] BYREF
  float v122; // [rsp+230h] [rbp+128h]
  FLOAT y; // [rsp+234h] [rbp+12Ch]
  unsigned __int64 v124; // [rsp+238h] [rbp+130h]
  FLOAT v125; // [rsp+240h] [rbp+138h]
  float v126; // [rsp+244h] [rbp+13Ch]

  v4 = 0;
  DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>(v118);
  v104 = 0LL;
  v105 = 0LL;
  ReleaseInterface<ID2D1Geometry>((char *)this + 72);
  ReleaseInterface<ID2D1Geometry>((char *)this + 80);
  v6 = *((_QWORD *)this + 67);
  v7 = v6 + *((_QWORD *)this + 68);
  v8 = 0;
  while ( v6 < v7 )
  {
    v39 = (_BYTE *)(v6 + 16);
    v40 = (const struct MilRectF *)v6;
    v6 += 17LL;
    if ( (unsigned __int64)v39 > v7 || v6 > v7 )
    {
      v91 = 1226;
      goto LABEL_113;
    }
    if ( *v39 )
    {
      v5 = (MILMatrix3x2 *)v6;
      v6 += 24LL;
      if ( v6 > v7 )
      {
        v91 = 1237;
LABEL_113:
        v79 = -2147467259;
        v4 = -2147467259;
        goto LABEL_114;
      }
      if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox(v5) )
      {
        MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v41, (const struct MilRectF *)v55, (struct MilRectF *)&v110);
        if ( !IsPixelAligned((const struct MilRectF *)&v110) )
        {
          *(_OWORD *)&a3 = (unsigned int)v110;
          v66 = v111;
          v121.y = *((FLOAT *)&v110 + 1);
          y = *((float *)&v110 + 1);
          v67 = v112;
LABEL_96:
          v126 = v67;
          v125 = *(float *)&a3;
          v124 = __PAIR64__(LODWORD(v67), LODWORD(v66));
          v122 = v66;
          v121.x = *(FLOAT *)&a3;
          goto LABEL_97;
        }
        if ( (v56 & LODWORD(v112)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v112 - v112;
          v58.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v58);
          v57 = (int)v112 - LODWORD(a3);
        }
        else
        {
          v100 = v112 + 6291456.25;
          v57 = (int)(LODWORD(v100) << 10) >> 11;
        }
        if ( (v56 & LODWORD(v111)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)v111 - v111;
          v60.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v60);
          v59 = (int)v111 - LODWORD(a3);
        }
        else
        {
          v101 = v111 + 6291456.25;
          v59 = (int)(LODWORD(v101) << 10) >> 11;
        }
        if ( (v56 & HIDWORD(v110)) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*((float *)&v110 + 1) - *((float *)&v110 + 1);
          v62.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v62);
          v61 = (int)*((float *)&v110 + 1) - LODWORD(a3);
        }
        else
        {
          v102 = *((float *)&v110 + 1) + 6291456.25;
          v61 = (int)(LODWORD(v102) << 10) >> 11;
        }
        if ( (v56 & (unsigned int)v110) > 0x497FFFF0 )
        {
          *(float *)&a3 = (float)(int)*(float *)&v110 - *(float *)&v110;
          v64.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v64);
          v63 = (int)*(float *)&v110 - LODWORD(a3);
        }
        else
        {
          v103 = *(float *)&v110 + 6291456.25;
          v63 = (int)(LODWORD(v103) << 10) >> 11;
        }
        v109[0] = (struct CD2DFactory *)__PAIR64__(v61, v63);
        v54 = v120;
        v109[1] = (struct CD2DFactory *)__PAIR64__(v57, v59);
        LODWORD(v5) = v120 + 1;
        if ( v120 + 1 >= v120 )
        {
          if ( (unsigned int)v5 > v119 )
          {
            v65 = DynArrayImpl<0>::AddMultipleAndSet(v118, 16LL, 1LL, v109);
            v4 = v65;
            if ( v65 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v65, 0xC3u, 0LL);
            goto LABEL_80;
          }
          v53 = *(_OWORD *)v109;
LABEL_58:
          v4 = 0;
          *(_OWORD *)(v118[0] + 16 * v54) = v53;
          v120 = (unsigned int)v5;
        }
        else
        {
          v4 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, -2147024362, 0xB8u, 0LL);
LABEL_80:
          if ( v4 < 0 )
          {
            v91 = 1256;
LABEL_104:
            v79 = v4;
            goto LABEL_114;
          }
        }
      }
      else
      {
        v68 = &v121;
        v69 = *(float *)v55;
        v70 = 4LL;
        v71 = *(float *)(v55 + 8);
        v121.y = *(FLOAT *)(v55 + 4);
        y = v121.y;
        HIDWORD(v124) = *(_DWORD *)(v55 + 12);
        v126 = *((float *)&v124 + 1);
        v121.x = v69;
        v122 = v71;
        *(float *)&v124 = v71;
        v125 = v69;
        do
        {
          *(_OWORD *)&a3 = LODWORD(v68->x);
          v72 = (float)((float)(v68->x * v41[1]) + (float)(v68->y * v41[3])) + v41[5];
          v68->x = (float)((float)(*(float *)&a3 * *v41) + (float)(v68->y * v41[2])) + v41[4];
          v68->y = v72;
          ++v68;
          --v70;
        }
        while ( v70 );
LABEL_97:
        if ( !v104 )
        {
          D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)v41, &v107);
          v4 = D2DFactoryNoRef;
          if ( D2DFactoryNoRef < 0 )
          {
            v91 = 1334;
            goto LABEL_110;
          }
          D2DFactoryNoRef = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v107 + 3) + 80LL))(
                              *((_QWORD *)v107 + 3),
                              &v104);
          v4 = D2DFactoryNoRef;
          if ( D2DFactoryNoRef < 0 )
          {
            v91 = 1336;
            goto LABEL_110;
          }
          D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v104 + 136LL))(
                              v104,
                              &v105);
          v4 = D2DFactoryNoRef;
          if ( D2DFactoryNoRef < 0 )
          {
            v91 = 1338;
            goto LABEL_110;
          }
          (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v105 + 24LL))(v105, 1LL);
        }
        CPrimitiveGroup::AddFilledPolygonToD2DSink(v105, &v121);
      }
    }
    else
    {
      if ( !IsPixelAligned(v40) )
      {
        *(_OWORD *)&a3 = *(unsigned int *)v42;
        v66 = v42[2];
        v121.y = v42[1];
        y = v121.y;
        v67 = *(float *)(v43 + 12);
        goto LABEL_96;
      }
      v45 = *(float *)(v43 + 12);
      if ( (v44 & LODWORD(v45)) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v45 - v45;
        v73.m128_f32[0] = -0.5;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v73);
        v46 = (int)v45 - LODWORD(a3);
      }
      else
      {
        v96 = v45 + 6291456.25;
        v46 = (int)(LODWORD(v96) << 10) >> 11;
      }
      v47 = v42[2];
      if ( (v44 & LODWORD(v47)) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v47 - v47;
        v74.m128_f32[0] = -0.5;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v74);
        v48 = (int)v47 - LODWORD(a3);
      }
      else
      {
        v97 = v47 + 6291456.25;
        v48 = (int)(LODWORD(v97) << 10) >> 11;
      }
      v49 = v42[1];
      if ( (v44 & LODWORD(v49)) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v49 - v49;
        v75.m128_f32[0] = -0.5;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v75);
        v50 = (int)v49 - LODWORD(a3);
      }
      else
      {
        v98 = v49 + 6291456.25;
        v50 = (int)(LODWORD(v98) << 10) >> 11;
      }
      v51 = *v42;
      if ( (v44 & *(_DWORD *)v42) > 0x497FFFF0 )
      {
        *(float *)&a3 = (float)(int)v51 - v51;
        v76.m128_f32[0] = -0.5;
        *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v76);
        v52 = (int)v51 - LODWORD(a3);
      }
      else
      {
        v99 = v51 + 6291456.25;
        v52 = (int)(LODWORD(v99) << 10) >> 11;
      }
      *(_QWORD *)&v113 = __PAIR64__(v50, v52);
      *((_QWORD *)&v113 + 1) = __PAIR64__(v46, v48);
      LODWORD(v5) = v120 + 1;
      if ( v120 + 1 < v120 )
      {
        v4 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, -2147024362, 0xB8u, 0LL);
      }
      else
      {
        if ( (unsigned int)v5 <= v119 )
        {
          v53 = v113;
          v54 = v120;
          goto LABEL_58;
        }
        v77 = DynArrayImpl<0>::AddMultipleAndSet(v118, 16LL, 1LL, &v113);
        v4 = v77;
        if ( v77 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v77, 0xC3u, 0LL);
      }
      if ( v4 < 0 )
      {
        v91 = 1307;
        goto LABEL_104;
      }
    }
  }
  v9 = *((_QWORD *)this + 63);
  v10 = 0;
  v11 = *((_DWORD *)this + 128);
  v12 = 0;
  v110 = v9;
  LODWORD(v107) = v11;
  while ( 1 )
  {
    v13 = v12 + 144;
    LODWORD(v106) = v12 + 144;
    if ( v12 + 144 > v11 )
    {
      if ( v105 )
      {
        D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v105 + 72LL))(v105);
        v4 = D2DFactoryNoRef;
        if ( D2DFactoryNoRef < 0 )
        {
          v91 = 1488;
          goto LABEL_110;
        }
        *((_QWORD *)this + 10) = v104;
        v104 = 0LL;
      }
      if ( !v120 )
        goto LABEL_37;
      v115[0] = &CRegionShape::`vftable';
      v115[1] = 0LL;
      v115[2] = &v116;
      v116 = 0;
      v117 = 0LL;
      v34 = CRegionShape::BuildFromRects(v115, v118[0], v120);
      v4 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x5DCu, 0LL);
      }
      else
      {
        D2DGeometry = CRegionShape::GetD2DGeometry((CRegionShape *)v115, 0LL, (struct ID2D1Geometry **)this + 9);
        v4 = D2DGeometry;
        if ( D2DGeometry >= 0 )
        {
          CRegionShape::~CRegionShape((CRegionShape *)v115);
LABEL_37:
          *((_BYTE *)this + 88) = 1;
          goto LABEL_38;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, D2DGeometry, 0x5E1u, 0LL);
      }
      CRegionShape::~CRegionShape((CRegionShape *)v115);
      goto LABEL_38;
    }
    v14 = (_DWORD *)(v9 + v12);
    v15 = v14[1];
    v16 = (unsigned int)v14[4];
    if ( (v15 & 0x20) != 0 && (_DWORD)v16 != *((_DWORD *)this + 117) )
      break;
    v17 = 0;
    LOBYTE(v18) = v14[1];
    if ( !v10 && (v15 & 2) == 0 )
      goto LABEL_8;
LABEL_29:
    v32 = (v18 & 0x20) == 0;
    v33 = v17;
    v12 = v13;
    if ( v32 )
      v33 = v10;
    v11 = (unsigned int)v107;
    v10 = v33;
    v9 = v110;
  }
  v17 = 1;
LABEL_8:
  v5 = (MILMatrix3x2 *)*((_QWORD *)this + 66);
  if ( v16 >= (unsigned __int64)v5
    || (v19 = 148LL * (unsigned int)v14[5], v19 > 0xFFFFFFFF)
    || (v20 = (unsigned int)(v19 + v16), (unsigned int)v20 < (unsigned int)v19)
    || v20 > (unsigned __int64)v5 )
  {
    v91 = 1383;
    goto LABEL_113;
  }
  v21 = v16 + *((_QWORD *)this + 65);
  *(_QWORD *)&v113 = v21;
  while ( 2 )
  {
    v22 = v8;
    v8 += 148;
    if ( v8 > (unsigned int)v19 )
    {
      v18 = v14[1];
      v8 = 0;
      v13 = v106;
      goto LABEL_29;
    }
    if ( MILMatrix3x2::Is2DAxisAlignedPreservingApprox((MILMatrix3x2 *)(v21 + v22 + 16)) )
    {
      MILMatrix3x2::Transform2DBounds((MILMatrix3x2 *)v24, (const struct MilRectF *)v23, (struct MilRectF *)v109);
      if ( IsPixelAligned((const struct MilRectF *)v109) )
      {
        if ( (v26 & HIDWORD(v109[1])) > v25 )
        {
          *(float *)&a3 = (float)(int)*((float *)&v109[1] + 1) - *((float *)&v109[1] + 1);
          v80.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v80);
          v27 = (int)*((float *)&v109[1] + 1) - LODWORD(a3);
        }
        else
        {
          v92 = *((float *)&v109[1] + 1) + 6291456.25;
          v27 = (int)(LODWORD(v92) << 10) >> 11;
        }
        if ( (unsigned __int64)(v26 & (__int64)v109[1]) > v25 )
        {
          *(float *)&a3 = (float)(int)*(float *)&v109[1] - *(float *)&v109[1];
          v81.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v81);
          v28 = (int)*(float *)&v109[1] - LODWORD(a3);
        }
        else
        {
          v93 = *(float *)&v109[1] + 6291456.25;
          v28 = (int)(LODWORD(v93) << 10) >> 11;
        }
        if ( (v26 & HIDWORD(v109[0])) > v25 )
        {
          *(float *)&a3 = (float)(int)*((float *)v109 + 1) - *((float *)v109 + 1);
          v82.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v82);
          v29 = (int)*((float *)v109 + 1) - LODWORD(a3);
        }
        else
        {
          v94 = *((float *)v109 + 1) + 6291456.25;
          v29 = (int)(LODWORD(v94) << 10) >> 11;
        }
        if ( (unsigned __int64)(v26 & (__int64)v109[0]) > v25 )
        {
          *(float *)&a3 = (float)(int)*(float *)v109 - *(float *)v109;
          v83.m128_f32[0] = -0.5;
          *(__m128 *)&a3 = _mm_cmple_ss(*(__m128 *)&a3, v83);
          v30 = (int)*(float *)v109 - LODWORD(a3);
        }
        else
        {
          v95 = *(float *)v109 + 6291456.25;
          v30 = (int)(LODWORD(v95) << 10) >> 11;
        }
        *(_QWORD *)&v114 = __PAIR64__(v29, v30);
        *((_QWORD *)&v114 + 1) = __PAIR64__(v27, v28);
        v31 = v120 + 1;
        if ( v120 + 1 < v120 )
        {
          v4 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2147024362, 0xB8u, 0LL);
        }
        else
        {
          if ( v31 <= v119 )
          {
            v4 = 0;
            *(_OWORD *)(v118[0] + 16LL * v120) = v114;
            v120 = v31;
LABEL_27:
            v21 = v113;
            continue;
          }
          v84 = DynArrayImpl<0>::AddMultipleAndSet(v118, 16LL, 1LL, &v114);
          v4 = v84;
          if ( v84 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v84, 0xC3u, 0LL);
        }
        if ( v4 < 0 )
        {
          v91 = 1413;
          goto LABEL_104;
        }
        goto LABEL_27;
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
      v85 = &v121;
      v86 = *(float *)v23;
      v87 = *(float *)(v23 + 8);
      v121.y = *(FLOAT *)(v23 + 4);
      y = v121.y;
      v88 = *(float *)(v23 + 12);
      v89 = 4LL;
      v126 = v88;
      v121.x = v86;
      v122 = v87;
      v124 = __PAIR64__(LODWORD(v88), LODWORD(v87));
      v125 = v86;
      do
      {
        *(_OWORD *)&a3 = LODWORD(v85->x);
        v90 = (float)((float)(v85->x * v24[1]) + (float)(v85->y * v24[3])) + v24[5];
        v85->x = (float)((float)(*(float *)&a3 * *v24) + (float)(v85->y * v24[2])) + v24[4];
        v85->y = v90;
        ++v85;
        --v89;
      }
      while ( v89 );
    }
    break;
  }
  if ( v104 )
  {
LABEL_134:
    CPrimitiveGroup::AddFilledPolygonToD2DSink(v105, &v121);
    goto LABEL_27;
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
      v91 = 1464;
      goto LABEL_110;
    }
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, struct ID2D1GeometrySink **))(*(_QWORD *)v104 + 136LL))(
                        v104,
                        &v105);
    v4 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v91 = 1466;
      goto LABEL_110;
    }
    (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64))(*(_QWORD *)v105 + 24LL))(v105, 1LL);
    goto LABEL_134;
  }
  v91 = 1462;
LABEL_110:
  v79 = D2DFactoryNoRef;
LABEL_114:
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v5, 0LL, 0, v79, v91, 0LL);
LABEL_38:
  if ( v105 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v105 + 16LL))(v105);
  if ( v104 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v104 + 16LL))(v104);
  DynArrayImpl<0>::~DynArrayImpl<0>(v118);
  return (unsigned int)v4;
}
