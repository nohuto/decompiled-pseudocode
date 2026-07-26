/*
 * XREFs of WPP_RECORDER_SF_qsDDs @ 0x1C00994A4
 * Callers:
 *     ndisRssPmObjectHeaderFixup @ 0x1C0030244 (ndisRssPmObjectHeaderFixup.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsDDs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10)
{
  const char *v10; // rdi
  __int64 v11; // rbx
  const char *v12; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdx
  const char *v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  const char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rbx
  int v24; // [rsp+20h] [rbp-78h]

  v10 = a10;
  v11 = -1LL;
  v12 = a7;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
  {
    if ( a10 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a10[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a10;
    if ( !a10 )
      v17 = "NULL";
    if ( a7 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a7[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a7;
    if ( !a7 )
      v20 = "NULL";
    ndisWppFastTraceMessage(
      &WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a4,
      &a6,
      8LL,
      v20,
      v19,
      &a8,
      4LL,
      &a9,
      4LL,
      v17,
      v16,
      0LL);
  }
  if ( v10 )
  {
    v21 = -1LL;
    do
      ++v21;
    while ( v10[v21] );
  }
  if ( v12 )
  {
    do
      ++v11;
    while ( v12[v11] );
    v22 = v11 + 1;
  }
  else
  {
    v22 = 5LL;
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v24) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           1LL,
           &WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
           v24,
           &a6,
           8LL,
           v12,
           v22,
           &a8,
           4LL,
           &a9);
}
