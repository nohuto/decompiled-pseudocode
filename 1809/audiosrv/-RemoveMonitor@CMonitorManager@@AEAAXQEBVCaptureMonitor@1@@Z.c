/*
 * XREFs of ?RemoveMonitor@CMonitorManager@@AEAAXQEBVCaptureMonitor@1@@Z @ 0x1800FF2B0
 * Callers:
 *     ?DoHandleDefaultRenderDeviceChanged@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FC230 (-DoHandleDefaultRenderDeviceChanged@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z @ 0x1800FD1A4 (-HandleDeviceRemoved@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x1800FE3A0 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180019A54 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800B0B7C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ?RemoveAt@?$CAtlList@V?$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@ATL@@V?$CComQIPtrElementTraits@VCaptureMonitor@CMonitorManager@@$1?IID_IUnknown@@3U_GUID@@B@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1800FF19C (-RemoveAt@-$CAtlList@V-$CComQIPtr@VCaptureMonitor@CMonitorManager@@$1-IID_IUnknown@@3U_GUID@@B@A.c)
 *     ?Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ @ 0x1800FFB68 (-Uninitialize@CaptureMonitor@CMonitorManager@@QEAAXXZ.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x180103E10 (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::RemoveMonitor(CMonitorManager *this, CMonitorManager::CaptureMonitor *a2)
{
  CAudioSessionManager *v4; // rcx
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  __int64 *Next; // rax
  CMonitorManager::CaptureMonitor *v8; // rbx
  CMonitor *v9; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-30h] BYREF
  char v11; // [rsp+30h] [rbp-28h]
  _QWORD *v12; // [rsp+60h] [rbp+8h] BYREF
  CMonitorManager::CaptureMonitor *v13; // [rsp+70h] [rbp+18h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 72);
  v11 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x5Au, (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids);
  }
  if ( *((_QWORD *)this + 16) )
  {
    v5 = (_QWORD *)((char *)this + 112);
    v6 = (_QWORD *)*((_QWORD *)this + 14);
    v12 = v6;
    while ( 1 )
    {
      Next = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)v4, &v12);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v13, *Next);
      v8 = v13;
      if ( v13 == a2 )
        break;
      if ( v13 )
        (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v13 + 16LL))(v13);
      v6 = v12;
      if ( !v12 )
        goto LABEL_19;
    }
    ATL::CAtlList<ATL::CComQIPtr<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>,ATL::CComQIPtrElementTraits<CMonitorManager::CaptureMonitor,&_GUID const IID_IUnknown>>::RemoveAt(
      v5,
      v6);
    v9 = (CMonitor *)*((_QWORD *)v8 + 8);
    if ( *((_DWORD *)v9 + 14) == 3 )
      CMonitor::Stop(v9);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x5Bu,
        (__int64)&WPP_1c0de0291c27398d1c278f3c02582c75_Traceguids,
        v8,
        -2LL,
        lpCriticalSection);
    }
    CMonitorManager::CaptureMonitor::Uninitialize(v8);
    (*(void (__fastcall **)(CMonitorManager::CaptureMonitor *))(*(_QWORD *)v8 + 16LL))(v8);
  }
LABEL_19:
  if ( v11 )
    LeaveCriticalSection(lpCriticalSection);
}
