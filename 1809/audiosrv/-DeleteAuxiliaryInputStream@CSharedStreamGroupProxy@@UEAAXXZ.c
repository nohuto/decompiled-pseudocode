/*
 * XREFs of ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x180048010
 * Callers:
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180047ED0 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?attach@?$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z @ 0x1800CCDD4 (-attach@-$com_ptr_t@UISubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUISubmixProxy@@@Z.c)
 */

void __fastcall CSharedStreamGroupProxy::DeleteAuxiliaryInputStream(unsigned __int64 this)
{
  void *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rbx
  const GUID *v5; // r8
  const GUID *v6; // r9
  const struct _TlgProvider_t *v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  DWORD LastError; // ebx
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-41h] BYREF
  __int64 v16; // [rsp+48h] [rbp-39h] BYREF
  __int64 v17; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+68h] [rbp-19h] BYREF
  __int128 v20; // [rsp+78h] [rbp-9h]
  __int128 v21; // [rsp+88h] [rbp+7h]
  __int128 v22; // [rsp+98h] [rbp+17h]
  __int128 v23; // [rsp+A8h] [rbp+27h]
  __int128 v24; // [rsp+B8h] [rbp+37h]

  if ( *(_QWORD *)(this + 376) )
  {
    v3 = *(_QWORD *)(this + 392);
    v17 = 0LL;
    wil::com_ptr_t<ISubmixProxy,wil::err_returncode_policy>::attach(&v17, v3);
    v4 = v17;
    if ( *(_BYTE *)(this + 320) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 48LL))(v17, *(_QWORD *)(this + 376));
      *(_BYTE *)(this + 320) = 0;
    }
    v16 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 88LL))(v4, &v16) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 32LL))(v16, *(_QWORD *)(this + 376));
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
        && fPending )
      {
        Context = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v7 > 4u )
      {
        *((_QWORD *)&v21 + 1) = 8LL;
        *(_QWORD *)&v21 = &v18;
        v18 = this & -(__int64)(this != 8);
        TlgWrite(v7, &unk_1801737FB, v5, v6, 3u, &pData);
      }
    }
    memset_0(&pData, 0, 0x60uLL);
    v8 = v20;
    *(EVENT_DATA_DESCRIPTOR *)(this + 328) = pData;
    v9 = v21;
    *(_OWORD *)(this + 344) = v8;
    v10 = v22;
    *(_OWORD *)(this + 360) = v9;
    v11 = v23;
    *(_OWORD *)(this + 376) = v10;
    v12 = v24;
    *(_OWORD *)(this + 392) = v11;
    *(_OWORD *)(this + 408) = v12;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v17);
  }
  v2 = *(void **)(this + 424);
  if ( v2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v2);
    SetLastError(LastError);
  }
  *(_QWORD *)(this + 424) = 0LL;
}
