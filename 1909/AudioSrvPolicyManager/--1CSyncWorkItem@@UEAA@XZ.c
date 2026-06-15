/*
 * XREFs of ??1CSyncWorkItem@@UEAA@XZ @ 0x1800083FC
 * Callers:
 *     _CGenericWorkItem::CGenericWorkItem_::_1_::dtor$1 @ 0x180037433 (_CGenericWorkItem--CGenericWorkItem_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall CSyncWorkItem::~CSyncWorkItem(CSyncWorkItem *this)
{
  *(_QWORD *)this = &WORKER_THREAD_EVENT::`vftable';
}
