/*
 * XREFs of ?DestroyStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18004BDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003A220 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     memmove_0 @ 0x18006B90F (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800F105C (-UpdateCountOfFormatSensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800F113C (-UpdateCountOfLazyRequestClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 *     ?UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z @ 0x1800F121C (-UpdateCountOfPeriodicitySensitiveClients@CProcessSubmixProxy@@IEAAXH@Z.c)
 */

__int64 __fastcall CProcessSubmixProxy::DestroyStream(CProcessSubmixProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 *v2; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rbx
  CProcessSubmixProxy *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned __int64 v14; // rcx
  struct IAudioStreamInfo **v15; // r15
  struct IAudioStreamInfo **v16; // rdx
  unsigned __int64 v17; // rax
  struct IAudioStreamInfo **v18; // rdx
  __int64 v20; // [rsp+30h] [rbp-D0h] BYREF
  WINBOOL fPending; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  CProcessSubmixProxy *v23; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v26[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+68h] [rbp-98h]
  _BYTE v28[1248]; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v29; // [rsp+550h] [rbp+450h] BYREF
  int v30; // [rsp+558h] [rbp+458h]
  int v31; // [rsp+55Ch] [rbp+45Ch]
  void *v32; // [rsp+560h] [rbp+460h]
  int v33; // [rsp+568h] [rbp+468h]
  int v34; // [rsp+56Ch] [rbp+46Ch]
  CProcessSubmixProxy **v35; // [rsp+570h] [rbp+470h]
  __int64 v36; // [rsp+578h] [rbp+478h]
  __int64 *v37; // [rsp+580h] [rbp+480h]
  __int64 v38; // [rsp+588h] [rbp+488h]
  __int64 *v39; // [rsp+590h] [rbp+490h]
  __int64 v40; // [rsp+598h] [rbp+498h]
  wil::details::in1diag3 *retaddr; // [rsp+5D8h] [rbp+4D8h]

  v2 = (__int64 *)*((_QWORD *)this + 5);
  v5 = *v2;
  v6 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
  v7 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 32))(v2, v6);
  if ( v7 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA57,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v7);
  v8 = 0LL;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B8588;
    qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
  }
  v9 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v9 > 4u )
  {
    v36 = 8LL;
    v38 = 8LL;
    v10 = 0LL;
    if ( this != (CProcessSubmixProxy *)8 )
      v10 = this;
    v23 = v10;
    v35 = &v23;
    v24 = *((_QWORD *)this + 24);
    v37 = &v24;
    v25 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 80LL))(a2);
    v39 = &v25;
    v40 = 8LL;
    v26[1] = 4;
    v29 = *(unsigned __int16 **)(v9 + 8);
    v26[0] = 184549376;
    v27 = 0LL;
    v30 = *v29;
    v32 = &unk_180178475;
    v31 = 2;
    v11 = *(_QWORD *)(v9 + 32);
    v33 = 72;
    v34 = 1;
    LODWORD(v20) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(v11, v26, 0LL, 0LL, 5, &v29);
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfPeriodicitySensitiveClients((CProcessSubmixProxy *)((char *)this - 8), -1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 144LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfFormatSensitiveClients((CProcessSubmixProxy *)((char *)this - 8), -1);
  if ( (*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 152LL))(a2) )
    CProcessSubmixProxy::UpdateCountOfLazyRequestClients((CProcessSubmixProxy *)((char *)this - 8), -1);
  if ( (*(unsigned int (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 56LL))(a2) != 2 )
    --*((_DWORD *)this + 28);
  v12 = *(_QWORD *)a2;
  v20 = 0LL;
  (*(void (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v12 + 120))(a2, &v20);
  v13 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v14 = *((_QWORD *)this + 22);
  v15 = (struct IAudioStreamInfo **)*((_QWORD *)this + 21);
  if ( v15 != (struct IAudioStreamInfo **)v14 )
  {
    do
    {
      if ( *v15 == a2 )
        break;
      ++v15;
    }
    while ( v15 != (struct IAudioStreamInfo **)v14 );
    if ( v15 != (struct IAudioStreamInfo **)v14 )
    {
      v16 = v15 + 1;
      v17 = (v14 - (unsigned __int64)(v15 + 1) + 7) >> 3;
      if ( (unsigned __int64)(v15 + 1) > v14 )
        v17 = 0LL;
      if ( v17 )
      {
        do
        {
          if ( *v16 != a2 )
            *v15++ = *v16;
          ++v16;
          ++v8;
        }
        while ( v8 != v17 );
      }
    }
  }
  v18 = (struct IAudioStreamInfo **)*((_QWORD *)this + 22);
  if ( v15 != v18 )
  {
    memmove_0(v15, v18, 0LL);
    *((_QWORD *)this + 22) = v15;
  }
  memset_0(v28, 0, sizeof(v28));
  (*(void (__fastcall **)(struct IAudioStreamInfo *, _BYTE *, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, v28, 0LL);
  if ( this != (CProcessSubmixProxy *)-128LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v20 + 208LL))(v20, 2LL, 0xFFFFFFFFLL, v13);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return 0LL;
}
