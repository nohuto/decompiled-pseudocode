/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C0105B60
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x1C0105A70 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006D80 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000700C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007068 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007328 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C00075DC (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00076AC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C000BEB0 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C000C05C (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C000C0A0 (-AcquireShared@COREADAPTERACCESS@@QEAAJW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C001AB40 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C0023750 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqq @ 0x1C0036DCC (McTemplateK0qqqq.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C0047200 (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C00CA358 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E9C20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C01061A0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010BCB0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C010C150 (-ReleaseCoreResource@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01252BC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C015A258 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01F0C38 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C01F47B4 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0242248 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r13
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  __int64 v6; // r12
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rcx
  const GUID *v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // r9
  int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v26; // r12
  int PairingAdapters; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdi
  volatile signed __int64 *v32; // rdi
  volatile signed __int64 *v33; // rsi
  signed __int64 v34; // rcx
  DXGADAPTER *v35; // rdi
  struct DXGADAPTER *v36; // rcx
  __int64 v37; // rcx
  const GUID *v38; // r8
  DXGADAPTER *v39; // r13
  DXGADAPTER *v40; // rsi
  ADAPTER_DISPLAY **v41; // r12
  ADAPTER_DISPLAY *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 *v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  ADAPTER_DISPLAY *v50; // rsi
  int v51; // r12d
  __int64 v52; // r13
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  const GUID *v57; // r8
  __int64 v58; // rdi
  DXGGLOBAL **v59; // rcx
  DXGGLOBAL **v60; // rcx
  int v62; // edi
  REMOTE_VSYNC *v63; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v65; // rbx
  __int64 v66; // rax
  __int64 v67; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v69; // rax
  int v70; // r9d
  __int64 v71; // r14
  __int64 v72; // r9
  int v73; // edx
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // rax
  DXGSESSIONMGR *v79; // rdi
  unsigned int CurrentProcessSessionId; // eax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  DXGADAPTER *v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 *v95; // rax
  __int64 *v96; // r12
  __int64 v97; // rcx
  unsigned int v98; // edx
  _QWORD *v99; // rax
  unsigned __int8 v100; // [rsp+40h] [rbp-C0h] BYREF
  char v101; // [rsp+41h] [rbp-BFh]
  char v102; // [rsp+42h] [rbp-BEh]
  char v103; // [rsp+43h] [rbp-BDh]
  unsigned int v104; // [rsp+44h] [rbp-BCh]
  unsigned int v105; // [rsp+48h] [rbp-B8h]
  DXGADAPTER *v106; // [rsp+50h] [rbp-B0h] BYREF
  int v107; // [rsp+58h] [rbp-A8h]
  DXGADAPTER *v108; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGDEVICE *v109; // [rsp+68h] [rbp-98h] BYREF
  __int64 v110; // [rsp+70h] [rbp-90h]
  char *v111; // [rsp+78h] [rbp-88h]
  struct DXGDEVICE *v112; // [rsp+80h] [rbp-80h] BYREF
  char v113[8]; // [rsp+88h] [rbp-78h] BYREF
  DXGADAPTER *v114; // [rsp+90h] [rbp-70h]
  char v115; // [rsp+98h] [rbp-68h]
  char v116[8]; // [rsp+A0h] [rbp-60h] BYREF
  DXGADAPTER *v117; // [rsp+A8h] [rbp-58h]
  char v118; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v119; // [rsp+B8h] [rbp-48h] BYREF
  unsigned __int64 v120; // [rsp+C0h] [rbp-40h] BYREF
  char v121[8]; // [rsp+D0h] [rbp-30h] BYREF
  char v122[8]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v123; // [rsp+E0h] [rbp-20h]
  struct DXGADAPTER *v124; // [rsp+E8h] [rbp-18h]
  char v125; // [rsp+F0h] [rbp-10h]
  unsigned int v126; // [rsp+F4h] [rbp-Ch]
  __int64 v127; // [rsp+F8h] [rbp-8h]
  char v128[8]; // [rsp+118h] [rbp+18h] BYREF
  __int64 v129; // [rsp+120h] [rbp+20h]
  struct DXGADAPTER *v130; // [rsp+128h] [rbp+28h]
  char v131; // [rsp+130h] [rbp+30h]
  int v132; // [rsp+134h] [rbp+34h]
  __int64 v133; // [rsp+138h] [rbp+38h]

  v4 = (unsigned int)a2;
  SessionDataForSpecifiedSession = 0LL;
  v107 = a2;
  v109 = 0LL;
  v105 = a4;
  v104 = a3;
  v6 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v65 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v12 = *v65;
    }
  }
  if ( !v12 )
  {
    v66 = WdLogNewEntry5_WdError(v10, v9, v11);
    LODWORD(v31) = -1073741811;
    *(_QWORD *)(v66 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v66);
    return (unsigned int)v31;
  }
  if ( !*(_BYTE *)(v12 + 298) )
  {
    v67 = WdLogNewEntry5_WdWarning(v10, v9, v11);
    *(_QWORD *)(v67 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v67);
    return 3221225506LL;
  }
  if ( (_DWORD)v6 || !DXGPROCESS::IsRemoteConnection((DXGPROCESS *)v12) )
  {
    if ( v12 != -184 && *(struct _KTHREAD **)(v12 + 192) == KeGetCurrentThread() )
    {
      v69 = WdLogNewEntry5_WdAssertion(v10, v9);
      *(_QWORD *)(v69 + 24) = 1449LL;
      WdLogEvent5_WdAssertion(v69);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v12 + 184, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v70 = *(_DWORD *)(v12 + 200);
        if ( v70 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v13, &EventBlockThread, v14, v70);
      }
      ExAcquirePushLockSharedEx(v12 + 184, 0LL);
    }
    v15 = ((unsigned int)v6 >> 6) & 0xFFFFFF;
    if ( (*(_BYTE *)(v12 + 299) & 8) == 0 )
    {
      if ( v15 < *(_DWORD *)(v12 + 224) )
      {
        v16 = *(_QWORD *)(v12 + 208);
        v17 = *(_DWORD *)(v16 + 16LL * v15 + 8);
        if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60)
          && (v17 & 0x2000) == 0
          && (v17 & 0x1F) != 0 )
        {
          v18 = v17 & 0x1F;
          if ( (_BYTE)v18 == 1 )
          {
            v19 = *(_QWORD *)(v16 + 16LL * v15);
LABEL_19:
            if ( v19 )
              _InterlockedIncrement64((volatile signed __int64 *)(v19 + 24));
            ExReleasePushLockSharedEx(v12 + 184, 0LL);
            KeLeaveCriticalRegion();
            if ( v19 )
            {
              if ( (_DWORD)v4 )
              {
                DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v112, v4, (struct _KTHREAD **)v12, &v109);
                if ( !v109 )
                {
                  v78 = WdLogNewEntry5_WdWarning(v22, v21, v77);
                  *(_QWORD *)(v78 + 24) = v19;
                  *(_QWORD *)(v78 + 32) = v4;
                  WdLogEvent5_WdWarning(v78);
                  if ( v112
                    && _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  {
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
                  }
                  LODWORD(v31) = -1073741811;
                  goto LABEL_91;
                }
                _InterlockedIncrement64((volatile signed __int64 *)v109 + 8);
                if ( v112 )
                {
                  v22 = _InterlockedExchangeAdd64((volatile signed __int64 *)v112 + 8, 0xFFFFFFFFFFFFFFFFuLL);
                  if ( v22 == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v112 + 2), v112);
                }
              }
              v24 = *(_QWORD *)(v12 + 96);
              if ( v24 && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v24 + 224))(0LL, 0LL, 0LL) )
              {
                if ( !*(_BYTE *)(v19 + 185) )
                  goto LABEL_100;
                v79 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v22, v21) + 74);
                if ( v79 )
                {
                  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v22, v21);
                  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     v79,
                                                     CurrentProcessSessionId);
                }
                if ( *((_DWORD *)SessionDataForSpecifiedSession + 4690) )
                  v63 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v22, v21) + 696);
                else
