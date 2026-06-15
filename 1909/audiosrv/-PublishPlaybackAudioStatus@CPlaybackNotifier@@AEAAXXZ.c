/*
 * XREFs of ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18005EC24
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x18005E378 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800BDE50 (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPlaybackNotifier@@QEAA@XZ @ 0x1800FB414 (--1CPlaybackNotifier@@QEAA@XZ.c)
 * Callees:
 *     _TlgWrite @ 0x18001DFF0 (_TlgWrite.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180046104 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     memset_0 @ 0x180065BEE (memset_0.c)
 *     _alloca_probe @ 0x18006C8D0 (_alloca_probe.c)
 */

void __fastcall CPlaybackNotifier::PublishPlaybackAudioStatus(CPlaybackNotifier *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  LPVOID *v4; // r9
  unsigned int v5; // r10d
  LPVOID *v6; // rax
  unsigned int v7; // r11d
  int v8; // eax
  const GUID *v9; // r8
  const GUID *v10; // r9
  const struct _TlgProvider_t *v11; // rcx
  char *v12; // rcx
  void *v13; // r8
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v18; // [rsp+60h] [rbp-A0h]
  int v19; // [rsp+68h] [rbp-98h]
  int v20; // [rsp+6Ch] [rbp-94h]
  int v21; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v22[1023]; // [rsp+74h] [rbp-8Ch] BYREF

  memset_0(v22, 0, sizeof(v22));
  v4 = (LPVOID *)*((_QWORD *)this + 10);
  v5 = 0;
  v21 = 1;
  v6 = (LPVOID *)*v4;
  v7 = 2;
  Context = *v4;
  while ( v6 != v4 )
  {
    v12 = (char *)(v6 + 4);
    if ( *((_DWORD *)v6 + 16) )
    {
      if ( v5 >= 0x24 )
        break;
      if ( (unsigned __int64)v6[7] >= 8 )
        v12 = *(char **)v12;
      *(_OWORD *)&v22[v7 - 1] = *(_OWORD *)v12;
      *(_OWORD *)&v22[v7 + 3] = *((_OWORD *)v12 + 1);
      *(_OWORD *)&v22[v7 + 7] = *((_OWORD *)v12 + 2);
      *(_OWORD *)&v22[v7 + 11] = *((_OWORD *)v12 + 3);
      *(_OWORD *)&v22[v7 + 15] = *((_OWORD *)v12 + 4);
      *(_OWORD *)&v22[v7 + 19] = *((_OWORD *)v12 + 5);
      *(_OWORD *)&v22[v7 + 23] = *((_OWORD *)v12 + 6);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>,std::_Iterator_base0>::operator++(
      (__int64 *)&Context,
      v2,
      v3,
      (__int64)v4);
    v6 = (LPVOID *)Context;
  }
  v22[0] = v5;
  v8 = RtlPublishWnfStateData(WNF_AUDC_RENDER, 0LL, &v21, 4096LL, 0LL);
  Context = 0LL;
  v16 = v8;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0, v13);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
  }
  v11 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 4u )
  {
    v20 = 0;
    v18 = &v16;
    v19 = 4;
    TlgWrite(v11, &unk_180178AFD, v9, v10, 3u, &pData);
  }
}
