/*
 * XREFs of RtlStringCbCopyW @ 0x1400073A0
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14004E020 (SeSetLearningModeObjectInformation.c)
 *     RtlpAllowsLowBoxAccess @ 0x1401330A0 (RtlpAllowsLowBoxAccess.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1401827A0 (RtlpGetNameFromLangInfoNode.c)
 *     PopDiagTraceIdleWakeSource @ 0x1402E14AC (PopDiagTraceIdleWakeSource.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140582AF0 (EtwTimLogRedirectionTrustPolicy.c)
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14058FC40 (PiDcHandleCustomDeviceEvent.c)
 *     PnpAllocatePWSTR @ 0x14059A42C (PnpAllocatePWSTR.c)
 *     WmipInsertStaticNames @ 0x14059D964 (WmipInsertStaticNames.c)
 *     WmipEnumerateMofResources @ 0x1406AA71C (WmipEnumerateMofResources.c)
 *     PiSwIrpStartCreateWorker @ 0x1406D6E78 (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1406D808C (PiSwCompleteCreate.c)
 *     PiSwFindSwDevice @ 0x1406ED36C (PiSwFindSwDevice.c)
 *     PipMakeGloballyUniqueId @ 0x14070BF10 (PipMakeGloballyUniqueId.c)
 *     WmipAddMofResource @ 0x14075199C (WmipAddMofResource.c)
 *     PfSnParametersRead @ 0x140752340 (PfSnParametersRead.c)
 *     PiSwIrpInterfaceRegister @ 0x140753FCC (PiSwIrpInterfaceRegister.c)
 *     WmipGenerateBinaryMofNotification @ 0x140760B88 (WmipGenerateBinaryMofNotification.c)
 *     DbgkSendSystemDllMessages @ 0x14080E4AC (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140829A60 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x1408B3758 (WmipIncludeStaticNames.c)
 *     ExpressionConvertToString @ 0x140904A8C (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x1409DF10C (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x1409F86F0 (ViMakeVerifierSettings.c)
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
