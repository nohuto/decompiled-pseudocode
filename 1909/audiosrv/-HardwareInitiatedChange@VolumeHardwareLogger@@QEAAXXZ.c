/*
 * XREFs of ?HardwareInitiatedChange@VolumeHardwareLogger@@QEAAXXZ @ 0x1800C5624
 * Callers:
 *     ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x1800C67B0 (-OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?CurrentVolumeLevel@VolumeHardwareLogger@@AEAA?AUVolumeLevel@1@XZ @ 0x18005AE80 (-CurrentVolumeLevel@VolumeHardwareLogger@@AEAA-AUVolumeLevel@1@XZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ?ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ @ 0x1800C6F38 (-ScheduleTimer@VolumeHardwareLogger@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::HardwareInitiatedChange(VolumeHardwareLogger *this)
{
  LARGE_INTEGER v2; // rax
  int v3; // eax
  void *v4; // r8
  LPCGUID v5; // r8
  TraceLoggingHProvider v6; // r9
  __int64 v7; // [rsp+38h] [rbp-D0h] BYREF
  int v8; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-C0h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v12; // [rsp+60h] [rbp-A8h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+88h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+98h] [rbp-70h] BYREF
  WINBOOL *v16; // [rsp+A8h] [rbp-60h]
  int v17; // [rsp+B0h] [rbp-58h]
  int v18; // [rsp+B4h] [rbp-54h]
  char *v19; // [rsp+B8h] [rbp-50h]
  int v20; // [rsp+C0h] [rbp-48h]
  int v21; // [rsp+C4h] [rbp-44h]
  char *v22; // [rsp+C8h] [rbp-40h]
  int v23; // [rsp+D0h] [rbp-38h]
  int v24; // [rsp+D4h] [rbp-34h]
  char *v25; // [rsp+D8h] [rbp-30h]
  int v26; // [rsp+E0h] [rbp-28h]
  int v27; // [rsp+E4h] [rbp-24h]
  __int64 *v28; // [rsp+E8h] [rbp-20h]
  int v29; // [rsp+F0h] [rbp-18h]
  int v30; // [rsp+F4h] [rbp-14h]
  char *v31; // [rsp+F8h] [rbp-10h]
  int v32; // [rsp+100h] [rbp-8h]
  int v33; // [rsp+104h] [rbp-4h]
  int *v34; // [rsp+108h] [rbp+0h]
  int v35; // [rsp+110h] [rbp+8h]
  int v36; // [rsp+114h] [rbp+Ch]

  v12 = -2LL;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  PerformanceCount.QuadPart = (LONGLONG)this;
  if ( !*((_QWORD *)this + 8) )
    goto LABEL_15;
  VolumeHardwareLogger::CurrentVolumeLevel((__int64)this, (float *)&v7);
  if ( v8 == *((_DWORD *)this + 21) )
    goto LABEL_15;
  PerformanceCount.QuadPart = 0LL;
  QueryPerformanceCounter(&PerformanceCount);
  ++*((_DWORD *)this + 25);
  v2 = PerformanceCount;
  *((LARGE_INTEGER *)this + 17) = PerformanceCount;
  if ( *((_DWORD *)this + 25) == 1 )
  {
    *((LARGE_INTEGER *)this + 13) = v2;
    *((_QWORD *)this + 14) = v7;
    v3 = v8;
    *((_DWORD *)this + 30) = v8;
  }
  else
  {
    v3 = v8;
    if ( v8 < *((_DWORD *)this + 30) )
    {
      *((_QWORD *)this + 14) = v7;
      *((_DWORD *)this + 30) = v3;
    }
    if ( v3 <= *((_DWORD *)this + 33) )
      goto LABEL_9;
  }
  *(_QWORD *)((char *)this + 124) = v7;
  *((_DWORD *)this + 33) = v3;
LABEL_9:
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
  if ( **((_DWORD **)Context + 1) > 5u )
  {
    TlgCreateWsz(&pDesc, *(LPCWSTR *)(*((_QWORD *)this + 8) + 64LL));
    TlgCreateWsz(&v15, *(LPCWSTR *)(*((_QWORD *)this + 8) + 72LL));
    fPending[1] = *(_DWORD *)(*((_QWORD *)this + 8) + 80LL);
    v16 = &fPending[1];
    v17 = 4;
    v18 = 0;
    v19 = (char *)this + 72;
    v20 = 4;
    v21 = 0;
    v22 = (char *)this + 76;
    v23 = 4;
    v24 = 0;
    v25 = (char *)this + 80;
    v26 = 4;
    v27 = 0;
    v28 = &v7;
    v29 = 4;
    v30 = 0;
    v31 = (char *)&v7 + 4;
    v32 = 4;
    v33 = 0;
    v34 = &v8;
    v35 = 4;
    v36 = 0;
    TlgWrite(v6, &unk_180176BDD, v5, (LPCGUID)v6, 0xBu, &pData);
  }
  *((_DWORD *)this + 21) = v8;
  VolumeHardwareLogger::ScheduleTimer(this);
LABEL_15:
  if ( this )
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
}
