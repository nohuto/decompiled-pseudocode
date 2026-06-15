/*
 * XREFs of ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180108E94
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800CFD48 (-DeriveAndCacheMixFormatsForConnector@CPolicyConfig@@SAJPEAVCEndpointCharacteristics@@W4__MIDL__.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800D2770 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 * Callees:
 *     ?IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800161C0 (-IsConnectorModeSupported@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18004F8E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004FC98 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAVCAudioSignalProcessingModeArray@@@Z @ 0x180109DD8 (-GetAPOSupportedProcessingModes@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
        CEndpointCharacteristics *this,
        __int64 a2)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v2; // esi
  unsigned int v4; // ebx
  int v5; // edi
  __int64 v7; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  struct _GUID v9; // [rsp+40h] [rbp-18h] BYREF

  v2 = (int)a2;
  v4 = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( CEndpointCharacteristics::IsConnectorModeSupported(this, a2, &v9) )
  {
    CEndpointCharacteristics::GetAPOSupportedProcessingModes(this, v2, (struct CAudioSignalProcessingModeArray *)&v7);
    v5 = 0;
    if ( (int)v8 > 0 )
    {
      while ( 1 )
      {
        v9 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v7, v5);
        if ( !CEndpointCharacteristics::IsConnectorModeSupported(this, (unsigned int)v2, &v9) )
          break;
        if ( ++v5 >= (int)v8 )
          goto LABEL_7;
      }
      v4 = 1;
    }
  }
LABEL_7:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v7);
  return v4;
}
