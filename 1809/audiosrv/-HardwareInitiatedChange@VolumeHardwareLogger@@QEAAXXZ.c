/*
 * XREFs of ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x1800B73A4
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x1800B8440 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x18005AD94 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ?ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ @ 0x1800B8BC8 (-ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::HardwareInitiatedChange(VolumeHardwareLogger *this)
{
  LARGE_INTEGER v2; // rax
  int v3; // eax
  void *v4; // r8
  LPCGUID v5; // r8
  LPCGUID v6; // r9
  TraceLoggingHProvider v7; // r10
  __int64 v8; // [rsp+38h] [rbp-D0h] BYREF
  int v9; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+98h] [rbp-70h] BYREF
  WINBOOL *v17; // [rsp+A8h] [rbp-60h]
  int v18; // [rsp+B0h] [rbp-58h]
  int v19; // [rsp+B4h] [rbp-54h]
  char *v20; // [rsp+B8h] [rbp-50h]
  int v21; // [rsp+C0h] [rbp-48h]
  int v22; // [rsp+C4h] [rbp-44h]
  char *v23; // [rsp+C8h] [rbp-40h]
  int v24; // [rsp+D0h] [rbp-38h]
  int v25; // [rsp+D4h] [rbp-34h]
  char *v26; // [rsp+D8h] [rbp-30h]
  int v27; // [rsp+E0h] [rbp-28h]
  int v28; // [rsp+E4h] [rbp-24h]
  __int64 *v29; // [rsp+E8h] [rbp-20h]
  int v30; // [rsp+F0h] [rbp-18h]
  int v31; // [rsp+F4h] [rbp-14h]
  char *v32; // [rsp+F8h] [rbp-10h]
  int v33; // [rsp+100h] [rbp-8h]
  int v34; // [rsp+104h] [rbp-4h]
  int *v35; // [rsp+108h] [rbp+0h]
  int v36; // [rsp+110h] [rbp+8h]
  int v37; // [rsp+114h] [rbp+Ch]

  v13 = -2LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  PerformanceCount.QuadPart = (LONGLONG)this;
  if ( !*((_QWORD *)this + 8) )
    goto LABEL_15;
  VolumeHardwareLogger::CurrentVolumeLevel((__int64)this, (float *)&v8);
  if ( v9 == *((_DWORD *)this + 21) )
    goto LABEL_15;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  ++*((_DWORD *)this + 25);
  v2 = PerformanceCount;
  *((LARGE_INTEGER *)this + 17) = PerformanceCount;
  if ( *((_DWORD *)this + 25) == 1 )
  {
    *((LARGE_INTEGER *)this + 13) = v2;
    *((_QWORD *)this + 14) = v8;
    v3 = v9;
    *((_DWORD *)this + 30) = v9;
  }
  else
  {
    v3 = v9;
    if ( v9 < *((_DWORD *)this + 30) )
    {
      *((_QWORD *)this + 14) = v8;
      *((_DWORD *)this + 30) = v3;
    }
    if ( v3 <= *((_DWORD *)this + 33) )
      goto LABEL_9;
  }
  *(_QWORD *)((char *)this + 124) = v8;
  *((_DWORD *)this + 33) = v3;
LABEL_9:
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
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, *(LPCWSTR *)(*((_QWORD *)this + 8) + 64LL));
    TlgCreateWsz(&v16, *(LPCWSTR *)(*((_QWORD *)this + 8) + 72LL));
    fPending[1] = *(_DWORD *)(*((_QWORD *)this + 8) + 80LL);
    v17 = &fPending[1];
    v18 = 4;
    v19 = 0;
    v20 = (char *)this + 72;
    v21 = 4;
    v22 = 0;
    v23 = (char *)this + 76;
    v24 = 4;
    v25 = 0;
    v26 = (char *)this + 80;
    v27 = 4;
    v28 = 0;
    v29 = &v8;
    v30 = 4;
    v31 = 0;
    v32 = (char *)&v8 + 4;
    v33 = 4;
    v34 = 0;
    v35 = &v9;
    v36 = 4;
    v37 = 0;
    TlgWrite(v7, &unk_1801728A5, v5, v6, 0xBu, &pData);
  }
  *((_DWORD *)this + 21) = v9;
  VolumeHardwareLogger::ScheduleTimer(this);
LABEL_15:
  if ( this )
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
}
