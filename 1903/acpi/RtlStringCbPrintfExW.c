/*
 * XREFs of RtlStringCbPrintfExW @ 0x1C00050A8
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C008FB24 (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0097DE4 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C009F364 (ACPIBusIrpQueryCompatibleId.c)
 * Callees:
 *     RtlStringVPrintfWorkerW @ 0x1C00051B4 (RtlStringVPrintfWorkerW.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C004AC08 (RtlStringExHandleOtherFlagsW.c)
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
  NTSTRSAFE_PWSTR v12; // r13
  NTSTRSAFE_PCWSTR v13; // r9
  NTSTATUS v14; // eax
  size_t v15; // rcx
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-18h] BYREF
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
    v13 = &word_1C006FF24;
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
        goto LABEL_12;
      v10 = pszDest != 0LL ? -2147483643 : -1073741811;
LABEL_11:
      if ( v10 >= 0 )
      {
LABEL_12:
        if ( ppszDestEnd )
          *ppszDestEnd = v12;
        if ( pcbRemaining )
          *pcbRemaining = (cbDest & 1) + 2 * v7;
        return v10;
      }
      goto LABEL_26;
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
      {
        v11 = (cbDest & 1) + 2 * v7;
        if ( v11 > 2 )
          memset(v12 + 1, (unsigned __int8)dwFlags, v11 - 2);
      }
      goto LABEL_11;
    }
  }
LABEL_26:
  if ( (dwFlags & 0x1C00) != 0 && cbDest )
  {
    RtlStringExHandleOtherFlagsW(pszDest, cbDest, v11, &ppszDestEnda, pcchNewDestLength, dwFlags);
    v12 = ppszDestEnda;
    v7 = pcchNewDestLength[0];
  }
  if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
    goto LABEL_12;
  return v10;
}
