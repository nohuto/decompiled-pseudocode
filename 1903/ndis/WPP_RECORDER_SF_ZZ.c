/*
 * XREFs of WPP_RECORDER_SF_ZZ @ 0x1C0066B14
 * Callers:
 *     ndisIfAliasChange @ 0x1C0067650 (ndisIfAliasChange.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_ZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7)
{
  const wchar_t *v7; // rbp
  const wchar_t *v8; // rbx
  const wchar_t *v9; // rdi
  __int64 v11; // rsi
  __int64 v12; // r10
  const wchar_t *v13; // r9
  const wchar_t *v14; // rcx
  __int64 v15; // rdx
  const wchar_t *v16; // rax
  const wchar_t *v17; // r8
  const wchar_t *v18; // rax
  bool v19; // zf
  int v21; // [rsp+20h] [rbp-78h]

  v7 = L"NULL";
  v8 = a7;
  v9 = a6;
  v11 = 8LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x200000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a7 )
      v12 = *a7;
    else
      v12 = 8LL;
    if ( a7 && *a7 )
      v13 = (const wchar_t *)*((_QWORD *)a7 + 1);
    else
      v13 = L"NULL";
    v14 = a7;
    if ( !a7 )
      v14 = L"\b";
    if ( a6 )
      v15 = *a6;
    else
      v15 = 8LL;
    if ( a6 && *a6 )
      v16 = (const wchar_t *)*((_QWORD *)a6 + 1);
    else
      v16 = L"NULL";
    v17 = a6;
    if ( !a6 )
      v17 = L"\b";
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      0xA1u,
      v17,
      2LL,
      v16,
      v15,
      v14,
      2LL,
      v13,
      v12,
      0LL);
  }
  if ( a7 && *a7 )
    v18 = (const wchar_t *)*((_QWORD *)a7 + 1);
  else
    v18 = L"NULL";
  if ( !a7 )
    v8 = L"\b";
  v19 = a6 == 0LL;
  if ( a6 )
  {
    v11 = *a6;
    if ( *a6 )
      v7 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v19 = a6 == 0LL;
  }
  if ( v19 )
    v9 = L"\b";
  LOWORD(v21) = 161;
  return WppAutoLogTrace(
           a1,
           4LL,
           22LL,
           &WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
           v21,
           v9,
           2LL,
           v7,
           v11,
           v8,
           2LL,
           v18);
}
