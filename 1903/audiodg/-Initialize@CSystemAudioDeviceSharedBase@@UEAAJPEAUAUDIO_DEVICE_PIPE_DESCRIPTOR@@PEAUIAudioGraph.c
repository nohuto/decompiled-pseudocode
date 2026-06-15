/*
 * XREFs of ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140010710
 * Callers:
 *     ?Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140033EE0 (-Initialize@CSystemAudioDeviceOffloadGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGra.c)
 * Callees:
 *     ?PublishDeviceGraphWnfState@@YAXXZ @ 0x1400046B4 (-PublishDeviceGraphWnfState@@YAXXZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140009D44 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x14000BCC4 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z @ 0x14000EEE8 (-Add@CSystemAudioDeviceCollection@@SAHPEBGPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z @ 0x1400108DC (-ApplyFxStateSettings@CSystemAudioDeviceBase@@IEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@H@Z.c)
 *     ?SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z @ 0x140012C78 (-SetGraphState@CSystemAudioDeviceSharedBase@@IEAAJW4GRAPH_STATE@@@Z.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x14002BF24 (WPP_SF_D.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14003CB48 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z @ 0x140060008 (-AEWMILOG_PERFORMANCE@@YAXKPEAXEE_K1@Z.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::Initialize(
        CSystemAudioDeviceSharedBase *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IUnknown *a3,
        unsigned int a4)
{
  __int128 v4; // xmm0
  void *v9; // rdx
  unsigned int v10; // ecx
  unsigned __int8 v11; // r8
  void *v12; // rdx
  unsigned int v13; // ecx
  unsigned __int8 v14; // r8
  HRESULT Instance; // edi
  __int64 v16; // r10
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  LPVOID *ppv; // [rsp+20h] [rbp-78h]
  LPVOID *ppva; // [rsp+20h] [rbp-78h]
  unsigned __int64 v23; // [rsp+28h] [rbp-70h]
  unsigned __int64 v24; // [rsp+28h] [rbp-70h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-68h] BYREF
  char v26; // [rsp+38h] [rbp-60h]
  __int128 v27; // [rsp+40h] [rbp-58h]
  __int128 v28; // [rsp+50h] [rbp-48h] BYREF

  v4 = *(_OWORD *)((char *)a2 + 152);
  *(_OWORD *)((char *)this + 248) = v4;
  v27 = v4;
  v28 = v4;
  EtwEventActivityIdControl(4LL, &v28);
  AEWMILOG_PERFORMANCE(v10, v9, v11, 9u, (unsigned __int64)ppv, v23);
  v26 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 184);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( !a3 )
  {
    Instance = -2147024809;
    goto LABEL_10;
  }
  Instance = CoCreateInstance(
               &GUID_add18bf7_ab60_4283_a580_d7544dd255d2,
               0LL,
               0x17u,
               &GUID_772e809a_d1b5_46e6_afac_5e169b6ff5a5,
               (LPVOID *)this + 41);
  if ( Instance >= 0 )
  {
    *((_DWORD *)this + 56) = a4;
    if ( *((struct IUnknown **)this + 40) != a3 )
    {
      ATL::AtlComPtrAssign((struct IUnknown **)this + 40, a3);
      a4 = *((_DWORD *)this + 56);
    }
    v16 = *((_QWORD *)this + 41);
    *((_DWORD *)this + 60) = *((_DWORD *)a2 + 34);
    Instance = (*(__int64 (__fastcall **)(__int64, struct AUDIO_DEVICE_PIPE_DESCRIPTOR *, unsigned __int64, _QWORD))(*(_QWORD *)v16 + 24LL))(
                 v16,
                 a2,
                 ((unsigned __int64)this + 8) & -(__int64)(this != 0LL),
                 a4);
    if ( Instance >= 0 )
    {
      *((_DWORD *)this + 8) = *((_DWORD *)a2 + 18);
      *((_DWORD *)this + 88) = *((_DWORD *)a2 + 25);
      v17 = CSystemAudioDeviceCollection::Add(*((const unsigned __int16 **)a2 + 7), this);
      *((_DWORD *)this + 85) = v17;
      if ( v17 )
      {
        Instance = CSystemAudioDeviceBase::ApplyFxStateSettings(this, a2, 1);
        if ( Instance >= 0 )
        {
          if ( *((_DWORD *)this + 88) == 1 )
            CSystemAudioDeviceSharedBase::SetGraphState(this, 3LL);
LABEL_10:
          if ( Instance >= 0 )
            goto LABEL_11;
        }
      }
      else
      {
        Instance = -2147024882;
      }
    }
  }
  (*(void (__fastcall **)(CSystemAudioDeviceSharedBase *))(*(_QWORD *)this + 208LL))(this);
LABEL_11:
  AEWMILOG_PERFORMANCE(v13, v12, v14, 0xAu, (unsigned __int64)ppva, v24);
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        16LL,
        &WPP_f525e75cdaa43c3aecad76b58ec104af_Traceguids,
        (unsigned int)Instance);
    }
    AudDGTraceLoggingErrorHelper("CSystemAudioDeviceSharedBase::Initialize", 0xBFu, Instance);
  }
  PublishDeviceGraphWnfState(v19, v18);
  if ( v26 )
    LeaveCriticalSection(lpCriticalSection);
  EtwEventActivityIdControl(4LL, &v28);
  return (unsigned int)Instance;
}
