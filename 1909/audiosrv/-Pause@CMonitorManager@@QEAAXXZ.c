/*
 * XREFs of ?Pause@CMonitorManager@@QEAAXXZ @ 0x18010BB40
 * Callers:
 *     ?PauseAllMonitors@CStreamConnectionManagerImpl@@UEAAXXZ @ 0x18010BC40 (-PauseAllMonitors@CStreamConnectionManagerImpl@@UEAAXXZ.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180059474 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800BF09C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     ?Stop@CMonitor@@QEAAXXZ @ 0x18011169C (-Stop@CMonitor@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMonitorManager::Pause(CMonitorManager *this)
{
  CAudioSessionManager *v2; // rcx
  _QWORD *v3; // rax
  __int64 *Next; // rax
  __int64 v5; // rbx
  CMonitor *v6; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]
  _QWORD *v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 72);
  v8 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x13u, (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids);
  }
  if ( *((_QWORD *)this + 16) )
  {
    v3 = (_QWORD *)*((_QWORD *)this + 14);
    v9 = v3;
    while ( v3 )
    {
      Next = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)v2, &v9);
      ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v10, *Next);
      v5 = v10;
      v6 = *(CMonitor **)(v10 + 200);
      if ( *((_DWORD *)v6 + 14) == 3 )
        CMonitor::Stop(v6);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      v3 = v9;
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
