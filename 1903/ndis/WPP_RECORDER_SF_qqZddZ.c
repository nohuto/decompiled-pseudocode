/*
 * XREFs of WPP_RECORDER_SF_qqZddZ @ 0x1C002768C
 * Callers:
 *     ndisMOpenAdapter @ 0x1C012C0CC (ndisMOpenAdapter.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqZddZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        char a7,
        unsigned __int16 *a8,
        char a9,
        char a10,
        unsigned __int16 *a11)
{
  const wchar_t *v11; // rsi
  const wchar_t *v12; // rdi
  bool v14; // zf
  __int64 v16; // r10
  const wchar_t *v17; // r9
  const wchar_t *v18; // rcx
  __int64 v19; // r8
  const wchar_t *v20; // rdx
  const wchar_t *v21; // rax
  int v22; // [rsp+20h] [rbp-B8h]

  v11 = L"NULL";
  v12 = a8;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a11 )
      v16 = *a11;
    else
      v16 = 8LL;
    if ( a11 && *a11 )
      v17 = (const wchar_t *)*((_QWORD *)a11 + 1);
    else
      v17 = L"NULL";
    v18 = a11;
    if ( !a11 )
      v18 = L"\b";
    if ( a8 )
      v19 = *a8;
    else
      v19 = 8LL;
    if ( a8 && *a8 )
      v20 = (const wchar_t *)*((_QWORD *)a8 + 1);
    else
      v20 = L"NULL";
    v21 = a8;
    if ( !a8 )
      v21 = L"\b";
    ndisWppFastTraceMessage(
      &WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      0x31u,
      &a6,
      8LL,
      &a7,
      8LL,
      v21,
      2LL,
      v20,
      v19,
      &a9,
      4LL,
      &a10,
      4LL,
      v18,
      2LL,
      v17,
      v16,
      0LL);
  }
  v14 = v12 == 0LL;
  if ( v12 )
  {
    if ( *v12 )
      v11 = (const wchar_t *)*((_QWORD *)v12 + 1);
    v14 = v12 == 0LL;
  }
  if ( v14 )
    v12 = L"\b";
  LOWORD(v22) = 49;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
           v22,
           &a6,
           8LL,
           &a7,
           8LL,
           v12,
           2LL,
           v11);
}
