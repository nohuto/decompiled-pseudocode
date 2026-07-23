/*
 * XREFs of RtlStringCchCopyNExW @ 0x140015A04
 * Callers:
 *     _CmGetDeviceInterfaceSubkeyPath @ 0x1405C75E8 (_CmGetDeviceInterfaceSubkeyPath.c)
 *     _CmValidateDeviceInterfaceName @ 0x1405C7810 (_CmValidateDeviceInterfaceName.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1406F7860 (DrvDbSplitDeviceIdDriverInfMatch.c)
 *     _CmGetDeviceInterfaceSymbolicLinkName @ 0x140711208 (_CmGetDeviceInterfaceSymbolicLinkName.c)
 *     _CmSplitDevicePanelId @ 0x14074AD2C (_CmSplitDevicePanelId.c)
 *     punycode_encode @ 0x140898850 (punycode_encode.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x140015B40 (RtlStringCopyWorkerW_0.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     StringExHandleOtherFlagsW @ 0x140287944 (StringExHandleOtherFlagsW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyNExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTATUS v9; // ebx
  NTSTRSAFE_PWSTR v10; // rbp
  size_t v11; // r14
  NTSTATUS v12; // eax
  size_t v13; // rcx
  STRSAFE_LPWSTR v15; // [rsp+30h] [rbp-28h] BYREF
  size_t pcchNewDestLength[4]; // [rsp+38h] [rbp-20h] BYREF

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
    return v9;
  }
  v15 = pszDest;
  v10 = pszDest;
  pcchNewDestLength[0] = cchDest;
  v11 = cchDest;
  if ( cchToCopy >= 0x7FFFFFFF )
  {
    v9 = -1073741811;
    if ( cchDest )
      *pszDest = 0;
LABEL_11:
    if ( v9 >= 0 )
    {
LABEL_12:
      if ( ppszDestEnd )
        *ppszDestEnd = v10;
      if ( pcchRemaining )
        *pcchRemaining = v11;
      return v9;
    }
    goto LABEL_27;
  }
  if ( (dwFlags & 0x100) != 0 && !pszSrc )
  {
    pszSrc = (STRSAFE_PCNZWCH)&pwsz;
    cchToCopy = 0LL;
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
    v12 = RtlStringCopyWorkerW_0(pszDest, cchDest, pcchNewDestLength, pszSrc, cchToCopy);
    v13 = pcchNewDestLength[0];
    v9 = v12;
    v11 = cchDest - pcchNewDestLength[0];
    pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
    v10 = &pszDest[v13];
    v15 = v10;
    if ( v12 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 && v11 > 1 )
      {
        pszSrc = (STRSAFE_PCNZWCH)(2 * v11);
        if ( 2 * v11 > 2 )
          memset(v10 + 1, (unsigned __int8)dwFlags, (size_t)(pszSrc - 1));
      }
      goto LABEL_11;
    }
  }
  else
  {
    if ( !cchToCopy || !*pszSrc )
      goto LABEL_12;
    v9 = pszDest != 0LL ? -2147483643 : -1073741811;
  }
LABEL_27:
  if ( (dwFlags & 0x1C00) != 0 && cchDest )
  {
    StringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)pszSrc, &v15, pcchNewDestLength, dwFlags);
    v10 = v15;
    v11 = pcchNewDestLength[0];
  }
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
    goto LABEL_12;
  return v9;
}
