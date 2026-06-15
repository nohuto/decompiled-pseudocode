/*
 * XREFs of _CProcessSubmixProxy::AddStream_::_1_::catch$20 @ 0x180073AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800CA178 (-Return_CaughtException@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CProcessSubmixProxy::AddStream_::_1_::catch_20(__int64 a1, __int64 a2, __int64 a3, const char *a4)
{
  *(_DWORD *)(a2 + 96) = wil::details::in1diag3::Return_CaughtException(
                           *(wil::details::in1diag3 **)(a2 + 88),
                           (void *)0xB27,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           a4);
  return &loc_180040F57;
}
