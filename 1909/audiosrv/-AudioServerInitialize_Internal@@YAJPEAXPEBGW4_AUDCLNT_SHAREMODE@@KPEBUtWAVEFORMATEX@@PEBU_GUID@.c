/*
 * XREFs of ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18002AFB0
 * Callers:
 *     AudioServerInitialize @ 0x18002B5F0 (AudioServerInitialize.c)
 *     asm_AudioServerInitializeStream @ 0x1800FE2D0 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?CreateInstance@?$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z @ 0x180029750 (-CreateInstance@-$CComObject@VCVADServer@@@ATL@@SAJPEAPEAV12@@Z.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18002A4B4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18002A9D0 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18002B390 (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180049680 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dS @ 0x1800D1D2C (WPP_SF_dS.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180137588 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall AudioServerInitialize_Internal(
        void *a1,
        const unsigned __int16 *a2,
        unsigned int a3,
        int a4,
        const struct tWAVEFORMATEX *a5,
        const struct _GUID *a6,
        struct VadServerSettings *a7,
        unsigned __int16 **a8,
        struct IProcessSubmixProxy *a9,
        void **a10)
{
  __int64 v13; // rcx
  void *v14; // rbx
  __int64 v15; // rdi
  struct _TP_TIMER *ThreadpoolTimer; // r10
  LPCRITICAL_SECTION v17; // rbx
  struct CAudioThreadPool *v18; // rdi
  HANDLE OwningThread; // rdx
  CAudioDGProcess *v20; // rcx
  int v21; // edi
  DWORD v22; // eax
  void *v23; // rbx
  LPCRITICAL_SECTION v24; // rdi
  LPCRITICAL_SECTION v25; // rbx
  int v28; // eax
  __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp-98h] BYREF
  int v31; // [rsp+6Ch] [rbp-94h]
  LPVOID Context; // [rsp+70h] [rbp-90h] BYREF
  struct _FILETIME pftDueTime; // [rsp+78h] [rbp-88h] BYREF
  void *v34; // [rsp+80h] [rbp-80h] BYREF
  LPCRITICAL_SECTION v35; // [rsp+88h] [rbp-78h]
  struct IProcessSubmixProxy *v36; // [rsp+90h] [rbp-70h]
  unsigned __int16 **v37; // [rsp+98h] [rbp-68h]
  const struct _GUID *v38; // [rsp+A0h] [rbp-60h]
  const struct tWAVEFORMATEX *v39; // [rsp+A8h] [rbp-58h]
  _QWORD pv[2]; // [rsp+B0h] [rbp-50h] BYREF
  DWORD CurrentThreadId; // [rsp+C0h] [rbp-40h]
  const wchar_t *v42; // [rsp+C8h] [rbp-38h]
  void *v43; // [rsp+D0h] [rbp-30h]
  char v44; // [rsp+D8h] [rbp-28h]
  __int64 v45; // [rsp+DCh] [rbp-24h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  LPCRITICAL_SECTION v47; // [rsp+F0h] [rbp-10h]
  __int128 v48; // [rsp+F8h] [rbp-8h]
  __int128 v49; // [rsp+108h] [rbp+8h] BYREF

  v46 = -2LL;
  v31 = a4;
  v39 = a5;
  v38 = a6;
  v37 = a8;
  v36 = a9;
  v48 = *(_OWORD *)a7;
  v49 = v48;
  EtwEventActivityIdControl(4LL, &v49);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  v13 = *((_QWORD *)Context + 1);
  v14 = g_AudioHealthMonitor;
  v15 = g_AudioSrvWatchDogTimerInMs;
  pv[0] = 0LL;
  pv[1] = v13;
  CurrentThreadId = GetCurrentThreadId();
  v42 = L"AudioServerInitialize_Internal";
  v43 = v14;
  v44 = 0;
  v45 = 0LL;
  if ( (unsigned int)v15 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v15 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v15 / 3, 0);
    }
  }
  v29 = 0LL;
  v34 = 0LL;
  *a10 = 0LL;
  v17 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v47 = v17;
  if ( ++LODWORD(v17[1].DebugInfo) == 1 )
  {
    v18 = ThreadPool;
    EnterCriticalSection(v17);
    v35 = v17;
    OwningThread = v17[3].OwningThread;
    if ( OwningThread )
    {
      (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v18 + 24LL))(
        v18,
        OwningThread,
        0LL,
        0LL,
        0);
      (*(void (__fastcall **)(struct CAudioThreadPool *, HANDLE, __int64))(*(_QWORD *)v18 + 32LL))(
        v18,
        v17[3].OwningThread,
        1LL);
    }
    LeaveCriticalSection(v17);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v17);
  }
  LeaveCriticalSection(v17);
  v21 = CAudioDGProcess::CheckADGStatus(v20);
  if ( v21 >= 0 )
  {
    v21 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
            g_PolicyManager,
            a1,
            &v29);
    if ( v21 >= 0 )
    {
      v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
      if ( (unsigned int)IsProcessAllowed(v22, a2) )
      {
        v21 = ATL::CComObject<CVADServer>::CreateInstance(&v34);
        v23 = v34;
        if ( !v21 )
        {
          (*(void (__fastcall **)(void *))(*(_QWORD *)v34 + 8LL))(v34);
          v21 = (*(__int64 (__fastcall **)(void *, __int64, const unsigned __int16 *, _QWORD, int, const struct tWAVEFORMATEX *, const struct _GUID *, struct VadServerSettings *, unsigned __int16 **, struct IProcessSubmixProxy *))(*(_QWORD *)v23 + 48LL))(
                  v23,
                  v29,
                  a2,
                  a3,
                  v31,
                  v39,
                  v38,
                  a7,
                  v37,
                  v36);
          if ( v21 >= 0 )
          {
            v24 = g_ADGProcess;
            EnterCriticalSection(g_ADGProcess);
            v35 = v24;
            if ( ++LODWORD(v24[1].DebugInfo) == 1 )
            {
              CAudioDGProcess::CancelADGTerminationTimer(v24);
              CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v24);
            }
            LeaveCriticalSection(v24);
            *a10 = v23;
            (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 8LL))(v23);
            v21 = 0;
          }
        }
        if ( v23 )
          (*(void (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
      }
      else
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
        {
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 40LL))(v29);
          WPP_SF_dS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            51,
            (unsigned int)&WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids,
            v28,
            (__int64)a2);
        }
        v21 = -2147024891;
      }
    }
  }
  if ( v29 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    v29 = 0LL;
  }
  v25 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v35 = v25;
  if ( LODWORD(v25[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v25);
  LeaveCriticalSection(v25);
  if ( v21 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerInitialize_Internal", 0xB1Fu, v21);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v49);
  return (unsigned int)v21;
}
