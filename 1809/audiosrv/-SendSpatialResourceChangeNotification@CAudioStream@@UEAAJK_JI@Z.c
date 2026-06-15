/*
 * XREFs of ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800CC4C0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1800524AC (-StringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180060C94 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::SendSpatialResourceChangeNotification(CAudioStream *this, int a2, __int64 a3, int a4)
{
  void *v6; // r8
  const struct _TlgProvider_t *v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  LPCGUID v10; // r8
  LPCGUID v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // edi
  unsigned int v15; // r14d
  char *v16; // rax
  void *v17; // rbx
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r9
  int MediaEvent; // eax
  unsigned int v22; // eax
  __int64 v23; // r8
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  int v26; // [rsp+3Ch] [rbp-45h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  char *v29; // [rsp+68h] [rbp-19h]
  int v30; // [rsp+70h] [rbp-11h]
  int v31; // [rsp+74h] [rbp-Dh]
  __int64 *v32; // [rsp+78h] [rbp-9h]
  int v33; // [rsp+80h] [rbp-1h]
  int v34; // [rsp+84h] [rbp+3h]
  int *v35; // [rsp+88h] [rbp+7h]
  int v36; // [rsp+90h] [rbp+Fh]
  int v37; // [rsp+94h] [rbp+13h]
  int *v38; // [rsp+98h] [rbp+17h]
  int v39; // [rsp+A0h] [rbp+1Fh]
  int v40; // [rsp+A4h] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  __int64 v42; // [rsp+F8h] [rbp+77h] BYREF
  int v43; // [rsp+100h] [rbp+7Fh] BYREF

  v43 = a4;
  v42 = a3;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v6);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v7 > 4u )
  {
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v29 = (char *)this + 312;
    v32 = &v42;
    v30 = 8;
    v33 = 8;
    v8 = *((_QWORD *)this + 8);
    v35 = &v43;
    v36 = 4;
    v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 40LL))(v8);
    v40 = 0;
    v26 = v9;
    v38 = &v26;
    v39 = 4;
    TlgWrite(v7, &unk_180172A61, v10, v11, 6u, &pData);
  }
  v12 = *((_QWORD *)this + 7);
  if ( !v12 )
    return 0LL;
  v13 = *(_QWORD *)(v12 + 768);
  v14 = 2 * *(_DWORD *)(v13 - 16) + 2;
  v15 = 2 * *(_DWORD *)(v13 - 16) + 74;
  v16 = (char *)operator new[](v15, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v16;
  if ( v16 )
  {
    *(_DWORD *)v16 = v15;
    *(GUID *)(v16 + 28) = GUID_00000000_0000_0000_0000_000000000000;
    *((_DWORD *)v16 + 1) = 0x20000;
    *((_DWORD *)v16 + 6) = v14;
    *((_QWORD *)v16 + 6) = *((_QWORD *)this + 39);
    *((_QWORD *)v16 + 7) = v42;
    *((_DWORD *)v16 + 16) = v43;
    *((_DWORD *)v16 + 17) = a2;
    MediaEvent = StringCbCopyW(v16 + 72, v14, *(char **)(*((_QWORD *)this + 7) + 768LL));
    v18 = MediaEvent;
    if ( MediaEvent < 0 )
    {
      v19 = 1801LL;
LABEL_13:
      v20 = (unsigned int)MediaEvent;
      goto LABEL_14;
    }
    v22 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 40LL))(*((_QWORD *)this + 8));
    MediaEvent = GenerateMediaEvent(v17, v22, v23);
    v18 = MediaEvent;
    if ( MediaEvent < 0 )
    {
      v19 = 1806LL;
      goto LABEL_13;
    }
    operator delete(v17, (const struct std::nothrow_t *)0x50);
    return 0LL;
  }
  v18 = -2147024882;
  v19 = 1782LL;
  v20 = 2147942414LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v19,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)v20);
  if ( v17 )
    operator delete(v17, (const struct std::nothrow_t *)0x50);
  return v18;
}
