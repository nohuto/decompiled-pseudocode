/*
 * XREFs of _lambda_903ccf9134cc2c82d7843578f8252e54_::operator() @ 0x180067488
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_903ccf9134cc2c82d7843578f8252e54__long_SystemEffectDescriptor___SystemEffectChainDescriptor___::_Do_call @ 0x180067AC0 (std--_Func_impl_no_alloc__lambda_903ccf9134cc2c82d7843578f8252e54__long_SystemEffec_ea_180067AC0.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18000AD88 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x1800377C8 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180038730 (-IsDolbyMatFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180038840 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x1800BE0E4 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_903ccf9134cc2c82d7843578f8252e54_::operator()(
        CEndpointCharacteristics **a1,
        unsigned int *a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  int DeviceFormat; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // r11d
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct tWAVEFORMATEX *v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  DeviceFormat = CEndpointCharacteristics::GetDeviceFormat(*a1, 0LL, 0LL, a2[12], &v13);
  v7 = DeviceFormat;
  if ( DeviceFormat >= 0 )
  {
    if ( v13->wFormatTag == 0xFFFE )
      IsDolbyMatFormat(v13);
    v9 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
           (__int64 *)*a1 + 9,
           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    DeviceFormat = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                     (SystemEffectDescriptor *)a2,
                     a3,
                     1u,
                     (__int64)(a1 + 1),
                     v10,
                     v9 != -1);
    v7 = DeviceFormat;
    if ( DeviceFormat >= 0 )
    {
      *((_DWORD *)a3 + 4) = 2;
      v7 = 0;
      goto LABEL_9;
    }
    v8 = 1362LL;
  }
  else
  {
    v8 = 1356LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DeviceFormat);
LABEL_9:
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v13);
  return v7;
}
