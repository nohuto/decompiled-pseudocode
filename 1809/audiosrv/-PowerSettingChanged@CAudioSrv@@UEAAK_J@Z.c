/*
 * XREFs of ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800572A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x1800B1100 (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ?OnPowerStateChanged@CMonitorManager@@QEAAXE@Z @ 0x1800FE87C (-OnPowerStateChanged@CMonitorManager@@QEAAXE@Z.c)
 */

__int64 __fastcall CAudioSrv::PowerSettingChanged(CAudioSrv *this, UUID *Uuid1)
{
  unsigned int v2; // ebx
  unsigned int v5; // esi
  unsigned __int8 v6; // di
  CMonitorManager *v7; // rcx
  __int64 v9; // rax
  const GUID *v10; // r8
  const GUID *v11; // r9
  const struct _TlgProvider_t *v12; // rcx
  void *v13; // r8
  WINBOOL fPending; // [rsp+30h] [rbp-19h] BYREF
  RPC_STATUS Status; // [rsp+34h] [rbp-15h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-11h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-9h] BYREF
  char v18; // [rsp+48h] [rbp-1h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp+7h] BYREF
  int *v20; // [rsp+70h] [rbp+27h]
  __int64 v21; // [rsp+78h] [rbp+2Fh]

  v2 = 0;
  Status = 0;
  if ( !Uuid1 )
    return 13LL;
  if ( Uuid1[1].Data1 == 4 && UuidEqual(Uuid1, &GUID_ACDC_POWER_SOURCE, &Status) )
  {
    v5 = *(_DWORD *)&Uuid1[1].Data2;
    v6 = -1;
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids, v5);
    }
    if ( v5 )
    {
      if ( v5 - 1 <= 1 )
        v6 = 0;
    }
    else
    {
      v6 = 1;
    }
    if ( _MonitorManager )
      CMonitorManager::OnPowerStateChanged(v7, v6);
  }
  else if ( Uuid1[1].Data1 == 4 && UuidEqual(Uuid1, &GUID_SYSTEM_AWAYMODE, &Status) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        32LL,
        &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids,
        *(unsigned int *)&Uuid1[1].Data2);
    }
    return CAudioSrv::ProcessAwayModeStateChange(this, *(_DWORD *)&Uuid1[1].Data2 != 0);
  }
  else
  {
    v9 = *(_QWORD *)&Uuid1->Data1 - *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1;
    if ( *(_QWORD *)&Uuid1->Data1 == *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 )
      v9 = *(_QWORD *)Uuid1->Data4 - *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4;
    if ( !v9 && Uuid1[1].Data1 == 4 )
    {
      v18 = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)&g_csVadList;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      memcpy_0(&fPending, &Uuid1[1].Data2, Uuid1[1].Data1);
      Context = 0LL;
      g_bLowPowerEpoch = fPending != 0;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v13);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      v12 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v12 > 4u )
      {
        v21 = 4LL;
        v20 = &g_bLowPowerEpoch;
        TlgWrite(v12, &unk_180172464, v10, v11, 3u, &pData);
      }
      if ( v18 )
        LeaveCriticalSection(lpCriticalSection);
    }
  }
  return v2;
}
