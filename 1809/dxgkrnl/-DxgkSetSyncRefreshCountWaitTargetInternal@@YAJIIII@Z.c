/*
 * XREFs of ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x1C01262F0
 * Callers:
 *     DxgkSetSyncRefreshCountWaitTarget @ 0x1C0126200 (DxgkSetSyncRefreshCountWaitTarget.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF84 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000E054 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E760 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00101B4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00118EC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0011D10 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0011DA0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0012240 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z @ 0x1C0013F70 (-SetSyncRefreshCountWaitTargetNonPaged@ADAPTER_DISPLAY@@QEAAXIIPEAE@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0014024 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqqq @ 0x1C00314FC (McTemplateK0qqqq.c)
 *     ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1C0040440 (-SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0126AEC (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01C1038 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1C01C5240 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C022EBA8 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkSetSyncRefreshCountWaitTargetInternal(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r13
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rcx
  const GUID *v15; // r8
  unsigned int v16; // ebx
  __int64 v17; // r9
  int v18; // edx
  __int64 *v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  volatile signed __int64 *v28; // rsi
  volatile signed __int64 *v29; // r14
  signed __int64 v30; // rcx
  DXGADAPTER *v31; // rcx
  __int64 v32; // rcx
  const GUID *v33; // r8
  DXGADAPTER *v34; // r14
  bool v35; // zf
  __int64 v36; // rsi
  char v37; // r13
  char v38; // r15
  __int64 v39; // r12
  __int64 v40; // r8
  ADAPTER_DISPLAY *v41; // r15
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rcx
  const GUID *v46; // r8
  __int64 v47; // rsi
  int v48; // esi
  DXGGLOBAL **v49; // rcx
  DXGGLOBAL **v50; // rcx
  __int64 *ThreadProperty; // rax
  __int64 *v53; // rbx
  __int64 v54; // rax
  __int64 v55; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v57; // rax
  int v58; // r9d
  __int64 v59; // r13
  __int64 v60; // r9
  int v61; // edx
  __int64 *v62; // rbx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rax
  DXGSESSIONMGR *v70; // rsi
  unsigned int CurrentProcessSessionId; // eax
  REMOTE_VSYNC *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // r8
  __int64 v80; // rax
  _QWORD *v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 *v88; // rax
  __int64 *v89; // r12
  _QWORD *v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rax
  char v93; // [rsp+40h] [rbp-99h]
  unsigned __int8 v94; // [rsp+41h] [rbp-98h] BYREF
  char v95; // [rsp+42h] [rbp-97h]
  char *v96; // [rsp+48h] [rbp-91h]
  DXGADAPTER *v97; // [rsp+50h] [rbp-89h]
  struct DXGDEVICE *v98; // [rsp+58h] [rbp-81h] BYREF
  struct DXGDEVICE *v99; // [rsp+60h] [rbp-79h] BYREF
  unsigned int v100; // [rsp+68h] [rbp-71h]
  char v101[8]; // [rsp+70h] [rbp-69h] BYREF
  struct _KTHREAD **v102[2]; // [rsp+78h] [rbp-61h] BYREF
  DXGADAPTER *v103; // [rsp+88h] [rbp-51h]
  char v104; // [rsp+90h] [rbp-49h]
  struct _KTHREAD **v105[2]; // [rsp+98h] [rbp-41h] BYREF
  struct DXGADAPTER *v106; // [rsp+A8h] [rbp-31h]
  char v107; // [rsp+B0h] [rbp-29h]
  char v108[8]; // [rsp+C0h] [rbp-19h] BYREF
  char v109; // [rsp+C8h] [rbp-11h]
  char v110[8]; // [rsp+D0h] [rbp-9h] BYREF
  __int64 v111; // [rsp+D8h] [rbp-1h]
  char v112; // [rsp+E0h] [rbp+7h]
  char v113[8]; // [rsp+E8h] [rbp+Fh] BYREF
  DXGADAPTER *v114; // [rsp+F0h] [rbp+17h]
  char v115; // [rsp+F8h] [rbp+1Fh]

  SessionDataForSpecifiedSession = 0LL;
  v5 = a3;
  v98 = 0LL;
  v6 = a2;
  v7 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v13 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v53 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v13 = *v53;
      }
    }
  }
  if ( !v13 )
  {
    v54 = WdLogNewEntry5_WdError(v11);
    v48 = -1073741811;
    *(_QWORD *)(v54 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v54);
    return (unsigned int)v48;
  }
  if ( !*(_BYTE *)(v13 + 322) )
  {
    v55 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v55 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v55);
    return 3221225506LL;
  }
  if ( (_DWORD)v7
    || !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(v13 + 104) + 224LL))(0LL, 0LL, 0LL) )
  {
    if ( v13 != -208 && *(struct _KTHREAD **)(v13 + 216) == KeGetCurrentThread() )
    {
      v57 = WdLogNewEntry5_WdAssertion(v11);
      *(_QWORD *)(v57 + 24) = 1309LL;
      WdLogEvent5_WdAssertion(v57);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v13 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v58 = *(_DWORD *)(v13 + 224);
        if ( v58 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v14, &EventBlockThread, v15, v58);
      }
      ExAcquirePushLockSharedEx(v13 + 208, 0LL);
    }
    v16 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
    if ( (*(_BYTE *)(v13 + 323) & 8) == 0 )
    {
      if ( v16 < *(_DWORD *)(v13 + 248) )
      {
        v17 = *(_QWORD *)(v13 + 232);
        v18 = *(_DWORD *)(v17 + 16LL * v16 + 8);
        if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x60)
          && (v18 & 0x2000) == 0
          && (v18 & 0x1F) != 0 )
        {
          v19 = (__int64 *)(v17 + 16LL * v16);
          if ( (v18 & 0x1F) == 1 )
          {
            v20 = *v19;
LABEL_17:
            if ( v20 )
              _InterlockedIncrement64((volatile signed __int64 *)(v20 + 24));
            ExReleasePushLockSharedEx(v13 + 208, 0LL);
            KeLeaveCriticalRegion();
            if ( v20 )
            {
              if ( (_DWORD)v6 )
              {
                DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v99, v6, (struct _KTHREAD **)v13, &v98);
                if ( !v98 )
                {
                  v69 = WdLogNewEntry5_WdWarning(v67, v66, v68);
                  *(_QWORD *)(v69 + 24) = v20;
                  *(_QWORD *)(v69 + 32) = v6;
                  WdLogEvent5_WdWarning(v69);
                  if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
                  v48 = -1073741811;
                  goto LABEL_86;
                }
                _InterlockedIncrement64((volatile signed __int64 *)v98 + 8);
                if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                  ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
              }
              if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(v13 + 104) + 224LL))(
                     0LL,
                     0LL,
                     0LL) )
              {
                if ( !*(_BYTE *)(v20 + 185) )
                  goto LABEL_126;
                v70 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v25) + 77);
                if ( v70 )
                {
                  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v25);
                  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                                     v70,
                                                     CurrentProcessSessionId);
                }
                if ( *((_DWORD *)SessionDataForSpecifiedSession + 4690) )
                  v72 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v25) + 720);
                else
LABEL_126:
                  v72 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v25) + 656);
                v48 = REMOTE_VSYNC::WaitForVSync(v72);
                goto LABEL_85;
              }
              v27 = *(_QWORD *)(v20 + 2520);
              if ( v27 )
              {
                if ( (unsigned int)v5 >= *(_DWORD *)(v27 + 80) )
                {
                  v73 = WdLogNewEntry5_WdError(v25);
                  v48 = -1073741811;
                  *(_QWORD *)(v73 + 24) = v5;
                  *(_QWORD *)(v73 + 32) = -1073741811LL;
                  WdLogEvent5_WdError(v73);
LABEL_184:
                  v92 = (_QWORD *)WdLogNewEntry5_WdError(v25);
                  v92[5] = v48;
                  v92[3] = v20;
                  v92[4] = v5;
                  WdLogEvent5_WdError(v92);
                  goto LABEL_85;
                }
                _InterlockedIncrement64((volatile signed __int64 *)(v20 + 24));
                if ( *(_QWORD *)(v20 + 2528) )
                {
                  _InterlockedIncrement64((volatile signed __int64 *)(v20 + 24));
                  v28 = (volatile signed __int64 *)v20;
                  v97 = (DXGADAPTER *)v20;
                  v29 = (volatile signed __int64 *)v20;
                  goto LABEL_26;
                }
                DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v108);
                DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v108);
                v28 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v74) + 80);
                v29 = v28;
                if ( v28 )
                {
                  _InterlockedIncrement64(v28 + 3);
                  v97 = (DXGADAPTER *)v28;
                  if ( v109 )
                    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v108);
LABEL_26:
                  if ( !v29 )
                  {
                    v75 = WdLogNewEntry5_WdAssertion(v25);
                    *(_QWORD *)(v75 + 24) = 5788LL;
                    WdLogEvent5_WdAssertion(v75);
                  }
                  if ( v98
                    && (v28 != *(volatile signed __int64 **)(*((_QWORD *)v98 + 2) + 16LL)
                     || v20 != *((_QWORD *)v98 + 216)) )
                  {
                    v76 = WdLogNewEntry5_WdWarning(v98, v24, v26);
                    *(_QWORD *)(v76 + 24) = v20;
                    *(_QWORD *)(v76 + 32) = v6;
                    WdLogEvent5_WdWarning(v76);
                    v48 = -1073741811;
LABEL_85:
                    if ( v98
                      && _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    {
                      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v98 + 2), v98);
                    }
LABEL_86:
                    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                      DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v20 + 16), (struct DXGADAPTER *)v20);
                    return (unsigned int)v48;
                  }
                  v103 = (DXGADAPTER *)v28;
                  v104 = 0;
                  _InterlockedIncrement64(v28 + 3);
                  v102[1] = (struct _KTHREAD **)-1LL;
                  v106 = (struct DXGADAPTER *)v20;
                  v107 = 0;
                  _InterlockedIncrement64((volatile signed __int64 *)(v20 + 24));
                  v105[1] = (struct _KTHREAD **)-1LL;
                  v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)v97 + 3, 0xFFFFFFFFFFFFFFFFuLL);
                  if ( v30 == 1 )
                    DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v97 + 2), v97);
                  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                    DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v20 + 16), (struct DXGADAPTER *)v20);
                  if ( *(_DWORD *)(v20 + 136) != 1 )
                  {
LABEL_34:
                    if ( v104 )
                    {
                      v81 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v30);
                      v81[5] = v102;
                      v81[3] = 275LL;
                      v81[4] = 4LL;
                      v81[6] = 0LL;
                      v81[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v81);
                    }
                    v31 = v103;
                    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v103 + 20) )
                    {
                      if ( !KeReadStateEvent((PRKEVENT)v103 + 2) )
                      {
                        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          McTemplateK0q(v32, &EventBlockThread, v33, 72);
                        KeWaitForSingleObject((char *)v103 + 48, Executive, 0, 0, 0LL);
                      }
                      DXGADAPTER::AcquireCoreResourceShared(v103);
                      v31 = v103;
                    }
                    v104 = 1;
                    if ( *((_DWORD *)v31 + 44) != 1 )
                      goto LABEL_158;
                    if ( v103 != v106 )
                    {
                      COREACCESS::AcquireShared((DXGADAPTER **)v105);
                      v31 = (DXGADAPTER *)*((unsigned int *)v106 + 44);
                      if ( (_DWORD)v31 != 1 )
                      {
                        COREACCESS::Release(v105);
LABEL_158:
                        COREACCESS::Release(v102);
LABEL_159:
                        v48 = -1073741130;
                        goto LABEL_75;
                      }
                    }
                    v34 = v97;
                    v35 = *((_QWORD *)v97 + 316) == 0LL;
                    v96 = (char *)v97 + 2528;
                    if ( v35 )
                    {
                      v82 = WdLogNewEntry5_WdAssertion(v31);
                      *(_QWORD *)(v82 + 24) = 5847LL;
                      WdLogEvent5_WdAssertion(v82);
                    }
                    if ( !*(_QWORD *)(v20 + 2520) )
                    {
                      v83 = WdLogNewEntry5_WdAssertion(v31);
                      *(_QWORD *)(v83 + 24) = 5848LL;
                      WdLogEvent5_WdAssertion(v83);
                    }
                    if ( (_DWORD)v6 )
                    {
                      v31 = (DXGADAPTER *)*((unsigned int *)v98 + 116);
                      if ( (_DWORD)v31 != 1 )
                        goto LABEL_159;
                      v34 = v97;
                    }
                    v36 = *(_QWORD *)(v20 + 2520);
                    v37 = 0;
                    v38 = 0;
                    v94 = 0;
                    v95 = 0;
                    v93 = 0;
                    if ( v36
                      || (v84 = WdLogNewEntry5_WdAssertion(v31),
                          *(_QWORD *)(v84 + 24) = 8834LL,
                          WdLogEvent5_WdAssertion(v84),
                          (v36 = *(_QWORD *)(v20 + 2520)) != 0) )
                    {
                      if ( (unsigned int)v5 >= *(_DWORD *)(v36 + 80) )
                      {
                        v85 = WdLogNewEntry5_WdAssertion(v31);
                        *(_QWORD *)(v85 + 24) = 5587LL;
                        WdLogEvent5_WdAssertion(v85);
                      }
                      v39 = 3760 * v5;
                      if ( *(_BYTE *)(*(_QWORD *)(v36 + 112) + v39 + 720) )
                      {
                        if ( !*(_QWORD *)(v20 + 2528) )
                        {
                          ADAPTER_DISPLAY::SetSyncRefreshCountWaitTarget(
                            *(ADAPTER_DISPLAY **)(v20 + 2520),
                            a3,
                            a4,
                            *((_DWORD *)v34 + 638),
                            &v94);
                          ADAPTER_DISPLAY::ControlVSyncAdapter(*(ADAPTER_DISPLAY **)(v20 + 2520), a3);
LABEL_64:
                          if ( v103 != v106 )
                            COREACCESS::Release(v105);
                          if ( v104 )
                          {
                            v48 = 0;
                          }
                          else
                          {
                            v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v45);
                            v48 = 0;
                            v90[5] = v102;
                            v90[3] = 275LL;
                            v90[4] = 4LL;
                            v90[6] = 0LL;
                            v90[7] = 0LL;
                            WdLogEvent5_WdCriticalError(v90);
                          }
                          v104 = 0;
                          if ( KeGetCurrentThread() != *((struct _KTHREAD **)v103 + 20) )
                            DXGADAPTER::ReleaseCoreResource(v103);
                          if ( v37 && v94 )
                            DXGADAPTER::DecrementVSyncWaiter(v97);
                          if ( v95 )
                          {
                            v48 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v101);
                            if ( v48 >= 0 )
                              v48 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v96 + 520LL)
                                                                                           + 8LL)
                                                                               + 552LL))(
                                      *(_QWORD *)(*(_QWORD *)v96 + 528LL),
                                      1LL);
                          }
                          else if ( v38 )
                          {
                            v48 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v101);
                            if ( v48 >= 0 && *((_DWORD *)v98 + 116) == 1 )
                              v48 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v96 + 520LL)
                                                                                                  + 8LL)
                                                                                      + 560LL))(
                                      *((_QWORD *)v98 + 82),
                                      0LL,
                                      0LL);
                          }
                          goto LABEL_75;
                        }
                        if ( (DXGADAPTER *)v20 != v34 )
                        {
                          v86 = WdLogNewEntry5_WdAssertion(v31);
                          *(_QWORD *)(v86 + 24) = 5871LL;
                          WdLogEvent5_WdAssertion(v86);
                        }
                        _InterlockedIncrement((volatile signed __int32 *)v34 + 638);
                        v37 = 1;
                        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v96 + 520LL)
                                                                                           + 8LL)
                                                                               + 544LL))(
                               *(_QWORD *)(*(_QWORD *)v96 + 528LL),
                               a3) )
                        {
LABEL_54:
                          v41 = *(ADAPTER_DISPLAY **)(v20 + 2520);
                          v100 = *((_DWORD *)v34 + 638);
                          v42 = v39 + *((_QWORD *)v41 + 14);
                          v43 = PsGetCurrentProcess();
                          v44 = PsGetProcessDxgProcess(v43);
                          v47 = v44;
                          if ( v44 )
                          {
                            if ( (*(_BYTE *)(v44 + 323) & 4) != 0 )
                            {
                              v88 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
                              v89 = v88;
                              if ( v88 )
                              {
                                ObfDereferenceObject(v88);
                                v47 = *v89;
                              }
                            }
                          }
                          v35 = *(_QWORD *)(v42 + 936) == 0LL;
                          v94 = 1;
                          if ( !v35 && *(_BYTE *)(v47 + 322) )
                          {
                            if ( *((_QWORD *)v41 + 33) )
                            {
                              *(_DWORD *)(v42 + 944) = a4;
                              BLTQUEUE::SetDWMTargetVsync(
                                (BLTQUEUE *)(*(_QWORD *)(*((_QWORD *)v41 + 33) + 8LL) + 2704LL * a3),
                                a4);
                            }
                            else
                            {
                              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                                McTemplateK0qqqq(
                                  v100,
                                  &EventDWMVsyncCountWait,
                                  v46,
                                  a4,
                                  *(_DWORD *)(v42 + 948),
                                  *(_BYTE *)(v42 + 952),
                                  v100);
                              ADAPTER_DISPLAY::SetSyncRefreshCountWaitTargetNonPaged(v41, a3, a4, &v94);
                            }
                          }
                          v38 = v93;
                          goto LABEL_64;
                        }
                        LOBYTE(v40) = 1;
                        v87 = *(_QWORD *)v96;
                        if ( !v98 )
                        {
                          if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v87 + 520) + 8LL)
                                                                               + 552LL))(
                                 *(_QWORD *)(v87 + 528),
                                 1LL,
                                 v40) < 0 )
                          {
                            DXGADAPTER::DecrementVSyncWaiter(v97);
                            v48 = -1071775738;
                            goto LABEL_75;
                          }
                          v95 = 1;
                          goto LABEL_54;
                        }
                        if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v87 + 520) + 8LL)
                                                                            + 560LL))(
                               *((_QWORD *)v98 + 82),
                               0LL,
                               v40) >= 0 )
                        {
                          v93 = 1;
                          goto LABEL_54;
                        }
                        DXGADAPTER::DecrementVSyncWaiter(v97);
                      }
                    }
                    v48 = -1071775738;
LABEL_75:
                    if ( v106 )
                    {
                      if ( v107 )
                        COREACCESS::Release(v105);
                      v49 = (DXGGLOBAL **)v106;
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v106 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(v49[2], (struct DXGADAPTER *)v49);
                    }
                    if ( v103 )
                    {
                      if ( v104 )
                        COREACCESS::Release(v102);
                      v50 = (DXGGLOBAL **)v103;
                      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                        DXGGLOBAL::DestroyAdapter(v50[2], (struct DXGADAPTER *)v50);
                    }
                    goto LABEL_85;
                  }
                  v114 = v97;
                  v115 = 0;
                  DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
                  v111 = v20;
                  v112 = 0;
                  if ( (DXGADAPTER *)v20 != v97 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v110);
                  if ( *((_DWORD *)v97 + 44) == 1 && *(_DWORD *)(v20 + 176) == 1 )
                  {
                    if ( (unsigned int)v5 < *(_DWORD *)(*(_QWORD *)(v20 + 2520) + 80LL) )
                    {
                      if ( DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v20, v5) )
                      {
                        if ( v112 )
                          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v110);
                        if ( v115 )
                          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
                        goto LABEL_34;
                      }
                      v48 = -1071775738;
                    }
                    else
                    {
                      v80 = WdLogNewEntry5_WdWarning(v78, v77, v79);
                      v48 = -1073741811;
                      *(_QWORD *)(v80 + 24) = v5;
                      *(_QWORD *)(v80 + 32) = -1073741811LL;
                      WdLogEvent5_WdWarning(v80);
                    }
                  }
                  else
                  {
                    v48 = -1073741130;
                  }
                  if ( v112 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v110);
                  if ( v115 )
                    DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v113);
                  goto LABEL_75;
                }
                v91 = WdLogNewEntry5_WdError(v25);
                *(_QWORD *)(v91 + 24) = v20;
                *(_QWORD *)(v91 + 32) = -1073741637LL;
                WdLogEvent5_WdError(v91);
                DXGADAPTER::ReleaseReference((DXGADAPTER *)v20);
                if ( v109 )
                  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v108);
              }
              v48 = -1073741637;
              goto LABEL_184;
            }
            v65 = WdLogNewEntry5_WdWarning(v22, v21, v23);
            v48 = -1073741811;
            *(_QWORD *)(v65 + 24) = v7;
            *(_QWORD *)(v65 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v65);
            return (unsigned int)v48;
          }
          v64 = WdLogNewEntry5_WdError(((unsigned int)v7 >> 25) & 0x60);
          *(_QWORD *)(v64 + 24) = 316LL;
          WdLogEvent5_WdError(v64);
        }
      }
      v20 = 0LL;
      goto LABEL_17;
    }
    v59 = *(_QWORD *)(v13 + 456);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v59 + 208));
    if ( v16 < *(_DWORD *)(v59 + 248) )
    {
      v60 = *(_QWORD *)(v59 + 232);
      v61 = *(_DWORD *)(v60 + 16LL * v16 + 8);
      if ( (((unsigned int)v7 >> 25) & 0x60) == (*(_BYTE *)(v60 + 16LL * v16 + 8) & 0x60)
        && (v61 & 0x2000) == 0
        && (v61 & 0x1F) != 0 )
      {
        v62 = (__int64 *)(v60 + 16LL * v16);
        if ( (v61 & 0x1F) == 1 )
        {
          v20 = *v62;
          goto LABEL_108;
        }
        v63 = WdLogNewEntry5_WdError(((unsigned int)v7 >> 25) & 0x60);
        *(_QWORD *)(v63 + 24) = 316LL;
        WdLogEvent5_WdError(v63);
      }
    }
    v20 = 0LL;
LABEL_108:
    ExReleasePushLockSharedEx(v59 + 208, 0LL);
    KeLeaveCriticalRegion();
    SessionDataForSpecifiedSession = 0LL;
    goto LABEL_17;
  }
  Global = DXGGLOBAL::GetGlobal(v11);
  return REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)Global + 656));
}
