/*
 * XREFs of ?TryGetFxPropertyStore@@YAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x140009D98
 * Callers:
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140005B20 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000607C (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x1400066B4 (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TryGetFxPropertyStore(const unsigned __int16 *a1, struct IPropertyStore **a2)
{
  HRESULT v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v7; // rax
  void (__fastcall ***v8)(_QWORD, GUID *, _QWORD *); // rcx
  int v9; // eax
  int ppv; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  void (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // [rsp+68h] [rbp+28h] BYREF
  __int64 v14; // [rsp+70h] [rbp+30h] BYREF
  LPVOID v15; // [rsp+78h] [rbp+38h] BYREF

  *a2 = 0LL;
  v15 = 0LL;
  v4 = CoCreateInstance(
         &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
         0LL,
         0x17u,
         &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
         &v15);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v4,
      ppv);
    goto LABEL_14;
  }
  v13 = 0LL;
  v6 = (*(__int64 (__fastcall **)(LPVOID, const unsigned __int16 *, _QWORD))(*(_QWORD *)v15 + 40LL))(v15, a1, &v13);
  v5 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
      (const char *)(unsigned int)v6,
      ppv);
    goto LABEL_11;
  }
  v7 = 0LL;
  v14 = 0LL;
  v8 = v13;
  if ( v13 )
  {
    (**v13)(v13, &GUID_c537ee8d_5574_454a_9354_aaa4e421d31e, &v14);
    v8 = v13;
    v7 = v14;
  }
  if ( v7 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IPropertyStore **))(*(_QWORD *)v7 + 40LL))(v7, 0LL, a2);
    v5 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\pipeinstance.cpp",
        (const char *)(unsigned int)v9,
        ppv);
      v8 = v13;
      v7 = v14;
      goto LABEL_9;
    }
    v8 = v13;
    v7 = v14;
  }
  v5 = 0;
LABEL_9:
  if ( !v7 )
    goto LABEL_12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
LABEL_11:
  v8 = v13;
LABEL_12:
  if ( v8 )
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v8)[2])(v8);
LABEL_14:
  if ( v15 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v15 + 16LL))(v15);
  return v5;
}
