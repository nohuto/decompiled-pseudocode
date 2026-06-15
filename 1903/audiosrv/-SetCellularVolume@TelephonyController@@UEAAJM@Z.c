/*
 * XREFs of ?SetCellularVolume@TelephonyController@@UEAAJM@Z @ 0x18014B870
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     ?SetVolumeOnKsTopology@@YAJAEBU_GUID@@KPEAUIKsControl@@PEAUKSPROPERTY_STEPPING_LONG@@M@Z @ 0x18014B9D0 (-SetVolumeOnKsTopology@@YAJAEBU_GUID@@KPEAUIKsControl@@PEAUKSPROPERTY_STEPPING_LONG@@M@Z.c)
 */

__int64 __fastcall TelephonyController::SetCellularVolume(TelephonyController *this, float a2)
{
  unsigned int v3; // edx
  const GUID *v4; // r8
  const GUID *v5; // r9
  void *v6; // r8
  const struct _TlgProvider_t *v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  WINBOOL fPending; // [rsp+30h] [rbp-50h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-40h] BYREF
  int *v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+68h] [rbp-18h]
  int v16; // [rsp+6Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]
  int v18; // [rsp+98h] [rbp+18h] BYREF

  v18 = LODWORD(a2);
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v6);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 4u )
  {
    v16 = 0;
    v14 = &v18;
    v15 = 4;
    TlgWrite(v7, &unk_18017D633, v4, v5, 3u, &pData);
  }
  v8 = SetVolumeOnKsTopology(
         (const struct _GUID *)((char *)this + 200),
         v3,
         *((struct IKsControl **)this + 24),
         (struct KSPROPERTY_STEPPING_LONG *)(((unsigned __int64)this + 200) & -(__int64)(*((_DWORD *)this + 54) != 0)),
         *(float *)&v18);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x276,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\telephonycontrol\\device\\telephonycontroller.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
