/*
 * XREFs of ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801857A8
 * Callers:
 *     ?DeriveCheckCandidatesList@COverlayContext@@CAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1800E4EF4 (-DeriveCheckCandidatesList@COverlayContext@@CAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$v.c)
 * Callees:
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18003CF9C (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1801641B4 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180183980 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x180183CF4 (-CanFastDisableDesktopPlane@COverlayContext@@AEAA_NAEBV-$span@PEAVOverlayPlaneInfo@COverlayConte.c)
 *     ?CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z @ 0x180183D9C (-CheckAndComputeDesktopPlaneSplit@COverlayContext@@AEAAXAEAVCRegion@@PEAIPEAUtagRECT@@@Z.c)
 *     ?ComputeDesktopClip@COverlayContext@@AEAAJAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@AEAVCRegion@@@Z @ 0x1801854E0 (-ComputeDesktopClip@COverlayContext@@AEAAJAEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@.c)
 *     ?OverlaysEnabled@COverlayContext@@AEBA_NXZ @ 0x18018724C (-OverlaysEnabled@COverlayContext@@AEBA_NXZ.c)
 *     ?RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ @ 0x180187458 (-RequiresFrontPlane@OverlayPlaneInfo@COverlayContext@@QEBA_NXZ.c)
 */

__int64 __fastcall COverlayContext::DeriveDesktopPlaneAttributes(
        COverlayContext *this,
        unsigned __int64 *a2,
        char a3,
        char a4,
        char a5,
        unsigned int *a6,
        __int64 a7)
{
  unsigned int v8; // r15d
  unsigned int v9; // esi
  bool v12; // r12
  bool v13; // al
  COverlayContext::OverlayPlaneInfo **v14; // rax
  bool v15; // r12
  int v16; // eax
  BOOL v17; // eax
  float v18; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm0_4
  float v21; // xmm0_4
  float v22; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm0_4
  float v28; // xmm0_4
  float v29; // xmm0_4
  signed int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int128 *v33; // rdx
  __int64 v34; // r8
  __int128 v35; // xmm1
  LONG left; // edx
  float v37; // xmm0_4
  float v38; // xmm0_4
  float v39; // xmm0_4
  float v41; // [rsp+30h] [rbp-91h]
  float v42; // [rsp+30h] [rbp-91h]
  unsigned int v44; // [rsp+38h] [rbp-89h] BYREF
  unsigned int *v45; // [rsp+40h] [rbp-81h]
  COverlayContext *v46; // [rsp+50h] [rbp-71h] BYREF
  int v47; // [rsp+58h] [rbp-69h] BYREF
  struct tagRECT v48; // [rsp+A0h] [rbp-21h] BYREF
  char v49; // [rsp+B0h] [rbp-11h] BYREF

  v8 = 0;
  v9 = 0;
  v45 = a6;
  v12 = (__int64)*a2 > 0 || a4;
  v13 = a3 && COverlayContext::CanFastDisableDesktopPlane((__int64)this, a2);
  if ( !v12 || v13 )
    goto LABEL_40;
  v9 = 1;
  v44 = 1;
  v15 = 0;
  if ( *a2 )
  {
    v14 = (COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, 0LL);
    if ( COverlayContext::OverlayPlaneInfo::RequiresFrontPlane(*v14) )
      v15 = 1;
  }
  if ( !*((_DWORD *)this + 42) || COverlayContext::OverlaysEnabled(this) )
    v16 = 0;
  else
    v16 = 4;
  *(_DWORD *)a7 = v16;
  *(_DWORD *)(a7 + 52) = 1;
  v17 = !v15 && *a2;
  *(_DWORD *)(a7 + 56) = v17;
  *(_DWORD *)(a7 + 76) = *((_DWORD *)this + 25);
  v18 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 152LL))(*((_QWORD *)this + 2));
  *(_DWORD *)(a7 + 104) = ConvertSDRBoostToSDRWhiteLevel(v18, (enum DXGI_COLOR_SPACE_TYPE)*((_DWORD *)this + 25));
  *(_DWORD *)(a7 + 96) = 2;
  if ( a4 )
  {
    *(_QWORD *)(a7 + 4) = 0LL;
    *(_DWORD *)(a7 + 12) = *((_DWORD *)this + 18);
    *(_DWORD *)(a7 + 16) = *((_DWORD *)this + 19);
    v19 = *((float *)this + 14) + 6291456.25;
    *(_DWORD *)(a7 + 20) = (int)(LODWORD(v19) << 10) >> 11;
    v20 = *((float *)this + 15) + 6291456.25;
    *(_DWORD *)(a7 + 24) = (int)(LODWORD(v20) << 10) >> 11;
    v21 = *((float *)this + 16) + 6291456.25;
    *(_DWORD *)(a7 + 28) = (int)(LODWORD(v21) << 10) >> 11;
    v22 = *((float *)this + 17);
  }
  else
  {
    v23 = *((float *)this + 10) + 6291456.25;
    *(_DWORD *)(a7 + 4) = (int)(LODWORD(v23) << 10) >> 11;
    v24 = *((float *)this + 11) + 6291456.25;
    *(_DWORD *)(a7 + 8) = (int)(LODWORD(v24) << 10) >> 11;
    v25 = *((float *)this + 12) + 6291456.25;
    *(_DWORD *)(a7 + 12) = (int)(LODWORD(v25) << 10) >> 11;
    v26 = *((float *)this + 13) + 6291456.25;
    *(_DWORD *)(a7 + 16) = (int)(LODWORD(v26) << 10) >> 11;
    v27 = *((float *)this + 10) + 6291456.25;
    *(_DWORD *)(a7 + 20) = (int)(LODWORD(v27) << 10) >> 11;
    v28 = *((float *)this + 11) + 6291456.25;
    *(_DWORD *)(a7 + 24) = (int)(LODWORD(v28) << 10) >> 11;
    v29 = *((float *)this + 12) + 6291456.25;
    *(_DWORD *)(a7 + 28) = (int)(LODWORD(v29) << 10) >> 11;
    v22 = *((float *)this + 13);
  }
  v41 = v22 + 6291456.25;
  *(_DWORD *)(a7 + 32) = (int)(LODWORD(v41) << 10) >> 11;
  if ( !a3 || v15 )
  {
    v37 = *((float *)this + 14) + 6291456.25;
    *(_DWORD *)(a7 + 36) = (int)(LODWORD(v37) << 10) >> 11;
    v38 = *((float *)this + 15) + 6291456.25;
    *(_DWORD *)(a7 + 40) = (int)(LODWORD(v38) << 10) >> 11;
    v39 = *((float *)this + 16) + 6291456.25;
    *(_DWORD *)(a7 + 44) = (int)(LODWORD(v39) << 10) >> 11;
    v42 = *((float *)this + 17) + 6291456.25;
    *(_DWORD *)(a7 + 48) = (int)(LODWORD(v42) << 10) >> 11;
LABEL_40:
    *v45 = v9;
    return v8;
  }
  v47 = 0;
  v46 = (COverlayContext *)&v47;
  memset_0(&v48, 0, 0x20uLL);
  v30 = COverlayContext::ComputeDesktopClip((float *)this, a2, &v46);
  v8 = v30;
  if ( v30 >= 0 )
  {
    if ( *(_DWORD *)v46 )
    {
      if ( a5 )
      {
        COverlayContext::CheckAndComputeDesktopPlaneSplit(v46, &v46, &v44, &v48);
        v9 = v44;
        *(struct tagRECT *)(a7 + 36) = v48;
        if ( v9 > 1 )
        {
          v32 = 112LL;
          v33 = (__int128 *)&v49;
          v34 = v9 - 1;
          do
          {
            *(_OWORD *)(a7 + v32) = *(_OWORD *)a7;
            v32 += 112LL;
            *(_OWORD *)(a7 + v32 - 96) = *(_OWORD *)(a7 + 16);
            *(_OWORD *)(a7 + v32 - 80) = *(_OWORD *)(a7 + 32);
            *(_OWORD *)(a7 + v32 - 64) = *(_OWORD *)(a7 + 48);
            *(_OWORD *)(a7 + v32 - 48) = *(_OWORD *)(a7 + 64);
            *(_OWORD *)(a7 + v32 - 32) = *(_OWORD *)(a7 + 80);
            v35 = *v33++;
            *(_OWORD *)(a7 + v32 - 16) = *(_OWORD *)(a7 + 96);
            *(_OWORD *)(a7 + v32 - 76) = v35;
            --v34;
          }
          while ( v34 );
        }
      }
      else
      {
        *(_QWORD *)&v48.right = 0LL;
        *(_QWORD *)&v48.left = 0LL;
        FastRegion::CRegion::GetBoundingRect((LONG **)&v46, &v48);
        left = v48.left;
        *(_DWORD *)(a7 + 40) = v48.top;
        *(_QWORD *)(a7 + 44) = *(_QWORD *)&v48.right;
        *(_DWORD *)(a7 + 36) = left;
      }
    }
    else
    {
      v9 = 0;
    }
    FastRegion::CRegion::FreeMemory((void **)&v46);
    goto LABEL_40;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0xD14u, 0LL);
  FastRegion::CRegion::FreeMemory((void **)&v46);
  return v8;
}
