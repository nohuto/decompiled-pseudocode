/*
 * XREFs of ??0CAudioStream@@QEAA@PEAUIAudioProcess@@_NKPEAUVadServerSettings@@W4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x180021520
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x180020B40 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CAudioStream::CAudioStream(__int64 a1, __int64 a2, char a3, int a4, __int64 a5, int a6)
{
  bool v9; // al
  signed __int64 v10; // rax
  __int64 v11; // rdi
  WINBOOL fPending; // [rsp+30h] [rbp-99h] BYREF
  int v14; // [rsp+34h] [rbp-95h] BYREF
  int v15; // [rsp+38h] [rbp-91h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-89h] BYREF
  _DWORD v17[2]; // [rsp+48h] [rbp-81h] BYREF
  __int64 v18; // [rsp+50h] [rbp-79h]
  __int64 v19; // [rsp+58h] [rbp-71h]
  __int64 v20; // [rsp+60h] [rbp-69h]
  unsigned __int16 *v21; // [rsp+70h] [rbp-59h] BYREF
  int v22; // [rsp+78h] [rbp-51h]
  int v23; // [rsp+7Ch] [rbp-4Dh]
  void *v24; // [rsp+80h] [rbp-49h]
  int v25; // [rsp+88h] [rbp-41h]
  int v26; // [rsp+8Ch] [rbp-3Dh]
  int *v27; // [rsp+90h] [rbp-39h]
  __int64 v28; // [rsp+98h] [rbp-31h]
  int *v29; // [rsp+A0h] [rbp-29h]
  __int64 v30; // [rsp+A8h] [rbp-21h]
  __int64 v31; // [rsp+B0h] [rbp-19h]
  __int64 v32; // [rsp+B8h] [rbp-11h]
  __int64 v33; // [rsp+C0h] [rbp-9h]
  __int64 v34; // [rsp+C8h] [rbp-1h]

  v19 = -2LL;
  v20 = a1;
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
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = *(_DWORD *)(a5 + 104) != 0;
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
  *(_DWORD *)(a1 + 328) = *(_DWORD *)(a5 + 16);
  *(_DWORD *)(a1 + 332) = a6;
  *(_DWORD *)(a1 + 336) = *(_DWORD *)(a5 + 28);
  *(_BYTE *)(a1 + 340) = *(_DWORD *)(a5 + 36) != 0;
  *(_OWORD *)(a1 + 344) = *(_OWORD *)a5;
  *(_DWORD *)(a1 + 360) = a4;
  *(_OWORD *)(a1 + 368) = *(_OWORD *)(a5 + 40);
  *(_OWORD *)(a1 + 384) = *(_OWORD *)(a5 + 56);
  *(_OWORD *)(a1 + 400) = *(_OWORD *)(a5 + 72);
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
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v11 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v11 > 4u )
  {
    v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    v27 = &v14;
    v28 = 4LL;
    v15 = a6;
    v29 = &v15;
    v30 = 4LL;
    v31 = a1 + 320;
    v32 = 8LL;
    v33 = a1 + 328;
    v34 = 4LL;
    v17[0] = ((unsigned int)&unk_180172C3F - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v17[1] = 4;
    v18 = 0LL;
    v21 = *(unsigned __int16 **)(v11 + 8);
    v22 = *v21;
    v23 = 2;
    v24 = &unk_180172C4A;
    v25 = 66;
    v26 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v11 + 32), v17, 0LL, 0LL, 6, &v21);
  }
  return a1;
}
