/*
 * XREFs of RtlStringCbCopyExW @ 0x140007504
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x14059D504 (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1406EA444 (PiCMGetRelatedDeviceInstance.c)
 *     PiDqConvertQueryFlagsToString @ 0x14082BD18 (PiDqConvertQueryFlagsToString.c)
 *     RtlFormatMessageEx @ 0x1408925F4 (RtlFormatMessageEx.c)
 *     _PnpMultiSzAppend @ 0x14090154C (_PnpMultiSzAppend.c)
 *     ConvertDevpropertyToString @ 0x14090565C (ConvertDevpropertyToString.c)
 *     ExpressionConvertToString @ 0x140905D2C (ExpressionConvertToString.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x14000764C (RtlStringCopyWorkerW.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     StringExHandleOtherFlagsW @ 0x140287944 (StringExHandleOtherFlagsW.c)
 */

NTSTATUS __stdcall RtlStringCbCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags)
{
  DWORD v6; // r15d
  size_t v8; // rdi
  int v11; // ebx
  wchar_t *v12; // rbp
  const wchar_t *v13; // rax
  size_t *pcchRemaining; // [rsp+20h] [rbp-48h]
  size_t v16[2]; // [rsp+30h] [rbp-38h] BYREF
  size_t pcchNewDestLength; // [rsp+78h] [rbp+10h] BYREF

  v6 = dwFlags;
  v8 = cbDest >> 1;
  v11 = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && v8 || v8 > 0x7FFFFFFF )
      v11 = -1073741811;
  }
  else if ( v8 - 1 > 0x7FFFFFFE )
  {
    v11 = -1073741811;
  }
  if ( v11 < 0 )
  {
    if ( v8 )
      *pszDest = 0;
    return v11;
  }
  pcchNewDestLength = (size_t)pszDest;
  v12 = pszDest;
  v16[0] = cbDest >> 1;
  if ( (dwFlags & 0x100) != 0 )
  {
    v13 = (const wchar_t *)&pwsz;
    if ( pszSrc )
      v13 = pszSrc;
    pszSrc = v13;
  }
  v11 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v11 = -1073741811;
    if ( v8 )
      *pszDest = 0;
  }
  else
  {
    if ( !v8 )
    {
      if ( !*pszSrc )
        goto LABEL_14;
      v11 = pszDest != 0LL ? -2147483643 : -1073741811;
LABEL_13:
      if ( v11 >= 0 )
      {
LABEL_14:
        if ( ppszDestEnd )
          *ppszDestEnd = v12;
        if ( pcbRemaining )
          *pcbRemaining = (cbDest & 1) + 2 * v8;
        return v11;
      }
      goto LABEL_26;
    }
    pcchNewDestLength = 0LL;
    v11 = RtlStringCopyWorkerW(pszDest, v8, &pcchNewDestLength, pszSrc, (size_t)pcchRemaining);
    v8 -= pcchNewDestLength;
    v16[0] = v8;
    v12 = &pszDest[pcchNewDestLength];
    pcchNewDestLength = (size_t)v12;
    if ( v11 >= 0 )
    {
      if ( (v6 & 0x200) != 0 )
      {
        pszSrc = (NTSTRSAFE_PCWSTR)((cbDest & 1) + 2 * v8);
        if ( (unsigned __int64)pszSrc > 2 )
          memset(v12 + 1, (unsigned __int8)v6, (size_t)(pszSrc - 1));
      }
      goto LABEL_13;
    }
  }
LABEL_26:
  if ( (v6 & 0x1C00) != 0 && cbDest )
  {
    StringExHandleOtherFlagsW(pszDest, cbDest, (size_t)pszSrc, (STRSAFE_LPWSTR *)&pcchNewDestLength, v16, v6);
    v12 = (wchar_t *)pcchNewDestLength;
    v8 = v16[0];
  }
  if ( (int)(v11 + 0x80000000) < 0 || v11 == -2147483643 )
    goto LABEL_14;
  return v11;
}
