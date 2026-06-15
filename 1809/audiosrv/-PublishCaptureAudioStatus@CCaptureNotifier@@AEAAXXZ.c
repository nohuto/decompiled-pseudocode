/*
 * XREFs of ?PublishCaptureAudioStatus@CCaptureNotifier@@AEAAXXZ @ 0x180051FDC
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180051E60 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800AF93C (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ?UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z @ 0x1800EFC1C (-UpdateAudioCaptureStatus@CCaptureNotifier@@AEAAXW4REFERENCE_OPERATION@@K@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _alloca_probe @ 0x180068810 (_alloca_probe.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800EF9D4 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBU_GUID@@UHmdI.c)
 */

void __fastcall CCaptureNotifier::PublishCaptureAudioStatus(CCaptureNotifier *this)
{
  LPVOID *v2; // r10
  unsigned int v3; // r11d
  LPVOID *v4; // rax
  unsigned int v5; // edi
  int v6; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  const struct _TlgProvider_t *v9; // rcx
  __int64 v10; // rdx
  void *v11; // r8
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v16; // [rsp+60h] [rbp-A0h]
  int v17; // [rsp+68h] [rbp-98h]
  int v18; // [rsp+6Ch] [rbp-94h]
  _DWORD v19[1024]; // [rsp+70h] [rbp-90h] BYREF

  memset_0(v19, 0, sizeof(v19));
  v2 = (LPVOID *)*((_QWORD *)this + 10);
  v3 = 0;
  v19[0] = 1;
  v4 = (LPVOID *)*v2;
  v5 = 8;
  Context = *v2;
  while ( v4 != v2 )
  {
    if ( *((_DWORD *)v4 + 8) )
    {
      if ( v3 >= 0x3FE )
        break;
      v10 = v5;
      v5 += 4;
      *(_DWORD *)((char *)v19 + v10) = *((_DWORD *)v4 + 7);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>,std::_Iterator_base0>::operator++(&Context);
    v4 = (LPVOID *)Context;
  }
  v19[1] = v3;
  v6 = RtlPublishWnfStateData(WNF_AUDC_CAPTURE, 0LL, v19, 4096LL, 0LL);
  Context = 0LL;
  v14 = v6;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v11);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 4u )
  {
    v18 = 0;
    v16 = &v14;
    v17 = 4;
    TlgWrite(v9, &unk_180174B12, v7, v8, 3u, &pData);
  }
}
