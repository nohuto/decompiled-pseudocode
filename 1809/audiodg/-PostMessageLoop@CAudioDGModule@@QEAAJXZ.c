/*
 * XREFs of ?PostMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140031E90
 * Callers:
 *     ?WinMain@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z @ 0x140013FDC (-WinMain@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAHH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@V?$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U?$DefaultEqualityPredicate@PEAVAudioDeviceModule@Devices@Media@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@U?$DefaultVectorOptions@PEAVAudioDeviceModule@Devices@Media@Windows@@@6784@@Internal@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x140019FB0 (-InternalRelease@-$ComPtr@V-$Vector@PEAVAudioDeviceModule@Devices@Media@Windows@@U-$DefaultEqual.c)
 *     WPP_SF_ @ 0x140032818 (WPP_SF_.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioDGModule::PostMessageLoop(CAudioDGModule *this)
{
  unsigned __int64 v2; // rdi
  HRESULT v3; // ebx
  unsigned __int64 v4; // rax
  DWORD v5; // ecx
  unsigned int v6; // eax
  _QWORD *v7; // rcx
  int v9; // [rsp+40h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, &WPP_711c7ea4d6ef3114826377fbf0f64df5_Traceguids);
  }
  v2 = qword_1400890B0;
  v3 = 0;
  v4 = qword_1400890B8;
  while ( v2 < v4 && !v3 )
  {
    if ( *(_QWORD *)v2 )
    {
      v5 = *(_DWORD *)(*(_QWORD *)v2 + 40LL);
      if ( v5 )
      {
        v3 = CoRevokeClassObject(v5);
        v4 = qword_1400890B8;
      }
    }
    v2 += 8LL;
  }
  if ( *((_BYTE *)this + 96) )
    Sleep(*((_DWORD *)this + 23));
  if ( g_DeviceGraphWnfStateNameCreated )
  {
    NtDeleteWnfStateName(&g_DeviceGraphWnfStateName);
    g_DeviceGraphWnfStateNameCreated = 0;
    g_DeviceGraphWnfStateName = 0LL;
  }
  if ( fRpcStarted )
  {
    v6 = RpcServerUnregisterIfEx(&unk_1400652F0, 0LL, 1);
    if ( v6
      && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_711c7ea4d6ef3114826377fbf0f64df5_Traceguids, v6);
    }
    fRpcStarted = 0;
  }
  CleanupDeviceAPI();
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::Internal::Vector<Windows::Media::Devices::AudioDeviceModule *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Media::Devices::AudioDeviceModule *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Media::Devices::AudioDeviceModule *>>>::InternalRelease(&qword_140089000);
  NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
  v9 = -1;
  RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, &v9, 4LL, 0LL);
  CoUninitialize();
  v7 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x10) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_711c7ea4d6ef3114826377fbf0f64df5_Traceguids);
    v7 = WPP_GLOBAL_Control;
  }
  if ( v3 < 0 )
  {
    if ( v7 != &WPP_GLOBAL_Control && (*((_DWORD *)v7 + 7) & 0x40000) != 0 && *((_BYTE *)v7 + 25) >= 2u )
      WPP_SF_D(v7[2], 19LL, &WPP_711c7ea4d6ef3114826377fbf0f64df5_Traceguids, (unsigned int)v3);
    AudDGTraceLoggingErrorHelper("CAudioDGModule::PostMessageLoop", 0x1D4u, v3);
  }
  return (unsigned int)v3;
}
