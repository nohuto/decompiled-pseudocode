/*
 * XREFs of ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x180021050
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180021D80 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180042C04 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180064290 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     _alloca_probe @ 0x18006C8D0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
volatile signed __int32 **__fastcall CSebNotifier::AcquireSebReference(__int64 a1, volatile signed __int32 **a2)
{
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rdi
  volatile signed __int32 *v7; // r15
  int v8; // eax
  int v9; // r13d
  int v10; // eax
  struct _TP_TIMER *v11; // rcx
  std::_Ref_count_base *v12; // rcx
  __int64 v14; // rcx
  char v15; // [rsp+30h] [rbp-10D8h] BYREF
  int v16; // [rsp+38h] [rbp-10D0h]
  WINBOOL fPending; // [rsp+3Ch] [rbp-10CCh] BYREF
  int v18; // [rsp+40h] [rbp-10C8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp-10C0h] BYREF
  unsigned int v20; // [rsp+50h] [rbp-10B8h]
  volatile signed __int32 **v21; // [rsp+58h] [rbp-10B0h]
  _DWORD v22[2]; // [rsp+60h] [rbp-10A8h] BYREF
  __int64 v23; // [rsp+68h] [rbp-10A0h]
  volatile signed __int32 *v24; // [rsp+70h] [rbp-1098h]
  volatile signed __int32 *v25; // [rsp+78h] [rbp-1090h]
  __int64 v26; // [rsp+80h] [rbp-1088h]
  __int64 v27; // [rsp+88h] [rbp-1080h]
  unsigned __int16 *v28; // [rsp+90h] [rbp-1078h] BYREF
  int v29; // [rsp+98h] [rbp-1070h]
  int v30; // [rsp+9Ch] [rbp-106Ch]
  void *v31; // [rsp+A0h] [rbp-1068h]
  int v32; // [rsp+A8h] [rbp-1060h]
  int v33; // [rsp+ACh] [rbp-105Ch]
  char *v34; // [rsp+B0h] [rbp-1058h]
  __int64 v35; // [rsp+B8h] [rbp-1050h]
  int *v36; // [rsp+C0h] [rbp-1048h]
  __int64 v37; // [rsp+C8h] [rbp-1040h]
  _DWORD v38[1024]; // [rsp+D0h] [rbp-1038h] BYREF

  v26 = -2LL;
  v21 = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v16 = 1;
  v27 = a1;
  ProcessHeap = GetProcessHeap();
  v5 = (volatile signed __int32 *)HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v6 = v5;
  if ( v5 )
  {
    *((_DWORD *)v5 + 2) = 1;
    *((_DWORD *)v5 + 3) = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj<CSebReference>::`vftable';
    *((_QWORD *)v5 + 2) = a1;
  }
  else
  {
    v6 = 0LL;
  }
  v7 = v6 + 4;
  v24 = v6 + 4;
  v25 = v6;
  v8 = _Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v8 )
    std::_Throw_C_error(v8);
  v9 = (*(_DWORD *)a1)++;
  if ( !v9 )
  {
    v15 = 1;
    if ( *(_BYTE *)(a1 + 88) != 1 )
    {
      v38[1] = -1;
      v38[0] = 3;
      v18 = RtlPublishWnfStateData(WNF_SEB_AUDIO_ACTIVITY, 0LL, v38, 8LL, 0LL);
      if ( v18 >= 0 )
        *(_BYTE *)(a1 + 88) = v15;
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
      v14 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v14 > 4u )
      {
        v34 = &v15;
        v35 = 1LL;
        v36 = &v18;
        v37 = 4LL;
        v22[0] = 184549376;
        v22[1] = 4;
        v23 = 0LL;
        v28 = *(unsigned __int16 **)(v14 + 8);
        v29 = *v28;
        v30 = 2;
        v31 = &unk_180178B4D;
        v32 = 52;
        v33 = 1;
        v20 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
        EtwEventWriteTransfer(*(_QWORD *)(v14 + 32), v22, 0LL, 0LL, 4, &v28);
      }
    }
  }
  v10 = _Mtx_unlock((_Mtx_t)(a1 + 8));
  if ( v10 )
    std::_Throw_C_error(v10);
  if ( !v9 )
  {
    v11 = *(struct _TP_TIMER **)(a1 + 96);
    if ( v11 )
    {
      SetThreadpoolTimer(v11, 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(a1 + 96), 1);
    }
  }
  if ( v6 )
  {
    _InterlockedIncrement(v6 + 2);
    v7 = v24;
  }
  *a2 = v7;
  v12 = (std::_Ref_count_base *)a2[1];
  a2[1] = v6;
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  if ( v6 && _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
    std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v6);
  }
  return a2;
}
