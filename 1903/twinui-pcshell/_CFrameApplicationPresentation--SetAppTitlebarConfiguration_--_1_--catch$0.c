/*
 * XREFs of _CFrameApplicationPresentation::SetAppTitlebarConfiguration_::_1_::catch$0 @ 0x180151650
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180116D9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall CFrameApplicationPresentation::SetAppTitlebarConfiguration_::_1_::catch_0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x60E,
                           (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
                           a4);
  return &loc_180151646;
}
