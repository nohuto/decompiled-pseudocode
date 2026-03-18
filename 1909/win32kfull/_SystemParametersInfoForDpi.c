/*
 * XREFs of _SystemParametersInfoForDpi @ 0x1C01290DC
 * Callers:
 *     NtUserSystemParametersInfoForDpi @ 0x1C0128F60 (NtUserSystemParametersInfoForDpi.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetWindowNCMetricsForDpi @ 0x1C004B21C (GetWindowNCMetricsForDpi.c)
 *     GetScaledLogFontForDpi @ 0x1C012A5EC (GetScaledLogFontForDpi.c)
 */

__int64 __fastcall SystemParametersInfoForDpi(int a1, __int64 a2, _DWORD *a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // ebx
  _DWORD *v6; // rdi
  __int64 v9; // rdx

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
        UserSetLastError(87LL, a2, (__int64)a3, a4);
        return v5;
      }
      a3[1] = GetDpiDependentMetric(18LL, a5);
      v6[2] = GetDpiDependentMetric(19LL, a5);
      a3 = v6 + 4;
      v9 = a5;
      v6[3] = (gdwPUDFlags >> 21) & 1;
    }
    return (unsigned int)GetScaledLogFontForDpi(0LL, v9, a3);
  }
  if ( *a3 != 504 )
    goto LABEL_12;
  return (unsigned int)GetWindowNCMetricsForDpi(a3, a5);
}
