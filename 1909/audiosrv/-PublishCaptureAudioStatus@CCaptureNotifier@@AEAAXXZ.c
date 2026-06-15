/*
 * XREFs of ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x18005EAB4
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x18005E378 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800BDE50 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z @ 0x1800FB834 (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K_N1@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _alloca_probe @ 0x18006C8D0 (_alloca_probe.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800FB4E0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdI.c)
 */

void __fastcall CCaptureNotifier::PublishCaptureAudioStatus(CCaptureNotifier *this)
{
  LPVOID *v2; // r9
  unsigned int v3; // r10d
  LPVOID *v4; // rax
  unsigned int v5; // r11d
  int v6; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  const struct _TlgProvider_t *v9; // rcx
  char v10; // cl
  void *v11; // r8
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v16; // [rsp+60h] [rbp-A0h]
  int v17; // [rsp+68h] [rbp-98h]
  int v18; // [rsp+6Ch] [rbp-94h]
  int v19; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v20[1023]; // [rsp+74h] [rbp-8Ch] BYREF

  memset_0(v20, 0, sizeof(v20));
  v2 = (LPVOID *)*((_QWORD *)this + 10);
  v3 = 0;
  v19 = 2;
  v4 = (LPVOID *)*v2;
  v5 = 2;
  Context = *v2;
  while ( v4 != v2 )
  {
    if ( *((_DWORD *)v4 + 8) )
    {
      if ( v3 >= 0x331 )
        break;
      v10 = *((_DWORD *)v4 + 9) != 0;
      if ( *((_DWORD *)v4 + 10) )
        v10 |= 2u;
      v20[v5 - 1] = *((_DWORD *)v4 + 7);
      LOBYTE(v20[v5]) = v10;
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>,std::_Iterator_base0>::operator++(&Context);
    v4 = (LPVOID *)Context;
  }
  v20[0] = v3;
  v6 = RtlPublishWnfStateData(WNF_AUDC_CAPTURE, 0LL, &v19, 4096LL, 0LL);
  Context = 0LL;
  v14 = v6;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v11);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 4u )
  {
    v18 = 0;
    v16 = &v14;
    v17 = 4;
    TlgWrite(v9, &unk_180178ACA, v7, v8, 3u, &pData);
  }
}
