/*
 * XREFs of _AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize_::_1_::catch$2 @ 0x18012FAAC
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18007E604 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall AgileApplicationViewChangeListenerConverter::RuntimeClassInitialize_::_1_::catch_2(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  *(_DWORD *)(a2 + 72) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 56),
                           (void *)0x7A,
                           (__int64)"pcshell\\twinui\\appviewmanager\\lib\\notificationdispatcher.cpp",
                           a4);
  return &loc_18012FA9C;
}
