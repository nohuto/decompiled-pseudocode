/*
 * XREFs of ?ComputeDesktopClip@COverlayContext@@AEAAJAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@AEAVCRegion@@@Z @ 0x1801854E0
 * Callers:
 *     ?DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@_N11PEAIPEAUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@@Z @ 0x1801857A8 (-DeriveDesktopPlaneAttributes@COverlayContext@@AEAAJAEBV-$span@PEAVOverlayPlaneInfo@COverlayCont.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003D3C0 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7904 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7DAC (-Subtract@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_J@Z @ 0x180183980 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 */

__int64 __fastcall COverlayContext::ComputeDesktopClip(
        float *a1,
        unsigned __int64 *a2,
        const struct FastRegion::Internal::CRgnData **a3)
{
  unsigned int v3; // ebx
  float v6; // xmm0_4
  float v7; // r9d
  float v8; // xmm0_4
  int v9; // r9d
  int v10; // r11d
  float v11; // xmm0_4
  int v12; // eax
  int v13; // r10d
  const struct FastRegion::Internal::CRgnData *v14; // rdx
  int v15; // edi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  signed int v19; // eax
  __int64 v20; // rcx
  float v22; // [rsp+30h] [rbp-98h]
  void *v23[10]; // [rsp+40h] [rbp-88h] BYREF

  v3 = 0;
  v6 = a1[17] + 6291456.25;
  v7 = v6;
  v8 = a1[16] + 6291456.25;
  v9 = (int)(LODWORD(v7) << 10) >> 11;
  v10 = (int)(LODWORD(v8) << 10) >> 11;
  v11 = a1[15] + 6291456.25;
  v12 = (int)(LODWORD(v11) << 10) >> 11;
  v22 = a1[14] + 6291456.25;
  v13 = (int)(LODWORD(v22) << 10) >> 11;
  if ( v13 >= v10 || v12 >= v9 )
  {
    *(_DWORD *)*a3 = 0;
  }
  else
  {
    v14 = *a3;
    *(_DWORD *)v14 = 2;
    *((_DWORD *)v14 + 1) = v13;
    *((_DWORD *)v14 + 2) = v10;
    *((_DWORD *)v14 + 3) = v12;
    *((_DWORD *)v14 + 4) = 16;
    *((_DWORD *)v14 + 7) = v13;
    *((_DWORD *)v14 + 8) = v10;
    *((_DWORD *)v14 + 5) = v9;
    *((_DWORD *)v14 + 6) = 16;
  }
  v15 = *(_DWORD *)a2;
  while ( --v15 >= 0 )
  {
    v16 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v15);
    FastRegion::CRegion::CRegion((FastRegion::CRegion *)v23, (const struct tagRECT *)(*(_QWORD *)v16 + 76LL));
    v3 = FastRegion::CRegion::Subtract(a3, (const struct FastRegion::Internal::CRgnData **)v23);
    FastRegion::CRegion::FreeMemory(v23);
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v3, 0xD81u, 0LL);
      return v3;
    }
    if ( !*(_BYTE *)(*(_QWORD *)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v15) + 187LL) )
    {
      v18 = gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](a2, v15);
      v19 = FastRegion::CRegion::Union(
              (void **)a3,
              *(const struct FastRegion::Internal::CRgnData ***)(*(_QWORD *)v18 + 168LL));
      v3 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xD88u, 0LL);
        return v3;
      }
    }
  }
  return v3;
}
