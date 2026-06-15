/*
 * XREFs of ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x18002E400
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18002E8A0 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004E2A0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DA4BC (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CVADServer::StartStream(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rsi
  unsigned __int64 CurrentThreadId; // rdi
  signed __int64 v8; // rcx
  signed __int64 *v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax
  unsigned int v13; // edi
  std::_Ref_count_base *v14; // rdx
  std::_Ref_count_base *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  const WCHAR *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v28; // rax
  signed __int64 v29; // rax
  int v30; // [rsp+28h] [rbp-E0h]
  __int64 v31; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *Context; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID Context_8[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-A0h] BYREF
  std::_Ref_count_base *v37; // [rsp+70h] [rbp-98h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-90h] BYREF
  char v39; // [rsp+80h] [rbp-88h]
  __int64 (__fastcall **v40)(); // [rsp+88h] [rbp-80h] BYREF
  __int128 v41; // [rsp+90h] [rbp-78h]
  _QWORD v42[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h]
  DWORD v44; // [rsp+B8h] [rbp-50h]
  __int64 v45; // [rsp+C0h] [rbp-48h]
  __int64 v46; // [rsp+C8h] [rbp-40h] BYREF
  unsigned __int16 *v47; // [rsp+D8h] [rbp-30h] BYREF
  int v48; // [rsp+E0h] [rbp-28h]
  int v49; // [rsp+E4h] [rbp-24h]
  void *v50; // [rsp+E8h] [rbp-20h]
  int v51; // [rsp+F0h] [rbp-18h]
  int v52; // [rsp+F4h] [rbp-14h]
  __int64 *v53; // [rsp+F8h] [rbp-10h]
  __int64 v54; // [rsp+100h] [rbp-8h]
  const WCHAR *v55; // [rsp+108h] [rbp+0h]
  int v56; // [rsp+110h] [rbp+8h]
  int v57; // [rsp+114h] [rbp+Ch]
  WINBOOL *v58; // [rsp+118h] [rbp+10h]
  __int64 v59; // [rsp+120h] [rbp+18h]
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 224);
  v39 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v6 = wil::details::g_pThreadFailureCallbacks;
  Context_8[0] = &v31;
  Context_8[1] = (LPVOID)a1;
  v40 = off_18014B4C8;
  v42[1] = &v40;
  LOBYTE(v31) = 0;
  v42[0] = 0LL;
  v43 = 0LL;
  v44 = 0;
  v45 = 0LL;
  v41 = *(_OWORD *)Context_8;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_43;
  CurrentThreadId = GetCurrentThreadId();
  v8 = *(_QWORD *)(v6 + 8 * (CurrentThreadId % 0xA));
  v9 = (signed __int64 *)(v6 + 8 * (CurrentThreadId % 0xA));
  if ( !v8 )
  {
LABEL_39:
    ProcessHeap = GetProcessHeap();
    v28 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v8 = (signed __int64)v28;
    if ( v28 )
    {
      *(_QWORD *)v28 = 0LL;
      v28[2] = CurrentThreadId;
      *((_QWORD *)v28 + 2) = 0LL;
      _m_prefetchw(v9);
      do
      {
        v29 = *v9;
        *(_QWORD *)(v8 + 16) = *v9;
      }
      while ( v29 != _InterlockedCompareExchange64(v9, v8, v29) );
      goto LABEL_4;
    }
LABEL_43:
    v8 = 0LL;
    goto LABEL_4;
  }
  while ( *(_DWORD *)(v8 + 8) != (_DWORD)CurrentThreadId )
  {
    v8 = *(_QWORD *)(v8 + 16);
    if ( !v8 )
      goto LABEL_39;
  }
LABEL_4:
  v42[0] = v8;
  if ( v8 )
  {
    v43 = *(_QWORD *)v8;
    *(_QWORD *)v8 = v42;
    v44 = GetCurrentThreadId();
  }
  if ( *(_DWORD *)(a1 + 184) )
  {
    v10 = *(_QWORD *)(a1 + 168);
    if ( v10 )
    {
      v11 = *(_QWORD *)(a1 + 192);
      if ( a2 == *(_QWORD *)(v11 + 48) )
      {
        if ( a3 )
        {
          v13 = -2147418113;
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x733,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)0x8000FFFFLL,
            v30);
        }
        else
        {
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v10 + 344LL))(v10, v11, 0LL);
          if ( *(_BYTE *)(a1 + 188) )
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, &WPP_8f522ea4bf9e3fa5b38ae1f25d9817c8_Traceguids);
            }
            goto LABEL_28;
          }
          v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 296LL))(
                  *(_QWORD *)(a1 + 168),
                  *(_QWORD *)(a1 + 192));
          v13 = v12;
          if ( v12 >= 0 )
          {
            *(_BYTE *)(a1 + 188) = 1;
            *(_BYTE *)(a1 + 200) = 0;
            if ( !*(_QWORD *)(a1 + 424) )
            {
              CPowerReferenceManager::AcquirePowerReferenceForStream(g_powerReferenceManager, &v36, a1);
              v14 = v37;
              *(_QWORD *)(a1 + 424) = v36;
              v15 = *(std::_Ref_count_base **)(a1 + 432);
              v36 = 0LL;
              v37 = 0LL;
              *(_QWORD *)(a1 + 432) = v14;
              if ( v15 )
              {
                std::_Ref_count_base::_Decref(v15);
                if ( v37 )
                  std::_Ref_count_base::_Decref(v37);
              }
            }
            v16 = *(_QWORD *)(a1 + 192) + 8LL;
            v32 = 0LL;
            if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 24LL))(v16, &v32) >= 0 )
            {
              Context = 0LL;
              if ( InitOnceBeginInitialize(
                     &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper,
                     0,
                     fPending,
                     (LPVOID *)&Context)
                && fPending[0] )
              {
                Context = qword_1801B3518;
                qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
                qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
                InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
              }
              v17 = Context[1];
              if ( *(_DWORD *)v17 > 4u )
              {
                v18 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 80LL))(*(_QWORD *)(a1 + 192) + 8LL);
                v19 = *(_QWORD *)(a1 + 168);
                v46 = v18;
                v53 = &v46;
                v54 = 8LL;
                v20 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 64LL))(v19);
                v21 = &word_18015F720;
                LODWORD(v22) = 0;
                if ( v20 )
                {
                  v21 = (const WCHAR *)v20;
                  v22 = -1LL;
                  do
                    ++v22;
                  while ( *(_WORD *)(v20 + 2 * v22) );
                }
                v55 = v21;
                v56 = 2 * v22 + 2;
                v57 = 0;
                fPending[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 40LL))(v32);
                v58 = &fPending[1];
                v59 = 4LL;
                HIDWORD(Context_8[0]) = 4;
                v47 = *(unsigned __int16 **)(v17 + 8);
                LODWORD(Context_8[0]) = ((unsigned int)&unk_180173277 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                v23 = *(_QWORD *)(v17 + 32);
                Context_8[1] = 0LL;
                v48 = *v47;
                v50 = &unk_180173282;
                v49 = 2;
                v51 = 62;
                v52 = 1;
                EtwEventWriteTransfer(v23, Context_8, 0LL, 0LL, 5, &v47);
              }
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 48LL))(v32);
              IsTSSessionIdRegisterVolumeTrackerForSessionSupported();
            }
            if ( QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 472)) )
              *(_QWORD *)(a1 + 480) = *(_QWORD *)(a1 + 472);
            if ( v32 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
LABEL_28:
            v13 = 0;
            goto LABEL_29;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x73A,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v12,
            v30);
        }
      }
      else
      {
        v13 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x730,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x80070057LL,
          v30);
      }
    }
    else
    {
      v13 = -2004287487;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x72F,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890001LL,
        v30);
    }
  }
  else
  {
    v13 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x72E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      v30);
  }
LABEL_29:
  if ( v44 )
  {
    if ( v44 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\Result.h",
        (const char *)0x8007029CLL,
        v30);
    v24 = (_QWORD *)v42[0];
    v44 = 0;
    v25 = *(_QWORD **)v42[0];
    if ( *(_QWORD *)v42[0] )
    {
      while ( v25 != v42 )
      {
        v24 = v25 + 2;
        v42[0] = v25 + 2;
        v25 = (_QWORD *)v25[2];
        if ( !v25 )
          goto LABEL_35;
      }
      *v24 = v43;
    }
LABEL_35:
    v42[0] = 0LL;
  }
  if ( v39 )
    LeaveCriticalSection(lpCriticalSection);
  return v13;
}
