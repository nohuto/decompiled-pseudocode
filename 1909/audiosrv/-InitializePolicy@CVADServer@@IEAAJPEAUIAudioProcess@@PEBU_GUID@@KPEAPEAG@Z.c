/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x180035480
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180026450 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180022ED0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180022FC0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180023700 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180024AE0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800261F0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002C480 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180035D50 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180036AA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180047348 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180065320 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180067C24 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     ??$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCAudioSessionManagerProvider@@U?$integral_constant@_N$00@wistd@@PEAPEAV3@@Z @ 0x1800D878C (--$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCA.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800DE658 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x1800DE7B8 (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVADServer::InitializePolicy(
        CVADServer *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        unsigned int a4,
        unsigned __int16 **a5)
{
  __int64 v9; // rdi
  struct _GUID v10; // xmm0
  int OwningThread; // ebx
  int v12; // ebx
  unsigned int v13; // r12d
  int AudioSession; // esi
  __int64 v15; // rcx
  BOOL v16; // r14d
  char *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rax
  struct IAudioProcess *v20; // rcx
  __int64 v21; // rbx
  unsigned __int16 *v23; // rdx
  void **v24; // r14
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned __int16 v27; // ax
  unsigned __int16 *v28; // rax
  int *v29; // rbx
  __int64 v30; // rdx
  const unsigned __int16 *v31; // r13
  int v32; // eax
  int AudioSessionManagerInternal; // eax
  __int64 v34; // rdx
  CVADServer *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rbx
  unsigned int v38; // eax
  int v39; // eax
  unsigned int v40; // eax
  int v41; // [rsp+40h] [rbp-61h]
  unsigned __int16 **v42; // [rsp+48h] [rbp-59h] BYREF
  __int64 v43; // [rsp+50h] [rbp-51h] BYREF
  __int64 v44; // [rsp+58h] [rbp-49h] BYREF
  int *v45; // [rsp+60h] [rbp-41h] BYREF
  int v46; // [rsp+68h] [rbp-39h] BYREF
  unsigned int v47; // [rsp+6Ch] [rbp-35h]
  __int64 v48; // [rsp+70h] [rbp-31h] BYREF
  __int64 v49; // [rsp+78h] [rbp-29h] BYREF
  struct CAudioSessionManager *v50[2]; // [rsp+80h] [rbp-21h] BYREF
  CVADServer *v51; // [rsp+90h] [rbp-11h]
  const struct _GUID *v52; // [rsp+98h] [rbp-9h]
  __int64 v53; // [rsp+A0h] [rbp-1h]
  struct _GUID v54; // [rsp+A8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v53 = -2LL;
  v52 = a3;
  v51 = this;
  v42 = a5;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  v48 = v9;
  v10 = *a3;
  *(struct _GUID *)v50 = v10;
  v54 = v10;
  v49 = 0LL;
  v44 = 0LL;
  if ( g_ADGProcess )
  {
    OwningThread = (int)g_ADGProcess[2].OwningThread;
    *(struct CAudioSessionManager **)&v10.Data1 = v50[0];
    if ( OwningThread == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2) )
      a4 |= 0x20000000u;
  }
  v45 = *(int **)&v10.Data1;
  if ( __PAIR128__(*(unsigned __int64 *)v54.Data4, *(unsigned __int64 *)&v10.Data1) != *(_OWORD *)&GUID_SystemSounds_AudioSessionId )
    a4 |= (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 88LL))(a2) != 0 ? 0x40200000 : 0;
  v12 = a4 & 0x10000;
  v41 = a4 & 0x10000;
  v47 = a4 & 0x60000000;
  v13 = (a4 >> 28) & 1 | 2;
  if ( (a4 & 0xA0000) != 0 )
    v13 = (a4 >> 28) & 1;
  AudioSession = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                   *(_QWORD *)&g_DeviceEnumerator,
                   *((_QWORD *)this + 26),
                   &v49);
  if ( AudioSession < 0 )
    goto LABEL_42;
  v15 = v44;
  if ( v44 != v49 )
  {
    v15 = 0LL;
    v44 = 0LL;
    if ( v49 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v49)(v49, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v44);
      v15 = v44;
    }
    v12 = a4 & 0x10000;
  }
  if ( !v15 )
  {
    AudioSession = -2147467262;
LABEL_42:
    AudSrvTraceLoggingErrorHelper("CVADServer::InitializePolicy", 1218, AudioSession);
    goto LABEL_43;
  }
  AudioSession = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 24LL))(v15, &v46);
  if ( AudioSession < 0 )
    goto LABEL_42;
  if ( v46 )
  {
    if ( v46 == 1 )
      v13 &= ~2u;
  }
  else
  {
    v13 |= 8u;
  }
  if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 96LL))(a2) && (a4 & 0x2000000) != 0 )
    v13 |= 0x20u;
  *((_DWORD *)this + 67) = a4;
  v16 = v12 != 0;
  v17 = (char *)this + 72;
  AudioSession = CAudioEndpointId::Initialize(
                   (CVADServer *)((char *)this + 72),
                   *((const unsigned __int16 **)this + 26));
  if ( AudioSession < 0 )
    goto LABEL_36;
  if ( v41
    && __PAIR128__(*(unsigned __int64 *)v54.Data4, (unsigned __int64)v45) == *(_OWORD *)&GUID_00000000_0000_0000_0000_000000000000 )
  {
    AudioSession = -2147024809;
LABEL_30:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 371, AudioSession);
    goto LABEL_31;
  }
  *((_OWORD *)this + 6) = *(_OWORD *)v50;
  if ( !v41 )
  {
    v18 = (*(__int64 (__fastcall **)(struct IAudioProcess *, __int64))(*(_QWORD *)a2 + 72LL))(a2, 2147942487LL);
    ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 88, v18);
    v19 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 80LL))(a2);
    ATL::CSimpleStringT<unsigned short,0>::SetString((char *)this + 80, v19);
  }
  *((_DWORD *)this + 30) = v16;
  AudioSession = CAppAudioSessionId::CalculateStaticId((CVADServer *)((char *)this + 80));
  if ( AudioSession < 0 )
    goto LABEL_30;
