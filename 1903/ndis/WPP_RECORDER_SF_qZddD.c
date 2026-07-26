/*
 * XREFs of WPP_RECORDER_SF_qZddD @ 0x1C002CFE0
 * Callers:
 *     ndisInitializeAdapter @ 0x1C002CA48 (ndisInitializeAdapter.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qZddD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rdi
  const wchar_t *v6; // rbx
  __int64 v8; // rax
  bool v9; // zf
  __int64 v11; // rdx
  const wchar_t *v12; // rcx
  const wchar_t *v13; // rax
  int v14; // [rsp+20h] [rbp-88h]
  __int64 v15; // [rsp+D8h] [rbp+30h] BYREF
  va_list va; // [rsp+D8h] [rbp+30h]
  unsigned __int16 *v17; // [rsp+E0h] [rbp+38h]
  __int64 v18; // [rsp+E8h] [rbp+40h] BYREF
  va_list va1; // [rsp+E8h] [rbp+40h]
  __int64 v20; // [rsp+F0h] [rbp+48h] BYREF
  va_list va2; // [rsp+F0h] [rbp+48h]
  va_list va3; // [rsp+F8h] [rbp+50h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, unsigned __int16 *);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v20 = va_arg(va3, _QWORD);
  v5 = L"NULL";
  v6 = v17;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( v17 )
      v11 = *v17;
    else
      v11 = 8LL;
    if ( v17 && *v17 )
      v12 = (const wchar_t *)*((_QWORD *)v17 + 1);
    else
      v12 = L"NULL";
    v13 = v17;
    if ( !v17 )
      v13 = L"\b";
    ndisWppFastTraceMessage(
      &WPP_a3868331fe073391203672ef2b551460_Traceguids,
      0x24u,
      va,
      8LL,
      v13,
      2LL,
      v12,
      v11,
      va1,
      4LL,
      va2,
      4LL,
      va3,
      4LL,
      0LL);
  }
  if ( v6 )
    v8 = *v6;
  else
    v8 = 8LL;
  v9 = v6 == 0LL;
  if ( v6 )
  {
    if ( *v6 )
      v5 = (const wchar_t *)*((_QWORD *)v6 + 1);
    v9 = v6 == 0LL;
  }
  if ( v9 )
    v6 = L"\b";
  LOWORD(v14) = 36;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_a3868331fe073391203672ef2b551460_Traceguids,
           v14,
           (__int64 *)va,
           8LL,
           v6,
           2LL,
           v5,
           v8,
           (__int64 *)va1);
}
