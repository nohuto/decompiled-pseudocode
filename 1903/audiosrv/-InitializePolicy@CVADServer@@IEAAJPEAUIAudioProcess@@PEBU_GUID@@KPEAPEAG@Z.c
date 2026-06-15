/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x18001D350
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180023800 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x1800092B0 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180009F50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180020280 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180020370 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180020AB0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180021E90 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800235A0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002A780 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z @ 0x180042D98 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBG@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180064330 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800C2680 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800DEAF8 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x1800DEC58 (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CVADServer::InitializePolicy(
        CVADServer *this,
        struct IAudioProcess *a2,
        const struct _GUID *a3,
        int a4,
        unsigned __int16 **a5)
{
  struct IAudioProcess *v7; // rsi
  struct _GUID v9; // xmm0
  int OwningThread; // ebx
  __int64 v11; // r14
  __int64 v12; // rax
  unsigned int v13; // r12d
  int AudioSession; // r15d
  __int64 v15; // rcx
  BOOL v16; // esi
  char *v17; // r13
  __int64 v18; // rbx
  struct IAudioProcess *v19; // rbx
  int v20; // r14d
  int v21; // eax
  __int64 v22; // rbx
  unsigned __int16 *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  unsigned __int16 v26; // cx
  __int64 v27; // rsi
  volatile signed __int32 *v28; // rbx
  const unsigned __int16 *v29; // rsi
  int v30; // eax
  int AudioSessionManagerInternal; // eax
  CVADServer *v32; // rsi
  volatile signed __int32 *v33; // rcx
  __int64 v34; // rbx
  unsigned int v35; // eax
  __int64 v36; // rax
  int v37; // eax
  _QWORD *v38; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rax
  int v45; // [rsp+40h] [rbp-71h]
  CAudioSessionManagerProvider *v47; // [rsp+50h] [rbp-61h]
  __int64 v48; // [rsp+58h] [rbp-59h] BYREF
  __int64 v49; // [rsp+60h] [rbp-51h] BYREF
  CVADServer *v50; // [rsp+68h] [rbp-49h]
  __int64 v51; // [rsp+70h] [rbp-41h] BYREF
  __int64 v52; // [rsp+78h] [rbp-39h] BYREF
  int v53; // [rsp+80h] [rbp-31h] BYREF
  unsigned int v54; // [rsp+84h] [rbp-2Dh]
  __int64 v55; // [rsp+88h] [rbp-29h] BYREF
  struct CAudioSessionManager *v56[2]; // [rsp+90h] [rbp-21h] BYREF
  const struct _GUID *v57; // [rsp+A0h] [rbp-11h]
  __int64 v58; // [rsp+A8h] [rbp-9h]
  struct _GUID v59; // [rsp+B0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+57h]

  v58 = -2LL;
  v57 = a3;
  v7 = a2;
  v50 = this;
  v52 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  v9 = *a3;
  *(struct _GUID *)v56 = v9;
  v59 = v9;
  v55 = 0LL;
  v49 = 0LL;
  if ( g_ADGProcess )
  {
    OwningThread = (int)g_ADGProcess[2].OwningThread;
    *(struct CAudioSessionManager **)&v9.Data1 = v56[0];
    if ( OwningThread == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 40LL))(v7) )
      a4 |= 0x20000000u;
  }
  v11 = *(_QWORD *)v59.Data4;
  v12 = *(_QWORD *)&v9.Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
  if ( *(_QWORD *)&v9.Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
    v12 = *(_QWORD *)v59.Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
  if ( v12 )
    a4 |= (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 88LL))(v7) != 0 ? 0x40200000 : 0;
  v45 = a4 & 0x10000;
  v54 = a4 & 0x60000000;
  v13 = ((a4 & 0x10000000) != 0) | 2;
  if ( (a4 & 0xA0000) != 0 )
    v13 = (a4 & 0x10000000) != 0;
  AudioSession = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                   *(_QWORD *)&g_DeviceEnumerator,
                   *((_QWORD *)this + 26),
                   &v55);
  if ( AudioSession < 0 )
    goto LABEL_96;
  v15 = v49;
  if ( v49 != v55 )
  {
    v15 = 0LL;
    v49 = 0LL;
    if ( v55 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v55)(v55, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v49);
      v15 = v49;
    }
    v7 = a2;
  }
  if ( !v15 )
  {
    AudioSession = -2147467262;
    goto LABEL_96;
  }
  AudioSession = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 24LL))(v15, &v53);
  if ( AudioSession >= 0 )
  {
    if ( v53 )
    {
      if ( v53 == 1 )
        v13 &= ~2u;
    }
    else
    {
      v13 |= 8u;
    }
    if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v7 + 96LL))(v7) && (a4 & 0x2000000) != 0 )
      v13 |= 0x20u;
    *((_DWORD *)this + 67) = a4;
    v16 = v45 != 0;
    v17 = (char *)this + 72;
    AudioSession = CAudioEndpointId::Initialize((CAudioEndpointId *)v17, *((const unsigned __int16 **)v50 + 26));
    if ( AudioSession < 0 )
      goto LABEL_93;
    if ( !v45 )
      goto LABEL_27;
    v18 = *(_QWORD *)&v9.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&v9.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v18 = v11 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v18 )
    {
      AudioSession = -2147024809;
      v19 = a2;
    }
    else
    {
LABEL_27:
      *(_OWORD *)(v17 + 24) = *(_OWORD *)v56;
      v19 = a2;
      if ( !v45 )
      {
        v40 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
        ATL::CSimpleStringT<unsigned short,0>::SetString(v17 + 16, v40);
        v41 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 80LL))(a2);
        ATL::CSimpleStringT<unsigned short,0>::SetString(v17 + 8, v41);
      }
      *((_DWORD *)v17 + 12) = v16;
      AudioSession = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)(v17 + 8));
      if ( AudioSession >= 0 )
      {
LABEL_30:
        if ( AudioSession >= 0 )
        {
          *((_DWORD *)v17 + 16) = v16;
          if ( v45 )
          {
            v20 = 0;
            *((_DWORD *)v17 + 14) = 0;
            v21 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 48LL))(v19);
          }
          else
          {
            *((_DWORD *)v17 + 14) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 40LL))(v19);
            v21 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v19 + 48LL))(v19);
            v20 = 0;
          }
          *((_DWORD *)v17 + 15) = v21;
          AudioSession = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)v17);
          if ( AudioSession >= 0 )
          {
LABEL_34:
            if ( AudioSession < 0 )
              goto LABEL_96;
            AudioSession = CAudioSessionInstanceId::ToString(v17, &v52);
            if ( AudioSession < 0 )
              goto LABEL_96;
            v22 = (unsigned int)(*(_DWORD *)(v52 - 16) + 1);
            if ( (unsigned __int64)(2 * v22) > 0x40000 )
            {
              *a5 = 0LL;
            }
            else
            {
              v23 = (unsigned __int16 *)operator new[](2 * v22, (const struct std::nothrow_t *)&std::nothrow);
              *a5 = v23;
              if ( v23 )
              {
                AudioSession = 0;
                if ( (unsigned __int64)(v22 - 1) > 0x7FFFFFFE )
                  AudioSession = -2147024809;
                if ( AudioSession < 0 )
                {
                  if ( !v22 )
                    goto LABEL_48;
                }
                else
                {
                  AudioSession = 0;
                  if ( v22 )
                  {
                    v24 = 2147483646 - v22;
                    v25 = v52 - (_QWORD)v23;
                    while ( v24 + v22 )
                    {
                      v26 = *(unsigned __int16 *)((char *)v23 + v25);
                      if ( !v26 )
                        break;
                      *v23++ = v26;
                      if ( !--v22 )
                        goto LABEL_97;
                    }
                  }
                  else
                  {
LABEL_97:
                    --v23;
                    AudioSession = -2147024774;
                  }
                }
                *v23 = 0;
LABEL_48:
                if ( AudioSession < 0 )
                {
                  operator delete(*a5);
                  *a5 = 0LL;
                  goto LABEL_79;
                }
                EnterCriticalSection(&g_SessionManagerProviderLock);
                v27 = g_SingletonAudioSessionManagerProvider;
                if ( g_SingletonAudioSessionManagerProvider )
                {
                  v47 = (CAudioSessionManagerProvider *)g_SingletonAudioSessionManagerProvider;
                  _InterlockedIncrement((volatile signed __int32 *)(g_SingletonAudioSessionManagerProvider + 12));
                  v28 = (volatile signed __int32 *)v47;
                }
                else
                {
                  v28 = 0LL;
                  v47 = 0LL;
                  v27 = 0LL;
                  v20 = -2147467259;
                }
                LeaveCriticalSection(&g_SessionManagerProviderLock);
                if ( v20 >= 0 )
                {
                  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                  {
                    WPP_SF_S(
                      *((_QWORD *)WPP_GLOBAL_Control + 2),
                      19LL,
                      &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
                      *((_QWORD *)v50 + 26));
                  }
                  v29 = (const unsigned __int16 *)*((_QWORD *)v50 + 26);
                  if ( v29 )
                  {
                    v48 = 0LL;
                    v30 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator
                                                                                                 + 40LL))(
                            *(_QWORD *)&g_DeviceEnumerator,
                            v29,
                            &v48);
                    AudioSession = v30;
                    if ( v30 < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0xA9,
                        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
                        (const char *)(unsigned int)v30);
                    }
                    else
                    {
                      v51 = 0LL;
                      AudioSessionManagerInternal = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v48)(
                                                      v48,
                                                      &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                                      &v51);
                      AudioSession = AudioSessionManagerInternal;
                      if ( AudioSessionManagerInternal < 0 )
                      {
                        v42 = 172LL;
                      }
                      else
                      {
                        AudioSessionManagerInternal = CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
                                                        (CAudioSessionManagerProvider *)v28,
                                                        v29,
                                                        v56);
                        AudioSession = AudioSessionManagerInternal;
                        if ( AudioSessionManagerInternal >= 0 )
                        {
                          if ( v51 )
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 16LL))(v51);
                          if ( v48 )
                            (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
                          goto LABEL_62;
                        }
                        v42 = 174LL;
                      }
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)v42,
                        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
                        (const char *)(unsigned int)AudioSessionManagerInternal);
                      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v51);
                    }
                    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v48);
                    if ( AudioSession >= 0 )
                    {
LABEL_62:
                      v32 = v50;
                      v33 = (volatile signed __int32 *)*((_QWORD *)v50 + 19);
                      if ( v33 )
                        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v33);
                      *((struct CAudioSessionManager **)v32 + 19) = v56[0];
                      if ( v28 )
                      {
                        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
                        {
                          (*(void (__fastcall **)(CAudioSessionManagerProvider *, __int64))(*(_QWORD *)v47 + 24LL))(
                            v47,
                            1LL);
                          if ( Microsoft::WRL::Details::ModuleBase::module_ )
                            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
                        }
                      }
                      if ( g_DuckingManager )
                      {
                        v34 = *(_QWORD *)g_DuckingManager;
                        v35 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
                        (*(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD))(v34 + 48))(
                          g_DuckingManager,
                          v35);
                      }
                      if ( v45 )
                      {
                        v36 = *(_QWORD *)&v57->Data1 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
                        if ( *(_QWORD *)&v57->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
                          v36 = *(_QWORD *)v57->Data4 - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
                        if ( !v36 )
                          v13 |= 4u;
                      }
                      v37 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 216LL))(g_PolicyManager);
                      if ( v37 == 1 )
                      {
                        v43 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
                        CPolicyConfig::DisconnectAllRenderEndpointsForTsSession(v43);
                      }
                      else if ( v37 == 2 )
                      {
                        CPolicyConfig::DisconnectAllRenderEndpoints();
                      }
                      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                      {
                        WPP_SF_q(
                          *((_QWORD *)WPP_GLOBAL_Control + 2),
                          21LL,
                          &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
                          v32);
                      }
                      AudioSession = CAudioSessionManager::CreateAudioSession(
                                       *((CAudioSessionManager **)v32 + 19),
                                       a2,
                                       (struct CAudioSessionInstanceId *)v17,
                                       v13,
                                       v54,
                                       *((_DWORD *)v32 + 16),
                                       (struct CAudioSession **)v32 + 21);
                      goto LABEL_79;
                    }
                  }
                  else
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0xA3,
                      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
                      (const char *)0x80070057LL);
                    AudioSession = -2147024809;
                  }
                  if ( v28 )
                    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v28);
LABEL_79:
                  if ( AudioSession >= 0 )
                    goto LABEL_80;
                  goto LABEL_96;
                }
                v44 = v27;
                if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids);
                  v44 = v27;
                }
                AudioSession = -2004287487;
                if ( v44 )
                  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v28);
                goto LABEL_96;
              }
            }
            AudioSession = -2147024882;
            goto LABEL_96;
          }
        }
LABEL_93:
        AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x38Fu, AudioSession);
        v20 = 0;
        goto LABEL_34;
      }
    }
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, AudioSession);
    goto LABEL_30;
  }
LABEL_96:
  AudSrvTraceLoggingErrorHelper("CVADServer::InitializePolicy", 0x4C2u, AudioSession);
LABEL_80:
  if ( v49 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 16LL))(v55);
  v38 = (_QWORD *)(v52 - 24);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v52 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v38 + 8LL))(*v38);
  return (unsigned int)AudioSession;
}
