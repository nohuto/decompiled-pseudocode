/*
 * XREFs of ??1?$out_param_t@V?$com_ptr_t@UIDeviceGraphObjectsStore@@Uerr_returncode_policy@wil@@@wil@@@details@wil@@QEAA@XZ @ 0x180015340
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023730 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     _BuildDeviceGraphForStream_::_1_::dtor$5 @ 0x180065DD2 (_BuildDeviceGraphForStream_--_1_--dtor$5.c)
 *     _BuildDeviceGraphForStream_::_1_::dtor$7 @ 0x180065DEA (_BuildDeviceGraphForStream_--_1_--dtor$7.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::out_param_t<wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>>::~out_param_t<wil::com_ptr_t<IDeviceGraphObjectsStore,wil::err_returncode_policy>>(
        __int64 **a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 16) )
  {
    v1 = **a1;
    result = (__int64)a1[1];
    **a1 = result;
    if ( v1 )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
