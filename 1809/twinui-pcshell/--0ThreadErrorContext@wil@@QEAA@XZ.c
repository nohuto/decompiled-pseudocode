/*
 * XREFs of ??0ThreadErrorContext@wil@@QEAA@XZ @ 0x1800568F0
 * Callers:
 *     ?GetFileActivityListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIFileActivityListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x180055690 (-GetFileActivityListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIFileActivityListener@DataEng.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180055F30 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18005609C (-_GetLaunchPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPositi.c)
 *     ?SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU?$IVector@PEAVUserActivityAppId@UserActivities@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUHSTRING__@@1UDateTime@56@3@Z @ 0x1800563A0 (-SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU-$IVector@PEAVUserActivityAppI.c)
 *     ??0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z @ 0x18008C9F4 (--0FeatureFunctorHost@details@wil@@QEAA@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x18018BE10 (-SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801AA9BC (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x1801AB01C (-RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ.c)
 *     ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801AB654 (-StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801ABA44 (-StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800599A0 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 */

wil::ThreadErrorContext *__fastcall wil::ThreadErrorContext::ThreadErrorContext(wil::ThreadErrorContext *this, bool a2)
{
  wil::ThreadErrorContext *v2; // rbx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  int v4; // edx
  __int64 v5; // rax

  v2 = this;
  LOBYTE(this) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(this, a2);
  *(_QWORD *)v2 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    *((_DWORD *)v2 + 3) = *((_DWORD *)ThreadLocalDataCache + 4);
    v4 = **((_DWORD **)ThreadLocalDataCache + 1);
    v5 = *(_QWORD *)v2;
    *((_DWORD *)v2 + 2) = v4;
    *(_DWORD *)(v5 + 16) = v4;
  }
  return v2;
}
