/*
 * XREFs of VADServerUserSessionChanged @ 0x18002C0C8
 * Callers:
 *     ?Invoke@SESSION_EVENT@@UEAAXXZ @ 0x18002C070 (-Invoke@SESSION_EVENT@@UEAAXXZ.c)
 * Callees:
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x180002E28 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180002EB8 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z @ 0x18002BF10 (-GetAudioSessionManagerProvider@@YAJPEAPEAVCAudioSessionManagerProvider@@@Z.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18002C324 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002C480 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetStartPosition@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEBAPEAU__POSITION@@XZ @ 0x180046AF0 (-GetStartPosition@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceI.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1800BCD1C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x1800BCD54 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     ?GetNextValue@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@AEAPEAU__POSITION@@@Z @ 0x1800D6F7C (-GetNextValue@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTra.c)
 *     ??$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCAudioSessionManagerProvider@@U?$integral_constant@_N$00@wistd@@PEAPEAV3@@Z @ 0x1800D878C (--$query_dispatch@VCAudioSessionManagerProvider@@V1@@default_query_policy@details@wil@@CAJPEAVCA.c)
 *     ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x1800D8D40 (-NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z.c)
 */

__int64 __fastcall VADServerUserSessionChanged(unsigned int a1, struct CAudioSessionManagerProvider *a2)
{
  DWORD v2; // r15d
  struct CAudioSessionManagerProvider *v3; // r13
  unsigned int v4; // edi
  __int64 v5; // rbx
  unsigned int v6; // esi
  __int64 v7; // rdx
  struct _RTL_CRITICAL_SECTION *v8; // r12
  __int64 *v9; // rsi
  unsigned int v10; // r13d
  __int64 *v11; // r12
  __int64 v12; // r14
  bool v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r8
  int AudioSessionManagerProvider; // eax
  struct CAudioSessionManagerProvider *v17; // rbx
  _BYTE v19[16]; // [rsp+20h] [rbp-49h] BYREF
  _BYTE v20[144]; // [rsp+30h] [rbp-39h] BYREF
  struct CAudioSessionManagerProvider *v22; // [rsp+D8h] [rbp+6Fh] BYREF
  unsigned int TsAudioProtocol; // [rsp+E0h] [rbp+77h]
  __int64 StartPosition; // [rsp+E8h] [rbp+7Fh] BYREF

  v22 = a2;
  v2 = *((_DWORD *)a2 + 1);
  v3 = a2;
  v4 = a1;
  if ( (unsigned int)IsTSSessionIdAudioProtocolSupported() )
  {
    v5 = 0LL;
    TsAudioProtocol = GetTsAudioProtocol(v2);
    StartPosition = 0LL;
    v6 = TsAudioProtocol;
    EnterCriticalSection(&g_SessionManagerProviderLock);
    if ( g_SingletonAudioSessionManagerProvider )
    {
      wil::details::default_query_policy::query_dispatch<CAudioSessionManagerProvider,CAudioSessionManagerProvider>(
        g_SingletonAudioSessionManagerProvider,
        v7,
        &StartPosition);
      v5 = StartPosition;
    }
    LeaveCriticalSection(&g_SessionManagerProviderLock);
    if ( v5 )
    {
      v8 = (struct _RTL_CRITICAL_SECTION *)(v5 + 16);
      EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 16));
      v9 = *(__int64 **)(v5 + 56);
      if ( v9 != *(__int64 **)(v5 + 64) )
      {
        v10 = TsAudioProtocol;
        v11 = *(__int64 **)(v5 + 64);
        do
        {
          v12 = *v9;
          CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v20);
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, v2);
          }
          if ( *(_DWORD *)(v12 + 304) != v10 )
          {
            ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v19, (struct _RTL_CRITICAL_SECTION *)(v12 + 16), v13);
            StartPosition = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetStartPosition(v12 + 56);
            while ( StartPosition )
            {
              v14 = *(_QWORD *)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNextValue(
                                 v12 + 56,
                                 &StartPosition);
              if ( v14 && *(_DWORD *)(v14 + 716) == v2 )
              {
                LOBYTE(v15) = 1;
                (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(v14 + 16) + 32LL))(v14 + 16, 4LL, v15);
              }
            }
            ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)v19);
          }
          CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v20);
          ++v9;
        }
        while ( v9 != v11 );
        v4 = a1;
        v8 = (struct _RTL_CRITICAL_SECTION *)(v5 + 16);
        v3 = v22;
      }
      if ( v8 )
        LeaveCriticalSection(v8);
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v5);
      v6 = TsAudioProtocol;
    }
    if ( g_pVolumeProvider )
      (*(void (__fastcall **)(struct IVolumeProvider *, _QWORD, _QWORD))(*(_QWORD *)g_pVolumeProvider + 32LL))(
        g_pVolumeProvider,
        v2,
        v6);
    if ( v4 - 1 > 4 )
    {
      if ( v4 <= 6 )
        goto LABEL_35;
      if ( v4 <= 9 )
        return 0LL;
      if ( v4 == 11 )
      {
        v22 = 0LL;
        AudioSessionManagerProvider = GetAudioSessionManagerProvider(&v22);
        v17 = v22;
        if ( AudioSessionManagerProvider >= 0 )
          CAudioSessionManagerProvider::NotifySessionTerminate(v22, *((_DWORD *)v3 + 1));
        if ( v17 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v17);
      }
      else
      {
LABEL_35:
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
