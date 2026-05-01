/*
 * XREFs of _HolographicViewHostItemLedger::TryGetViewByWindowId_::_1_::catch$2 @ 0x1802088B9
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall HolographicViewHostItemLedger::TryGetViewByWindowId_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 104) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 88),
                            (void *)0xC9,
                            (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicviewhostitemledger.cpp",
                            a4);
  return &loc_18020889C;
}
