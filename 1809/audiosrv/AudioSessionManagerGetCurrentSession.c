/*
 * XREFs of AudioSessionManagerGetCurrentSession @ 0x180033B50
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800095D0 (--3@YAXPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180009C58 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memmove_s @ 0x18000B768 (memmove_s.c)
 *     memcpy_s @ 0x18000C76C (memcpy_s.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180013618 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001FAA0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800202E8 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180028820 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002A450 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18002B690 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18002B7E0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x18002B8C0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18002BFE0 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18002D550 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180032F40 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180048F7C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     atexit @ 0x180060C74 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CCC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180060CF0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800AE7FC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800B3E9C (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800B5888 (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800B58C4 (WPP_SF_qS.c)
 */

__int64 __fastcall AudioSessionManagerGetCurrentSession(
        const unsigned __int16 ****a1,
        _QWORD *a2,
        int a3,
        volatile signed __int32 **a4,
        void **a5)
{
  int v8; // r13d
  void *v9; // rbx
  __int64 v10; // rdi
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  const unsigned __int16 ***v13; // rdi
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // eax
  int v21; // esi
  int v22; // r14d
  int OwningThread; // ebx
  bool v24; // zf
  int v25; // ebx
  unsigned int v26; // esi
  struct IAudioProcess *v27; // r12
  const unsigned __int16 **v28; // rdi
  __int64 (__fastcall *v29)(__int64 *); // rax
  __int64 v30; // rax
  __int64 (__fastcall *v31)(__int64 *); // rax
  struct CAudioSession *v32; // r14
  __int64 v33; // rax
  GUID v34; // xmm0
  __int64 v35; // rax
  struct IAudioProcess *v36; // rcx
  char *v37; // rbx
  __int64 v38; // rdi
  _WORD *v39; // rax
  void **v40; // r13
  __int64 v41; // rdx
  signed __int64 v42; // rbx
  __int16 v43; // cx
  __int64 v44; // rax
  unsigned int v45; // ebx
  unsigned int v46; // eax
  unsigned int v47; // eax
  volatile signed __int32 *v48; // rbx
  unsigned int v49; // esi
  CAudioSessionManager *v50; // rcx
  char *v51; // rax
  volatile signed __int32 *v52; // rdi
  __int64 v53; // r8
  volatile signed __int32 *v54; // rdi
  _QWORD *v55; // rdx
  _QWORD *v56; // rdx
  _QWORD *v57; // rdx
  _QWORD *v58; // rdx
  _QWORD *v59; // rdx
  char *v60; // rdx
  __int64 v62; // rax
  const void *v63; // rdi
  __int64 v64; // rbx
  int *v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rax
  const void *v68; // rdi
  __int64 v69; // rbx
  char *v70; // r10
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // r12
  rsize_t v73; // r15
  char *v74; // r10
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // r15
  rsize_t v77; // rdx
  void **v78; // rbx
  int v79; // [rsp+20h] [rbp-E0h]
  int v80; // [rsp+20h] [rbp-E0h]
  int v82; // [rsp+40h] [rbp-C0h]
  unsigned int v83; // [rsp+44h] [rbp-BCh]
  int v84; // [rsp+48h] [rbp-B8h]
  struct CAudioSession *v85; // [rsp+50h] [rbp-B0h] BYREF
  void **v86; // [rsp+58h] [rbp-A8h]
  WINBOOL fPending; // [rsp+60h] [rbp-A0h] BYREF
  int v88; // [rsp+64h] [rbp-9Ch] BYREF
  LPVOID Context; // [rsp+68h] [rbp-98h] BYREF
  struct _FILETIME pftDueTime; // [rsp+70h] [rbp-90h] BYREF
  char *v91; // [rsp+78h] [rbp-88h] BYREF
  __int64 v92; // [rsp+80h] [rbp-80h] BYREF
  __int64 v93; // [rsp+88h] [rbp-78h] BYREF
  struct IAudioProcess *v94; // [rsp+90h] [rbp-70h] BYREF
  CAudioSessionManager *v95; // [rsp+98h] [rbp-68h]
  struct IAudioProcess *v96; // [rsp+A0h] [rbp-60h]
  _QWORD *v97; // [rsp+A8h] [rbp-58h]
  volatile signed __int32 **v98; // [rsp+B0h] [rbp-50h]
  _QWORD pv[2]; // [rsp+B8h] [rbp-48h] BYREF
  DWORD v100; // [rsp+C8h] [rbp-38h]
  const wchar_t *v101; // [rsp+D0h] [rbp-30h]
  void *v102; // [rsp+D8h] [rbp-28h]
  char v103; // [rsp+E0h] [rbp-20h]
  __int64 v104; // [rsp+E4h] [rbp-1Ch]
  __int64 v105; // [rsp+F0h] [rbp-10h]
  __int64 v106; // [rsp+100h] [rbp+0h] BYREF
  void *Destination; // [rsp+108h] [rbp+8h] BYREF
  void *v108; // [rsp+110h] [rbp+10h] BYREF
  GUID v109; // [rsp+118h] [rbp+18h]
  __int64 v110; // [rsp+128h] [rbp+28h]
  int v111; // [rsp+130h] [rbp+30h]
  int v112; // [rsp+138h] [rbp+38h]
  int v113; // [rsp+13Ch] [rbp+3Ch]
  int v114; // [rsp+140h] [rbp+40h]
  __int64 v115; // [rsp+148h] [rbp+48h]
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]

  v98 = a4;
  v97 = a2;
  v86 = a5;
  v8 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1801B3518;
    qword_1801B3518[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B3530 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1801B3518, qword_1801B3530);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_1801B3518);
  }
  v9 = g_AudioHealthMonitor;
  v10 = g_AudioSrvWatchDogTimerInMs;
  pv[1] = *((_QWORD *)Context + 1);
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v102 = v9;
  v100 = CurrentThreadId;
  v101 = L"AudioSessionManagerGetCurrentSession";
  v103 = 0;
  v104 = 0LL;
  if ( (unsigned int)v10 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      v105 = -10000 * v10 / 3;
      pftDueTime = (struct _FILETIME)v105;
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v10 / 3, 0);
    }
  }
  *a5 = 0LL;
  *a4 = 0LL;
  v13 = *a1;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 61LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, *v13);
  }
  v94 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                 + 32LL))(
          g_PolicyManager,
          0LL,
          &v94);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83E,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v14,
      v79);
    goto LABEL_100;
  }
  v93 = 0LL;
  v16 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
          *(_QWORD *)&g_DeviceEnumerator,
          (*v13)[37],
          &v93);
  v15 = v16;
  if ( v16 >= 0 )
  {
    v92 = 0LL;
    v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v93)(
            v93,
            &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
            &v92);
    v15 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E0,
        (unsigned int)"internal\\sdk\\inc\\wil/com.h",
        (const char *)(unsigned int)v17,
        v79);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x844,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v15,
        v80);
    }
    else
    {
      v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v92 + 24LL))(v92, &v88);
      v15 = v18;
      if ( v18 >= 0 )
      {
        v19 = a3;
        if ( (a3 & 0x80000) != 0 )
          v20 = 0;
        else
          v20 = 2;
        v21 = v20 | ((a3 & 0x10000000) != 0);
        v22 = a3 & 0x60000000;
        v84 = a3 & 0x60000000;
        if ( g_ADGProcess )
        {
          OwningThread = (int)g_ADGProcess[2].OwningThread;
          v24 = OwningThread == (*((unsigned int (__fastcall **)(const unsigned __int16 **))*v13[1] + 5))(v13[1]);
          v19 = a3;
          if ( v24 )
          {
            v22 = a3 & 0x40000000 | 0x20000000;
            v84 = v22;
          }
        }
        if ( (*((unsigned int (__fastcall **)(const unsigned __int16 **))*v13[1] + 11))(v13[1]) )
        {
          v84 = v22 | 0x200000;
          v21 |= 0x40000000u;
        }
        v25 = v19 & 0x10000;
        v82 = v25;
        if ( v88 == 1 )
          v26 = v21 & 0xFFFFFFFD;
        else
          v26 = v21 | 8;
        v27 = v94;
        v28 = *v13;
        v83 = v26;
        LOBYTE(v8) = v25 != 0;
        v29 = *(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24);
        v96 = v94;
        v95 = (CAudioSessionManager *)v28;
        v91 = (char *)(v29(&ATL::g_strmgr) + 24);
        v106 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
        Destination = (void *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
        v108 = (void *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
        v30 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
        v113 = -1;
        v110 = v30 + 24;
        v109 = GUID_00000000_0000_0000_0000_000000000000;
        v111 = 0;
        v112 = 0;
        v31 = *(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24);
        v114 = 0;
        v85 = 0LL;
        v32 = 0LL;
        v115 = v31(&ATL::g_strmgr) + 24;
        *v86 = 0LL;
        v15 = CAudioEndpointId::Initialize((CAudioEndpointId *)&v106, v28[37]);
        if ( v15 < 0 )
          goto LABEL_145;
        if ( v25 )
        {
          if ( !a2 )
          {
            v15 = -2147024809;
            goto LABEL_130;
          }
          v33 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
          if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
            v33 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
          if ( !v33 )
          {
            v15 = -2147024809;
            goto LABEL_130;
          }
        }
        if ( a2 )
          v34 = *(GUID *)a2;
        else
          v34 = GUID_00000000_0000_0000_0000_000000000000;
        v109 = v34;
        if ( !v25 )
        {
          v62 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v27 + 72LL))(v27);
          v63 = (const void *)v62;
          if ( !v62 )
            goto LABEL_107;
          v64 = -1LL;
          do
            ++v64;
          while ( *(_WORD *)(v62 + 2 * v64) );
          if ( (_DWORD)v64 )
          {
            v74 = (char *)v108;
            v75 = (v62 - (__int64)v108) >> 1;
            v76 = *((unsigned int *)v108 - 4);
            if ( (int)((*((_DWORD *)v108 - 3) - v64) | (1 - *((_DWORD *)v108 - 2))) < 0 )
            {
              ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v108, v64);
              v74 = (char *)v108;
            }
            v77 = 2LL * (int)v64;
            if ( v75 > v76 )
              memcpy_s(v74, v77, v63, v77);
            else
              memmove_s(v74, v77, &v74[2 * v75], v77);
            ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v108, v64);
          }
          else
          {
LABEL_107:
            v65 = (int *)((char *)v108 - 24);
            v66 = *((_QWORD *)v108 - 3);
            if ( *((_DWORD *)v108 - 4) )
            {
              if ( v65[4] >= 0 )
              {
                ATL::CStringData::Release((ATL::CStringData *)v65);
                v108 = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 24LL))(v66) + 24);
              }
              else
              {
                ATL::CSimpleStringT<unsigned short,0>::SetLength((__int64 *)&v108, 0);
              }
            }
          }
          v67 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v27 + 80LL))(v27);
          v68 = (const void *)v67;
          if ( !v67 )
            goto LABEL_144;
          v69 = -1LL;
          do
            ++v69;
          while ( *(_WORD *)(v67 + 2 * v69) );
          if ( (_DWORD)v69 )
          {
            v70 = (char *)Destination;
            v71 = (v67 - (__int64)Destination) >> 1;
            v72 = *((unsigned int *)Destination - 4);
            if ( (int)((*((_DWORD *)Destination - 3) - v69) | (1 - *((_DWORD *)Destination - 2))) < 0 )
            {
              ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&Destination, v69);
              v70 = (char *)Destination;
            }
            v73 = 2LL * (int)v69;
            if ( v71 <= v72 )
              memmove_s(v70, v73, &v70[2 * v71], v73);
            else
              memcpy_s(v70, v73, v68, v73);
            if ( (int)v69 < 0 || (int)v69 > *((_DWORD *)Destination - 3) )
              ATL::AtlThrowImpl(-2147024809);
            v27 = v96;
            *((_DWORD *)Destination - 4) = v69;
            v25 = v82;
            *(_WORD *)((char *)Destination + v73) = 0;
          }
          else
          {
LABEL_144:
            ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)&Destination);
            v25 = v82;
          }
        }
        v111 = v8;
        v15 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)&Destination);
        if ( v15 >= 0 )
        {
LABEL_32:
          if ( v15 >= 0 )
          {
            v35 = *(_QWORD *)v27;
            v36 = v27;
            v114 = v8;
            if ( v25 )
            {
              v112 = 0;
            }
            else
            {
              v112 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v35 + 40))(v27);
              v36 = v27;
              v35 = *(_QWORD *)v27;
            }
            v113 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v35 + 48))(v36);
            v15 = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)&v106);
            if ( v15 >= 0 )
            {
LABEL_36:
              if ( v15 < 0 )
                goto LABEL_174;
              v15 = CAudioSessionInstanceId::ToString((__int64)&v106, (void **)&v91);
              if ( v15 < 0 )
                goto LABEL_174;
              v37 = v91;
              v38 = (unsigned int)(*((_DWORD *)v91 - 4) + 1);
              if ( (unsigned __int64)(2 * v38) > 0x40000 )
              {
                *v86 = 0LL;
              }
              else
              {
                v39 = operator new[](2 * v38, (const struct std::nothrow_t *)&std::nothrow);
                v40 = v86;
                *v86 = v39;
                if ( v39 )
                {
                  v15 = 0;
                  if ( (unsigned __int64)(v38 - 1) > 0x7FFFFFFE )
                    v15 = -2147024809;
                  if ( v15 < 0 )
                  {
                    if ( !v38 )
                    {
LABEL_50:
                      if ( v15 < 0 )
                      {
                        operator delete(*v40);
                        *v40 = 0LL;
LABEL_80:
                        if ( v15 < 0 )
                          AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetCurrentSession", 1938, v15);
                        v55 = (_QWORD *)(v115 - 24);
                        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v115 - 24 + 16), 0xFFFFFFFF) <= 1 )
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v55 + 8LL))(*v55);
                        v56 = (_QWORD *)(v110 - 24);
                        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v110 - 24 + 16), 0xFFFFFFFF) <= 1 )
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v56 + 8LL))(*v56);
                        v57 = (char *)v108 - 24;
                        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v108 - 2, 0xFFFFFFFF) <= 1 )
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v57 + 8LL))(*v57);
                        v58 = (char *)Destination - 24;
                        if ( _InterlockedExchangeAdd((volatile signed __int32 *)Destination - 2, 0xFFFFFFFF) <= 1 )
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v58 + 8LL))(*v58);
                        v59 = (_QWORD *)(v106 - 24);
                        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v106 - 24 + 16), 0xFFFFFFFF) <= 1 )
                          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v59 + 8LL))(*v59);
                        v60 = v91 - 24;
                        if ( _InterlockedExchangeAdd((volatile signed __int32 *)v91 - 2, 0xFFFFFFFF) <= 1 )
                          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v60 + 8LL))(*(_QWORD *)v60);
                        if ( v15 < 0 )
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x86E,
                            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                            (const char *)(unsigned int)v15,
                            v79);
                        else
                          v15 = 0;
                        goto LABEL_96;
                      }
                      if ( v82 )
                      {
                        v44 = *v97 - *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1;
                        if ( *v97 == *(_QWORD *)&GUID_SystemSounds_AudioSessionId.Data1 )
                          v44 = v97[1] - *(_QWORD *)GUID_SystemSounds_AudioSessionId.Data4;
                        v45 = v83;
                        if ( !v44 )
                          v45 = v83 | 4;
                      }
                      else
                      {
                        v45 = v83;
                      }
                      v46 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v27 + 40LL))(v27);
                      v15 = CAudioSessionManager::CreateAudioSession(
                              v95,
                              v27,
                              (struct CAudioSessionInstanceId *)&v106,
                              v45,
                              v84,
                              v46,
                              &v85);
                      if ( v15 < 0 )
                      {
                        v32 = v85;
                        goto LABEL_174;
                      }
                      v47 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v27 + 40LL))(v27);
                      v48 = 0LL;
                      v49 = v47;
                      v95 = 0LL;
                      v50 = WPP_GLOBAL_Control;
                      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control )
                      {
                        if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                        {
                          WPP_SF_d(
                            *((_QWORD *)WPP_GLOBAL_Control + 2),
                            14LL,
                            &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
                            v47);
                          v50 = WPP_GLOBAL_Control;
                        }
                        if ( v50 != (CAudioSessionManager *)&WPP_GLOBAL_Control )
                        {
                          if ( (*((_BYTE *)v50 + 28) & 0x40) != 0 && *((_BYTE *)v50 + 25) >= 4u )
                          {
                            WPP_SF_S(*((_QWORD *)v50 + 2), 15LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, 0LL);
                            v50 = WPP_GLOBAL_Control;
                          }
                          if ( v50 != (CAudioSessionManager *)&WPP_GLOBAL_Control
                            && (*((_BYTE *)v50 + 28) & 0x40) != 0
                            && *((_BYTE *)v50 + 25) >= 4u )
                          {
                            WPP_SF_S(*((_QWORD *)v50 + 2), 12LL, &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids, 0LL);
                          }
                        }
                      }
                      v51 = (char *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
                      v52 = (volatile signed __int32 *)v51;
                      if ( v51 )
                      {
                        *((_DWORD *)v51 + 4) = 1;
                        *((_DWORD *)v51 + 6) = 0;
                        *(_QWORD *)v51 = &CServerAudioSessionControl::`vftable'{for `ISessionInternalEvents'};
                        *((_QWORD *)v51 + 1) = &CServerAudioSessionControl::`vftable'{for `CUnknown'};
                        ATL::CCriticalSection::CCriticalSection((struct _RTL_CRITICAL_SECTION *)(v51 + 32));
                        *((_QWORD *)v52 + 9) = 0LL;
                        *((_BYTE *)v52 + 84) = 0;
                        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                        {
                          WPP_SF_S(
                            *((_QWORD *)WPP_GLOBAL_Control + 2),
                            10LL,
                            &WPP_abea1e1b786a3a68e8bf6ce6f4b20d30_Traceguids,
                            0LL);
                        }
                        LOBYTE(v53) = 1;
                        v32 = v85;
                        v15 = (*(__int64 (__fastcall **)(volatile signed __int32 *, _QWORD, __int64, struct CAudioSession *))(*(_QWORD *)v52 + 256LL))(
                                v52,
                                v49,
                                v53,
                                v85);
                        if ( v15 >= 0 )
                        {
                          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                            && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                          {
                            WPP_SF_qS(
                              *((_QWORD *)WPP_GLOBAL_Control + 2),
                              13,
                              (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
                              (_DWORD)v52,
                              0LL);
                          }
                          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 8LL))(v52);
                          _InterlockedIncrement(v52 + 6);
                          v48 = v52;
                          v95 = (CAudioSessionManager *)v52;
                          v32 = v85;
LABEL_70:
                          if ( v52 )
                            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v52 + 16LL))(v52);
                          if ( v15 )
                          {
                            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                            {
                              WPP_SF_d(
                                *((_QWORD *)WPP_GLOBAL_Control + 2),
                                16LL,
                                &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
                                (unsigned int)v15);
                            }
                            v54 = 0LL;
                            if ( v15 < 0 )
                              AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetAudioSessionControl", 562, v15);
                            if ( v48 )
                              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 16LL))(v48);
                          }
                          else
                          {
                            if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
                              && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
                              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                            {
                              WPP_SF_qS(
                                *((_QWORD *)WPP_GLOBAL_Control + 2),
                                17,
                                (unsigned int)&WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
                                (_DWORD)v48,
                                0LL);
                            }
                            v54 = v48;
                          }
                          if ( v15 >= 0 )
                          {
                            *v98 = v54;
LABEL_78:
                            if ( v32 )
                              (*(void (__fastcall **)(struct CAudioSession *))(*(_QWORD *)v32 + 16LL))(v32);
                            goto LABEL_80;
                          }
