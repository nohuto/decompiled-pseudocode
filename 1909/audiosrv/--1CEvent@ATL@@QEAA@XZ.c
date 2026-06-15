/*
 * XREFs of ??1CEvent@ATL@@QEAA@XZ @ 0x1801073A0
 * Callers:
 *     _CMonitor::CMonitor_::_1_::dtor$7 @ 0x180107035 (_CMonitor--CMonitor_--_1_--dtor$7.c)
 *     _CMonitor::CMonitor_::_1_::dtor$17 @ 0x1801070F0 (_CMonitor--CMonitor_--_1_--dtor$17.c)
 *     _CMonitor::CMonitor_::_1_::dtor$18 @ 0x180107103 (_CMonitor--CMonitor_--_1_--dtor$18.c)
 *     _CMonitor::CMonitor_::_1_::dtor$19 @ 0x180107116 (_CMonitor--CMonitor_--_1_--dtor$19.c)
 *     _CMonitorManager::CaptureMonitor::CaptureMonitor_::_1_::dtor$0 @ 0x1801072BE (_CMonitorManager--CaptureMonitor--CaptureMonitor_--_1_--dtor$0.c)
 * Callees:
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180107C30 (-Close@CHandle@ATL@@QEAAXXZ.c)
 */

void __fastcall ATL::CEvent::~CEvent(ATL::CEvent *this)
{
  if ( *(_QWORD *)this )
    ATL::CHandle::Close(this);
}