LABEL_100:
                  v63 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v22, v21) + 632);
                LODWORD(v31) = REMOTE_VSYNC::WaitForVSync(v63);
                goto LABEL_90;
              }
              v26 = v104;
              PairingAdapters = DxgkpGetPairingAdapters((struct DXGADAPTER *)v19, v104, &v106, &v119, &v108, &v120, 0);
              v31 = PairingAdapters;
              if ( PairingAdapters < 0 )
              {
                v81 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28, v30);
                v81[3] = v19;
                v81[4] = v26;
                v81[5] = v31;
                WdLogEvent5_WdError(v81);
LABEL_90:
                if ( v109 && _InterlockedExchangeAdd64((volatile signed __int64 *)v109 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v109 + 2), v109);
LABEL_91:
                if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v19 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v19 + 16), (struct DXGADAPTER *)v19);
                return (unsigned int)v31;
              }
              v32 = (volatile signed __int64 *)v106;
              v33 = (volatile signed __int64 *)v108;
              if ( !v106 || !v108 )
              {
                v82 = WdLogNewEntry5_WdAssertion(v29, v28);
                *(_QWORD *)(v82 + 24) = 6194LL;
                WdLogEvent5_WdAssertion(v82);
              }
              if ( v109
                && (v32 != *(volatile signed __int64 **)(*((_QWORD *)v109 + 2) + 16LL)
                 || v33 != *((volatile signed __int64 **)v109 + 216)) )
              {
                v83 = WdLogNewEntry5_WdWarning(v109, v28, v30);
                *(_QWORD *)(v83 + 24) = v19;
                *(_QWORD *)(v83 + 32) = v4;
                WdLogEvent5_WdWarning(v83);
                LODWORD(v31) = -1073741811;
                goto LABEL_90;
              }
              v124 = (struct DXGADAPTER *)v32;
              v125 = 0;
              v126 = -1;
              v127 = 0LL;
              if ( v32 )
              {
                _InterlockedIncrement64(v32 + 3);
                v33 = (volatile signed __int64 *)v108;
                v32 = (volatile signed __int64 *)v106;
                v123 = -1LL;
              }
              if ( !v33 )
                v33 = v32;
              v130 = (struct DXGADAPTER *)v33;
              v131 = 0;
              v132 = -1;
              v133 = 0LL;
              if ( v33 )
              {
                _InterlockedIncrement64(v33 + 3);
                v32 = (volatile signed __int64 *)v106;
                v129 = -1LL;
              }
              if ( _InterlockedExchangeAdd64(v32 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v106 + 2), v106);
              v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)v108 + 3, 0xFFFFFFFFFFFFFFFFuLL);
              v35 = v108;
              if ( v34 == 1 )
                DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v108 + 2), v108);
              if ( *((_DWORD *)v35 + 34) != 1 )
              {
LABEL_42:
                if ( v125 )
                {
                  v88 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v34, v28);
                  v88[5] = v122;
                  v88[3] = 275LL;
                  v88[4] = 4LL;
                  v88[6] = 0LL;
                  v88[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v88);
                }
                v36 = v124;
                if ( KeGetCurrentThread() != *((struct _KTHREAD **)v124 + 20) )
                {
                  if ( !KeReadStateEvent((PRKEVENT)v124 + 2) )
                  {
                    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                      McTemplateK0q(v37, &EventBlockThread, v38, 72);
                    KeWaitForSingleObject((char *)v124 + 48, Executive, 0, 0, 0LL);
                  }
                  DXGADAPTER::AcquireCoreResourceShared(v124, 0xFFFFFFFFLL, 0LL);
                  v36 = v124;
                }
                v126 = -1;
                v127 = 0LL;
                v125 = 1;
                if ( *((_DWORD *)v36 + 44) != 1 )
                  goto LABEL_163;
                if ( v124 != v130 )
                {
                  COREACCESS::AcquireShared((__int64)v128, 0xFFFFFFFF, 0LL);
                  v36 = (struct DXGADAPTER *)*((unsigned int *)v130 + 44);
                  if ( (_DWORD)v36 != 1 )
                  {
                    COREACCESS::Release((COREACCESS *)v128);
LABEL_163:
                    COREACCESS::Release((COREACCESS *)v122);
LABEL_164:
                    v62 = -1073741130;
                    goto LABEL_97;
                  }
                }
                v39 = v106;
                v111 = (char *)v106 + 2560;
                if ( !*((_QWORD *)v106 + 320) )
                {
                  v89 = WdLogNewEntry5_WdAssertion(v36, v28);
                  *(_QWORD *)(v89 + 24) = 6253LL;
                  WdLogEvent5_WdAssertion(v89);
                }
                v40 = v108;
                v41 = (ADAPTER_DISPLAY **)((char *)v108 + 2552);
                if ( !*((_QWORD *)v108 + 319) )
                {
                  v90 = WdLogNewEntry5_WdAssertion(v36, v28);
                  *(_QWORD *)(v90 + 24) = 6254LL;
                  WdLogEvent5_WdAssertion(v90);
                }
                if ( v107 )
                {
                  v36 = (struct DXGADAPTER *)*((unsigned int *)v109 + 116);
                  if ( (_DWORD)v36 != 1 )
                    goto LABEL_164;
                  v40 = v108;
                  v39 = v106;
                }
                v42 = *v41;
                v101 = 0;
                v100 = 0;
                v102 = 0;
                v103 = 0;
                if ( v42
                  || (v91 = WdLogNewEntry5_WdAssertion(v36, v28),
                      *(_QWORD *)(v91 + 24) = 9139LL,
                      WdLogEvent5_WdAssertion(v91),
                      (v42 = *v41) != 0LL) )
                {
                  v43 = v104;
                  if ( v104 >= *((_DWORD *)v42 + 20) )
                  {
                    v92 = WdLogNewEntry5_WdAssertion(v36, v104);
                    *(_QWORD *)(v92 + 24) = 5823LL;
                    WdLogEvent5_WdAssertion(v92);
                    v43 = v104;
                  }
                  v44 = 3968LL * (unsigned int)v43;
                  v45 = *((_QWORD *)v42 + 14);
                  v110 = v44;
                  if ( *(_BYTE *)(v45 + v44 + 720) )
                  {
                    if ( !*((_QWORD *)v40 + 320) )
                    {
                      ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(*v41, v43, v105, *((_DWORD *)v39 + 646), &v100);
                      ADAPTER_DISPLAY::ControlVSyncAdapter(*v41, v104);
                      goto LABEL_71;
                    }
                    if ( v40 != v39 )
                    {
                      v93 = WdLogNewEntry5_WdAssertion(v44, v43);
                      *(_QWORD *)(v93 + 24) = 6277LL;
                      WdLogEvent5_WdAssertion(v93);
                    }
                    _InterlockedIncrement((volatile signed __int32 *)v39 + 646);
                    v46 = (__int64 *)v111;
                    v101 = 1;
                    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v111 + 520LL)
                                                                                       + 8LL)
                                                                           + 544LL))(
                           *(_QWORD *)(*(_QWORD *)v111 + 528LL),
                           v104) )
                    {
LABEL_62:
                      v50 = *v41;
                      v51 = *((_DWORD *)v39 + 646);
                      v107 = v51;
                      v52 = *((_QWORD *)v50 + 14) + v110;
                      v53 = PsGetCurrentProcess(v48, v47);
                      v54 = PsGetProcessDxgProcess(v53);
                      v58 = v54;
                      if ( !v54 || (*(_BYTE *)(v54 + 299) & 4) != 0 )
                      {
                        v95 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
                        v96 = v95;
                        if ( v95 )
                        {
                          ObfDereferenceObject(v95);
                          v58 = *v96;
                        }
                        LOBYTE(v51) = v107;
                      }
                      v100 = 1;
                      if ( *(_QWORD *)(v52 + 936) && *(_BYTE *)(v58 + 298) )
                      {
                        if ( *((_QWORD *)v50 + 46) )
                        {
                          v97 = v104;
                          v98 = v105;
                          *(_DWORD *)(v52 + 944) = v105;
                          BLTQUEUE::SetDWMTargetVsync(
                            (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)v50 + 46) + 8LL) + 2760 * v97),
                            v98);
                        }
                        else
                        {
                          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                            McTemplateK0qqqq(
                              v56,
                              &EventDWMVsyncCountWait,
                              v57,
                              v105,
                              *(_DWORD *)(v52 + 948),
                              *(_BYTE *)(v52 + 952),
                              v51);
                          ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(v50, v104, v105, &v100);
                        }
                      }
