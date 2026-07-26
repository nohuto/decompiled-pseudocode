/*
 * XREFs of WPP_RECORDER_SF_qqqDD @ 0x1C0025E90
 * Callers:
 *     ?ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0023FA0 (-ndisSetupNdis6OpenHandlers@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_MINIPO.c)
 *     ndisSetOpenEthMulticastList @ 0x1C0025978 (ndisSetOpenEthMulticastList.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C003FF2C (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00B2FC0 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00B3320 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00B42C0 (ndisOidPreIovInvalidateConfigBlock.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C007D4AC (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 WPP_RECORDER_SF_qqqDD(
        __int64 a1,
        int a2,
        unsigned int a3,
        unsigned __int16 a4,
        struct _GUID *a5,
        char a6,
        char a7,
        char a8,
        char a9,
        ...)
{
  unsigned __int64 v12; // rbx
  int v13; // eax
  int v15; // [rsp+20h] [rbp-78h]
  va_list va; // [rsp+E8h] [rbp+50h] BYREF

  va_start(va, a9);
  v12 = (unsigned __int64)a3 >> 16;
  v13 = *((_DWORD *)WPP_GLOBAL_Control + 20 * v12 + (((a3 - 1) >> 5) & 0x7FF) + 11);
  if ( _bittest(&v13, (a3 - 1) & 0x1F) && *((_BYTE *)WPP_GLOBAL_Control + 80 * v12 + 41) >= 4u )
    ndisWppFastTraceMessage(a5, a4, &a6, 8LL, &a7, 8LL, &a8, 8LL, &a9, 4LL, va, 4LL, 0LL);
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, 4LL, a3, a5, v15, &a6, 8LL, &a7, 8LL, &a8, 8LL, &a9);
}
