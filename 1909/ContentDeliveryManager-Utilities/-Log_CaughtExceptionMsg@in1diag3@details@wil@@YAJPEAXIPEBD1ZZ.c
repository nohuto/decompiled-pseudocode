/*
 * XREFs of ?Log_CaughtExceptionMsg@in1diag3@details@wil@@YAJPEAXIPEBD1ZZ @ 0x180045148
 * Callers:
 *     _MobilityExperience::CDPActivityHelper::GetActivityStoresForSupportedWebAccounts_::_1_::catch$10 @ 0x1800CE96A (_MobilityExperience--CDPActivityHelper--GetActivityStoresForSupportedWebAccounts_--_1_--catch$10.c)
 *     __lambda_ff7cfae8cddf8b4979caf74bf72ddb07_::operator()_::_1_::catch$27 @ 0x1800CEC4A (__lambda_ff7cfae8cddf8b4979caf74bf72ddb07_--operator()_--_1_--catch$27.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::GetSubscriptionContainer_::_1_::catch$9 @ 0x1800D444F (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--GetSubscriptionCo_ea_1800D444F.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveItemsFromCollection_::_1_::catch$18 @ 0x1800D4599 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveItemsFrom_ea_1800D4599.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$30 @ 0x1800D46B2 (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800D46B2.c)
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::RetrieveLayoutAndItems_::_1_::catch$31 @ 0x1800D471A (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--RetrieveLayoutAnd_ea_1800D471A.c)
 * Callees:
 *     ?ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z @ 0x180045010 (-ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Log_CaughtExceptionMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        const char *a5,
        ...)
{
  __int64 v6; // [rsp+20h] [rbp-38h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  return wil::details::ReportFailure_CaughtExceptionMsg(
           (__int64)this,
           (unsigned int)a2,
           a3,
           (__int64)a4,
           v6,
           retaddr,
           v7,
           (__int64)a4,
           (char *)&a5);
}
