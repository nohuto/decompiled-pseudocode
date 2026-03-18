/*
 * XREFs of ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00E89C4
 * Callers:
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ??1DXGPROCESS@@MEAA@XZ @ 0x1C00E9490 (--1DXGPROCESS@@MEAA@XZ.c)
 *     ?ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNCTION@@@Z @ 0x1C01E018C (-ResetVirtualFunction@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_RESETVIRTUALFUNC.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E300 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E3CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000E548 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000F590 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C001003C (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C00102E0 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0010310 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C00105FC (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0010624 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0010680 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C001071C (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0010E18 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1CEnsureCurrentDxgProcess@@QEAA@XZ @ 0x1C00118CC (--1CEnsureCurrentDxgProcess@@QEAA@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0011CB0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0011D54 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0020D00 (-AcquireExclusive@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C0030824 (-RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z @ 0x1C0031600 (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@@Z.c)
 *     ??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z @ 0x1C003C824 (--0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z.c)
 *     ??_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z @ 0x1C003DAA4 (--_GDXGTRACKEDWORKLOAD@@QEAAPEAXI@Z.c)
 *     ?GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z @ 0x1C00B2434 (-GetEntryObject@HMGRTABLE@@QEAAPEAXI@Z.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C00DC96C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00E0E98 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E12B0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     VidMmTerminateProcessX @ 0x1C00E7E18 (VidMmTerminateProcessX.c)
 *     OutputDuplProcessTerminate @ 0x1C00E8DD4 (OutputDuplProcessTerminate.c)
 *     VidSchTerminateProcessX @ 0x1C00E8FA8 (VidSchTerminateProcessX.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C00E9048 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00EE190 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z @ 0x1C00EE924 (-DestroyHandle@DXGADAPTER@@SAJPEAVDXGPROCESS@@I@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00EF21C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F5F3C (-ReleaseVidPnSourceOwners@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C012C70C (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1C013191C (-BuildEntryHandle@HMGRTABLE@@QEAAII@Z.c)
 *     DxgkDestroyCsrssProcess @ 0x1C013BA34 (DxgkDestroyCsrssProcess.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C01C1780 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C01E9E9C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 *     ?VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@@Z @ 0x1C01F7688 (-VmBusSendSyncMessage@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAUDXGKVMB_COMMAND_BASE@@IPEAXPEAIPEAU_MDL@@.c)
 *     ?LPMStop@LPMDisplayCtrl@@QEAAJXZ @ 0x1C021B624 (-LPMStop@LPMDisplayCtrl@@QEAAJXZ.c)
 *     ?DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ @ 0x1C0228E4C (-DestroyVmProcess@DXGPROCESSVM@@QEAAXXZ.c)
 *     ?PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ @ 0x1C022A1FC (-PauseVmBusChannels@DXGVIRTUALMACHINE@@QEAAXXZ.c)
 *     ?ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z @ 0x1C022A3F8 (-ResetVirtualMachine@DXGVIRTUALMACHINE@@QEAAXE@Z.c)
 *     ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C022A970 (-SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C022CA0C (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C02347A4 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0235C4C (-SetVmSyncObject@DXGSYNCOBJECT@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0235D28 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 *     ?VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ @ 0x1C025BDD0 (-VailGuestDisconnect@DXGSESSIONDATA@@QEAAJXZ.c)
 */

