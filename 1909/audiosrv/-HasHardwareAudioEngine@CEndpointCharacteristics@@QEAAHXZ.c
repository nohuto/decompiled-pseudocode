/*
 * XREFs of ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180010188
 * Callers:
 *     ?RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180003164 (-RefreshDeviceFormat@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000.c)
 *     ?SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@PEBUSpatialAudioSettings@@@Z @ 0x180004A8C (-SetDeviceFormatAndSpatialSettings@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_12caadf06097df6adadb33ec639f4e18_::operator() @ 0x18000B368 (_lambda_12caadf06097df6adadb33ec639f4e18_--operator().c)
 *     AudioServerIsOffloadCapable @ 0x1800E90B0 (AudioServerIsOffloadCapable.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7___ @ 0x1801133C4 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_53c21122ac2ea0b62ae7643ed09637d7.c)
 *     ?IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ @ 0x1801196D4 (-IsOffloadCapable@CEndpointCharacteristics@@QEAAHXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
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
    (**v1)(v1, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e, &v6);
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
