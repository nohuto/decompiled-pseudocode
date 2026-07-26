/*
 * XREFs of WPP_RECORDER_SF_qqdqqS @ 0x1C00C1874
 * Callers:
 *     ndisOidPrePDOpenProvider @ 0x1C0122830 (ndisOidPrePDOpenProvider.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqdqqS(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        const wchar_t *a11)
{
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  const wchar_t *v16; // rax
  int v18; // [rsp+20h] [rbp-88h]

  v11 = (__int64)a11;
  v12 = -1LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a11 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a11[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = a11;
    if ( !a11 )
      v16 = L"NULL";
    ndisWppFastTraceMessage(
      &WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      0x18u,
      &a6,
      8LL,
      &a7,
      8LL,
      &a8,
      4LL,
      &a9,
      8LL,
      &a10,
      8LL,
      v16,
      v15,
      0LL);
  }
  if ( v11 )
  {
    do
      ++v12;
    while ( *(_WORD *)(v11 + 2 * v12) );
  }
  LOWORD(v18) = 24;
  return WppAutoLogTrace(
           a1,
           4LL,
           29LL,
           &WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
           v18,
           &a6,
           8LL,
           &a7,
           8LL,
           &a8,
           4LL,
           &a9);
}
