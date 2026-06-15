/*
 * XREFs of ?PublishSebEvent@CSebNotifier@@AEAAXE@Z @ 0x18001470C
 * Callers:
 *     _lambda_03b97fe06f3466f47fbded311dc3ec81_::_lambda_invoker_cdecl_ @ 0x1800163E0 (_lambda_03b97fe06f3466f47fbded311dc3ec81_--_lambda_invoker_cdecl_.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180051E60 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800AF93C (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CSebNotifier@@QEAA@XZ @ 0x1800EF990 (--1CSebNotifier@@QEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _alloca_probe @ 0x180068810 (_alloca_probe.c)
 */

void __fastcall CSebNotifier::PublishSebEvent(CSebNotifier *this, unsigned __int8 a2)
{
  int v4; // edx
  const GUID *v5; // r8
  const GUID *v6; // r9
  const struct _TlgProvider_t *v7; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  LPVOID Context; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  char *v12; // [rsp+60h] [rbp-A0h]
  int v13; // [rsp+68h] [rbp-98h]
  int v14; // [rsp+6Ch] [rbp-94h]
  int *v15; // [rsp+70h] [rbp-90h]
  int v16; // [rsp+78h] [rbp-88h]
  int v17; // [rsp+7Ch] [rbp-84h]
  _DWORD v18[1024]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int8 v19; // [rsp+10A8h] [rbp+FA8h] BYREF

  v19 = a2;
  if ( *((_BYTE *)this + 88) != a2 )
  {
    v18[1] = -1;
    v4 = a2 != 0 ? 3 : 1;
    if ( a2 > 1u )
      v18[0] = v4 | (a2 << 14);
    else
      v18[0] = v4;
    v9 = RtlPublishWnfStateData(WNF_SEB_AUDIO_ACTIVITY, 0LL, v18, 8LL, 0LL);
    if ( v9 >= 0 )
      *((_BYTE *)this + 88) = v19;
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
      v14 = 0;
      v17 = 0;
      v12 = (char *)&v19;
      v15 = &v9;
      v13 = 1;
      v16 = 4;
      TlgWrite(v7, &unk_180174B8A, v5, v6, 4u, &pData);
    }
  }
}
