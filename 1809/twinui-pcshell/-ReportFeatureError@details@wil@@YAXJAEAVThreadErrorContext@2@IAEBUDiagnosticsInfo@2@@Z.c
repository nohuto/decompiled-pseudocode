/*
 * XREFs of ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18008B144
 * Callers:
 *     ?GetFileActivityListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIFileActivityListener@DataEngine@TaskFlow@Shell@Internal@Windows@@@Z @ 0x180055690 (-GetFileActivityListener@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIFileActivityListener@DataEng.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x180055F30 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ?SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU?$IVector@PEAVUserActivityAppId@UserActivities@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUHSTRING__@@1UDateTime@56@3@Z @ 0x1800563A0 (-SessionDisposed@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU-$IVector@PEAVUserActivityAppI.c)
 *     ?SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU?$IVector@PEAVUserActivityAppId@UserActivities@Internal@ApplicationModel@Windows@@@Collections@Foundation@Windows@@PEAUHSTRING__@@1UDateTime@56@3@Z @ 0x1800565A0 (-SessionCreated@TaskFlowImmersiveShellBroker@@UEAAJ_KU_GUID@@PEAU-$IVector@PEAVUserActivityAppId.c)
 *     _lambda_5628bd74a8815c20418001cca1cbd131_::operator() @ 0x18005EF04 (_lambda_5628bd74a8815c20418001cca1cbd131_--operator().c)
 *     ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x18018BE10 (-SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z.c)
 *     ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x1801AB01C (-RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ.c)
 *     ?StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801AB654 (-StartAppActivitySessionListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801ABA44 (-StartFileListener@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     ?SetLastError@wil@@YAXAEBUFailureInfo@1@@Z @ 0x18001B6F4 (-SetLastError@wil@@YAXAEBUFailureInfo@1@@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x180126D7C (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     ?GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z @ 0x1801279DC (-GetLastError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IJ@Z.c)
 */

void __fastcall wil::details::ReportFeatureError(
        wil::details *this,
        __int64 a2,
        struct wil::ThreadErrorContext *a3,
        __int64 a4)
{
  int v4; // esi
  unsigned int v6; // r14d
  bool LastError; // al
  const struct wil::FailureInfo *v9; // rdx
  void (*v10)(unsigned int, const struct FEATURE_ERROR *); // rax
  _BYTE v11[4]; // [rsp+20h] [rbp-E0h] BYREF
  int v12; // [rsp+24h] [rbp-DCh]
  __int64 v13; // [rsp+50h] [rbp-B0h]
  int v14; // [rsp+58h] [rbp-A8h]
  struct DiagnosticsInfo v15; // [rsp+A0h] [rbp-60h]
  _BYTE v16[400]; // [rsp+B0h] [rbp-50h] BYREF

  v4 = (int)this;
  v6 = (unsigned int)a3;
  if ( *(_QWORD *)a2 )
    LastError = wil::details_abi::ThreadLocalData::GetLastError(
                  *(wil::details_abi::ThreadLocalData **)a2,
                  (struct wil::FailureInfo *)v11,
                  *(_DWORD *)(a2 + 8),
                  (int)this);
  else
    LastError = 0;
  if ( !LastError )
  {
    memset_0(v11, 0, 0x90uLL);
    v14 = *(unsigned __int16 *)(a4 + 24);
    v13 = *(_QWORD *)(a4 + 8);
    v15 = *(struct DiagnosticsInfo *)a4;
    v12 = v4;
    wil::SetLastError((wil *)v11, v9);
    if ( *(_QWORD *)a2 )
      wil::details_abi::ThreadLocalData::GetLastError(
        *(wil::details_abi::ThreadLocalData **)a2,
        (struct wil::FailureInfo *)v11,
        *(_DWORD *)(a2 + 8),
        v4);
  }
  wil::details::StagingFailureInformation::StagingFailureInformation(
    (wil::details::StagingFailureInformation *)v16,
    (const struct wil::FailureInfo *)v11,
    (const struct DiagnosticsInfo *)a4,
    (void *)a4);
  v10 = g_wil_details_internalRecordFeatureError;
  if ( g_wil_details_internalRecordFeatureError || (v10 = g_wil_details_apiRecordFeatureError) != 0LL )
    ((void (__fastcall *)(_QWORD, _BYTE *))v10)(v6, v16);
}
