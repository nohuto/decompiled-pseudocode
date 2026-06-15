/*
 * XREFs of ??1?$CAutoPtr@VCallHoldWorkItem@@@ATL@@QEAA@XZ @ 0x180145558
 * Callers:
 *     _AudioDeviceMgr::WorkItemThreadProc_::_1_::dtor$0 @ 0x18007483D (_AudioDeviceMgr--WorkItemThreadProc_--_1_--dtor$0.c)
 *     _AudioDeviceMgr::AddWorkItemToQueue_::_1_::dtor$1 @ 0x180145814 (_AudioDeviceMgr--AddWorkItemToQueue_--_1_--dtor$1.c)
 *     _PhoneTopology::AddWorkItemToQueue_::_1_::dtor$1 @ 0x18014722D (_PhoneTopology--AddWorkItemToQueue_--_1_--dtor$1.c)
 *     _PhoneTopology::GetCellularEnable_::_1_::dtor$2 @ 0x180147D96 (_PhoneTopology--GetCellularEnable_--_1_--dtor$2.c)
 *     _PhoneTopology::GetCellularRxMute_::_1_::dtor$2 @ 0x180148005 (_PhoneTopology--GetCellularRxMute_--_1_--dtor$2.c)
 *     _PhoneTopology::GetCellularTxMute_::_1_::dtor$2 @ 0x1801482F5 (_PhoneTopology--GetCellularTxMute_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAutoPtr<CallHoldWorkItem>::~CAutoPtr<CallHoldWorkItem>(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 8LL))(v2, 1LL);
  *a1 = 0LL;
  return result;
}
