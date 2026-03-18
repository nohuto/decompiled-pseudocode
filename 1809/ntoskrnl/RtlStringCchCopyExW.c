/*
 * XREFs of RtlStringCchCopyExW @ 0x14013DD30
 * Callers:
 *     IopGetDeviceInterfaces @ 0x14059E6C4 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405C65E8 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406D1F84 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D2A04 (DrvDbGetDriverPackageMappedProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406D35E4 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetDriverDatabaseList @ 0x1406D38F8 (DrvDbGetDriverDatabaseList.c)
 *     PiDmGetObjectListCallback @ 0x1406D39F0 (PiDmGetObjectListCallback.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406D5694 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1406D99E4 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x1406E9644 (_CmGetDeviceParent.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F5340 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406F5544 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _CmGetDeviceInterfaceName @ 0x1406F849C (_CmGetDeviceInterfaceName.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140749E10 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14074A2C0 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14074A870 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14074ABC0 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14074AEA0 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x1407509E0 (_CmClassSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x140759C00 (_PnpObjectListCallback.c)
 *     PnpGetDeviceDependencyList @ 0x140824310 (PnpGetDeviceDependencyList.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14082E52C (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x1408367D4 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140837E24 (PiCMGenerateDeviceInstance.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1408FC7D0 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetDeviceChildren @ 0x1408FD578 (_CmGetDeviceChildren.c)
 *     _RegRtlDeletePathInternal @ 0x140900A48 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140900ED4 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140902140 (DrvDbGetObjectSubKeyCallback.c)
 * Callees:
 *     RtlStringCopyWorkerW_3 @ 0x14013DE80 (RtlStringCopyWorkerW_3.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     StringExHandleOtherFlagsW @ 0x140287654 (StringExHandleOtherFlagsW.c)
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
      v12 = RtlStringCopyWorkerW_3(pszDest, cchDest, &pcchNewDestLength, pszSrc, (size_t)v16);
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
