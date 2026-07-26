/*
 * XREFs of WPP_RECORDER_SF_qdSS @ 0x1C00C0B84
 * Callers:
 *     ?NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEAPEAUNDIS_PD_COUNTER_HANDLE__@@@Z @ 0x1C011F990 (-NdisPDPIAllocateCounter@@YAJPEAUNDIS_PD_PROVIDER_HANDLE__@@PEBU_NDIS_PD_COUNTER_PARAMETERS@@PEA.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qdSS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        const wchar_t *a8,
        const wchar_t *a9)
{
  const wchar_t *v9; // rbx
  const wchar_t *v10; // rsi
  __int64 v11; // rdi
  __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // r8
  const wchar_t *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  const wchar_t *v19; // rax
  __int64 v20; // rax
  bool v21; // zf
  int v23; // [rsp+20h] [rbp-68h]

  v9 = a9;
  v10 = a8;
  v11 = -1LL;
  v13 = 10LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a9 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a9[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = a9;
    if ( !a9 )
      v16 = L"NULL";
    if ( a8 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a8[v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      v18 = 10LL;
    }
    v19 = a8;
    if ( !a8 )
      v19 = L"NULL";
    ndisWppFastTraceMessage(
      &WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      0x2Au,
      &a6,
      8LL,
      &a7,
      4LL,
      v19,
      v18,
      v16,
      v15,
      0LL);
  }
  if ( v9 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( v9[v20] );
  }
  if ( !v9 )
    v9 = L"NULL";
  v21 = v10 == 0LL;
  if ( v10 )
  {
    do
      ++v11;
    while ( v10[v11] );
    v13 = 2 * v11 + 2;
    v21 = v10 == 0LL;
  }
  if ( v21 )
    v10 = L"NULL";
  LOWORD(v23) = 42;
  return WppAutoLogTrace(
           a1,
           4LL,
           29LL,
           &WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
           v23,
           &a6,
           8LL,
           &a7,
           4LL,
           v10,
           v13,
           v9);
}
