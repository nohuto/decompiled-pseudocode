/*
 * XREFs of _CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule_::_1_::catch$17 @ 0x1800D1423
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003694 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CreativeFramework::RuleSetHandlers::DiagTrackRuleSetHandler::RemoveRule_::_1_::catch_17(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 1304),
    (void *)0x58,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\diagtrackrulesethandler.cpp",
    a4);
  return &loc_18007AACD;
}
