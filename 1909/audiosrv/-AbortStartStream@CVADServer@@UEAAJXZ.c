/*
 * XREFs of ?AbortStartStream@CVADServer@@UEAAJXZ @ 0x1800E3FC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1AA0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 __fastcall CVADServer::AbortStartStream(CVADServer *this)
{
  void *v2; // r8
  const struct _TlgProvider_t *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  const WCHAR *v6; // rax
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v12; // [rsp+38h] [rbp-39h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-31h] BYREF
  int v14; // [rsp+44h] [rbp-2Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-21h] BYREF
  char v17; // [rsp+58h] [rbp-19h]
  __int64 v18; // [rsp+60h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  __int64 *v20; // [rsp+88h] [rbp+17h]
  __int64 v21; // [rsp+90h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+27h] BYREF
  int *v23; // [rsp+A8h] [rbp+37h]
  __int64 v24; // [rsp+B0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  v17 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v12 = 0LL;
  if ( *((_QWORD *)this + 24) )
  {
    if ( *((_QWORD *)this + 21) )
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v12);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 24LL))(
             *((_QWORD *)this + 24) + 8LL,
             &v12) >= 0 )
      {
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          Context = &qword_1801B7588;
          qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v2);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
        }
        v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
        if ( *(_DWORD *)v3 > 4u )
        {
          v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 80LL))(*((_QWORD *)this + 24) + 8LL);
          v5 = *((_QWORD *)this + 21);
          v18 = v4;
          v20 = &v18;
          v21 = 8LL;
          v6 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
          TlgCreateWsz(&pDesc, v6);
          v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 40LL))(v12);
          v23 = &v14;
          v24 = 4LL;
          TlgWrite(v3, &unk_1801772C0, v7, v8, 5u, &pData);
        }
      }
    }
  }
  if ( !*((_DWORD *)this + 46) )
  {
    v9 = 1946LL;
LABEL_15:
    v10 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    goto LABEL_17;
  }
  if ( !*((_QWORD *)this + 21) )
  {
    v9 = 1947LL;
    goto LABEL_15;
  }
  if ( !*((_QWORD *)this + 24) )
  {
    v9 = 1948LL;
    goto LABEL_15;
  }
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 62);
  v10 = 0;
LABEL_17:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v12);
  if ( v17 )
    LeaveCriticalSection(lpCriticalSection);
  return v10;
}
