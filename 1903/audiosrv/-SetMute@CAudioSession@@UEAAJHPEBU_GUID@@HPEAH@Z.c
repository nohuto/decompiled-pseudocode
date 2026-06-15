/*
 * XREFs of ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x180028AE0
 * Callers:
 *     ?SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z @ 0x180028A60 (-SetMute@CPerStreamVolumeAudioSession@@EEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z @ 0x1800CF554 (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAUIVolumeStrip@@@Z.c)
 *     ?OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z @ 0x1800D0000 (-OnNotify@CPerEndpointVolumeAudioSession@@EEAAJPEAUAUDIO_VOLUME_NOTIFICATION_DATA@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ResetPolicyGainStages@CAudioSession@@AEAAXXZ @ 0x18004DAE0 (-ResetPolicyGainStages@CAudioSession@@AEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sd @ 0x1800C50DC (WPP_SF_Sd.c)
 *     WPP_SF_Sdd @ 0x1800D1FF8 (WPP_SF_Sdd.c)
 */

__int64 __fastcall CAudioSession::SetMute(CAudioSession *this, int a2, const struct _GUID *a3, int a4, int *a5)
{
  int *v5; // r14
  int v9; // ebx
  int v10; // esi
  __int64 v12; // r9
  const WCHAR *v13; // rdx
  int v14; // edx
  LPCGUID v15; // r8
  TraceLoggingHProvider v16; // r9
  UINT32 cData; // [rsp+20h] [rbp-A1h]
  WINBOOL fPending; // [rsp+40h] [rbp-81h] BYREF
  int v19; // [rsp+44h] [rbp-7Dh] BYREF
  _BYTE v20[8]; // [rsp+48h] [rbp-79h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-71h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp-69h] BYREF
  char v23; // [rsp+60h] [rbp-61h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-51h] BYREF
  int *v25; // [rsp+90h] [rbp-31h]
  __int64 v26; // [rsp+98h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+A0h] [rbp-21h] BYREF
  int *v28; // [rsp+B0h] [rbp-11h]
  __int64 v29; // [rsp+B8h] [rbp-9h]
  _BYTE *v30; // [rsp+C0h] [rbp-1h]
  __int64 v31; // [rsp+C8h] [rbp+7h]
  int v32; // [rsp+128h] [rbp+67h] BYREF

  v32 = a2;
  v5 = a5;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      19,
      (unsigned int)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
      *((_QWORD *)this + 91),
      a2);
  }
  v9 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 808);
  v23 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v10 = *((_DWORD *)this + 213);
  if ( v10 != v32 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sdd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20,
        (unsigned int)&WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
        *((_QWORD *)this + 91),
        v10,
        v32);
    }
    CAudioSession::ResetPolicyGainStages(this);
    *((_DWORD *)this + 213) = v32;
    if ( (*(int (__fastcall **)(CAudioSession *, _BYTE *))(*(_QWORD *)this + 168LL))(this, v20) >= 0 )
    {
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
      v12 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v12 > 4u
        && (*(_QWORD *)(v12 + 16) & 0x400000000000LL) != 0
        && (*(_QWORD *)(v12 + 24) & 0x400000000000LL) == *(_QWORD *)(v12 + 24) )
      {
        v13 = (const WCHAR *)*((_QWORD *)this + 91);
        v25 = &v32;
        v26 = 4LL;
        TlgCreateWsz(&pDesc, v13);
        v14 = *((_DWORD *)this + 180);
        v28 = &v19;
        v30 = v20;
        v19 = v14;
        v29 = 4LL;
        v31 = 4LL;
        TlgWrite(v16, &unk_180177CD9, v15, (LPCGUID)v16, 6u, &pData);
      }
    }
  }
  if ( v23 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v10 != v32 && !a4 )
  {
    LOBYTE(cData) = 0;
    (*(void (__fastcall **)(char *, _QWORD, const struct _GUID *, __int64, UINT32, _QWORD))(*((_QWORD *)this + 2) + 24LL))(
      (char *)this + 16,
      0LL,
      a3,
      0xFFFFFFFFLL,
      cData,
      0LL);
  }
  if ( v5 )
  {
    LOBYTE(v9) = v10 == v32;
    *v5 = v9;
  }
  return 0LL;
}
