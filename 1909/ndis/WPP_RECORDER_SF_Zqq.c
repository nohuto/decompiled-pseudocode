/*
 * XREFs of WPP_RECORDER_SF_Zqq @ 0x1C0027418
 * Callers:
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0104620 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011D9AC (-ndisPauseProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C011DBAC (-ndisUnbindEachProtocolOpenOnMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@.c)
 *     ndisFindRootDevice @ 0x1C0136458 (ndisFindRootDevice.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_Zqq(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        unsigned __int16 *a6,
        char a7,
        ...)
{
  const wchar_t *v7; // rbx
  const wchar_t *v8; // rsi
  unsigned __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rax
  bool v15; // zf
  __int64 v17; // rcx
  const wchar_t *v18; // rax
  const wchar_t *v19; // r8
  int v20; // [rsp+20h] [rbp-78h]
  va_list va; // [rsp+D8h] [rbp+40h] BYREF

  va_start(va, a7);
  v7 = a6;
  v8 = L"NULL";
  v12 = (unsigned __int64)a3 >> 16;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v12 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v13, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v12 + 41) >= 4u )
  {
    if ( a6 )
      v17 = *a6;
    else
      v17 = 8LL;
    if ( a6 && *a6 )
      v18 = (const wchar_t *)*((_QWORD *)a6 + 1);
    else
      v18 = L"NULL";
    v19 = a6;
    if ( !a6 )
      v19 = L"\b";
    ndisWppFastTraceMessage(a5, a4, v19, 2LL, v18, v17, &a7, 8LL, va, 8LL, 0LL);
  }
  if ( a6 )
    v14 = *a6;
  else
    v14 = 8LL;
  v15 = a6 == 0LL;
  if ( a6 )
  {
    if ( *a6 )
      v8 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v15 = a6 == 0LL;
  }
  if ( v15 )
    v7 = L"\b";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v20, v7, 2LL, v8, v14, &a7, 8LL, va);
}
