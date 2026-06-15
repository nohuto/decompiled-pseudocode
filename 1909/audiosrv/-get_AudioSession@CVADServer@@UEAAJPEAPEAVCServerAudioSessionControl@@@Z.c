/*
 * XREFs of ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180033CF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180033C20 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180067DC8 (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 */

__int64 __fastcall CVADServer::get_AudioSession(CVADServer *this, struct CServerAudioSessionControl **a2)
{
  unsigned int AudioSessionControl; // edi
  struct CServerAudioSessionControl **v6; // rsi
  struct CServerAudioSessionControl *v7; // rbx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  AudioSessionControl = 0;
  if ( *((_DWORD *)this + 46) )
  {
    v6 = (struct CServerAudioSessionControl **)((char *)this + 160);
    if ( !*((_QWORD *)this + 20) )
    {
      v9 = 0;
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      if ( !*v6 )
        AudioSessionControl = CAudioSessionManager::GetAudioSessionControl(
                                *((CAudioSessionManager **)this + 19),
                                *((_DWORD *)this + 16),
                                1,
                                *((struct CAudioSession **)this + 21),
                                v6);
      if ( v9 )
        LeaveCriticalSection(lpCriticalSection);
      if ( AudioSessionControl )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_d(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            24LL,
            &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
            AudioSessionControl);
        }
        goto LABEL_24;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 23LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids, *v6);
      }
    }
    if ( HasTooManyReferences((struct IUnknown *)(((unsigned __int64)*v6 + 8) & -(__int64)(*v6 != 0LL))) )
    {
      AudioSessionControl = -2147024882;
      goto LABEL_25;
    }
    *a2 = *v6;
    v7 = *v6;
    (*(void (__fastcall **)(struct CServerAudioSessionControl *))(*(_QWORD *)*v6 + 8LL))(*v6);
    _InterlockedIncrement((volatile signed __int32 *)v7 + 6);
LABEL_24:
    if ( (AudioSessionControl & 0x80000000) == 0 )
      return AudioSessionControl;
LABEL_25:
    AudSrvTraceLoggingErrorHelper("CVADServer::get_AudioSession", 1297, AudioSessionControl);
    return AudioSessionControl;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids);
  }
  return 2290679809LL;
}
