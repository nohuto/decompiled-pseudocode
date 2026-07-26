/*
 * XREFs of WPP_RECORDER_SF_Zd @ 0x1C007DF0C
 * Callers:
 *     ?ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C007BCB4 (-ndisAoAcTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C0127D54 (-ReferenceWdi@@YA_NXZ.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Zd(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        unsigned __int16 *a6,
        ...)
{
  const wchar_t *v7; // rbp
  unsigned __int64 v10; // rdi
  const wchar_t *v12; // rbx
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rcx
  const wchar_t *v16; // rax
  const wchar_t *v17; // r8
  bool v18; // zf
  int v20; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+C0h] [rbp+38h] BYREF

  va_start(va, a6);
  v7 = L"NULL";
  v10 = (unsigned __int64)a3 >> 16;
  v12 = a6;
  v13 = 8LL;
  v14 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v14, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= a2 )
  {
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
    ndisWppFastTraceMessage(a5, a4, v17, 2LL, v16, v15, va, 4LL, 0LL);
  }
  v18 = a6 == 0LL;
  if ( a6 )
  {
    v13 = *a6;
    if ( *a6 )
      v7 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v18 = a6 == 0LL;
  }
  if ( v18 )
    v12 = L"\b";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v20, v12, 2LL, v7, v13, va, 4LL, 0LL);
}
