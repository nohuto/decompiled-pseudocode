/*
 * XREFs of s_pbmGetSoundLevel @ 0x1801060E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x18000FFE0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x18002B0F0 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall s_pbmGetSoundLevel(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int SoundLevel; // ebx
  __int64 v10; // r8
  void *v11; // r8
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // eax
  WINBOOL fPending[2]; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  struct _TP_TIMER *pv[8]; // [rsp+40h] [rbp-40h] BYREF

  SoundLevel = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
    && fPending[0] )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v11);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v10,
    (struct _TP_TIMER *)L"s_pbmGetSoundLevel");
  if ( (unsigned int)IsPbmSoundLevelSupported() )
  {
    SoundLevel = PbmGetSoundLevel(a1, a2, a3, a4, a5);
  }
  else if ( g_PolicyManager )
  {
    *(_QWORD *)fPending = 0LL;
    v12 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, WINBOOL *))(*(_QWORD *)g_PolicyManager + 32LL))(
            g_PolicyManager,
            a1,
            fPending);
    v13 = *(_QWORD *)fPending;
    SoundLevel = v12;
    if ( v12 >= 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, __int64))(**(_QWORD **)fPending + 344LL))(
              *(_QWORD *)fPending,
              a2,
              a3,
              a4,
              a5);
      v13 = *(_QWORD *)fPending;
      SoundLevel = v14;
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return SoundLevel;
}
