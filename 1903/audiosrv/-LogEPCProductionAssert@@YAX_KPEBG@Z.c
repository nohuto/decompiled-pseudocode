/*
 * XREFs of ?LogEPCProductionAssert@@YAX_KPEBG@Z @ 0x18011D2C0
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1801169E4 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001ADAC (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 */

void __fastcall LogEPCProductionAssert(__int64 a1, const unsigned __int16 *a2)
{
  const WCHAR *v2; // r9
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  __int64 v5; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v7; // [rsp+60h] [rbp-38h]
  int v8; // [rsp+68h] [rbp-30h]
  int v9; // [rsp+6Ch] [rbp-2Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp-28h] BYREF

  v5 = 7849806LL;
  if ( (unsigned int)hProvider > 2 )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
    {
      v9 = 0;
      v7 = &v5;
      v8 = 8;
      TlgCreateWsz(&pDesc, v2);
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180177388, v3, v4, 4u, &pData);
    }
  }
}
