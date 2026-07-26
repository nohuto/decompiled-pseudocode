/*
 * XREFs of WPP_RECORDER_SF_Z @ 0x1C001973C
 * Callers:
 *     NdisOpenProtocolConfiguration @ 0x1C00238B0 (NdisOpenProtocolConfiguration.c)
 *     NdisReadConfiguration @ 0x1C002BBB0 (NdisReadConfiguration.c)
 *     NdisFRegisterFilterDriver @ 0x1C0037390 (NdisFRegisterFilterDriver.c)
 *     NdisRegisterProtocolDriver @ 0x1C0037850 (NdisRegisterProtocolDriver.c)
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C00380E4 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     ?ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_LH@@W4_NSI_STRUCT_TYPE@@K@Z @ 0x1C0063E28 (-ndisIfUpdateStringIfNeeded@@YAXPEAU_NDIS_IF_BLOCK@@PEBU_UNICODE_STRING@@PEAU_IF_COUNTED_STRING_.c)
 *     ?ndisHandleProtocolUnloadNotification@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1C007C10C (-ndisHandleProtocolUnloadNotification@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     NdisWdfReadConfiguration @ 0x1C007EFF0 (NdisWdfReadConfiguration.c)
 *     NdisOpenFile @ 0x1C0081640 (NdisOpenFile.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1C0092758 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 *     NdisRegisterProtocol @ 0x1C00930F0 (NdisRegisterProtocol.c)
 *     ndisCreateAdapterInstanceName @ 0x1C0106AA4 (ndisCreateAdapterInstanceName.c)
 *     ?ndisHandleBindNotification@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C0115A34 (-ndisHandleBindNotification@@YAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z @ 0x1C0126134 (-ndisGetFilterAltitude@@YAJAEAVNetSetupPropertyBag@@AEAK@Z.c)
 *     ?DereferenceWdi@@YAXXZ @ 0x1C0127BD8 (-DereferenceWdi@@YAXXZ.c)
 *     ?ReferenceWdi@@YA_NXZ @ 0x1C0127D54 (-ReferenceWdi@@YA_NXZ.c)
 *     ndisReferenceMiniportByName @ 0x1C012B290 (ndisReferenceMiniportByName.c)
 *     ?ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z @ 0x1C0135CB8 (-ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z.c)
 *     ndisFindRootDevice @ 0x1C0136458 (ndisFindRootDevice.c)
 *     ndisReferenceProtocolByName @ 0x1C0138BCC (ndisReferenceProtocolByName.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Z(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        unsigned __int16 *a6)
{
  const wchar_t *v7; // rbp
  unsigned __int64 v10; // rdi
  const wchar_t *v12; // rbx
  __int64 v13; // rsi
  int v14; // eax
  bool v15; // zf
  __int64 v17; // rcx
  const wchar_t *v18; // rax
  const wchar_t *v19; // r8
  int v20; // [rsp+20h] [rbp-58h]
  __int64 v21; // [rsp+50h] [rbp-28h]
  __int64 v22; // [rsp+58h] [rbp-20h]

  v7 = L"NULL";
  v10 = (unsigned __int64)a3 >> 16;
  v12 = a6;
  v13 = 8LL;
  v14 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v14, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v10 + 41) >= a2 )
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
    ndisWppFastTraceMessage(a5, a4, v19, 2LL, v18, v17, 0LL);
  }
  v15 = a6 == 0LL;
  if ( a6 )
  {
    v13 = *a6;
    if ( *a6 )
      v7 = (const wchar_t *)*((_QWORD *)a6 + 1);
    v15 = a6 == 0LL;
  }
  if ( v15 )
    v12 = L"\b";
  LOWORD(v20) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v20, v12, 2LL, v7, v13, 0LL, v21, v22);
}
