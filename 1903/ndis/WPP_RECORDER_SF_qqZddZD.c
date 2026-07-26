/*
 * XREFs of WPP_RECORDER_SF_qqZddZD @ 0x1C0027280
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qqZddZD(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const wchar_t *v5; // rsi
  const wchar_t *v6; // rdi
  bool v8; // zf
  __int64 v10; // r10
  const wchar_t *v11; // r9
  const wchar_t *v12; // rcx
  __int64 v13; // r8
  const wchar_t *v14; // rdx
  const wchar_t *v15; // rax
  int v16; // [rsp+20h] [rbp-C8h]
  __int64 v17; // [rsp+118h] [rbp+30h] BYREF
  va_list va; // [rsp+118h] [rbp+30h]
  __int64 v19; // [rsp+120h] [rbp+38h] BYREF
  va_list va1; // [rsp+120h] [rbp+38h]
  unsigned __int16 *v21; // [rsp+128h] [rbp+40h]
  __int64 v22; // [rsp+130h] [rbp+48h] BYREF
  va_list va2; // [rsp+130h] [rbp+48h]
  __int64 v24; // [rsp+138h] [rbp+50h] BYREF
  va_list va3; // [rsp+138h] [rbp+50h]
  unsigned __int16 *v26; // [rsp+140h] [rbp+58h]
  va_list va4; // [rsp+148h] [rbp+60h] BYREF

  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  v21 = va_arg(va2, unsigned __int16 *);
  va_copy(va3, va2);
  v22 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v24 = va_arg(va4, _QWORD);
  v26 = va_arg(va4, unsigned __int16 *);
  v5 = L"NULL";
  v6 = v21;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( v26 )
      v10 = *v26;
    else
      v10 = 8LL;
    if ( v26 && *v26 )
      v11 = (const wchar_t *)*((_QWORD *)v26 + 1);
    else
      v11 = L"NULL";
    v12 = v26;
    if ( !v26 )
      v12 = L"\b";
    if ( v21 )
      v13 = *v21;
    else
      v13 = 8LL;
    if ( v21 && *v21 )
      v14 = (const wchar_t *)*((_QWORD *)v21 + 1);
    else
      v14 = L"NULL";
    v15 = v21;
    if ( !v21 )
      v15 = L"\b";
    ndisWppFastTraceMessage(
      (const struct _GUID *)&WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
      0x22u,
      va,
      8LL,
      va1,
      8LL,
      v15,
      2LL,
      v14,
      v13,
      va2,
      4LL,
      va3,
      4LL,
      v12,
      2LL,
      v11,
      v10,
      va4,
      4LL,
      0LL);
  }
  v8 = v6 == 0LL;
  if ( v6 )
  {
    if ( *v6 )
      v5 = (const wchar_t *)*((_QWORD *)v6 + 1);
    v8 = v6 == 0LL;
  }
  if ( v8 )
    v6 = L"\b";
  LOWORD(v16) = 34;
  return WppAutoLogTrace(
           a1,
           4LL,
           9LL,
           &WPP_47cc659c6e0737e16610ce0a00f64c62_Traceguids,
           v16,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v6,
           2LL,
           v5);
}
