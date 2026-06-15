/*
 * XREFs of ?OnStateChanged@CAudioSessionManager@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x18001DAE0
 * Callers:
 *     ?DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x1800C7E28 (-DisconnectSessionsForTsSession@CAudioSessionManager@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000.c)
 * Callees:
 *     memcpy_s @ 0x18000C76C (memcpy_s.c)
 *     ?ForEachEntry@?$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@Z @ 0x18001E220 (-ForEachEntry@-$CLockedList@VCAudioSessionNotificationProcess@@$00$0A@@@QEAAJAEAVCListWorker@1@@.c)
 *     ?RemoveKey@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA_NAEBVCAudioSessionInstanceId@@@Z @ 0x18001E2B4 (-RemoveKey@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits.c)
 *     ?SetAt@?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBVCAudioSessionInstanceId@@AEBQEAVCAudioSession@@@Z @ 0x18001E8E0 (-SetAt@-$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V-.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18002B5B0 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _TlgCreateWsz @ 0x18004148C (_TlgCreateWsz.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x1800B3268 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_Sd @ 0x1800B69FC (WPP_SF_Sd.c)
 *     WPP_SF_qq @ 0x1800C3C58 (WPP_SF_qq.c)
 *     WPP_SF_SS @ 0x1800C68E8 (WPP_SF_SS.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CAudioSessionManager::OnStateChanged(
        CAudioSessionManager *this,
        struct IAudioSessionInfo *a2,
        enum _AudioSessionState a3,
        enum _AudioSessionState a4)
{
  enum _AudioSessionState v4; // r14d
  __int64 v6; // rdi
  char *v7; // r15
  char *v8; // rbx
  __int64 (__fastcall ***v9)(_QWORD, _QWORD, __int64); // rax
  char *v10; // r15
  char *v11; // rbx
  __int64 (__fastcall ***v12)(_QWORD, _QWORD, __int64); // rax
  char *v13; // r15
  char *v14; // rbx
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, __int64); // rax
  char *v16; // r15
  char *v17; // rbx
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, __int64); // rax
  char *v19; // rdi
  char *v20; // rbx
  __int64 (__fastcall ***v21)(_QWORD, _QWORD, __int64); // rax
  CAudioSessionManager *v22; // r13
  __int64 v23; // r15
  unsigned int v24; // ebx
  unsigned int v25; // esi
  unsigned int v26; // edi
  unsigned int *v27; // rax
  unsigned int *v28; // r14
  unsigned int v29; // r11d
  _WORD *v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  __int64 v33; // r9
  __int16 v34; // ax
  _WORD *v35; // rcx
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // r10
  __int64 v38; // r8
  __int16 v39; // ax
  HANDLE ProcessHeap; // rax
  char *v41; // rdx
  char *v42; // rdx
  char *v43; // rdx
  char *v44; // rdx
  char *v45; // rdx
  __int64 v46; // rcx
  LPCGUID v48; // r8
  LPCGUID v49; // r9
  TraceLoggingHProvider v50; // r10
  ATL::CAtlException *v51; // rbx
  _DWORD *v52; // r12
  __int64 v53; // rax
  __int64 v54; // rcx
  _DWORD *v55; // r12
  __int64 v56; // rax
  _DWORD *v57; // r12
  __int64 v58; // rax
  __int64 v59; // rcx
  _DWORD *v60; // r12
  __int64 v61; // rax
  _DWORD *v62; // r15
  __int64 v63; // rax
  __int64 v64; // [rsp+30h] [rbp-158h] BYREF
  enum _AudioSessionState v65; // [rsp+38h] [rbp-150h]
  LPVOID Context; // [rsp+40h] [rbp-148h] BYREF
  CAudioSessionManager *v67; // [rsp+48h] [rbp-140h]
  __int64 v68; // [rsp+50h] [rbp-138h] BYREF
  WINBOOL fPending[4]; // [rsp+58h] [rbp-130h] BYREF
  CAudioSessionManager *v70; // [rsp+68h] [rbp-120h]
  LPCRITICAL_SECTION v71; // [rsp+70h] [rbp-118h] BYREF
  char v72; // [rsp+78h] [rbp-110h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+80h] [rbp-108h] BYREF
  char v74; // [rsp+88h] [rbp-100h]
  void **v75; // [rsp+90h] [rbp-F8h]
  unsigned int *v76; // [rsp+98h] [rbp-F0h]
  __int64 v77; // [rsp+A0h] [rbp-E8h]
  __int64 v78; // [rsp+A8h] [rbp-E0h]
  char **v79; // [rsp+B0h] [rbp-D8h]
  ATL::CAtlException *v80; // [rsp+B8h] [rbp-D0h] BYREF
  char *v81; // [rsp+C0h] [rbp-C8h] BYREF
  char *v82; // [rsp+C8h] [rbp-C0h] BYREF
  char *v83; // [rsp+D0h] [rbp-B8h]
  __int128 v84; // [rsp+D8h] [rbp-B0h]
  char *v85; // [rsp+E8h] [rbp-A0h]
  int v86; // [rsp+F0h] [rbp-98h]
  __int64 v87; // [rsp+F8h] [rbp-90h]
  int v88; // [rsp+100h] [rbp-88h]
  char *v89; // [rsp+108h] [rbp-80h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+110h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp-58h] BYREF

  v78 = -2LL;
  v4 = a4;
  v67 = this;
  v70 = this;
  v65 = a4;
  v68 = 0LL;
  v64 = 0LL;
  if ( (**(int (__fastcall ***)(struct IAudioSessionInfo *, GUID *, __int64 *))a2)(
         a2,
         &GUID_6dfc29c8_c6d9_4c3f_a446_1b6d4ddc601a,
         &v68) >= 0
    && (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v68 + 24LL))(v68, &v64) >= 0 )
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
    v6 = v64;
    v7 = *(char **)(v64 + 696);
    v8 = v7 - 24;
    v9 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v7 - 3)
                                                                                              + 32LL))(*((_QWORD *)v7 - 3));
    if ( *((int *)v7 - 2) >= 0 && v9 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v8 + 4);
    }
    else
    {
      v52 = v8 + 8;
      v53 = (**v9)(v9, *((unsigned int *)v8 + 2), 2LL);
      v8 = (char *)v53;
      if ( !v53 )
        goto LABEL_114;
      *(_DWORD *)(v53 + 8) = *v52;
      memcpy_s((void *const)(v53 + 24), 2LL * (*v52 + 1), v7, 2LL * (*v52 + 1));
    }
    v81 = v8 + 24;
    v79 = &v82;
    v10 = *(char **)(v6 + 704);
    v11 = v10 - 24;
    v12 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v10 - 3)
                                                                                               + 32LL))(*((_QWORD *)v10 - 3));
    if ( *((int *)v10 - 2) >= 0 && v12 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v11 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v11 + 4);
    }
    else
    {
      v55 = v11 + 8;
      v56 = (**v12)(v12, *((unsigned int *)v11 + 2), 2LL);
      v11 = (char *)v56;
      if ( !v56 )
        goto LABEL_114;
      *(_DWORD *)(v56 + 8) = *v55;
      memcpy_s((void *const)(v56 + 24), 2LL * (*v55 + 1), v10, 2LL * (*v55 + 1));
    }
    v82 = v11 + 24;
    v13 = *(char **)(v6 + 712);
    v14 = v13 - 24;
    v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v13 - 3)
                                                                                               + 32LL))(*((_QWORD *)v13 - 3));
    if ( *((int *)v13 - 2) >= 0 && v15 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v14 + 4);
    }
    else
    {
      v57 = v14 + 8;
      v58 = (**v15)(v15, *((unsigned int *)v14 + 2), 2LL);
      v14 = (char *)v58;
      if ( !v58 )
        goto LABEL_113;
      *(_DWORD *)(v58 + 8) = *v57;
      memcpy_s((void *const)(v58 + 24), 2LL * (*v57 + 1), v13, 2LL * (*v57 + 1));
    }
    v83 = v14 + 24;
    v84 = *(_OWORD *)(v6 + 720);
    v16 = *(char **)(v6 + 736);
    v17 = v16 - 24;
    v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v16 - 3)
                                                                                               + 32LL))(*((_QWORD *)v16 - 3));
    if ( *((int *)v16 - 2) >= 0 && v18 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)v17 + 4);
      goto LABEL_17;
    }
    v60 = v17 + 8;
    v61 = (**v18)(v18, *((unsigned int *)v17 + 2), 2LL);
    v17 = (char *)v61;
    if ( v61 )
    {
      *(_DWORD *)(v61 + 8) = *v60;
      memcpy_s((void *const)(v61 + 24), 2LL * (*v60 + 1), v16, 2LL * (*v60 + 1));
LABEL_17:
      v85 = v17 + 24;
      v86 = *(_DWORD *)(v6 + 744);
      v87 = *(_QWORD *)(v6 + 752);
      v88 = *(_DWORD *)(v6 + 760);
      v19 = *(char **)(v6 + 768);
      v20 = v19 - 24;
      v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v19 - 3)
                                                                                                 + 32LL))(*((_QWORD *)v19 - 3));
      if ( *((int *)v19 - 2) >= 0 && v21 == *(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64))v20 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v20 + 4);
        goto LABEL_20;
      }
      v62 = v20 + 8;
      v63 = (**v21)(v21, *((unsigned int *)v20 + 2), 2LL);
      v20 = (char *)v63;
      if ( v63 )
      {
        *(_DWORD *)(v63 + 8) = *v62;
        memcpy_s((void *const)(v63 + 24), 2LL * (*v62 + 1), v19, 2LL * (*v62 + 1));
LABEL_20:
        v89 = v20 + 24;
        if ( a3 != AudioSessionStateExpired )
        {
          v22 = v67;
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
        v22 = v67;
        v71 = (LPCRITICAL_SECTION)((char *)v67 + 16);
        v72 = 0;
        ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&v71);
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_SS(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            29,
            (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
            0,
            (__int64)v89);
        }
        try
        {
          ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::SetAt(
            (char *)v22 + 56,
            &v81,
            &v64);
        }
        catch ( ATL::CAtlException *v80 )
        {
          v51 = v80;
          if ( *(_DWORD *)v80 == -1073741571 )
            _o__resetstkoflw();
          LODWORD(v67) = *(_DWORD *)v51;
          v22 = v70;
          v4 = v65;
          if ( (int)v67 < 0 )
            goto LABEL_99;
        }
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_qq(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            30LL,
            &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
            v22,
            v64);
        }
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 8LL))(v64);
LABEL_99:
        if ( v72 )
          LeaveCriticalSection(v71);
LABEL_22:
        if ( v4 == AudioSessionStateActive )
        {
          v23 = v64;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 41LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, 0LL);
          }
          v24 = 2 * *(_DWORD *)(*(_QWORD *)(v23 + 768) - 16LL) + 2;
          v25 = 2 * *(_DWORD *)(*((_QWORD *)v22 + 37) - 16LL) + 2;
          v26 = v25 + 2 * *(_DWORD *)(*(_QWORD *)(v23 + 768) - 16LL) + 74;
          v27 = (unsigned int *)operator new[](v26, (const struct std::nothrow_t *)&std::nothrow);
          v28 = v27;
          if ( v27 )
          {
            *v27 = v26;
            v27[1] = 64;
            v27[6] = v24;
            v27[12] = v25;
            v29 = v24 + 72;
            v27[13] = v24 + 72;
            v30 = v27 + 18;
            v31 = (unsigned __int64)v24 >> 1;
            if ( v31 )
            {
              v32 = 2147483646 - v31;
              v33 = *(_QWORD *)(v23 + 768) - (_QWORD)v30;
              while ( v31 + v32 )
              {
                v34 = *(_WORD *)((char *)v30 + v33);
                if ( !v34 )
                  break;
                *v30++ = v34;
                if ( !--v31 )
                {
                  --v30;
                  break;
                }
              }
              *v30 = 0;
              v29 = v28[13];
            }
            v35 = (_WORD *)((char *)v28 + v29);
            v36 = (unsigned __int64)v25 >> 1;
            if ( v36 )
            {
              v37 = 2147483646 - v36;
              v38 = *((_QWORD *)v22 + 37) - (_QWORD)v35;
              while ( v36 + v37 )
              {
                v39 = *(_WORD *)((char *)v35 + v38);
                if ( !v39 )
                  break;
                *v35++ = v39;
                if ( !--v36 )
                {
                  --v35;
                  break;
                }
              }
              *v35 = 0;
            }
            v75 = &CAudioSessionManagerNotification::`vftable';
            v76 = v28;
            v77 = v23;
            CLockedList<CAudioSessionNotificationProcess,1,0>::ForEachEntry((LPCRITICAL_SECTION)((char *)v22 + 192));
          }
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v28);
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
          v74 = 0;
          ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_SS(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              35,
              (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
              0,
              (__int64)v89);
          }
          if ( (unsigned __int8)ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveKey(
                                  (char *)v22 + 56,
                                  &v81) )
          {
            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 36LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids);
            }
            (*(void (__fastcall **)(__int64, CAudioSessionManager *))(*(_QWORD *)v64 + 232LL))(v64, v22);
            (*(void (__fastcall **)(__int64, struct ISessionInternalEvents *))(*(_QWORD *)v64 + 232LL))(
              v64,
              g_PolicyEventsHandler);
            Context = 0LL;
            if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, fPending, &Context)
              && fPending[0] )
            {
              Context = qword_1801B3518;
              qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
              qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
              atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
              wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
              InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
            }
            if ( **((_DWORD **)Context + 1) > 4u )
            {
              TlgCreateWsz(&pDesc, *(LPCWSTR *)(v64 + 768));
              TlgWrite(v50, &unk_1801729EA, v48, v49, 3u, &pData);
            }
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
          }
          else if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                 && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 37LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, v89);
          }
          if ( v74 )
            LeaveCriticalSection(lpCriticalSection);
        }
        if ( v64 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 16LL))(v64);
          v64 = 0LL;
        }
        v41 = v89 - 24;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v89 - 2, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v41 + 8LL))(*(_QWORD *)v41);
        v42 = v85 - 24;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v85 - 2, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v42 + 8LL))(*(_QWORD *)v42);
        v43 = v83 - 24;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v83 - 2, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v43 + 8LL))(*(_QWORD *)v43);
        v44 = v82 - 24;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v82 - 2, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v44 + 8LL))(*(_QWORD *)v44);
        v45 = v81 - 24;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v81 - 2, 0xFFFFFFFF) <= 1 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v45 + 8LL))(*(_QWORD *)v45);
        v46 = v68;
        if ( v68 )
          goto LABEL_71;
        return 0LL;
      }
LABEL_114:
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v54);
    }
LABEL_113:
    ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v59);
  }
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 26LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids);
  }
  v46 = v68;
  if ( v68 )
LABEL_71:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
  return 0LL;
}
