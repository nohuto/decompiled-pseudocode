/*
 * XREFs of WPP_RECORDER_SF_SqZ @ 0x1C0072504
 * Callers:
 *     ndisMUpdateNameOnPMWakePacket @ 0x1C0073534 (ndisMUpdateNameOnPMWakePacket.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_SqZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const wchar_t *a6,
        char a7,
        unsigned __int16 *a8)
{
  const wchar_t *v8; // rbx
  const wchar_t *v9; // rdi
  __int64 v10; // rsi
  __int64 v12; // rbp
  __int64 v13; // r10
  const wchar_t *v14; // rdx
  const wchar_t *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  const wchar_t *v18; // r8
  const wchar_t *v19; // rax
  bool v20; // zf
  int v22; // [rsp+20h] [rbp-78h]

  v8 = a8;
  v9 = a6;
  v10 = -1LL;
  v12 = 10LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a8 )
      v13 = *a8;
    else
      v13 = 8LL;
    if ( a8 && *a8 )
      v14 = (const wchar_t *)*((_QWORD *)a8 + 1);
    else
      v14 = L"NULL";
    v15 = a8;
    if ( !a8 )
      v15 = L"\b";
    if ( a6 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a6[v16] );
      v17 = 2 * v16 + 2;
    }
    else
    {
      v17 = 10LL;
    }
    v18 = a6;
    if ( !a6 )
      v18 = L"NULL";
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_091de2f669683db8988ab996bc16e527_Traceguids,
      0x7Fu,
      v18,
      v17,
      &a7,
      8LL,
      v15,
      2LL,
      v14,
      v13,
      0LL);
  }
  if ( v8 && *v8 )
    v19 = (const wchar_t *)*((_QWORD *)v8 + 1);
  else
    v19 = L"NULL";
  if ( !v8 )
    v8 = L"\b";
  v20 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v10;
    while ( a6[v10] );
    v12 = 2 * v10 + 2;
    v20 = a6 == 0LL;
  }
  if ( v20 )
    v9 = L"NULL";
  LOWORD(v22) = 127;
  return WppAutoLogTrace(
           a1,
           4LL,
           14LL,
           &WPP_091de2f669683db8988ab996bc16e527_Traceguids,
           v22,
           v9,
           v12,
           &a7,
           8LL,
           v8,
           2LL,
           v19);
}
