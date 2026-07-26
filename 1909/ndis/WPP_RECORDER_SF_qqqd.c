/*
 * XREFs of WPP_RECORDER_SF_qqqd @ 0x1C001D460
 * Callers:
 *     ndisPMAddWOLPattern @ 0x1C001D0F4 (ndisPMAddWOLPattern.c)
 *     ndisOidPMAddRemove @ 0x1C001D2F4 (ndisOidPMAddRemove.c)
 *     ndisPMAddProtocolOffload @ 0x1C002311C (ndisPMAddProtocolOffload.c)
 *     ndisOidPrePacketFilter @ 0x1C0026530 (ndisOidPrePacketFilter.c)
 *     ndisPostOpenSetMulticastList @ 0x1C003924C (ndisPostOpenSetMulticastList.c)
 *     NdisFSynchronousOidRequest @ 0x1C0069010 (NdisFSynchronousOidRequest.c)
 *     ndisCancelOidRequestInternal @ 0x1C0069FC4 (ndisCancelOidRequestInternal.c)
 *     ndisOidPostTaskOffload @ 0x1C006C700 (ndisOidPostTaskOffload.c)
 *     NdisCmRegisterAddressFamilyEx @ 0x1C0083FC0 (NdisCmRegisterAddressFamilyEx.c)
 *     ?NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C011E410 (-NdisPDAllocateBufferSet@@YAJPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@KGPEAKKPEAPEAUPD_BUFFER_SE.c)
 *     ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x1C0120D60 (-NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qqqd(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        char a8,
        ...)
{
  unsigned __int64 v11; // rbx
  int v12; // eax
  int v14; // [rsp+20h] [rbp-58h]
  va_list va; // [rsp+C0h] [rbp+48h] BYREF

  va_start(va, a8);
  v11 = (unsigned __int64)a3 >> 16;
  v12 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v12, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v11 + 41) >= 4u )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, &a8, 8LL, va, 4LL, 0LL);
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v14, &a6, 8LL, &a7, 8LL, &a8, 8LL, va);
}
