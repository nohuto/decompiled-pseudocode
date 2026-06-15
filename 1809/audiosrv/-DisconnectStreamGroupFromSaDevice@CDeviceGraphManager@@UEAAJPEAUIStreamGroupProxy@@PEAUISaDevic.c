/*
 * XREFs of ?DisconnectStreamGroupFromSaDevice@CDeviceGraphManager@@UEAAJPEAUIStreamGroupProxy@@PEAUISaDeviceProxy@@@Z @ 0x1800E3930
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceGraphManager::DisconnectStreamGroupFromSaDevice(
        CDeviceGraphManager *this,
        struct IStreamGroupProxy *a2,
        struct ISaDeviceProxy *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  const GUID *v8; // r8
  const GUID *v9; // r9
  void *v10; // r8
  const struct _TlgProvider_t *v11; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-11h] BYREF
  struct IStreamGroupProxy *v14; // [rsp+48h] [rbp-9h] BYREF
  struct ISaDeviceProxy *v15; // [rsp+50h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  struct IStreamGroupProxy **v17; // [rsp+78h] [rbp+27h]
  int v18; // [rsp+80h] [rbp+2Fh]
  int v19; // [rsp+84h] [rbp+33h]
  struct ISaDeviceProxy **v20; // [rsp+88h] [rbp+37h]
  int v21; // [rsp+90h] [rbp+3Fh]
  int v22; // [rsp+94h] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v5 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 192LL))(a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = qword_1801B3518;
      qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v10);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
    }
    v11 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
    if ( *(_DWORD *)v11 > 4u )
    {
      v19 = 0;
      v22 = 0;
      v17 = &v14;
      v20 = &v15;
      v14 = a2;
      v18 = 8;
      v15 = a3;
      v21 = 8;
      TlgWrite(v11, &unk_18017354E, v8, v9, 4u, &pData);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      2121LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
