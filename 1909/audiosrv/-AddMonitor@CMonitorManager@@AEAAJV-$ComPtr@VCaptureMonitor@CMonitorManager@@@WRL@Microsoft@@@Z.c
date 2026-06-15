/*
 * XREFs of ?AddMonitor@CMonitorManager@@AEAAJV?$ComPtr@VCaptureMonitor@CMonitorManager@@@WRL@Microsoft@@@Z @ 0x180107A70
 * Callers:
 *     ?SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N@Z @ 0x18010CCA0 (-SetStreamingState@CStreamConnectionImpl@CMonitorManager@@UEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?AddTail@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAPEAU__POSITION@@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180107AFC (-AddTail@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@AT.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CMonitorManager::AddMonitor(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rcx

  v4 = -2147467259;
  if ( *a2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
    ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::AddTail(
      a1 + 112,
      *a2);
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 72));
    v4 = 0;
  }
  v5 = (_QWORD *)*a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v5 + 16LL))(v5, *v5);
  }
  return v4;
}
