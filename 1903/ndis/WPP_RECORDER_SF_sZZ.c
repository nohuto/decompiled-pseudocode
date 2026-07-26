/*
 * XREFs of WPP_RECORDER_SF_sZZ @ 0x1C007DF88
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C001CB74 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        unsigned __int16 *a7,
        unsigned __int16 *a8)
{
  const wchar_t *v8; // rbx
  const wchar_t *v9; // r12
  const wchar_t *v10; // rdi
  const char *v11; // rbp
  __int64 v12; // rsi
  __int64 v14; // r10
  __int64 v15; // r15
  __int64 v16; // r14
  const wchar_t *v17; // r11
  const wchar_t *v18; // rdx
  __int64 v19; // r10
  const wchar_t *v20; // rcx
  const wchar_t *v21; // rax
  __int64 v22; // r9
  __int64 v23; // r9
  const char *v24; // r8
  bool v25; // zf
  __int64 v26; // rsi
  int v28; // [rsp+20h] [rbp-88h]

  v8 = a8;
  v9 = L"NULL";
  v10 = a7;
  v11 = a6;
  v12 = -1LL;
  v14 = a1;
  v15 = 8LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a8 )
      v16 = *a8;
    else
      v16 = 8LL;
    if ( a8 && *a8 )
      v17 = (const wchar_t *)*((_QWORD *)a8 + 1);
    else
      v17 = L"NULL";
    v18 = a8;
    if ( !a8 )
      v18 = L"\b";
    if ( a7 )
      v19 = *a7;
    else
      v19 = 8LL;
    if ( a7 && *a7 )
      v20 = (const wchar_t *)*((_QWORD *)a7 + 1);
    else
      v20 = L"NULL";
    v21 = a7;
    if ( !a7 )
      v21 = L"\b";
    if ( a6 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a6[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a6;
    if ( !a6 )
      v24 = "NULL";
    ndisWppFastTraceMessage(
      &WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      a4,
      v24,
      v23,
      v21,
      2LL,
      v20,
      v19,
      v18,
      2LL,
      v17,
      v16,
      0LL);
    v14 = a1;
  }
  if ( !a8 )
    v8 = L"\b";
  v25 = a7 == 0LL;
  if ( a7 )
  {
    v15 = *a7;
    if ( *a7 )
      v9 = (const wchar_t *)*((_QWORD *)a7 + 1);
    v25 = a7 == 0LL;
  }
  if ( v25 )
    v10 = L"\b";
  if ( a6 )
  {
    do
      ++v12;
    while ( a6[v12] );
    v26 = v12 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( !a6 )
    v11 = "NULL";
  LOWORD(v28) = a4;
  return WppAutoLogTrace(
           v14,
           4LL,
           13LL,
           &WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
           v28,
           v11,
           v26,
           v10,
           2LL,
           v9,
           v15,
           v8);
}
