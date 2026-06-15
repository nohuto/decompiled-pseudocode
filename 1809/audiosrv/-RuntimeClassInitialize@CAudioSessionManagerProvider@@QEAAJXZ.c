/*
 * XREFs of ?RuntimeClassInitialize@CAudioSessionManagerProvider@@QEAAJXZ @ 0x18005C52C
 * Callers:
 *     ??$MakeAndInitialize@VCAudioSessionManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18005C498 (--$MakeAndInitialize@VCAudioSessionManagerProvider@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCAud.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z @ 0x180058000 (-CreateInstance@PhoneCallAudio@@SAJPEAPEAUITelephonyControl@@@Z.c)
 *     ??$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynamicAudioEndpointManager@@@Z @ 0x18005C8B4 (--$MakeAndInitialize@VDynamicAudioEndpointManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVDynam.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CAudioSessionManagerProvider::RuntimeClassInitialize(CAudioSessionManagerProvider *this)
{
  int v1; // eax
  unsigned int v2; // edi
  int v3; // eax
  struct ITelephonyControl *v4; // rbx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  struct IAudioDuckingManager *v9; // rax
  CAudioSessionManagerProvider *v10; // rcx
  struct IAudioPolicyManager *v11; // rax
  struct ISessionInternalEvents *v12; // rax
  struct IUnknown *v13; // rax
  DynamicAudioEndpointManager *v14; // rax
  int v16; // [rsp+20h] [rbp-30h]
  int v17; // [rsp+20h] [rbp-30h]
  DynamicAudioEndpointManager *v18; // [rsp+30h] [rbp-20h] BYREF
  __int64 v19[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  CAudioSessionManagerProvider *v21; // [rsp+70h] [rbp+20h] BYREF
  struct IAudioPolicyManager *v22; // [rsp+78h] [rbp+28h] BYREF
  struct ITelephonyControl *v23; // [rsp+80h] [rbp+30h] BYREF
  struct ISessionInternalEvents *v24; // [rsp+88h] [rbp+38h] BYREF

  v21 = this;
  v19[1] = -2LL;
  v19[0] = 0LL;
  v1 = (**(__int64 (__fastcall ***)(struct IAudioResourceManager *, GUID *, __int64 *))g_AudioResourceManager)(
         g_AudioResourceManager,
         &GUID_00d73368_f0b0_4e37_ac78_4802c792d4cb,
         v19);
  v2 = v1;
  if ( v1 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E0,
      (unsigned int)"internal\\sdk\\inc\\wil/com.h",
      (const char *)(unsigned int)v1,
      v16);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)v2,
      v17);
    goto LABEL_17;
  }
  v23 = 0LL;
  v3 = PhoneCallAudio::CreateInstance(&v23);
  v2 = v3;
  if ( v3 >= 0 )
  {
    v22 = 0LL;
    v4 = v23;
    v5 = ActivatePolicyManager(g_pEndpointCharacteristicsCache, g_pVolumeProvider, v19[0], v23);
    v2 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x72,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v5,
        (int)&v22);
LABEL_13:
      if ( v22 )
        (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)v22 + 16LL))(v22);
      goto LABEL_15;
    }
    v24 = 0LL;
    v6 = (**(__int64 (__fastcall ***)(struct IAudioPolicyManager *, GUID *, struct ISessionInternalEvents **))v22)(
           v22,
           &GUID_a68ab569_b923_4330_a258_1735412d392e,
           &v24);
    v2 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x75,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v6,
        (int)&v22);
LABEL_11:
      if ( v24 )
        (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)v24 + 16LL))(v24);
      goto LABEL_13;
    }
    v21 = 0LL;
    v7 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, CAudioSessionManagerProvider **))(*(_QWORD *)v22 + 24LL))(
           v22,
           &v21);
    v2 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x78,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
        (const char *)(unsigned int)v7,
        (int)&v22);
    }
    else
    {
      v18 = 0LL;
      v8 = Microsoft::WRL::Details::MakeAndInitialize<DynamicAudioEndpointManager,DynamicAudioEndpointManager,>(&v18);
      v2 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7B,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
          (const char *)(unsigned int)v8,
          (int)&v22);
        v10 = v21;
        v14 = v18;
      }
      else
      {
        v9 = v21;
        v10 = 0LL;
        v21 = 0LL;
        g_DuckingManager = v9;
        v11 = v22;
        v22 = 0LL;
        g_PolicyManager = v11;
        v12 = v24;
        v24 = 0LL;
        g_PolicyEventsHandler = v12;
        v13 = (struct IUnknown *)v4;
        v4 = 0LL;
        v23 = 0LL;
        g_TelephonyControl = v13;
        v14 = 0LL;
        g_DynamicAudioEndpointManager = v18;
        v2 = 0;
      }
      if ( !v14 )
      {
LABEL_9:
        if ( v10 )
          (*(void (__fastcall **)(CAudioSessionManagerProvider *))(*(_QWORD *)v10 + 16LL))(v10);
        goto LABEL_11;
      }
      (*(void (__fastcall **)(DynamicAudioEndpointManager *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    v10 = v21;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x6F,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
    (const char *)(unsigned int)v3,
    v16);
  v4 = v23;
LABEL_15:
  if ( v4 )
    (*(void (__fastcall **)(struct ITelephonyControl *))(*(_QWORD *)v4 + 16LL))(v4);
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v19);
  return v2;
}
