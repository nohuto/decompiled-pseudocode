/*
 * XREFs of AudioSessionManagerGetCurrentSession @ 0x18001F000
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800132C0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001CC20 (--3@YAXPEAX@Z.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x180022ED0 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180022FC0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180023700 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180024AE0 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800260A0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?ToString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800261F0 (-ToString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@A.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180027F50 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18002D610 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x180030A30 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     memcpy_s @ 0x180039174 (memcpy_s.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800451FC (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     memmove_s @ 0x180048EA4 (memmove_s.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180049334 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x1800505A0 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180064BC0 (__security_check_cookie.c)
 *     atexit @ 0x1800652A4 (atexit.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800652FC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180065320 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _invalid_parameter_noinfo @ 0x180065CBA (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18006C963 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800BCE4C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_d @ 0x1800C2194 (WPP_SF_d.c)
 *     WPP_SF_S @ 0x1800C21D0 (WPP_SF_S.c)
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 *     WPP_SF_qS @ 0x1800C3AF4 (WPP_SF_qS.c)
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
  __int64 v37; // rbx
  __int64 v38; // rdi
  _WORD *v39; // rax
  void **v40; // r13
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int16 v43; // cx
  __int64 v44; // rax
  unsigned int v45; // ebx
  unsigned int v46; // eax
  unsigned int v47; // eax
  volatile signed __int32 *v48; // rbx
  unsigned int v49; // esi
  CAudioSessionManager *v50; // rcx
  volatile signed __int32 *v51; // rax
  volatile signed __int32 *v52; // rdi
  __int64 v53; // r8
  volatile signed __int32 *v54; // rdi
  _QWORD *v55; // rdx
  _QWORD *v56; // rdx
  _QWORD *v57; // rdx
  _QWORD *v58; // rdx
  _QWORD *v59; // rdx
  _QWORD *v60; // rdx
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
  int v72; // eax
  __int64 v73; // rcx
  unsigned __int64 v74; // r12
  __int64 v75; // r15
  char *v76; // r10
  unsigned __int64 v77; // rsi
  unsigned __int64 v78; // r15
  rsize_t v79; // rdx
  void **v80; // rbx
  int v82; // [rsp+40h] [rbp-C0h]
  unsigned int v83; // [rsp+44h] [rbp-BCh]
  int v84; // [rsp+48h] [rbp-B8h]
  struct CAudioSession *v85; // [rsp+50h] [rbp-B0h] BYREF
  void **v86; // [rsp+58h] [rbp-A8h]
  WINBOOL fPending; // [rsp+60h] [rbp-A0h] BYREF
  int v88; // [rsp+64h] [rbp-9Ch] BYREF
  LPVOID Context; // [rsp+68h] [rbp-98h] BYREF
  __int64 v90; // [rsp+70h] [rbp-90h] BYREF
  __int64 v91; // [rsp+78h] [rbp-88h] BYREF
  __int64 v92; // [rsp+80h] [rbp-80h] BYREF
  struct IAudioProcess *v93; // [rsp+88h] [rbp-78h] BYREF
  CAudioSessionManager *v94; // [rsp+90h] [rbp-70h]
  struct _FILETIME pftDueTime; // [rsp+98h] [rbp-68h] BYREF
  struct IAudioProcess *v96; // [rsp+A0h] [rbp-60h]
  _QWORD *v97; // [rsp+A8h] [rbp-58h]
  volatile signed __int32 **v98; // [rsp+B0h] [rbp-50h]
  _QWORD pv[2]; // [rsp+B8h] [rbp-48h] BYREF
  DWORD v100; // [rsp+C8h] [rbp-38h]
  const wchar_t *v101; // [rsp+D0h] [rbp-30h]
  void *v102; // [rsp+D8h] [rbp-28h]
  char v103; // [rsp+E0h] [rbp-20h]
  __int64 v104; // [rsp+E4h] [rbp-1Ch]
  __int64 v105; // [rsp+F0h] [rbp-10h] BYREF
  void *v106; // [rsp+F8h] [rbp-8h] BYREF
  void *Destination; // [rsp+100h] [rbp+0h] BYREF
  GUID v108; // [rsp+108h] [rbp+8h]
  __int64 v109; // [rsp+118h] [rbp+18h]
  int v110; // [rsp+120h] [rbp+20h]
  int v111; // [rsp+128h] [rbp+28h]
  int v112; // [rsp+12Ch] [rbp+2Ch]
  int v113; // [rsp+130h] [rbp+30h]
  __int64 v114; // [rsp+138h] [rbp+38h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v98 = a4;
  v97 = a2;
  v86 = a5;
  v8 = 0;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = &qword_1801B7588;
    qword_1801B7588 = &AudioSrvTelemetryProvider::`vftable';
    qword_1801B75A0 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)&qword_1801B7588, qword_1801B75A0);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &qword_1801B7588);
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
      pftDueTime = (struct _FILETIME)(-10000 * v10 / 3);
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
  v93 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                 + 32LL))(
          g_PolicyManager,
          0LL,
          &v93);
  v15 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x83E,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_100;
  }
  v92 = 0LL;
  v16 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
          *(_QWORD *)&g_DeviceEnumerator,
          (*v13)[37],
          &v92);
  v15 = v16;
  if ( v16 >= 0 )
  {
    v91 = 0LL;
    v17 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v92)(
            v92,
            &GUID_1be09788_6894_4089_8586_9a2a6c265ac5,
            &v91);
    v15 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4C8,
        (__int64)"internal\\sdk\\inc\\wil\\opensource/wil/com.h",
        (const char *)(unsigned int)v17);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x844,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v15);
    }
    else
    {
      v18 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v91 + 24LL))(v91, &v88);
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
        v27 = v93;
        v28 = *v13;
        v83 = v26;
        LOBYTE(v8) = v25 != 0;
        v29 = *(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24);
        v96 = v93;
        v94 = (CAudioSessionManager *)v28;
        v90 = v29(&ATL::g_strmgr) + 24;
        v105 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
        v106 = (void *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
        Destination = (void *)((*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24);
        v30 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr);
        v112 = -1;
        v109 = v30 + 24;
        v108 = GUID_00000000_0000_0000_0000_000000000000;
        v110 = 0;
        v111 = 0;
        v31 = *(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24);
        v113 = 0;
        v85 = 0LL;
        v32 = 0LL;
        v114 = v31(&ATL::g_strmgr) + 24;
        *v86 = 0LL;
        v15 = CAudioEndpointId::Initialize((CAudioEndpointId *)&v105, v28[37]);
        if ( v15 < 0 )
          goto LABEL_149;
        if ( v25 )
        {
          if ( !a2 )
          {
            v15 = -2147024809;
            goto LABEL_133;
          }
          v33 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
          if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
            v33 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
          if ( !v33 )
          {
            v15 = -2147024809;
            goto LABEL_133;
          }
        }
        if ( a2 )
          v34 = *(GUID *)a2;
        else
          v34 = GUID_00000000_0000_0000_0000_000000000000;
        v108 = v34;
        if ( v25 )
        {
LABEL_31:
          v110 = v8;
          v15 = CAppAudioSessionId::CalculateStaticId((CAppAudioSessionId *)&v106);
          if ( v15 >= 0 )
          {
LABEL_32:
            if ( v15 >= 0 )
            {
              v35 = *(_QWORD *)v27;
              v36 = v27;
              v113 = v8;
              if ( v25 )
              {
                v111 = 0;
              }
              else
              {
                v111 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v35 + 40))(v27);
                v36 = v27;
                v35 = *(_QWORD *)v27;
              }
              v112 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(v35 + 48))(v36);
              v15 = CAudioSessionInstanceId::CalculateStaticId((CAudioSessionInstanceId *)&v105);
              if ( v15 >= 0 )
              {
LABEL_36:
                if ( v15 < 0 )
                  goto LABEL_178;
                v15 = CAudioSessionInstanceId::ToString(&v105, &v90);
                if ( v15 < 0 )
                  goto LABEL_178;
                v37 = v90;
                v38 = (unsigned int)(*(_DWORD *)(v90 - 16) + 1);
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
                            AudSrvTraceLoggingErrorHelper("CAudioSessionManager::GetCurrentSession", 0x792u, v15);
                          v55 = (_QWORD *)(v114 - 24);
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v114 - 24 + 16), 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v55 + 8LL))(*v55);
                          v56 = (_QWORD *)(v109 - 24);
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v109 - 24 + 16), 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v56 + 8LL))(*v56);
                          v57 = (char *)Destination - 24;
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)Destination - 2, 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v57 + 8LL))(*v57);
                          v58 = (char *)v106 - 24;
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v106 - 2, 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v58 + 8LL))(*v58);
                          v59 = (_QWORD *)(v105 - 24);
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v105 - 24 + 16), 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v59 + 8LL))(*v59);
                          v60 = (_QWORD *)(v90 - 24);
                          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v90 - 24 + 16), 0xFFFFFFFF) <= 1 )
                            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v60 + 8LL))(*v60);
                          if ( v15 < 0 )
                            wil::details::in1diag3::Return_Hr(
                              retaddr,
                              (void *)0x86E,
                              (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                              (const char *)(unsigned int)v15);
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
                                v94,
                                v27,
                                (struct CAudioSessionInstanceId *)&v105,
                                v45,
                                v84,
                                v46,
                                &v85);
                        if ( v15 < 0 )
                        {
                          v32 = v85;
                          goto LABEL_178;
                        }
                        v47 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v27 + 40LL))(v27);
                        v48 = 0LL;
                        v49 = v47;
                        v94 = 0LL;
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
                              WPP_SF_S(
                                *((_QWORD *)v50 + 2),
                                15LL,
                                &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
                                0LL);
                              v50 = WPP_GLOBAL_Control;
                            }
                            if ( v50 != (CAudioSessionManager *)&WPP_GLOBAL_Control
                              && (*((_BYTE *)v50 + 28) & 0x40) != 0
                              && *((_BYTE *)v50 + 25) >= 4u )
                            {
                              WPP_SF_S(
                                *((_QWORD *)v50 + 2),
                                12LL,
                                &WPP_bf729160e03d3b4249aaa4373e8e8c67_Traceguids,
                                0LL);
                            }
                          }
                        }
                        v51 = (volatile signed __int32 *)operator new(
                                                           0x58uLL,
                                                           (const struct std::nothrow_t *)&std::nothrow);
                        v52 = v51;
                        if ( v51 )
                        {
                          *((_DWORD *)v51 + 4) = 1;
                          *((_DWORD *)v51 + 6) = 0;
                          *(_QWORD *)v51 = &CServerAudioSessionControl::`vftable'{for `ISessionInternalEvents'};
                          *((_QWORD *)v51 + 1) = &CServerAudioSessionControl::`vftable'{for `CUnknown'};
                          ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)(v51 + 8));
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
                            v94 = (CAudioSessionManager *)v52;
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
                                AudSrvTraceLoggingErrorHelper(
                                  "CAudioSessionManager::GetAudioSessionControl",
                                  0x232u,
                                  v15);
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
LABEL_178:
                            v80 = v86;
                            if ( *v86 )
                            {
                              operator delete(*v86);
                              *v80 = 0LL;
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
                        AudSrvTraceLoggingErrorHelper("CAudioSessionManager::CreateAudioSessionControl", 0x1FEu, v15);
                        goto LABEL_70;
                      }
                    }
                    else
                    {
                      v15 = 0;
                      if ( v38 )
                      {
                        v41 = 2147483646 - v38;
                        v42 = v37 - (_QWORD)v39;
                        while ( v38 + v41 )
                        {
                          v43 = *(_WORD *)((char *)v39 + v42);
                          if ( !v43 )
                            break;
                          *v39++ = v43;
                          if ( !--v38 )
                            goto LABEL_151;
                        }
                      }
                      else
                      {
LABEL_151:
                        --v39;
                        v15 = -2147024774;
                      }
                    }
                    *v39 = 0;
                    goto LABEL_50;
                  }
                }
                v15 = -2147024882;
                goto LABEL_178;
              }
            }
LABEL_149:
            AudSrvTraceLoggingErrorHelper("CAudioSessionInstanceId::Initialize", 0x38Fu, v15);
            goto LABEL_36;
          }
LABEL_133:
          AudSrvTraceLoggingErrorHelper("CAppAudioSessionId::Initialize", 0x173u, v15);
          goto LABEL_32;
        }
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
          v76 = (char *)Destination;
          v77 = (v62 - (__int64)Destination) >> 1;
          v78 = *((unsigned int *)Destination - 4);
          if ( (int)((*((_DWORD *)Destination - 3) - v64) | (1 - *((_DWORD *)Destination - 2))) < 0 )
          {
            ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&Destination, (unsigned int)v64);
            v76 = (char *)Destination;
          }
          v79 = 2LL * (int)v64;
          if ( v77 > v78 )
            memcpy_s(v76, v79, v63, v79);
          else
            memmove_s(v76, v79, &v76[2 * v77], v79);
          ATL::CSimpleStringT<unsigned short,0>::SetLength(&Destination, (unsigned int)v64);
        }
        else
        {
LABEL_107:
          v65 = (int *)((char *)Destination - 24);
          v66 = *((_QWORD *)Destination - 3);
          if ( *((_DWORD *)Destination - 4) )
          {
            if ( v65[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v65);
              Destination = (void *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v66 + 24LL))(v66) + 24);
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&Destination, 0LL);
            }
          }
        }
        v67 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v27 + 80LL))(v27);
        v68 = (const void *)v67;
        if ( !v67 )
          goto LABEL_148;
        v69 = -1LL;
        do
          ++v69;
        while ( *(_WORD *)(v67 + 2 * v69) );
        if ( !(_DWORD)v69 )
        {
LABEL_148:
          ATL::CSimpleStringT<unsigned short,0>::Empty(&v106);
          v25 = v82;
          goto LABEL_31;
        }
        v70 = (char *)v106;
        v71 = (v67 - (__int64)v106) >> 1;
        v72 = *((_DWORD *)v106 - 3) - v69;
        v73 = v72 | (unsigned int)(1 - *((_DWORD *)v106 - 2));
        v74 = *((unsigned int *)v106 - 4);
        if ( (v72 | (1 - *((_DWORD *)v106 - 2))) < 0 )
        {
          ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v106, (unsigned int)v69);
          v70 = (char *)v106;
        }
        v75 = 2LL * (int)v69;
        if ( v71 <= v74 )
        {
          memmove_s(v70, 2LL * (int)v69, &v70[2 * v71], 2LL * (int)v69);
        }
        else
        {
          if ( !v75 )
            goto LABEL_119;
          if ( v70 )
          {
            memcpy_0(v70, v68, 2LL * (int)v69);
          }
          else
          {
            *(_DWORD *)_o__errno(v73) = 22;
            invalid_parameter_noinfo();
          }
        }
        v70 = (char *)v106;
LABEL_119:
        if ( (int)v69 < 0 || (int)v69 > *((_DWORD *)v70 - 3) )
          ATL::AtlThrowImpl(-2147024809);
        v27 = v96;
        *((_DWORD *)v70 - 4) = v69;
        v25 = v82;
        *(_WORD *)((char *)v106 + v75) = 0;
        goto LABEL_31;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x847,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v18);
    }
LABEL_96:
    if ( v91 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v91 + 16LL))(v91);
    goto LABEL_98;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x841,
    (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)(unsigned int)v16);
LABEL_98:
  if ( v92 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v92 + 16LL))(v92);
LABEL_100:
  if ( v93 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v93 + 16LL))(v93);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v15;
}
