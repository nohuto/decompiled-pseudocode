/*
 * XREFs of _CWorkFifo::ScheduleWorkItem_::_1_::catch$19 @ 0x180121C07
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall CWorkFifo::ScheduleWorkItem_::_1_::catch_19(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 152),
    (void *)0x62,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
    (const char *)0x8007000ELL);
  return &loc_180121BA8;
}
