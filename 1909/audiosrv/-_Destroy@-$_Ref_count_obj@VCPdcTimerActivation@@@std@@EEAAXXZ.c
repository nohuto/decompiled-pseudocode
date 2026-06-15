/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x18002E240
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     memmove_0 @ 0x18006C96F (memmove_0.c)
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
  __int64 v8; // r10
  WINBOOL fPending; // [rsp+38h] [rbp-89h] BYREF
  int v10; // [rsp+3Ch] [rbp-85h] BYREF
  int v11; // [rsp+40h] [rbp-81h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-79h] BYREF
  char *v13; // [rsp+50h] [rbp-71h]
  __int64 v14; // [rsp+58h] [rbp-69h] BYREF
  __int64 v15; // [rsp+60h] [rbp-61h] BYREF
  _DWORD v16[2]; // [rsp+68h] [rbp-59h] BYREF
  __int64 v17; // [rsp+70h] [rbp-51h]
  __int64 v18; // [rsp+78h] [rbp-49h]
  char *i; // [rsp+80h] [rbp-41h]
  char *v20; // [rsp+88h] [rbp-39h]
  unsigned __int16 *v21; // [rsp+98h] [rbp-29h] BYREF
  int v22; // [rsp+A0h] [rbp-21h]
  int v23; // [rsp+A4h] [rbp-1Dh]
  void *v24; // [rsp+A8h] [rbp-19h]
  int v25; // [rsp+B0h] [rbp-11h]
  int v26; // [rsp+B4h] [rbp-Dh]
  __int64 *v27; // [rsp+B8h] [rbp-9h]
  __int64 v28; // [rsp+C0h] [rbp-1h]
  int *v29; // [rsp+C8h] [rbp+7h]
  __int64 v30; // [rsp+D0h] [rbp+Fh]
  __int64 *v31; // [rsp+D8h] [rbp+17h]
  __int64 v32; // [rsp+E0h] [rbp+1Fh]
  int *v33; // [rsp+E8h] [rbp+27h]
  __int64 v34; // [rsp+F0h] [rbp+2Fh]

  v18 = -2LL;
  v2 = a1[4];
  v3 = a1[3];
  v4 = _Mtx_lock((_Mtx_t)(v3 + 32));
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = *(char **)(v3 + 16);
  v13 = v5;
  v6 = *(char **)(v3 + 8);
  for ( i = v6; v6 != v5; v6 += 8 )
  {
    if ( *(_QWORD *)v6 == v2 )
      break;
  }
  v20 = v5;
  if ( v6 != v5 )
  {
    memmove_0(v6, v6 + 8, v5 - (v6 + 8));
    *(_QWORD *)(v3 + 16) -= 8LL;
  }
  v7 = _Mtx_unlock((_Mtx_t)(v3 + 32));
  if ( v7 )
    std::_Throw_C_error(v7);
  if ( a1[2] )
  {
    v11 = Pdcv2ActivationClientDeactivate();
    a1[2] = 0LL;
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      Context = &qword_1801B7588;
      qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
      qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
      wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
      InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
    }
    v8 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v8 > 4u )
    {
      v14 = a1[4];
      v27 = &v14;
      v28 = 8LL;
      v10 = *(_DWORD *)(v14 + 64);
      v29 = &v10;
      v30 = 4LL;
      v15 = *(_QWORD *)(v14 + 536);
      v31 = &v15;
      v32 = 8LL;
      v33 = &v11;
      v34 = 4LL;
      v16[0] = 184549376;
      v16[1] = 4;
      v17 = 0LL;
      v21 = *(unsigned __int16 **)(v8 + 8);
      v22 = *v21;
      v23 = 2;
      v24 = &unk_1801789E4;
      v25 = 76;
      v26 = 1;
      LODWORD(v13) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(*(_QWORD *)(v8 + 32), v16, 0LL, 0LL, 6, &v21);
    }
  }
}
