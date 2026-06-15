/*
 * XREFs of ??$?0UIAudioProcessingObject@@@?$com_ptr_t@UIAPOAuxiliaryInputConfiguration@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcessingObject@@U?$integral_constant@D$02@wistd@@@Z @ 0x1800E91E4
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_N_N_N6PEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18003B2D0 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IAPOAuxiliaryInputConfiguration,wil::err_returncode_policy>::com_ptr_t<IAPOAuxiliaryInputConfiguration,wil::err_returncode_policy>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  if ( a2 )
    (**a2)(a2, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768, a1);
  else
    *a1 = 0LL;
  return a1;
}
