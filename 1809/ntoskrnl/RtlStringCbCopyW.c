/*
 * XREFs of RtlStringCbCopyW @ 0x1400073A0
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14004E020 (SeSetLearningModeObjectInformation.c)
 *     RtlpAllowsLowBoxAccess @ 0x1401330C0 (RtlpAllowsLowBoxAccess.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1401827C0 (RtlpGetNameFromLangInfoNode.c)
 *     PopDiagTraceIdleWakeSource @ 0x1402E15AC (PopDiagTraceIdleWakeSource.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140582AF0 (EtwTimLogRedirectionTrustPolicy.c)
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14058FC40 (PiDcHandleCustomDeviceEvent.c)
 *     PnpAllocatePWSTR @ 0x14059A42C (PnpAllocatePWSTR.c)
 *     WmipInsertStaticNames @ 0x14059D964 (WmipInsertStaticNames.c)
 *     WmipEnumerateMofResources @ 0x1406AA6FC (WmipEnumerateMofResources.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D6E58 (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1406D806C (PiSwCompleteCreate.c)
 *     PiSwFindSwDevice @ 0x1406ED34C (PiSwFindSwDevice.c)
 *     PipMakeGloballyUniqueId @ 0x14070BEF0 (PipMakeGloballyUniqueId.c)
 *     WmipAddMofResource @ 0x14075197C (WmipAddMofResource.c)
 *     PfSnParametersRead @ 0x140752320 (PfSnParametersRead.c)
 *     PiSwIrpInterfaceRegister @ 0x140753FAC (PiSwIrpInterfaceRegister.c)
 *     WmipGenerateBinaryMofNotification @ 0x140760B68 (WmipGenerateBinaryMofNotification.c)
 *     DbgkSendSystemDllMessages @ 0x14080E48C (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140829A40 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x1408B3738 (WmipIncludeStaticNames.c)
 *     ExpressionConvertToString @ 0x140904A6C (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x1409DF10C (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x1409F8700 (ViMakeVerifierSettings.c)
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
