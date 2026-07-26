/*
 * XREFs of WPP_RECORDER_SF_LZq @ 0x1C0098CD4
 * Callers:
 *     ndisMSetMiniportReadyForBinding @ 0x1C00FD3E8 (ndisMSetMiniportReadyForBinding.c)
 *     ?SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z @ 0x1C0102304 (-SetSource@BindState@Ndis@@QEAA_NW4BIND_SOURCE_STATE@@W4Flags@BindSource@2@@Z.c)
 *     ?ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z @ 0x1C0104448 (-ndisBindProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@@Z.c)
 *     ?ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0104620 (-ndisRestartProtocol@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_PROTOCOL_LINK@@PEAUNDIS_RESTART.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C010B988 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D2DC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_LZq(
        __int64 a1,
        int a2,
        int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        unsigned __int16 *a7,
        ...)
{
  const wchar_t *v7; // rdi
  const wchar_t *v8; // rbx
  __int64 v11; // rdx
  const wchar_t *v12; // rcx
  const wchar_t *v13; // rax
  __int64 v14; // rax
  bool v15; // zf
  int v17; // [rsp+20h] [rbp-68h]
  va_list va; // [rsp+C8h] [rbp+40h] BYREF

  va_start(va, a7);
  v7 = L"NULL";
  v8 = a7;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x8000000) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u )
  {
    if ( a7 )
      v11 = *a7;
    else
      v11 = 8LL;
    if ( a7 && *a7 )
      v12 = (const wchar_t *)*((_QWORD *)a7 + 1);
    else
      v12 = L"NULL";
    v13 = a7;
    if ( !a7 )
      v13 = L"\b";
    ndisWppFastTraceMessage(a5, a4, &a6, 4LL, v13, 2LL, v12, v11, va, 8LL, 0LL);
  }
  if ( v8 )
    v14 = *v8;
  else
    v14 = 8LL;
  v15 = v8 == 0LL;
  if ( v8 )
  {
    if ( *v8 )
      v7 = (const wchar_t *)*((_QWORD *)v8 + 1);
    v15 = v8 == 0LL;
  }
  if ( v15 )
    v8 = L"\b";
  LOWORD(v17) = a4;
  return WppAutoLogTrace(a1, 4LL, 28LL, a5, v17, &a6, 4LL, v8, 2LL, v7, v14, va);
}
