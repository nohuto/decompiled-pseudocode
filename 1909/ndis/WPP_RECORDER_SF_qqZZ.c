/*
 * XREFs of WPP_RECORDER_SF_qqZZ @ 0x1C0027CDC
 * Callers:
 *     ndisPnPNotifyBinding @ 0x1C012B048 (ndisPnPNotifyBinding.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C012D370 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     NdisCloseAdapter @ 0x1C0138530 (NdisCloseAdapter.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013C1A0 (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        unsigned __int16 *a8,
        unsigned __int16 *a9)
{
  const wchar_t *v9; // rsi
  const wchar_t *v10; // rdi
  bool v13; // zf
  __int64 v15; // r10
  const wchar_t *v16; // r9
  const wchar_t *v17; // rdx
  __int64 v18; // r8
  const wchar_t *v19; // rcx
  const wchar_t *v20; // rax
  int v21; // [rsp+20h] [rbp-98h]

  v9 = L"NULL";
  v10 = a8;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a9 )
      v15 = *a9;
    else
      v15 = 8LL;
    if ( a9 && *a9 )
      v16 = (const wchar_t *)*((_QWORD *)a9 + 1);
    else
      v16 = L"NULL";
    v17 = a9;
    if ( !a9 )
      v17 = L"\b";
    if ( a8 )
      v18 = *a8;
    else
      v18 = 8LL;
    if ( a8 && *a8 )
      v19 = (const wchar_t *)*((_QWORD *)a8 + 1);
    else
      v19 = L"NULL";
    v20 = a8;
    if ( !a8 )
      v20 = L"\b";
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, v20, 2LL, v19, v18, v17, 2LL, v16, v15, 0LL);
  }
  v13 = v10 == 0LL;
  if ( v10 )
  {
    if ( *v10 )
      v9 = (const wchar_t *)*((_QWORD *)v10 + 1);
    v13 = v10 == 0LL;
  }
  if ( v13 )
    v10 = L"\b";
  LOWORD(v21) = a4;
  return WppAutoLogTrace(a1, 4LL, 9LL, a5, v21, &a6, 8LL, &a7, 8LL, v10, 2LL, v9);
}