void __fastcall DXGPROCESS::Destroy(DXGPROCESS *this, struct _ERESOURCE *a2, char a3)
{
  int v3; // eax
  char v4; // r12
  __int64 v7; // r9
  _QWORD *v8; // r15
  _QWORD *v9; // r14
  unsigned int v10; // edx
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // esi
  _QWORD *v16; // r14
  DXGSYNCOBJECT *EntryObject; // rbx
  __int64 v18; // rcx
  unsigned int v19; // r15d
  PERESOURCE *v20; // rax
  unsigned int v21; // esi
  _QWORD *v22; // r14
  unsigned int v23; // eax
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // r13
  int v28; // r12d
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rdx
  _QWORD *v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rbx
  __int64 v39; // rcx
  __int64 v40; // rax
  DXGVIRTUALMACHINE *v41; // rcx
  __int64 v42; // rax
  DXGTRACKEDWORKLOAD *v43; // rax
  void *v44; // rbx
  unsigned int v45; // eax
  unsigned int v46; // ebx
  DXGKEYEDMUTEX *v47; // rcx
  int v48; // r8d
  __int64 v49; // rax
  PERESOURCE *Global; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned int v53; // ebx
  void *v54; // rax
  unsigned int v55; // r15d
  __int64 v56; // rcx
  struct DXGPROCESS *v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  DXGSESSIONMGR *v61; // rbx
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v64; // rax
  __int64 v65; // rcx
  DXGSESSIONMGR *v66; // rbx
  unsigned int v67; // eax
  DXGSESSIONDATA *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rax
  struct DXGGLOBAL *v71; // rax
  int v72; // eax
  __int64 v73; // rcx
  __int64 v74; // rbx
  __int64 v75; // rax
  struct DXGGLOBAL *v76; // rax
  DXG_VMBUS_CHANNEL_BASE *v77; // rcx
  struct _MDL *v78; // [rsp+28h] [rbp-B1h]
  union _LARGE_INTEGER Interval; // [rsp+30h] [rbp-A9h] BYREF
  PERESOURCE Resource; // [rsp+38h] [rbp-A1h] BYREF
  _BYTE v81[16]; // [rsp+40h] [rbp-99h] BYREF
  char v82[8]; // [rsp+50h] [rbp-89h] BYREF
  __int64 v83; // [rsp+58h] [rbp-81h]
  char v84; // [rsp+60h] [rbp-79h]
  __int64 v85; // [rsp+68h] [rbp-71h] BYREF
  int v86; // [rsp+70h] [rbp-69h]
  int v87; // [rsp+74h] [rbp-65h]
  int v88; // [rsp+78h] [rbp-61h]
  DXGADAPTER *v89[3]; // [rsp+80h] [rbp-59h] BYREF
  char v90; // [rsp+98h] [rbp-41h]
  char v91[8]; // [rsp+A0h] [rbp-39h] BYREF
  char v92[32]; // [rsp+A8h] [rbp-31h] BYREF
  char v93[104]; // [rsp+C8h] [rbp-11h] BYREF
  char v94; // [rsp+140h] [rbp+67h] BYREF
  char v95; // [rsp+141h] [rbp+68h]
  char v96; // [rsp+150h] [rbp+77h]
  __int64 v97; // [rsp+158h] [rbp+7Fh] BYREF

  v96 = a3;
  v3 = *((_DWORD *)this + 84);
  v4 = a3;
  while ( v3 )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    v3 = *((_DWORD *)this + 84);
  }
  if ( qword_1C008EDB0 && qword_1C008EDB0 == *((_QWORD *)this + 8) )
  {
    AutoResourceLock::AutoResourceLock((AutoResourceLock *)&Resource, a2);
    if ( FileObject && *((_DWORD *)FileObject + 9) )
      LPMDisplayCtrl::LPMStop(FileObject);
    ExReleaseResourceLite(Resource);
    KeLeaveCriticalRegion();
  }
  v95 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v94);
  if ( *((_BYTE *)this + 320) && (*((_BYTE *)this + 323) & 8) == 0 )
    DxgkDestroyCsrssProcess();
  v8 = (_QWORD *)((char *)this + 272);
  if ( (_QWORD *)*v8 != v8 )
  {
    if ( !v4 )
      DXGPROCESS::ReleaseVidPnSourceOwners(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2);
    while ( (_QWORD *)*v8 != v8 )
    {
      v24 = (*v8 - 24LL) & -(__int64)(*v8 != 0LL);
      v25 = *(_QWORD *)(v24 + 0x10);
      v26 = *(_QWORD *)(v25 + 16);
      if ( *(_QWORD *)(v24 + 0x6C0) )
        OutputDuplProcessTerminate(0LL, *(_QWORD *)(v25 + 16));
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v91, v24, 2, v7, 0);
      v27 = *(_QWORD *)(v26 + 2528);
      v28 = *(_DWORD *)(v24 + 328);
      KeEnterCriticalRegion();
      if ( v28 == 2 )
      {
        ExAcquirePushLockExclusiveEx(v27 + 40, 0LL);
        *(_QWORD *)(v27 + 48) = KeGetCurrentThread();
      }
      else
      {
        ExAcquirePushLockExclusiveEx(v27 + 24, 0LL);
        *(_QWORD *)(v27 + 32) = KeGetCurrentThread();
      }
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v91);
      if ( !*(_QWORD *)(v26 + 2528) )
      {
        v31 = WdLogNewEntry5_WdAssertion(v29);
        *(_QWORD *)(v31 + 24) = 1586LL;
        WdLogEvent5_WdAssertion(v31);
      }
      if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) + 176LL) == 4 )
      {
        v32 = v24 + 24;
        v33 = -v24;
        v34 = v32 & -(__int64)(v33 != 0);
        v35 = *(_QWORD *)v34;
        if ( *(_QWORD *)(*(_QWORD *)v34 + 8LL) != v34
          || (v36 = *(_QWORD **)((v32 & -(__int64)(v33 != 0)) + 8), *v36 != v34) )
        {
          __fastfail(3u);
        }
        *v36 = v35;
        *(_QWORD *)(v35 + 8) = v36;
      }
      else
      {
        if ( !*(_BYTE *)(v26 + 185) && *(_DWORD *)(v24 + 464) == 1 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)v91);
          v83 = v26;
          v84 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v82);
          if ( *(_DWORD *)(v26 + 176) == 1 )
            DXGDEVICE::FlushScheduler(v24, 4LL);
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v82);
          COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)v91);
          if ( v84 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v82);
        }
        ADAPTER_RENDER::DestroyDevice(*(ADAPTER_RENDER **)(v26 + 2528), (struct DXGDEVICE *)v24, 0LL);
      }
      v30 = v27 + 40;
      if ( v28 != 2 )
        v30 = v27 + 24;
      *(_QWORD *)(v30 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v30, 0LL);
      KeLeaveCriticalRegion();
      COREACCESS::~COREACCESS((COREACCESS *)v93);
      COREACCESS::~COREACCESS((COREACCESS *)v92);
    }
    v4 = v96;
  }
  OutputDuplProcessTerminate(1LL, 0LL);
  v9 = (_QWORD *)((char *)this + 296);
  if ( (_QWORD *)*v9 != v9 )
  {
    DXGFASTMUTEX::Acquire(*((DXGFASTMUTEX **)this + 39));
    while ( (_QWORD *)*v9 != v9 )
    {
      v37 = (*v9 - 24LL) & -(__int64)(*v9 != 0LL);
      v38 = *(_QWORD *)(*(_QWORD *)(v37 + 0x10) + 16LL);
      v89[2] = (DXGADAPTER *)v38;
      v90 = 0;
      if ( v38 )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v38 + 24));
        v89[1] = (DXGADAPTER *)-1LL;
      }
      COREACCESS::AcquireShared(v89);
      if ( !*(_QWORD *)(v38 + 2520) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v39);
        *(_QWORD *)(v40 + 24) = 1661LL;
        WdLogEvent5_WdAssertion(v40);
      }
      if ( *(_DWORD *)(v38 + 176) == 4 )
        DXGPROCESS::RemoveCopyProtection(this, v37);
      else
        ADAPTER_DISPLAY::DestroyCopyProtection(
          *(ADAPTER_DISPLAY **)(v38 + 2520),
          *(_DWORD *)(v37 + 52),
          *(_DWORD *)(v37 + 48));
      COREACCESS::~COREACCESS((COREACCESS *)v89);
    }
    DXGFASTMUTEX::Release(*((struct _KTHREAD ***)this + 39));
  }
  if ( (*((_BYTE *)this + 323) & 4) != 0 )
  {
    v41 = (DXGVIRTUALMACHINE *)*((_QWORD *)this + 57);
    if ( v41 )
      DXGVIRTUALMACHINE::PauseVmBusChannels(v41);
  }
  v10 = *((_DWORD *)this + 62);
  v11 = v10;
  v12 = *((unsigned int *)this + 63);
  if ( (_DWORD)v12 != v10 )
  {
    v15 = 0;
    if ( v10 )
    {
      v16 = (_QWORD *)((char *)this + 232);
      do
      {
        if ( v15 >= *((_DWORD *)this + 62) )
        {
          v42 = WdLogNewEntry5_WdAssertion(v12);
          *(_QWORD *)(v42 + 24) = 228LL;
          WdLogEvent5_WdAssertion(v42);
        }
        v12 = 2LL * v15;
        switch ( *(_DWORD *)(*v16 + 16LL * v15 + 8) & 0x1F )
        {
          case 8:
            EntryObject = (DXGSYNCOBJECT *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 232), v15);
            v19 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 232), v15);
            if ( (*((_BYTE *)this + 323) & 4) != 0 )
            {
              Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v18);
              DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v81, Global);
              DXGSYNCOBJECTLOCK::AcquireExclusive((DXGSYNCOBJECTLOCK *)v81);
              DXGSYNCOBJECT::SetVmSyncObject(EntryObject, 0LL);
              *((_DWORD *)EntryObject + 18) = 0;
              DXGPROCESS::FreeResourceHandleNoRefSafe(this, v19);
              if ( v81[8] )
                DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v81);
            }
            else
            {
              v20 = (PERESOURCE *)DXGGLOBAL::GetGlobal(v18);
              DXGGLOBAL::DestroySyncObject(v20, EntryObject, v19);
            }
            break;
          case 9:
            HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 232), v15);
            v46 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 232), v15);
            DXGKEYEDMUTEX::SignalAbandoned(v47, v46, v48);
            if ( !DXGKEYEDMUTEX::DestroyHandle(v46) )
            {
              v49 = WdLogNewEntry5_WdAssertion(v12);
              *(_QWORD *)(v49 + 24) = 1733LL;
              WdLogEvent5_WdAssertion(v49);
            }
            break;
          case 14:
            v44 = HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 232), v15);
            v45 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 232), v15);
            DXGPROTECTEDSESSION::DestroyProtectedSession(v44, v45);
            break;
          case 19:
            v43 = (DXGTRACKEDWORKLOAD *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 232), v15);
            if ( v43 )
              DXGTRACKEDWORKLOAD::`scalar deleting destructor'(v43);
            break;
        }
        v11 = *((_DWORD *)this + 62);
        ++v15;
      }
      while ( v15 < v11 );
      v12 = *((unsigned int *)this + 63);
    }
  }
  if ( (_DWORD)v12 != v11 )
  {
    v21 = 0;
    if ( v11 )
    {
      v22 = (_QWORD *)((char *)this + 232);
      do
      {
        if ( v21 >= *((_DWORD *)this + 62) )
        {
          v51 = WdLogNewEntry5_WdAssertion(v12);
          *(_QWORD *)(v51 + 24) = 228LL;
          WdLogEvent5_WdAssertion(v51);
        }
        if ( (*(_DWORD *)(*v22 + 16LL * v21 + 8) & 0x1F) == 1 )
        {
          v23 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 232), v21);
          DXGADAPTER::DestroyHandle(this, v23);
        }
        else
        {
          v12 = (*(_DWORD *)(*v22 + 16LL * v21 + 8) & 0x1Fu) - 12;
          if ( (*(_DWORD *)(*v22 + 16LL * v21 + 8) & 0x1F) == 0xC )
          {
            v55 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 232), v21);
            v57 = (struct DXGPROCESS *)HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 232), v21);
            if ( (*((_BYTE *)v57 + 323) & 8) == 0 )
            {
              v58 = WdLogNewEntry5_WdAssertion(v56);
              *(_QWORD *)(v58 + 24) = 1783LL;
              WdLogEvent5_WdAssertion(v58);
            }
            v97 = 0LL;
            CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)&v97, v57);
            if ( v97 )
              DXGPROCESS::DestroyDxgProcess(v57);
            else
              DXGPROCESS::FreeResourceHandleNoRefSafe(this, v55);
            CEnsureCurrentDxgProcess::~CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v97);
          }
          else if ( (*(_DWORD *)(*v22 + 16LL * v21 + 8) & 0x1F) == 0xD )
          {
            v53 = HMGRTABLE::BuildEntryHandle((DXGPROCESS *)((char *)this + 232), v21);
            v54 = HMGRTABLE::GetEntryObject((DXGPROCESS *)((char *)this + 232), v21);
            DXGSHAREDVMOBJECT::ReleaseReference(v54);
            DXGPROCESS::FreeResourceHandleNoRefSafe(this, v53);
          }
          else if ( (*(_DWORD *)(*v22 + 16LL * v21 + 8) & 0x1F) != 0 )
          {
            v52 = WdLogNewEntry5_WdAssertion(v12);
            *(_QWORD *)(v52 + 24) = 1804LL;
            WdLogEvent5_WdAssertion(v52);
          }
        }
        ++v21;
      }
      while ( v21 < *((_DWORD *)this + 62) );
    }
  }
  if ( *((_QWORD *)this + 55) )
  {
    DXGPROCESS::SetVailObject(this, 0LL);
    if ( *((_QWORD *)this + 55) )
    {
      v59 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v59 + 24) = 1817LL;
      WdLogEvent5_WdAssertion(v59);
    }
  }
  if ( *((_BYTE *)this + 448) )
  {
    v61 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v12) + 77);
    if ( v61 )
    {
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v60);
      SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v61, CurrentProcessSessionId);
    }
    else
    {
      SessionDataForSpecifiedSession = 0LL;
    }
    if ( !SessionDataForSpecifiedSession )
    {
      v64 = WdLogNewEntry5_WdAssertion(v60);
      *(_QWORD *)(v64 + 24) = 1825LL;
      WdLogEvent5_WdAssertion(v64);
    }
    v66 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal(v60) + 77);
    if ( v66 )
    {
      v67 = PsGetCurrentProcessSessionId(v65);
      v68 = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v66, v67);
    }
    else
    {
      v68 = 0LL;
    }
    if ( (int)DXGSESSIONDATA::VailGuestDisconnect(v68) < 0 )
    {
      v70 = WdLogNewEntry5_WdAssertion(v69);
      *(_QWORD *)(v70 + 24) = 1827LL;
      WdLogEvent5_WdAssertion(v70);
    }
    *((_BYTE *)this + 448) = 0;
  }
  VidSchTerminateProcessX(this);
  VidMmTerminateProcessX((__int64)this);
  if ( v4 )
  {
    DXGVIRTUALMACHINE::ResetVirtualMachine(*((DXGVIRTUALMACHINE **)this + 57), 0);
    v72 = DXGPROCESS::DeferredInitialize(this, 1u);
    v74 = v72;
    if ( v72 < 0 )
    {
      v75 = WdLogNewEntry5_WdError(v73);
      *(_QWORD *)(v75 + 24) = v74;
      WdLogEvent5_WdError(v75);
      *((_BYTE *)this + 480) = 0;
    }
  }
  else if ( (*((_BYTE *)this + 323) & 2) != 0 )
  {
    v71 = DXGGLOBAL::GetGlobal(v13);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)v71,
      (__int64 (__fastcall *)(_QWORD *, __int64))DestroyProcessCallback,
      (__int64)this,
      2);
  }
  DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v94);
  if ( (*((_BYTE *)this + 323) & 8) != 0 )
    DXGPROCESSVM::DestroyVmProcess(this);
  if ( !v4 )
    *((_DWORD *)this + 10) = 2;
  if ( *((_DWORD *)this + 98) )
  {
    v76 = DXGGLOBAL::GetGlobal(v14);
    v86 = *((_DWORD *)this + 98);
    v85 = 0LL;
    v77 = (DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)v76 + 168);
    v87 = 1;
    v88 = 1001;
    DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessage(v77, (struct DXGKVMB_COMMAND_BASE *)&v85, 0x18u, 0LL, 0LL, v78);
    *((_DWORD *)this + 98) = 0;
  }
  if ( v95 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v94);
}
