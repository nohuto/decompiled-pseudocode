/*
 * XREFs of UnInitializeInputComponents @ 0x1C012EBF8
 * Callers:
 *     InputUnInitialize @ 0x1C0131764 (InputUnInitialize.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C00370AC (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?_FreeConfigList@CInputConfig@@AEAAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C0053604 (-_FreeConfigList@CInputConfig@@AEAAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C010C868 (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0120FC8 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0124DC4 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C012D7E4 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void UnInitializeInputComponents()
{
  __int64 v0; // rdx
  CInputConfig *v1; // rcx
  CInputGlobals *v2; // rbx
  CTouchProcessor *v3; // rbx
  CCursorClip *v4; // rbx
  CInputDest *v5; // rbx
  CInputThread *v6; // rbx
  struct _SINGLE_LIST_ENTRY *v7; // rbx
  CInputConfig *v8; // rcx
  struct CDeviceIdentity *v9; // rbx
  struct A0xad387374::CFrameIdGenerator *v10; // rbx

  InputExtensibilityCallout::UnInitialize();
  v2 = gpInputGlobals;
  if ( gpInputGlobals )
  {
    if ( *((_QWORD *)gpInputGlobals + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0);
    Win32FreePool((__int64)v2);
  }
  gpInputGlobals = 0LL;
  if ( gpTouchProcessor )
  {
    DelayZonePalmRejection::Uninitialize((__int64)v1, v0);
    v3 = gpTouchProcessor;
    if ( gpTouchProcessor )
    {
      CTouchProcessor::~CTouchProcessor(gpTouchProcessor);
      Win32FreePool((__int64)v3);
    }
    gpTouchProcessor = 0LL;
  }
  v4 = gpCursorClip;
  if ( gpCursorClip )
  {
    if ( *((_QWORD *)gpCursorClip + 5) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0);
    Win32FreePool((__int64)v4);
    gpCursorClip = 0LL;
  }
  v5 = gpForegroundInfo;
  if ( gpForegroundInfo )
  {
    CInputDest::SetEmpty(gpForegroundInfo);
    Win32FreePool((__int64)v5);
    gpForegroundInfo = 0LL;
  }
  v6 = gpInputThread;
  if ( gpInputThread )
  {
    if ( *((_QWORD *)gpInputThread + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0);
    Win32FreePool((__int64)v6);
    gpInputThread = 0LL;
  }
  if ( qword_1C01A1678 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0);
  v7 = gpInputConfig;
  if ( gpInputConfig )
  {
    CInputConfig::_FreeConfigList(v1, gpInputConfig);
    CInputConfig::_FreeConfigList(v8, v7 + 1);
    Win32FreePool((__int64)v7);
  }
  v9 = gpDeviceIdentity;
  gpInputConfig = 0LL;
  if ( gpDeviceIdentity )
  {
    if ( *((_QWORD *)gpDeviceIdentity + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0);
    Win32FreePool((__int64)v9);
  }
  v10 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  gpDeviceIdentity = 0LL;
  if ( `anonymous namespace'::CFrameIdGenerator::s_pInstance )
  {
    CInpLockGuard::Uninitialize(
      (struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance + 8),
      v0);
    Win32FreePool((__int64)v10);
  }
  `anonymous namespace'::CFrameIdGenerator::s_pInstance = 0LL;
}
