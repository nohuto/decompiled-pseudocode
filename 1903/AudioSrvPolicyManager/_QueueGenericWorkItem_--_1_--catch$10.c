/*
 * XREFs of _QueueGenericWorkItem_::_1_::catch$10 @ 0x180037496
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180017C9C (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall QueueGenericWorkItem_::_1_::catch_10(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 152) = wil::details::in1diag3::Return_CaughtException(
                            *(wil::details::in1diag3 **)(a2 + 136),
                            (void *)0x416,
                            (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\workitem.cpp",
                            a4);
  return &loc_18002977E;
}
