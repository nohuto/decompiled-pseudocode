/*
 * XREFs of ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140011CD0
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140039240 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400084D8 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140009730 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x14000D050 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x140011A94 (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x140011EA8 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x14001A8A4 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     __security_check_cookie @ 0x14001BC40 (__security_check_cookie.c)
 *     memset_0 @ 0x14001CA76 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x14001D9E0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14003283C (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1400405A8 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::Initialize(
        CSystemAudioDeviceSharedBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        unsigned int a4)
{
  __int128 v4; // xmm0
  HRESULT Instance; // edi
  __int64 v10; // r10
  int v11; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-69h] BYREF
  char v14; // [rsp+38h] [rbp-61h]
  _WORD v15[2]; // [rsp+40h] [rbp-59h] BYREF
  __int16 v16; // [rsp+44h] [rbp-55h]
  __int128 v17; // [rsp+58h] [rbp-41h]
  int v18; // [rsp+6Ch] [rbp-2Dh]
  __int64 v19; // [rsp+70h] [rbp-29h]
  int v20; // [rsp+78h] [rbp-21h]
  __int64 v21; // [rsp+80h] [rbp-19h]
  __int64 v22; // [rsp+88h] [rbp-11h]
  __int128 v23; // [rsp+90h] [rbp-9h]
  __int128 v24; // [rsp+A0h] [rbp+7h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 152);
  *(_OWORD *)((char *)this + 248) = v4;
  v23 = v4;
  v24 = v4;
  EtwEventActivityIdControl(4LL, &v24);
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset_0(v15, 0, 0x40uLL);
    v19 = 0LL;
    v20 = 0;
    v21 = 0LL;
    v22 = 0LL;
    v17 = AEWMIGUID_PERFORMANCE;
    v15[0] = 80;
    v18 = 0x20000;
    v16 = 1033;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v15);
  }
  v14 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !a3 )
  {
    Instance = -2147024809;
    goto LABEL_12;
  }
  Instance = CoCreateInstance(
               &GUID_add18bf7_ab60_4283_a580_d7544dd255d2,
               0LL,
               0x17u,
               &GUID_3c169ff7_37b2_484c_b199_c3155590f316,
               (LPVOID *)this + 41);
  if ( Instance >= 0 )
  {
    *((_DWORD *)this + 56) = a4;
    if ( *((struct IUnknown **)this + 40) != a3 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)this + 40, a3);
      a4 = *((_DWORD *)this + 56);
    }
    v10 = *((_QWORD *)this + 41);
    *((_DWORD *)this + 60) = *((_DWORD *)a2 + 34);
    Instance = (*(__int64 (__fastcall **)(__int64, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, unsigned __int64, _QWORD))(*(_QWORD *)v10 + 24LL))(
                 v10,
                 a2,
                 ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
                 a4);
    if ( Instance >= 0 )
    {
      *((_DWORD *)this + 8) = *((_DWORD *)a2 + 18);
      *((_DWORD *)this + 88) = *((_DWORD *)a2 + 25);
      v11 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
      *((_DWORD *)this + 85) = v11;
      if ( v11 )
      {
        Instance = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 1);
        if ( Instance >= 0 )
        {
          if ( *((_DWORD *)this + 88) == 1 )
            CSystemAudioDeviceSharedBase::SetGraphState(this, 3LL);
LABEL_12:
          if ( Instance >= 0 )
            goto LABEL_13;
        }
      }
      else
      {
        Instance = -2147024882;
      }
    }
  }
  (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 208LL))(this);
LABEL_13:
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset_0(v15, 0, 0x40uLL);
    v19 = 0LL;
    v20 = 0;
    v21 = 0LL;
    v22 = 0LL;
    v17 = AEWMIGUID_PERFORMANCE;
    v15[0] = 80;
    v18 = 0x20000;
    v16 = 1034;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v15);
  }
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_48d4d569e64a3b776de7c7a94bae5ebb_Traceguids,
        (unsigned int)Instance);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::Initialize", 0xBFu, Instance);
  }
  PublishDeviceGraphWnfState();
  if ( v14 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v24);
  return (unsigned int)Instance;
}
