/*
 * XREFs of ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z @ 0x1800266B0 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEBU_GUID@@KPEAPEAG@Z.c)
 *     AudioSessionManagerGetCurrentSession @ 0x180033B50 (AudioSessionManagerGetCurrentSession.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x1800C82F0 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800C8810 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     AudioSessionManagerGetSessionForStreamSwitch @ 0x1800C9E80 (AudioSessionManagerGetSessionForStreamSwitch.c)
 * Callees:
 *     ??4?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z @ 0x180014A18 (--4-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18001E220 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     ?GetNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEBAPEAVCNode@12@AEBVCAudioSessionInstanceId@@AEAI1AEAPEAV312@@Z @ 0x18001E300 (-GetNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18001E8E0 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     ??B?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ @ 0x1800256A0 (--B-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800271C0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002B690 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002B7E0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ??1?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002B898 (--1-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x18002D0D8 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002D0F8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?IsLinkedToProcess@CAudioSession@@QEAA_NK@Z @ 0x18002D11C (-IsLinkedToProcess@CAudioSession@@QEAA_NK@Z.c)
 *     ??0CAudioSession@@IEAA@XZ @ 0x18002D1D0 (--0CAudioSession@@IEAA@XZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002D550 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?CancelExpirationTaskAndPausePostingOfNewTasks@CAudioSession@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180064668 (-CancelExpirationTaskAndPausePostingOfNewTasks@CAudioSession@@QEAA-AV-$unique_any_t@V-$unique_st.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x1800646A8 (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ?UpdateLastInactivationTime@CAudioSession@@QEAAXXZ @ 0x180064738 (-UpdateLastInactivationTime@CAudioSession@@QEAAXXZ.c)
 *     wil::details::lambda_call__lambda_07c301b2241b013fe505e322440b218b___::_lambda_call__lambda_07c301b2241b013fe505e322440b218b___ @ 0x18006475C (wil--details--lambda_call__lambda_07c301b2241b013fe505e322440b218b___--_lambda_call__lambda_07c3.c)
 *     wil::details::lambda_call__lambda_2ee1cb8ac5ad2a83c54e31e39de95e98___::_lambda_call__lambda_2ee1cb8ac5ad2a83c54e31e39de95e98___ @ 0x180064794 (wil--details--lambda_call__lambda_2ee1cb8ac5ad2a83c54e31e39de95e98___--_lambda_call__lambda_2ee1.c)
 *     wil::details::lambda_call__lambda_da2549763b2484cb2cd636c002fd2274___::_lambda_call__lambda_da2549763b2484cb2cd636c002fd2274___ @ 0x1800647CC (wil--details--lambda_call__lambda_da2549763b2484cb2cd636c002fd2274___--_lambda_call__lambda_da25.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800AF804 (--1-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     ?ForceExpire@CAudioSession@@QEAAXXZ @ 0x1800BF7B4 (-ForceExpire@CAudioSession@@QEAAXXZ.c)
 *     ?RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z @ 0x1800C25B0 (-RegisterOwnerProcess@CAudioSession@@QEAAJPEAUIAudioProcess@@@Z.c)
 *     WPP_SF_SS @ 0x1800C68E8 (WPP_SF_SS.c)
 *     ??0CPerEndpointVolumeAudioSession@@QEAA@XZ @ 0x1800C6EF8 (--0CPerEndpointVolumeAudioSession@@QEAA@XZ.c)
 *     ?CreateNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBVCAudioSessionInstanceId@@II@Z @ 0x1800C7D00 (-CreateNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ??9CAppAudioSessionId@@QEBA_NAEBV0@@Z @ 0x1800CCF98 (--9CAppAudioSessionId@@QEBA_NAEBV0@@Z.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall CAudioSessionManager::CreateAudioSession(
        CAudioSessionManager *this,
        struct IAudioProcess *a2,
        struct CAudioSessionInstanceId *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        struct CAudioSession **a7)
{
  struct CAudioSessionInstanceId *v7; // rdi
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  CAudioSession *v10; // r15
  CAudioSession *v11; // r14
  char *v12; // rbx
  _WORD *v13; // rbx
  __int64 v14; // rsi
  unsigned int v15; // esi
  unsigned __int16 i; // ax
  _QWORD *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 j; // rbx
  int v21; // eax
  int v22; // eax
  _WORD *v23; // rbx
  __int64 v24; // rsi
  unsigned int v25; // esi
  unsigned __int16 k; // ax
  _QWORD *v27; // rdx
  char *v28; // r12
  unsigned int v29; // r14d
  __int64 Node; // rbx
  int v31; // eax
  int v32; // eax
  struct IAudioProcess *v33; // rbx
  unsigned int v34; // eax
  int v35; // eax
  unsigned int v36; // ebx
  const char *v37; // r9
  __int64 result; // rax
  unsigned int v39; // esi
  CAudioSession *v40; // rax
  CAudioSession *v41; // rbx
  CPerEndpointVolumeAudioSession *v42; // rax
  CAudioSession *v43; // rcx
  GUID v44; // xmm6
  struct IAudioProcess *v45; // r14
  int v46; // eax
  unsigned int v47; // ebx
  _WORD *v48; // rbx
  __int64 v49; // rsi
  unsigned int v50; // esi
  unsigned __int16 m; // ax
  _QWORD *v52; // rdx
  __int64 *v53; // r14
  __int64 n; // rbx
  int v55; // eax
  __int64 v56; // rax
  CAudioSessionManager *v57; // rcx
  struct _RTL_CRITICAL_SECTION *v58; // rsi
  unsigned int v59; // ebx
  int v60; // eax
  unsigned int v61; // ebx
  int v62; // eax
  unsigned int v63; // ebx
  CAudioSession *v64; // r15
  unsigned int v65; // edi
  unsigned int v66; // r14d
  unsigned int v67; // esi
  unsigned int *v68; // rax
  unsigned int *v69; // rbx
  unsigned int v70; // eax
  _WORD *v71; // rcx
  unsigned __int64 v72; // rdx
  unsigned __int64 v73; // r10
  __int64 v74; // r9
  __int16 v75; // ax
  _WORD *v76; // rax
  CAudioSessionManager *v77; // r10
  _WORD *v78; // rcx
  unsigned __int64 v79; // rdx
  unsigned __int64 v80; // r8
  __int64 v81; // r9
  __int16 v82; // ax
  _WORD *v83; // rax
  HANDLE ProcessHeap; // rax
  __int64 v85; // rbx
  struct IAudioProcess *v86; // rbx
  unsigned int v87; // eax
  int v88; // eax
  unsigned int v89; // ebx
  int *v90; // rbx
  int v91; // [rsp+20h] [rbp-248h]
  char v92; // [rsp+40h] [rbp-228h]
  CAudioSession *v93; // [rsp+48h] [rbp-220h] BYREF
  CAudioSession *v94; // [rsp+50h] [rbp-218h] BYREF
  __int64 v95; // [rsp+58h] [rbp-210h] BYREF
  unsigned int v96; // [rsp+60h] [rbp-208h] BYREF
  int v97; // [rsp+64h] [rbp-204h] BYREF
  char *v98; // [rsp+68h] [rbp-200h] BYREF
  char v99; // [rsp+70h] [rbp-1F8h]
  __int64 v100; // [rsp+78h] [rbp-1F0h] BYREF
  __int64 v101; // [rsp+80h] [rbp-1E8h] BYREF
  struct IAudioProcess *v102; // [rsp+88h] [rbp-1E0h]
  unsigned int v103; // [rsp+90h] [rbp-1D8h]
  CAudioSession *v104; // [rsp+98h] [rbp-1D0h] BYREF
  CAudioSessionManager *v105; // [rsp+A0h] [rbp-1C8h]
  unsigned int v106; // [rsp+A8h] [rbp-1C0h] BYREF
  WINBOOL fPending; // [rsp+ACh] [rbp-1BCh] BYREF
  char *v108; // [rsp+B0h] [rbp-1B8h]
  LPVOID Context; // [rsp+B8h] [rbp-1B0h] BYREF
  LPCRITICAL_SECTION v110[2]; // [rsp+C0h] [rbp-1A8h] BYREF
  struct _RTL_CRITICAL_SECTION *v111; // [rsp+D0h] [rbp-198h] BYREF
  struct CAudioSession **v112; // [rsp+D8h] [rbp-190h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+E0h] [rbp-188h] BYREF
  char v114; // [rsp+E8h] [rbp-180h]
  struct CAudioSessionInstanceId *v115; // [rsp+F0h] [rbp-178h]
  CAudioSession *v116; // [rsp+F8h] [rbp-170h] BYREF
  CAudioSessionManager *v117; // [rsp+100h] [rbp-168h]
  struct IAudioProcess *v118; // [rsp+108h] [rbp-160h]
  _DWORD v119[2]; // [rsp+110h] [rbp-158h] BYREF
  __int64 v120; // [rsp+118h] [rbp-150h]
  CAudioSession **v121; // [rsp+120h] [rbp-148h] BYREF
  char v122; // [rsp+128h] [rbp-140h]
  __int128 v123; // [rsp+130h] [rbp-138h] BYREF
  CAudioSession **v124; // [rsp+140h] [rbp-128h]
  char v125; // [rsp+148h] [rbp-120h]
  __int128 v126; // [rsp+150h] [rbp-118h] BYREF
  char v127; // [rsp+160h] [rbp-108h]
  void (__fastcall **v128[3])(_QWORD, __int64 *); // [rsp+168h] [rbp-100h] BYREF
  ATL::CAtlException *v129[2]; // [rsp+180h] [rbp-E8h] BYREF
  __int64 v130; // [rsp+190h] [rbp-D8h] BYREF
  GUID v131; // [rsp+1A0h] [rbp-C8h]
  __int128 v132; // [rsp+1B0h] [rbp-B8h] BYREF
  CAudioSession **v133; // [rsp+1C0h] [rbp-A8h]
  unsigned __int16 *v134; // [rsp+1D0h] [rbp-98h] BYREF
  int v135; // [rsp+1D8h] [rbp-90h]
  int v136; // [rsp+1DCh] [rbp-8Ch]
  void *v137; // [rsp+1E0h] [rbp-88h]
  int v138; // [rsp+1E8h] [rbp-80h]
  int v139; // [rsp+1ECh] [rbp-7Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+1F0h] [rbp-78h] BYREF
  int *v141; // [rsp+200h] [rbp-68h]
  __int64 v142; // [rsp+208h] [rbp-60h]
  wil::details::in1diag3 *retaddr; // [rsp+268h] [rbp+0h]

  v129[1] = (ATL::CAtlException *)-2LL;
  v103 = a4;
  v7 = a3;
  v102 = a2;
  v105 = this;
  v117 = this;
  v118 = a2;
  v115 = a3;
  v112 = a7;
  v92 = 1;
  *a7 = 0LL;
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
  v98 = (char *)this + 16;
  v99 = 0;
  try
  {
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v98);
    v10 = 0LL;
    v94 = 0LL;
    v104 = 0LL;
    v11 = 0LL;
    lpCriticalSection = v9;
    v114 = 0;
    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
    v12 = (char *)this + 56;
    v108 = (char *)this + 56;
    v100 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    if ( (int)CAudioSessionInstanceId::ToString(v7, &v100) < 0 )
    {
      v17 = (_QWORD *)(v100 - 24);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v100 - 24 + 16), 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 8LL))(*v17);
      v15 = 0;
      v10 = v94;
    }
    else
    {
      v13 = (_WORD *)v100;
      v14 = *(int *)(v100 - 16);
      if ( ((1 - *(_DWORD *)(v100 - 8)) | (*(_DWORD *)(v100 - 12) - (int)v14)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v100, (unsigned int)v14);
        v13 = (_WORD *)v100;
      }
      _o__wcsupr_s(v13, (int)v14 + 1);
      if ( (int)v14 < 0 || (int)v14 > *((_DWORD *)v13 - 3) )
        goto LABEL_170;
      *((_DWORD *)v13 - 4) = v14;
      v13[v14] = 0;
      v15 = 0;
      for ( i = *v13; *v13; i = *v13 )
      {
        v15 = i + 33 * v15;
        ++v13;
      }
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v100);
      v12 = v108;
    }
    v18 = v15 % *((_DWORD *)v12 + 4);
    v19 = *(_QWORD *)v12;
    if ( !v19 )
      goto LABEL_58;
    for ( j = *(_QWORD *)(v19 + 8 * v18); ; j = *(_QWORD *)(j + 88) )
    {
      if ( !j )
        goto LABEL_58;
      if ( *(_DWORD *)(j + 96) == v15 && !(unsigned int)_o__wcsicmp(*(_QWORD *)j, *(_QWORD *)v7) )
      {
        v21 = *(_DWORD *)(j + 64);
        if ( v21 == *((_DWORD *)v7 + 16) && (v21 || *(_DWORD *)(j + 56) == *((_DWORD *)v7 + 14)) )
        {
          v22 = *(_DWORD *)(j + 48);
          if ( v22 == *((_DWORD *)v7 + 12)
            && (v22 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(j + 8), *((_QWORD *)v7 + 1)))
            && *(_QWORD *)(j + 24) == *((_QWORD *)v7 + 3)
            && *(_QWORD *)(j + 32) == *((_QWORD *)v7 + 4) )
          {
            break;
          }
        }
      }
    }
    v101 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
    if ( (int)CAudioSessionInstanceId::ToString(v7, &v101) < 0 )
    {
      v27 = (_QWORD *)(v101 - 24);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v101 - 24 + 16), 0xFFFFFFFF) <= 1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v27 + 8LL))(*v27);
      v25 = 0;
      v10 = v94;
      goto LABEL_38;
    }
    v23 = (_WORD *)v101;
    v24 = *(int *)(v101 - 16);
    if ( ((1 - *(_DWORD *)(v101 - 8)) | (*(_DWORD *)(v101 - 12) - (int)v24)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v101, (unsigned int)v24);
      v23 = (_WORD *)v101;
    }
    _o__wcsupr_s(v23, (int)v24 + 1);
    if ( (int)v24 >= 0 && (int)v24 <= *((_DWORD *)v23 - 3) )
    {
      *((_DWORD *)v23 - 4) = v24;
      v23[v24] = 0;
      v25 = 0;
      for ( k = *v23; *v23; k = *v23 )
      {
        v25 = k + 33 * v25;
        ++v23;
      }
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v101);
LABEL_38:
      v28 = v108;
      v29 = v25 % *((_DWORD *)v108 + 4);
      if ( *(_QWORD *)v108 && (Node = *(_QWORD *)(*(_QWORD *)v108 + 8LL * (v25 % *((_DWORD *)v108 + 4)))) != 0 )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(Node + 96) == v25 && !(unsigned int)_o__wcsicmp(*(_QWORD *)Node, *(_QWORD *)v7) )
          {
            v31 = *(_DWORD *)(Node + 64);
            if ( v31 == *((_DWORD *)v7 + 16) && (v31 || *(_DWORD *)(Node + 56) == *((_DWORD *)v7 + 14)) )
            {
              v32 = *(_DWORD *)(Node + 48);
              if ( v32 == *((_DWORD *)v7 + 12)
                && (v32 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(Node + 8), *((_QWORD *)v7 + 1)))
                && *(_QWORD *)(Node + 24) == *((_QWORD *)v7 + 3)
                && *(_QWORD *)(Node + 32) == *((_QWORD *)v7 + 4) )
              {
                break;
              }
            }
          }
          Node = *(_QWORD *)(Node + 88);
          if ( !Node )
            goto LABEL_51;
        }
      }
      else
      {
LABEL_51:
        Node = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
                 v28,
                 v7,
                 v29,
                 v25);
      }
      v11 = *(CAudioSession **)(Node + 80);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          10,
          (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
          0,
          *((_QWORD *)v7 + 9));
      }
      if ( v11 )
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_58:
      v104 = v11;
      if ( v114 )
        LeaveCriticalSection(lpCriticalSection);
      if ( v11 )
      {
        ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v98);
        CAudioSession::CancelExpirationTaskAndPausePostingOfNewTasks(v11);
        if ( (*(unsigned int (__fastcall **)(CAudioSession *))(*(_QWORD *)v11 + 32LL))(v11) != 2 )
        {
          v33 = v102;
          v34 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v102 + 40LL))(v102);
          if ( !CAudioSession::IsLinkedToProcess(v11, v34) )
          {
            v35 = CAudioSession::RegisterOwnerProcess(v11, v33);
            v36 = v35;
            if ( v35 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x116,
                (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                (const char *)(unsigned int)v35,
                v91);
              wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v111);
              wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v104);
              wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v94);
              ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v98);
              return v36;
            }
          }
          CAudioSession::UpdateLastInactivationTime(v11);
          CAudioSession::StartInactiveTimer(v11);
          wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::operator=((__int64 *)&v94, (__int64 *)&v104);
          v10 = v94;
        }
        wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v111);
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v98);
      }
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v104);
      if ( wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::operator bool(&v94) )
      {
        if ( (v103 & 0x20) != 0 )
          *((_DWORD *)v10 + 120) = 1;
        goto LABEL_164;
      }
      ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)&v98);
      v93 = 0LL;
      v39 = v103;
      if ( (v103 & 8) != 0 )
      {
        v40 = (CAudioSession *)operator new(0x470uLL, (const struct std::nothrow_t *)&std::nothrow);
        v41 = v40;
        v95 = (__int64)v40;
        if ( v40 )
        {
          CAudioSession::CAudioSession(v40);
          *(_QWORD *)v41 = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfo'};
          *((_QWORD *)v41 + 1) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionInfoInternal'};
          *((_QWORD *)v41 + 2) = &CPerStreamVolumeAudioSession::`vftable'{for `IAudioSessionPolicyControl'};
          *((_QWORD *)v41 + 3) = &CAudioSession::`vftable'{for `IAudioSessionDuckingControl'};
          *((_QWORD *)v41 + 4) = &CPerStreamVolumeAudioSession::`vftable'{for `CUnknown'};
          *((_BYTE *)v41 + 1024) = 1;
          ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)v41 + 1032));
          *((_QWORD *)v41 + 134) = 0LL;
          ATL::CCriticalSection::CCriticalSection((CAudioSession *)((char *)v41 + 1080));
          *((_QWORD *)v41 + 140) = 0LL;
        }
        else
        {
          v41 = 0LL;
        }
      }
      else
      {
        v42 = (CPerEndpointVolumeAudioSession *)operator new(0x438uLL, (const struct std::nothrow_t *)&std::nothrow);
        v95 = (__int64)v42;
        if ( v42 )
          v41 = CPerEndpointVolumeAudioSession::CPerEndpointVolumeAudioSession(v42);
        else
          v41 = 0LL;
      }
      v43 = v93;
      v93 = v41;
      if ( v43 )
      {
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v43 + 16LL))(v43);
        v41 = v93;
      }
      if ( !v41 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x14B,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)0x8007000ELL,
          v91);
        wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v93);
        wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v94);
        ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v98);
        return 2147942414LL;
      }
      v44 = GUID_00000000_0000_0000_0000_000000000000;
      v45 = v102;
      if ( (v39 & 4) == 0 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v102 + 440LL))(v102) )
          v44 = *(GUID *)(*(__int64 (__fastcall **)(struct IAudioProcess *, __int128 *, __int64))(*(_QWORD *)v45 + 456LL))(
                           v45,
                           &v132,
                           (__int64)v7 + 24);
        v41 = v93;
      }
      v131 = v44;
      v91 = a5;
      v46 = (*(__int64 (__fastcall **)(CAudioSession *, struct IAudioProcess *, struct CAudioSessionInstanceId *, _QWORD))(*(_QWORD *)v41 + 240LL))(
              v41,
              v45,
              v7,
              v39);
      v47 = v46;
      if ( v46 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x163,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v46,
          a5);
        wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v93);
        wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v94);
        ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v98);
        return v47;
      }
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v98);
      v94 = 0LL;
      if ( v10 )
        (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v10 + 16LL))(v10);
      v10 = 0LL;
      v110[0] = (LPCRITICAL_SECTION)((char *)v105 + 16);
      LOBYTE(v110[1]) = 0;
      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)v110);
      v95 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      if ( (int)CAudioSessionInstanceId::ToString(v7, &v95) < 0 )
      {
        v52 = (_QWORD *)(v95 - 24);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v95 - 24 + 16), 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v52 + 8LL))(*v52);
        v50 = 0;
      }
      else
      {
        v48 = (_WORD *)v95;
        v49 = *(int *)(v95 - 16);
        if ( ((1 - *(_DWORD *)(v95 - 8)) | (*(_DWORD *)(v95 - 12) - (int)v49)) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v95, (unsigned int)v49);
          v48 = (_WORD *)v95;
        }
        _o__wcsupr_s(v48, (int)v49 + 1);
        if ( (int)v49 < 0 || (int)v49 > *((_DWORD *)v48 - 3) )
          ATL::AtlThrowImpl(-2147024809);
        *((_DWORD *)v48 - 4) = v49;
        v48[v49] = 0;
        v50 = 0;
        for ( m = *v48; *v48; m = *v48 )
        {
          v50 = m + 33 * v50;
          ++v48;
        }
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::~CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v95);
      }
      v53 = (__int64 *)v108;
      if ( *(_QWORD *)v108 )
      {
        for ( n = *(_QWORD *)(*(_QWORD *)v108 + 8LL * (v50 % *((_DWORD *)v108 + 4))); n; n = *(_QWORD *)(n + 88) )
        {
          if ( *(_DWORD *)(n + 96) == v50 && !(unsigned int)_o__wcsicmp(*(_QWORD *)n, *(_QWORD *)v7) )
          {
            v55 = *(_DWORD *)(n + 64);
            if ( v55 == *((_DWORD *)v7 + 16)
              && (v55 || *(_DWORD *)(n + 56) == *((_DWORD *)v7 + 14))
              && !(unsigned __int8)CAppAudioSessionId::operator!=(n + 8, (char *)v7 + 8) )
            {
              v56 = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::GetNode(
                      (__int64)v53,
                      (__int64)v7,
                      (int *)&v96,
                      &v106,
                      &v130);
              if ( !v56 )
                v56 = ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::CreateNode(
                        v53,
                        v7,
                        v96,
                        v106);
              v10 = *(CAudioSession **)(v56 + 80);
              v57 = WPP_GLOBAL_Control;
              if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                WPP_SF_SS(
                  *((_QWORD *)WPP_GLOBAL_Control + 2),
                  10,
                  (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
                  0,
                  *((_QWORD *)v7 + 9));
                v57 = WPP_GLOBAL_Control;
              }
              if ( v10 )
              {
                (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v10 + 8LL))(v10);
                break;
              }
              goto LABEL_117;
            }
          }
        }
      }
      v57 = WPP_GLOBAL_Control;
LABEL_117:
      v94 = v10;
      if ( LOBYTE(v110[1]) )
      {
        LeaveCriticalSection(v110[0]);
        v57 = WPP_GLOBAL_Control;
      }
      if ( v10 )
      {
        CAudioSession::ForceExpire(v93);
LABEL_161:
        wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v93);
LABEL_164:
        v86 = v102;
        v87 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v102 + 40LL))(v102);
        if ( CAudioSession::IsLinkedToProcess(v10, v87)
          || (v88 = CAudioSession::RegisterOwnerProcess(v10, v86), v89 = v88, v88 >= 0) )
        {
          if ( v92 )
            (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v10 + 256LL))(v10);
          v94 = 0LL;
          *v112 = v10;
          wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v94);
          ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v98);
          return 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x1B7,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)(unsigned int)v88,
            v91);
          wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v94);
          ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v98);
          return v89;
        }
      }
      if ( v57 != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)v57 + 28) & 0x40) != 0
        && *((_BYTE *)v57 + 25) >= 4u )
      {
        WPP_SF_SS(
          *((_QWORD *)v57 + 2),
          11,
          (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
          0,
          *((_QWORD *)v7 + 9));
      }
      try
      {
        v116 = v93;
        ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
          v53,
          (__int64)v7,
          &v116);
      }
      catch ( ATL::CAtlException *v129 )
      {
        v90 = (int *)v129[0];
        if ( *(_DWORD *)v129[0] == -1073741571 )
          _o__resetstkoflw();
        v96 = *v90;
        v59 = v96;
        if ( (v96 & 0x80000000) != 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x16E,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)v96,
            v91);
          wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v93);
          wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v94);
          ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v98);
          return v59;
        }
        v58 = (struct _RTL_CRITICAL_SECTION *)v117;
        v105 = v117;
        v102 = v118;
        v7 = v115;
        goto LABEL_128;
      }
      v58 = (struct _RTL_CRITICAL_SECTION *)v105;
LABEL_128:
      (*(void (__fastcall **)(CAudioSession *))(*(_QWORD *)v93 + 8LL))(v93);
      *(_QWORD *)&v132 = v58;
      *((_QWORD *)&v132 + 1) = v7;
      v133 = &v93;
      v123 = v132;
      v124 = &v93;
      v125 = 1;
      v60 = (*(__int64 (__fastcall **)(CAudioSession *, struct _RTL_CRITICAL_SECTION *))(*(_QWORD *)v93 + 224LL))(
              v93,
              v58);
      v61 = v60;
      if ( v60 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17B,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v60,
          v91);
        wil::details::lambda_call__lambda_da2549763b2484cb2cd636c002fd2274___::_lambda_call__lambda_da2549763b2484cb2cd636c002fd2274___(&v123);
        wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v93);
        wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v94);
        ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v98);
        return v61;
      }
      v110[0] = (LPCRITICAL_SECTION)&v93;
      v110[1] = v58;
      v126 = *(_OWORD *)v110;
      v127 = 1;
      v62 = (*(__int64 (__fastcall **)(CAudioSession *, struct ISessionInternalEvents *))(*(_QWORD *)v93 + 224LL))(
              v93,
              g_PolicyEventsHandler);
      v63 = v62;
      if ( v62 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x182,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v62,
          v91);
        wil::details::lambda_call__lambda_2ee1cb8ac5ad2a83c54e31e39de95e98___::_lambda_call__lambda_2ee1cb8ac5ad2a83c54e31e39de95e98___(&v126);
        wil::details::lambda_call__lambda_da2549763b2484cb2cd636c002fd2274___::_lambda_call__lambda_da2549763b2484cb2cd636c002fd2274___(&v123);
        wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v93);
        wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::~com_ptr_t<CAudioSession,wil::err_returncode_policy>(&v94);
        ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)&v98);
        return v63;
      }
      v121 = &v93;
      v122 = 1;
      v64 = v93;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, 0LL);
      }
      v65 = 2 * *(_DWORD *)(*((_QWORD *)v64 + 96) - 16LL) + 2;
      v66 = 2 * *((_DWORD *)v58[7].OwningThread - 4) + 2;
      v67 = v66 + 2 * *(_DWORD *)(*((_QWORD *)v64 + 96) - 16LL) + 74;
      v68 = (unsigned int *)operator new[](v67, (const struct std::nothrow_t *)&std::nothrow);
      v69 = v68;
      if ( v68 )
      {
        *v68 = v67;
        v68[1] = 64;
        v68[6] = v65;
        v68[12] = v66;
        v70 = v65 + 72;
        v69[13] = v65 + 72;
        v71 = v69 + 18;
        v72 = (unsigned __int64)v65 >> 1;
        if ( v72 )
        {
          v73 = 2147483646 - v72;
          v74 = *((_QWORD *)v64 + 96) - (_QWORD)v71;
          do
          {
            if ( !(v72 + v73) )
              break;
            v75 = *(_WORD *)((char *)v71 + v74);
            if ( !v75 )
              break;
            *v71++ = v75;
            --v72;
          }
          while ( v72 );
          v76 = v71 - 1;
          if ( v72 )
            v76 = v71;
          *v76 = 0;
          v70 = v69[13];
        }
        v77 = v105;
        v78 = (_WORD *)((char *)v69 + v70);
        v79 = (unsigned __int64)v66 >> 1;
        if ( v79 )
        {
          v80 = 2147483646 - v79;
          v81 = *((_QWORD *)v105 + 37) - (_QWORD)v78;
          do
          {
            if ( !(v79 + v80) )
              break;
            v82 = *(_WORD *)((char *)v78 + v81);
            if ( !v82 )
              break;
            *v78++ = v82;
            --v79;
          }
          while ( v79 );
          v83 = v78 - 1;
          if ( v79 )
            v83 = v78;
          *v83 = 0;
        }
        v128[0] = (void (__fastcall **)(_QWORD, __int64 *))&CAudioSessionManagerNotification::`vftable';
        v128[1] = (void (__fastcall **)(_QWORD, __int64 *))v69;
        v128[2] = (void (__fastcall **)(_QWORD, __int64 *))v64;
        CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v77 + 192), v128);
      }
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v69);
      wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::operator=((__int64 *)&v94, (__int64 *)&v93);
      v92 = 0;
      v122 = 0;
      v127 = 0;
      v125 = 0;
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
      v85 = *((_QWORD *)Context + 1);
      if ( *(_DWORD *)v85 > 4u )
      {
        TlgCreateWsz(&pDesc, *((LPCWSTR *)v94 + 96));
        v97 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v102 + 40LL))(v102);
        v141 = &v97;
        v142 = 4LL;
        v119[0] = ((unsigned int)&unk_180172A20 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
        v119[1] = 4;
        v120 = 0LL;
        v134 = *(unsigned __int16 **)(v85 + 8);
        v135 = *v134;
        v136 = 2;
        v137 = &unk_180172A2B;
        v138 = 53;
        v139 = 1;
        EtwEventWriteTransfer(*(_QWORD *)(v85 + 32), v119, 0LL, 0LL, 4, &v134);
      }
      wil::details::lambda_call__lambda_07c301b2241b013fe505e322440b218b___::_lambda_call__lambda_07c301b2241b013fe505e322440b218b___(&v121);
      wil::details::lambda_call__lambda_2ee1cb8ac5ad2a83c54e31e39de95e98___::_lambda_call__lambda_2ee1cb8ac5ad2a83c54e31e39de95e98___(&v126);
      wil::details::lambda_call__lambda_da2549763b2484cb2cd636c002fd2274___::_lambda_call__lambda_da2549763b2484cb2cd636c002fd2274___(&v123);
      v10 = v94;
      goto LABEL_161;
    }
LABEL_170:
    ATL::AtlThrowImpl(-2147024809);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x1CE,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                           v37);
  }
  return result;
}
