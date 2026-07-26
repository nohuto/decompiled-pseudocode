/*
 * XREFs of WPP_RECORDER_SF_SD @ 0x1C0080460
 * Callers:
 *     ?ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z @ 0x1C0107B90 (-ndisReadRegistryKnobs@@YAJPEAU_DRIVER_OBJECT@@PEBUNDIS_REGISTRY_KNOB@@_K@Z.c)
 *     NdisQueryDiagnosticSetting @ 0x1C0119850 (NdisQueryDiagnosticSetting.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_SD(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        const wchar_t *a6,
        ...)
{
  __int64 v6; // rdi
  unsigned __int64 v10; // rsi
  __int64 v12; // rbp
  const wchar_t *v13; // rbx
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // r9
  const wchar_t *v17; // r8
  bool v18; // zf
  int v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+50h] [rbp-28h]
  __int64 v22; // [rsp+58h] [rbp-20h]
  va_list va; // [rsp+B0h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = 10LL;
  v13 = a6;
  v14 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v14, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= a2 )
  {
    if ( a6 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a6[v15] );
      v16 = 2 * v15 + 2;
    }
    else
    {
      v16 = 10LL;
    }
    v17 = a6;
    if ( !a6 )
      v17 = L"NULL";
    ndisWppFastTraceMessage(a5, a4, v17, v16, va, 4LL, 0LL);
  }
  v18 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v6;
    while ( a6[v6] );
    v12 = 2 * v6 + 2;
    v18 = a6 == 0LL;
  }
  if ( v18 )
    v13 = L"NULL";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v20, v13, v12, va, 4LL, 0LL, v21, v22);
}
