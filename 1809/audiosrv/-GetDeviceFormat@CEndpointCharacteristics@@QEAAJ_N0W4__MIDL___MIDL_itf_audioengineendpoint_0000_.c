/*
 * XREFs of ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180012DF0
 * Callers:
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180002580 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PEAH@Z @ 0x18001FD48 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXPEAUIPolicyConfig@@AEBU_tagpropertykey@@PE.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18004B7E0 (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800D375C (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 *     _lambda_0004505bc0d239ceb97d539ab355086f_::operator() @ 0x180107B24 (_lambda_0004505bc0d239ceb97d539ab355086f_--operator().c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x180012E8C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180034EA0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetDeviceFormat(
        CEndpointCharacteristics *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        struct tWAVEFORMATEX **a5)
{
  __m256i v8; // [rsp+30h] [rbp-40h] BYREF
  __m256i v9; // [rsp+50h] [rbp-20h]

  CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(this, &v8, a4, 1LL);
  *(_OWORD *)((char *)&v9.m256i_u64[1] + 4) = *(_OWORD *)v8.m256i_i8;
  v9.m256i_i64[0] = (__int64)this;
  v9.m256i_i32[2] = a4;
  v8 = v9;
  return CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___(
           this,
           (__int64)&v8,
           (__int64)a5);
}
