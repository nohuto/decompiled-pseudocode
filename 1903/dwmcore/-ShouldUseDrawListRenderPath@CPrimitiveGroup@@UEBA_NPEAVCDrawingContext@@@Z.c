/*
 * XREFs of ?ShouldUseDrawListRenderPath@CPrimitiveGroup@@UEBA_NPEAVCDrawingContext@@@Z @ 0x1800AD080
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800AD0B0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CAX_NW4ReportingKind.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CPrimitiveGroup::ShouldUseDrawListRenderPath(CPrimitiveGroup *this, struct CDrawingContext *a2)
{
  bool v2; // bl

  v2 = (*(unsigned __int8 (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 48LL))(this, 126LL) == 0;
  wil::Feature<__WilFeatureTraits_Feature_ForceNRE>::ReportUsageToService();
  return v2;
}
