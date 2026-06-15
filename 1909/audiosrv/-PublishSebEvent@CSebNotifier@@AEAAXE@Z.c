/*
 * XREFs of ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18002D46C
 * Callers:
 *     _lambda_66d2f619b070ae3e79e6511eef39e0b9_::_lambda_invoker_cdecl_ @ 0x180049600 (_lambda_66d2f619b070ae3e79e6511eef39e0b9_--_lambda_invoker_cdecl_.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x18005E378 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800BDE50 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x1800FB490 (--1CSebNotifier@@QEAA@XZ.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _alloca_probe @ 0x18006C8D0 (_alloca_probe.c)
 */

void __fastcall CSebNotifier::PublishSebEvent(CSebNotifier *this, unsigned __int8 a2)
{
  int v4; // edx
  __int64 v5; // rcx
  unsigned __int16 *v6; // rax
  __int64 v7; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-C0h]
  _DWORD v12[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-B0h]
  unsigned __int16 *v14; // [rsp+60h] [rbp-A0h] BYREF
  int v15; // [rsp+68h] [rbp-98h]
  int v16; // [rsp+6Ch] [rbp-94h]
  void *v17; // [rsp+70h] [rbp-90h]
  int v18; // [rsp+78h] [rbp-88h]
  int v19; // [rsp+7Ch] [rbp-84h]
  char *v20; // [rsp+80h] [rbp-80h]
  int v21; // [rsp+88h] [rbp-78h]
  int v22; // [rsp+8Ch] [rbp-74h]
  int *v23; // [rsp+90h] [rbp-70h]
  int v24; // [rsp+98h] [rbp-68h]
  int v25; // [rsp+9Ch] [rbp-64h]
  _DWORD v26[1024]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int8 v27; // [rsp+10C8h] [rbp+FC8h] BYREF

  v27 = a2;
  if ( *((_BYTE *)this + 88) != a2 )
  {
    v26[1] = -1;
    v4 = a2 != 0 ? 3 : 1;
    if ( a2 > 1u )
      v26[0] = v4 | (a2 << 14);
    else
      v26[0] = v4;
    v9 = RtlPublishWnfStateData(WNF_SEB_AUDIO_ACTIVITY, 0LL, v26, 8LL, 0LL);
    if ( v9 >= 0 )
      *((_BYTE *)this + 88) = v27;
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
    v5 = *((_QWORD *)Context + 1);
    if ( *(_DWORD *)v5 > 4u )
    {
      v22 = 0;
      v25 = 0;
      v20 = (char *)&v27;
      v23 = &v9;
      v21 = 1;
      v24 = 4;
      v13 = 0LL;
      v12[1] = 4;
      v6 = *(unsigned __int16 **)(v5 + 8);
      v7 = *(_QWORD *)(v5 + 32);
      v14 = v6;
      v12[0] = 184549376;
      v15 = *v6;
      v17 = &unk_180178B4D;
      v16 = 2;
      v18 = 52;
      v19 = 1;
      v11 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      EtwEventWriteTransfer(v7, v12, 0LL, 0LL, 4, &v14);
    }
  }
}