LABEL_31:
  v17 = (char *)this + 72;
  if ( AudioSession < 0
    || ((*((_DWORD *)this + 34) = v16, v20 = a2, !v41)
      ? (*((_DWORD *)this + 32) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2),
         v20 = a2)
      : (struct IAudioProcess *)(*((_DWORD *)this + 32) = 0),
        *((_DWORD *)this + 33) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(v20),
        AudioSession = CAudioSessionInstanceId::CalculateStaticId((CVADServer *)((char *)this + 72)),
        AudioSession < 0) )
  {
LABEL_36:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 911, AudioSession);
  }
  if ( AudioSession < 0 )
    goto LABEL_42;
  AudioSession = CAudioSessionInstanceId::ToString((__int64)v17, &v48);
  v9 = v48;
  if ( AudioSession < 0 )
    goto LABEL_42;
  v21 = (unsigned int)(*(_DWORD *)(v48 - 16) + 1);
  if ( (unsigned __int64)(2 * v21) > 0x40000 )
  {
    *v42 = 0LL;
LABEL_41:
    AudioSession = -2147024882;
    goto LABEL_42;
  }
  v23 = (unsigned __int16 *)operator new[](2 * v21, (const struct std::nothrow_t *)&std::nothrow);
  v24 = (void **)v42;
  *v42 = v23;
  if ( !v23 )
    goto LABEL_41;
  AudioSession = 0;
  if ( (unsigned __int64)(v21 - 1) > 0x7FFFFFFE )
    AudioSession = -2147024809;
  if ( AudioSession < 0 )
  {
    if ( v21 )
      *v23 = 0;
  }
  else
  {
    if ( v21 )
    {
      v25 = 2147483646 - v21;
      v26 = v9 - (_QWORD)v23;
      do
      {
        if ( !(v25 + v21) )
          break;
        v27 = *(unsigned __int16 *)((char *)v23 + v26);
        if ( !v27 )
          break;
        *v23++ = v27;
        --v21;
      }
      while ( v21 );
    }
    v28 = v23 - 1;
    if ( v21 )
      v28 = v23;
    *v28 = 0;
    AudioSession = -2147024774;
    if ( v21 )
      AudioSession = 0;
  }
  if ( AudioSession < 0 )
  {
    operator delete(*v24);
    *v24 = 0LL;
    goto LABEL_42;
  }
  v29 = 0LL;
  v45 = 0LL;
  EnterCriticalSection(&g_SessionManagerProviderLock);
  if ( g_SingletonAudioSessionManagerProvider )
  {
    wil::details::default_query_policy::query_dispatch<CAudioSessionManagerProvider,CAudioSessionManagerProvider>(
      g_SingletonAudioSessionManagerProvider,
      v30,
      &v45);
    v29 = v45;
  }
  LeaveCriticalSection(&g_SessionManagerProviderLock);
  if ( !v29 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids);
    }
    AudioSession = -2004287487;
    goto LABEL_42;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19LL,
      &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
      *((_QWORD *)this + 26));
  }
  v31 = (const unsigned __int16 *)*((_QWORD *)this + 26);
  if ( !v31 )
  {
    AudioSession = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)0x80070057LL);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v29);
    goto LABEL_42;
  }
  v43 = 0LL;
  v32 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
          *(_QWORD *)&g_DeviceEnumerator,
          v31,
          &v43);
  AudioSession = v32;
  if ( v32 >= 0 )
  {
    v42 = 0LL;
    AudioSessionManagerInternal = (**(__int64 (__fastcall ***)(__int64, GUID *, unsigned __int16 ***))v43)(
                                    v43,
                                    &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                    &v42);
    AudioSession = AudioSessionManagerInternal;
    if ( AudioSessionManagerInternal >= 0 )
    {
      AudioSessionManagerInternal = CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
                                      (CAudioSessionManagerProvider *)v29,
                                      v31,
                                      v50);
      AudioSession = AudioSessionManagerInternal;
      if ( AudioSessionManagerInternal >= 0 )
      {
        if ( v42 )
          (*((void (__fastcall **)(unsigned __int16 **))*v42 + 2))(v42);
        if ( v43 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
        goto LABEL_90;
      }
      v34 = 174LL;
    }
    else
    {
      v34 = 172LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)AudioSessionManagerInternal);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)v32);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v43);
  if ( AudioSession < 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v29);
    goto LABEL_42;
  }
