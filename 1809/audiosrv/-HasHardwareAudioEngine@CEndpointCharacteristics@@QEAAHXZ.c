/*
 * XREFs of ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x1800312B0
 * Callers:
 *     ?GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSettings@@PEAIPEAPEAUSpatialAudioEncoderDescriptor@@@Z @ 0x180048258 (-GetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGHPEAPEAUtWAVEFORMATEX@@PEAPEAUSpatialAudioSetting.c)
 *     _lambda_f4cfbe3a62d9ecd19aa084d08cd38d93_::operator() @ 0x180052DA8 (_lambda_f4cfbe3a62d9ecd19aa084d08cd38d93_--operator().c)
 *     ?RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800D375C (-RefreshDeviceFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioen.c)
 *     ?SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x1800D4030 (-SetDeviceFormatCommon@CPolicyConfig@@QEAAJPEBGPEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z.c)
 *     AudioServerIsOffloadCapable @ 0x1800DDD40 (AudioServerIsOffloadCapable.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87___ @ 0x180105B54 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_bc829bb10b63470994cc211668497c87.c)
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x18010C424 (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::HasHardwareAudioEngine(CEndpointCharacteristics *this)
{
  void (__fastcall ***v1)(_QWORD, GUID *, _QWORD **); // r9
  _QWORD *v2; // rcx
  unsigned int v3; // ebx
  unsigned int v5; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0;
  v1 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD **))*((_QWORD *)this + 2);
  v2 = 0LL;
  v6 = 0LL;
  if ( v1 )
  {
    (**v1)(v1, &GUID_a4566d7a_c8f5_4150_0b7b_4ee7e744fc5c, &v6);
    v2 = v6;
  }
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD *, unsigned int *))(*v2 + 88LL))(v2, &v5);
    v2 = v6;
  }
  v3 = v5;
  if ( v2 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v2 + 16LL))(v2, *v2);
  return v3;
}
