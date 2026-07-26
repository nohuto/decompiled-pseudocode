/*
 * XREFs of WPP_SF_qLLS @ 0x1C007C310
 * Callers:
 *     ?NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PROVIDER_CONTROL_CODE@@PEAXK3KPEAK@Z @ 0x1C00FFF80 (-NdisPDPIProviderControl@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@W4NDIS_PD_CONTROL_TYPE@@W4NDIS_PD_PR.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qLLS(__int64 a1, __int64 a2, __int64 a3, int a4, char a5, const wchar_t *a6)
{
  const wchar_t *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF
  int v10; // [rsp+88h] [rbp+20h] BYREF

  v10 = a4;
  v9 = a3;
  v6 = a6;
  if ( a6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a6[v7] );
    v8 = 2 * v7 + 2;
  }
  else
  {
    v8 = 10LL;
  }
  if ( !a6 )
    v6 = L"NULL";
  ndisWppFastTraceMessage(
    &WPP_ab90398e33e23eea2eee39389267d473_Traceguids,
    0x3Bu,
    &v9,
    8LL,
    &v10,
    4LL,
    &a5,
    4LL,
    v6,
    v8,
    0LL);
}
