/*
 * XREFs of ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000AD88
 * Callers:
 *     ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800015C0 (-RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180008414 (-GetConnectorFormatForProcessingMode@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioeng.c)
 *     ?ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z @ 0x18000A5F0 (-ProcessPropertyChange@CEndpointCharacteristics@@QEAAXAEBU_tagpropertykey@@PEAH@Z.c)
 *     ?RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z @ 0x18005918C (-RuntimeClassInitialize@CEndpointCharacteristics@@QEAAJPEBGH@Z.c)
 *     _lambda_903ccf9134cc2c82d7843578f8252e54_::operator() @ 0x180067488 (_lambda_903ccf9134cc2c82d7843578f8252e54_--operator().c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SED_RESOLVEOPT@@@Z @ 0x18000B00C (-GetDefaultConnectorProcessingModeInternal@CEndpointCharacteristics@@AEAA-AU_GUID@@W4__MIDL___MI.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180017BB0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetDeviceFormat(
        CEndpointCharacteristics *this,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        struct tWAVEFORMATEX **a5)
{
  __m256i v8; // [rsp+30h] [rbp-48h] BYREF
  __m256i v9; // [rsp+50h] [rbp-28h]

  CEndpointCharacteristics::GetDefaultConnectorProcessingModeInternal(this, &v8, a4, 1LL);
  *(_OWORD *)((char *)&v9.m256i_u64[1] + 4) = *(_OWORD *)v8.m256i_i8;
  v9.m256i_i64[0] = (__int64)this;
  v9.m256i_i32[2] = a4;
  v8 = v9;
  return CEndpointCharacteristics::GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___(
           this,
           (__int64)&v8,
           (__int64)a5);
}
