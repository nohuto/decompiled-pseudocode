/*
 * XREFs of WPP_RECORDER_SF_ZLqL @ 0x1C00A49D0
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ZLqL(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, unsigned __int16 *a6, ...)
{
  const wchar_t *v6; // rdi
  const wchar_t *v7; // rbx
  __int64 v9; // rcx
  const wchar_t *v10; // rax
  const wchar_t *v11; // r8
  __int64 v12; // rax
  bool v13; // zf
  int v15; // [rsp+20h] [rbp-78h]
  __int64 v16; // [rsp+D0h] [rbp+38h] BYREF
  va_list va; // [rsp+D0h] [rbp+38h]
  __int64 v18; // [rsp+D8h] [rbp+40h] BYREF
  va_list va1; // [rsp+D8h] [rbp+40h]
  va_list va2; // [rsp+E0h] [rbp+48h] BYREF

  va_start(va2, a6);
  va_start(va1, a6);
  va_start(va, a6);
  v16 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v18 = va_arg(va2, _QWORD);
  v6 = L"NULL";
  v7 = a6;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a6 )
      v9 = *a6;
    else
      v9 = 8LL;
    if ( a6 && *a6 )
      v10 = (const wchar_t *)*((_QWORD *)a6 + 1);
    else
      v10 = L"NULL";
    v11 = a6;
    if ( !a6 )
      v11 = L"\b";
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      0x11u,
      v11,
      2LL,
      v10,
      v9,
      va,
      4LL,
      va1,
      8LL,
      va2,
      4LL,
      0LL);
  }
  if ( a6 )
    v12 = *a6;
  else
    v12 = 8LL;
  v13 = a6 == 0LL;
  if ( a6 )
  {
    if ( *a6 )
      v6 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v13 = a6 == 0LL;
  }
  if ( v13 )
    v7 = L"\b";
  LOWORD(v15) = 17;
  return WppAutoLogTrace(
           a1,
           4LL,
           13LL,
           &WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
           v15,
           v7,
           2LL,
           v6,
           v12,
           (__int64 *)va,
           4LL,
           (__int64 *)va1);
}
