/*
 * XREFs of ??1?$CInterfaceList@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@QEAA@XZ @ 0x180107394
 * Callers:
 *     _CMonitorManager::CMonitorManager_::_1_::dtor$3 @ 0x1800743C7 (_CMonitorManager--CMonitorManager_--_1_--dtor$3.c)
 *     _CMonitorManager::Initialize_::_1_::dtor$1 @ 0x180074489 (_CMonitorManager--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CInterfaceList<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>::~CInterfaceList<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>(
        __int64 a1)
{
  ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveAll(a1);
}
