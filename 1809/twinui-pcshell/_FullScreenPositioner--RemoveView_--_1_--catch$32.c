/*
 * XREFs of _FullScreenPositioner::RemoveView_::_1_::catch$32 @ 0x180142497
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

void *__fastcall FullScreenPositioner::RemoveView_::_1_::catch_32(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 64) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x530,
                           (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
                           a4);
  return &loc_18014247C;
}
