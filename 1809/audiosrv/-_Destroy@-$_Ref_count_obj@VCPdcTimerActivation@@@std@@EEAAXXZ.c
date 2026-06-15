/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x180040DC0
 * Callers:
 *     <none>
 * Callees:
 *     Pdcv2ActivationClientDeactivate @ 0x180040FB0 (Pdcv2ActivationClientDeactivate.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     memmove_0 @ 0x1800688AF (memmove_0.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Ref_count_obj<CPdcTimerActivation>::_Destroy(_QWORD *a1)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  int v4; // eax
  char *v5; // r8
  char *v6; // rcx
  int v7; // eax
  void *v8; // rcx
  __int64 v9; // r10
  WINBOOL fPending; // [rsp+38h] [rbp-69h] BYREF
  int v11; // [rsp+3Ch] [rbp-65h] BYREF
  int v12; // [rsp+40h] [rbp-61h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-59h] BYREF
  __int64 v14; // [rsp+50h] [rbp-51h] BYREF
  __int64 v15; // [rsp+58h] [rbp-49h] BYREF
  _DWORD v16[2]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v17; // [rsp+68h] [rbp-39h]
  __int64 v18; // [rsp+70h] [rbp-31h]
  unsigned __int16 *v19; // [rsp+78h] [rbp-29h] BYREF
  int v20; // [rsp+80h] [rbp-21h]
  int v21; // [rsp+84h] [rbp-1Dh]
  void *v22; // [rsp+88h] [rbp-19h]
  int v23; // [rsp+90h] [rbp-11h]
  int v24; // [rsp+94h] [rbp-Dh]
  __int64 *v25; // [rsp+98h] [rbp-9h]
  __int64 v26; // [rsp+A0h] [rbp-1h]
  int *v27; // [rsp+A8h] [rbp+7h]
  __int64 v28; // [rsp+B0h] [rbp+Fh]
  __int64 *v29; // [rsp+B8h] [rbp+17h]
  __int64 v30; // [rsp+C0h] [rbp+1Fh]
  int *v31; // [rsp+C8h] [rbp+27h]
  __int64 v32; // [rsp+D0h] [rbp+2Fh]

  v18 = -2LL;
  v2 = a1[4];
  v3 = a1[3];
  v4 = _Mtx_lock((_Mtx_t)(v3 + 32));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = *(char **)(v3 + 16);
  v6 = *(char **)(v3 + 8);
  if ( v6 != v5 )
  {
    do
    {
      if ( *(_QWORD *)v6 == v2 )
        break;
      v6 += 8;
    }
    while ( v6 != v5 );
    if ( v6 != v5 )
    {
      memmove_0(v6, v6 + 8, v5 - (v6 + 8));
      *(_QWORD *)(v3 + 16) -= 8LL;
    }
  }
  v7 = _Mtx_unlock((_Mtx_t)(v3 + 32));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = (void *)a1[2];
  if ( v8 )
  {
    v12 = Pdcv2ActivationClientDeactivate(v8);
    a1[2] = 0LL;
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
    v9 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v9 > 4u )
    {
      v14 = a1[4];
      v25 = &v14;
      v26 = 8LL;
      v11 = *(_DWORD *)(v14 + 64);
      v27 = &v11;
      v28 = 4LL;
      v15 = *(_QWORD *)(v14 + 504);
      v29 = &v15;
      v30 = 8LL;
      v31 = &v12;
      v32 = 4LL;
      v16[0] = ((unsigned int)&unk_180174A21 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      v16[1] = 4;
      v17 = 0LL;
      v19 = *(unsigned __int16 **)(v9 + 8);
      v20 = *v19;
      v21 = 2;
      v22 = &unk_180174A2C;
      v23 = 76;
      v24 = 1;
      EtwEventWriteTransfer(*(_QWORD *)(v9 + 32), v16, 0LL, 0LL, 6, &v19);
    }
  }
}
