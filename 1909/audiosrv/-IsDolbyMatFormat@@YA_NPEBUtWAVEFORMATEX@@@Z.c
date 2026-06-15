/*
 * XREFs of ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18000C3F0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f1e42772dfd3546d983b1a9251e92839__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x180002B90 (std--_Func_impl_no_alloc__lambda_f1e42772dfd3546d983b1a9251e92839__bool_WAVEFORMATEXTENSIBLE_con.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180006274 (-DeriveDevicePipeFormatFromConnectorFormat@CEndpointCharacteristics@@QEAAJU_GUID@@W4__MIDL___MID.c)
 *     std::_Func_impl_no_alloc__lambda_50d01a9f2b1728a1535e201a0253d264__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x18000BF50 (std--_Func_impl_no_alloc__lambda_50d01a9f2b1728a1535e201a0253d264__bool_WAVEFORMATEXTENSIBLE_con.c)
 *     _lambda_903ccf9134cc2c82d7843578f8252e54_::operator() @ 0x1800684E4 (_lambda_903ccf9134cc2c82d7843578f8252e54_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_9cd369e588a5ffc689e2be563576fbcb__bool_WAVEFORMATEXTENSIBLE_const___::_Do_call @ 0x18011B240 (std--_Func_impl_no_alloc__lambda_9cd369e588a5ffc689e2be563576fbcb__bool_WAVEFORMATE_ea_18011B240.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18001B6B0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

bool __fastcall IsDolbyMatFormat(const struct tWAVEFORMATEX *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  if ( !a1 || (int)ValidateWaveFormatEx(a1) < 0 || a1->wFormatTag != 0xFFFE )
    return 0;
  v2 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000000c_0cea_0010_8000_00aa00389b71.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000000c_0cea_0010_8000_00aa00389b71.Data4;
  if ( v2 )
  {
    v3 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000010c_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v3 )
      v3 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000010c_0cea_0010_8000_00aa00389b71.Data4;
    if ( v3 )
    {
      v4 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000030c_0cea_0010_8000_00aa00389b71.Data1;
      if ( !v4 )
        v4 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000030c_0cea_0010_8000_00aa00389b71.Data4;
      if ( v4 )
        return 0;
    }
  }
  return a1->nSamplesPerSec == 192000 && a1->nChannels == 8 && a1->wBitsPerSample == 16;
}
