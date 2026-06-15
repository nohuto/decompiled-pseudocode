/*
 * XREFs of VADServerUserSessionChanged @ 0x180029328
 * Callers:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x1800292D0 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800046E8 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180004778 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x180029150 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x1800294B8 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029620 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x1800425D0 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800C2644 (WPP_SF_d.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800D73CC (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x1800D91A0 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 */

__int64 __fastcall VADServerUserSessionChanged(unsigned int a1, __int64 a2)
{
  DWORD v2; // r15d
  __int64 v3; // rsi
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  __int64 v6; // rdi
  struct _RTL_CRITICAL_SECTION *v7; // r12
  __int64 *v8; // r13
  __int64 *v9; // rsi
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // r8
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v15; // rbx
  struct CAudioSessionManagerProvider *v16; // [rsp+20h] [rbp-59h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-51h] BYREF
  char v18; // [rsp+30h] [rbp-49h]
  _BYTE v19[144]; // [rsp+40h] [rbp-39h] BYREF
  unsigned int TsAudioProtocol; // [rsp+F0h] [rbp+77h]
  __int64 StartPosition; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = *(_DWORD *)(a2 + 4);
  v3 = a2;
  v4 = a1;
  if ( (unsigned int)IsTSSessionIdAudioProtocolSupported() )
  {
    TsAudioProtocol = GetTsAudioProtocol(v2);
    v5 = TsAudioProtocol;
    EnterCriticalSection(&g_SessionManagerProviderLock);
    v6 = g_SingletonAudioSessionManagerProvider;
    if ( g_SingletonAudioSessionManagerProvider )
      _InterlockedIncrement((volatile signed __int32 *)(g_SingletonAudioSessionManagerProvider + 12));
    LeaveCriticalSection(&g_SessionManagerProviderLock);
    if ( v6 )
    {
      v7 = (struct _RTL_CRITICAL_SECTION *)(v6 + 16);
      EnterCriticalSection((LPCRITICAL_SECTION)(v6 + 16));
      v8 = *(__int64 **)(v6 + 64);
      v9 = *(__int64 **)(v6 + 56);
      if ( v9 != v8 )
      {
        do
        {
          v11 = *v9;
          CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v19);
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, v2);
          }
          if ( *(_DWORD *)(v11 + 304) != TsAudioProtocol )
          {
            v18 = 0;
            lpCriticalSection = (LPCRITICAL_SECTION)(v11 + 16);
            ATL::CCritSecLock::Lock(&lpCriticalSection);
            StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v11 + 56);
            while ( StartPosition )
            {
              v12 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                 v11 + 56,
                                 &StartPosition);
              if ( v12 && *(_DWORD *)(v12 + 716) == v2 )
              {
                LOBYTE(v13) = 1;
                (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v12 + 16) + 32LL))(v12 + 16, 4LL, v13);
              }
            }
            if ( v18 )
            {
              LeaveCriticalSection(lpCriticalSection);
              v18 = 0;
            }
          }
          CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v19);
          ++v9;
        }
        while ( v9 != v8 );
        v4 = a1;
        v7 = (struct _RTL_CRITICAL_SECTION *)(v6 + 16);
        v5 = TsAudioProtocol;
      }
      if ( v7 )
        LeaveCriticalSection(v7);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v6);
      v3 = a2;
    }
    if ( g_pVolumeProvider )
      (*(void (__fastcall **)(struct IVolumeProvider *, _QWORD, _QWORD))(*(_QWORD *)g_pVolumeProvider + 32LL))(
        g_pVolumeProvider,
        v2,
        v5);
    if ( v4 != 5 && v4 != 1 && v4 != 2 && v4 != 3 && v4 != 4 )
    {
      if ( v4 <= 6 )
        goto LABEL_41;
      if ( v4 <= 9 )
        return 0LL;
      if ( v4 == 11 )
      {
        v16 = 0LL;
        AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v16);
        v15 = v16;
        if ( AudioSessionManagerProvider >= 0 )
          CAudioSessionManagerProvider::NotifySessionTerminate(v16, *(_DWORD *)(v3 + 4));
        if ( v15 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v15);
      }
      else
      {
LABEL_41:
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_caac46b4f1e3331f0b6e69ee555f6535_Traceguids, v4);
        }
      }
    }
  }
  return 0LL;
}
