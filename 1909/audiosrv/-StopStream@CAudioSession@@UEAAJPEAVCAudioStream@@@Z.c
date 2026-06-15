/*
 * XREFs of ?StopStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180028BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180011410 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180028760 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?UpdateStreamPriority@CAudioStream@@QEAAJXZ @ 0x18004E0B4 (-UpdateStreamPriority@CAudioStream@@QEAAJXZ.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x1800BD024 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800C8BA0 (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x1800CC714 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     WPP_SF_dq @ 0x1800D1E50 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x1800D2038 (WPP_SF_qq.c)
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
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // rsi
  _QWORD *v26; // rax
  __int64 v27; // r8
  CAudioStream **v28; // rax
  CAudioStream *v29; // rdi
  void (__fastcall ***v30)(_QWORD, __int64 *); // rax
  __int64 v31; // [rsp+20h] [rbp-E0h]
  __int64 v32; // [rsp+40h] [rbp-C0h] BYREF
  struct CAudioStream *v33; // [rsp+48h] [rbp-B8h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+50h] [rbp-B0h] BYREF
  char v35; // [rsp+58h] [rbp-A8h]
  LPCRITICAL_SECTION v36; // [rsp+60h] [rbp-A0h] BYREF
  char v37; // [rsp+68h] [rbp-98h]
  void (__fastcall **v38[4])(_QWORD, __int64 *); // [rsp+70h] [rbp-90h] BYREF
  char v39[32]; // [rsp+90h] [rbp-70h] BYREF
  unsigned __int16 v40[1024]; // [rsp+B0h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+8F8h] [rbp+7F8h]

  v2 = 0;
  v33 = a2;
  v3 = 0LL;
  v4 = 0;
  updated = 0;
  v6 = a2;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 55LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids, this, a2);
  }
  v35 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v8 = *((_QWORD *)this + 13);
  v9 = 0;
  LODWORD(v32) = 0;
  if ( v8 )
  {
    v10 = 0LL;
    while ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v10) != v6 )
    {
      v10 = ++v9;
      LODWORD(v32) = v9;
      if ( v9 >= v8 )
        goto LABEL_23;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v23 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                        (char *)this + 96,
                        v10);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 56LL, v24, (unsigned int)v32, *v23);
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
          &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids,
          *((unsigned int *)this + 68));
      }
      (*(void (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 136LL))(this, 0LL);
    }
    v12 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 8) + 64LL))(v3 + 8) != 0;
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 72) + 120LL))(*(_QWORD *)(v3 + 72));
    v14 = *(unsigned int *)(v3 + 328);
    if ( v12 )
      v15 = dword_180171070[v14];
    else
      v15 = dword_180171010[v14];
    v16 = *(_DWORD *)(v3 + 220);
    v17 = 0;
    if ( v13 )
      v17 = 16;
    v18 = (*(_BYTE *)(v3 + 216) == 0) + 2 * (v15 + v17);
    if ( v18 != v16 )
    {
      v19 = *(_QWORD *)(v3 + 56);
      *(_DWORD *)(v3 + 220) = v18;
      v32 = 0LL;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 80LL))(v19, &v32);
      v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v32 + 208LL))(v32, 1LL, v18, v16);
      updated = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E4,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v20);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v32);
        goto LABEL_22;
      }
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
    }
    updated = 0;
LABEL_22:
    v6 = v33;
  }
LABEL_23:
  if ( v35 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v3 )
  {
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v21 = *(_DWORD *)(v3 + 288);
    v38[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioStreamStateChanged::`vftable';
    v38[1] = (void (__fastcall **)(_QWORD, __int64 *))this;
    v38[2] = (void (__fastcall **)(_QWORD, __int64 *))1;
    v38[3] = (void (__fastcall **)(_QWORD, __int64 *))v3;
    if ( v21 != 1 )
    {
      LODWORD(v31) = v21;
      StringCchPrintfW(
        v40,
        1024LL,
        L"Stream %p: From [%d (%s)] to [%d (%s)]",
        v3,
        v31,
        *(_QWORD *)(v3 + 296),
        0,
        L"CAudioSession::StopStream: in _Streams");
      LogProductionAssert(0x6C966DuLL, v40);
    }
    *(_DWORD *)(v3 + 288) = 0;
    *(_QWORD *)(v3 + 296) = L"CAudioSession::StopStream: in _Streams";
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496), v38);
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
  }
  if ( !v4 )
  {
    v37 = 0;
    v36 = (LPCRITICAL_SECTION)((char *)this + 128);
    ATL::CCritSecLock::Lock(&v36);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 58LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids);
    }
    if ( *((_QWORD *)this + 22) )
    {
      v25 = 0LL;
      while ( *(struct CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                                         (char *)this + 168,
                                         v25) != v6 )
      {
        v25 = ++v2;
        if ( (unsigned __int64)v2 >= *((_QWORD *)this + 22) )
          goto LABEL_58;
      }
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v26 = (_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                          (char *)this + 168,
                          v25);
        WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 59LL, v27, v2, *v26);
      }
      v28 = (CAudioStream **)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                               (char *)this + 168,
                               v25);
      v29 = *v28;
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)*v28 + 80LL))(*v28);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
      v30 = (void (__fastcall ***)(_QWORD, __int64 *))CAudioStreamStateChanged::CAudioStreamStateChanged(v39, this, 1LL);
      CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496), v30);
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
      updated = CAudioStream::UpdateStreamPriority(v29);
    }
LABEL_58:
    if ( v37 )
      LeaveCriticalSection(v36);
  }
  if ( updated < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioSession::StopStream", 0xC57u, updated);
  return (unsigned int)updated;
}