LABEL_90:
  v35 = v51;
  v36 = *((_QWORD *)v51 + 19);
  if ( v36 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v36);
  *((struct CAudioSessionManager **)v35 + 19) = v50[0];
  if ( !ATL::SafeDecrementReferenceMultiThread(v29 + 3) )
  {
    (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)v29 + 24LL))(v29, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  if ( g_DuckingManager )
  {
    v37 = *(_QWORD *)g_DuckingManager;
    v38 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
    (*(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD))(v37 + 48))(g_DuckingManager, v38);
  }
  if ( v41
    && *(_QWORD *)&v52->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1
    && *(_QWORD *)v52->Data4 == *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4 )
  {
    v13 |= 4u;
  }
  v39 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 216LL))(g_PolicyManager);
  if ( v39 == 1 )
  {
    v40 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
    CPolicyConfig::DisconnectAllRenderEndpointsForTsSession(v40);
  }
  else if ( v39 == 2 )
  {
    CPolicyConfig::DisconnectAllRenderEndpoints();
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, v35);
  }
  AudioSession = CAudioSessionManager::CreateAudioSession(
                   *((CAudioSessionManager **)v35 + 19),
                   a2,
                   (CVADServer *)((char *)v35 + 72),
                   v13,
                   v47,
                   *((_DWORD *)v35 + 16),
                   (struct CAudioSession **)v35 + 21);
  if ( AudioSession < 0 )
    goto LABEL_42;
LABEL_43:
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  if ( v49 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v9 - 24) + 8LL))(*(_QWORD *)(v9 - 24));
  return (unsigned int)AudioSession;
}
