/*
 * XREFs of _CWorkFifo::WorkItem::Initialize_::_1_::catch$4 @ 0x180114604
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void *__fastcall CWorkFifo::WorkItem::Initialize_::_1_::catch_4(__int64 a1, __int64 a2)
{
  wil::details::in1diag3::Return_Hr(
    *(wil::details::in1diag3 **)(a2 + 72),
    34LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\workfifo.h",
    (const char *)0x8007000ELL);
  return &loc_1801145DE;
}
