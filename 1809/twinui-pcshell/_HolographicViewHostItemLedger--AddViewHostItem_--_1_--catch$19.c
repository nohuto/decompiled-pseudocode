/*
 * XREFs of _HolographicViewHostItemLedger::AddViewHostItem_::_1_::catch$19 @ 0x1801BA1BF
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall HolographicViewHostItemLedger::AddViewHostItem_::_1_::catch_19(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x90,
                           (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
                           a4);
  return &loc_1801BA19E;
}
