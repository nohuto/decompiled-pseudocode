/*
 * XREFs of _SystemParametersInfoForDpi @ 0x1C00F43E4
 * Callers:
 *     NtUserSystemParametersInfoForDpi @ 0x1C00F4290 (NtUserSystemParametersInfoForDpi.c)
 * Callees:
 *     GetWindowNCMetricsForDpi @ 0x1C0014170 (GetWindowNCMetricsForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C00142A4 (GetScaledLogFontForDpi.c)
 *     GetDpiDependentMetric @ 0x1C0039CF0 (GetDpiDependentMetric.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall SystemParametersInfoForDpi(int a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  _DWORD *v6; // rdi
  unsigned int v9; // edx

  v5 = 0;
  v6 = a3;
  if ( a1 != 41 )
  {
    if ( a1 == 31 )
    {
      v9 = a5;
    }
    else
    {
      if ( a1 != 45 )
        return v5;
      if ( *a3 != 108 )
      {
LABEL_12:
        UserSetLastError(87LL, a2);
        return v5;
      }
      a3[1] = GetDpiDependentMetric(18LL, a5);
      v6[2] = GetDpiDependentMetric(19LL, a5);
      a3 = v6 + 4;
      v9 = a5;
      v6[3] = (gdwPUDFlags >> 21) & 1;
    }
    return GetScaledLogFontForDpi(0, v9, (__int64)a3);
  }
  if ( *a3 != 504 )
    goto LABEL_12;
  return (unsigned int)GetWindowNCMetricsForDpi(a3, a5);
}