LABEL_174:
                          v78 = v86;
                          if ( *v86 )
                          {
                            operator delete(*v86);
                            *v78 = 0LL;
                          }
                          goto LABEL_78;
                        }
                      }
                      else
                      {
                        v52 = 0LL;
                        v15 = -2147024882;
                        v32 = v85;
                      }
                      AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 510, v15);
                      goto LABEL_70;
                    }
                  }
                  else
                  {
                    v15 = 0;
                    if ( v38 )
                    {
                      v41 = 2147483646 - v38;
                      v42 = v37 - (char *)v39;
                      while ( v38 + v41 )
                      {
                        v43 = *(_WORD *)((char *)v39 + v42);
                        if ( !v43 )
                          break;
                        *v39++ = v43;
                        if ( !--v38 )
                          goto LABEL_147;
                      }
                    }
                    else
                    {
LABEL_147:
                      --v39;
                      v15 = -2147024774;
                    }
                  }
                  *v39 = 0;
                  goto LABEL_50;
                }
              }
              v15 = -2147024882;
              goto LABEL_174;
            }
          }
LABEL_145:
          AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 902, v15);
          goto LABEL_36;
        }
LABEL_130:
        AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 371, v15);
        goto LABEL_32;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x847,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v18,
        v79);
    }
LABEL_96:
    if ( v92 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 16LL))(v92);
    goto LABEL_98;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x841,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)(unsigned int)v16,
    v79);
LABEL_98:
  if ( v93 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v93 + 16LL))(v93);
LABEL_100:
  if ( v94 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v94 + 16LL))(v94);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v15;
}
