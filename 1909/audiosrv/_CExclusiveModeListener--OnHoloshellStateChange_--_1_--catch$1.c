/*
 * XREFs of _CExclusiveModeListener::OnHoloshellStateChange_::_1_::catch$1 @ 0x180126649
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800E56EC (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CExclusiveModeListener::OnHoloshellStateChange_::_1_::catch_1(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Log_Hr(
    *(wil::details::in1diag3 **)(a2 + 216),
    321LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
    (const char *)0x8007000ELL);
  return &loc_1801265FD;
}
