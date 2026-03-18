/*
 * XREFs of RtlStringCchCopyExW @ 0x14013E378
 * Callers:
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405C2C68 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     IopGetDeviceInterfaces @ 0x140627858 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406F2384 (PiPnpRtlGetFilteredDeviceList.c)
 *     _CmGetDeviceParent @ 0x1406F3110 (_CmGetDeviceParent.c)
 *     DrvDbGetDriverDatabaseList @ 0x1406F36EC (DrvDbGetDriverDatabaseList.c)
 *     PiDmGetObjectListCallback @ 0x1406F37F0 (PiDmGetObjectListCallback.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406F4234 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406F4560 (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406F7F50 (_CmGetDeviceInterfaceReferenceString.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406FAE84 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406FB08C (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _CmGetDeviceInterfaceName @ 0x140715260 (_CmGetDeviceInterfaceName.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x14071ADB8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14076C314 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14076C7B8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14076CD20 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14076D080 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14076D370 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x140778840 (_CmClassSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x140783020 (_PnpObjectListCallback.c)
 *     PnpGetDeviceDependencyList @ 0x14085DE40 (PnpGetDeviceDependencyList.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14086848C (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x140870890 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140872074 (PiCMGenerateDeviceInstance.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x140939EE4 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetDeviceChildren @ 0x14093AF7C (_CmGetDeviceChildren.c)
 *     _RegRtlDeletePathInternal @ 0x14093E878 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093ECCC (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140940000 (DrvDbGetObjectSubKeyCallback.c)
 * Callees:
 *     RtlStringCopyWorkerW_2 @ 0x14013E4C0 (RtlStringCopyWorkerW_2.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     StringExHandleOtherFlagsW @ 0x14029D5B0 (StringExHandleOtherFlagsW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  NTSTRSAFE_PWSTR v10; // rbp
  size_t v11; // rsi
  NTSTATUS v12; // eax
  size_t v13; // rcx
  const wchar_t *v15; // rax
  size_t *v16; // [rsp+20h] [rbp-48h]
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-38h] BYREF
  size_t pcchNewDestLength; // [rsp+38h] [rbp-30h] BYREF

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
    pcchNewDestLength = cchDest;
    v11 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v15 = (const wchar_t *)&pwsz;
      if ( pszSrc )
        v15 = pszSrc;
      pszSrc = v15;
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
      pcchNewDestLength = 0LL;
      v12 = RtlStringCopyWorkerW_2(pszDest, cchDest, &pcchNewDestLength, pszSrc, (size_t)v16);
      v13 = pcchNewDestLength;
      v9 = v12;
      v11 = cchDest - pcchNewDestLength;
      pcchNewDestLength = cchDest - pcchNewDestLength;
      v10 = &pszDest[v13];
      ppszDestEnda = v10;
      if ( v12 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
          memset(v10 + 1, (unsigned __int8)dwFlags, 2 * v11 - 2);
        goto LABEL_10;
      }
    }
    else
    {
      if ( !*pszSrc )
      {
LABEL_10:
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
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)pszSrc, &ppszDestEnda, &pcchNewDestLength, dwFlags);
      v10 = ppszDestEnda;
      v11 = pcchNewDestLength;
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
      goto LABEL_10;
  }
  return v9;
}
