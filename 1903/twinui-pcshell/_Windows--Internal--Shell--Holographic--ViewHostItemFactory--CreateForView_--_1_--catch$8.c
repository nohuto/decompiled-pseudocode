/*
 * XREFs of _Windows::Internal::Shell::Holographic::ViewHostItemFactory::CreateForView_::_1_::catch$8 @ 0x180218BFA
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180114540 (-Log_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Windows::Internal::Shell::Holographic::ViewHostItemFactory::CreateForView_::_1_::catch_8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::Log_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 88),
    (void *)0x2C,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\viewhostitemfactory.cpp",
    a4);
  **(_QWORD **)(a2 + 96) = 0LL;
  return &loc_180218BC2;
}
