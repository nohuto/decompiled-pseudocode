/*
 * XREFs of ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x1800248C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180023370 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z @ 0x180025D50 (-FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18004F6E0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     atexit @ 0x1800642B4 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800E5B70 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___ @ 0x180102998 (wil--details--lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___--_lambda_call__lambda_9872.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::StopStream(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r14
  DWORD CurrentThreadId; // esi
  unsigned __int64 v8; // rdi
  signed __int64 v9; // rcx
  signed int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  unsigned int v14; // r15d
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rax
  void *v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  _QWORD *v21; // rax
  __int64 v22; // rdx
  double v23; // xmm6_8
  struct CEndpointCharacteristics *v24; // r14
  AudioJournal *v25; // rcx
  int StreamInfo; // eax
  __int64 v27; // rcx
  BYTE *v28; // r14
  const WCHAR *v29; // r12
  DWORD v30; // r13d
  LSTATUS v31; // eax
  LSTATUS v32; // eax
  __int64 v33; // rcx
  volatile signed __int32 *v34; // rdi
  HANDLE ProcessHeap; // rax
  _DWORD *v37; // rax
  signed __int64 v38; // rax
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rdx
  int dwOptions; // [rsp+28h] [rbp-E0h]
  int v43[2]; // [rsp+58h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A8h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp-A0h] BYREF
  int v46; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v47; // [rsp+70h] [rbp-98h] BYREF
  LPVOID Context; // [rsp+78h] [rbp-90h] BYREF
  __int64 v49; // [rsp+80h] [rbp-88h] BYREF
  BYTE *lpData; // [rsp+88h] [rbp-80h] BYREF
  struct CEndpointCharacteristics *v51; // [rsp+90h] [rbp-78h] BYREF
  __int128 v52; // [rsp+98h] [rbp-70h] BYREF
  __int128 v53; // [rsp+A8h] [rbp-60h]
  __int128 v54; // [rsp+B8h] [rbp-50h] BYREF
  char v55; // [rsp+C8h] [rbp-40h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+D0h] [rbp-38h] BYREF
  char v57; // [rsp+D8h] [rbp-30h]
  __int64 (__fastcall **v58)(); // [rsp+E8h] [rbp-20h] BYREF
  __int128 v59; // [rsp+F0h] [rbp-18h]
  __int128 v60; // [rsp+100h] [rbp-8h]
  _QWORD v61[2]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v62; // [rsp+120h] [rbp+18h]
  DWORD v63; // [rsp+128h] [rbp+20h]
  __int64 v64; // [rsp+130h] [rbp+28h]
  unsigned int v65; // [rsp+138h] [rbp+30h]
  __int64 v66; // [rsp+140h] [rbp+38h] BYREF
  _DWORD v67[2]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v68; // [rsp+150h] [rbp+48h]
  __int64 v69; // [rsp+158h] [rbp+50h]
  __int64 v70; // [rsp+160h] [rbp+58h]
  unsigned __int16 *v71; // [rsp+178h] [rbp+70h] BYREF
  int v72; // [rsp+180h] [rbp+78h]
  int v73; // [rsp+184h] [rbp+7Ch]
  void *v74; // [rsp+188h] [rbp+80h]
  int v75; // [rsp+190h] [rbp+88h]
  int v76; // [rsp+194h] [rbp+8Ch]
  int *v77; // [rsp+198h] [rbp+90h]
  __int64 v78; // [rsp+1A0h] [rbp+98h]
  __int64 *v79; // [rsp+1A8h] [rbp+A0h]
  __int64 v80; // [rsp+1B0h] [rbp+A8h]
  void *v81; // [rsp+1B8h] [rbp+B0h]
  int v82; // [rsp+1C0h] [rbp+B8h]
  int v83; // [rsp+1C4h] [rbp+BCh]
  __int64 *v84; // [rsp+1C8h] [rbp+C0h]
  __int64 v85; // [rsp+1D0h] [rbp+C8h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v69 = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 224);
  v57 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v70 = a1;
  LOWORD(v43[0]) = 0;
  *(_QWORD *)&v52 = v43;
  *((_QWORD *)&v52 + 1) = a1;
  v54 = v52;
  v55 = 1;
  *(_QWORD *)&v52 = (char *)v43 + 1;
  *((_QWORD *)&v52 + 1) = v43;
  *(_QWORD *)&v53 = a1;
  *((_QWORD *)&v53 + 1) = &v54;
  v58 = &off_18014FE28;
  v59 = v52;
  v60 = v53;
  v61[0] = 0LL;
  v61[1] = &v58;
  v62 = 0LL;
  v63 = 0;
  v64 = 0LL;
  v6 = wil::details::g_pThreadFailureCallbacks;
  if ( !wil::details::g_pThreadFailureCallbacks )
    goto LABEL_67;
  CurrentThreadId = GetCurrentThreadId();
  v8 = CurrentThreadId % 0xAuLL;
  v9 = *(_QWORD *)(v6 + 8 * v8);
  if ( !v9 )
  {
LABEL_63:
    ProcessHeap = GetProcessHeap();
    v37 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
    v9 = (signed __int64)v37;
    if ( v37 )
    {
      *(_QWORD *)v37 = 0LL;
      v37[2] = CurrentThreadId;
      *((_QWORD *)v37 + 2) = 0LL;
      _m_prefetchw((const void *)(v6 + 8 * v8));
      do
      {
        v38 = *(_QWORD *)(v6 + 8 * v8);
        *(_QWORD *)(v9 + 16) = v38;
      }
      while ( v38 != _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8 * v8), v9, v38) );
      goto LABEL_4;
    }
LABEL_67:
    v9 = 0LL;
    goto LABEL_4;
  }
  while ( *(_DWORD *)(v9 + 8) != CurrentThreadId )
  {
    v9 = *(_QWORD *)(v9 + 16);
    if ( !v9 )
      goto LABEL_63;
  }
LABEL_4:
  v61[0] = v9;
  if ( v9 )
  {
    v62 = *(_QWORD *)v9;
    *(_QWORD *)v9 = v61;
    v63 = GetCurrentThreadId();
  }
  v10 = -2147024809;
  if ( *(_DWORD *)(a1 + 184) )
  {
    v11 = *(_QWORD *)(a1 + 168);
    if ( v11 )
    {
      v12 = *(_QWORD *)(a1 + 192);
      if ( a2 == *(_QWORD *)(v12 + 48) )
      {
        (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)v11 + 344LL))(v11, v12, a3 == 1);
        if ( !*(_BYTE *)(a1 + 188) )
        {
LABEL_24:
          v14 = 0;
          goto LABEL_25;
        }
        v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 168) + 304LL))(
                *(_QWORD *)(a1 + 168),
                *(_QWORD *)(a1 + 192));
        v14 = v13;
        if ( v13 >= 0 )
        {
          *(_BYTE *)(a1 + 188) = 0;
          QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 512));
          LOBYTE(v43[0]) = 1;
          v15 = *(_QWORD *)(a1 + 192);
          if ( v15 && *(_QWORD *)(a1 + 168) )
          {
            v49 = 0LL;
            if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v15 + 8) + 24LL))(v15 + 8, &v49) >= 0 )
            {
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
              v16 = *((_QWORD *)Context + 1);
              if ( *(_DWORD *)v16 > 4u )
              {
                v46 = a3;
                v77 = &v46;
                v78 = 4LL;
                v66 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 80LL))(*(_QWORD *)(a1 + 192) + 8LL);
                v79 = &v66;
                v80 = 8LL;
                v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 64LL))(*(_QWORD *)(a1 + 168));
                v18 = &unk_180162EC4;
                LODWORD(v19) = 0;
                if ( v17 )
                {
                  v18 = (void *)v17;
                  v19 = -1LL;
                  do
                    ++v19;
                  while ( *(_WORD *)(v17 + 2 * v19) );
                }
                v81 = v18;
                v82 = 2 * v19 + 2;
                v83 = 0;
                LODWORD(v47) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v49 + 40LL))(v49);
                v84 = &v47;
                v85 = 4LL;
                v67[0] = 184549376;
                v67[1] = 4;
                v68 = 0LL;
                v71 = *(unsigned __int16 **)(v16 + 8);
                v72 = *v71;
                v73 = 2;
                v74 = &unk_180178283;
                v75 = 92;
                v76 = 1;
                v65 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
                EtwEventWriteTransfer(*(_QWORD *)(v16 + 32), v67, 0LL, 0LL, 6, &v71);
              }
            }
            if ( v49 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
          }
          goto LABEL_24;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7E0,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v13);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7D8,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x80070057LL);
        v14 = -2147024809;
      }
    }
    else
    {
      v14 = -2004287487;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D7,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890001LL);
    }
  }
  else
  {
    v14 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D6,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
  }
LABEL_25:
  if ( v63 )
  {
    if ( v63 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3A9,
        (unsigned int)"internal\\sdk\\inc\\wil\\opensource\\wil\\result.h",
        (const char *)0x8007029CLL,
        dwOptions);
    v63 = 0;
    v20 = (_QWORD *)v61[0];
    v21 = *(_QWORD **)v61[0];
    if ( *(_QWORD *)v61[0] )
    {
      while ( v21 != v61 )
      {
        v20 = v21 + 2;
        v61[0] = v21 + 2;
        v21 = (_QWORD *)v21[2];
        if ( !v21 )
          goto LABEL_31;
      }
      *v20 = v62;
    }
LABEL_31:
    v61[0] = 0LL;
  }
  if ( v55 )
  {
    v55 = 0;
    if ( *(_BYTE *)v54 )
    {
      v51 = 0LL;
      (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, struct CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                + 24LL))(
        g_pEndpointCharacteristicsCache,
        *(_QWORD *)(*((_QWORD *)&v54 + 1) + 216LL),
        0LL,
        0LL,
        &v51);
      v22 = *(_QWORD *)(*((_QWORD *)&v54 + 1) + 520LL);
      v23 = 0.0;
      if ( v22 )
        v23 = (double)(*(_DWORD *)(*((_QWORD *)&v54 + 1) + 512LL) - *(_DWORD *)(*((_QWORD *)&v54 + 1) + 504LL))
            / (double)(int)v22;
      v24 = v51;
      EnterCriticalSection(&CriticalSection);
      if ( g_AudioJournal )
      {
        StreamInfo = AudioJournal::FindStreamInfo(v25, v24, (struct AudioJournal::StreamInfo **)&lpData, &v43[1]);
        if ( StreamInfo >= 0 )
        {
          *(double *)&lpData[200 * v43[1] + 168] = v23 + *(double *)&lpData[200 * v43[1] + 168];
          v27 = 200LL * v43[1];
          v28 = lpData;
          if ( !*(_DWORD *)&lpData[v27 + 148] )
          {
            *(_DWORD *)&lpData[v27 + 148] = 1;
            v28 = lpData;
          }
          if ( v28 == (BYTE *)&unk_1801B8D98 )
          {
            v29 = L"Render";
            v30 = 600;
          }
          else if ( v28 == (BYTE *)&unk_1801B8FF0 )
          {
            v29 = L"Capture";
            v30 = 400;
          }
          else
          {
            if ( v28 != (BYTE *)&unk_1801B9180 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1ED,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
                (const char *)0x80070057LL);
LABEL_84:
              v39 = (unsigned int)v10;
              v40 = 336LL;
              goto LABEL_85;
            }
            v29 = L"UnknownStream";
            v30 = 200;
          }
          hKey = 0LL;
          *(_QWORD *)&v52 = &hKey;
          BYTE8(v52) = 1;
          v31 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, &word_1801B9248, 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
          v10 = v31;
          if ( v31 > 0 )
            v10 = (unsigned __int16)v31 | 0x80070000;
          if ( v10 < 0 )
          {
            v41 = 452LL;
          }
          else
          {
            v32 = RegSetValueExW(hKey, v29, 0, 3u, v28, v30);
            v10 = v32;
            if ( v32 > 0 )
              v10 = (unsigned __int16)v32 | 0x80070000;
            if ( v10 >= 0 )
            {
              if ( hKey )
                RegCloseKey(hKey);
              LeaveCriticalSection(&CriticalSection);
              goto LABEL_51;
            }
            v41 = 455LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v41,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
            (const char *)(unsigned int)v10);
          wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___(&v52);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F0,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
            (const char *)(unsigned int)v10);
          goto LABEL_84;
        }
        v39 = (unsigned int)StreamInfo;
        v40 = 314LL;
      }
      else
      {
        v39 = 2147549183LL;
        v40 = 312LL;
      }
LABEL_85:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v40,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
        (const char *)v39);
      LeaveCriticalSection(&CriticalSection);
LABEL_51:
      if ( v51 )
        (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v51 + 16LL))(v51);
    }
  }
  v33 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 496) = 0LL;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  *(_QWORD *)(a1 + 456) = 0LL;
  v34 = *(volatile signed __int32 **)(a1 + 464);
  *(_QWORD *)(a1 + 464) = 0LL;
  if ( v34 )
  {
    if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
      if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
    }
  }
  if ( v57 )
    LeaveCriticalSection(lpCriticalSection);
  return v14;
}
