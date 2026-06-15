/*
 * XREFs of ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18002E490
 * Callers:
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800D6338 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 * Callees:
 *     _TlgCreateWsz @ 0x18001F9C0 (_TlgCreateWsz.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180025FC0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800260A0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800261F0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18002EDD0 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     ?Hash@?$CStringElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL@@SAKPEBG@Z @ 0x18002EE70 (-Hash@-$CStringElementTraits@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@ATL.c)
 *     ?RemoveNode@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@AEAAXPEAVCNode@12@0@Z @ 0x18002F190 (-RemoveNode@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTrait.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180030A30 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x180034B80 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     memcpy_s @ 0x180039174 (memcpy_s.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800451FC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180065320 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800C15D8 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x1800C4C2C (WPP_SF_Sd.c)
 *     WPP_SF_qq @ 0x1800D2038 (WPP_SF_qq.c)
 *     WPP_SF_SS @ 0x1800D4CE8 (WPP_SF_SS.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionManager::OnStateChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  enum _AudioSessionState v4; // r15d
  __int64 v6; // rdi
  char *v7; // r14
  char *v8; // rbx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, __int64); // rax
  char *v10; // r14
  char *v11; // rbx
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, __int64); // rax
  char *v13; // r14
  char *v14; // rbx
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, __int64); // rax
  char *v16; // r14
  char *v17; // rbx
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, __int64); // rax
  char *v19; // rdi
  char *v20; // rbx
  __int64 (__fastcall ***v21)(_QWORD, _QWORD, __int64); // rax
  CAudioSessionManager *v22; // r13
  __int64 v23; // rbx
  unsigned int v24; // r14d
  unsigned int v25; // r14d
  __int64 v26; // r15
  unsigned int v27; // ebx
  unsigned int v28; // esi
  unsigned int v29; // edi
  unsigned int *v30; // rax
  unsigned int *v31; // r14
  unsigned int v32; // r11d
  _WORD *v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // r9
  __int16 v37; // ax
  _WORD *v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r10
  __int64 v41; // r8
  __int16 v42; // ax
  HANDLE ProcessHeap; // rax
  char *v44; // rdx
  char *v45; // rdx
  char *v46; // rdx
  char *v47; // rdx
  char *v48; // rdx
  __int64 v49; // rcx
  __int64 v51; // rdx
  __int64 v52; // rbx
  __int64 v53; // r15
  __int64 v54; // rbx
  int v55; // eax
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // r10
  ATL::CAtlException *v59; // rbx
  _DWORD *v60; // r12
  __int64 v61; // rax
  __int64 v62; // rcx
  _DWORD *v63; // r12
  __int64 v64; // rax
  __int64 v65; // rcx
  _DWORD *v66; // r12
  __int64 v67; // rax
  __int64 v68; // rcx
  _DWORD *v69; // r12
  __int64 v70; // rax
  __int64 v71; // rcx
  _DWORD *v72; // r14
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // [rsp+30h] [rbp-178h] BYREF
  __int64 v76; // [rsp+38h] [rbp-170h] BYREF
  enum _AudioSessionState v77; // [rsp+40h] [rbp-168h]
  CAudioSessionManager *v78; // [rsp+48h] [rbp-160h]
  LPVOID Context; // [rsp+50h] [rbp-158h] BYREF
  __int64 v80; // [rsp+58h] [rbp-150h] BYREF
  WINBOOL fPending[4]; // [rsp+60h] [rbp-148h] BYREF
  CAudioSessionManager *v82; // [rsp+70h] [rbp-138h]
  LPCRITICAL_SECTION v83; // [rsp+78h] [rbp-130h] BYREF
  char v84; // [rsp+80h] [rbp-128h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+88h] [rbp-120h] BYREF
  char v86; // [rsp+90h] [rbp-118h]
  _DWORD v87[2]; // [rsp+98h] [rbp-110h] BYREF
  __int64 v88; // [rsp+A0h] [rbp-108h]
  void **v89; // [rsp+A8h] [rbp-100h]
  unsigned int *v90; // [rsp+B0h] [rbp-F8h]
  __int64 v91; // [rsp+B8h] [rbp-F0h]
  __int64 v92; // [rsp+C0h] [rbp-E8h]
  char **v93; // [rsp+C8h] [rbp-E0h]
  ATL::CAtlException *v94; // [rsp+D0h] [rbp-D8h] BYREF
  char *v95; // [rsp+E0h] [rbp-C8h] BYREF
  char *v96; // [rsp+E8h] [rbp-C0h] BYREF
  char *v97; // [rsp+F0h] [rbp-B8h]
  __int128 v98; // [rsp+F8h] [rbp-B0h]
  char *v99; // [rsp+108h] [rbp-A0h]
  int v100; // [rsp+110h] [rbp-98h]
  __int64 v101; // [rsp+118h] [rbp-90h]
  int v102; // [rsp+120h] [rbp-88h]
  char *v103; // [rsp+128h] [rbp-80h]
  unsigned __int16 *v104; // [rsp+130h] [rbp-78h] BYREF
  int v105; // [rsp+138h] [rbp-70h]
  int v106; // [rsp+13Ch] [rbp-6Ch]
  void *v107; // [rsp+140h] [rbp-68h]
  int v108; // [rsp+148h] [rbp-60h]
  int v109; // [rsp+14Ch] [rbp-5Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+150h] [rbp-58h] BYREF

  v92 = -2LL;
  v4 = a4;
  v78 = this;
  v82 = this;
  v77 = a4;
  v80 = 0LL;
  v75 = 0LL;
  if ( (**(int (__fastcall ***)(struct IAudioSessionInfo *, GUID *, __int64 *))a2)(
         a2,
         &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a,
         &v80) >= 0
    && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v80 + 24LL))(v80, &v75) >= 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        27,
        (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
        0,
        v4);
    }
    v6 = v75;
    v7 = *(char **)(v75 + 656);
    v8 = v7 - 24;
    v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v7 - 3)
                                                                                              + 32LL))(*((_QWORD *)v7 - 3));
    if ( *((int *)v7 - 2) >= 0 && v9 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v8 + 4);
    }
    else
    {
      v60 = v8 + 8;
      v61 = (**v9)(v9, *((unsigned int *)v8 + 2), 2LL);
      v8 = (char *)v61;
      if ( !v61 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v62);
      *(_DWORD *)(v61 + 8) = *v60;
      memcpy_s((void *const)(v61 + 24), 2LL * (*v60 + 1), v7, 2LL * (*v60 + 1));
    }
    v95 = v8 + 24;
    v93 = &v96;
    v10 = *(char **)(v6 + 664);
    v11 = v10 - 24;
    v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v10 - 3)
                                                                                               + 32LL))(*((_QWORD *)v10 - 3));
    if ( *((int *)v10 - 2) >= 0 && v12 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 4);
    }
    else
    {
      v63 = v11 + 8;
      v64 = (**v12)(v12, *((unsigned int *)v11 + 2), 2LL);
      v11 = (char *)v64;
      if ( !v64 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v65);
      *(_DWORD *)(v64 + 8) = *v63;
      memcpy_s((void *const)(v64 + 24), 2LL * (*v63 + 1), v10, 2LL * (*v63 + 1));
    }
    v96 = v11 + 24;
    v13 = *(char **)(v6 + 672);
    v14 = v13 - 24;
    v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v13 - 3)
                                                                                               + 32LL))(*((_QWORD *)v13 - 3));
    if ( *((int *)v13 - 2) >= 0 && v15 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v14 + 4);
    }
    else
    {
      v66 = v14 + 8;
      v67 = (**v15)(v15, *((unsigned int *)v14 + 2), 2LL);
      v14 = (char *)v67;
      if ( !v67 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v68);
      *(_DWORD *)(v67 + 8) = *v66;
      memcpy_s((void *const)(v67 + 24), 2LL * (*v66 + 1), v13, 2LL * (*v66 + 1));
    }
    v97 = v14 + 24;
    v98 = *(_OWORD *)(v6 + 680);
    v16 = *(char **)(v6 + 696);
    v17 = v16 - 24;
    v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v16 - 3)
                                                                                               + 32LL))(*((_QWORD *)v16 - 3));
    if ( *((int *)v16 - 2) >= 0 && v18 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v17 + 4);
    }
    else
    {
      v69 = v17 + 8;
      v70 = (**v18)(v18, *((unsigned int *)v17 + 2), 2LL);
      v17 = (char *)v70;
      if ( !v70 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v71);
      *(_DWORD *)(v70 + 8) = *v69;
      memcpy_s((void *const)(v70 + 24), 2LL * (*v69 + 1), v16, 2LL * (*v69 + 1));
    }
    v99 = v17 + 24;
    v100 = *(_DWORD *)(v6 + 704);
    v101 = *(_QWORD *)(v6 + 712);
    v102 = *(_DWORD *)(v6 + 720);
    v19 = *(char **)(v6 + 728);
    v20 = v19 - 24;
    v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v19 - 3)
                                                                                               + 32LL))(*((_QWORD *)v19 - 3));
    if ( *((int *)v19 - 2) >= 0 && v21 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v20 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v20 + 4);
    }
    else
    {
      v72 = v20 + 8;
      v73 = (**v21)(v21, *((unsigned int *)v20 + 2), 2LL);
      v20 = (char *)v73;
      if ( !v73 )
        ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v74);
      *(_DWORD *)(v73 + 8) = *v72;
      memcpy_s((void *const)(v73 + 24), 2LL * (*v72 + 1), v19, 2LL * (*v72 + 1));
    }
    v103 = v20 + 24;
    if ( a3 != AudioSessionStateExpired )
    {
      v22 = v78;
      goto LABEL_22;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        28LL,
        &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
        (unsigned int)v4);
    }
    v22 = v78;
    v83 = (LPCRITICAL_SECTION)((char *)v78 + 16);
    v84 = 0;
    ATL::CCritSecLock::Lock(&v83);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_SS(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        29,
        (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
        0,
        (__int64)v103);
    }
    try
    {
      ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
        (char *)v22 + 56,
        &v95,
        &v75);
    }
    catch ( ATL::CAtlException *v94 )
    {
      v59 = v94;
      if ( *(_DWORD *)v94 == -1073741571 )
        _o__resetstkoflw();
      LODWORD(v78) = *(_DWORD *)v59;
      v22 = v82;
      v4 = v77;
      if ( (int)v78 < 0 )
        goto LABEL_123;
    }
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, v22, v75);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 8LL))(v75);
LABEL_123:
    if ( v84 )
    {
      LeaveCriticalSection(v83);
      v84 = 0;
    }
LABEL_22:
    if ( v4 == AudioSessionStateActive )
    {
      v26 = v75;
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, 0LL);
      }
      v27 = 2 * *(_DWORD *)(*(_QWORD *)(v26 + 728) - 16LL) + 2;
      v28 = 2 * *(_DWORD *)(*((_QWORD *)v22 + 37) - 16LL) + 2;
      v29 = v28 + 2 * *(_DWORD *)(*(_QWORD *)(v26 + 728) - 16LL) + 74;
      v30 = (unsigned int *)operator new[](v29, (const struct std::nothrow_t *)&std::nothrow);
      v31 = v30;
      if ( v30 )
      {
        *v30 = v29;
        v30[1] = 64;
        v30[6] = v27;
        v30[12] = v28;
        v32 = v27 + 72;
        v30[13] = v27 + 72;
        v33 = v30 + 18;
        v34 = (unsigned __int64)v27 >> 1;
        if ( v34 )
        {
          v35 = 2147483646 - v34;
          v36 = *(_QWORD *)(v26 + 728) - (_QWORD)v33;
          while ( v34 + v35 )
          {
            v37 = *(_WORD *)((char *)v33 + v36);
            if ( !v37 )
              break;
            *v33++ = v37;
            if ( !--v34 )
            {
              --v33;
              break;
            }
          }
          *v33 = 0;
          v32 = v31[13];
        }
        v38 = (_WORD *)((char *)v31 + v32);
        v39 = (unsigned __int64)v28 >> 1;
        if ( v39 )
        {
          v40 = 2147483646 - v39;
          v41 = *((_QWORD *)v22 + 37) - (_QWORD)v38;
          while ( v39 + v40 )
          {
            v42 = *(_WORD *)((char *)v38 + v41);
            if ( !v42 )
              break;
            *v38++ = v42;
            if ( !--v39 )
            {
              --v38;
              break;
            }
          }
          *v38 = 0;
        }
        v89 = &CAudioSessionManagerNotification::`vftable';
        v90 = v31;
        v91 = v26;
        CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v22 + 192));
      }
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v31);
    }
    else if ( v4 == AudioSessionStateExpired )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, 0LL);
      }
      lpCriticalSection = (LPCRITICAL_SECTION)((char *)v22 + 16);
      v86 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_SS(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          35,
          (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
          0,
          (__int64)v103);
      }
      v76 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
      if ( (int)CAudioSessionInstanceId::ToString((__int64)&v95, &v76) < 0 )
      {
        ATL::CStringData::Release((ATL::CStringData *)(v76 - 24));
        v25 = 0;
      }
      else
      {
        v23 = v76;
        v24 = *(_DWORD *)(v76 - 16);
        if ( (((1 - *(_DWORD *)(v76 - 8)) | (*(_DWORD *)(v76 - 12) - v24)) & 0x80000000) != 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v76, v24);
          v23 = v76;
        }
        _o__wcsupr_s(v23, (int)(v24 + 1));
        ATL::CSimpleStringT<unsigned short,0>::SetLength(&v76, v24);
        v25 = ATL::CStringElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>::Hash(v23);
        ATL::CStringData::Release((ATL::CStringData *)(v23 - 24));
      }
      HIDWORD(v51) = 0;
      v52 = *((_QWORD *)v22 + 7);
      if ( v52 && (v53 = 0LL, LODWORD(v51) = v25 % *((_DWORD *)v22 + 18), (v54 = *(_QWORD *)(v52 + 8 * v51)) != 0) )
      {
        while ( 1 )
        {
          if ( *(_DWORD *)(v54 + 96) == v25 && !(unsigned int)_o__wcsicmp(*(_QWORD *)v54, v95) )
          {
            v55 = *(_DWORD *)(v54 + 64);
            if ( v55 == v102 && (v55 || *(_DWORD *)(v54 + 56) == (_DWORD)v101) )
            {
              v56 = *(_DWORD *)(v54 + 48);
              if ( v56 == v100 && (v56 || !(unsigned int)_o__wcsicmp(*(_QWORD *)(v54 + 8), v96)) )
              {
                v57 = *(_QWORD *)(v54 + 24) - v98;
                if ( !v57 )
                  v57 = *(_QWORD *)(v54 + 32) - *((_QWORD *)&v98 + 1);
                if ( !v57 )
                  break;
              }
            }
          }
          v53 = v54;
          v54 = *(_QWORD *)(v54 + 88);
          if ( !v54 )
            goto LABEL_132;
        }
        ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveNode(
          (char *)v22 + 56,
          v54,
          v53);
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids);
        }
        (*(void (__fastcall **)(__int64, CAudioSessionManager *))(*(_QWORD *)v75 + 232LL))(v75, v22);
        (*(void (__fastcall **)(__int64, struct ISessionInternalEvents *))(*(_QWORD *)v75 + 232LL))(
          v75,
          g_PolicyEventsHandler);
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
          && fPending[0] )
        {
          Context = &qword_1801B7588;
          qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
          qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
          atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
          wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
          InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
        }
        if ( **((_DWORD **)Context + 1) > 4u )
        {
          TlgCreateWsz(&pDesc, *(LPCWSTR *)(v75 + 728));
          v87[0] = 184549376;
          v87[1] = 4;
          v88 = 0LL;
          v104 = *(unsigned __int16 **)(v58 + 8);
          v105 = *v104;
          v106 = 2;
          v107 = &unk_180176D2D;
          v108 = 37;
          v109 = 1;
          LODWORD(v78) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
          EtwEventWriteTransfer(*(_QWORD *)(v58 + 32), v87, 0LL, 0LL, 3, &v104);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      }
      else
      {
LABEL_132:
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, v103);
        }
      }
      if ( v86 )
        LeaveCriticalSection(lpCriticalSection);
    }
    if ( v75 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
      v75 = 0LL;
    }
    v44 = v103 - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v103 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v44 + 8LL))(*(_QWORD *)v44);
    v45 = v99 - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v99 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v45 + 8LL))(*(_QWORD *)v45);
    v46 = v97 - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v97 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v46 + 8LL))(*(_QWORD *)v46);
    v47 = v96 - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v96 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v47 + 8LL))(*(_QWORD *)v47);
    v48 = v95 - 24;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v95 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v48 + 8LL))(*(_QWORD *)v48);
    v49 = v80;
    if ( v80 )
      goto LABEL_64;
    return 0LL;
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids);
  }
  v49 = v80;
  if ( v80 )
LABEL_64:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v49 + 16LL))(v49);
  return 0LL;
}
