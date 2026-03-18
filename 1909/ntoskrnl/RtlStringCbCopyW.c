/*
 * XREFs of RtlStringCbCopyW @ 0x1400EDC5C
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14003B450 (SeSetLearningModeObjectInformation.c)
 *     RtlpAllowsLowBoxAccess @ 0x140133D1C (RtlpAllowsLowBoxAccess.c)
 *     RtlpGetNameFromLangInfoNode @ 0x14018E988 (RtlpGetNameFromLangInfoNode.c)
 *     PopDiagTraceIdleWakeSource @ 0x1402FE15C (PopDiagTraceIdleWakeSource.c)
 *     PnpAllocatePWSTR @ 0x1405BCB54 (PnpAllocatePWSTR.c)
 *     WmipInsertStaticNames @ 0x140696404 (WmipInsertStaticNames.c)
 *     PiDcHandleCustomDeviceEvent @ 0x140697168 (PiDcHandleCustomDeviceEvent.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     WmipEnumerateMofResources @ 0x1406EBBE0 (WmipEnumerateMofResources.c)
 *     PiSwIrpStartCreateWorker @ 0x140720DAC (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x1407222B8 (PiSwCompleteCreate.c)
 *     PiSwFindSwDevice @ 0x1407330E4 (PiSwFindSwDevice.c)
 *     PipMakeGloballyUniqueId @ 0x1407398BC (PipMakeGloballyUniqueId.c)
 *     WmipAddMofResource @ 0x140779FCC (WmipAddMofResource.c)
 *     PiSwIrpInterfaceRegister @ 0x14077A424 (PiSwIrpInterfaceRegister.c)
 *     PfSnParametersRead @ 0x14077B07C (PfSnParametersRead.c)
 *     WmipGenerateBinaryMofNotification @ 0x14078A044 (WmipGenerateBinaryMofNotification.c)
 *     DbgkSendSystemDllMessages @ 0x1408473EC (DbgkSendSystemDllMessages.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1408638A0 (PiDcResetChildDeviceContainerCallback.c)
 *     WmipIncludeStaticNames @ 0x1408F052C (WmipIncludeStaticNames.c)
 *     ExpressionConvertToString @ 0x140942B08 (ExpressionConvertToString.c)
 *     MfgInitSystem @ 0x140A223F4 (MfgInitSystem.c)
 *     ViMakeVerifierSettings @ 0x140A3E00C (ViMakeVerifierSettings.c)
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
