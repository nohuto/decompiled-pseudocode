/*
 * XREFs of ??0CDrawingContext@@AEAA@PEAVCComposition@@@Z @ 0x180024F88
 * Callers:
 *     ?Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x180024E70 (-Create@CDrawingContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180025338 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CAX_NW4Report.c)
 *     ??0CLightStack@@QEAA@XZ @ 0x180025398 (--0CLightStack@@QEAA@XZ.c)
 *     ??0CContextState@@QEAA@XZ @ 0x1800253F0 (--0CContextState@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F2A8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CDrawingContext *__fastcall CDrawingContext::CDrawingContext(CDrawingContext *this, struct CComposition *a2)
{
  __int64 v3; // r8
  int v4; // eax
  CDrawingContext *result; // rax

  *((_QWORD *)this + 4) = a2;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = &CDrawingContext::`vftable'{for `IDrawingContext'};
  *((_QWORD *)this + 1) = &CDrawingContext::`vftable'{for `ID2DContextOwner'};
  *((_QWORD *)this + 2) = &CDrawingContext::`vftable'{for `CResource'};
  CContextState::CContextState((CDrawingContext *)((char *)this + 72));
  *((_DWORD *)this + 100) = 0;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 110) = 1065353216;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 114) = 0;
  *((_DWORD *)this + 118) = 0;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_DWORD *)this + 122) = 0;
  *((_DWORD *)this + 126) = 0;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_DWORD *)this + 130) = 0;
  *((_DWORD *)this + 134) = 0;
  *((_QWORD *)this + 68) = (char *)this + 576;
  *((_QWORD *)this + 69) = (char *)this + 576;
  *((_DWORD *)this + 140) = 4;
  *(_QWORD *)((char *)this + 564) = 4LL;
  *((_QWORD *)this + 76) = (char *)this + 640;
  *((_QWORD *)this + 77) = (char *)this + 640;
  *((_DWORD *)this + 156) = 4;
  *(_QWORD *)((char *)this + 628) = 4LL;
  CLightStack::CLightStack((CDrawingContext *)((char *)this + 672));
  *((_DWORD *)this + 232) = v3;
  *(_QWORD *)((char *)this + 932) = v3;
  *((_QWORD *)this + 114) = (char *)this + 944;
  *((_QWORD *)this + 115) = (char *)this + 944;
  *((_QWORD *)this + 122) = 0LL;
  *((_QWORD *)this + 124) = 0LL;
  *((_DWORD *)this + 246) = 0;
  *((_DWORD *)this + 250) = 0;
  *((_QWORD *)this + 126) = (char *)this + 1040;
  *((_QWORD *)this + 127) = (char *)this + 1040;
  *((_DWORD *)this + 256) = 10;
  *(_QWORD *)((char *)this + 1028) = 10LL;
  *((_QWORD *)this + 230) = (char *)this + 1872;
  *((_QWORD *)this + 231) = (char *)this + 1872;
  *((_DWORD *)this + 464) = 10;
  *(_QWORD *)((char *)this + 1860) = 10LL;
  *((_QWORD *)this + 404) = 0LL;
  *((_QWORD *)this + 406) = 0LL;
  *((_DWORD *)this + 810) = 0;
  *((_DWORD *)this + 814) = 0;
  *((_QWORD *)this + 408) = 0LL;
  *((_QWORD *)this + 410) = 0LL;
  *((_DWORD *)this + 818) = 0;
  *((_DWORD *)this + 822) = 0;
  *((_QWORD *)this + 412) = 0LL;
  *((_QWORD *)this + 414) = 0LL;
  *((_DWORD *)this + 826) = 0;
  *((_DWORD *)this + 830) = 0;
  *(_QWORD *)((char *)this + 3364) = 0LL;
  *((_QWORD *)this + 422) = 0LL;
  *((_DWORD *)this + 846) = 0;
  *(_QWORD *)((char *)this + 3356) = 1LL;
  *((_DWORD *)this + 833) = 0;
  *((_QWORD *)this + 417) = 0LL;
  *((_QWORD *)this + 418) = 0LL;
  *((_DWORD *)this + 868) = 0;
  *((_QWORD *)this + 435) = 0LL;
  *((_QWORD *)this + 437) = 0LL;
  *((_DWORD *)this + 872) = 0;
  *((_DWORD *)this + 876) = 0;
  *((_QWORD *)this + 443) = 0LL;
  *((_QWORD *)this + 444) = 0LL;
  *((_QWORD *)this + 445) = 0LL;
  *((_DWORD *)this + 892) = 0;
  *((_QWORD *)this + 447) = 0LL;
  *((_QWORD *)this + 448) = 0LL;
  *((_QWORD *)this + 449) = 0LL;
  *((_DWORD *)this + 900) = 0;
  *((_QWORD *)this + 451) = 0LL;
  *((_QWORD *)this + 452) = 0LL;
  *((_QWORD *)this + 453) = 0LL;
  *((_DWORD *)this + 908) = 0;
  *((_OWORD *)this + 228) = _xmm;
  *((_WORD *)this + 1856) = 32085;
  *((_OWORD *)this + 229) = _xmm;
  *((_OWORD *)this + 230) = _xmm;
  *((_OWORD *)this + 231) = _xmm;
  CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawingContext *)((char *)this + 3744));
  *((_DWORD *)this + 1532) = 0;
  *((_QWORD *)this + 768) = 0LL;
  *((_QWORD *)this + 769) = 0LL;
  *((_QWORD *)this + 770) = 0LL;
  *((_DWORD *)this + 1542) = 0;
  *((_QWORD *)this + 775) = (char *)this + 6232;
  *((_QWORD *)this + 776) = (char *)this + 6232;
  *((_DWORD *)this + 1554) = 5;
  *(_QWORD *)((char *)this + 6220) = 5LL;
  (***((void (__fastcall ****)(_QWORD))this + 4))(*((_QWORD *)this + 4));
  *(_OWORD *)((char *)this + 6328) = _xmm;
  *((_WORD *)this + 3172) = 257;
  *((_DWORD *)this + 1534) = 0x7FFFFFFF;
  *((_BYTE *)this + 6350) = 1;
  v4 = DisplayId::Invalid;
  *((_DWORD *)this + 103) = -1;
  *((_DWORD *)this + 100) = v4;
  *((_DWORD *)this + 101) = 0;
  *((_QWORD *)this + 773) = (char *)this + 6176;
  *((_QWORD *)this + 772) = (char *)this + 6176;
  wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::ReportUsageToService();
  result = this;
  *((_BYTE *)this + 6352) = __PAIR64__(
                              CCommonRegistryData::m_fDisableProjectedShadows,
                              CCommonRegistryData::m_fDisableProjectedShadowsRendering) == 0;
  return result;
}
