/*
 * XREFs of ?DragEnterForTab@CAppViewManager@@UEAAJAEBU_GUID@@0UtagPOINT@@@Z @ 0x18012FF90
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18003B30C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall CAppViewManager::DragEnterForTab(
        CAppViewManager *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        struct tagPOINT a4)
{
  const char *v4; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::Feature<__WilFeatureTraits_Feature_TabShell>::ReportUsageToService((__int64)this, 3u);
  wil::details::in1diag3::_FailFast_Unexpected(
    retaddr,
    1104LL,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    v4);
  JUMPOUT(0x18012FFC1LL);
}
