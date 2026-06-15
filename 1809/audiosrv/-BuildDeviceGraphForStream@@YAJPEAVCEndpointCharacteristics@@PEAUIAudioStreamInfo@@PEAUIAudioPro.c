/*
 * XREFs of ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18006598C
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180023730 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     McTemplateU0 @ 0x180005030 (McTemplateU0.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18000E380 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ?DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEBUStreamGroupParams@@AEAV?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@@Z @ 0x18000FBE4 (-DeriveProcessSubmixParametersForStream@@YAJPEAUIAudioProcess@@KKW4SYSTEM_AUDIO_STREAM_TYPE@@PEB.c)
 *     ??1?$unique_ptr@UProcessSubmixParams@@U?$default_delete@UProcessSubmixParams@@@std@@@std@@QEAA@XZ @ 0x18000FCCC (--1-$unique_ptr@UProcessSubmixParams@@U-$default_delete@UProcessSubmixParams@@@std@@@std@@QEAA@X.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ @ 0x180012174 (--1-$unique_ptr@UStreamGroupParams@@U-$default_delete@UStreamGroupParams@@@std@@@std@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaType@@@Z @ 0x1800127FC (--4-$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioMediaTyp.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800C2BC4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall BuildDeviceGraphForStream(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        _OWORD *a10,
        __int64 a11,
        __int64 a12,
        void *Src,
        int a14,
        __int64 a15,
        int a16,
        char a17,
        __int64 a18,
        __int64 a19)
{
  __int64 v23; // rsi
  int v24; // ecx
  __int64 v25; // r14
  int v26; // eax
  __int64 v27; // rdx
  int v28; // edi
  _QWORD *v29; // rbx
  int v30; // eax
  __int64 v31; // rcx
  int v32; // r8d
  unsigned int v33; // eax
  unsigned int v34; // r15d
  __int64 v35; // rcx
  __int64 *v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  int v39; // r8d
  void *v41; // [rsp+28h] [rbp-99h]
  unsigned int v42; // [rsp+28h] [rbp-99h]
  __int64 v43; // [rsp+68h] [rbp-59h] BYREF
  __int64 *v44; // [rsp+70h] [rbp-51h] BYREF
  __int64 v45; // [rsp+78h] [rbp-49h] BYREF
  char v46; // [rsp+80h] [rbp-41h]
  unsigned int v47[2]; // [rsp+88h] [rbp-39h] BYREF
  __int64 v48[2]; // [rsp+98h] [rbp-29h] BYREF
  __int64 **v49; // [rsp+A8h] [rbp-19h]
  __int64 *v50; // [rsp+B0h] [rbp-11h] BYREF
  char v51; // [rsp+B8h] [rbp-9h]
  __int64 v52; // [rsp+C0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+2Fh]

  v52 = -2LL;
  if ( (a6 & 0x1000004) == 0 && (a6 & 0xFFF8) == 0 && (a7 != 1 || a6 >= 0) && (a6 & 0x88000000) != 0x8000000 )
  {
    *(_QWORD *)v47 = 0LL;
    v23 = a12;
    if ( a12 )
      v24 = *(_DWORD *)(a12 + 52);
    else
      v24 = 0;
    *(_OWORD *)v48 = *a10;
    v25 = a11;
    v26 = DeriveStreamGroupParametersForStream(
            a1,
            a8,
            a14,
            *(_QWORD *)(a11 + 32),
            v41,
            (__int128 *)v48,
            a17,
            a6 & 1,
            (unsigned __int16 *)Src,
            v24,
            (LPVOID **)v47);
    v28 = v26;
    if ( v26 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        1061LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v26);
LABEL_41:
      std::unique_ptr<StreamGroupParams>::~unique_ptr<StreamGroupParams>((LPVOID **)v47);
      return (unsigned int)v28;
    }
    v48[0] = 0LL;
    v29 = *(_QWORD **)v47;
    v30 = DeriveProcessSubmixParametersForStream(a3, v27, a5, a14, *(__int64 *)v47, (int *)v48);
    v28 = v30;
    if ( v30 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        1065LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v30);
LABEL_40:
      std::unique_ptr<ProcessSubmixParams>::~unique_ptr<ProcessSubmixParams>(v48);
      goto LABEL_41;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McTemplateU0(v31, (int)&AudioResourceManager_StreamSettings_Derived, v32);
    v33 = RpcImpersonateClient(0LL);
    if ( v33 )
    {
      v28 = wil::details::in1diag3::Return_Win32(
              retaddr,
              (void *)0x42E,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
              (const char *)v33,
              v42);
      goto LABEL_40;
    }
    v43 = 0LL;
    v34 = a16;
    if ( a18 )
    {
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v43, a18);
    }
    else
    {
      a9 = 0LL;
      v44 = &a9;
      v45 = 0LL;
      v46 = 1;
      v28 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, _QWORD *, _QWORD, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
              g_DeviceGraphManager,
              a4,
              v29,
              (unsigned int)a16,
              v23,
              &v45);
      if ( v46 )
      {
        v35 = *v44;
        *v44 = v45;
        if ( v35 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
      }
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          1078LL,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v28);
LABEL_29:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&a9);
LABEL_39:
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
        RpcRevertToSelf();
        goto LABEL_40;
      }
      wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v43, a9);
      if ( v48[0] )
      {
        v44 = 0LL;
        v49 = &v44;
        v50 = 0LL;
        v51 = 1;
        v28 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64 **))(*(_QWORD *)a9 + 304LL))(
                a9,
                v48[0],
                v34,
                &v50);
        if ( v51 )
        {
          v36 = *v49;
          *v49 = v50;
          if ( v36 )
            (*(void (__fastcall **)(__int64 *))(*v36 + 16))(v36);
        }
        if ( v28 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            1087LL,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v28);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
          goto LABEL_29;
        }
        wil::com_ptr_t<IAudioMediaType,wil::err_returncode_policy>::operator=(&v43, (__int64)v44);
        *(_DWORD *)(v25 + 132) = 1;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v44);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&a9);
    }
    *(_QWORD *)(v25 + 104) = *v29;
    v44 = (__int64 *)v25;
    LOBYTE(v45) = 1;
    v37 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, unsigned int, __int64))(*(_QWORD *)v43 + 24LL))(
            v43,
            a2,
            v25,
            a15,
            v34,
            a19);
    v28 = v37;
    if ( v37 >= 0 )
    {
      if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
        McTemplateU0(v38, (int)&AudioResourceManager_Stream_Created, v39);
      v28 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        1107LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)v37);
    }
    *(_QWORD *)(v25 + 104) = 0LL;
    goto LABEL_39;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    1056LL,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
