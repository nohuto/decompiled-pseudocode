/*
 * XREFs of RtlStringCchCopyExW @ 0x14013DE50
 * Callers:
 *     IopGetDeviceInterfaces @ 0x14059F6C4 (IopGetDeviceInterfaces.c)
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405C75E8 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406D3204 (PiPnpRtlGetFilteredDeviceList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D3C84 (DrvDbGetDriverPackageMappedProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406D4864 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetDriverDatabaseList @ 0x1406D4B78 (DrvDbGetDriverDatabaseList.c)
 *     PiDmGetObjectListCallback @ 0x1406D4C70 (PiDmGetObjectListCallback.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406D6914 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x1406DAC64 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetDeviceParent @ 0x1406EA8C4 (_CmGetDeviceParent.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F65C0 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406F67C4 (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _CmGetDeviceInterfaceName @ 0x1406F971C (_CmGetDeviceInterfaceName.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x14074AFE0 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14074B490 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14074BA40 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14074BD90 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14074C070 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x140751BB0 (_CmClassSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x14075ADD0 (_PnpObjectListCallback.c)
 *     PnpGetDeviceDependencyList @ 0x1408254F0 (PnpGetDeviceDependencyList.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14082F73C (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140839064 (PiCMGenerateDeviceInstance.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x1408FDA70 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetDeviceChildren @ 0x1408FE818 (_CmGetDeviceChildren.c)
 *     _RegRtlDeletePathInternal @ 0x140901CE8 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140902174 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1409033E0 (DrvDbGetObjectSubKeyCallback.c)
 * Callees:
 *     RtlStringCopyWorkerW_3 @ 0x14013DFA0 (RtlStringCopyWorkerW_3.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     StringExHandleOtherFlagsW @ 0x140287944 (StringExHandleOtherFlagsW.c)
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
