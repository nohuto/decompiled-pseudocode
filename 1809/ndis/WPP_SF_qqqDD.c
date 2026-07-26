/*
 * XREFs of WPP_SF_qqqDD @ 0x1C004401C
 * Callers:
 *     ndisMOidRequest @ 0x1C0016B50 (ndisMOidRequest.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C001B388 (ndisSetupNdis6OpenHandlers.c)
 *     ndisSetOpenEthMulticastList @ 0x1C00CD358 (ndisSetOpenEthMulticastList.c)
 *     ndisSetOpenEthAddDeleteMulticast @ 0x1C00D21F0 (ndisSetOpenEthAddDeleteMulticast.c)
 *     ndisOidPreIovCreateNicSwitch @ 0x1C00F9870 (ndisOidPreIovCreateNicSwitch.c)
 *     ndisOidPreIovDeleteNicSwitch @ 0x1C00F9B20 (ndisOidPreIovDeleteNicSwitch.c)
 *     ndisOidPreIovInvalidateConfigBlock @ 0x1C00F9FF0 (ndisOidPreIovInvalidateConfigBlock.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1C004F34C (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

void WPP_SF_qqqDD(unsigned __int16 a1, const struct _GUID *a2, ...)
{
  va_list va; // [rsp+90h] [rbp+18h] BYREF

  va_start(va, a2);
  ndisWppFastTraceMessage(a2, a1, va);
}
