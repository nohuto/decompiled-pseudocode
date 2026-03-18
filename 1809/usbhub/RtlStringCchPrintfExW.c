/*
 * XREFs of RtlStringCchPrintfExW @ 0x1C0028820
 * Callers:
 *     UsbhBusIfLocationGetLocationStrings @ 0x1C0028780 (UsbhBusIfLocationGetLocationStrings.c)
 * Callees:
 *     memset @ 0x1C002B800 (memset.c)
 *     RtlStringExHandleOtherFlagsW @ 0x1C00547E0 (RtlStringExHandleOtherFlagsW.c)
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
  NTSTATUS v9; // r10d
  NTSTRSAFE_PWSTR v10; // rbp
  size_t v11; // rdi
  NTSTRSAFE_PCWSTR v12; // r8
  NTSTATUS v13; // r15d
  size_t v14; // rbx
  int v15; // eax
  NTSTATUS result; // eax
  NTSTRSAFE_PWSTR ppszDestEnda; // [rsp+30h] [rbp-58h] BYREF
  size_t v18[2]; // [rsp+38h] [rbp-50h] BYREF
  va_list Args; // [rsp+C0h] [rbp+38h] BYREF

  va_start(Args, pszFormat);
  v9 = 0;
  if ( (dwFlags & 0x100) == 0 )
  {
    if ( cchDest - 1 <= 0x7FFFFFFE )
      goto LABEL_3;
    goto LABEL_25;
  }
  if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
LABEL_25:
    v9 = -1073741811;
LABEL_3:
  if ( v9 >= 0 )
  {
    v10 = pszDest;
    v11 = cchDest;
    ppszDestEnda = pszDest;
    v18[0] = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v12 = (NTSTRSAFE_PCWSTR)&unk_1C0063A78;
      if ( pszFormat )
        v12 = pszFormat;
    }
    else
    {
      v12 = pszFormat;
    }
    v13 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v13 = -1073741811;
      if ( cchDest )
        *pszDest = 0;
      goto LABEL_31;
    }
    if ( !cchDest )
    {
      if ( !*v12 )
      {
LABEL_17:
        if ( ppszDestEnd )
          *ppszDestEnd = v10;
        result = v13;
        if ( pcchRemaining )
          *pcchRemaining = v11;
        return result;
      }
      v13 = -2147483643;
      if ( !pszDest )
        v13 = -1073741811;
LABEL_31:
      if ( (dwFlags & 0x1C00) != 0 && cchDest )
      {
        RtlStringExHandleOtherFlagsW(pszDest, 2 * cchDest, (size_t)v12, &ppszDestEnda, v18, dwFlags);
        v10 = ppszDestEnda;
        v11 = v18[0];
      }
      if ( (int)(v13 + 0x80000000) >= 0 && v13 != -2147483643 )
        return v13;
      goto LABEL_17;
    }
    v14 = cchDest - 1;
    v15 = _vsnwprintf(pszDest, cchDest - 1, v12, Args);
    if ( v15 < 0 || v15 > v14 )
    {
      v13 = -2147483643;
    }
    else if ( v15 != v14 )
    {
      v14 = v15;
      goto LABEL_12;
    }
    pszDest[v14] = 0;
LABEL_12:
    v11 = cchDest - v14;
    v10 = &pszDest[v14];
    ppszDestEnda = v10;
    v18[0] = cchDest - v14;
    if ( v13 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
        memset(v10 + 1, (unsigned __int8)dwFlags, 2 * v11 - 2);
      goto LABEL_17;
    }
    goto LABEL_31;
  }
  result = v9;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
