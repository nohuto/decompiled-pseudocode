/*
 * XREFs of GetWindowNCMetricsForDpi @ 0x1C001F918
 * Callers:
 *     _SystemParametersInfoForDpi @ 0x1C00A83BC (_SystemParametersInfoForDpi.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetScaledLogFontForDpi @ 0x1C00AB0C0 (GetScaledLogFontForDpi.c)
 */

__int64 __fastcall GetWindowNCMetricsForDpi(_DWORD *a1, __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // rax
  int v5; // ebx
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx

  v3 = a2;
  a1[5] = GetDpiDependentMetric(13LL, a2);
  a1[55] = GetDpiDependentMetric(26LL, v3);
  v4 = Get96DpiServerInfo();
  a1[1] = EngMulDiv(*(_DWORD *)(v4 + 4), v3, 96);
  a1[2] = GetDpiDependentMetric(0LL, v3);
  a1[3] = GetDpiDependentMetric(10LL, v3);
  a1[4] = GetDpiDependentMetric(12LL, v3);
  a1[29] = GetDpiDependentMetric(23LL, v3);
  a1[30] = GetDpiDependentMetric(24LL, v3);
  a1[54] = GetDpiDependentMetric(25LL, v3);
  a1[125] = GetDpiDependentMetric(29LL, v3);
  v5 = GetScaledLogFontForDpi(4LL, v3, a1 + 6) & 1;
  v6 = GetScaledLogFontForDpi(1LL, v3, a1 + 31) & v5;
  v7 = GetScaledLogFontForDpi(2LL, v3, a1 + 56) & v6;
  v8 = GetScaledLogFontForDpi(3LL, v3, a1 + 79) & v7;
  return v8 & (unsigned int)GetScaledLogFontForDpi(5LL, v3, a1 + 102);
}
