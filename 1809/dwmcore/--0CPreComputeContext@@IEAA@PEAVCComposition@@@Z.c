/*
 * XREFs of ??0CPreComputeContext@@IEAA@PEAVCComposition@@@Z @ 0x18008BBEC
 * Callers:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@_N@Z @ 0x18008BB54 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@_N@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18002C92C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4Reporting.c)
 *     ??0CBspPreComputeHelper@@QEAA@XZ @ 0x18008D31C (--0CBspPreComputeHelper@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18008F4A8 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CAX_NW4Report.c)
 *     ??0CLightStack@@QEAA@XZ @ 0x18008F508 (--0CLightStack@@QEAA@XZ.c)
 */

CPreComputeContext *__fastcall CPreComputeContext::CPreComputeContext(
        CPreComputeContext *this,
        struct CComposition *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 64) = 0;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 72) = 0;
  CLightStack::CLightStack((CPreComputeContext *)((char *)this + 296));
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_DWORD *)this + 146) = 0;
  *((_DWORD *)this + 150) = 0;
  *(_QWORD *)((char *)this + 572) = 1LL;
  *((_DWORD *)this + 137) = 0;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_DWORD *)this + 164) = 0;
  *((_QWORD *)this + 83) = 0LL;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_DWORD *)this + 172) = 0;
  *((_QWORD *)this + 87) = 0LL;
  *((_QWORD *)this + 89) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  CBspPreComputeHelper::CBspPreComputeHelper((CPreComputeContext *)((char *)this + 736));
  *((_QWORD *)this + 138) = 0LL;
  *((_QWORD *)this + 140) = 0LL;
  *((_DWORD *)this + 278) = 0;
  *((_DWORD *)this + 282) = 0;
  *((_QWORD *)this + 137) = &CTransformParentPreComputeHelper::`vftable';
  *((_QWORD *)this + 143) = 0LL;
  *((_QWORD *)this + 145) = 0LL;
  *((_DWORD *)this + 288) = 0;
  *((_DWORD *)this + 292) = 0;
  *((_QWORD *)this + 142) = &CLightPreComputeHelper::`vftable';
  wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::ReportUsageToService(v4, v3, v5);
  *((_BYTE *)this + 1176) = 0;
  wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::ReportUsageToService();
  *((_BYTE *)this + 1178) = CCommonRegistryData::m_fDisableProjectedShadows == 0;
  return this;
}
