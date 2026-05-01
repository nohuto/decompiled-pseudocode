/*
 * XREFs of ?get_WindowExperienceKind@ViewEventArgsForShowAsViewMode@@UEAAJPEAW4ExperienceKind@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180276350
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180132300 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_LightweightWindows@@@wil@@CAX_NW4Rep.c)
 */

__int64 __fastcall ViewEventArgsForShowAsViewMode::get_WindowExperienceKind(
        ViewEventArgsForShowAsViewMode *this,
        enum Windows::Internal::ApplicationModel::WindowManagement::ExperienceKind *a2,
        __int64 a3)
{
  wil::Feature<__WilFeatureTraits_Feature_LightweightWindows>::ReportUsageToService((__int64)this, (__int64)a2, a3);
  *(_DWORD *)a2 = *((_DWORD *)this + 13);
  return 0LL;
}
