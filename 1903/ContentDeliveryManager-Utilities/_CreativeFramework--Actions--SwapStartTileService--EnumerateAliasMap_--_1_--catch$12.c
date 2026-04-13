/*
 * XREFs of _CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::catch$12 @ 0x1800D2200
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003694 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CreativeFramework::Actions::SwapStartTileService::EnumerateAliasMap_::_1_::catch_12(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 184),
    (void *)0x11B,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
    a4);
  return &loc_180085AEB;
}
