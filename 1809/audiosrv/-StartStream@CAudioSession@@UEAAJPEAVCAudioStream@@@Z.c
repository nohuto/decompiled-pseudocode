/*
 * XREFs of ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180027930
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003DCC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180027ED0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800320C0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?LogProductionAssert@@YAX_KPEBG@Z @ 0x1800AEB44 (-LogProductionAssert@@YAX_KPEBG@Z.c)
 *     WPP_SF_qd @ 0x1800B5944 (WPP_SF_qd.c)
 *     ??A?$CAtlArray@PEAVCAudioSession@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCAudioSession@@_K@Z @ 0x1800BA87C (--A-$CAtlArray@PEAVCAudioSession@@V-$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAAEAPEAVCA.c)
 *     WPP_SF_dq @ 0x1800C3A70 (WPP_SF_dq.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
 */

__int64 __fastcall CAudioSession::StartStream(CAudioSession *this, struct CAudioStream *a2)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // r14d
  unsigned __int64 v6; // rsi
  __int64 v7; // rsi
  BOOL v8; // edi
  int v9; // r8d
  __int64 v10; // rdx
  int v11; // edx
  unsigned int v12; // ebp
  int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rcx
  int v16; // eax
  unsigned int v17; // edi
  __int64 v19; // r8
  __int64 v20; // [rsp+20h] [rbp-898h]
  __int64 v21; // [rsp+40h] [rbp-878h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-870h] BYREF
  char v23; // [rsp+50h] [rbp-868h]
  void **v24; // [rsp+58h] [rbp-860h]
  CAudioSession *v25; // [rsp+60h] [rbp-858h]
  int v26; // [rsp+68h] [rbp-850h]
  int v27; // [rsp+6Ch] [rbp-84Ch]
  __int64 v28; // [rsp+70h] [rbp-848h]
  unsigned __int16 v29[1024]; // [rsp+80h] [rbp-838h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+8B8h] [rbp+0h]

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 52LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, this, a2);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 48);
  v23 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v4 = *((_QWORD *)this + 13);
  v5 = 0;
  if ( v4 )
  {
    v6 = 0LL;
    while ( *(struct CAudioStream **)(*((_QWORD *)this + 12) + 8 * v6) != a2 )
    {
      v6 = ++v5;
      if ( v5 >= v4 )
        goto LABEL_27;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v20 = *(_QWORD *)ATL::CAtlArray<CAudioSession *,ATL::CElementTraits<CAudioSession *>>::operator[](
                         (char *)this + 96,
                         v6);
      WPP_SF_dq(*((_QWORD *)WPP_GLOBAL_Control + 2), 53LL, v19, v5);
    }
    if ( v6 >= *((_QWORD *)this + 13) )
      ATL::AtlThrowImpl(-2147024809);
    _mm_lfence();
    v7 = *(_QWORD *)(*((_QWORD *)this + 12) + 8 * v6);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7);
    v8 = (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v7 + 8) + 64LL))(v7 + 8) != 0;
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v7 + 72) + 120LL))(*(_QWORD *)(v7 + 72));
    v10 = *(unsigned int *)(v7 + 328);
    if ( v8 )
      v11 = dword_18016CBC0[v10];
    else
      v11 = dword_18016CB60[v10];
    v12 = *(_DWORD *)(v7 + 220);
    v13 = 0;
    if ( v9 )
      v13 = 16;
    v14 = (*(_BYTE *)(v7 + 216) == 0) + 2 * (v11 + v13);
    if ( v14 != v12 )
    {
      v15 = *(_QWORD *)(v7 + 56);
      *(_DWORD *)(v7 + 220) = v14;
      v21 = 0LL;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 80LL))(v15, &v21);
      v16 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 208LL))(v21, 1LL, v14, v12);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2E2,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
          (const char *)(unsigned int)v16,
          v20);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v21);
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xBBD,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)v17);
      }
      else if ( v21 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
    }
    if ( ++*((_DWORD *)this + 68) == 1 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_qd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          54LL,
          &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
          this,
          *((_DWORD *)this + 68));
      }
      LeaveCriticalSection(lpCriticalSection);
      (*(void (__fastcall **)(CAudioSession *, __int64))(*(_QWORD *)this + 136LL))(this, 1LL);
    }
    else if ( v23 )
    {
      LeaveCriticalSection(lpCriticalSection);
    }
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 8LL))(this);
    v25 = this;
    v24 = &CAudioStreamStateChanged::`vftable';
    v26 = 0;
    v27 = 1;
    v28 = v7;
    if ( *(_DWORD *)(v7 + 288) == 1 )
    {
      LODWORD(v20) = 1;
      StringCchPrintfW(
        v29,
        0x400uLL,
        L"Stream %p: From [%d (%s)] to [%d (%s)]",
        v7,
        v20,
        *(_QWORD *)(v7 + 296),
        1,
        L"CAudioSession::StartStream");
      LogProductionAssert(0x6C966DuLL, v29);
    }
    *(_DWORD *)(v7 + 288) = 1;
    *(_QWORD *)(v7 + 296) = L"CAudioSession::StartStream";
    CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)this + 496));
    (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)this + 16LL))(this);
    return 0LL;
  }
  else
  {
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBBB,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)0x88890004LL,
      v20);
    if ( v23 )
      LeaveCriticalSection(lpCriticalSection);
    return 2290679812LL;
  }
}
