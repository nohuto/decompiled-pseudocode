/*
 * XREFs of ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800266B0
 * Callers:
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180029120 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternalEvents@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000F170 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UISessionInternal.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001FB10 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020980 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180026FF0 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180028820 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002B7E0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18002B8C0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18002BFE0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063980 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     ??$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCAudioSessionManagerProvider@@U?$integral_constant@_N$00@wistd@@PEAPEAV3@@Z @ 0x1800CA1C0 (--$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCA.c)
 *     ?DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ @ 0x1800D1EB0 (-DisconnectAllRenderEndpoints@CPolicyConfig@@SAXXZ.c)
 *     ?DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z @ 0x1800D1F94 (-DisconnectAllRenderEndpointsForTsSession@CPolicyConfig@@SAXK@Z.c)
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
  __int64 v12; // r12
  int v13; // ebx
  int AudioSession; // esi
  __int64 v15; // rcx
  CVADServer *v16; // r14
  char *v17; // rbx
  int v18; // r12d
  int v19; // r13d
  _BYTE *v20; // rax
  __int64 v21; // rcx
  _BYTE *v22; // rax
  __int64 v23; // rcx
  struct IAudioProcess *v24; // rcx
  __int64 v25; // rbx
  _WORD *v27; // rdx
  void **v28; // r12
  __int64 v29; // r8
  __int64 v30; // rcx
  __int16 v31; // ax
  _WORD *v32; // rax
  __int64 v33; // rdx
  int *v34; // rbx
  const unsigned __int16 *v35; // r14
  int v36; // eax
  int AudioSessionManagerInternal; // eax
  __int64 v38; // rdx
  CVADServer *v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rbx
  unsigned int v42; // eax
  unsigned int v43; // ebx
  int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // [rsp+20h] [rbp-81h]
  unsigned int v47; // [rsp+40h] [rbp-61h]
  __int64 v48; // [rsp+48h] [rbp-59h] BYREF
  __int64 v49; // [rsp+50h] [rbp-51h] BYREF
  __int64 v50; // [rsp+58h] [rbp-49h] BYREF
  CAudioSessionManagerProvider *v51; // [rsp+60h] [rbp-41h] BYREF
  int v52; // [rsp+68h] [rbp-39h] BYREF
  unsigned int v53; // [rsp+6Ch] [rbp-35h]
  CVADServer *v54; // [rsp+70h] [rbp-31h]
  __int64 v55; // [rsp+78h] [rbp-29h] BYREF
  __int64 v56; // [rsp+80h] [rbp-21h] BYREF
  struct CAudioSessionManager *v57[2]; // [rsp+88h] [rbp-19h] BYREF
  const struct _GUID *v58; // [rsp+98h] [rbp-9h]
  __int64 v59; // [rsp+A0h] [rbp-1h]
  struct _GUID v60; // [rsp+A8h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v59 = -2LL;
  v58 = a3;
  v54 = this;
  v51 = (CAudioSessionManagerProvider *)a5;
  v9 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  v55 = v9;
  v10 = *a3;
  *(struct _GUID *)v57 = v10;
  v60 = v10;
  v56 = 0LL;
  v50 = 0LL;
  if ( g_ADGProcess )
  {
    OwningThread = (int)g_ADGProcess[2].OwningThread;
    *(struct CAudioSessionManager **)&v10.Data1 = v57[0];
    if ( OwningThread == (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2) )
      a4 |= 0x20000000u;
  }
  v12 = *(_QWORD *)v60.Data4;
  if ( __PAIR128__(*(unsigned __int64 *)v60.Data4, *(unsigned __int64 *)&v10.Data1) != *(_OWORD *)&GUID_SystemSounds_AudioSessionId )
    a4 |= (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 88LL))(a2) != 0 ? 0x40200000 : 0;
  LODWORD(v48) = a4 & 0x10000;
  v53 = a4 & 0x60000000;
  v13 = (a4 >> 28) & 1 | 2;
  if ( (a4 & 0xA0000) != 0 )
    v13 = (a4 >> 28) & 1;
  v47 = v13;
  AudioSession = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
                   *(_QWORD *)&g_DeviceEnumerator,
                   *((_QWORD *)this + 26),
                   &v56);
  if ( AudioSession < 0 )
    goto LABEL_51;
  v15 = v50;
  if ( v50 != v56 )
  {
    v15 = 0LL;
    v50 = 0LL;
    if ( v56 )
    {
      (**(void (__fastcall ***)(__int64, GUID *, __int64 *))v56)(v56, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5, &v50);
      v15 = v50;
    }
  }
  if ( !v15 )
  {
    AudioSession = -2147467262;
LABEL_51:
    AudSrvTraceLoggingErrorHelper("CVADServer::InitializePolicy", 1233, AudioSession);
    goto LABEL_52;
  }
  AudioSession = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 24LL))(v15, &v52);
  if ( AudioSession < 0 )
    goto LABEL_51;
  if ( !v52 )
  {
    v13 |= 8u;
LABEL_19:
    v47 = v13;
    goto LABEL_20;
  }
  if ( v52 == 1 )
  {
    v13 &= ~2u;
    goto LABEL_19;
  }
LABEL_20:
  if ( !(*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 96LL))(a2) && (a4 & 0x2000000) != 0 )
    v47 = v13 | 0x20;
  *((_DWORD *)v54 + 67) = a4;
  LODWORD(v49) = v48 != 0;
  v16 = v54;
  v17 = (char *)v54 + 72;
  AudioSession = CAudioEndpointId::Initialize((CVADServer *)((char *)v54 + 72), *((const unsigned __int16 **)v54 + 26));
  if ( AudioSession < 0 )
    goto LABEL_45;
  if ( (_DWORD)v48
    && *(_QWORD *)&v10.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
    && v12 == *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
  {
    AudioSession = -2147024809;
    v18 = v49;
    v19 = v48;
LABEL_39:
    AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 371, AudioSession);
    goto LABEL_40;
  }
  *(_OWORD *)(v17 + 24) = *(_OWORD *)v57;
  v19 = v48;
  if ( !(_DWORD)v48 )
  {
    v20 = (_BYTE *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 72LL))(a2);
    if ( v20 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)&v20[2 * v21] );
    }
    else
    {
      LODWORD(v21) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString((void **)v17 + 2, v20, v21);
    v22 = (_BYTE *)(*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 80LL))(a2);
    if ( v22 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( *(_WORD *)&v22[2 * v23] );
    }
    else
    {
      LODWORD(v23) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString((void **)v17 + 1, v22, v23);
  }
  v18 = v49;
  *((_DWORD *)v17 + 12) = v49;
  AudioSession = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)(v17 + 8));
  if ( AudioSession < 0 )
    goto LABEL_39;
LABEL_40:
  v17 = (char *)v16 + 72;
  if ( AudioSession < 0
    || ((*((_DWORD *)v16 + 34) = v18, v24 = a2, !v19)
      ? (*((_DWORD *)v16 + 32) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 40LL))(a2), v24 = a2)
      : (struct IAudioProcess *)(*((_DWORD *)v16 + 32) = 0),
        *((_DWORD *)v16 + 33) = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(v24),
        AudioSession = CAudioSessionInstanceId::CalculateStaticId((CVADServer *)((char *)v16 + 72)),
        AudioSession < 0) )
  {
LABEL_45:
    AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 902, AudioSession);
    v19 = v48;
  }
  if ( AudioSession < 0 )
    goto LABEL_51;
  AudioSession = CAudioSessionInstanceId::ToString(v17, &v55);
  v9 = v55;
  if ( AudioSession < 0 )
    goto LABEL_51;
  v25 = (unsigned int)(*(_DWORD *)(v55 - 16) + 1);
  if ( (unsigned __int64)(2 * v25) > 0x40000 )
  {
    *(_QWORD *)v51 = 0LL;
LABEL_50:
    AudioSession = -2147024882;
    goto LABEL_51;
  }
  v27 = operator new[](2 * v25, (const struct std::nothrow_t *)&std::nothrow);
  v28 = (void **)v51;
  *(_QWORD *)v51 = v27;
  if ( !v27 )
    goto LABEL_50;
  AudioSession = 0;
  if ( (unsigned __int64)(v25 - 1) > 0x7FFFFFFE )
    AudioSession = -2147024809;
  if ( AudioSession < 0 )
  {
    if ( v25 )
      *v27 = 0;
  }
  else
  {
    if ( v25 )
    {
      v29 = 2147483646 - v25;
      v30 = v9 - (_QWORD)v27;
      do
      {
        if ( !(v29 + v25) )
          break;
        v31 = *(_WORD *)((char *)v27 + v30);
        if ( !v31 )
          break;
        *v27++ = v31;
        --v25;
      }
      while ( v25 );
    }
    v32 = v27 - 1;
    if ( v25 )
      v32 = v27;
    *v32 = 0;
    AudioSession = -2147024774;
    if ( v25 )
      AudioSession = 0;
  }
  if ( AudioSession < 0 )
  {
    operator delete(*v28);
    *v28 = 0LL;
    goto LABEL_51;
  }
  v51 = 0LL;
  EnterCriticalSection(&g_SessionManagerProviderLock);
  if ( g_SingletonAudioSessionManagerProvider )
  {
    wil::details::default_query_policy::query_dispatch<CAudioSessionManagerProvider,CAudioSessionManagerProvider>(
      g_SingletonAudioSessionManagerProvider,
      v33,
      &v51);
    v34 = (int *)v51;
  }
  else
  {
    v34 = 0LL;
    v51 = 0LL;
  }
  LeaveCriticalSection(&g_SessionManagerProviderLock);
  if ( !v34 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 20LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids);
    }
    AudioSession = -2004287487;
    goto LABEL_51;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19LL,
      &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids,
      *((_QWORD *)v16 + 26));
  }
  v35 = (const unsigned __int16 *)*((_QWORD *)v16 + 26);
  if ( !v35 )
  {
    AudioSession = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA3,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)0x80070057LL,
      v46);
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v34);
    goto LABEL_51;
  }
  v48 = 0LL;
  v36 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
          *(_QWORD *)&g_DeviceEnumerator,
          v35,
          &v48);
  AudioSession = v36;
  if ( v36 >= 0 )
  {
    v49 = 0LL;
    AudioSessionManagerInternal = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v48)(
                                    v48,
                                    &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
                                    &v49);
    AudioSession = AudioSessionManagerInternal;
    if ( AudioSessionManagerInternal >= 0 )
    {
      AudioSessionManagerInternal = CAudioSessionManagerProvider::GetAudioSessionManagerInternal(
                                      (CAudioSessionManagerProvider *)v34,
                                      v35,
                                      v57);
      AudioSession = AudioSessionManagerInternal;
      if ( AudioSessionManagerInternal >= 0 )
      {
        if ( v49 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
        if ( v48 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
        goto LABEL_100;
      }
      v38 = 174LL;
    }
    else
    {
      v38 = 172LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v38,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)AudioSessionManagerInternal,
      v46);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v49);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA9,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanagerprovider.cpp",
      (const char *)(unsigned int)v36,
      v46);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v48);
  if ( AudioSession < 0 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((__int64)v34);
    goto LABEL_51;
  }
LABEL_100:
  v39 = v54;
  v40 = *((_QWORD *)v54 + 19);
  if ( v40 )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ISessionInternalEvents>::Release(v40);
    *((_QWORD *)v39 + 19) = 0LL;
  }
  *((struct CAudioSessionManager **)v39 + 19) = v57[0];
  if ( !ATL::SafeDecrementReferenceMultiThread(v34 + 3) )
  {
    (*(void (__fastcall **)(int *, __int64))(*(_QWORD *)v34 + 24LL))(v34, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  if ( g_DuckingManager )
  {
    v41 = *(_QWORD *)g_DuckingManager;
    v42 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
    (*(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD))(v41 + 48))(g_DuckingManager, v42);
  }
  v43 = v47;
  if ( v19
    && *(_QWORD *)&v58->Data1 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1
    && *(_QWORD *)v58->Data4 == *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4 )
  {
    v43 = v47 | 4;
  }
  v44 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 216LL))(g_PolicyManager);
  if ( v44 == 1 )
  {
    v45 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a2 + 48LL))(a2);
    CPolicyConfig::DisconnectAllRenderEndpointsForTsSession(v45);
  }
  else if ( v44 == 2 )
  {
    CPolicyConfig::DisconnectAllRenderEndpoints();
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 21LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids, v39);
  }
  AudioSession = CAudioSessionManager::CreateAudioSession(
                   *((CAudioSessionManager **)v39 + 19),
                   a2,
                   (CVADServer *)((char *)v39 + 72),
                   v43,
                   v53,
                   *((_DWORD *)v39 + 16),
                   (struct CAudioSession **)v39 + 21);
  if ( AudioSession < 0 )
    goto LABEL_51;
LABEL_52:
  if ( v50 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  if ( v56 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v9 - 24 + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v9 - 24) + 8LL))(*(_QWORD *)(v9 - 24));
  return (unsigned int)AudioSession;
}
