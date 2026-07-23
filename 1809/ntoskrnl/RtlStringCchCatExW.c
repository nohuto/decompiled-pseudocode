/*
 * XREFs of RtlStringCchCatExW @ 0x14028B120
 * Callers:
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14059C86C (_CmGetDeviceInterfaceRegKeyPath.c)
 *     PiCMGenerateDeviceInstance @ 0x140839064 (PiCMGenerateDeviceInstance.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x14000764C (RtlStringCopyWorkerW.c)
 *     RtlStringLengthWorkerW @ 0x14028B1F4 (RtlStringLengthWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchCatExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  int v6; // r9d
  const wchar_t *v7; // r11
  size_t v10; // rax
  size_t v12; // [rsp+20h] [rbp-18h]
  size_t pcchLength; // [rsp+58h] [rbp+20h] BYREF

  pcchLength = (size_t)ppszDestEnd;
  v6 = 0;
  v7 = pszSrc;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v6 = -1073741811;
  if ( v6 < 0 )
  {
    v10 = 0LL;
  }
  else
  {
    v6 = RtlStringLengthWorkerW(pszDest, cchDest, &pcchLength);
    v10 = pcchLength;
  }
  if ( v6 >= 0 )
  {
    v6 = 0;
    if ( cchDest - v10 > 1 )
    {
      v6 = RtlStringCopyWorkerW(&pszDest[v10], cchDest - v10, &pcchLength, v7, v12);
      if ( v6 >= 0 )
        return v6;
    }
    else
    {
      if ( !*v7 )
        return v6;
      v6 = pszDest != 0LL ? -2147483643 : -1073741811;
    }
    if ( cchDest && (cchDest & 0x7FFFFFFFFFFFFFFFLL) != 0 )
      *pszDest = 0;
  }
  return v6;
}
