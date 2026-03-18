/*
 * XREFs of ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x18016A928
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800708B0 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x1800A396C (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180168D58 (-CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayConte.c)
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x180168DF8 (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@AEAVCRegion@@@Z @ 0x18016A614 (-ComputeDesktopClip@COverlayContext@@AEAAJAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18016A7E4 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x18016C3E4 (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x18016C5F0 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::DeriveDesktopPlaneAttributes(
        COverlayContext *this,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        gsl::details *a6,
        __int64 a7)
{
  __int64 v8; // rdx
  gsl::details *v10; // rcx
  unsigned int v12; // r15d
  unsigned int v13; // esi
  char v14; // r12
  char CanFastDisableDesktopPlane; // al
  bool v16; // zf
  char v17; // al
  char v18; // r12
  int v19; // eax
  int v20; // eax
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm0_4
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int128 *v36; // rdx
  __int64 v37; // r8
  __int128 v38; // xmm1
  LONG left; // edx
  float v40; // xmm0_4
  float v41; // xmm0_4
  float v42; // xmm0_4
  float v44; // [rsp+30h] [rbp-91h]
  float v45; // [rsp+30h] [rbp-91h]
  unsigned int v47; // [rsp+38h] [rbp-89h] BYREF
  unsigned int *v48; // [rsp+40h] [rbp-81h]
  COverlayContext *v49; // [rsp+50h] [rbp-71h] BYREF
  int v50; // [rsp+58h] [rbp-69h] BYREF
  struct tagRECT v51; // [rsp+A0h] [rbp-21h] BYREF
  char v52; // [rsp+B0h] [rbp-11h] BYREF

  v8 = 0LL;
  v10 = a6;
  v12 = 0;
  v48 = (unsigned int *)a6;
  v13 = 0;
  if ( *(__int64 *)a2 > 0 || (v14 = 0, a4) )
    v14 = 1;
  if ( !a3
    || (CanFastDisableDesktopPlane = COverlayContext::CanFastDisableDesktopPlane((float *)this, a2),
        v8 = 0LL,
        v16 = CanFastDisableDesktopPlane == 0,
        v17 = 1,
        v16) )
  {
    v17 = 0;
  }
  if ( !v14 || v17 )
    goto LABEL_38;
  v13 = 1;
  v47 = 1;
  if ( !*(_QWORD *)a2 )
    goto LABEL_14;
  if ( *(__int64 *)a2 <= 0 )
  {
    gsl::details::terminate(v10);
    __debugbreak();
  }
  if ( COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(**(COverlayContext::OverlayPlaneInfo ***)(a2 + 8)) )
    v18 = 1;
  else
LABEL_14:
    v18 = v8;
  if ( *((_DWORD *)this + 42) <= (unsigned int)v8 || (v16 = !COverlayContext::OverlaysEnabled(this), v19 = 4, !v16) )
    v19 = v8;
  *(_DWORD *)a7 = v19;
  *(_DWORD *)(a7 + 52) = 1;
  if ( v18 || (v20 = 1, *(_QWORD *)a2 == v8) )
    v20 = v8;
  *(_DWORD *)(a7 + 56) = v20;
  *(_DWORD *)(a7 + 76) = *((_DWORD *)this + 25);
  v21 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 152LL))(*((_QWORD *)this + 2));
  *(_DWORD *)(a7 + 104) = ConvertSDRBoostToSDRWhiteLevel(v21, (enum DXGI_COLOR_SPACE_TYPE)*((_DWORD *)this + 25));
  *(_DWORD *)(a7 + 96) = 2;
  if ( a4 )
  {
    *(_QWORD *)(a7 + 4) = 0LL;
    *(_DWORD *)(a7 + 12) = *((_DWORD *)this + 18);
    *(_DWORD *)(a7 + 16) = *((_DWORD *)this + 19);
    v22 = *((float *)this + 14) + 6291456.25;
    *(_DWORD *)(a7 + 20) = (int)(LODWORD(v22) << 10) >> 11;
    v23 = *((float *)this + 15) + 6291456.25;
    *(_DWORD *)(a7 + 24) = (int)(LODWORD(v23) << 10) >> 11;
    v24 = *((float *)this + 16) + 6291456.25;
    *(_DWORD *)(a7 + 28) = (int)(LODWORD(v24) << 10) >> 11;
    v25 = *((float *)this + 17);
  }
  else
  {
    v26 = *((float *)this + 10) + 6291456.25;
    *(_DWORD *)(a7 + 4) = (int)(LODWORD(v26) << 10) >> 11;
    v27 = *((float *)this + 11) + 6291456.25;
    *(_DWORD *)(a7 + 8) = (int)(LODWORD(v27) << 10) >> 11;
    v28 = *((float *)this + 12) + 6291456.25;
    *(_DWORD *)(a7 + 12) = (int)(LODWORD(v28) << 10) >> 11;
    v29 = *((float *)this + 13) + 6291456.25;
    *(_DWORD *)(a7 + 16) = (int)(LODWORD(v29) << 10) >> 11;
    v30 = *((float *)this + 10) + 6291456.25;
    *(_DWORD *)(a7 + 20) = (int)(LODWORD(v30) << 10) >> 11;
    v31 = *((float *)this + 11) + 6291456.25;
    *(_DWORD *)(a7 + 24) = (int)(LODWORD(v31) << 10) >> 11;
    v32 = *((float *)this + 12) + 6291456.25;
    *(_DWORD *)(a7 + 28) = (int)(LODWORD(v32) << 10) >> 11;
    v25 = *((float *)this + 13);
  }
  v44 = v25 + 6291456.25;
  *(_DWORD *)(a7 + 32) = (int)(LODWORD(v44) << 10) >> 11;
  if ( !a3 || v18 )
  {
    v40 = *((float *)this + 14) + 6291456.25;
    *(_DWORD *)(a7 + 36) = (int)(LODWORD(v40) << 10) >> 11;
    v41 = *((float *)this + 15) + 6291456.25;
    *(_DWORD *)(a7 + 40) = (int)(LODWORD(v41) << 10) >> 11;
    v42 = *((float *)this + 16) + 6291456.25;
    *(_DWORD *)(a7 + 44) = (int)(LODWORD(v42) << 10) >> 11;
    v45 = *((float *)this + 17) + 6291456.25;
    *(_DWORD *)(a7 + 48) = (int)(LODWORD(v45) << 10) >> 11;
LABEL_38:
    *v48 = v13;
    return v12;
  }
  v50 = 0;
  v49 = (COverlayContext *)&v50;
  memset_0(&v51, 0, 0x20uLL);
  v33 = COverlayContext::ComputeDesktopClip((float *)this, (__int64 *)a2, &v49);
  v12 = v33;
  if ( v33 >= 0 )
  {
    if ( *(_DWORD *)v49 )
    {
      if ( a5 )
      {
        COverlayContext::CheckAndComputeDesktopPlaneSplit(v49, &v49, &v47, &v51);
        v13 = v47;
        *(struct tagRECT *)(a7 + 36) = v51;
        if ( v13 > 1 )
        {
          v35 = 112LL;
          v36 = (__int128 *)&v52;
          v37 = v13 - 1;
          do
          {
            *(_OWORD *)(a7 + v35) = *(_OWORD *)a7;
            v35 += 112LL;
            *(_OWORD *)(a7 + v35 - 96) = *(_OWORD *)(a7 + 16);
            *(_OWORD *)(a7 + v35 - 80) = *(_OWORD *)(a7 + 32);
            *(_OWORD *)(a7 + v35 - 64) = *(_OWORD *)(a7 + 48);
            *(_OWORD *)(a7 + v35 - 48) = *(_OWORD *)(a7 + 64);
            *(_OWORD *)(a7 + v35 - 32) = *(_OWORD *)(a7 + 80);
            v38 = *v36++;
            *(_OWORD *)(a7 + v35 - 16) = *(_OWORD *)(a7 + 96);
            *(_OWORD *)(a7 + v35 - 76) = v38;
            --v37;
          }
          while ( v37 );
        }
      }
      else
      {
        *(_QWORD *)&v51.right = 0LL;
        *(_QWORD *)&v51.left = 0LL;
        FastRegion::CRegion::GetBoundingRect((LONG **)&v49, &v51);
        left = v51.left;
        *(_DWORD *)(a7 + 40) = v51.top;
        *(_QWORD *)(a7 + 44) = *(_QWORD *)&v51.right;
        *(_DWORD *)(a7 + 36) = left;
      }
    }
    else
    {
      v13 = 0;
    }
    FastRegion::CRegion::FreeMemory((void **)&v49);
    goto LABEL_38;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0xD11u);
  FastRegion::CRegion::FreeMemory((void **)&v49);
  return v12;
}
