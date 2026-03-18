/*
 * XREFs of ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C0126C60
 * Callers:
 *     DxgkWaitForVerticalBlankEvent @ 0x1C0126B60 (DxgkWaitForVerticalBlankEvent.c)
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1C01D7860 (DxgkWaitForVerticalBlankEvent2.c)
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
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0014024 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C0020BA4 (McTemplateK0q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EF4FC (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C0126AEC (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C01C1038 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C01C5638 (-WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C020E7D4 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C022EBA8 (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEventInternal(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct _KEVENT **a5)
{
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r13
  __int64 v6; // r12
  unsigned int v7; // ebx
  unsigned int v8; // r15d
  __int64 v9; // r14
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  const GUID *v18; // r8
  unsigned int v19; // ebx
  __int64 v20; // r9
  int v21; // edx
  __int64 *v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  volatile signed __int64 *v31; // rsi
  volatile signed __int64 *v32; // r14
  signed __int64 v33; // rcx
  DXGADAPTER *v34; // rcx
  __int64 v35; // rcx
  const GUID *v36; // r8
  DXGADAPTER *v37; // r15
  int v38; // esi
  __int64 v39; // r14
  char v40; // r13
  __int64 v41; // r12
  char *v42; // r14
  __int64 v43; // rcx
  __int64 v44; // r8
  char v45; // r15
  ADAPTER_DISPLAY *v46; // rcx
  __int64 v47; // rax
  union _LARGE_INTEGER v48; // rax
  __int64 v49; // rcx
  DXGGLOBAL **v50; // rcx
  DXGGLOBAL **v51; // rcx
  int v53; // r9d
  __int64 *ThreadProperty; // rax
  __int64 *v55; // rbx
  __int64 v56; // rax
  __int64 v57; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v59; // rax
  __int64 v60; // r15
  __int64 v61; // r9
  int v62; // edx
  __int64 *v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rax
  DXGSESSIONMGR *v71; // rsi
  unsigned int CurrentProcessSessionId; // eax
  REMOTE_VSYNC *v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rax
  unsigned int v90; // eax
  _QWORD *v91; // rax
  int v92; // eax
  __int64 v93; // rax
  _QWORD *v94; // rax
  char v95; // [rsp+30h] [rbp-B1h]
  unsigned int v96; // [rsp+34h] [rbp-ADh]
  char *v97; // [rsp+38h] [rbp-A9h]
  DXGADAPTER *v98; // [rsp+40h] [rbp-A1h]
  struct DXGDEVICE *v99; // [rsp+48h] [rbp-99h] BYREF
  struct DXGDEVICE *v100; // [rsp+50h] [rbp-91h] BYREF
  char v101[8]; // [rsp+60h] [rbp-81h] BYREF
  struct _KTHREAD **v102[2]; // [rsp+68h] [rbp-79h] BYREF
  DXGADAPTER *v103; // [rsp+78h] [rbp-69h]
  char v104; // [rsp+80h] [rbp-61h]
  struct _KTHREAD **v105[2]; // [rsp+88h] [rbp-59h] BYREF
  struct DXGADAPTER *v106; // [rsp+98h] [rbp-49h]
  char v107; // [rsp+A0h] [rbp-41h]
  union _LARGE_INTEGER Timeout; // [rsp+B0h] [rbp-31h] BYREF
  char v109[8]; // [rsp+B8h] [rbp-29h] BYREF
  char v110; // [rsp+C0h] [rbp-21h]
  char v111[8]; // [rsp+C8h] [rbp-19h] BYREF
  __int64 v112; // [rsp+D0h] [rbp-11h]
  char v113; // [rsp+D8h] [rbp-9h]
  char v114[8]; // [rsp+E0h] [rbp-1h] BYREF
  DXGADAPTER *v115; // [rsp+E8h] [rbp+7h]
  char v116; // [rsp+F0h] [rbp+Fh]

  SessionDataForSpecifiedSession = 0LL;
  v6 = a2;
  v99 = 0LL;
  v7 = a4;
  v8 = a3;
  v9 = a1;
  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v15 = ProcessDxgProcess;
  if ( ProcessDxgProcess && (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
  {
    ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
    v55 = ThreadProperty;
    if ( ThreadProperty )
    {
      ObfDereferenceObject(ThreadProperty);
      v15 = *v55;
    }
    v7 = a4;
  }
  if ( !v15 )
  {
    v56 = WdLogNewEntry5_WdError(v13);
    v38 = -1073741811;
    *(_QWORD *)(v56 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v56);
    return (unsigned int)v38;
  }
  if ( !v7 || *(_BYTE *)(v15 + 322) || g_OSTestSigningEnabled && *(char *)(v15 + 323) < 0 )
  {
    KeEnterCriticalRegion();
    if ( !(_DWORD)v9
      && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(v15 + 104) + 224LL))(0LL, 0LL, 0LL) )
    {
      Global = DXGGLOBAL::GetGlobal(v16);
      v38 = REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)Global + 656));
LABEL_89:
      KeLeaveCriticalRegion();
      return (unsigned int)v38;
    }
    if ( v15 != -208 && *(struct _KTHREAD **)(v15 + 216) == KeGetCurrentThread() )
    {
      v59 = WdLogNewEntry5_WdAssertion(v16);
      *(_QWORD *)(v59 + 24) = 1309LL;
      WdLogEvent5_WdAssertion(v59);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v53 = *(_DWORD *)(v15 + 224);
        if ( v53 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v17, &EventBlockThread, v18, v53);
      }
      ExAcquirePushLockSharedEx(v15 + 208, 0LL);
    }
    v19 = ((unsigned int)v9 >> 6) & 0xFFFFFF;
    if ( (*(_BYTE *)(v15 + 323) & 8) == 0 )
    {
      if ( v19 < *(_DWORD *)(v15 + 248) )
      {
        v20 = *(_QWORD *)(v15 + 232);
        v21 = *(_DWORD *)(v20 + 16LL * v19 + 8);
        if ( (((unsigned int)v9 >> 25) & 0x60) == (*(_BYTE *)(v20 + 16LL * v19 + 8) & 0x60)
          && (v21 & 0x2000) == 0
          && (v21 & 0x1F) != 0 )
        {
          v22 = (__int64 *)(v20 + 16LL * v19);
          if ( (v21 & 0x1F) == 1 )
          {
            v23 = *v22;
            goto LABEL_17;
          }
          v65 = WdLogNewEntry5_WdError(((unsigned int)v9 >> 25) & 0x60);
          *(_QWORD *)(v65 + 24) = 316LL;
          WdLogEvent5_WdError(v65);
        }
      }
      v23 = 0LL;
LABEL_17:
      if ( v23 )
        _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
      ExReleasePushLockSharedEx(v15 + 208, 0LL);
      KeLeaveCriticalRegion();
      if ( !v23 )
      {
        v66 = WdLogNewEntry5_WdWarning(v25, v24, v26);
        v38 = -1073741811;
        *(_QWORD *)(v66 + 24) = v9;
        *(_QWORD *)(v66 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v66);
        goto LABEL_89;
      }
      if ( (_DWORD)v6 )
      {
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v100, v6, (struct _KTHREAD **)v15, &v99);
        if ( !v99 )
        {
          v70 = WdLogNewEntry5_WdWarning(v68, v67, v69);
          *(_QWORD *)(v70 + 24) = v23;
          *(_QWORD *)(v70 + 32) = v6;
          WdLogEvent5_WdWarning(v70);
          if ( v100 && _InterlockedExchangeAdd64((volatile signed __int64 *)v100 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v100 + 2), v100);
          v38 = -1073741811;
          goto LABEL_87;
        }
        _InterlockedIncrement64((volatile signed __int64 *)v99 + 8);
        if ( v100 && _InterlockedExchangeAdd64((volatile signed __int64 *)v100 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v100 + 2), v100);
      }
      if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(v15 + 104) + 224LL))(0LL, 0LL, 0LL) )
      {
        if ( !*(_BYTE *)(v23 + 185) )
          goto LABEL_132;
        v71 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v28) + 77);
        if ( v71 )
        {
          CurrentProcessSessionId = PsGetCurrentProcessSessionId(v28);
          SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                             v71,
                                             CurrentProcessSessionId);
        }
        if ( *((_DWORD *)SessionDataForSpecifiedSession + 4690) )
          v73 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v28) + 720);
        else
LABEL_132:
          v73 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v28) + 656);
        v38 = REMOTE_VSYNC::WaitForVSync(v73);
        goto LABEL_86;
      }
      v30 = *(_QWORD *)(v23 + 2520);
      if ( v30 )
      {
        if ( v8 >= *(_DWORD *)(v30 + 80) )
        {
          v74 = WdLogNewEntry5_WdError(v28);
          v38 = -1073741811;
          *(_QWORD *)(v74 + 24) = v8;
          *(_QWORD *)(v74 + 32) = -1073741811LL;
          WdLogEvent5_WdError(v74);
LABEL_191:
          v94 = (_QWORD *)WdLogNewEntry5_WdError(v28);
          v94[4] = v8;
          v94[5] = v38;
          v94[3] = v23;
          WdLogEvent5_WdError(v94);
          goto LABEL_86;
        }
        _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
        if ( *(_QWORD *)(v23 + 2528) )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
          v31 = (volatile signed __int64 *)v23;
          v98 = (DXGADAPTER *)v23;
          v32 = (volatile signed __int64 *)v23;
          goto LABEL_26;
        }
        DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v109);
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v109);
        v31 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v75) + 80);
        v32 = v31;
        if ( v31 )
        {
          _InterlockedIncrement64(v31 + 3);
          v98 = (DXGADAPTER *)v31;
          if ( v110 )
            DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v109);
LABEL_26:
          if ( !v32 )
          {
            v76 = WdLogNewEntry5_WdAssertion(v28);
            *(_QWORD *)(v76 + 24) = 6105LL;
            WdLogEvent5_WdAssertion(v76);
          }
          if ( v99
            && (v31 != *(volatile signed __int64 **)(*((_QWORD *)v99 + 2) + 16LL) || v23 != *((_QWORD *)v99 + 216)) )
          {
            v77 = WdLogNewEntry5_WdWarning(v99, v27, v29);
            *(_QWORD *)(v77 + 24) = v23;
            *(_QWORD *)(v77 + 32) = v6;
            WdLogEvent5_WdWarning(v77);
            v38 = -1073741811;
LABEL_86:
            if ( v99 && _InterlockedExchangeAdd64((volatile signed __int64 *)v99 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v99 + 2), v99);
LABEL_87:
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
              DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v23 + 16), (struct DXGADAPTER *)v23);
            goto LABEL_89;
          }
          v103 = (DXGADAPTER *)v31;
          v104 = 0;
          _InterlockedIncrement64(v31 + 3);
          v102[1] = (struct _KTHREAD **)-1LL;
          v106 = (struct DXGADAPTER *)v23;
          v107 = 0;
          _InterlockedIncrement64((volatile signed __int64 *)(v23 + 24));
          v105[1] = (struct _KTHREAD **)-1LL;
          v33 = _InterlockedExchangeAdd64((volatile signed __int64 *)v98 + 3, 0xFFFFFFFFFFFFFFFFuLL);
          if ( v33 == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v98 + 2), v98);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v23 + 16), (struct DXGADAPTER *)v23);
          if ( *(_DWORD *)(v23 + 136) != 1 )
          {
LABEL_34:
            if ( v104 )
            {
              v82 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v33);
              v82[5] = v102;
              v82[3] = 275LL;
              v82[4] = 4LL;
              v82[6] = 0LL;
              v82[7] = 0LL;
              WdLogEvent5_WdCriticalError(v82);
            }
            v34 = v103;
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v103 + 20) )
            {
              if ( !KeReadStateEvent((PRKEVENT)v103 + 2) )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v35, &EventBlockThread, v36, 72);
                KeWaitForSingleObject((char *)v103 + 48, Executive, 0, 0, 0LL);
              }
              DXGADAPTER::AcquireCoreResourceShared(v103);
              v34 = v103;
            }
            v104 = 1;
            if ( *((_DWORD *)v34 + 44) != 1 )
              goto LABEL_164;
            if ( v103 != v106 )
            {
              COREACCESS::AcquireShared((DXGADAPTER **)v105);
              v34 = (DXGADAPTER *)*((unsigned int *)v106 + 44);
              if ( (_DWORD)v34 != 1 )
              {
                COREACCESS::Release(v105);
LABEL_164:
                COREACCESS::Release(v102);
LABEL_165:
                v38 = -1073741130;
                goto LABEL_76;
              }
            }
            v37 = v98;
            v38 = 0;
            v97 = (char *)v98 + 2528;
            if ( !*((_QWORD *)v98 + 316) )
            {
              v83 = WdLogNewEntry5_WdAssertion(v34);
              *(_QWORD *)(v83 + 24) = 6164LL;
              WdLogEvent5_WdAssertion(v83);
            }
            if ( !*(_QWORD *)(v23 + 2520) )
            {
              v84 = WdLogNewEntry5_WdAssertion(v34);
              *(_QWORD *)(v84 + 24) = 6165LL;
              WdLogEvent5_WdAssertion(v84);
            }
            if ( (_DWORD)v6 )
            {
              v34 = (DXGADAPTER *)*((unsigned int *)v99 + 116);
              if ( (_DWORD)v34 != 1 )
                goto LABEL_165;
              v37 = v98;
            }
            v39 = *(_QWORD *)(v23 + 2520);
            v40 = 0;
            v95 = 0;
            v96 = 0;
            if ( v39
              || (v85 = WdLogNewEntry5_WdAssertion(v34),
                  *(_QWORD *)(v85 + 24) = 8834LL,
                  WdLogEvent5_WdAssertion(v85),
                  (v39 = *(_QWORD *)(v23 + 2520)) != 0) )
            {
              if ( a3 >= *(_DWORD *)(v39 + 80) )
              {
                v86 = WdLogNewEntry5_WdAssertion(v34);
                *(_QWORD *)(v86 + 24) = 5587LL;
                WdLogEvent5_WdAssertion(v86);
              }
              v41 = 3760LL * a3;
              if ( *(_BYTE *)(*(_QWORD *)(v39 + 112) + v41 + 720) )
              {
                if ( !*(_QWORD *)(v23 + 2528) )
                {
                  ADAPTER_DISPLAY::ControlVSyncAdapter(*(ADAPTER_DISPLAY **)(v23 + 2520), a3);
                  v42 = (char *)v98 + 2528;
LABEL_54:
                  v45 = 0;
                  goto LABEL_55;
                }
                if ( (DXGADAPTER *)v23 != v37 )
                {
                  v87 = WdLogNewEntry5_WdAssertion(v34);
                  *(_QWORD *)(v87 + 24) = 6187LL;
                  WdLogEvent5_WdAssertion(v87);
                }
                _InterlockedIncrement((volatile signed __int32 *)v37 + 638);
                v42 = (char *)v98 + 2528;
                v40 = 1;
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v97 + 520LL)
                                                                                   + 8LL)
                                                                       + 544LL))(
                       *(_QWORD *)(*(_QWORD *)v97 + 528LL),
                       a3) )
                {
                  goto LABEL_54;
                }
                LOBYTE(v44) = 1;
                v88 = *(_QWORD *)v97;
                if ( !v99 )
                {
                  if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v88 + 520) + 8LL)
                                                                       + 552LL))(
                         *(_QWORD *)(v88 + 528),
                         1LL,
                         v44) < 0 )
                  {
                    DXGADAPTER::DecrementVSyncWaiter(v98);
                    v38 = -1071775738;
                    goto LABEL_76;
                  }
                  v95 = 1;
                  goto LABEL_54;
                }
                if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v88 + 520) + 8LL) + 560LL))(
                       *((_QWORD *)v99 + 82),
                       0LL,
                       v44) >= 0 )
                {
                  v45 = 1;
LABEL_55:
                  if ( v103 != v106 )
                    COREACCESS::Release(v105);
                  if ( !v104 )
                  {
                    v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v43);
                    v89[5] = v102;
                    v89[3] = 275LL;
                    v89[4] = 4LL;
                    v89[6] = 0LL;
                    v89[7] = 0LL;
                    WdLogEvent5_WdCriticalError(v89);
                  }
                  v104 = 0;
                  if ( KeGetCurrentThread() != *((struct _KTHREAD **)v103 + 20) )
                    DXGADAPTER::ReleaseCoreResource(v103);
                  v46 = *(ADAPTER_DISPLAY **)(v23 + 2520);
                  if ( a4 )
                  {
                    v90 = ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(v46, a3, 1, a4, a5);
                    v38 = v90;
                    if ( v90 <= 0x3E )
                    {
                      v49 = v90;
                      v96 = v90;
LABEL_67:
                      if ( v40 )
                      {
                        if ( _InterlockedDecrement((volatile signed __int32 *)v98 + 638) < 0 )
                        {
                          v91 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v49);
                          v91[5] = v98;
                          v91[3] = 275LL;
                          v91[4] = 37LL;
                          v91[6] = *((unsigned int *)v98 + 638);
                          v91[7] = 0LL;
                          WdLogEvent5_WdCriticalError(v91);
                          LODWORD(v49) = v96;
                        }
                        v42 = (char *)v98 + 2528;
                      }
                      if ( v95 )
                      {
                        v38 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v101);
                        if ( v38 < 0 )
                          goto LABEL_76;
                        v92 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 520LL)
                                                                                             + 8LL)
                                                                                 + 552LL))(
                                *(_QWORD *)(*(_QWORD *)v42 + 528LL),
                                1LL,
                                0LL);
                      }
                      else
                      {
                        if ( !v45 )
                        {
LABEL_73:
                          if ( v38 >= 0 && (_DWORD)v49 )
                            v38 = v49;
                          goto LABEL_76;
                        }
                        v38 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v101);
                        if ( v38 < 0 )
                          goto LABEL_76;
                        if ( *((_DWORD *)v99 + 116) != 1 )
                        {
LABEL_187:
                          LODWORD(v49) = v96;
                          goto LABEL_73;
                        }
                        v92 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v42 + 520LL)
                                                                                            + 8LL)
                                                                                + 560LL))(
                                *((_QWORD *)v99 + 82),
                                0LL,
                                0LL);
                      }
                      v38 = v92;
                      goto LABEL_187;
                    }
                  }
                  else
                  {
                    v47 = *((_QWORD *)v46 + 2);
                    if ( *(_QWORD *)(v47 + 2520) && *(_QWORD *)(v47 + 568) )
                      v48.QuadPart = -1000000LL;
                    else
                      v48.QuadPart = -5000000LL;
                    Timeout = v48;
                    KeWaitForSingleObject((PVOID)(*((_QWORD *)v46 + 14) + v41 + 912), UserRequest, 0, 0, &Timeout);
                  }
                  v49 = 0LL;
                  goto LABEL_67;
                }
                DXGADAPTER::DecrementVSyncWaiter(v98);
              }
            }
            v38 = -1071775738;
LABEL_76:
            if ( v106 )
            {
              if ( v107 )
                COREACCESS::Release(v105);
              v50 = (DXGGLOBAL **)v106;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v106 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(v50[2], (struct DXGADAPTER *)v50);
            }
            if ( v103 )
            {
              if ( v104 )
                COREACCESS::Release(v102);
              v51 = (DXGGLOBAL **)v103;
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v103 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(v51[2], (struct DXGADAPTER *)v51);
            }
            goto LABEL_86;
          }
          v115 = v98;
          v116 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v114);
          v112 = v23;
          v113 = 0;
          if ( (DXGADAPTER *)v23 != v98 )
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
          if ( *((_DWORD *)v98 + 44) == 1 && *(_DWORD *)(v23 + 176) == 1 )
          {
            if ( v8 < *(_DWORD *)(*(_QWORD *)(v23 + 2520) + 80LL) )
            {
              if ( DXGADAPTER::IsVSyncAvailable((DXGADAPTER *)v23, v8) )
              {
                if ( v113 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
                if ( v116 )
                  DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v114);
                goto LABEL_34;
              }
              v38 = -1071775738;
            }
            else
            {
              v81 = WdLogNewEntry5_WdWarning(v79, v78, v80);
              v38 = -1073741811;
              *(_QWORD *)(v81 + 24) = v8;
              *(_QWORD *)(v81 + 32) = -1073741811LL;
              WdLogEvent5_WdWarning(v81);
            }
          }
          else
          {
            v38 = -1073741130;
          }
          if ( v113 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v111);
          if ( v116 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v114);
          goto LABEL_76;
        }
        v93 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v93 + 24) = v23;
        *(_QWORD *)(v93 + 32) = -1073741637LL;
        WdLogEvent5_WdError(v93);
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v23);
        if ( v110 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v109);
      }
      v38 = -1073741637;
      goto LABEL_191;
    }
    v60 = *(_QWORD *)(v15 + 456);
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v60 + 208));
    if ( v19 < *(_DWORD *)(v60 + 248) )
    {
      v61 = *(_QWORD *)(v60 + 232);
      v62 = *(_DWORD *)(v61 + 16LL * v19 + 8);
      if ( (((unsigned int)v9 >> 25) & 0x60) == (*(_BYTE *)(v61 + 16LL * v19 + 8) & 0x60)
        && (v62 & 0x2000) == 0
        && (v62 & 0x1F) != 0 )
      {
        v63 = (__int64 *)(v61 + 16LL * v19);
        if ( (v62 & 0x1F) == 1 )
        {
          v23 = *v63;
          goto LABEL_114;
        }
        v64 = WdLogNewEntry5_WdError(((unsigned int)v9 >> 25) & 0x60);
        *(_QWORD *)(v64 + 24) = 316LL;
        WdLogEvent5_WdError(v64);
      }
    }
    v23 = 0LL;
LABEL_114:
    ExReleasePushLockSharedEx(v60 + 208, 0LL);
    KeLeaveCriticalRegion();
    v8 = a3;
    goto LABEL_17;
  }
  v57 = WdLogNewEntry5_WdWarning(v13, v12, v14);
  *(_QWORD *)(v57 + 24) = -1073741790LL;
  WdLogEvent5_WdWarning(v57);
  return 3221225506LL;
}
