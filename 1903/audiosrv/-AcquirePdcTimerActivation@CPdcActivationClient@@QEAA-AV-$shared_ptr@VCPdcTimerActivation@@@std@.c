/*
 * XREFs of ?AcquirePdcTimerActivation@CPdcActivationClient@@QEAA?AV?$shared_ptr@VCPdcTimerActivation@@@std@@PEAVCVADServer@@@Z @ 0x18001DFB0
 * Callers:
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18001F130 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAVCVADServer@@@?$vector@PEAVCVADServer@@V?$allocator@PEAVCVADServer@@@std@@@std@@QEAAPEAPEAVCVADServer@@QEAPEAV2@AEBQEAV2@@Z @ 0x180009ABC (--$_Emplace_reallocate@AEBQEAVCVADServer@@@-$vector@PEAVCVADServer@@V-$allocator@PEAVCVADServer@.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     memset_0 @ 0x180064BFE (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
_QWORD *__fastcall CPdcActivationClient::AcquirePdcTimerActivation(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // r15
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  _BYTE *v8; // rdx
  int v9; // eax
  HANDLE ProcessHeap; // rax
  char *v11; // rax
  char *v12; // r14
  _QWORD *v13; // r12
  __int64 v14; // rsi
  const wchar_t *v15; // rbx
  __int64 v16; // rcx
  const wchar_t *v17; // rax
  const wchar_t *v18; // rax
  wchar_t *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r10
  std::_Ref_count_base *v22; // rcx
  _QWORD *result; // rax
  WINBOOL fPending; // [rsp+44h] [rbp-1F4h] BYREF
  int v25; // [rsp+48h] [rbp-1F0h] BYREF
  int v26; // [rsp+4Ch] [rbp-1ECh] BYREF
  int v27; // [rsp+50h] [rbp-1E8h] BYREF
  int v28; // [rsp+54h] [rbp-1E4h] BYREF
  __int64 v29; // [rsp+58h] [rbp-1E0h] BYREF
  LPVOID Context; // [rsp+60h] [rbp-1D8h] BYREF
  char *v31; // [rsp+68h] [rbp-1D0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-1C8h] BYREF
  _QWORD *v33; // [rsp+78h] [rbp-1C0h]
  _DWORD v34[2]; // [rsp+80h] [rbp-1B8h] BYREF
  __int64 v35; // [rsp+88h] [rbp-1B0h]
  _DWORD v36[2]; // [rsp+90h] [rbp-1A8h] BYREF
  __int64 v37; // [rsp+98h] [rbp-1A0h]
  const wchar_t *v38; // [rsp+A0h] [rbp-198h]
  _QWORD *v39; // [rsp+A8h] [rbp-190h]
  __int64 v40; // [rsp+B0h] [rbp-188h]
  __int64 v41; // [rsp+B8h] [rbp-180h]
  __int64 v42; // [rsp+C0h] [rbp-178h]
  __int64 v43; // [rsp+C8h] [rbp-170h]
  _QWORD v44[3]; // [rsp+D0h] [rbp-168h] BYREF
  char v45[152]; // [rsp+E8h] [rbp-150h] BYREF
  unsigned __int16 *v46; // [rsp+180h] [rbp-B8h] BYREF
  int v47; // [rsp+188h] [rbp-B0h]
  int v48; // [rsp+18Ch] [rbp-ACh]
  void *v49; // [rsp+190h] [rbp-A8h]
  int v50; // [rsp+198h] [rbp-A0h]
  int v51; // [rsp+19Ch] [rbp-9Ch]
  __int64 *v52; // [rsp+1A0h] [rbp-98h]
  __int64 v53; // [rsp+1A8h] [rbp-90h]
  int *v54; // [rsp+1B0h] [rbp-88h]
  __int64 v55; // [rsp+1B8h] [rbp-80h]
  char **v56; // [rsp+1C0h] [rbp-78h]
  __int64 v57; // [rsp+1C8h] [rbp-70h]
  int *v58; // [rsp+1D0h] [rbp-68h]
  __int64 v59; // [rsp+1D8h] [rbp-60h]
  int *v60; // [rsp+1E0h] [rbp-58h]
  __int64 v61; // [rsp+1E8h] [rbp-50h]

  v41 = -2LL;
  try
  {
    v3 = a3;
    v33 = a2;
    v29 = a3;
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( *(_QWORD *)a1 )
    {
      v6 = (struct _Mtx_internal_imp_t *)(a1 + 32);
      v42 = a1 + 32;
      v7 = _Mtx_lock((_Mtx_t)(a1 + 32));
      if ( v7 )
        std::_Throw_C_error(v7);
      v8 = *(_BYTE **)(a1 + 16);
      if ( *(_BYTE **)(a1 + 24) == v8 )
      {
        std::vector<CVADServer *>::_Emplace_reallocate<CVADServer * const &>((_QWORD *)(a1 + 8), v8, &v29);
        v3 = v29;
      }
      else
      {
        *(_QWORD *)v8 = v3;
        *(_QWORD *)(a1 + 16) += 8LL;
      }
      v9 = _Mtx_unlock(v6);
      if ( v9 )
        std::_Throw_C_error(v9);
      v43 = a1;
      ProcessHeap = GetProcessHeap();
      v11 = (char *)HeapAlloc(ProcessHeap, 0, 0x28uLL);
      v12 = v11;
      v31 = v11;
      if ( v11 )
      {
        *((_DWORD *)v11 + 2) = 1;
        *((_DWORD *)v11 + 3) = 1;
        *(_QWORD *)v11 = &std::_Ref_count_obj<CPdcTimerActivation>::`vftable';
        v13 = v11 + 16;
        *((_QWORD *)v11 + 2) = 0LL;
        *((_QWORD *)v11 + 3) = a1;
        *((_QWORD *)v11 + 4) = v3;
        v44[0] = 1LL;
        v44[1] = v3;
        v44[2] = 552LL;
        memset_0(v45, 0, 0x90uLL);
        v14 = *(_QWORD *)(v3 + 192);
        v15 = 0LL;
        v16 = *(_QWORD *)(v14 + 72);
        if ( v16 )
        {
          v17 = (const wchar_t *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 72LL))(v16);
          v15 = v17;
          if ( !v17 || !*v17 )
          {
            v18 = (const wchar_t *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v14 + 72) + 80LL))(*(_QWORD *)(v14 + 72));
            if ( v18 )
            {
              if ( *v18 )
              {
                v19 = wcsrchr(v18, 0x5Cu);
                if ( v19 )
                  v15 = v19 + 1;
                else
                  v15 = 0LL;
              }
            }
          }
        }
        v36[0] = 1;
        v36[1] = 300;
        v37 = 0LL;
        v38 = L"Unknown";
        v39 = v44;
        v40 = 0LL;
        if ( v15 )
        {
          v20 = -1LL;
          do
            ++v20;
          while ( v15[v20] );
          if ( v20 )
            v38 = v15;
        }
        v26 = Pdcv2ActivationClientActivate(
                **((_QWORD **)v12 + 3),
                v36,
                *((_QWORD *)v12 + 4),
                2LL,
                L"TimerForAudioPlayback",
                0,
                v12 + 16,
                &v27,
                1);
        if ( v26 >= 0 )
          Pdcv2ActivationClientSetBrokeredProcessId(*v13, *(unsigned int *)(v3 + 64));
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          Context = &qword_1801B8588;
          qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
        }
        v21 = *((_QWORD *)Context + 1);
        if ( *(_DWORD *)v21 > 4u )
        {
          v32 = *((_QWORD *)v12 + 4);
          v52 = &v32;
          v53 = 8LL;
          v25 = *(_DWORD *)(v32 + 64);
          v54 = &v25;
          v55 = 4LL;
          v31 = *(char **)(v32 + 536);
          v56 = &v31;
          v57 = 8LL;
          v58 = &v26;
          v59 = 4LL;
          v28 = v27;
          v60 = &v28;
          v61 = 4LL;
          v34[0] = 184549376;
          v34[1] = 4;
          v35 = 0LL;
          v46 = *(unsigned __int16 **)(v21 + 8);
          v47 = *v46;
          v48 = 2;
          v49 = &unk_180179A5C;
          v50 = 89;
          v51 = 1;
          LODWORD(v29) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          EtwEventWriteTransfer(*(_QWORD *)(v21 + 32), v34, 0LL, 0LL, 7, &v46);
        }
      }
      else
      {
        v12 = 0LL;
      }
      *a2 = v12 + 16;
      v22 = (std::_Ref_count_base *)a2[1];
      a2[1] = v12;
      if ( v22 )
        std::_Ref_count_base::_Decref(v22);
    }
    result = a2;
  }
  catch ( std::bad_alloc )
  {
    AudSrvTraceLoggingErrorHelper("CPdcActivationClient::AcquirePdcTimerActivation", 0x38u, -2147024882);
    return v33;
  }
  return result;
}
