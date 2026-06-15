/*
 * XREFs of ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x18000EA50
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180027ED0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800320C0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x1800AEB44 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800BA87C (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x1800BE378 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     WPP_SF_dq @ 0x1800C3A70 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x1800CCC3C (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 */

__int64 __fastcall CAudioSession::StopStream(CAudioSession *this, struct CAudioStream *a2)
{
  unsigned int v2; // r14d
  __int64 v3; // rsi
  int v4; // r13d
  int updated; // edi
  struct CAudioStream *v6; // r12
  unsigned __int64 v8; // rcx
  unsigned int v9; // edx
  unsigned __int64 v10; // r15
  bool v11; // zf
  BOOL v12; // edi
  int v13; // r8d
  __int64 v14; // rax
  int v15; // edx
  unsigned int v16; // r15d
  int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rcx
  int v20; // eax
  int v21; // ecx
  __int64 v23; // r8
  __int64 v24; // rsi
  __int64 v25; // r8
  CAudioStream **v26; // rax
  CAudioStream *v27; // rdi
  __int64 v28; // [rsp+20h] [rbp-E0h]
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  struct CAudioStream *v30; // [rsp+48h] [rbp-B8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-B0h] BYREF
  char v32; // [rsp+58h] [rbp-A8h]
  LPCRITICAL_SECTION v33; // [rsp+60h] [rbp-A0h] BYREF
  char v34; // [rsp+68h] [rbp-98h]
  void **v35; // [rsp+70h] [rbp-90h]
  CAudioSession *v36; // [rsp+78h] [rbp-88h]
  __int64 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  char v39[32]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v40[1024]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+8F8h] [rbp+7F8h]

  v2 = 0;
  v30 = a2;
  v3 = 0LL;
  v4 = 0;
  updated = 0;
  v6 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, this, a2);
  }
  v32 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v8 = *((_QWORD *)this + 13);
  v9 = 0;
  LODWORD(v29) = 0;
  if ( v8 )
  {
    v10 = 0LL;
    while ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v10) != v6 )
    {
      v10 = ++v9;
      LODWORD(v29) = v9;
      if ( v9 >= v8 )
        goto LABEL_23;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v28 = *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                         (char *)this + 96,
                         v10);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 56LL, v23, (unsigned int)v29);
    }
    if ( v10 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v3 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 80LL))(v3);
    v11 = (*((_DWORD *)this + 68))-- == 1;
    v4 = 1;
    if ( v11 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          57LL,
          &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
          *((unsigned int *)this + 68));
      }
      (*(void (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 136LL))(this, 0LL);
    }
    v12 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 64LL))(v3 + 8) != 0;
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 72) + 120LL))(*(_QWORD *)(v3 + 72));
    v14 = *(unsigned int *)(v3 + 328);
    if ( v12 )
      v15 = dword_18016CBC0[v14];
    else
      v15 = dword_18016CB60[v14];
    v16 = *(_DWORD *)(v3 + 220);
    v17 = 0;
    if ( v13 )
      v17 = 16;
    v18 = (*(_BYTE *)(v3 + 216) == 0) + 2 * (v15 + v17);
    if ( v18 != v16 )
    {
      v19 = *(_QWORD *)(v3 + 56);
      *(_DWORD *)(v3 + 220) = v18;
      v29 = 0LL;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 80LL))(v19, &v29);
      v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v29 + 208LL))(v29, 1LL, v18, v16);
      updated = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E2,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v20,
          v28);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v29);
        goto LABEL_22;
      }
      if ( v29 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
    }
    updated = 0;
LABEL_22:
    v6 = v30;
  }
LABEL_23:
  if ( v32 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v3 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v21 = *(_DWORD *)(v3 + 288);
    v35 = &CAudioStreamStateChanged::`vftable';
    v36 = this;
    v37 = 1LL;
    v38 = v3;
    if ( v21 != 1 )
    {
      LODWORD(v28) = v21;
      StringCchPrintfW(
        v40,
        0x400uLL,
        L"Stream %p: From [%d (%s)] to [%d (%s)]",
        v3,
        v28,
        *(_QWORD *)(v3 + 296),
        0,
        L"CAudioSession::StopStream: in _Streams");
      LogProductionAssert(0x6C966DuLL, v40);
    }
    *(_DWORD *)(v3 + 288) = 0;
    *(_QWORD *)(v3 + 296) = L"CAudioSession::StopStream: in _Streams";
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496));
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
  if ( !v4 )
  {
    v34 = 0;
    v33 = (LPCRITICAL_SECTION)((char *)this + 128);
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v33);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 58LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids);
    }
    if ( *((_QWORD *)this + 22) )
    {
      v24 = 0LL;
      while ( *(struct CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                         (char *)this + 168,
                                         v24) != v6 )
      {
        v24 = ++v2;
        if ( (unsigned __int64)v2 >= *((_QWORD *)this + 22) )
          goto LABEL_58;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[]((char *)this + 168, v24);
        WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 59LL, v25, v2);
      }
      v26 = (CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                               (char *)this + 168,
                               v24);
      v27 = *v26;
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)*v26 + 80LL))(*v26);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      CAudioStreamStateChanged::CAudioStreamStateChanged(v39, this, 1LL);
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496));
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
      updated = CAudioStream::UpdateStreamPriority(v27);
    }
LABEL_58:
    if ( v34 )
      LeaveCriticalSection(v33);
  }
  if ( updated < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::StopStream", 3161, updated);
  return (unsigned int)updated;
}
