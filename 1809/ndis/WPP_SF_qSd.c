/*
 * XREFs of WPP_SF_qSd @ 0x1C005162C
 * Callers:
 *     ndisWdfOpenConfigurationKey @ 0x1C00EAAB0 (ndisWdfOpenConfigurationKey.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qSd(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, ...)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v6 = a3;
  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10LL;
  }
  if ( !a4 )
    a4 = L"NULL";
  ndisWppFastTraceMessage(&WPP_9d4cd70f7fc237db66c5630c937009d5_Traceguids, 0x10u, &v6, 8LL, a4, v5, va, 4LL, 0LL);
}
