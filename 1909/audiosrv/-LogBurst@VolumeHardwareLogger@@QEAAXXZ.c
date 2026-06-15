/*
 * XREFs of ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1800C63E8
 * Callers:
 *     ?ProviderFinalRelease@CVolumeHardware@@UEAAXXZ @ 0x1800C6B60 (-ProviderFinalRelease@CVolumeHardware@@UEAAXXZ.c)
 *     ?TimerCallback@VolumeHardwareLogger@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800C7C50 (-TimerCallback@VolumeHardwareLogger@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001E08C (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x18005AE80 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ?ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ @ 0x1800C6F38 (-ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::LogBurst(struct _RTL_CRITICAL_SECTION *this)
{
  HANDLE OwningThread; // rcx
  double DebugInfo; // xmm1_8
  void *v4; // r8
  __int64 v5; // r10
  LPCGUID v6; // r8
  TraceLoggingHProvider v7; // r9
  LPVOID Context; // [rsp+38h] [rbp-D0h] BYREF
  WINBOOL fPending[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-B0h] BYREF
  double v13[3]; // [rsp+60h] [rbp-A8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+A8h] [rbp-60h] BYREF
  WINBOOL *v17; // [rsp+B8h] [rbp-50h]
  __int64 v18; // [rsp+C0h] [rbp-48h]
  ULONG_PTR *p_SpinCount; // [rsp+C8h] [rbp-40h]
  __int64 v20; // [rsp+D0h] [rbp-38h]
  char *v21; // [rsp+D8h] [rbp-30h]
  __int64 v22; // [rsp+E0h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+E8h] [rbp-20h]
  __int64 v24; // [rsp+F0h] [rbp-18h]
  double *v25; // [rsp+F8h] [rbp-10h]
  __int64 v26; // [rsp+100h] [rbp-8h]
  char *v27; // [rsp+108h] [rbp+0h]
  __int64 v28; // [rsp+110h] [rbp+8h]
  __int64 *v29; // [rsp+118h] [rbp+10h]
  __int64 v30; // [rsp+120h] [rbp+18h]
  char *v31; // [rsp+128h] [rbp+20h]
  __int64 v32; // [rsp+130h] [rbp+28h]
  __int64 *v33; // [rsp+138h] [rbp+30h]
  __int64 v34; // [rsp+140h] [rbp+38h]
  LONG *p_LockCount; // [rsp+148h] [rbp+40h]
  __int64 v36; // [rsp+150h] [rbp+48h]
  LONG *p_RecursionCount; // [rsp+158h] [rbp+50h]
  __int64 v38; // [rsp+160h] [rbp+58h]
  HANDLE *p_OwningThread; // [rsp+168h] [rbp+60h]
  __int64 v40; // [rsp+170h] [rbp+68h]
  ULONG_PTR *v41; // [rsp+178h] [rbp+70h]
  __int64 v42; // [rsp+180h] [rbp+78h]
  char *v43; // [rsp+188h] [rbp+80h]
  __int64 v44; // [rsp+190h] [rbp+88h]
  struct _RTL_CRITICAL_SECTION *v45; // [rsp+198h] [rbp+90h]
  __int64 v46; // [rsp+1A0h] [rbp+98h]
  char *v47; // [rsp+1A8h] [rbp+A0h]
  __int64 v48; // [rsp+1B0h] [rbp+A8h]
  LONG *v49; // [rsp+1B8h] [rbp+B0h]
  __int64 v50; // [rsp+1C0h] [rbp+B8h]
  LONG *v51; // [rsp+1C8h] [rbp+C0h]
  __int64 v52; // [rsp+1D0h] [rbp+C8h]

  v13[1] = NAN;
  EnterCriticalSection(this);
  Context = this;
  if ( this[1].LockSemaphore && (__int64)this[1].DebugInfo > 0 && SHIDWORD(this[2].OwningThread) > 0 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    OwningThread = this[3].OwningThread;
    DebugInfo = (double)(int)this[1].DebugInfo;
    if ( LOBYTE(this[1].OwningThread) || (double)(PerformanceCount.LowPart - (int)OwningThread) / DebugInfo >= 30.0 )
    {
      v13[0] = (double)((int)OwningThread - LODWORD(this[2].LockSemaphore)) / DebugInfo;
      VolumeHardwareLogger::CurrentVolumeLevel((__int64)this, (float *)&v10);
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
        && fPending[0] )
      {
        Context = &qword_1801B7588;
        qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v4);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
      }
      if ( **((_DWORD **)Context + 1) > 4u && TlgKeywordOn(*((TraceLoggingHProvider *)Context + 1), 0x400000000000uLL) )
      {
        TlgCreateWsz(&pDesc, *((LPCWSTR *)this[1].LockSemaphore + 8));
        TlgCreateWsz(&v16, *((LPCWSTR *)this[1].LockSemaphore + 9));
        fPending[1] = *((_DWORD *)this[1].LockSemaphore + 20);
        v17 = &fPending[1];
        v18 = v5;
        p_SpinCount = &this[1].SpinCount;
        v20 = v5;
        v21 = (char *)&this[1].SpinCount + 4;
        v22 = v5;
        v23 = this + 2;
        v24 = v5;
        v25 = v13;
        v26 = 8LL;
        v27 = (char *)&this[2].OwningThread + 4;
        v28 = v5;
        v29 = &v10;
        v30 = v5;
        v31 = (char *)&v10 + 4;
        v32 = v5;
        v33 = &v11;
        v34 = v5;
        p_LockCount = &this[2].LockCount;
        v36 = v5;
        p_RecursionCount = &this[2].RecursionCount;
        v38 = v5;
        p_OwningThread = &this[2].OwningThread;
        v40 = v5;
        v41 = &this[2].SpinCount;
        v42 = v5;
        v43 = (char *)&this[2].SpinCount + 4;
        v44 = v5;
        v45 = this + 3;
        v46 = v5;
        v47 = (char *)&this[3].DebugInfo + 4;
        v48 = v5;
        v49 = &this[3].LockCount;
        v50 = v5;
        v51 = &this[3].RecursionCount;
        v52 = v5;
        TlgWrite(v7, &unk_180176A43, v6, (LPCGUID)v7, 0x16u, &pData);
      }
      HIDWORD(this[2].OwningThread) = 0;
      *(_QWORD *)&this[2].LockCount = v10;
      LODWORD(this[2].OwningThread) = v11;
    }
    else
    {
      VolumeHardwareLogger::ScheduleTimer((VolumeHardwareLogger *)this);
    }
  }
  if ( this )
    LeaveCriticalSection(this);
}
