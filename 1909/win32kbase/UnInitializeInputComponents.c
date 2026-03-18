/*
 * XREFs of UnInitializeInputComponents @ 0x1C00B1AC4
 * Callers:
 *     InputUnInitialize @ 0x1C00B1A04 (InputUnInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FF2C (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     isChildPartition @ 0x1C0031698 (isChildPartition.c)
 *     ??_GCInputConfig@@AEAAPEAXI@Z @ 0x1C00B1C70 (--_GCInputConfig@@AEAAPEAXI@Z.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C00B1CE0 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C00B1DB4 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C00B1DEC (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C00B1E80 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C0181C48 (-GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void UnInitializeInputComponents()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  CInputGlobals *v3; // rbx
  CTouchProcessor *v4; // rbx
  CCursorClip *v5; // rbx
  __int64 v6; // rcx
  CInputDest *v7; // rbx
  CInputThread *v8; // rbx
  PERESOURCE v9; // rcx
  struct CDeviceIdentity *v10; // rbx
  struct A0xad387374::CFrameIdGenerator *v11; // rbx
  struct InputVirtualization::RootSynthesizedMouseList *Instance; // rbx
  _QWORD *v13; // rcx
  __int64 v14; // rax

  InputExtensibilityCallout::UnInitialize();
  v3 = gpInputGlobals;
  if ( gpInputGlobals )
  {
    if ( *((_QWORD *)gpInputGlobals + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2);
    Win32FreePool((__int64)v3);
  }
  gpInputGlobals = 0LL;
  if ( gpTouchProcessor )
  {
    DelayZonePalmRejection::Uninitialize();
    v4 = gpTouchProcessor;
    if ( gpTouchProcessor )
    {
      CTouchProcessor::~CTouchProcessor(gpTouchProcessor);
      Win32FreePool((__int64)v4);
    }
    gpTouchProcessor = 0LL;
  }
  v5 = gpCursorClip;
  if ( gpCursorClip )
  {
    v6 = *((_QWORD *)gpCursorClip + 10);
    if ( v6 )
      Win32FreePool(v6);
    Win32FreePool((__int64)v5);
    gpCursorClip = 0LL;
  }
  v7 = gpForegroundInfo;
  if ( gpForegroundInfo )
  {
    CInputDest::SetEmpty(gpForegroundInfo, v0, v2);
    Win32FreePool((__int64)v7);
    gpForegroundInfo = 0LL;
  }
  v8 = gpInputThread;
  if ( gpInputThread )
  {
    if ( *((_QWORD *)gpInputThread + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2);
    Win32FreePool((__int64)v8);
    gpInputThread = 0LL;
  }
  if ( gpInputConfig )
    CInputConfig::`scalar deleting destructor'(gpInputConfig, v0);
  v9 = CInputConfig::slock;
  gpInputConfig = 0LL;
  if ( CInputConfig::slock )
  {
    ExDeleteResourceLite(CInputConfig::slock);
    ExFreePoolWithTag(CInputConfig::slock, 0);
  }
  v10 = gpDeviceIdentity;
  if ( gpDeviceIdentity )
  {
    if ( *((_QWORD *)gpDeviceIdentity + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v0, v2);
    Win32FreePool((__int64)v10);
  }
  v11 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  gpDeviceIdentity = 0LL;
  if ( `anonymous namespace'::CFrameIdGenerator::s_pInstance )
  {
    CInpLockGuard::Uninitialize((struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance
                                                                        + 8));
    Win32FreePool((__int64)v11);
  }
  `anonymous namespace'::CFrameIdGenerator::s_pInstance = 0LL;
  if ( gpInputSystemMetrics )
    Win32FreePool((__int64)gpInputSystemMetrics);
  gpInputSystemMetrics = 0LL;
  if ( qword_1C02157D0 )
    ExFreePoolWithTag(qword_1C02157D0, 0);
  if ( isChildPartition() )
  {
    Instance = InputVirtualization::RootSynthesizedMouseList::GetInstance();
    while ( 1 )
    {
      v13 = *(_QWORD **)Instance;
      if ( *(struct InputVirtualization::RootSynthesizedMouseList **)Instance == Instance )
        break;
      if ( (struct InputVirtualization::RootSynthesizedMouseList *)v13[1] != Instance
        || (v14 = *v13, *(_QWORD **)(*v13 + 8LL) != v13) )
      {
        __fastfail(3u);
      }
      *(_QWORD *)Instance = v14;
      *(_QWORD *)(v14 + 8) = Instance;
      Win32FreePool((__int64)v13);
    }
  }
}
