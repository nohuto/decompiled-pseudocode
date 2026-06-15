/*
 * XREFs of ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800C82F0
 * Callers:
 *     AudioSessionManagerGetAudioSessions @ 0x1800C9B10 (AudioSessionManagerGetAudioSessions.c)
 * Callees:
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180002FF8 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180003698 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x1800041C0 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     MIDL_user_allocate @ 0x180014480 (MIDL_user_allocate.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001FA4C (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_qS @ 0x1800B58C4 (WPP_SF_qS.c)
 *     WPP_SF_qd @ 0x1800B5944 (WPP_SF_qd.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800C8A3C (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     WPP_SF_Ddq @ 0x1800CA14C (WPP_SF_Ddq.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x1800CDB80 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 */

__int64 __fastcall CAudioSessionManager::GetAudioSessions(
        const unsigned __int16 **this,
        struct IAudioProcess *a2,
        unsigned int *a3,
        void ***a4,
        unsigned __int16 ***a5)
{
  __int64 v6; // rax
  char *v8; // r14
  _BYTE *v9; // r15
  signed int v10; // r13d
  int v11; // r12d
  int v12; // ebx
  int v13; // ebx
  char *v14; // rsi
  int v15; // r15d
  __int64 v16; // rdi
  int v17; // eax
  char *v18; // rax
  _BYTE *v19; // rax
  __int64 v20; // rsi
  struct CAudioSession *v21; // rdi
  CAudioSessionManager *v22; // rcx
  int v23; // eax
  unsigned int v24; // eax
  CAudioSessionManager *v25; // rcx
  struct CServerAudioSessionControl *v26; // rcx
  void **v27; // rdi
  __int64 v28; // rcx
  unsigned int *v29; // rdx
  void ***v30; // rax
  unsigned __int16 ***v31; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp-C0h] BYREF
  char v34; // [rsp+48h] [rbp-B8h]
  int v35; // [rsp+50h] [rbp-B0h]
  __int64 StartPosition; // [rsp+58h] [rbp-A8h] BYREF
  struct CServerAudioSessionControl *v37; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v38; // [rsp+68h] [rbp-98h]
  void ***v39; // [rsp+70h] [rbp-90h]
  unsigned __int16 ***v40; // [rsp+78h] [rbp-88h]
  struct CAudioSession *v41; // [rsp+80h] [rbp-80h] BYREF
  char *v42; // [rsp+88h] [rbp-78h]
  struct IAudioProcess *v43; // [rsp+90h] [rbp-70h]
  _BYTE v44[80]; // [rsp+A0h] [rbp-60h] BYREF

  v40 = a5;
  v6 = *(_QWORD *)a2;
  v39 = a4;
  v8 = 0LL;
  v38 = a3;
  v9 = 0LL;
  v43 = a2;
  v10 = 0;
  v35 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v6 + 48))(a2);
  v41 = 0LL;
  v11 = 0;
  v12 = v35;
  *v39 = 0LL;
  *v40 = 0LL;
  *v38 = 0;
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v44);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Au,
      (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
      this,
      v12);
  }
  v13 = CAudioSessionInstanceId::Initialize(
          (CAudioSessionInstanceId *)v44,
          a2,
          this[37],
          &GUID_SystemSounds_AudioSessionId,
          1);
  if ( v13 < 0 )
  {
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v44);
    goto LABEL_57;
  }
  v13 = CAudioSessionManager::CreateAudioSession(
          (CAudioSessionManager *)this,
          a2,
          (struct CAudioSessionInstanceId *)v44,
          0xEu,
          0,
          0,
          &v41);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v44);
  if ( v13 < 0 )
    goto LABEL_57;
  v34 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 2);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v14 = (char *)(this + 7);
  v42 = (char *)(this + 7);
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64)(this + 7));
  if ( StartPosition )
  {
    v15 = v35;
    do
    {
      v16 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                         v14,
                         &StartPosition);
      if ( v16 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0x2Bu,
            (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
            0LL);
        }
        v17 = *(_DWORD *)(v16 + 756);
        if ( (!v17 || v17 == v15) && *(_DWORD *)(v16 + 408) != 2 )
          ++v10;
      }
    }
    while ( StartPosition );
    v9 = 0LL;
    v11 = 0;
  }
  v18 = (char *)MIDL_user_allocate(8LL * v10);
  v8 = v18;
  if ( !v18 || (memset_0(v18, 0, 8LL * v10), v19 = MIDL_user_allocate(8LL * v10), (v9 = v19) == 0LL) )
  {
    v13 = -2147024882;
    goto LABEL_23;
  }
  memset_0(v19, 0, 8LL * v10);
  StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition((__int64)v14);
  if ( !StartPosition )
  {
LABEL_23:
    if ( v34 )
      LeaveCriticalSection(lpCriticalSection);
    goto LABEL_70;
  }
  v20 = 0LL;
  while ( 1 )
  {
    v21 = *(struct CAudioSession **)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                      v42,
                                      &StartPosition);
    if ( !v21 )
      goto LABEL_48;
    v37 = 0LL;
    v22 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Cu,
        (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
        0LL);
      v22 = WPP_GLOBAL_Control;
    }
    v23 = *((_DWORD *)v21 + 189);
    if ( v23 )
    {
      if ( v23 != v35 )
        goto LABEL_48;
    }
    if ( *((_DWORD *)v21 + 102) == 2 )
      goto LABEL_48;
    if ( v22 != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)v22 + 28) & 0x40) != 0
      && *((_BYTE *)v22 + 25) >= 4u )
    {
      WPP_SF_qS(*((_QWORD *)v22 + 2), 0x2Du, (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, v21, 0LL);
    }
    v24 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v43 + 40LL))(v43);
    v13 = CAudioSessionManager::CreateAudioSessionControl(v25, v21, v24, 0, &v37);
    if ( v13 < 0 )
      break;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_S(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Fu,
        (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
        0LL);
    }
    if ( v20 >= v10 )
      goto LABEL_23;
    v26 = v37;
    *(_QWORD *)&v8[8 * v20] = v37;
    v13 = (*(__int64 (__fastcall **)(struct CServerAudioSessionControl *, _BYTE *))(*(_QWORD *)v26 + 120LL))(
            v26,
            &v9[8 * v11]);
    if ( v13 < 0 )
      goto LABEL_54;
    ++v11;
    ++v20;
LABEL_48:
    if ( !StartPosition )
      goto LABEL_23;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, (__int64)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, v13);
  }
LABEL_54:
  if ( v34 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v11 >= 0 )
  {
LABEL_57:
    v27 = (void **)&v9[8 * v11];
    do
    {
      if ( v8 )
      {
        v28 = *(__int64 *)((char *)v27 + v8 - v9);
        if ( v28 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
      }
      if ( v9 && *v27 )
        operator delete(*v27);
      --v27;
      --v11;
    }
    while ( v11 >= 0 );
  }
  if ( v8 )
    operator delete(v8);
  v8 = 0LL;
  if ( v9 )
    operator delete(v9);
  v9 = 0LL;
  v10 = 0;
LABEL_70:
  v29 = v38;
  v30 = v39;
  v31 = v40;
  *v38 = v10;
  *v30 = (void **)v8;
  *v31 = (unsigned __int16 **)v9;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Ddq(*((_QWORD *)WPP_GLOBAL_Control + 2), v29, &WPP_GLOBAL_Control, (unsigned int)v13, *v29, *v30);
  }
  if ( v13 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetAudioSessions", 1408, v13);
  if ( v41 )
    (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v41 + 16LL))(v41);
  return (unsigned int)v13;
}
