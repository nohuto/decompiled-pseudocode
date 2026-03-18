/*
 * XREFs of ??0CPreComputeContext@@IEAA@PEAVCComposition@@PEAVCVisualTree@@@Z @ 0x1800EE39C
 * Callers:
 *     ??0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@_N@Z @ 0x180025830 (--0CVisualTree@@IEAA@PEAVCComposition@@PEAVCVisual@@_N@Z.c)
 * Callees:
 *     ??0CBspPreComputeHelper@@QEAA@XZ @ 0x180024578 (--0CBspPreComputeHelper@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180025338 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CAX_NW4Report.c)
 *     ??0CLightStack@@QEAA@XZ @ 0x180025398 (--0CLightStack@@QEAA@XZ.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800AFA64 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4Reporting.c)
 */

CPreComputeContext *__fastcall CPreComputeContext::CPreComputeContext(
        CPreComputeContext *this,
        struct CComposition *a2,
        struct CVisualTree *a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8

  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 58) = 0;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 74) = 0;
  CLightStack::CLightStack((CPreComputeContext *)((char *)this + 304));
  *(_QWORD *)((char *)this + 588) = 0LL;
  *((_QWORD *)this + 75) = 0LL;
  *((_DWORD *)this + 152) = 0;
  *(_QWORD *)((char *)this + 580) = 1LL;
  *((_DWORD *)this + 139) = 0;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_QWORD *)this + 80) = 0LL;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_DWORD *)this + 166) = 0;
  *((_QWORD *)this + 84) = 0LL;
  *((_QWORD *)this + 85) = 0LL;
  *((_QWORD *)this + 86) = 0LL;
  *((_DWORD *)this + 174) = 0;
  *((_QWORD *)this + 88) = 0LL;
  *((_QWORD *)this + 90) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_QWORD *)this + 92) = 0LL;
  CBspPreComputeHelper::CBspPreComputeHelper((CPreComputeContext *)((char *)this + 744));
  *((_QWORD *)this + 139) = 0LL;
  *((_QWORD *)this + 141) = 0LL;
  *((_DWORD *)this + 280) = 0;
  *((_DWORD *)this + 284) = 0;
  *((_QWORD *)this + 138) = &CTransformParentPreComputeHelper::`vftable';
  *((_QWORD *)this + 144) = 0LL;
  *((_QWORD *)this + 146) = 0LL;
  *((_DWORD *)this + 290) = 0;
  *((_DWORD *)this + 294) = 0;
  *((_QWORD *)this + 143) = &CLightPreComputeHelper::`vftable';
  wil::Feature<__WilFeatureTraits_Feature_DepthSorting>::ReportUsageToService(v5, v4, v6);
  *((_BYTE *)this + 1184) = 0;
  wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::ReportUsageToService(v8, v7, v9);
  *((_BYTE *)this + 1186) = CCommonRegistryData::m_fDisableProjectedShadows == 0;
  return this;
}