LABEL_71:
                      if ( v124 != v130 )
                        COREACCESS::Release((COREACCESS *)v128);
                      if ( !v125 )
                      {
                        v99 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v56, v55);
                        v99[5] = v122;
                        v99[3] = 275LL;
                        v99[4] = 4LL;
                        v99[6] = 0LL;
                        v99[7] = 0LL;
                        WdLogEvent5_WdCriticalError(v99);
                      }
                      v125 = 0;
                      if ( KeGetCurrentThread() != *((struct _KTHREAD **)v124 + 20) )
                        DXGADAPTER::ReleaseCoreResource(v124, v126, v127);
                      v127 = 0LL;
                      v126 = -1;
                      if ( v100 && v101 )
                        DXGADAPTER::DecrementVSyncWaiter(v106, v55);
                      if ( !v102 )
                      {
                        if ( v103 )
                        {
                          LODWORD(SessionDataForSpecifiedSession) = COREADAPTERACCESS::AcquireShared(
                                                                      (__int64)v121,
                                                                      0xFFFFFFFFLL,
                                                                      0LL);
                          if ( (int)SessionDataForSpecifiedSession >= 0 && *((_DWORD *)v109 + 116) == 1 )
                            LODWORD(SessionDataForSpecifiedSession) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v111 + 520LL) + 8LL) + 560LL))(
                                                                        *((_QWORD *)v109 + 82),
                                                                        0LL,
                                                                        0LL);
                        }
                        goto LABEL_80;
                      }
                      v62 = COREADAPTERACCESS::AcquireShared((__int64)v121, 0xFFFFFFFFLL, 0LL);
                      if ( v62 >= 0 )
                      {
                        LODWORD(SessionDataForSpecifiedSession) = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v111 + 520LL) + 8LL) + 552LL))(
                                                                    *(_QWORD *)(*(_QWORD *)v111 + 528LL),
                                                                    1LL);
                        goto LABEL_80;
                      }
