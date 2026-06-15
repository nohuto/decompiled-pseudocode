/*
 * XREFs of ?StopStream@CVADServer@@UEAAJ_KW4__MIDL___MIDL_itf_virtualaudiorpc_0000_0000_0002@@@Z @ 0x180028980
 * Callers:
 *     <none>
 * Callees:
 *     ?FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z @ 0x180026490 (-FindStreamInfo@AudioJournal@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUStreamInfo@1@PEAH@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800DA4BC (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___ @ 0x1800F6AD8 (wil--details--lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___--_lambda_call__lambda_9872.c)
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
  const WCHAR *v18; // rdx
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
  struct CEndpointCharacteristics **dwOptionsa; // [rsp+28h] [rbp-E0h]
  int dwOptionsb; // [rsp+28h] [rbp-E0h]
  int dwOptionsc; // [rsp+28h] [rbp-E0h]
  int v46[2]; // [rsp+58h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+60h] [rbp-A8h] BYREF
  WINBOOL fPending; // [rsp+68h] [rbp-A0h] BYREF
  int v49; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v50; // [rsp+70h] [rbp-98h] BYREF
  LPVOID Context; // [rsp+78h] [rbp-90h] BYREF
  __int64 v52; // [rsp+80h] [rbp-88h] BYREF
  BYTE *lpData; // [rsp+88h] [rbp-80h] BYREF
  struct CEndpointCharacteristics *v54; // [rsp+90h] [rbp-78h] BYREF
  __int128 v55; // [rsp+98h] [rbp-70h] BYREF
  __int128 v56; // [rsp+A8h] [rbp-60h] BYREF
  char v57; // [rsp+B8h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+C0h] [rbp-48h] BYREF
  char v59; // [rsp+C8h] [rbp-40h]
  __int128 v60; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v61; // [rsp+E0h] [rbp-28h]
  __int64 (__fastcall **v62)(); // [rsp+F8h] [rbp-10h] BYREF
  __int128 v63; // [rsp+100h] [rbp-8h]
  __int128 v64; // [rsp+110h] [rbp+8h]
  _QWORD v65[2]; // [rsp+120h] [rbp+18h] BYREF
  __int64 v66; // [rsp+130h] [rbp+28h]
  DWORD v67; // [rsp+138h] [rbp+30h]
  __int64 v68; // [rsp+140h] [rbp+38h]
  _QWORD v69[2]; // [rsp+148h] [rbp+40h] BYREF
  unsigned __int16 *v70; // [rsp+158h] [rbp+50h] BYREF
  int v71; // [rsp+160h] [rbp+58h]
  int v72; // [rsp+164h] [rbp+5Ch]
  void *v73; // [rsp+168h] [rbp+60h]
  int v74; // [rsp+170h] [rbp+68h]
  int v75; // [rsp+174h] [rbp+6Ch]
  int *v76; // [rsp+178h] [rbp+70h]
  __int64 v77; // [rsp+180h] [rbp+78h]
  _QWORD *v78; // [rsp+188h] [rbp+80h]
  __int64 v79; // [rsp+190h] [rbp+88h]
  const WCHAR *v80; // [rsp+198h] [rbp+90h]
  int v81; // [rsp+1A0h] [rbp+98h]
  int v82; // [rsp+1A4h] [rbp+9Ch]
  __int64 *v83; // [rsp+1A8h] [rbp+A0h]
  __int64 v84; // [rsp+1B0h] [rbp+A8h]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v69[1] = -2LL;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 224);
  v59 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  LOWORD(v46[0]) = 0;
  *(_QWORD *)&v55 = v46;
  *((_QWORD *)&v55 + 1) = a1;
  v56 = v55;
  v57 = 1;
  *(_QWORD *)&v60 = (char *)v46 + 1;
  *((_QWORD *)&v60 + 1) = v46;
  *(_QWORD *)&v61 = a1;
  *((_QWORD *)&v61 + 1) = &v56;
  v62 = &off_18014A168;
  v63 = v60;
  v64 = v61;
  v65[0] = 0LL;
  v65[1] = &v62;
  v66 = 0LL;
  v67 = 0;
  v68 = 0LL;
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
  v65[0] = v9;
  if ( v9 )
  {
    v66 = *(_QWORD *)v9;
    *(_QWORD *)v9 = v65;
    v67 = GetCurrentThreadId();
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
          QueryPerformanceCounter((LARGE_INTEGER *)(a1 + 480));
          LOBYTE(v46[0]) = 1;
          v15 = *(_QWORD *)(a1 + 192);
          if ( v15 && *(_QWORD *)(a1 + 168) )
          {
            v52 = 0LL;
            if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)(v15 + 8) + 24LL))(v15 + 8, &v52) >= 0 )
            {
              Context = 0LL;
              if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context)
                && fPending )
              {
                Context = qword_1801B3518;
                qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
                qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
                atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
                wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
                InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
              }
              v16 = *((_QWORD *)Context + 1);
              if ( *(_DWORD *)v16 > 4u )
              {
                v49 = a3;
                v76 = &v49;
                v77 = 4LL;
                v69[0] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(a1 + 192) + 8LL) + 80LL))(*(_QWORD *)(a1 + 192) + 8LL);
                v78 = v69;
                v79 = 8LL;
                v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 64LL))(*(_QWORD *)(a1 + 168));
                v18 = &word_18015F720;
                LODWORD(v19) = 0;
                if ( v17 )
                {
                  v18 = (const WCHAR *)v17;
                  v19 = -1LL;
                  do
                    ++v19;
                  while ( *(_WORD *)(v17 + 2 * v19) );
                }
                v80 = v18;
                v81 = 2 * v19 + 2;
                v82 = 0;
                LODWORD(v50) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 40LL))(v52);
                v83 = &v50;
                v84 = 4LL;
                LODWORD(v55) = ((unsigned int)&unk_180173173 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                DWORD1(v55) = 4;
                *((_QWORD *)&v55 + 1) = 0LL;
                v70 = *(unsigned __int16 **)(v16 + 8);
                v71 = *v70;
                v72 = 2;
                v73 = &unk_18017317E;
                v74 = 92;
                v75 = 1;
                EtwEventWriteTransfer(*(_QWORD *)(v16 + 32), &v55, 0LL, 0LL, 6, &v70);
              }
            }
            if ( v52 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v52 + 16LL))(v52);
          }
          goto LABEL_24;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7D8,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v13,
          dwOptions);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7D0,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x80070057LL,
          dwOptions);
        v14 = -2147024809;
      }
    }
    else
    {
      v14 = -2004287487;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7CF,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x88890001LL,
        dwOptions);
    }
  }
  else
  {
    v14 = -2004287487;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7CE,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL,
      dwOptions);
  }
LABEL_25:
  if ( v67 )
  {
    if ( v67 != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x3B1,
        (unsigned int)"internal\\sdk\\inc\\wil\\Result.h",
        (const char *)0x8007029CLL,
        dwOptions);
    v67 = 0;
    v20 = (_QWORD *)v65[0];
    v21 = *(_QWORD **)v65[0];
    if ( *(_QWORD *)v65[0] )
    {
      while ( v21 != v65 )
      {
        v20 = v21 + 2;
        v65[0] = v21 + 2;
        v21 = (_QWORD *)v21[2];
        if ( !v21 )
          goto LABEL_31;
      }
      *v20 = v66;
    }
LABEL_31:
    v65[0] = 0LL;
  }
  if ( v57 )
  {
    v57 = 0;
    if ( *(_BYTE *)v56 )
    {
      v54 = 0LL;
      dwOptionsa = &v54;
      (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
        g_pEndpointCharacteristicsCache,
        *(_QWORD *)(*((_QWORD *)&v56 + 1) + 216LL),
        0LL,
        0LL);
      v22 = *(_QWORD *)(*((_QWORD *)&v56 + 1) + 488LL);
      v23 = 0.0;
      if ( v22 )
        v23 = (double)(*(_DWORD *)(*((_QWORD *)&v56 + 1) + 480LL) - *(_DWORD *)(*((_QWORD *)&v56 + 1) + 472LL))
            / (double)(int)v22;
      v24 = v54;
      EnterCriticalSection(&CriticalSection);
      if ( g_AudioJournal )
      {
        StreamInfo = AudioJournal::FindStreamInfo(v25, v24, (struct AudioJournal::StreamInfo **)&lpData, &v46[1]);
        if ( StreamInfo >= 0 )
        {
          *(double *)&lpData[200 * v46[1] + 168] = v23 + *(double *)&lpData[200 * v46[1] + 168];
          v27 = 200LL * v46[1];
          v28 = lpData;
          if ( !*(_DWORD *)&lpData[v27 + 148] )
          {
            *(_DWORD *)&lpData[v27 + 148] = 1;
            v28 = lpData;
          }
          if ( v28 == (BYTE *)&unk_1801B3CF8 )
          {
            v29 = L"Render";
            v30 = 600;
          }
          else if ( v28 == (BYTE *)&unk_1801B3F50 )
          {
            v29 = L"Capture";
            v30 = 400;
          }
          else
          {
            if ( v28 != (BYTE *)&unk_1801B40E0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x1ED,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
                (const char *)0x80070057LL,
                (int)&v54);
LABEL_84:
              v39 = (unsigned int)v10;
              v40 = 336LL;
              goto LABEL_85;
            }
            v29 = L"UnknownStream";
            v30 = 200;
          }
          hKey = 0LL;
          *(_QWORD *)&v60 = &hKey;
          BYTE8(v60) = 1;
          v31 = RegCreateKeyExW(HKEY_LOCAL_MACHINE, &word_1801B41A8, 0, 0LL, 0, 2u, 0LL, &hKey, 0LL);
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
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
            (const char *)(unsigned int)v10,
            dwOptionsb);
          wil::details::lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___::_lambda_call__lambda_98722233a2fe73481c7416c90accfe9a___(&v60);
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1F0,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
            (const char *)(unsigned int)v10,
            dwOptionsc);
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
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiojournal.cpp",
        (const char *)v39,
        (int)dwOptionsa);
      LeaveCriticalSection(&CriticalSection);
LABEL_51:
      if ( v54 )
        (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v54 + 16LL))(v54);
    }
  }
  v33 = *(_QWORD *)(a1 + 464);
  *(_QWORD *)(a1 + 464) = 0LL;
  if ( v33 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
  *(_QWORD *)(a1 + 424) = 0LL;
  v34 = *(volatile signed __int32 **)(a1 + 432);
  *(_QWORD *)(a1 + 432) = 0LL;
  if ( v34 )
  {
    if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v34)(v34);
      if ( _InterlockedExchangeAdd(v34 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v34 + 8LL))(v34);
    }
  }
  if ( v59 )
    LeaveCriticalSection(lpCriticalSection);
  return v14;
}
