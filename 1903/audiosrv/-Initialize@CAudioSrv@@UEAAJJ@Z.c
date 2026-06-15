/*
 * XREFs of ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x18005BB20
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x180052834 (-KsNotifications_ServiceStart@@YAJXZ.c)
 *     ??$make_unique@VCPowerReferenceManager@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@0@XZ @ 0x18005AA08 (--$make_unique@VCPowerReferenceManager@@$$V$0A@@std@@YA-AV-$unique_ptr@VCPowerReferenceManager@@.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x18005AB64 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x18005BDCC (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 *     ?MME_ServiceStart@@YAJXZ @ 0x18005BEC0 (-MME_ServiceStart@@YAJXZ.c)
 *     ??0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z @ 0x18005C558 (--0CAudioDGProcess@@QEAA@PEAUIMonitorDGTermination@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800BE320 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     McTemplateU0zq @ 0x1800C2580 (McTemplateU0zq.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioSrv::Initialize(CAudioSrv *this, int a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rax
  CPowerReferenceManager **v7; // rax
  CPowerReferenceManager *v8; // rcx
  CPowerReferenceManager *v9; // rbx
  void *v10; // rbx
  HRESULT v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  LPVOID ppv; // [rsp+38h] [rbp-59h] BYREF
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+40h] [rbp-51h] BYREF
  __int64 v20; // [rsp+58h] [rbp-39h]
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+68h] [rbp-29h] BYREF

  v20 = -2LL;
  memset_0(&spc, 0, sizeof(spc));
  if ( !a2 )
  {
    v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v5 = v4;
    ppv = v4;
    if ( v4 )
    {
      ATL::CAtlExeModuleT<CAudioServiceModule>::CAtlExeModuleT<CAudioServiceModule>(v4);
      *(_QWORD *)v5 = &CAudioServiceModule::`vftable';
      v5[96] = 0;
    }
    else
    {
      v5 = 0LL;
    }
    *((_QWORD *)this + 11) = v5;
    if ( !v5 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids);
      }
      a2 = -2147024882;
    }
  }
  GetPwrCapabilities(&spc);
  if ( !a2 )
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
    ppv = v6;
    if ( v6 )
      v6 = (struct _RTL_CRITICAL_SECTION *)CAudioDGProcess::CAudioDGProcess(
                                             (CAudioDGProcess *)v6,
                                             (struct IMonitorDGTermination *)(((unsigned __int64)this + 80) & -(__int64)(this != 0LL)));
    g_ADGProcess = v6;
    if ( v6 )
    {
      v7 = std::make_unique<CPowerReferenceManager,,0>((CPowerReferenceManager **)&ppv);
      if ( &g_powerReferenceManager != v7 )
      {
        v8 = *v7;
        *v7 = 0LL;
        v9 = g_powerReferenceManager;
        g_powerReferenceManager = v8;
        if ( v9 )
        {
          CPowerReferenceManager::~CPowerReferenceManager(v9);
          operator delete(v9, (const struct std::nothrow_t *)0x198);
        }
      }
      v10 = ppv;
      if ( ppv )
      {
        CPowerReferenceManager::~CPowerReferenceManager((CPowerReferenceManager *)ppv);
        operator delete(v10, (const struct std::nothrow_t *)0x198);
      }
    }
    else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
           && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids);
    }
  }
  ppv = 0LL;
  v11 = CoCreateInstance(&CLSID_GlobalOptions, 0LL, 1u, &GUID_0000015b_0000_0000_c000_000000000046, &ppv);
  v12 = v11;
  if ( v11 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids,
        (unsigned int)v11);
    }
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)ppv + 24LL))(ppv, 5LL, 1LL);
  }
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  if ( !v12 )
  {
    v12 = CAudioSrv::VAD_AudiosrvServiceStart(this);
    if ( !v12 )
    {
      v13 = MME_ServiceStart();
      v16 = v13;
      if ( v13 < 0 && (Microsoft_Windows_AudioEnableBits & 4) != 0 )
        McTemplateU0zq(v15, v14, L"MME", (unsigned int)v13);
      EventAttributes.nLength = 24;
      EventAttributes.lpSecurityDescriptor = 0LL;
      EventAttributes.bInheritHandle = 0;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids);
      }
      if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
             L"D:(A;;0x00100003;;;S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775)(A;;0x00100000;;;SY)",
             1u,
             &EventAttributes.lpSecurityDescriptor,
             0LL) )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids);
        }
        g_hCanAcceptMMCClientEvent = CreateEventExW(
                                       &EventAttributes,
                                       L"Global\\AudioSrv_CanAcceptMMCClient",
                                       1u,
                                       0x100002u);
        LocalFree(EventAttributes.lpSecurityDescriptor);
      }
      if ( v16 < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioSrv::Initialize", 593, v16);
      if ( (char *)MyAtmosCheckCallback::m_pCallback != (char *)CPolicyConfig::UpdateRenderingEndpointsSpatialSettingsAsync )
      {
        EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
        MyAtmosCheckCallback::m_pCallback = (void (*)(void))CPolicyConfig::UpdateRenderingEndpointsSpatialSettingsAsync;
        LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
      }
      return (unsigned int)KsNotifications_ServiceStart();
    }
  }
  return v12;
}