LABEL_97:
                      LODWORD(SessionDataForSpecifiedSession) = v62;
LABEL_80:
                      LODWORD(v31) = (_DWORD)SessionDataForSpecifiedSession;
                      if ( v130 )
                      {
                        if ( v131 )
                          COREACCESS::Release((COREACCESS *)v128);
                        v59 = (DXGGLOBAL **)v130;
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v130 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(v59[2], (struct DXGADAPTER *)v59);
                      }
                      if ( v124 )
                      {
                        if ( v125 )
                          COREACCESS::Release((COREACCESS *)v122);
                        v60 = (DXGGLOBAL **)v124;
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v124 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(v60[2], (struct DXGADAPTER *)v60);
                      }
                      goto LABEL_90;
                    }
                    LOBYTE(v49) = 1;
                    v94 = *v46;
                    if ( !v109 )
                    {
                      if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v94 + 520) + 8LL)
                                                                           + 552LL))(
                             *(_QWORD *)(v94 + 528),
                             1LL,
                             v49) < 0 )
                      {
                        DXGADAPTER::DecrementVSyncWaiter(v106, v47);
                        v62 = -1071775738;
                        goto LABEL_97;
                      }
                      v102 = 1;
                      goto LABEL_62;
                    }
                    if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v94 + 520) + 8LL)
                                                                        + 560LL))(
                           *((_QWORD *)v109 + 82),
                           0LL,
                           v49) >= 0 )
                    {
                      v103 = 1;
                      goto LABEL_62;
                    }
                    DXGADAPTER::DecrementVSyncWaiter(v106, v47);
                  }
                }
                v62 = -1071775738;
                goto LABEL_97;
              }
              v84 = v106;
              v117 = v106;
              v118 = 0;
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v116);
              v114 = v35;
              v115 = 0;
              if ( v35 != v84 )
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
              if ( *((_DWORD *)v84 + 44) == 1 && *((_DWORD *)v108 + 44) == 1 )
              {
                if ( (unsigned int)v26 < *(_DWORD *)(*((_QWORD *)v108 + 319) + 80LL) )
                {
                  if ( DXGADAPTER::IsVSyncAvailable(v108, (unsigned int)v26) )
                  {
                    if ( v115 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
                    if ( v118 )
                      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v116);
                    goto LABEL_42;
                  }
                  v62 = -1071775738;
                }
                else
                {
                  v87 = WdLogNewEntry5_WdWarning(v108, v85, v86);
                  v62 = -1073741811;
                  *(_QWORD *)(v87 + 24) = v26;
                  *(_QWORD *)(v87 + 32) = -1073741811LL;
                  WdLogEvent5_WdWarning(v87);
                }
              }
              else
              {
                v62 = -1073741130;
              }
              if ( v115 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
              if ( v118 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v116);
              goto LABEL_97;
            }
            v76 = WdLogNewEntry5_WdWarning(v22, v21, v23);
            LODWORD(v31) = -1073741811;
            *(_QWORD *)(v76 + 24) = v6;
            *(_QWORD *)(v76 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v76);
            return (unsigned int)v31;
          }
          v20 = WdLogNewEntry5_WdError(((unsigned int)v6 >> 25) & 0x60, v18, 2LL * v15);
          *(_QWORD *)(v20 + 24) = 267LL;
          WdLogEvent5_WdError(v20);
        }
      }
      v19 = 0LL;
      goto LABEL_19;
    }
    v71 = *(_QWORD *)(v12 + 432);
    v111 = (char *)(v71 + 184);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v71 + 184));
    if ( v15 < *(_DWORD *)(v71 + 224) )
    {
      v72 = *(_QWORD *)(v71 + 208);
      v73 = *(_DWORD *)(v72 + 16LL * v15 + 8);
      if ( (((unsigned int)v6 >> 25) & 0x60) == (*(_BYTE *)(v72 + 16LL * v15 + 8) & 0x60)
        && (v73 & 0x2000) == 0
        && (v73 & 0x1F) != 0 )
      {
        v74 = v73 & 0x1F;
        if ( (_BYTE)v74 == 1 )
        {
          v19 = *(_QWORD *)(v72 + 16LL * v15);
          goto LABEL_120;
        }
        v75 = WdLogNewEntry5_WdError(((unsigned int)v6 >> 25) & 0x60, v74, 2LL * v15);
        *(_QWORD *)(v75 + 24) = 267LL;
        WdLogEvent5_WdError(v75);
      }
    }
    v19 = 0LL;
LABEL_120:
    ExReleasePushLockSharedEx(v111, 0LL);
    KeLeaveCriticalRegion();
    goto LABEL_19;
  }
  Global = DXGGLOBAL::GetGlobal(v10, v9);
  return REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)Global + 632));
}
