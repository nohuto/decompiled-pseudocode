/*
 * XREFs of _VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::catch$65 @ 0x1803FDED4
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall VirtualDesktopGroupedViewsEventListener::RuntimeClassInitialize_::_1_::catch_65(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 232) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 200),
                            (void *)0x71,
                            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgroupedviewseventlistener.cpp",
                            a4);
  return &loc_1803FDE3B;
}
