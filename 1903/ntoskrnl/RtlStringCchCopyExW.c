/*
 * XREFs of RtlStringCchCopyExW @ 0x14013DE38
 * Callers:
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405C2798 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     IopGetDeviceInterfaces @ 0x1406239A8 (IopGetDeviceInterfaces.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1406F08E4 (PiPnpRtlGetFilteredDeviceList.c)
 *     _CmGetDeviceParent @ 0x1406F1670 (_CmGetDeviceParent.c)
 *     DrvDbGetDriverDatabaseList @ 0x1406F1C4C (DrvDbGetDriverDatabaseList.c)
 *     PiDmGetObjectListCallback @ 0x1406F1D50 (PiDmGetObjectListCallback.c)
 *     _RegRtlCreateTreeTransacted @ 0x1406F2794 (_RegRtlCreateTreeTransacted.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406F2AC0 (DrvDbGetDriverPackageMappedProperty.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406F6190 (_CmGetDeviceInterfaceReferenceString.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1406F90A4 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     DrvDbBuildDeviceIdDriverInfMatch @ 0x1406F92AC (DrvDbBuildDeviceIdDriverInfMatch.c)
 *     _CmGetDeviceInterfaceName @ 0x140713480 (_CmGetDeviceInterfaceName.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140718FC8 (_CmIsDeviceSafeRemovalRequired.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140767814 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140767CB8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140768220 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140768580 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140768870 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmClassSubkeyCallback @ 0x140775260 (_CmClassSubkeyCallback.c)
 *     _PnpObjectListCallback @ 0x140780CC0 (_PnpObjectListCallback.c)
 *     PnpGetDeviceDependencyList @ 0x14085E740 (PnpGetDeviceDependencyList.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140868D8C (PiDevCfgQueryPolicyStringList.c)
 *     PiCMCreateDevice @ 0x140871190 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140872974 (PiCMGenerateDeviceInstance.c)
 *     _PnpGetGenericStorePropertyLocales @ 0x14093A474 (_PnpGetGenericStorePropertyLocales.c)
 *     _CmGetDeviceChildren @ 0x14093B50C (_CmGetDeviceChildren.c)
 *     _RegRtlDeletePathInternal @ 0x14093EE08 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14093F25C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140940590 (DrvDbGetObjectSubKeyCallback.c)
 * Callees:
 *     RtlStringCopyWorkerW_2 @ 0x14013DF80 (RtlStringCopyWorkerW_2.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     StringExHandleOtherFlagsW @ 0x14029D850 (StringExHandleOtherFlagsW.c)
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
