/*
 * XREFs of _CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup_::_1_::catch$18 @ 0x18033D294
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CDesktopPositioner::EnsureViewIsInViewGroupForTabGroup_::_1_::catch_18(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 232),
                           (void *)0xB30,
                           (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
                           a4);
  return &loc_18033D21B;
}
