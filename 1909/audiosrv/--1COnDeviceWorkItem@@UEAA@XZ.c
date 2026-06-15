/*
 * XREFs of ??1COnDeviceWorkItem@@UEAA@XZ @ 0x1800BDE30
 * Callers:
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$2 @ 0x180070B50 (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$2.c)
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$4 @ 0x1800C0307 (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall COnDeviceWorkItem::~COnDeviceWorkItem(COnDeviceWorkItem *this)
{
  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
}
