/*
 * XREFs of ?AddStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180028110
 * Callers:
 *     ?AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x18002A180 (-AddStream@CPerStreamVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 *     ?AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z @ 0x1800BE930 (-AddStream@CPerEndpointVolumeAudioSession@@EEAAJPEAVCAudioStream@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GrowBuffer@?$CAtlArray@PEAVCAudioStream@@V?$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N_K@Z @ 0x18001574C (-GrowBuffer@-$CAtlArray@PEAVCAudioStream@@V-$CElementTraits@PEAVCAudioStream@@@ATL@@@ATL@@AEAA_N.c)
 *     ?ForEachEntry@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x180027ED0 (-ForEachEntry@-$CLockedList@V-$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJAEAVCListWo.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800AE408 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAudioSession::AddStream(CAudioSession *this, struct CAudioStream *a2)
{
  struct CAudioStream *v2; // rbx
  CAudioSession *v3; // rdi
  unsigned __int64 v4; // r14
  __int64 v5; // r9
  BOOL v6; // esi
  int v7; // eax
  __int64 v8; // rdx
  int v9; // edx
  unsigned int v10; // esi
  unsigned int v11; // r14d
  int v12; // esi
  __int64 v13; // rcx
  unsigned int v14; // r8d
  const char *v15; // r9
  __int64 result; // rax
  ATL::CAtlException *v17; // rbx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // [rsp+20h] [rbp-68h]
  LPCRITICAL_SECTION v21[2]; // [rsp+30h] [rbp-58h] BYREF
  ATL::CAtlException *v22; // [rsp+40h] [rbp-48h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-40h] BYREF
  CAudioSession *v24; // [rsp+50h] [rbp-38h]
  struct CAudioStream *v25; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  CAudioSession *v27; // [rsp+90h] [rbp+8h] BYREF
  struct CAudioStream *v28; // [rsp+98h] [rbp+10h]
  int v29; // [rsp+A0h] [rbp+18h]
  __int64 v30; // [rsp+A8h] [rbp+20h] BYREF

  v28 = a2;
  v27 = this;
  v21[1] = (LPCRITICAL_SECTION)-2LL;
  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(struct IAudioPolicyManager *, LPCRITICAL_SECTION *))(*(_QWORD *)g_PolicyManager + 192LL))(
    g_PolicyManager,
    v21);
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)v3 + 48);
  LOBYTE(v24) = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 50LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, v3, v2);
  }
  v4 = *((_QWORD *)v3 + 13);
  if ( v4 >= *((_QWORD *)v3 + 14) )
  {
    try
    {
      if ( !ATL::CAtlArray<CAudioStream *,ATL::CElementTraits<CAudioStream *>>::GrowBuffer((__int64)v3 + 96, v4 + 1) )
        ATL::AtlThrowImpl(-2147024882);
    }
    catch ( ATL::CAtlException *v22 )
    {
      v17 = v22;
      if ( *(_DWORD *)v22 == -1073741571 )
        _o__resetstkoflw();
      v29 = *(_DWORD *)v17;
      v12 = v29;
      if ( v29 >= 0 )
      {
        v3 = v27;
        v2 = v28;
        goto LABEL_5;
      }
      if ( (_BYTE)v24 )
        LeaveCriticalSection(lpCriticalSection);
      if ( v21[0] )
        LeaveCriticalSection(v21[0]);
LABEL_32:
      if ( v12 < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioSession::AddStream", 2926, v12);
      result = (unsigned int)v12;
    }
  }
  *(_QWORD *)(*((_QWORD *)v3 + 12) + 8 * v4) = v2;
  ++*((_QWORD *)v3 + 13);
LABEL_5:
  (*(void (__fastcall **)(struct CAudioStream *))(*(_QWORD *)v2 + 56LL))(v2);
  v30 = 0LL;
  (*(void (__fastcall **)(__int64, __int64 *))(*((_QWORD *)v2 + 1) + 24LL))((__int64)v2 + 8, &v30);
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v30 + 96LL))(v30) && *((_DWORD *)v2 + 82) == 3 )
    *((_DWORD *)v3 + 120) = 1;
  if ( g_DuckingManager
    && !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v30 + 96LL))(v30)
    && *((_DWORD *)v3 + 120) )
  {
    *((_DWORD *)v2 + 82) = 3;
  }
  if ( !(*(unsigned int (__fastcall **)(__int64))(*((_QWORD *)v2 + 1) + 56LL))((__int64)v2 + 8)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v30 + 352LL))(v30) )
  {
    *((_DWORD *)v2 + 82) = 19;
  }
  v5 = (unsigned int)(*((_DWORD *)v3 + 22) + 1);
  *((_DWORD *)v3 + 22) = v5;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 51LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids, v5);
  }
  v6 = (*(unsigned __int8 (__fastcall **)(__int64))(*((_QWORD *)v2 + 1) + 64LL))((__int64)v2 + 8) != 0;
  v7 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v2 + 9) + 120LL))(*((_QWORD *)v2 + 9));
  v8 = *((unsigned int *)v2 + 82);
  if ( v6 )
    v9 = dword_18016CBC0[v8];
  else
    v9 = dword_18016CB60[v8];
  if ( v7 )
    v7 = 16;
  v10 = (*((_BYTE *)v2 + 216) == 0) + 2 * (v9 + v7);
  v11 = *((_DWORD *)v2 + 55);
  if ( v10 != v11 )
  {
    *((_DWORD *)v2 + 55) = v10;
    v18 = *((_QWORD *)v2 + 7);
    v27 = 0LL;
    (*(void (__fastcall **)(__int64, CAudioSession **))(*(_QWORD *)v18 + 80LL))(v18, &v27);
    v19 = (*(__int64 (__fastcall **)(CAudioSession *, __int64, _QWORD, _QWORD))(*(_QWORD *)v27 + 208LL))(
            v27,
            1LL,
            v10,
            v11);
    v12 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2E2,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v19,
        v20);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
      goto LABEL_23;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v27);
  }
  v12 = 0;
LABEL_23:
  *((_DWORD *)v2 + 20) = *((_DWORD *)v3 + 70);
  v13 = *((_QWORD *)v2 + 25);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( (_BYTE)v24 )
    LeaveCriticalSection(lpCriticalSection);
  if ( v21[0] )
    LeaveCriticalSection(v21[0]);
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v3 + 8LL))(v3);
  lpCriticalSection = (LPCRITICAL_SECTION)&CAudioStreamCreate::`vftable';
  v24 = v3;
  v25 = v2;
  CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::ForEachEntry(
    (LPCRITICAL_SECTION)((char *)v3 + 496),
    (void (__fastcall ***)(_QWORD, __int64 *))&lpCriticalSection);
  (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( !SetEvent(*((HANDLE *)v2 + 39)) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x904, v14, v15);
    __debugbreak();
  }
  goto LABEL_32;
}
