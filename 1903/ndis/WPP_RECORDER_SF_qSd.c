/*
 * XREFs of WPP_RECORDER_SF_qSd @ 0x1C007F1E8
 * Callers:
 *     ndisWdfOpenConfigurationKey @ 0x1C0116278 (ndisWdfOpenConfigurationKey.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qSd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rbx
  __int64 v6; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  const wchar_t *v11; // rax
  bool v12; // zf
  int v14; // [rsp+20h] [rbp-58h]
  __int64 v15; // [rsp+A8h] [rbp+30h] BYREF
  va_list va; // [rsp+A8h] [rbp+30h]
  const wchar_t *v17; // [rsp+B0h] [rbp+38h]
  va_list va1; // [rsp+B8h] [rbp+40h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v15 = va_arg(va1, _QWORD);
  v17 = va_arg(va1, const wchar_t *);
  v5 = v17;
  v6 = -1LL;
  v8 = 10LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x80u) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
  {
    if ( v17 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v17[v9] );
      v10 = 2 * v9 + 2;
    }
    else
    {
      v10 = 10LL;
    }
    v11 = v17;
    if ( !v17 )
      v11 = L"NULL";
    ndisWppFastTraceMessage(&WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids, 0x10u, va, 8LL, v11, v10, va1, 4LL, 0LL);
  }
  v12 = v5 == 0LL;
  if ( v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
    v8 = 2 * v6 + 2;
    v12 = v5 == 0LL;
  }
  if ( v12 )
    v5 = L"NULL";
  LOWORD(v14) = 16;
  return WppAutoLogTrace(
           a1,
           2LL,
           8LL,
           &WPP_9b3b3d942ac1381da64d129aaaed6f79_Traceguids,
           v14,
           (__int64 *)va,
           8LL,
           v5,
           v8,
           va1,
           4LL,
           0LL);
}
