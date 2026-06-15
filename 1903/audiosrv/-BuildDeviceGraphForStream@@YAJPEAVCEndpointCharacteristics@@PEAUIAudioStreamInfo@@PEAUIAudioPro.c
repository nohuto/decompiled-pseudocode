/*
 * XREFs of ?BuildDeviceGraphForStream@@YAJPEAVCEndpointCharacteristics@@PEAUIAudioStreamInfo@@PEAUIAudioProcess@@PEAUIDeviceGraphObjectsStore@@KKW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@6PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEBUtWAVEFORMATEX@@W4SYSTEM_AUDIO_STREAM_TYPE@@PEAUIAudioGraphCallback@@K_NPEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18003AF70
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800199A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 * Callees:
 *     McTemplateU0 @ 0x180004D50 (McTemplateU0.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4SYSTEM_AUDIO_STREAM_TYPE@@_JU_GUID@@4_N5PEBUtWAVEFORMATEX@@HAEAV?$unique_ptr@UStreamGroupParams@@U?$default_delete@UStreamGroupParams@@@std@@@std@@@Z @ 0x18003B400 (-DeriveStreamGroupParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audi.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800642D4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006430C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@Z @ 0x1800CCE74 (--4-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIAudioProcess@@@.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800D1388 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 BuildDeviceGraphForStream(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, int a7, int a8, ...)
{
  __int64 v9; // r13
  int v10; // edx
  int v11; // ebx
  int v12; // eax
  int v13; // ecx
  int v14; // r8d
  int v15; // r15d
  LPVOID *v16; // rdi
  _QWORD *v17; // rsi
  _QWORD *v18; // rbx
  __int64 v19; // rsi
  bool v20; // al
  unsigned int v21; // eax
  va_list v22; // rbx
  unsigned int v23; // r12d
  __int64 v24; // rcx
  va_list v25; // rcx
  va_list v26; // rcx
  va_list v27; // r14
  va_list v28; // rcx
  va_list v29; // r14
  int v30; // eax
  int v31; // ecx
  int v32; // r8d
  void *v34; // [rsp+28h] [rbp-99h]
  unsigned int v35; // [rsp+28h] [rbp-99h]
  va_list v36; // [rsp+68h] [rbp-59h] BYREF
  __int64 v37; // [rsp+70h] [rbp-51h] BYREF
  char v38; // [rsp+78h] [rbp-49h]
  va_list v39; // [rsp+80h] [rbp-41h] BYREF
  void *v40; // [rsp+88h] [rbp-39h] BYREF
  va_list *v41; // [rsp+90h] [rbp-31h]
  va_list v42; // [rsp+98h] [rbp-29h] BYREF
  char v43; // [rsp+A0h] [rbp-21h]
  __int64 v44[2]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v45; // [rsp+B8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+3Fh]
  va_list v49; // [rsp+148h] [rbp+87h] BYREF
  va_list va; // [rsp+148h] [rbp+87h]
  _OWORD *v51; // [rsp+150h] [rbp+8Fh]
  va_list v52; // [rsp+158h] [rbp+97h]
  __int64 v53; // [rsp+160h] [rbp+9Fh]
  void *Src; // [rsp+168h] [rbp+A7h]
  __int64 v55; // [rsp+170h] [rbp+AFh]
  __int64 v56; // [rsp+178h] [rbp+B7h]
  __int64 v57; // [rsp+180h] [rbp+BFh]
  __int64 v58; // [rsp+188h] [rbp+C7h]
  __int64 v59; // [rsp+190h] [rbp+CFh]
  __int64 v60; // [rsp+198h] [rbp+D7h]
  va_list va1; // [rsp+1A0h] [rbp+DFh] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v49 = va_arg(va1, va_list);
  v51 = va_arg(va1, _OWORD *);
  v52 = va_arg(va1, va_list);
  v53 = va_arg(va1, _QWORD);
  Src = va_arg(va1, void *);
  v55 = va_arg(va1, _QWORD);
  v56 = va_arg(va1, _QWORD);
  v57 = va_arg(va1, _QWORD);
  v58 = va_arg(va1, _QWORD);
  v59 = va_arg(va1, _QWORD);
  v60 = va_arg(va1, _QWORD);
  v45 = -2LL;
  if ( (a6 & 4) != 0 || (a6 & 0xFFF8) != 0 || a7 == 1 && a6 < 0 || (a6 & 0x88000000) == 0x8000000 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x444,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v40 = 0LL;
  v9 = v53;
  if ( v53 )
    v10 = *(_DWORD *)(v53 + 52);
  else
    v10 = 0;
  *(_OWORD *)v44 = *v51;
  v11 = v55;
  v12 = DeriveStreamGroupParametersForStream(
          a1,
          a8,
          v55,
          *((_QWORD *)v52 + 4),
          v34,
          (__int64)v44,
          v58,
          (a6 & 1) != 0,
          Src,
          v10,
          (__int64)&v40);
  v15 = v12;
  v16 = (LPVOID *)v40;
  if ( v12 >= 0 )
  {
    v17 = 0LL;
    v44[0] = 0LL;
    if ( !v11 && !*((_BYTE *)v40 + 48) )
    {
      v18 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v18 )
      {
        v18[1] = 0LL;
        v18[2] = 0LL;
        *v18 = 0LL;
      }
      else
      {
        v18 = 0LL;
      }
      if ( !v18 )
      {
        v15 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x38C,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x44D,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8007000ELL);
        goto LABEL_54;
      }
      v19 = *v18;
      *v18 = a3;
      if ( a3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v20 = a5 != 3 && a5 != 8 && (a6 & 0x1000000) == 0;
      *((_BYTE *)v18 + 8) = v20;
      v18[2] = v16;
      v17 = v18;
      v44[0] = (__int64)v18;
    }
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      McTemplateU0(v13, (int)&AudioResourceManager_StreamSettings_Derived, v14);
    v21 = RpcImpersonateClient(0LL);
    if ( !v21 )
    {
      v22 = 0LL;
      v39 = 0LL;
      v23 = v57;
      if ( v59 )
      {
        wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::operator=(&v39);
        v22 = v39;
        v29 = v52;
LABEL_46:
        *((_QWORD *)v29 + 19) = *v16;
        v36 = v29;
        LOBYTE(v37) = 1;
        v30 = (*(__int64 (__fastcall **)(va_list, __int64, va_list, __int64, unsigned int, __int64))(*(_QWORD *)v22 + 24LL))(
                v22,
                a2,
                v29,
                v56,
                v23,
                v60);
        v15 = v30;
        if ( v30 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x477,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)(unsigned int)v30);
        }
        else
        {
          if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
            McTemplateU0(v31, (int)&AudioResourceManager_Stream_Created, v32);
          v15 = 0;
        }
        *((_QWORD *)v29 + 19) = 0LL;
        goto LABEL_51;
      }
      v49 = 0LL;
      va_copy(v36, va);
      v37 = 0LL;
      v38 = 1;
      v15 = (*(__int64 (__fastcall **)(struct IDeviceGraphManager *, __int64, LPVOID *, _QWORD, __int64, __int64 *))(*(_QWORD *)g_DeviceGraphManager + 48LL))(
              g_DeviceGraphManager,
              a4,
              v16,
              (unsigned int)v57,
              v9,
              &v37);
      if ( v38 )
      {
        v24 = *(_QWORD *)v36;
        *(_QWORD *)v36 = v37;
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      if ( v15 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x45A,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v15);
      }
      else
      {
        v25 = v49;
        v22 = v49;
        v39 = v49;
        if ( v49 )
        {
          (*(void (__fastcall **)(va_list))(*(_QWORD *)v49 + 8LL))(v49);
          v25 = v49;
        }
        if ( !v17 )
        {
          v29 = v52;
LABEL_44:
          if ( v25 )
            (*(void (__fastcall **)(va_list))(*(_QWORD *)v25 + 16LL))(v25);
          goto LABEL_46;
        }
        v36 = 0LL;
        v41 = &v36;
        v42 = 0LL;
        v43 = 1;
        v15 = (*(__int64 (__fastcall **)(va_list, _QWORD *, _QWORD, va_list *))(*(_QWORD *)v25 + 304LL))(
                v25,
                v17,
                v23,
                &v42);
        if ( v43 )
        {
          v26 = *v41;
          *v41 = v42;
          if ( v26 )
            (*(void (__fastcall **)(va_list))(*(_QWORD *)v26 + 16LL))(v26);
        }
        if ( v15 >= 0 )
        {
          v27 = v22;
          v28 = v36;
          v22 = v36;
          v39 = v36;
          if ( v36 )
          {
            (*(void (__fastcall **)(va_list))(*(_QWORD *)v36 + 8LL))(v36);
            v28 = v36;
          }
          if ( v27 )
          {
            (*(void (__fastcall **)(va_list))(*(_QWORD *)v27 + 16LL))(v27);
            v28 = v36;
          }
          v29 = v52;
          *((_DWORD *)v52 + 45) = 1;
          if ( v28 )
            (*(void (__fastcall **)(va_list))(*(_QWORD *)v28 + 16LL))(v28);
          v25 = v49;
          goto LABEL_44;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x463,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v15);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v36);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((va_list *)va);
LABEL_51:
      if ( v22 )
        (*(void (__fastcall **)(va_list))(*(_QWORD *)v22 + 16LL))(v22);
      RpcRevertToSelf();
      goto LABEL_54;
    }
    v15 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x452,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
            (const char *)v21,
            v35);
LABEL_54:
    if ( v17 )
    {
      if ( *v17 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 16LL))(*v17);
      operator delete(v17, (const struct std::nothrow_t *)0x18);
    }
    goto LABEL_58;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x449,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v12);
LABEL_58:
  if ( v16 )
  {
    operator delete(v16[7], (const struct std::nothrow_t *)0x10);
    v16[7] = 0LL;
    CoTaskMemFree(v16[2]);
    v16[2] = 0LL;
    CoTaskMemFree(*v16);
    *v16 = 0LL;
    operator delete(v16, (const struct std::nothrow_t *)0x40);
  }
  return (unsigned int)v15;
}
