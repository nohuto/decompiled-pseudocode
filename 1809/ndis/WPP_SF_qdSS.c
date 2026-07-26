/*
 * XREFs of WPP_SF_qdSS @ 0x1C007C54C
 * Callers:
 *     ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C00FF8E0 (-NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEA.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void __fastcall WPP_SF_qdSS(__int64 a1, __int64 a2, __int64 a3, int a4, const wchar_t *a5, const wchar_t *a6)
{
  const wchar_t *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r9
  const wchar_t *v11; // rcx
  bool v12; // zf
  __int64 v13; // [rsp+80h] [rbp+18h] BYREF
  int v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = a4;
  v13 = a3;
  v6 = a6;
  v7 = -1LL;
  v8 = 10LL;
  if ( a6 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( a6[v9] );
    v10 = 2 * v9 + 2;
  }
  else
  {
    v10 = 10LL;
  }
  v11 = a5;
  if ( !a6 )
    v6 = L"NULL";
  v12 = a5 == 0LL;
  if ( a5 )
  {
    do
      ++v7;
    while ( a5[v7] );
    v8 = 2 * v7 + 2;
    v12 = a5 == 0LL;
  }
  if ( v12 )
    v11 = L"NULL";
  ndisWppFastTraceMessage(
    &WPP_ab90398e33e23eea2eee39389267d473_Traceguids,
    0x2Au,
    &v13,
    8LL,
    &v14,
    4LL,
    v11,
    v8,
    v6,
    v10,
    0LL);
}
