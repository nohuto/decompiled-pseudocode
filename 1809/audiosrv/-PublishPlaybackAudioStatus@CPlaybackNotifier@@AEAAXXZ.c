/*
 * XREFs of ?PublishPlaybackAudioStatus@CPlaybackNotifier@@AEAAXXZ @ 0x18005211C
 * Callers:
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x180051E60 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x1800AF93C (--1CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1CPlaybackNotifier@@QEAA@XZ @ 0x1800EF940 (--1CPlaybackNotifier@@QEAA@XZ.c)
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UENDPOINT_REF_DATA@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800131A0 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_stri.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _alloca_probe @ 0x180068810 (_alloca_probe.c)
 */

void __fastcall CPlaybackNotifier::PublishPlaybackAudioStatus(CPlaybackNotifier *this)
{
  LPVOID *v2; // r10
  unsigned int v3; // r11d
  LPVOID *v4; // rax
  unsigned int v5; // edi
  int v6; // eax
  const GUID *v7; // r8
  const GUID *v8; // r9
  const struct _TlgProvider_t *v9; // rcx
  char *v10; // rcx
  __int64 v11; // rax
  void *v12; // r8
  LPVOID Context; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-C0h] BYREF
  int *v17; // [rsp+60h] [rbp-A0h]
  int v18; // [rsp+68h] [rbp-98h]
  int v19; // [rsp+6Ch] [rbp-94h]
  _DWORD v20[1024]; // [rsp+70h] [rbp-90h] BYREF

  memset_0(v20, 0, sizeof(v20));
  v2 = (LPVOID *)*((_QWORD *)this + 10);
  v3 = 0;
  v20[0] = 1;
  v4 = (LPVOID *)*v2;
  v5 = 8;
  Context = *v2;
  while ( v4 != v2 )
  {
    v10 = (char *)(v4 + 4);
    if ( *((_DWORD *)v4 + 16) )
    {
      if ( v3 >= 0x24 )
        break;
      if ( (unsigned __int64)v4[7] >= 8 )
        v10 = *(char **)v10;
      v11 = v5;
      v5 += 112;
      *(_OWORD *)((char *)v20 + v11) = *(_OWORD *)v10;
      *(_OWORD *)((char *)&v20[4] + v11) = *((_OWORD *)v10 + 1);
      *(_OWORD *)((char *)&v20[8] + v11) = *((_OWORD *)v10 + 2);
      *(_OWORD *)((char *)&v20[12] + v11) = *((_OWORD *)v10 + 3);
      *(_OWORD *)((char *)&v20[16] + v11) = *((_OWORD *)v10 + 4);
      *(_OWORD *)((char *)&v20[20] + v11) = *((_OWORD *)v10 + 5);
      *(_OWORD *)((char *)&v20[24] + v11) = *((_OWORD *)v10 + 6);
    }
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,ENDPOINT_REF_DATA>>>,std::_Iterator_base0>::operator++((__int64 *)&Context);
    v4 = (LPVOID *)Context;
  }
  v20[1] = v3;
  v6 = RtlPublishWnfStateData(WNF_AUDC_RENDER, 0LL, v20, 4096LL, 0LL);
  Context = 0LL;
  v15 = v6;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530, v12);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v9 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 4u )
  {
    v19 = 0;
    v17 = &v15;
    v18 = 4;
    TlgWrite(v9, &unk_180174B45, v7, v8, 3u, &pData);
  }
}
