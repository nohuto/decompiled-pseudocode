/*
 * XREFs of ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x1801093D0
 * Callers:
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1801083F8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18010B080 (-OnDeviceDescriptionChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?OnDeviceIconChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18010B1E0 (-OnDeviceIconChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18010B480 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18010B820 (-OnPauseOnBatteryChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180054D20 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ??0?$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@@@Z @ 0x180059474 (--0-$CComPtrBase@VCaptureMonitor@CMonitorManager@@@ATL@@IEAA@PEAVCaptureMonitor@CMonitorManager@.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?GetNext@?$CAtlList@PEAVCVADServer@@V?$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVADServer@@AEAPEAU__POSITION@@@Z @ 0x1800BF09C (-GetNext@-$CAtlList@PEAVCVADServer@@V-$CElementTraits@PEAVCVADServer@@@ATL@@@ATL@@QEAAAEAPEAVCVA.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     WPP_SF_SS @ 0x1800D4CE8 (WPP_SF_SS.c)
 */

// Hidden C++ exception states: #wind=1
struct IUnknown **__fastcall CMonitorManager::FindMonitor(__int64 a1, struct IUnknown **a2, const wchar_t *a3)
{
  CAudioSessionManager *v6; // rcx
  _QWORD *v7; // rax
  __int64 *Next; // rax
  struct IUnknown *v9; // rbx
  const wchar_t *v10; // r9
  struct IUnknown *v11; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-10h] BYREF
  char v14; // [rsp+48h] [rbp-8h]
  _QWORD *v15; // [rsp+70h] [rbp+20h] BYREF
  struct IUnknown **v16; // [rsp+78h] [rbp+28h]
  struct IUnknown *v17; // [rsp+88h] [rbp+38h] BYREF

  v16 = a2;
  *a2 = 0LL;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 72);
  v14 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x52u, (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids, a3);
  }
  v7 = *(_QWORD **)(a1 + 112);
  v15 = v7;
  while ( v7 )
  {
    Next = ATL::CAtlList<CVADServer *,ATL::CElementTraits<CVADServer *>>::GetNext((__int64)v6, &v15);
    ATL::CComPtrBase<CMonitorManager::CaptureMonitor>::CComPtrBase<CMonitorManager::CaptureMonitor>(&v17, *Next);
    v9 = v17;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v10 = (const wchar_t *)&v17[16];
      if ( v17[19].lpVtbl >= (struct IUnknownVtbl *)8 )
        v10 = *(const wchar_t **)v10;
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x53u,
        (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
        v10,
        (__int64)v17[25].lpVtbl[3].QueryInterface);
    }
    v11 = v9 + 16;
    if ( v9[19].lpVtbl >= (struct IUnknownVtbl *)8 )
      v11 = (struct IUnknown *)v11->lpVtbl;
    if ( !(unsigned int)_o__wcsicmp(v11, a3) )
    {
      if ( *a2 != v9 )
        ATL::AtlComPtrAssign(a2, v9);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x54u,
          (__int64)&WPP_b9a18bca3a9f3fb3e4a3d91d80ef7b5a_Traceguids,
          *a2);
      }
      if ( v9 )
        ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
      break;
    }
    if ( v9 )
      ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
    v7 = v15;
  }
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  return a2;
}
