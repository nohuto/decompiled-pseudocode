/*
 * XREFs of WPP_RECORDER_SF_ZL @ 0x1C00381D0
 * Callers:
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C00380E4 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1C0092758 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_ZL(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, unsigned __int16 *a6, ...)
{
  const wchar_t *v6; // rsi
  const wchar_t *v7; // rbx
  __int64 v10; // rdi
  bool v11; // zf
  __int64 v13; // rcx
  const wchar_t *v14; // rax
  const wchar_t *v15; // r8
  int v16; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = L"NULL";
  v7 = a6;
  v10 = 8LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x10) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a6 )
      v13 = *a6;
    else
      v13 = 8LL;
    if ( a6 && *a6 )
      v14 = (const wchar_t *)*((_QWORD *)a6 + 1);
    else
      v14 = L"NULL";
    v15 = a6;
    if ( !a6 )
      v15 = L"\b";
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      a4,
      v15,
      2LL,
      v14,
      v13,
      va,
      4LL,
      0LL);
  }
  v11 = a6 == 0LL;
  if ( a6 )
  {
    v10 = *a6;
    if ( *a6 )
      v6 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v11 = a6 == 0LL;
  }
  if ( v11 )
    v7 = L"\b";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           5LL,
           &WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
           v16,
           v7,
           2LL,
           v6,
           v10,
           va,
           4LL,
           0LL);
}
