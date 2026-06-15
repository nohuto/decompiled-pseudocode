/*
 * XREFs of VADServerUserSessionChanged @ 0x1800205C8
 * Callers:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x180020570 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 * Callees:
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180002FF8 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180003698 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x18001FA4C (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x180020824 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180020980 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x1800236D0 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1800287F4 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002D0D8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800C8A3C (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ??$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCAudioSessionManagerProvider@@U?$integral_constant@_N$00@wistd@@PEAPEAV3@@Z @ 0x1800CA1C0 (--$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCA.c)
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x1800CA7F0 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 */

__int64 __fastcall VADServerUserSessionChanged(unsigned int a1, struct CAudioSessionManagerProvider *a2)
{
  DWORD v2; // r15d
  struct CAudioSessionManagerProvider *v3; // r13
  unsigned int v4; // edi
  unsigned int TsAudioProtocol; // eax
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rbx
  struct _RTL_CRITICAL_SECTION *v9; // r12
  __int64 *v10; // rsi
  unsigned int v11; // r13d
  __int64 *v12; // r12
  __int64 v13; // r14
  bool v14; // r8
  __int64 v15; // rcx
  __int64 v16; // r8
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v18; // rbx
  _BYTE v20[16]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v21[144]; // [rsp+30h] [rbp-39h] BYREF
  struct CAudioSessionManagerProvider *v23; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int v24; // [rsp+E0h] [rbp+77h]
  __int64 StartPosition; // [rsp+E8h] [rbp+7Fh] BYREF

  v23 = a2;
  v2 = *((_DWORD *)a2 + 1);
  v3 = a2;
  v4 = a1;
  if ( (unsigned int)IsTSSessionIdAudioProtocolSupported() )
  {
    TsAudioProtocol = GetTsAudioProtocol(v2);
    StartPosition = 0LL;
    v6 = TsAudioProtocol;
    v24 = TsAudioProtocol;
    EnterCriticalSection(&g_SessionManagerProviderLock);
    if ( g_SingletonAudioSessionManagerProvider )
    {
      wil::details::default_query_policy::query_dispatch<CAudioSessionManagerProvider,CAudioSessionManagerProvider>(
        g_SingletonAudioSessionManagerProvider,
        v7,
        &StartPosition);
      v8 = StartPosition;
    }
    else
    {
      v8 = 0LL;
    }
    LeaveCriticalSection(&g_SessionManagerProviderLock);
    if ( v8 )
    {
      v9 = (struct _RTL_CRITICAL_SECTION *)(v8 + 16);
      EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 16));
      v10 = *(__int64 **)(v8 + 56);
      if ( v10 != *(__int64 **)(v8 + 64) )
      {
        v11 = v24;
        v12 = *(__int64 **)(v8 + 64);
        do
        {
          v13 = *v10;
          CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v21);
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, v2);
          }
          if ( *(_DWORD *)(v13 + 304) != v11 )
          {
            ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v20, (struct _RTL_CRITICAL_SECTION *)(v13 + 16), v14);
            StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v13 + 56);
            while ( StartPosition )
            {
              v15 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                 v13 + 56,
                                 &StartPosition);
              if ( v15 && *(_DWORD *)(v15 + 756) == v2 )
              {
                LOBYTE(v16) = 1;
                (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v15 + 16) + 32LL))(v15 + 16, 4LL, v16);
              }
            }
            ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)v20);
          }
          CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v21);
          ++v10;
        }
        while ( v10 != v12 );
        v4 = a1;
        v9 = (struct _RTL_CRITICAL_SECTION *)(v8 + 16);
        v3 = v23;
      }
      if ( v9 )
        LeaveCriticalSection(v9);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8);
      v6 = v24;
    }
    if ( g_pVolumeProvider )
      (*(void (__fastcall **)(struct IVolumeProvider *, _QWORD, _QWORD))(*(_QWORD *)g_pVolumeProvider + 32LL))(
        g_pVolumeProvider,
        v2,
        v6);
    if ( v4 - 1 > 4 )
    {
      if ( v4 <= 6 )
        goto LABEL_36;
      if ( v4 <= 9 )
        return 0LL;
      if ( v4 == 11 )
      {
        v23 = 0LL;
        AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v23);
        v18 = v23;
        if ( AudioSessionManagerProvider >= 0 )
          CAudioSessionManagerProvider::NotifySessionTerminate(v23, *((_DWORD *)v3 + 1));
        if ( v18 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v18);
      }
      else
      {
LABEL_36:
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 47LL, &WPP_02a848516c583aee7a5d82f92b33b2e5_Traceguids, v4);
        }
      }
    }
  }
  return 0LL;
}
