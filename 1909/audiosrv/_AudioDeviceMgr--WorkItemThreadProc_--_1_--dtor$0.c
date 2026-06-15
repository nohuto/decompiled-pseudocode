/*
 * XREFs of _AudioDeviceMgr::WorkItemThreadProc_::_1_::dtor$0 @ 0x18007483D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::WorkItemThreadProc_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<CallHoldWorkItem>::~CAutoPtr<CallHoldWorkItem>(a2 + 120);
}
