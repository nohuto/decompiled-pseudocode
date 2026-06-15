/*
 * XREFs of ??0CAudioStream@@QEAA@PEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18002F080
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18002E790 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CAudioStream::CAudioStream(__int64 a1, __int64 a2, char a3, int a4, __int64 a5, int a6)
{
  bool v9; // al
  signed __int64 v10; // rax
  __int64 v11; // rdi
  WINBOOL fPending; // [rsp+30h] [rbp-A9h] BYREF
  int v14; // [rsp+34h] [rbp-A5h] BYREF
  int v15; // [rsp+38h] [rbp-A1h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-99h] BYREF
  __int64 v17; // [rsp+48h] [rbp-91h]
  _DWORD v18[2]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v19; // [rsp+58h] [rbp-81h]
  __int64 v20; // [rsp+60h] [rbp-79h]
  __int64 v21; // [rsp+68h] [rbp-71h]
  __int64 v22; // [rsp+70h] [rbp-69h]
  unsigned __int16 *v23; // [rsp+80h] [rbp-59h] BYREF
  int v24; // [rsp+88h] [rbp-51h]
  int v25; // [rsp+8Ch] [rbp-4Dh]
  void *v26; // [rsp+90h] [rbp-49h]
  int v27; // [rsp+98h] [rbp-41h]
  int v28; // [rsp+9Ch] [rbp-3Dh]
  int *v29; // [rsp+A0h] [rbp-39h]
  __int64 v30; // [rsp+A8h] [rbp-31h]
  int *v31; // [rsp+B0h] [rbp-29h]
  __int64 v32; // [rsp+B8h] [rbp-21h]
  __int64 v33; // [rsp+C0h] [rbp-19h]
  __int64 v34; // [rsp+C8h] [rbp-11h]
  __int64 v35; // [rsp+D0h] [rbp-9h]
  __int64 v36; // [rsp+D8h] [rbp-1h]

  v20 = -2LL;
  v17 = a1;
  *(_DWORD *)(a1 + 32) = 1;
  *(_QWORD *)a1 = &CAudioStream::`vftable'{for `IAudioGraphCallback'};
  *(_QWORD *)(a1 + 8) = &CAudioStream::`vftable'{for `IAudioStreamInfo'};
  *(_QWORD *)(a1 + 16) = &CPerStreamVolumeAudioStream::`vftable'{for `IAudioStreamPolicyVolumeClient'};
  *(_QWORD *)(a1 + 24) = &CAudioStream::`vftable'{for `CUnknown'};
  *(_DWORD *)(a1 + 40) = 1;
  *(_BYTE *)(a1 + 44) = a3;
  *(_BYTE *)(a1 + 45) = (a4 & 1) != 0;
  v9 = (a4 & 0x200000) != 0 || a6 == 2;
  *(_BYTE *)(a1 + 46) = v9;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 1065353216;
  v21 = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  v22 = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = *(_DWORD *)(a5 + 136) != 0;
  *(_DWORD *)(a1 + 124) = 0;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 128), 0, 0);
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_BYTE *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 220) = -1;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)(a1 + 224), 0, 0);
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 288) = 255;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_QWORD *)(a1 + 312) = 0LL;
  *(_QWORD *)(a1 + 320) = 0LL;
  *(_DWORD *)(a1 + 328) = *(_DWORD *)(a5 + 48);
  *(_DWORD *)(a1 + 332) = a6;
  *(_DWORD *)(a1 + 336) = *(_DWORD *)(a5 + 60);
  *(_BYTE *)(a1 + 340) = *(_DWORD *)(a5 + 68) != 0;
  *(_OWORD *)(a1 + 344) = *(_OWORD *)a5;
  *(_DWORD *)(a1 + 360) = a4;
  *(_OWORD *)(a1 + 368) = *(_OWORD *)(a5 + 72);
  *(_OWORD *)(a1 + 384) = *(_OWORD *)(a5 + 88);
  *(_OWORD *)(a1 + 400) = *(_OWORD *)(a5 + 104);
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  do
  {
    v10 = _InterlockedExchangeAdd64(&CAudioStream::s_llStreamIdentifier, 1uLL);
    *(_QWORD *)(a1 + 320) = v10 + 1;
  }
  while ( v10 == -1 );
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
  v11 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 4u )
  {
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    v29 = &v14;
    v30 = 4LL;
    v15 = a6;
    v31 = &v15;
    v32 = 4LL;
    v33 = a1 + 320;
    v34 = 8LL;
    v35 = a1 + 328;
    v36 = 4LL;
    v18[0] = 184549376;
    v18[1] = 4;
    v19 = 0LL;
    v23 = *(unsigned __int16 **)(v11 + 8);
    v24 = *v23;
    v25 = 2;
    v26 = &unk_180177F98;
    v27 = 66;
    v28 = 1;
    LODWORD(v17) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EtwEventWriteTransfer(*(_QWORD *)(v11 + 32), v18, 0LL, 0LL, 6, &v23);
  }
  return a1;
}
