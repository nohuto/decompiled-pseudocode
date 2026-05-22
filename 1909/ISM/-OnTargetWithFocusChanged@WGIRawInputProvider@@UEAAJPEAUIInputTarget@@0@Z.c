/*
 * XREFs of ?OnTargetWithFocusChanged@WGIRawInputProvider@@UEAAJPEAUIInputTarget@@0@Z @ 0x18000C420
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800147E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014814 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180027B3C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x18002BC68 (atexit.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002DDA4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180052670 (-FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _TlgWrite @ 0x180053034 (_TlgWrite.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WGIRawInputProvider::OnTargetWithFocusChanged(
        WGIRawInputProvider *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  int v3; // esi
  unsigned __int32 v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rcx
  _DWORD *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rdx
  __int64 i; // r8
  __int64 v14; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int8 v17; // cl
  __int64 v18; // rcx
  const struct _TlgProvider_t *v19; // rcx
  const char *v20; // r9
  int cData; // [rsp+28h] [rbp-49h]
  unsigned __int32 v22; // [rsp+48h] [rbp-29h] BYREF
  unsigned __int32 InBuffer; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int32 v24; // [rsp+58h] [rbp-19h] BYREF
  int v25; // [rsp+5Ch] [rbp-15h] BYREF
  __int64 v26; // [rsp+60h] [rbp-11h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp-9h] BYREF
  LPVOID Context[2]; // [rsp+70h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp+Fh] BYREF
  unsigned __int32 *v30; // [rsp+A0h] [rbp+2Fh]
  __int64 v31; // [rsp+A8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  Context[1] = (LPVOID)-2LL;
  v5 = 0;
  v24 = 0;
  v25 = 0;
  if ( a3 )
  {
    v26 = 0LL;
    v6 = (**(__int64 (__fastcall ***)(struct IInputTarget *, GUID *, __int64 *))a3)(
           a3,
           &GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59,
           &v26);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB7,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)v6,
        cData);
      __debugbreak();
    }
    v7 = (*(__int64 (__fastcall **)(__int64, unsigned __int32 *))(*(_QWORD *)v26 + 32LL))(v26, &v24);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xB9,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)v7,
        cData);
      __debugbreak();
    }
    v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v26 + 72LL))(v26, &v25);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xBA,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
        (const char *)(unsigned int)v8,
        cData);
LABEL_25:
      Context[0] = qword_1801E1460;
      qword_1801E1460[0] = &RawInputProvidersContinuousTracing::`vftable';
      qword_1801E1478 = (struct _TlgProvider_t *)&`ISMTracing::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801E1460, qword_1801E1478);
      InitOnceComplete(&`ISMTracing::Instance'::`2'::wrapper, 0, qword_1801E1460);
      goto LABEL_12;
    }
    v9 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v5 = v24;
  }
  v3 = v25;
  InBuffer = v5;
  if ( !*((_BYTE *)this + 392) )
    goto LABEL_16;
  v22 = v5;
  if ( v25 )
    goto LABEL_30;
  RtlPublishWnfStateData(WNF_SHEL_FOCUS_CHANGE, 0LL, &v22, 4LL, 0LL);
  Context[0] = 0LL;
  if ( InitOnceBeginInitialize(&`ISMTracing::Instance'::`2'::wrapper, 0, &fPending, Context) && fPending )
    goto LABEL_25;
LABEL_12:
  v10 = (_DWORD *)*((_QWORD *)Context[0] + 1);
  if ( v10 )
  {
    if ( *v10 )
    {
      wil::details::static_lazy<ISMTracing>::get(v10, lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      if ( ISMTracing::IsEnabled(v17, v16) )
      {
        v19 = *(const struct _TlgProvider_t **)(wil::details::static_lazy<ISMTracing>::get(
                                                  v18,
                                                  lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_)
                                              + 8);
        if ( *(_DWORD *)v19 > 4u )
        {
          v30 = &v22;
          v31 = 4LL;
          TlgWrite(v19, &unk_18019D0B8, 0LL, 0LL, 3u, &pData);
        }
      }
    }
  }
  if ( !*((_DWORD *)this + 100) )
    goto LABEL_15;
  v22 = 0;
LABEL_30:
  RtlPublishWnfStateData(WNF_SHEL_GAMECONTROLLER_FOCUS_INFO, 0LL, &v22, 4LL, 0LL);
LABEL_15:
  v11 = (void *)*((_QWORD *)this + 7);
  if ( v11 != (void *)-1LL && !DeviceIoControl(v11, 0x40001C28u, &InBuffer, 4u, 0LL, 0, 0LL, 0LL) )
  {
    wil::details::in1diag3::FailFast_GetLastError(
      retaddr,
      (void *)0x17C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgirawinputprovider.cpp",
      v20);
    __debugbreak();
  }
LABEL_16:
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v12 = *((_QWORD *)this + 11);
  for ( i = *((_QWORD *)this + 12); v12 != i; v12 += 8LL )
    _InterlockedExchange((volatile __int32 *)(*(_QWORD *)v12 + 172LL), InBuffer);
  if ( this != (WGIRawInputProvider *)-112LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  v14 = *((_QWORD *)this + 5);
  if ( v14 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 48LL))(v14, InBuffer);
  *((_DWORD *)this + 99) = InBuffer;
  *((_DWORD *)this + 100) = v3;
  return 0LL;
}
