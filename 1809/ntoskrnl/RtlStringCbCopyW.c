/*
 * XREFs of RtlStringCbCopyW @ 0x1400073A0
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14004E020 (SeSetLearningModeObjectInformation.c)
 *     RtlpAllowsLowBoxAccess @ 0x140133190 (RtlpAllowsLowBoxAccess.c)
 *     RtlpGetNameFromLangInfoNode @ 0x140182900 (RtlpGetNameFromLangInfoNode.c)
 *     PopDiagTraceIdleWakeSource @ 0x1402E179C (PopDiagTraceIdleWakeSource.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140583AF0 (EtwTimLogRedirectionTrustPolicy.c)
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140590C40 (PiDcHandleCustomDeviceEvent.c)
 *     PnpAllocatePWSTR @ 0x14059B42C (PnpAllocatePWSTR.c)
 *     WmipInsertStaticNames @ 0x14059E964 (WmipInsertStaticNames.c)
 *     WmipEnumerateMofResources @ 0x1406AB99C (WmipEnumerateMofResources.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D80F8 (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1406D930C (PiSwCompleteCreate.c)
 *     PiSwFindSwDevice @ 0x1406EE5EC (PiSwFindSwDevice.c)
 *     PipMakeGloballyUniqueId @ 0x14070D190 (PipMakeGloballyUniqueId.c)
 *     WmipAddMofResource @ 0x140752B6C (WmipAddMofResource.c)
 *     PfSnParametersRead @ 0x140753510 (PfSnParametersRead.c)
 *     PiSwIrpInterfaceRegister @ 0x14075519C (PiSwIrpInterfaceRegister.c)
 *     WmipGenerateBinaryMofNotification @ 0x140761D58 (WmipGenerateBinaryMofNotification.c)
 *     DbgkSendSystemDllMessages @ 0x14080F68C (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14082AC40 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x1408B4998 (WmipIncludeStaticNames.c)
 *     ExpressionConvertToString @ 0x140905D2C (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x1409E010C (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x1409F9700 (ViMakeVerifierSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  NTSTATUS v4; // r9d
  size_t v5; // r10
  signed __int64 v6; // r8
  wchar_t v7; // ax
  NTSTRSAFE_PWSTR v8; // rax

  v3 = cbDest >> 1;
  v4 = 0;
  if ( v3 - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
  {
    if ( v3 )
      *pszDest = 0;
  }
  else
  {
    if ( v3 )
    {
      v5 = 2147483646 - v3;
      v6 = (char *)pszSrc - (char *)pszDest;
      do
      {
        if ( !(v5 + v3) )
          break;
        v7 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v6);
        if ( !v7 )
          break;
        *pszDest++ = v7;
        --v3;
      }
      while ( v3 );
    }
    v8 = pszDest - 1;
    if ( v3 )
      v8 = pszDest;
    v4 = v3 == 0 ? 0x80000005 : 0;
    *v8 = 0;
  }
  return v4;
}
