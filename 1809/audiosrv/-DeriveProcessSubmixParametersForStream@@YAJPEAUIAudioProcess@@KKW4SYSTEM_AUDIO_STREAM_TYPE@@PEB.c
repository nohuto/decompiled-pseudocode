/*
 * XREFs of ?DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEBUStreamGroupParams@@AEAV?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@@Z @ 0x18000FBE4
 * Callers:
 *     ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18006598C (-BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioPro.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x18000FD20 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall DeriveProcessSubmixParametersForStream(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int *a6)
{
  _QWORD *v8; // rdi
  bool v9; // al
  void *v10; // rsi
  void *v11; // rbx
  int v13; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( a4 || *(_BYTE *)(a5 + 48) )
    return 0LL;
  v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    *v8 = 0LL;
    v8[1] = 0LL;
    v8[2] = 0LL;
    *v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  v11 = v8;
  if ( v8 )
  {
    wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(v8, a1);
    v9 = a3 != 3 && a3 != 8;
    *((_BYTE *)v8 + 8) = v9;
    v8[2] = a5;
    if ( a6 != &v13 )
    {
      v10 = *(void **)a6;
      v11 = 0LL;
      *(_QWORD *)a6 = v8;
      if ( !v10 )
        return 0LL;
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v10);
      operator delete(v10, (const struct std::nothrow_t *)0x18);
    }
    if ( v11 )
    {
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v11);
      operator delete(v11, (const struct std::nothrow_t *)0x18);
    }
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x367,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)0x8007000ELL,
    v13);
  return 2147942414LL;
}
