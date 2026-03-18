/*
 * XREFs of ?DxgkSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIHH@Z @ 0x1C00FC1B0
 * Callers:
 *     ?DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@IIH@Z @ 0x1C00FC130 (-DxgkCddSetPointerShape@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@I.c)
 *     DxgkWin32kSetPointerShape @ 0x1C0257FD0 (DxgkWin32kSetPointerShape.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003C14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007290 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007784 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0008000 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000801C (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C000A3F0 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000BF70 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000C1D0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000C554 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     ?DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C00D551C (-DdiSetPointerPosition@ADAPTER_DISPLAY@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C00D586C (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C00D7B40 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     DxgkAcquireSessionModeChangeLock @ 0x1C00FC6B0 (DxgkAcquireSessionModeChangeLock.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00FC8A0 (DxgkReleaseSessionModeChangeLock.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00FD130 (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C0276DB8 (OutputDuplProcessRemoteSessionSetPointerShape.c)
 */

__int64 __fastcall DxgkSetPointerShape(
        void *const a1,
        struct _DXGKARG_SETPOINTERPOSITION *a2,
        GUID *a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  int PairingAdapters; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGADAPTER *v18; // rdi
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // r8
  unsigned int CurrentProcessSessionId; // eax
  __int64 v25; // rdx
  __int64 v26; // r14
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // rcx
  const GUID *v31; // r8
  int v32; // eax
  __int64 v33; // rdi
  __int64 v34; // r14
  int v35; // eax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // r8
  char v40; // r12
  __int64 Data1; // r15
  _QWORD *v42; // rcx
  _QWORD *v43; // rax
  _QWORD *v44; // rax
  struct SESSION_VIEW *v45; // rsi
  _QWORD *v46; // rax
  struct DISPLAY_SOURCE *v47; // r15
  _QWORD *v48; // r15
  __int64 v49; // rcx
  const GUID *v50; // r8
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // r14
  __int64 v53; // rcx
  ADAPTER_DISPLAY **v54; // r15
  __int64 v55; // r8
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r12
  const GUID *v61; // r8
  bool v62; // zf
  int v63; // r9d
  __int64 v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  _QWORD *v70; // rax
  int v71; // eax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  _QWORD *v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  _QWORD *v81; // rax
  _QWORD *v82; // rsi
  __int64 v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v87; // eax
  _QWORD *v88; // rax
  char v89; // [rsp+58h] [rbp-B0h]
  struct DXGADAPTER *v90; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v91; // [rsp+70h] [rbp-98h] BYREF
  int v92; // [rsp+78h] [rbp-90h]
  unsigned int v93; // [rsp+80h] [rbp-88h]
  int v94; // [rsp+88h] [rbp-80h] BYREF
  __int64 v95; // [rsp+90h] [rbp-78h]
  char v96; // [rsp+98h] [rbp-70h]
  void *v97; // [rsp+A0h] [rbp-68h]
  struct _DXGKARG_SETPOINTERPOSITION *v98; // [rsp+A8h] [rbp-60h]
  _BYTE v99[16]; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v100; // [rsp+C0h] [rbp-48h] BYREF
  struct _DXGKARG_SETPOINTERPOSITION v101; // [rsp+D0h] [rbp-38h] BYREF
  _BYTE v102[8]; // [rsp+E8h] [rbp-20h] BYREF
  _BYTE v103[64]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v104[72]; // [rsp+130h] [rbp+28h] BYREF

  v93 = a4;
  v98 = a2;
  v97 = a1;
  v94 = -1;
  v95 = 0LL;
  if ( (*(_BYTE *)(&DxgkControlGuid_Context + 2) & 2) != 0 )
  {
    v96 = 1;
    v94 = 3012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3012);
  }
  else
  {
    v96 = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v94, 3012LL);
  LODWORD(v14) = 0;
  *(_QWORD *)&v101.VidPnSourceId = 0LL;
  *(_QWORD *)&v101.Y = 0LL;
  if ( !a3 || !a2 )
    goto LABEL_76;
  v101 = *a2;
  if ( a6 )
  {
    OutputDuplProcessRemoteSessionSetPointerShape(a2, (struct _DXGKARG_SETPOINTERSHAPE *)a3, a4, a5);
    goto LABEL_54;
  }
  if ( a3->Data1 >= 8 )
  {
    v64 = WdLogNewEntry5_WdError(v12, v11, v13);
    *(_QWORD *)(v64 + 24) = a3->Data1;
    *(_QWORD *)(v64 + 32) = a1;
    WdLogEvent5_WdError(v64);
LABEL_76:
    LODWORD(v14) = -1073741811;
    goto LABEL_54;
  }
  PairingAdapters = DxgkpGetPairingAdapters((struct DXGADAPTER *)a1, a3[1].Data1, 0LL, 0LL, &v90, &v100, 0);
  v14 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v65 = (_QWORD *)WdLogNewEntry5_WdEvent(v17);
    v65[3] = a1;
    v65[4] = a3[1].Data1;
    v65[5] = v14;
    WdLogEvent5_WdEvent(v65);
    goto LABEL_54;
  }
  v18 = v90;
  if ( !v90 )
  {
    v66 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v66 + 24) = 1457LL;
    WdLogEvent5_WdAssertion(v66);
  }
  if ( !*((_QWORD *)v18 + 319) )
  {
    v67 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v67 + 24) = 1458LL;
    WdLogEvent5_WdAssertion(v67);
  }
  v19 = *(_QWORD *)((char *)v18 + 276);
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v90 + 2), v90);
  v22 = *((_QWORD *)DXGGLOBAL::GetGlobal(v17, v16) + 74);
  if ( !v22 )
  {
LABEL_82:
    v75 = WdLogNewEntry5_WdError(v21, v20, v23);
    LODWORD(v14) = -1073741811;
    *(_QWORD *)(v75 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v77, v76);
    *(_QWORD *)(v75 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v75);
    goto LABEL_54;
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v21, v20);
  LOBYTE(v92) = 0;
  v26 = CurrentProcessSessionId;
  v91 = v22 + 80;
  if ( v22 == -80 )
  {
    v68 = WdLogNewEntry5_WdAssertion(0LL, v25);
    *(_QWORD *)(v68 + 24) = 660LL;
    WdLogEvent5_WdAssertion(v68);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *(struct _KTHREAD **)(v91 + 16) == CurrentThread )
  {
    v69 = WdLogNewEntry5_WdAssertion(CurrentThread, v25);
    *(_QWORD *)(v69 + 24) = 667LL;
    WdLogEvent5_WdAssertion(v69);
  }
  if ( (_BYTE)v92 )
  {
    v70 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread, v25);
    v70[5] = &v91;
    v70[3] = 275LL;
    v70[4] = 4LL;
    v70[6] = 0LL;
    v70[7] = 0LL;
    WdLogEvent5_WdCriticalError(v70);
  }
  v28 = v91;
  KeEnterCriticalRegion();
  if ( *(struct _KTHREAD **)(v28 + 16) == KeGetCurrentThread() )
  {
    v71 = *(_DWORD *)(v28 + 24);
    if ( v71 <= 0 )
    {
      v72 = WdLogNewEntry5_WdAssertion(v30, v29);
      *(_QWORD *)(v72 + 24) = 559LL;
      WdLogEvent5_WdAssertion(v72);
      v71 = *(_DWORD *)(v28 + 24);
    }
    v32 = v71 + 1;
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v28, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v63 = *(_DWORD *)(v28 + 28);
        if ( v63 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v30, &EventBlockThread, v31, v63);
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v28 + 8));
      ExAcquirePushLockExclusiveEx(v28, 0LL);
    }
    if ( *(_QWORD *)(v28 + 16) )
    {
      v73 = WdLogNewEntry5_WdAssertion(v30, v29);
      *(_QWORD *)(v73 + 24) = 583LL;
      WdLogEvent5_WdAssertion(v73);
    }
    if ( *(_DWORD *)(v28 + 24) )
    {
      v74 = WdLogNewEntry5_WdAssertion(v30, v29);
      *(_QWORD *)(v74 + 24) = 584LL;
      WdLogEvent5_WdAssertion(v74);
    }
    *(_QWORD *)(v28 + 16) = KeGetCurrentThread();
    v32 = 1;
  }
  *(_DWORD *)(v28 + 24) = v32;
  LOBYTE(v92) = 1;
  if ( (unsigned int)v26 >= *(_DWORD *)(v22 + 72) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v91);
    goto LABEL_82;
  }
  _mm_lfence();
  v33 = v91;
  v34 = *(_QWORD *)(*(_QWORD *)(v22 + 40) + 8 * v26);
  LOBYTE(v92) = 0;
  if ( *(struct _KTHREAD **)(v91 + 16) != KeGetCurrentThread() )
  {
    v78 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30, v29);
    v78[3] = 275LL;
    v78[4] = 4LL;
    v78[5] = v33;
    v78[6] = 0LL;
    v78[7] = 0LL;
    WdLogEvent5_WdCriticalError(v78);
  }
  v35 = *(_DWORD *)(v33 + 24);
  if ( v35 <= 0 )
  {
    v79 = WdLogNewEntry5_WdAssertion(v30, v29);
    *(_QWORD *)(v79 + 24) = 603LL;
    WdLogEvent5_WdAssertion(v79);
    v35 = *(_DWORD *)(v33 + 24);
  }
  v36 = v35 - 1;
  *(_DWORD *)(v33 + 24) = v36;
  if ( !v36 )
  {
    *(_QWORD *)(v33 + 16) = 0LL;
    ExReleasePushLockExclusiveEx(v33, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( !v34 )
    goto LABEL_82;
  v37 = DxgkAcquireSessionModeChangeLock(0LL);
  v14 = v37;
  if ( v37 < 0 )
  {
    v40 = 0;
    v89 = 0;
  }
  else
  {
    v89 = 1;
    v40 = 1;
  }
  if ( v37 < 0 )
  {
    v80 = WdLogNewEntry5_WdEvent(v38);
    *(_QWORD *)(v80 + 24) = v14;
    WdLogEvent5_WdEvent(v80);
    goto LABEL_88;
  }
  Data1 = a3[1].Data1;
  v42 = (_QWORD *)(v34 + 18552);
  v43 = *(_QWORD **)(v34 + 18552);
  if ( v43 == (_QWORD *)(v34 + 18552) )
    goto LABEL_86;
  v11 = HIDWORD(v19);
  while ( *(v43 - 3) != v19 )
  {
    v43 = (_QWORD *)*v43;
    if ( v43 == v42 )
      goto LABEL_86;
  }
  v42 = v43 + 10;
  v44 = (_QWORD *)v43[10];
  if ( v44 == v42 )
    goto LABEL_86;
  while ( *((_DWORD *)v44 - 4) != (_DWORD)Data1 )
  {
    v44 = (_QWORD *)*v44;
    if ( v44 == v42 )
      goto LABEL_86;
  }
  if ( v44 == (_QWORD *)32 )
  {
LABEL_86:
    v81 = (_QWORD *)WdLogNewEntry5_WdWarning(v42, v11, v39);
    v81[4] = SHIDWORD(v19);
    v81[5] = (unsigned int)v19;
    v81[3] = Data1;
    v81[6] = v34;
    WdLogEvent5_WdWarning(v81);
    goto LABEL_87;
  }
  v45 = (struct SESSION_VIEW *)v44[2];
  if ( !v45 )
  {
LABEL_87:
    v82 = (_QWORD *)WdLogNewEntry5_WdError(v42, v11, v39);
    v82[3] = a3[1].Data1;
    v82[4] = SHIDWORD(v19);
    v82[5] = (unsigned int)v19;
    LODWORD(v14) = -1073741811;
    v82[6] = (unsigned int)PsGetCurrentProcessSessionId((unsigned int)v19, v83);
    v82[7] = -1073741811LL;
    WdLogEvent5_WdError(v82);
LABEL_88:
    if ( !v40 )
      goto LABEL_54;
    goto LABEL_53;
  }
  if ( *(_QWORD *)v45 != v34 )
  {
    v84 = WdLogNewEntry5_WdAssertion(v42, HIDWORD(v19));
    *(_QWORD *)(v84 + 24) = 3537LL;
    WdLogEvent5_WdAssertion(v84);
  }
  v46 = (_QWORD *)*((_QWORD *)v45 + 6);
  if ( v46 != (_QWORD *)((char *)v45 + 48) )
  {
    v47 = (struct DISPLAY_SOURCE *)(v46 - 7);
    if ( v46 != (_QWORD *)56 )
    {
      while ( 1 )
      {
        LODWORD(v14) = SetPointerShapeForDisplaySource(
                         v47,
                         v98,
                         (const struct _DXGKARG_SETPOINTERSHAPE *)a3,
                         v45,
                         v97,
                         v93,
                         a5,
                         0,
                         a7 != 0);
        v90 = (struct DXGADAPTER *)(unsigned int)v14;
        if ( (int)v14 < 0 )
          break;
        v48 = (_QWORD *)*((_QWORD *)v47 + 7);
        if ( v48 != (_QWORD *)((char *)v45 + 48) )
        {
          v47 = (struct DISPLAY_SOURCE *)(v48 - 7);
          if ( v47 )
            continue;
        }
        goto LABEL_52;
      }
      PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v45);
      if ( PrimaryDisplaySource )
      {
        do
        {
          v53 = *((_QWORD *)PrimaryDisplaySource + 1);
          v54 = *(ADAPTER_DISPLAY ***)(v53 + 16);
          if ( !v54 )
          {
            v85 = WdLogNewEntry5_WdAssertion(v53, v11);
            *(_QWORD *)(v85 + 24) = 1521LL;
            WdLogEvent5_WdAssertion(v85);
          }
          if ( !v54[319] )
          {
            v86 = WdLogNewEntry5_WdAssertion(v53, v11);
            *(_QWORD *)(v86 + 24) = 1522LL;
            WdLogEvent5_WdAssertion(v86);
          }
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v102, (struct DXGADAPTER *const)v54, 0LL);
          v56 = COREADAPTERACCESS::AcquireShared((__int64)v102, (unsigned int)(v55 - 1), v55);
          v60 = v56;
          if ( v56 < 0 )
          {
            v88 = (_QWORD *)WdLogNewEntry5_WdError(v58, v57, v59);
            v88[4] = (unsigned int)v19;
            v88[3] = SHIDWORD(v19);
            v88[5] = v60;
            WdLogEvent5_WdError(v88);
          }
          else
          {
            DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v99, (ADAPTER_DISPLAY *)((char *)v54[319] + 384), 0);
            DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v99);
            if ( ADAPTER_DISPLAY::IsVidPnSourceActive(v54[319], *((_DWORD *)PrimaryDisplaySource + 4)) )
            {
              v87 = *((_DWORD *)PrimaryDisplaySource + 4);
              v101.Flags.Value &= ~1u;
              v101.VidPnSourceId = v87;
              *(_QWORD *)&v101.X = 0LL;
              ADAPTER_DISPLAY::DdiSetPointerPosition(v54[319], &v101, v61);
            }
            v62 = v99[8] == 0;
            *(_QWORD *)((char *)PrimaryDisplaySource + 3748) = -1LL;
            *((_BYTE *)PrimaryDisplaySource + 724) = 0;
            if ( !v62 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v99);
          }
          COREACCESS::~COREACCESS((COREACCESS *)v104);
          COREACCESS::~COREACCESS((COREACCESS *)v103);
          PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v45, PrimaryDisplaySource);
        }
        while ( PrimaryDisplaySource );
        LODWORD(v14) = (_DWORD)v90;
      }
    }
  }
LABEL_52:
  if ( v89 )
LABEL_53:
    DxgkReleaseSessionModeChangeLock();
LABEL_54:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v94, v11);
  if ( v96 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v49, &EventProfilerExit, v50, v94);
  return (unsigned int)v14;
}
