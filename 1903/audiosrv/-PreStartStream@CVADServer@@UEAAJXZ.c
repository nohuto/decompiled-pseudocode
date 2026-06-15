/*
 * XREFs of ?PreStartStream@CVADServer@@UEAAJXZ @ 0x1800E5E70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x18001C6E0 (_TlgCreateWsz.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800D1EF0 (-reset@-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wi.c)
 */

__int64 __fastcall CVADServer::PreStartStream(CVADServer *this)
{
  void *v2; // r8
  const struct _TlgProvider_t *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  const WCHAR *v6; // rax
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 *v12; // rdi
  __int64 v13; // rbx
  int v14; // eax
  __int64 v16; // [rsp+38h] [rbp-39h] BYREF
  WINBOOL fPending; // [rsp+40h] [rbp-31h] BYREF
  int v18; // [rsp+44h] [rbp-2Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-29h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-21h] BYREF
  char v21; // [rsp+58h] [rbp-19h]
  __int64 v22; // [rsp+60h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-9h] BYREF
  __int64 *v24; // [rsp+88h] [rbp+17h]
  __int64 v25; // [rsp+90h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp+27h] BYREF
  int *v27; // [rsp+A8h] [rbp+37h]
  __int64 v28; // [rsp+B0h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 224);
  v21 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v16 = 0LL;
  if ( *((_QWORD *)this + 24) )
  {
    if ( *((_QWORD *)this + 21) )
    {
      wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(&v16);
      if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 24LL))(
             *((_QWORD *)this + 24) + 8LL,
             &v16) >= 0 )
      {
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          Context = &qword_1801B8588;
          qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0, v2);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
        }
        v3 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
        if ( *(_DWORD *)v3 > 4u )
        {
          v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 24) + 8LL) + 80LL))(*((_QWORD *)this + 24) + 8LL);
          v5 = *((_QWORD *)this + 21);
          v22 = v4;
          v24 = &v22;
          v25 = 8LL;
          v6 = (const WCHAR *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 64LL))(v5);
          TlgCreateWsz(&pDesc, v6);
          v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 40LL))(v16);
          v27 = &v18;
          v28 = 4LL;
          TlgWrite(v3, &unk_18017832F, v7, v8, 5u, &pData);
        }
      }
    }
  }
  if ( !*((_DWORD *)this + 46) )
  {
    v9 = -2004287487;
    v10 = 1912LL;
    v11 = 2290679809LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v11);
    goto LABEL_19;
  }
  if ( !*((_QWORD *)this + 21) )
  {
    v9 = -2004287487;
    v10 = 1913LL;
    v11 = 2290679809LL;
    goto LABEL_17;
  }
  if ( !*((_QWORD *)this + 24) )
  {
    v9 = -2004287487;
    v10 = 1914LL;
    v11 = 2290679809LL;
    goto LABEL_17;
  }
  v12 = (__int64 *)((char *)this + 496);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset((__int64 *)this + 62);
  v13 = *((_QWORD *)this + 24);
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_returncode_policy>::reset(v12);
  v14 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 232LL))(
          g_PolicyManager,
          (v13 + 8) & -(__int64)(v13 != 0),
          v12);
  v9 = v14;
  if ( v14 < 0 )
  {
    v11 = (unsigned int)v14;
    v10 = 1920LL;
    goto LABEL_17;
  }
  v9 = 0;
LABEL_19:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  if ( v21 )
    LeaveCriticalSection(lpCriticalSection);
  return v9;
}
