/*
 * XREFs of ?LogEPCProductionAssert@@YAX_KPEBG@Z @ 0x180110A14
 * Callers:
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x18010936C (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
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
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180172050, v3, v4, 4u, &pData);
    }
  }
}
