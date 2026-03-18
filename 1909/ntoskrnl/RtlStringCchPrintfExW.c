/*
 * XREFs of RtlStringCchPrintfExW @ 0x140002CB4
 * Callers:
 *     PopDiagTraceProcessorThrottlePerfTrack @ 0x140170690 (PopDiagTraceProcessorThrottlePerfTrack.c)
 *     PopDiagTraceProcessorThrottleDurationPerfTrack @ 0x1401707A4 (PopDiagTraceProcessorThrottleDurationPerfTrack.c)
 *     _PnpGetGenericStoreProperty @ 0x1405BCC04 (_PnpGetGenericStoreProperty.c)
 *     _CmGetCommonClassRegKeyPath @ 0x1405C0664 (_CmGetCommonClassRegKeyPath.c)
 *     _PnpOpenPropertiesKey @ 0x1405C1624 (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1405C1844 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceInstanceKeyPath @ 0x1405C40F8 (_CmGetDeviceInstanceKeyPath.c)
 *     _CmGetDeviceSoftwareKeyPath @ 0x1406D6D70 (_CmGetDeviceSoftwareKeyPath.c)
 *     _CmGetDeviceSoftwareKey @ 0x1406D6E7C (_CmGetDeviceSoftwareKey.c)
 *     _CmGetDeviceHardwareKeyPath @ 0x1406DFC80 (_CmGetDeviceHardwareKeyPath.c)
 *     _CmGetDeviceContainerRegKeyPath @ 0x1406F2EE4 (_CmGetDeviceContainerRegKeyPath.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406FB08C (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _PnpStringFromGuid @ 0x1407000C0 (_PnpStringFromGuid.c)
 *     _PnpSetPropertyWorker @ 0x140708F64 (_PnpSetPropertyWorker.c)
 *     _CmGetDeviceLogConfKeyPath @ 0x14071B6D4 (_CmGetDeviceLogConfKeyPath.c)
 *     _PnpDeletePropertyWorker @ 0x14071DEF4 (_PnpDeletePropertyWorker.c)
 *     PiProcessDriverInstance @ 0x140735A90 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x14073628C (PiFindDevInstMatch.c)
 *     PiRearrangeDeviceInstances @ 0x140736494 (PiRearrangeDeviceInstances.c)
 *     PipMakeGloballyUniqueId @ 0x1407398BC (PipMakeGloballyUniqueId.c)
 *     IoReportDetectedDevice @ 0x140751940 (IoReportDetectedDevice.c)
 *     DrvDbCreateDatabaseNode @ 0x1407564E0 (DrvDbCreateDatabaseNode.c)
 *     _CmGetDeviceControlKeyPath @ 0x14077D800 (_CmGetDeviceControlKeyPath.c)
 *     IoReportRootDevice @ 0x140781440 (IoReportRootDevice.c)
 *     PnpDriverLoadingFailed @ 0x14078B434 (PnpDriverLoadingFailed.c)
 *     _CmBuildDevicePanelId @ 0x14078B544 (_CmBuildDevicePanelId.c)
 *     PipHardwareConfigClearStartOverrideCallback @ 0x14085C6E0 (PipHardwareConfigClearStartOverrideCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14085C7E0 (PipHardwareConfigClearStartOverrides.c)
 *     PiCMGenerateDeviceInstance @ 0x140872074 (PiCMGenerateDeviceInstance.c)
 *     IopCreateLegacyDeviceIds @ 0x140874CE4 (IopCreateLegacyDeviceIds.c)
 *     RtlFormatMessageEx @ 0x1408CEEE4 (RtlFormatMessageEx.c)
 *     _CmGetDevicePanelRegKeyPath @ 0x1409396D8 (_CmGetDevicePanelRegKeyPath.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140939EE4 (_PnpGetGenericStorePropertyLocales.c)
 *     IopInitializeBootDrivers @ 0x140A10C08 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x140002DB0 (RtlStringVPrintfWorkerW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x14019E740 (RtlStringExHandleFillBehindNullW.c)
 *     StringExHandleOtherFlagsW @ 0x14029D5B0 (StringExHandleOtherFlagsW.c)
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
