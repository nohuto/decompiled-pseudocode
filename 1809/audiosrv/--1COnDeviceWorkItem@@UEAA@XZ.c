/*
 * XREFs of ??1COnDeviceWorkItem@@UEAA@XZ @ 0x1800AF91C
 * Callers:
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$2 @ 0x18006BE4E (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$2.c)
 *     _CAudioSrv::QueueOnDeviceWorkItem_::_1_::dtor$4 @ 0x1800B1F4E (_CAudioSrv--QueueOnDeviceWorkItem_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

void __fastcall COnDeviceWorkItem::~COnDeviceWorkItem(COnDeviceWorkItem *this)
{
  *(_QWORD *)this = &COnDeviceWorkItem::`vftable';
  ATL::CStringData::Release((ATL::CStringData *)(*((_QWORD *)this + 1) - 24LL));
}
