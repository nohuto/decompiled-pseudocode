/*
 * XREFs of ?SetVolumeAllStreams@CAudioSession@@IEAAXW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800297F8
 * Callers:
 *     ?UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800297C0 (-UpdateAudioVolume@CPerStreamVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 *     ?UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z @ 0x1800D1C50 (-UpdateAudioVolume@CPerEndpointVolumeAudioSession@@EEAAJW4AudioVolumeChangeType@@_NMIPEAM_J@Z.c)
 * Callees:
 *     ?GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@PEBU_TlgProvider_t@@PEAMPEA_JW4GPV_REASON@@@Z @ 0x18001AE20 (-GetPolicyVolumeForAudioStream@@YAXPEAUIAudioPolicyManager@@PEAUIAudioStreamPolicyVolumeClient@@.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18004D1A4 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     ?SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z @ 0x18004D49C (-SetPolicyVolume@CAudioStream@@QEAAJM_J_N@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BD31C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_q @ 0x1800C3F68 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1800D2488 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CAudioSession::SetVolumeAllStreams(
        __int64 a1,
        int a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int v9; // r14d
  __int64 v10; // rcx
  CAudioStream *v11; // rsi
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  wil::details::in1diag3 *v15; // rcx
  __int64 v16; // rdx
  int updated; // eax
  __int64 v18; // rdx
  int v19; // [rsp+28h] [rbp-51h]
  WINBOOL fPending; // [rsp+48h] [rbp-31h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-29h] BYREF
  __int64 v22; // [rsp+58h] [rbp-21h] BYREF
  LPCRITICAL_SECTION v23[2]; // [rsp+60h] [rbp-19h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-9h] BYREF
  char v25; // [rsp+78h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+47h]
  float v27; // [rsp+C8h] [rbp+4Fh] BYREF

  v23[1] = (LPCRITICAL_SECTION)-2LL;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 90LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, a1);
  }
  (*(void (__fastcall **)(struct IAudioPolicyManager *, LPCRITICAL_SECTION *))(*(_QWORD *)g_PolicyManager + 192LL))(
    g_PolicyManager,
    v23);
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 48);
  v25 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v9 = 0;
  if ( *(_QWORD *)(a1 + 104) )
  {
    v10 = 0LL;
    while ( 1 )
    {
      v11 = *(CAudioStream **)(*(_QWORD *)(a1 + 96) + 8 * v10);
      v27 = 1.0;
      v22 = 0LL;
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = &qword_1801B8588;
        qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
      }
      GetPolicyVolumeForAudioStream(
        (__int64)&v22,
        ((unsigned __int64)v11 + 16) & -(__int64)(v11 != 0LL),
        *((_QWORD *)Context + 1),
        &v27,
        &v22);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
      {
        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 91LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, a1, v11);
      }
      if ( a2 == 3 )
        v12 = *((_BYTE *)v11 + 216) != 0 ? 0x3D0900 : 0;
      else
        v12 = a2 == 4 ? (*((_BYTE *)v11 + 216) != 0 ? 0x2710 : 0) : v22;
      v13 = CAudioStream::SetPolicyVolume(v11, v27, v12, a5 == 0);
      v15 = retaddr;
      if ( v13 < 0 )
        break;
      if ( a5 )
      {
        LOBYTE(v14) = a3;
        v13 = (*(__int64 (__fastcall **)(CAudioStream *, __int64, _QWORD))(*(_QWORD *)v11 + 104LL))(v11, v14, 0LL);
        v15 = retaddr;
        if ( v13 < 0 )
        {
          v18 = 4262LL;
          goto LABEL_35;
        }
        v19 = v12;
        v13 = (*(__int64 (__fastcall **)(CAudioStream *, __int64, _QWORD, __int64))(*(_QWORD *)v11 + 96LL))(
                v11,
                v16,
                a5,
                a6);
        v15 = retaddr;
        if ( v13 < 0 )
        {
          v18 = 4265LL;
          goto LABEL_35;
        }
      }
LABEL_21:
      updated = CAudioStream::UpdateStreamPriority(v11);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x10AF,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)updated,
          v19);
      v10 = ++v9;
      if ( (unsigned __int64)v9 >= *(_QWORD *)(a1 + 104) )
        goto LABEL_4;
    }
    v18 = 4257LL;
LABEL_35:
    wil::details::in1diag3::_Log_Hr(
      v15,
      (void *)v18,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v13,
      v19);
    goto LABEL_21;
  }
LABEL_4:
  if ( v25 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v23[0] )
    LeaveCriticalSection(v23[0]);
}
