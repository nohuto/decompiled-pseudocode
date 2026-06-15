/*
 * XREFs of ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1800B8078
 * Callers:
 *     ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x1800B87F0 (-ProviderFinalRelease@CVolumeHardware@@UEAAXXZ.c)
 *     ?TimerCallback@VolumeHardwareLogger@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800B98E0 (-TimerCallback@VolumeHardwareLogger@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800255F0 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x18005AD94 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ?ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ @ 0x1800B8BC8 (-ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::LogBurst(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE OwningThread; // rcx
  double DebugInfo; // xmm1_8
  void *v4; // r8
  __int64 v5; // r11
  LPCGUID v6; // r8
  LPCGUID v7; // r9
  TraceLoggingHProvider v8; // r10
  LPVOID Context; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-B0h] BYREF
  double v14[3]; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+A8h] [rbp-60h] BYREF
  WINBOOL *v18; // [rsp+B8h] [rbp-50h]
  __int64 v19; // [rsp+C0h] [rbp-48h]
  ULONG_PTR *p_SpinCount; // [rsp+C8h] [rbp-40h]
  __int64 v21; // [rsp+D0h] [rbp-38h]
  char *v22; // [rsp+D8h] [rbp-30h]
  __int64 v23; // [rsp+E0h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v24; // [rsp+E8h] [rbp-20h]
  __int64 v25; // [rsp+F0h] [rbp-18h]
  double *v26; // [rsp+F8h] [rbp-10h]
  __int64 v27; // [rsp+100h] [rbp-8h]
  char *v28; // [rsp+108h] [rbp+0h]
  __int64 v29; // [rsp+110h] [rbp+8h]
  __int64 *v30; // [rsp+118h] [rbp+10h]
  __int64 v31; // [rsp+120h] [rbp+18h]
  char *v32; // [rsp+128h] [rbp+20h]
  __int64 v33; // [rsp+130h] [rbp+28h]
  __int64 *v34; // [rsp+138h] [rbp+30h]
  __int64 v35; // [rsp+140h] [rbp+38h]
  LONG *p_LockCount; // [rsp+148h] [rbp+40h]
  __int64 v37; // [rsp+150h] [rbp+48h]
  LONG *p_RecursionCount; // [rsp+158h] [rbp+50h]
  __int64 v39; // [rsp+160h] [rbp+58h]
  HANDLE *p_OwningThread; // [rsp+168h] [rbp+60h]
  __int64 v41; // [rsp+170h] [rbp+68h]
  ULONG_PTR *v42; // [rsp+178h] [rbp+70h]
  __int64 v43; // [rsp+180h] [rbp+78h]
  char *v44; // [rsp+188h] [rbp+80h]
  __int64 v45; // [rsp+190h] [rbp+88h]
  struct _RTL_CRITICAL_SECTION *v46; // [rsp+198h] [rbp+90h]
  __int64 v47; // [rsp+1A0h] [rbp+98h]
  char *v48; // [rsp+1A8h] [rbp+A0h]
  __int64 v49; // [rsp+1B0h] [rbp+A8h]
  LONG *v50; // [rsp+1B8h] [rbp+B0h]
  __int64 v51; // [rsp+1C0h] [rbp+B8h]
  LONG *v52; // [rsp+1C8h] [rbp+C0h]
  __int64 v53; // [rsp+1D0h] [rbp+C8h]

  v14[1] = NAN;
  EnterCriticalSection(this);
  Context = this;
  if ( this[1].LockSemaphore && (__int64)this[1].DebugInfo > 0 && SHIDWORD(this[2].OwningThread) > 0 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    OwningThread = this[3].OwningThread;
    DebugInfo = (double)(int)this[1].DebugInfo;
    if ( LOBYTE(this[1].OwningThread) || (double)(PerformanceCount.LowPart - (int)OwningThread) / DebugInfo >= 30.0 )
    {
      v14[0] = (double)((int)OwningThread - LODWORD(this[2].LockSemaphore)) / DebugInfo;
      VolumeHardwareLogger::CurrentVolumeLevel((__int64)this, (float *)&v11);
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
        && fPending[0] )
      {
        Context = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v4);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      if ( **((_DWORD **)Context + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
      {
        TlgCreateWsz(&pDesc, *((LPCWSTR *)this[1].LockSemaphore + 8));
        TlgCreateWsz(&v17, *((LPCWSTR *)this[1].LockSemaphore + 9));
        fPending[1] = *((_DWORD *)this[1].LockSemaphore + 20);
        v18 = &fPending[1];
        v19 = v5;
        p_SpinCount = &this[1].SpinCount;
        v21 = v5;
        v22 = (char *)&this[1].SpinCount + 4;
        v23 = v5;
        v24 = this + 2;
        v25 = v5;
        v26 = v14;
        v27 = 8LL;
        v28 = (char *)&this[2].OwningThread + 4;
        v29 = v5;
        v30 = &v11;
        v31 = v5;
        v32 = (char *)&v11 + 4;
        v33 = v5;
        v34 = &v12;
        v35 = v5;
        p_LockCount = &this[2].LockCount;
        v37 = v5;
        p_RecursionCount = &this[2].RecursionCount;
        v39 = v5;
        p_OwningThread = &this[2].OwningThread;
        v41 = v5;
        v42 = &this[2].SpinCount;
        v43 = v5;
        v44 = (char *)&this[2].SpinCount + 4;
        v45 = v5;
        v46 = this + 3;
        v47 = v5;
        v48 = (char *)&this[3].DebugInfo + 4;
        v49 = v5;
        v50 = &this[3].LockCount;
        v51 = v5;
        v52 = &this[3].RecursionCount;
        v53 = v5;
        TlgWrite(v8, &unk_18017270B, v6, v7, 0x16u, &pData);
      }
      HIDWORD(this[2].OwningThread) = 0;
      *(_QWORD *)&this[2].LockCount = v11;
      LODWORD(this[2].OwningThread) = v12;
    }
    else
    {
      VolumeHardwareLogger::ScheduleTimer((VolumeHardwareLogger *)this);
    }
  }
  if ( this )
    LeaveCriticalSection(this);
}
