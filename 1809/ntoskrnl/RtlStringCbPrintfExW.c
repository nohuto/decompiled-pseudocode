/*
 * XREFs of RtlStringCbPrintfExW @ 0x140128D88
 * Callers:
 *     RtlQueryPackageClaims @ 0x1400A54D0 (RtlQueryPackageClaims.c)
 *     PiNormalizeDeviceText @ 0x1406FEFE0 (PiNormalizeDeviceText.c)
 *     WmipGenerateBinaryMofNotification @ 0x140761D58 (WmipGenerateBinaryMofNotification.c)
 *     EtwpQueryPsmKey @ 0x1408B61A4 (EtwpQueryPsmKey.c)
 *     ConvertDevpropcompkeyToString @ 0x14090551C (ConvertDevpropcompkeyToString.c)
 *     ConvertDevpropertyToString @ 0x14090565C (ConvertDevpropertyToString.c)
 *     PipCreateComputerId @ 0x1409CAB84 (PipCreateComputerId.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x140015FF0 (RtlStringVPrintfWorkerW.c)
 *     RtlStringExHandleFillBehindNullW @ 0x140193AC0 (RtlStringExHandleFillBehindNullW.c)
 *     StringExHandleOtherFlagsW @ 0x140287944 (StringExHandleOtherFlagsW.c)
 */

NTSTATUS RtlStringCbPrintfExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  size_t v7; // rdi
  NTSTATUS v10; // ebx
  size_t v11; // r8
  wchar_t *v12; // r12
  NTSTRSAFE_PCWSTR v13; // r9
  NTSTATUS v14; // eax
  size_t v15; // rcx
  STRSAFE_LPWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list va; // [rsp+C0h] [rbp+78h] BYREF

  va_start(va, pszFormat);
  v7 = cbDest >> 1;
  v10 = 0;
  v11 = 3221225485LL;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && v7 || v7 > 0x7FFFFFFF )
      v10 = -1073741811;
  }
  else if ( v7 - 1 > 0x7FFFFFFE )
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
  {
    if ( v7 )
      *pszDest = 0;
    return v10;
  }
  ppszDestEnda = pszDest;
  v12 = pszDest;
  pcchNewDestLength[0] = cbDest >> 1;
  if ( (dwFlags & 0x100) != 0 )
  {
    v13 = (NTSTRSAFE_PCWSTR)&pwsz;
    if ( pszFormat )
      v13 = pszFormat;
  }
  else
  {
    v13 = pszFormat;
  }
  v10 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v10 = -1073741811;
    if ( v7 )
      *pszDest = 0;
  }
  else
  {
    if ( !v7 )
    {
      if ( !*v13 )
        goto LABEL_13;
      v10 = pszDest != 0LL ? -2147483643 : -1073741811;
LABEL_12:
      if ( v10 >= 0 )
      {
LABEL_13:
        if ( ppszDestEnd )
          *ppszDestEnd = v12;
        if ( pcbRemaining )
          *pcbRemaining = (cbDest & 1) + 2 * v7;
        return v10;
      }
      goto LABEL_27;
    }
    pcchNewDestLength[0] = 0LL;
    v14 = RtlStringVPrintfWorkerW(pszDest, v7, pcchNewDestLength, v13, va);
    v15 = pcchNewDestLength[0];
    v10 = v14;
    v7 -= pcchNewDestLength[0];
    pcchNewDestLength[0] = v7;
    v12 = &pszDest[v15];
    ppszDestEnda = v12;
    if ( v14 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 )
        RtlStringExHandleFillBehindNullW(&pszDest[v15], (cbDest & 1) + 2 * v7, dwFlags);
      goto LABEL_12;
    }
  }
LABEL_27:
  if ( (dwFlags & 0x1C00) != 0 && cbDest )
  {
    StringExHandleOtherFlagsW(pszDest, cbDest, v11, &ppszDestEnda, pcchNewDestLength, dwFlags);
    v12 = ppszDestEnda;
    v7 = pcchNewDestLength[0];
  }
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
    goto LABEL_13;
  return v10;
}
