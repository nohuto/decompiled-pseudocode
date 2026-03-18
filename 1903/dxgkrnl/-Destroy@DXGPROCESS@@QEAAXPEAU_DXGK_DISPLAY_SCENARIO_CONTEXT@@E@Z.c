/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F3250
 * Callers:
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C00F5684 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F5920 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C020F510 (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 * Callees:
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00046DC (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006DA8 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0006E04 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F08 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0006F3C (-AcquireShared@COREACCESS@@QEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C000721C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000735C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C00074E4 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0008690 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000874C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008834 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C000A8BC (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C000BC9C (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C000BDDC (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C000BFE0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000C448 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000C580 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000C9C4 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000CB44 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z @ 0x1C001B510 (-Assign@DispBrokerClientReference@@QEAAXPEAVDispBrokerClientHandle@@@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C0036000 (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0036DC8 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0036E4C (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C004307C (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     VidSchTerminateProcessX @ 0x1C00F310C (VidSchTerminateProcessX.c)
 *     VidMmTerminateProcessX @ 0x1C00F31AC (VidMmTerminateProcessX.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00F37C8 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00F39C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00F3C78 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00F51B0 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00F5920 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C00F5B28 (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C00FC4C0 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00FD72C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01008A0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C0121F80 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01220C4 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C01305C0 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C013D52C (-ProcessPendingProcessTerminate@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01476F4 (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C0147ED8 (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     OutputDuplProcessTerminate @ 0x1C0149330 (OutputDuplProcessTerminate.c)
 *     DxgkDestroyCsrssProcess @ 0x1C014C1CC (DxgkDestroyCsrssProcess.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C0153068 (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C01F0D1C (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C02197CC (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C022769C (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C024FC34 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C025D840 (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C025EA68 (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C025EC50 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C025F1F4 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C02612A8 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C0268FC4 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C026A5F4 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C02920FC (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

void __fastcall DXGPROCESS::Destroy(DXGPROCESS *this, struct _ERESOURCE *a2, char a3)
{
  char v3; // r12
  __int64 v6; // r9
  _QWORD *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  DXGSESSIONMGR *v19; // rbx
  __int64 v20; // r8
  unsigned int v21; // eax
  struct DXGSESSIONDATA *v22; // rax
  OUTPUTDUPL_SESSION_MGR *v23; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v25; // rdx
  DXGADAPTER *v26; // rcx
  DXGADAPTER *v27; // rcx
  _QWORD *v28; // rbx
  __int64 v29; // rcx
  unsigned int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned int v36; // esi
  _QWORD *v37; // r14
  unsigned int v38; // esi
  _QWORD *v39; // r14
  unsigned int v40; // eax
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // r13
  char v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  DXGSYNCOBJECT *EntryObject; // rbx
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // r15d
  DXGGLOBAL *v53; // rax
  __int64 v54; // rcx
  DXGSESSIONMGR *v55; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rsi
  __int64 v61; // rcx
  __int64 v62; // rdx
  _QWORD *v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // r14
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // rax
  DXGVIRTUALMACHINE *v71; // rcx
  __int64 v72; // rax
  void *v73; // rbx
  unsigned int v74; // eax
  unsigned int v75; // ebx
  DXGKEYEDMUTEX *v76; // rcx
  int v77; // r8d
  __int64 v78; // rax
  PERESOURCE *Global; // rax
  __int64 v80; // rdx
  __int64 v81; // rax
  __int64 v82; // rax
  unsigned int v83; // ebx
  void *v84; // rax
  unsigned int v85; // r15d
  __int64 v86; // rdx
  __int64 v87; // rcx
  struct DXGPROCESS *v88; // rbx
  __int64 v89; // rax
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rcx
  DXGSESSIONMGR *v93; // rbx
  unsigned int v94; // eax
  struct DXGSESSIONDATA *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  DXGSESSIONMGR *v99; // rbx
  unsigned int v100; // eax
  DXGSESSIONDATA *v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rax
  struct DXGGLOBAL *v104; // rax
  int v105; // eax
  __int64 v106; // rdx
  __int64 v107; // rcx
  __int64 v108; // r8
  __int64 v109; // rbx
  __int64 v110; // rax
  struct DXGGLOBAL *v111; // rax
  DXG_VMBUS_CHANNEL_BASE *v112; // rcx
  struct _MDL *v113; // [rsp+28h] [rbp-D8h]
  __int64 v115; // [rsp+38h] [rbp-C8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp-C0h] BYREF
  PERESOURCE Resource; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v118[16]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v119[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v120; // [rsp+68h] [rbp-98h]
  char v121; // [rsp+70h] [rbp-90h]
  __int64 v122; // [rsp+78h] [rbp-88h] BYREF
  int v123; // [rsp+80h] [rbp-80h]
  int v124; // [rsp+84h] [rbp-7Ch]
  int v125; // [rsp+88h] [rbp-78h]
  _BYTE v126[8]; // [rsp+90h] [rbp-70h] BYREF
  DXGPUSHLOCK *v127; // [rsp+98h] [rbp-68h]
  int v128; // [rsp+A0h] [rbp-60h]
  _BYTE v129[16]; // [rsp+B8h] [rbp-48h] BYREF
  DXGADAPTER *v130; // [rsp+C8h] [rbp-38h]
  char v131; // [rsp+D0h] [rbp-30h]
  int v132; // [rsp+D4h] [rbp-2Ch]
  __int64 v133; // [rsp+D8h] [rbp-28h]
  _BYTE v134[16]; // [rsp+F8h] [rbp-8h] BYREF
  DXGADAPTER *v135; // [rsp+108h] [rbp+8h]
  char v136; // [rsp+110h] [rbp+10h]
  int v137; // [rsp+114h] [rbp+14h]
  __int64 v138; // [rsp+118h] [rbp+18h]
  _BYTE v139[64]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v140[8]; // [rsp+180h] [rbp+80h] BYREF
  _BYTE v141[64]; // [rsp+188h] [rbp+88h] BYREF
  _BYTE v142[88]; // [rsp+1C8h] [rbp+C8h] BYREF

  v3 = a3;
  if ( *((_BYTE *)this + 298) )
  {
    v55 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 74);
    if ( v55 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v54, a2);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v55, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( SessionDataForSpecifiedSession )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK(
        (DXGAUTOPUSHLOCK *)v126,
        (struct _KTHREAD **)SessionDataForSpecifiedSession + 2349,
        0);
      DXGPUSHLOCK::AcquireExclusive(v127);
      v128 = 2;
      DispBrokerClientReference::Assign((HANDLE **)SessionDataForSpecifiedSession + 2352, 0LL);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v126);
    }
  }
  while ( *((_DWORD *)this + 78) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( qword_1C00A2DB0 && qword_1C00A2DB0 == *((_QWORD *)this + 8) )
  {
    AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
    if ( FileObject && *((_DWORD *)FileObject + 9) )
      LPMDisplayCtrl::LPMStop(FileObject);
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  KeEnterCriticalRegion();
  if ( *((_BYTE *)this + 296) && (*((_BYTE *)this + 299) & 8) == 0 )
    DxgkDestroyCsrssProcess();
  v7 = (_QWORD *)((char *)this + 248);
  if ( (_QWORD *)*v7 != v7 )
  {
    if ( !v3 )
      DXGPROCESS::ReleaseVidPnSourceOwners(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
    while ( (_QWORD *)*v7 != v7 )
    {
      v41 = (*v7 - 24LL) & -(__int64)(*v7 != 0LL);
      v42 = *(_QWORD *)(v41 + 0x10);
      v43 = *(_QWORD *)(v42 + 16);
      if ( *(_QWORD *)(v41 + 0x6C0) )
        OutputDuplProcessTerminate(0LL, *(_QWORD *)(v42 + 16));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v140, v41, 2, v6, 0);
      v44 = *(_QWORD *)(v43 + 2560);
      if ( *(_DWORD *)(v41 + 328) == 2 )
      {
        v45 = 1;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v44 + 40, 0LL);
        *(_QWORD *)(v44 + 48) = KeGetCurrentThread();
      }
      else
      {
        v45 = 0;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx(v44 + 24, 0LL);
        *(_QWORD *)(v44 + 32) = KeGetCurrentThread();
      }
      COREDEVICEACCESS::AcquireSharedUncheck((__int64)v140);
      if ( !*(_QWORD *)(v43 + 2560) )
      {
        v58 = WdLogNewEntry5_WdAssertion(v47, v46);
        *(_QWORD *)(v58 + 24) = 1650LL;
        WdLogEvent5_WdAssertion(v58);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 16) + 16LL) + 176LL) == 4 )
      {
        v59 = v41 + 24;
        v60 = -v41;
        v61 = v59 & -(__int64)(v60 != 0);
        v62 = *(_QWORD *)v61;
        if ( *(_QWORD *)(*(_QWORD *)v61 + 8LL) != v61
          || (v63 = *(_QWORD **)((v59 & -(__int64)(v60 != 0)) + 8), *v63 != v61) )
        {
          __fastfail(3u);
        }
        *v63 = v62;
        *(_QWORD *)(v62 + 8) = v63;
      }
      else
      {
        if ( !*(_BYTE *)(v43 + 185) && *(_DWORD *)(v41 + 464) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v140);
          v120 = v43;
          v121 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v119);
          if ( *(_DWORD *)(v43 + 176) == 1 )
            DXGDEVICE::FlushScheduler(v41, 4LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v119);
          COREDEVICEACCESS::AcquireSharedUncheck((__int64)v140);
          if ( v121 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v119);
        }
        ADAPTER_RENDER::DestroyDevice(*(ADAPTER_RENDER **)(v43 + 2560), (struct DXGDEVICE *)v41, 0LL);
      }
      v48 = v44 + 40;
      if ( !v45 )
        v48 = v44 + 24;
      *(_QWORD *)(v48 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v48, 0LL);
      KeLeaveCriticalRegion();
      COREACCESS::~COREACCESS((COREACCESS *)v142);
      COREACCESS::~COREACCESS((COREACCESS *)v141);
    }
    v3 = a3;
  }
  if ( !DXGPROCESS::GetCurrent() )
  {
    v64 = WdLogNewEntry5_WdWarning(v9, v8, v10);
    *(_QWORD *)(v64 + 24) = 3042LL;
    WdLogEvent5_WdWarning(v64);
    goto LABEL_16;
  }
  v130 = 0LL;
  v131 = 0;
  v132 = -1;
  v133 = 0LL;
  v135 = 0LL;
  v136 = 0;
  v137 = -1;
  v138 = 0LL;
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  if ( RemoteOutputDuplMgr )
  {
    OUTPUTDUPL_MGR::ProcessPendingProcessTerminate(RemoteOutputDuplMgr);
  }
  else
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v13, v12);
    v14[3] = 1LL;
    v14[4] = 0LL;
    v14[5] = 0LL;
  }
  v19 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v16, v15) + 74);
  if ( v19 )
  {
    v21 = PsGetCurrentProcessSessionId(v18, v17);
    v22 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v19, v21);
  }
  else
  {
    v22 = 0LL;
  }
  if ( !v22 )
  {
    v65 = WdLogNewEntry5_WdError(v18, v17, v20);
    *(_QWORD *)(v65 + 24) = 3089LL;
LABEL_99:
    WdLogEvent5_WdError(v65);
    goto LABEL_14;
  }
  v23 = (OUTPUTDUPL_SESSION_MGR *)*((_QWORD *)v22 + 1);
  if ( !v23 )
  {
    v65 = WdLogNewEntry5_WdError(v18, v17, v20);
    *(_QWORD *)(v65 + 24) = 3096LL;
    goto LABEL_99;
  }
  CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v18, v17);
  OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v23, CurrentProcess);
LABEL_14:
  v26 = v135;
  if ( v135 )
  {
    if ( v136 )
    {
      COREACCESS::Release((COREACCESS *)v134);
      v26 = v135;
    }
    DXGADAPTER::ReleaseReferenceNoTracking(v26);
  }
  v27 = v130;
  if ( v130 )
  {
    if ( v131 )
    {
      COREACCESS::Release((COREACCESS *)v129);
      v27 = v130;
    }
    DXGADAPTER::ReleaseReferenceNoTracking(v27);
  }
LABEL_16:
  v28 = (_QWORD *)((char *)this + 272);
  if ( (_QWORD *)*v28 != v28 )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)this + 36));
    while ( (_QWORD *)*v28 != v28 )
    {
      v66 = (*v28 - 24LL) & -(__int64)(*v28 != 0LL);
      v67 = *(_QWORD *)(*(_QWORD *)(v66 + 0x10) + 16LL);
      COREACCESS::COREACCESS((COREACCESS *)v139, (struct DXGADAPTER *const)v67);
      COREACCESS::AcquireShared((__int64)v139, 0xFFFFFFFF, 0LL);
      if ( !*(_QWORD *)(v67 + 2552) )
      {
        v70 = WdLogNewEntry5_WdAssertion(v69, v68);
        *(_QWORD *)(v70 + 24) = 1725LL;
        WdLogEvent5_WdAssertion(v70);
      }
      if ( *(_DWORD *)(v67 + 176) == 4 )
        DXGPROCESS::RemoveCopyProtection(this, v66);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(ADAPTER_DISPLAY **)(v67 + 2552),
          *(_DWORD *)(v66 + 52),
          *(_DWORD *)(v66 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v139);
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)this + 36));
  }
  if ( (*((_BYTE *)this + 299) & 4) != 0 )
  {
    v71 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 54);
    if ( v71 )
      DXGVIRTUALMACHINE::PauseVmBusChannels(v71);
  }
  v29 = *((unsigned int *)this + 57);
  v30 = *((_DWORD *)this + 56);
  if ( (_DWORD)v29 != v30 )
  {
    v36 = 0;
    if ( v30 )
    {
      v37 = (_QWORD *)((char *)this + 208);
      do
      {
        if ( v36 >= *((_DWORD *)this + 56) )
        {
          v72 = WdLogNewEntry5_WdAssertion(v29, v25);
          *(_QWORD *)(v72 + 24) = 217LL;
          WdLogEvent5_WdAssertion(v72);
        }
        v29 = 2LL * v36;
        if ( (*(_DWORD *)(*v37 + 16LL * v36 + 8) & 0x1F) == 8 )
        {
          EntryObject = (DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 208), v36);
          v52 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 208), v36);
          if ( (*((_BYTE *)this + 299) & 4) != 0 )
          {
            Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v51, v50);
            DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v118, Global);
            DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v118, v80);
            DXGSYNCOBJECT::SetVmSyncObject(EntryObject, 0LL);
            *((_DWORD *)EntryObject + 18) = 0;
            DXGPROCESS::FreeHandleSafe(this, v52);
            if ( v118[8] )
              DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v118);
          }
          else
          {
            v53 = DXGGLOBAL::GetGlobal(v51, v50);
            DXGGLOBAL::DestroySyncObject(v53, EntryObject, v52);
          }
        }
        else
        {
          v25 = (*(_DWORD *)(*v37 + 16LL * v36 + 8) & 0x1Fu) - 9;
          if ( (*(_DWORD *)(*v37 + 16LL * v36 + 8) & 0x1F) == 9 )
          {
            HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 208), v36);
            v75 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 208), v36);
            DXGKEYEDMUTEX::SignalAbandoned(v76, v75, v77);
            if ( !DXGKEYEDMUTEX::DestroyHandle(v75) )
            {
              v78 = WdLogNewEntry5_WdAssertion(v29, v25);
              *(_QWORD *)(v78 + 24) = 1797LL;
              WdLogEvent5_WdAssertion(v78);
            }
          }
          else if ( (*(_DWORD *)(*v37 + 16LL * v36 + 8) & 0x1F) == 0xE )
          {
            v73 = HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 208), v36);
            v74 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 208), v36);
            DXGPROTECTEDSESSION::DestroyProtectedSession(v73, v74);
          }
        }
        v30 = *((_DWORD *)this + 56);
        ++v36;
      }
      while ( v36 < v30 );
      v29 = *((unsigned int *)this + 57);
    }
    if ( (_DWORD)v29 != v30 )
    {
      v38 = 0;
      if ( v30 )
      {
        v39 = (_QWORD *)((char *)this + 208);
        do
        {
          if ( v38 >= *((_DWORD *)this + 56) )
          {
            v81 = WdLogNewEntry5_WdAssertion(v29, v25);
            *(_QWORD *)(v81 + 24) = 217LL;
            WdLogEvent5_WdAssertion(v81);
          }
          v25 = *(_DWORD *)(*v39 + 16LL * v38 + 8) & 0x1F;
          if ( (*(_DWORD *)(*v39 + 16LL * v38 + 8) & 0x1F) == 1 )
          {
            v40 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 208), v38);
            DXGADAPTER::DestroyHandle(this, v40);
          }
          else
          {
            v29 = (*(_DWORD *)(*v39 + 16LL * v38 + 8) & 0x1Fu) - 12;
            if ( (*(_DWORD *)(*v39 + 16LL * v38 + 8) & 0x1F) == 0xC )
            {
              v85 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 208), v38);
              v88 = (struct DXGPROCESS *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 208), v38);
              if ( (*((_BYTE *)v88 + 299) & 8) == 0 )
              {
                v89 = WdLogNewEntry5_WdAssertion(v87, v86);
                *(_QWORD *)(v89 + 24) = 1840LL;
                WdLogEvent5_WdAssertion(v89);
              }
              v115 = 0LL;
              CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v115, v88);
              if ( v115 )
                DXGPROCESS::DestroyDxgProcess(v88);
              else
                DXGPROCESS::FreeHandleSafe(this, v85);
              CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v115);
            }
            else if ( (*(_DWORD *)(*v39 + 16LL * v38 + 8) & 0x1F) == 0xD )
            {
              v83 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 208), v38);
              v84 = HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 208), v38);
              DXGSHAREDVMOBJECT::ReleaseReference(v84);
              DXGPROCESS::FreeHandleSafe(this, v83);
            }
            else if ( (_DWORD)v25 )
            {
              v82 = WdLogNewEntry5_WdAssertion(v29, v25);
              *(_QWORD *)(v82 + 24) = 1861LL;
              WdLogEvent5_WdAssertion(v82);
            }
          }
          ++v38;
        }
        while ( v38 < *((_DWORD *)this + 56) );
      }
    }
  }
  if ( *((_QWORD *)this + 52) )
  {
    DXGPROCESS::SetVailObject(this, 0LL);
    if ( *((_QWORD *)this + 52) )
    {
      v90 = WdLogNewEntry5_WdAssertion(v29, v25);
      *(_QWORD *)(v90 + 24) = 1874LL;
      WdLogEvent5_WdAssertion(v90);
    }
  }
  if ( *((_BYTE *)this + 424) )
  {
    v93 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v29, v25) + 74);
    if ( v93 )
    {
      v94 = PsGetCurrentProcessSessionId(v92, v91);
      v95 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v93, v94);
    }
    else
    {
      v95 = 0LL;
    }
    if ( !v95 )
    {
      v96 = WdLogNewEntry5_WdAssertion(v92, v91);
      *(_QWORD *)(v96 + 24) = 1882LL;
      WdLogEvent5_WdAssertion(v96);
    }
    v99 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v92, v91) + 74);
    if ( v99 )
    {
      v100 = PsGetCurrentProcessSessionId(v98, v97);
      v101 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v99, v100);
    }
    else
    {
      v101 = 0LL;
    }
    if ( (int)DXGSESSIONDATA::VailGuestDisconnect(v101) < 0 )
    {
      v103 = WdLogNewEntry5_WdAssertion(v102, v25);
      *(_QWORD *)(v103 + 24) = 1884LL;
      WdLogEvent5_WdAssertion(v103);
    }
    *((_BYTE *)this + 424) = 0;
  }
  VidSchTerminateProcessX((__int64)this, v25);
  VidMmTerminateProcessX((__int64)this, v31);
  if ( v3 )
  {
    DXGVIRTUALMACHINE::ResetVirtualMachine(*((DXGVIRTUALMACHINE **)this + 54), 0);
    v105 = DXGPROCESS::DeferredInitialize(this, 1u);
    v109 = v105;
    if ( v105 < 0 )
    {
      v110 = WdLogNewEntry5_WdError(v107, v106, v108);
      *(_QWORD *)(v110 + 24) = v109;
      WdLogEvent5_WdError(v110);
      *((_BYTE *)this + 456) = 0;
    }
  }
  else if ( (*((_BYTE *)this + 299) & 2) != 0 )
  {
    v104 = DXGGLOBAL::GetGlobal(v33, v32);
    DXGGLOBAL::IterateAdaptersWithCallback(v104, DestroyProcessCallback, this, 2LL);
  }
  KeLeaveCriticalRegion();
  if ( (*((_BYTE *)this + 299) & 8) != 0 )
    DXGPROCESSVM::DestroyVmProcess(this);
  if ( !v3 )
    *((_DWORD *)this + 10) = 2;
  if ( *((_DWORD *)this + 92) )
  {
    v111 = DXGGLOBAL::GetGlobal(v35, v34);
    v123 = *((_DWORD *)this + 92);
    v122 = 0LL;
    v112 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)v111 + 164);
    v124 = 1;
    v125 = 1001;
    DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v112, (struct DXGKVMB_COMMAND_BASE *)&v122, 0x18u, 0LL, 0LL, v113);
    *((_DWORD *)this + 92) = 0;
  }
}
