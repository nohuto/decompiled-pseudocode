/*
 * XREFs of ?SetProcessingPeriod@CEndpointCharacteristics@@QEAAJAEB_J@Z @ 0x1800082C8
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180005CC8 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 *     ?ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180007AA4 (-ConfirmDeviceCanRenderFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL.c)
 *     ?GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z @ 0x18000E620 (-GetProcessingPeriod@CEndpointCharacteristics@@QEAAJHPEA_J0@Z.c)
 *     ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x1800E0A90 (-SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CEndpointCharacteristics::SetProcessingPeriod(CEndpointCharacteristics *this, const __int64 *a2)
{
  __int64 v2; // rcx
  int v3; // ebx
  __int64 v5; // rdx
  int v6[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+28h] [rbp-20h]
  const __int64 *v8; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( *a2 && (unsigned __int64)(*a2 - 50000) > 0xE7EF0 )
  {
    v3 = -2005139386;
    v5 = 8146LL;
  }
  else
  {
    v2 = *((_QWORD *)this + 5);
    v8 = a2;
    *(_QWORD *)v6 = 65LL;
    v7 = 8LL;
    v3 = (*(__int64 (__fastcall **)(__int64, void *, int *))(*(_QWORD *)v2 + 48LL))(v2, &PKEY_AudioEngine_Period, v6);
    if ( v3 >= 0 )
      return 0LL;
    v5 = 8154LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v3);
  return (unsigned int)v3;
}
