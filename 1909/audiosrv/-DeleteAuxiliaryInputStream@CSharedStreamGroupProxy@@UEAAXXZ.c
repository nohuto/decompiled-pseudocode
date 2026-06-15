/*
 * XREFs of ?DeleteAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAXXZ @ 0x18004BF20
 * Callers:
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x18004BBE8 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?attach@?$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSubmixProxy@@@Z @ 0x1800DAF2C (-attach@-$com_ptr_t@UIProcessSubmixProxy@@Uerr_returncode_policy@wil@@@wil@@QEAAXPEAUIProcessSub.c)
 */

void __fastcall CSharedStreamGroupProxy::DeleteAuxiliaryInputStream(unsigned __int64 this)
{
  void *v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rbx
  const GUID *v5; // r8
  const GUID *v6; // r9
  const struct _TlgProvider_t *v7; // rcx
  __int64 v8; // rdx
  _OWORD *v9; // rax
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  DWORD LastError; // ebx
  WINBOOL fPending[2]; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v28; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v29[1248]; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+548h] [rbp+440h] BYREF
  unsigned __int64 *v31; // [rsp+568h] [rbp+460h]
  int v32; // [rsp+570h] [rbp+468h]
  int v33; // [rsp+574h] [rbp+46Ch]

  if ( *(_QWORD *)(this + 360) )
  {
    v3 = *(_QWORD *)(this + 376);
    v27 = 0LL;
    wil::com_ptr_t<IProcessSubmixProxy,wil::err_returncode_policy>::attach(&v27, v3);
    v4 = v27;
    if ( *(_BYTE *)(this + 320) )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 48LL))(v27, *(_QWORD *)(this + 360));
      *(_BYTE *)(this + 320) = 0;
    }
    v26 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v4 + 88LL))(v4, &v26) >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v26 + 32LL))(v26, *(_QWORD *)(this + 360));
      Context = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
        && fPending[0] )
      {
        Context = &qword_1801B7588;
        qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
      }
      v7 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
      if ( *(_DWORD *)v7 > 4u )
      {
        v32 = 8;
        v31 = &v28;
        v33 = 0;
        v28 = this & -(__int64)(this != 8);
        TlgWrite(v7, &unk_1801778E0, v5, v6, 3u, &pData);
      }
    }
    memset_0(v29, 0, sizeof(v29));
    v8 = 9LL;
    v9 = (_OWORD *)(this + 328);
    v10 = v29;
    do
    {
      v11 = v10[1];
      *v9 = *v10;
      v12 = v10[2];
      v9[1] = v11;
      v13 = v10[3];
      v9[2] = v12;
      v14 = v10[4];
      v9[3] = v13;
      v15 = v10[5];
      v9[4] = v14;
      v16 = v10[6];
      v9[5] = v15;
      v17 = v10[7];
      v10 += 8;
      v9[6] = v16;
      v9 += 8;
      *(v9 - 1) = v17;
      --v8;
    }
    while ( v8 );
    v18 = v10[1];
    *v9 = *v10;
    v19 = v10[2];
    v9[1] = v18;
    v20 = v10[3];
    v9[2] = v19;
    v21 = v10[4];
    v9[3] = v20;
    v22 = v10[5];
    v9[4] = v21;
    v9[5] = v22;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
  }
  v2 = *(void **)(this + 1576);
  if ( v2 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v2);
    SetLastError(LastError);
  }
  *(_QWORD *)(this + 1576) = 0LL;
}
