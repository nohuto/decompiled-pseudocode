/*
 * XREFs of RtlStringCchPrintfExW @ 0x140015EF4
 * Callers:
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1402E1970 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x1402E1AB8 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     _CmGetCommonClassRegKeyPath @ 0x140596C9C (_CmGetCommonClassRegKeyPath.c)
 *     _PnpGetGenericStoreProperty @ 0x14059A7F8 (_PnpGetGenericStoreProperty.c)
 *     _PnpOpenPropertiesKey @ 0x14059AA2C (_PnpOpenPropertiesKey.c)
 *     _PnpStringFromGuid @ 0x14059ACE4 (_PnpStringFromGuid.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14059B86C (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x1405C807C (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1406B235C (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406B2484 (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1406BC9D4 (_CmGetDeviceHardwareKeyPath.c)
 *     _PnpSetPropertyWorker @ 0x1406E61F0 (_PnpSetPropertyWorker.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406EA5C8 (_CmGetDeviceContainerRegKeyPath.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406F5544 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x1406FC9E4 (_CmGetDeviceLogConfKeyPath.c)
 *     _PnpDeletePropertyWorker @ 0x140700FB4 (_PnpDeletePropertyWorker.c)
 *     PiRearrangeDeviceInstances @ 0x140706130 (PiRearrangeDeviceInstances.c)
 *     PiProcessDriverInstance @ 0x140708DC0 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x1407097AC (PiFindDevInstMatch.c)
 *     PipMakeGloballyUniqueId @ 0x14070BF10 (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x14072D240 (IoReportDetectedDevice.c)
 *     DrvDbCreateDatabaseNode @ 0x14073B408 (DrvDbCreateDatabaseNode.c)
 *     _CmGetDeviceControlKeyPath @ 0x140755320 (_CmGetDeviceControlKeyPath.c)
 *     IoReportRootDevice @ 0x140758C10 (IoReportRootDevice.c)
 *     _CmBuildDevicePanelId @ 0x1407620D4 (_CmBuildDevicePanelId.c)
 *     PnpDriverLoadingFailed @ 0x1407630D0 (PnpDriverLoadingFailed.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x140822CD0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140822DC4 (PipHardwareConfigClearStartOverrides.c)
 *     PiCMGenerateDeviceInstance @ 0x140837E24 (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x14083A870 (IopCreateLegacyDeviceIds.c)
 *     RtlFormatMessageEx @ 0x1408913B4 (RtlFormatMessageEx.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x1408FBF84 (_CmGetDevicePanelRegKeyPath.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1408FC7D0 (_PnpGetGenericStorePropertyLocales.c)
 *     IopInitializeBootDrivers @ 0x1409CB0BC (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x140015FF0 (RtlStringVPrintfWorkerW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x140193960 (RtlStringExHandleFillBehindNullW.c)
 *     StringExHandleOtherFlagsW @ 0x140287654 (StringExHandleOtherFlagsW.c)
 */

NTSTATUS RtlStringCchPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  NTSTATUS v9; // ebx
  wchar_t *v10; // r12
  size_t v11; // r14
  const wchar_t *v12; // r9
  NTSTATUS v13; // eax
  size_t v14; // rcx
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      v9 = -1073741811;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnda = pszDest;
    v10 = pszDest;
    pcchNewDestLength[0] = cchDest;
    v11 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = (const wchar_t *)&pwsz;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength[0] = 0LL;
      v13 = RtlStringVPrintfWorkerW(pszDest, cchDest, pcchNewDestLength, v12, va);
      v14 = pcchNewDestLength[0];
      v9 = v13;
      v11 = cchDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
      v10 = &pszDest[v14];
      ppszDestEnda = v10;
      if ( v13 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 )
          RtlStringExHandleFillBehindNullW(&pszDest[v14], 2 * v11, dwFlags);
        goto LABEL_11;
      }
    }
    else
    {
      if ( !*v12 )
      {
LABEL_11:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        if ( pcchRemaining )
          *pcchRemaining = v11;
        return v9;
      }
      v9 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)ppszDestEnd, &ppszDestEnda, pcchNewDestLength, dwFlags);
      v10 = ppszDestEnda;
      v11 = pcchNewDestLength[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_11;
  }
  return v9;
}
