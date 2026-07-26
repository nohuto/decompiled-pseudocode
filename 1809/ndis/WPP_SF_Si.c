/*
 * XREFs of WPP_SF_Si @ 0x1C0065398
 * Callers:
 *     ndisQueryDeviceFlags @ 0x1C00CAF4C (ndisQueryDeviceFlags.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_Si(__int64 a1, __int64 a2, const wchar_t *a3, ...)
{
  __int64 v3; // rax
  __int64 v4; // r9
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( a3 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a3[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10LL;
  }
  if ( !a3 )
    a3 = L"NULL";
  ndisWppFastTraceMessage(&WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, 0x72u, a3, v4, va, 8LL, 0LL);
}
