/*
 * XREFs of ?Pause@CAudioDeviceGraph@@UEAAJXZ @ 0x14000F6A0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x14000EEC0 (_TlgKeywordOn.c)
 *     ?Stop@DurationTracker@CAudioDeviceGraph@@QEAA?AUDurationInformation@2@XZ @ 0x14000F790 (-Stop@DurationTracker@CAudioDeviceGraph@@QEAA-AUDurationInformation@2@XZ.c)
 *     _TlgWrite @ 0x140013FB4 (_TlgWrite.c)
 *     __security_check_cookie @ 0x140015A80 (__security_check_cookie.c)
 *     atexit @ 0x140016148 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     TraceLoggingRegisterEx @ 0x140025E90 (TraceLoggingRegisterEx.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140028234 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAudioDeviceGraph::Pause(CAudioDeviceGraph *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  const GUID *v7; // r9
  TLG_PENABLECALLBACK v9; // rdx
  PVOID v10; // r8
  int cData; // [rsp+28h] [rbp-49h]
  WINBOOL fPending; // [rsp+38h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v14[8]; // [rsp+48h] [rbp-29h] BYREF
  char v15; // [rsp+50h] [rbp-21h] BYREF
  char v16; // [rsp+58h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  _BYTE *v18; // [rsp+88h] [rbp+17h]
  int v19; // [rsp+90h] [rbp+1Fh]
  int v20; // [rsp+94h] [rbp+23h]
  char *v21; // [rsp+98h] [rbp+27h]
  int v22; // [rsp+A0h] [rbp+2Fh]
  int v23; // [rsp+A4h] [rbp+33h]
  char *v24; // [rsp+A8h] [rbp+37h]
  int v25; // [rsp+B0h] [rbp+3Fh]
  int v26; // [rsp+B4h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v1 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 264);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 264));
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19));
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x400,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\audiodevicegraph.cpp",
      (const char *)(unsigned int)v3,
      cData);
  }
  else
  {
    CAudioDeviceGraph::DurationTracker::Stop((char *)this + 80, v14);
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_140086EE8;
      qword_140086EE8 = (__int64)&AudioDgTelemetryProvider::`vftable';
      qword_140086F00 = (TraceLoggingHProvider)&`AudioDgTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_5306e8013c9084f1ba6b78d0c08c093f_::_lambda_invoker_cdecl_);
      qword_140086EF0 = (__int64)qword_140086F00;
      byte_140086EF8 = 1;
      TraceLoggingRegisterEx(qword_140086F00, v9, v10);
      dword_140086EFC = 1;
      (*(void (__fastcall **)(__int64 *))(qword_140086EE8 + 8))(&qword_140086EE8);
      InitOnceComplete(&`AudioDgTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_140086EE8);
    }
    v5 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 4u && TlgKeywordOn(v5, 1uLL) )
    {
      v20 = 0;
      v23 = 0;
      v26 = 0;
      v18 = v14;
      v21 = &v15;
      v24 = &v16;
      v19 = 4;
      v22 = 8;
      v25 = 8;
      TlgWrite(v6, &unk_14006FAFA, (LPCGUID)this + 22, v7, 5u, &pData);
    }
    v4 = 0;
  }
  if ( v1 )
    LeaveCriticalSection(v1);
  return v4;
}
