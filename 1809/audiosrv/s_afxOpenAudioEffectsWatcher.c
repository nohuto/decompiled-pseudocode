/*
 * XREFs of s_afxOpenAudioEffectsWatcher @ 0x1800BE170
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180010050 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_TlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z @ 0x1800BD4E8 (-GetWatcher@AudioEffectsWatcherFactory@@QEAAJPEBGKHPEAPEAVAudioEffectsWatcher@@@Z.c)
 *     ?ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z @ 0x1800BDDD4 (-ReleaseWatcher@AudioEffectsWatcherFactory@@QEAAXPEAVAudioEffectsWatcher@@@Z.c)
 */

__int64 __fastcall s_afxOpenAudioEffectsWatcher(
        __int64 a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        _OWORD *a5,
        AudioEffectsWatcherFactory **a6,
        _QWORD *a7)
{
  _QWORD *v10; // rdi
  char v11; // r14
  __int64 v12; // r8
  void *v13; // r8
  int Watcher; // ebx
  AudioEffectsWatcherFactory *v15; // rcx
  AudioEffectsWatcherFactory *v16; // rcx
  struct AudioEffectsWatcher *v17; // rcx
  struct AudioEffectsWatcher *v18; // rdx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  struct AudioEffectsWatcher *v22; // [rsp+40h] [rbp-40h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+48h] [rbp-38h] BYREF

  v10 = 0LL;
  v22 = 0LL;
  v11 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v13);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)Context + 1),
    v12,
    (struct _TP_TIMER *)L"s_afxOpenAudioEffectsWatcher");
  Watcher = CoInitializeEx(0LL, 0);
  if ( Watcher >= 0 )
  {
    v11 = 1;
    v10 = operator new(8uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
    {
      if ( a3 > 0xB )
      {
        Watcher = -2147024809;
      }
      else
      {
        Watcher = AudioEffectsWatcherFactory::GetWatcher(v15, a2, a3, a4, &v22);
        if ( Watcher < 0 )
        {
          v18 = v22;
        }
        else
        {
          v17 = v22;
          v18 = 0LL;
          *v10 = v22;
          *a5 = *(_OWORD *)((char *)v17 + 8);
          v16 = *(AudioEffectsWatcherFactory **)((char *)v17 + 92);
          *a6 = v16;
          *a7 = v10;
          v10 = 0LL;
          Watcher = 0;
        }
        if ( v18 )
          AudioEffectsWatcherFactory::ReleaseWatcher(v16, v18);
      }
    }
    else
    {
      Watcher = -2147024882;
    }
  }
  operator delete(v10, (const struct std::nothrow_t *)8);
  if ( v11 )
    CoUninitialize();
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)Watcher;
}
