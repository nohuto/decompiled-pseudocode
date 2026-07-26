/*
 * XREFs of WPP_RECORDER_SF_qZZ @ 0x1C0027554
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C0093A48 (ndisOpenAdapterLegacyProtocol.c)
 *     NdisOpenAdapterEx @ 0x1C012B900 (NdisOpenAdapterEx.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        unsigned __int16 *a7,
        unsigned __int16 *a8)
{
  const wchar_t *v8; // rsi
  const wchar_t *v9; // rbx
  const wchar_t *v10; // rdi
  __int64 v13; // rax
  bool v14; // zf
  __int64 v16; // r10
  const wchar_t *v17; // r9
  const wchar_t *v18; // rdx
  __int64 v19; // r8
  const wchar_t *v20; // rcx
  const wchar_t *v21; // rax
  int v22; // [rsp+20h] [rbp-88h]

  v8 = L"NULL";
  v9 = a8;
  v10 = a7;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x20) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
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
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a4,
      &a6,
      8LL,
      v21,
      2LL,
      v20,
      v19,
      v18,
      2LL,
      v17,
      v16,
      0LL);
  }
  if ( !v9 )
    v9 = L"\b";
  if ( v10 )
    v13 = *v10;
  else
    v13 = 8LL;
  v14 = v10 == 0LL;
  if ( v10 )
  {
    if ( *v10 )
      v8 = (const wchar_t *)*((_QWORD *)v10 + 1);
    v14 = v10 == 0LL;
  }
  if ( v14 )
    v10 = L"\b";
  LOWORD(v22) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           6LL,
           &WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
           v22,
           &a6,
           8LL,
           v10,
           2LL,
           v8,
           v13,
           v9);
}
