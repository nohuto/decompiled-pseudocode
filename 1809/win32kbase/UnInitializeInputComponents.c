/*
 * XREFs of UnInitializeInputComponents @ 0x1C0005BB4
 * Callers:
 *     InputUnInitialize @ 0x1C00059F8 (InputUnInitialize.c)
 * Callees:
 *     ?LockUninitialize@CInpPushLock@@QEAAXXZ @ 0x1C0005D60 (-LockUninitialize@CInpPushLock@@QEAAXXZ.c)
 *     ?Uninitialize@DelayZonePalmRejection@@SAXXZ @ 0x1C0006234 (-Uninitialize@DelayZonePalmRejection@@SAXXZ.c)
 *     ??1CTouchProcessor@@QEAA@XZ @ 0x1C000657C (--1CTouchProcessor@@QEAA@XZ.c)
 *     ?Uninitialize@CInpLockGuard@@QEAAXXZ @ 0x1C0006658 (-Uninitialize@CInpLockGuard@@QEAAXXZ.c)
 *     ?UnInitialize@InputExtensibilityCallout@@SAXXZ @ 0x1C0007890 (-UnInitialize@InputExtensibilityCallout@@SAXXZ.c)
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C002FD00 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C003C3C4 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 *     ??0CEResourceLockExclusive@@QEAA@AEAUCEResource@@@Z @ 0x1C00AD7F8 (--0CEResourceLockExclusive@@QEAA@AEAUCEResource@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void UnInitializeInputComponents()
{
  struct CEResource *v0; // rdx
  CInputGlobals *v1; // rbx
  struct _LIST_ENTRY *Blink; // rbx
  CCursorClip *v3; // rbx
  __int64 v4; // rcx
  PDRIVER_CONTROL DeviceRoutine; // rbx
  __int64 v6; // rbx
  struct _LIST_ENTRY **v7; // rbx
  CInputConfig *v8; // rcx
  PKDPC BufferChainingDpc; // rbx
  struct A0xad387374::CFrameIdGenerator *v10; // rbx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  InputExtensibilityCallout::UnInitialize();
  v1 = gpInputGlobals;
  if ( gpInputGlobals )
  {
    if ( *((_QWORD *)gpInputGlobals + 1) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    Win32FreePool(v1);
  }
  gpInputGlobals = 0LL;
  if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
  {
    DelayZonePalmRejection::Uninitialize();
    Blink = WPP_MAIN_CB.Queue.ListEntry.Blink;
    if ( WPP_MAIN_CB.Queue.ListEntry.Blink )
    {
      CTouchProcessor::~CTouchProcessor((CTouchProcessor *)WPP_MAIN_CB.Queue.ListEntry.Blink);
      Win32FreePool(Blink);
    }
    WPP_MAIN_CB.Queue.ListEntry.Blink = 0LL;
  }
  v3 = gpCursorClip;
  if ( gpCursorClip )
  {
    v4 = *((_QWORD *)gpCursorClip + 10);
    if ( v4 )
      Win32FreePool(v4);
    Win32FreePool(v3);
    gpCursorClip = 0LL;
  }
  DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  if ( WPP_MAIN_CB.Queue.Wcb.DeviceRoutine )
  {
    CInputDest::SetEmpty((CInputDest *)WPP_MAIN_CB.Queue.Wcb.DeviceRoutine);
    Win32FreePool(DeviceRoutine);
    WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = 0LL;
  }
  v6 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  if ( *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement )
  {
    if ( *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 8LL) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM();
    Win32FreePool(v6);
    *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement = 0LL;
  }
  v7 = (struct _LIST_ENTRY **)gpInputConfig;
  if ( gpInputConfig )
  {
    CEResourceLockExclusive::CEResourceLockExclusive((CEResourceLockExclusive *)&v11, v0);
    while ( *v7 != (struct _LIST_ENTRY *)v7 )
      CInputConfig::_FreeInputSpace(v8, *v7);
    CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)&v11);
    Win32FreePool(v7);
  }
  gpInputConfig = 0LL;
  if ( CInputConfig::slock )
  {
    ExDeleteResourceLite(CInputConfig::slock);
    ExFreePoolWithTag(CInputConfig::slock, 0);
  }
  BufferChainingDpc = WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc;
  if ( WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc )
  {
    CInpPushLock::LockUninitialize((CInpPushLock *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
    Win32FreePool(BufferChainingDpc);
  }
  WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = 0LL;
  v10 = `anonymous namespace'::CFrameIdGenerator::s_pInstance;
  if ( `anonymous namespace'::CFrameIdGenerator::s_pInstance )
  {
    CInpLockGuard::Uninitialize((struct A0xad387374::CFrameIdGenerator *)((char *)`anonymous namespace'::CFrameIdGenerator::s_pInstance
                                                                        + 8));
    Win32FreePool(v10);
  }
  `anonymous namespace'::CFrameIdGenerator::s_pInstance = 0LL;
}
