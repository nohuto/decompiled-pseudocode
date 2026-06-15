/*
 * XREFs of ?StartStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x18001DB00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x18001F130 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18003EA64 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800C2620 (WPP_SF_.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800E5B70 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
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
  __int64 v14; // rax
  std::_Ref_count_base *v15; // rdx
  std::_Ref_count_base *v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  void *v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  HANDLE ProcessHeap; // rax
  _DWORD *v29; // rax
  signed __int64 v30; // rax
  int v31; // [rsp+28h] [rbp-E0h]
  __int64 v32; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C8h] BYREF
  WINBOOL fPending[2]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD *Context; // [rsp+50h] [rbp-B8h] BYREF
  LPVOID Context_8[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-A0h] BYREF
  std::_Ref_count_base *v38; // [rsp+70h] [rbp-98h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+78h] [rbp-90h] BYREF
  char v40; // [rsp+80h] [rbp-88h]
  __int64 (__fastcall **v41)(); // [rsp+88h] [rbp-80h] BYREF
  __int128 v42; // [rsp+90h] [rbp-78h]
  _QWORD v43[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-58h]
  DWORD v45; // [rsp+B8h] [rbp-50h]
  __int64 v46; // [rsp+C0h] [rbp-48h]
  __int64 v47; // [rsp+C8h] [rbp-40h]
  _QWORD v48[3]; // [rsp+D0h] [rbp-38h] BYREF
  unsigned __int16 *v49; // [rsp+E8h] [rbp-20h] BYREF
  int v50; // [rsp+F0h] [rbp-18h]
  int v51; // [rsp+F4h] [rbp-14h]
  void *v52; // [rsp+F8h] [rbp-10h]
  int v53; // [rsp+100h] [rbp-8h]
  int v54; // [rsp+104h] [rbp-4h]
  _QWORD *v55; // [rsp+108h] [rbp+0h]
  __int64 v56; // [rsp+110h] [rbp+8h]
  void *v57; // [rsp+118h] [rbp+10h]
  int v58; // [rsp+120h] [rbp+18h]
  int v59; // [rsp+124h] [rbp+1Ch]
  WINBOOL *v60; // [rsp+128h] [rbp+20h]
  __int64 v61; // [rsp+130h] [rbp+28h]
  wil::details::in1diag3 *retaddr; // [rsp+170h] [rbp+68h]

  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 224);
  v40 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = wil::details::g_pThreadFailureCallbacks;
  Context_8[0] = &v32;
  Context_8[1] = (LPVOID)a1;
  v41 = off_18014FD98;
  v43[1] = &v41;
  LOBYTE(v32) = 0;
  v43[0] = 0LL;
  v44 = 0LL;
  v45 = 0;
  v46 = 0LL;
  v42 = *(_OWORD *)Context_8;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_43;
  CurrentThreadId = GetCurrentThreadId();
  v8 = *(_QWORD *)(v6 + 8 * (CurrentThreadId % 0xA));
  v9 = (signed __int64 *)(v6 + 8 * (CurrentThreadId % 0xA));
  if ( !v8 )
  {
LABEL_39:
    ProcessHeap = GetProcessHeap();
    v29 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v8 = (signed __int64)v29;
    if ( v29 )
    {
      *(_QWORD *)v29 = 0LL;
      v29[2] = CurrentThreadId;
      *((_QWORD *)v29 + 2) = 0LL;
      _m_prefetchw(v9);
      do
      {
        v30 = *v9;
        *(_QWORD *)(v8 + 16) = *v9;
      }
      while ( v30 != _InterlockedCompareExchange64(v9, v8, v30) );
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
  v43[0] = v8;
  if ( v8 )
  {
    v44 = *(_QWORD *)v8;
    *(_QWORD *)v8 = v43;
    v45 = GetCurrentThreadId();
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
            (void *)0x73B,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)0x8000FFFFLL);
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
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 35LL, &WPP_68f7ce5d5567395ebc4ef499649768ed_Traceguids);
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
            if ( !*(_QWORD *)(a1 + 456) )
            {
              CPowerReferenceManager::AcquirePowerReferenceForStream(g_powerReferenceManager, &v37, a1);
              v14 = v37;
              v15 = v38;
              *(_QWORD *)(a1 + 456) = v37;
              v16 = *(std::_Ref_count_base **)(a1 + 464);
              v37 = 0LL;
              v38 = 0LL;
              v47 = v14;
              v48[1] = v15;
              *(_QWORD *)(a1 + 464) = v15;
              if ( v16 )
              {
                std::_Ref_count_base::_Decref(v16);
                if ( v38 )
                  std::_Ref_count_base::_Decref(v38);
              }
            }
            v17 = *(_QWORD *)(a1 + 192) + 8LL;
            v33 = 0LL;
            if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL))(v17, &v33) >= 0 )
            {
              Context = 0LL;
              if ( InitOnceBeginInitialize(
                     &`AudioSrvTelemetryProvider::Instance'::`2'::wrapper,
                     0,
                     fPending,
                     (LPVOID *)&Context)
                && fPending[0] )
              {
                Context = &qword_1801B8588;
                qword_1801B8588 = &AudioSrvTelemetryProvider::`vftable';
                qword_1801B85A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B8588, qword_1801B85A0);
                InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B8588);
              }
              v18 = Context[1];
              if ( *(_DWORD *)v18 > 4u )
              {
                v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 80LL))(*(_QWORD *)(a1 + 192) + 8LL);
                v20 = *(_QWORD *)(a1 + 168);
                v48[0] = v19;
                v55 = v48;
                v56 = 8LL;
                v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 64LL))(v20);
                v22 = &unk_180162EC4;
                LODWORD(v23) = 0;
                if ( v21 )
                {
                  v22 = (void *)v21;
                  v23 = -1LL;
                  do
                    ++v23;
                  while ( *(_WORD *)(v21 + 2 * v23) );
                }
                v57 = v22;
                v58 = 2 * v23 + 2;
                v59 = 0;
                fPending[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 40LL))(v33);
                v60 = &fPending[1];
                v61 = 4LL;
                v49 = *(unsigned __int16 **)(v18 + 8);
                *(_OWORD *)Context_8 = 0x40B000000uLL;
                v50 = *v49;
                v52 = &unk_180178387;
                v51 = 2;
                v24 = *(_QWORD *)(v18 + 32);
                v53 = 62;
                v54 = 1;
                LODWORD(v47) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                EtwEventWriteTransfer(v24, Context_8, 0LL, 0LL, 5, &v49);
              }
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 48LL))(v33);
              IsTSSessionIdRegisterVolumeTrackerForSessionSupported();
            }
            if ( QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 504)) )
              *(_QWORD *)(a1 + 512) = *(_QWORD *)(a1 + 504);
            if ( v33 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
LABEL_28:
            v13 = 0;
            goto LABEL_29;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x742,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v12);
        }
      }
      else
      {
        v13 = -2147024809;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x738,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x80070057LL);
      }
    }
    else
    {
      v13 = -2004287487;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x737,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890001LL);
    }
  }
  else
  {
    v13 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x736,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
  }
LABEL_29:
  if ( v45 )
  {
    if ( v45 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3A9,
        (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        v31);
    v25 = (_QWORD *)v43[0];
    v45 = 0;
    v26 = *(_QWORD **)v43[0];
    if ( *(_QWORD *)v43[0] )
    {
      while ( v26 != v43 )
      {
        v25 = v26 + 2;
        v43[0] = v26 + 2;
        v26 = (_QWORD *)v26[2];
        if ( !v26 )
          goto LABEL_35;
      }
      *v25 = v44;
    }
LABEL_35:
    v43[0] = 0LL;
  }
  if ( v40 )
    LeaveCriticalSection(lpCriticalSection);
  return v13;
}
