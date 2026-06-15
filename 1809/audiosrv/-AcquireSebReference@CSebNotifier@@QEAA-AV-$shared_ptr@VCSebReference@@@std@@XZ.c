/*
 * XREFs of ?AcquireSebReference@CSebNotifier@@QEAA?AV?$shared_ptr@VCSebReference@@@std@@XZ @ 0x18002F610
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18002E8A0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _alloca_probe @ 0x180068810 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
volatile signed __int32 **__fastcall CSebNotifier::AcquireSebReference(__int64 a1, volatile signed __int32 **a2)
{
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rdi
  int v7; // eax
  int v8; // r15d
  int v9; // eax
  struct _TP_TIMER *v10; // rcx
  std::_Ref_count_base *v11; // rcx
  __int64 v13; // r10
  char v14; // [rsp+30h] [rbp-10C8h] BYREF
  int v15; // [rsp+38h] [rbp-10C0h]
  WINBOOL fPending; // [rsp+3Ch] [rbp-10BCh] BYREF
  int v17; // [rsp+40h] [rbp-10B8h] BYREF
  LPVOID Context[2]; // [rsp+48h] [rbp-10B0h] BYREF
  _DWORD v19[2]; // [rsp+58h] [rbp-10A0h] BYREF
  __int64 v20; // [rsp+60h] [rbp-1098h]
  volatile signed __int32 *v21; // [rsp+68h] [rbp-1090h]
  volatile signed __int32 *v22; // [rsp+70h] [rbp-1088h]
  __int64 v23; // [rsp+78h] [rbp-1080h]
  unsigned __int16 *v24; // [rsp+80h] [rbp-1078h] BYREF
  int v25; // [rsp+88h] [rbp-1070h]
  int v26; // [rsp+8Ch] [rbp-106Ch]
  void *v27; // [rsp+90h] [rbp-1068h]
  int v28; // [rsp+98h] [rbp-1060h]
  int v29; // [rsp+9Ch] [rbp-105Ch]
  char *v30; // [rsp+A0h] [rbp-1058h]
  __int64 v31; // [rsp+A8h] [rbp-1050h]
  int *v32; // [rsp+B0h] [rbp-1048h]
  __int64 v33; // [rsp+B8h] [rbp-1040h]
  _DWORD v34[1024]; // [rsp+C0h] [rbp-1038h] BYREF

  v23 = -2LL;
  Context[1] = a2;
  *a2 = 0LL;
  a2[1] = 0LL;
  v15 = 1;
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
  v21 = v6 + 4;
  v22 = v6;
  v7 = _Mtx_lock((_Mtx_t)(a1 + 8));
  if ( v7 )
    std::_Throw_C_error(v7);
  v8 = (*(_DWORD *)a1)++;
  if ( !v8 )
  {
    v14 = 1;
    if ( *(_BYTE *)(a1 + 88) != 1 )
    {
      v34[1] = -1;
      v34[0] = 3;
      v17 = RtlPublishWnfStateData(WNF_SEB_AUDIO_ACTIVITY, 0LL, v34, 8LL, 0LL);
      if ( v17 >= 0 )
        *(_BYTE *)(a1 + 88) = v14;
      Context[0] = 0LL;
      if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, Context)
        && fPending )
      {
        Context[0] = qword_1801B3518;
        qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
        qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
        atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
        wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
        InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
      }
      v13 = *((_QWORD *)Context[0] + 1);
      if ( *(_DWORD *)v13 > 4u )
      {
        v30 = &v14;
        v31 = 1LL;
        v32 = &v17;
        v33 = 4LL;
        v19[0] = ((unsigned int)&unk_180174B8A - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v19[1] = 4;
        v20 = 0LL;
        v24 = *(unsigned __int16 **)(v13 + 8);
        v25 = *v24;
        v26 = 2;
        v27 = &unk_180174B95;
        v28 = 52;
        v29 = 1;
        EtwEventWriteTransfer(*(_QWORD *)(v13 + 32), v19, 0LL, 0LL, 4, &v24);
      }
    }
  }
  v9 = _Mtx_unlock((_Mtx_t)(a1 + 8));
  if ( v9 )
    std::_Throw_C_error(v9);
  if ( !v8 )
  {
    v10 = *(struct _TP_TIMER **)(a1 + 96);
    if ( v10 )
    {
      SetThreadpoolTimer(v10, 0LL, 0, 0);
      WaitForThreadpoolTimerCallbacks(*(PTP_TIMER *)(a1 + 96), 1);
    }
  }
  if ( v6 )
    _InterlockedIncrement(v6 + 2);
  *a2 = v21;
  v11 = (std::_Ref_count_base *)a2[1];
  a2[1] = v6;
  if ( v11 )
    std::_Ref_count_base::_Decref(v11);
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  return a2;
}
