/*
 * XREFs of xxxCreateThreadInfo @ 0x1C002EBB4
 * Callers:
 *     UserThreadCallout @ 0x1C002D0D0 (UserThreadCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C005EBE8 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C0014CA0 (Win32AllocPoolWithQuota.c)
 *     HMAssignmentLock @ 0x1C0024280 (HMAssignmentLock.c)
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C002C0F4 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     AllocQueue @ 0x1C002E6F0 (AllocQueue.c)
 *     InitClientInfo @ 0x1C002E9DC (InitClientInfo.c)
 *     RtlGetExpWinVer @ 0x1C002FCD8 (RtlGetExpWinVer.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C003009C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00300E8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxDestroyThreadInfo @ 0x1C00322E8 (xxxDestroyThreadInfo.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0033820 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     zzzDestroyQueue @ 0x1C0034320 (zzzDestroyQueue.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1C0034768 (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C00348F8 (ProtectHandle.c)
 *     LockObjectAssignment @ 0x1C00349A0 (LockObjectAssignment.c)
 *     CloseProtectedHandle @ 0x1C0037438 (CloseProtectedHandle.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0038320 (ApiSetEditionUpdateRawMouseMode.c)
 *     ValidateHmonitor @ 0x1C004FDD0 (ValidateHmonitor.c)
 *     SetUnavailableInputSource @ 0x1C0076FB0 (SetUnavailableInputSource.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C008AB1C (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C008ADE0 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ?ParseReserved@@YAKPEBG0@Z @ 0x1C00A7A10 (-ParseReserved@@YAKPEBG0@Z.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C0107858 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C010BADC (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0 @ 0x1C010C6A0 (McTemplateK0.c)
 *     McTemplateK0qq @ 0x1C010D4F4 (McTemplateK0qq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  struct _KPROCESS *ThreadProcess; // rsi
  __int64 v3; // rcx
  int v4; // r15d
  __int64 ThreadWin32Thread; // rdi
  __int64 ProcessPeb; // r8
  unsigned int *v7; // rdx
  __int64 v8; // rcx
  const void *v9; // rsi
  ULONG64 v10; // rdx
  _BYTE **v11; // rax
  __int64 v12; // rax
  unsigned int *v13; // rdx
  __int64 v14; // rcx
  ULONG64 v15; // r8
  ULONG64 v16; // rdx
  _BYTE **v17; // rax
  __int64 CurrentProcessWin32Process; // r14
  int v19; // r13d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 **v23; // rcx
  __int64 **v24; // rcx
  struct _NT_TIB *v25; // rsi
  __int64 v26; // rcx
  PEPROCESS v27; // rsi
  __int64 ProcessSectionBaseAddress; // rax
  int v29; // r13d
  HANDLE *v30; // r15
  signed int Event; // esi
  __int64 v32; // rdx
  __int64 v33; // r9
  const unsigned __int16 *v34; // rdx
  int v35; // r12d
  unsigned int v36; // eax
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // r15
  LeaveEnterCrit *v40; // rcx
  unsigned int CurrentProcessId; // eax
  const GUID *v42; // r8
  __int64 v43; // rdx
  PVOID v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 JournallingQueue; // r15
  __int64 v48; // rdx
  __int64 ProcessWin32Process; // rax
  int v50; // edx
  __int64 v51; // rcx
  int v52; // ecx
  int v53; // ecx
  int v54; // eax
  HANDLE Handle; // [rsp+40h] [rbp-1F8h] BYREF
  struct tagDESKTOP *v57; // [rsp+48h] [rbp-1F0h]
  HANDLE v58[2]; // [rsp+50h] [rbp-1E8h] BYREF
  _QWORD v59[10]; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v60[8]; // [rsp+B0h] [rbp-188h] BYREF
  __int64 v61; // [rsp+B8h] [rbp-180h]
  _QWORD *v62; // [rsp+C0h] [rbp-178h]
  struct _NT_TIB *Self; // [rsp+C8h] [rbp-170h]
  PVOID Object; // [rsp+D0h] [rbp-168h] BYREF
  _BYTE v65[8]; // [rsp+D8h] [rbp-160h] BYREF
  PVOID v66; // [rsp+E0h] [rbp-158h] BYREF
  _QWORD v67[3]; // [rsp+E8h] [rbp-150h] BYREF
  _QWORD v68[3]; // [rsp+100h] [rbp-138h] BYREF
  _QWORD v69[5]; // [rsp+118h] [rbp-120h] BYREF
  __int128 v70; // [rsp+140h] [rbp-F8h]
  __int128 v71; // [rsp+150h] [rbp-E8h]
  __int128 v72; // [rsp+160h] [rbp-D8h]
  __int128 v73; // [rsp+170h] [rbp-C8h]
  _QWORD *v74; // [rsp+180h] [rbp-B8h]
  __int128 v75; // [rsp+1A0h] [rbp-98h] BYREF
  __int128 v76; // [rsp+1B0h] [rbp-88h] BYREF
  __int128 v77; // [rsp+1C0h] [rbp-78h] BYREF
  _OWORD v78[2]; // [rsp+1D0h] [rbp-68h] BYREF
  __int64 v79; // [rsp+1F0h] [rbp-48h]
  char v80; // [rsp+248h] [rbp+10h] BYREF
  int v81; // [rsp+250h] [rbp+18h]
  PEPROCESS Process; // [rsp+258h] [rbp+20h]

  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  memset(v59, 0, 0x48uLL);
  v57 = 0LL;
  Handle = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  memset(v67, 0, sizeof(v67));
  memset(v68, 0, sizeof(v68));
  v61 = 0LL;
  memset(v69, 0, 0x20uLL);
  if ( SBYTE1(Microsoft_Windows_Win32kEnableBits) < 0 )
    McTemplateK0(v3, &InitiateGuiThreadExecution, &Context.Flags);
  if ( !gbCleanedUpResources && PsGetCurrentProcessWin32Process(v3) )
  {
    ++gdwGuiThreads;
    v4 = 0;
    if ( ThreadProcess == gpepCSRSS )
      v4 = 33554504;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    *(_QWORD *)(ThreadWin32Thread + 384) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 392) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 400) = 0;
    *(_QWORD *)(ThreadWin32Thread + 536) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 544) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 552) = 0;
    *(_QWORD *)(ThreadWin32Thread + 848) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 856) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 864) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1472) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 520) = ThreadWin32Thread + 512;
    *(_QWORD *)(ThreadWin32Thread + 512) = ThreadWin32Thread + 512;
    *(_QWORD *)(ThreadWin32Thread + 1216) = ThreadWin32Thread + 1208;
    *(_QWORD *)(ThreadWin32Thread + 1208) = ThreadWin32Thread + 1208;
    *(_QWORD *)(ThreadWin32Thread + 744) = ThreadWin32Thread + 736;
    *(_QWORD *)(ThreadWin32Thread + 736) = ThreadWin32Thread + 736;
    *(_QWORD *)(ThreadWin32Thread + 1088) = ThreadWin32Thread + 1080;
    *(_QWORD *)(ThreadWin32Thread + 1080) = ThreadWin32Thread + 1080;
    *(_DWORD *)(ThreadWin32Thread + 1096) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1144) = ThreadWin32Thread + 1136;
    *(_QWORD *)(ThreadWin32Thread + 1136) = ThreadWin32Thread + 1136;
    *(_BYTE *)(ThreadWin32Thread + 1248) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1384) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 820) = 1;
    ProcessPeb = PsGetProcessPeb(ThreadProcess);
    v62 = *(_QWORD **)(ProcessPeb + 32);
    v74 = v59;
    v59[0] = v62[4];
    v59[1] = v62[5];
    v59[2] = v62[17];
    v59[3] = v62[18];
    v59[4] = *(_QWORD *)((char *)v62 + 164);
    v7 = (unsigned int *)(v62 + 24);
    if ( (unsigned __int64)(v62 + 24) >= MmUserProbeAddress )
      v7 = (unsigned int *)MmUserProbeAddress;
    v8 = *v7;
    v81 = v8;
    LODWORD(v59[5]) = v8;
    v9 = (const void *)*((_QWORD *)v7 + 1);
    v59[6] = v9;
    if ( !(_WORD)v8 )
    {
      v59[6] = 0LL;
      goto LABEL_23;
    }
    if ( ((unsigned __int8)v9 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (ULONG64)v9 + (unsigned __int16)v8 + 2;
    v11 = (_BYTE **)MmUserProbeAddress;
    if ( v10 < MmUserProbeAddress && (unsigned __int16)v8 <= HIWORD(v81) )
    {
      if ( (v8 & 1) != 0 )
        goto LABEL_17;
      if ( v10 > (unsigned __int64)v9 )
      {
LABEL_19:
        v12 = Win32AllocPoolWithQuota(LOWORD(v59[5]), 0x79747355u);
        v61 = v12;
        v59[6] = v12;
        if ( !v12 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v12, v68, Win32FreePool);
        memmove((void *)v59[6], v9, LOWORD(v59[5]));
LABEL_23:
        v13 = (unsigned int *)(v62 + 26);
        if ( (unsigned __int64)(v62 + 26) >= MmUserProbeAddress )
          v13 = (unsigned int *)MmUserProbeAddress;
        v14 = *v13;
        v81 = v14;
        LODWORD(v59[7]) = v14;
        v15 = *((_QWORD *)v13 + 1);
        v59[8] = v15;
        if ( (v15 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = (unsigned __int16)v14 + v15 + 2;
        v17 = (_BYTE **)MmUserProbeAddress;
        if ( v16 < MmUserProbeAddress && (unsigned __int16)v14 <= HIWORD(v81) )
        {
          if ( (v14 & 1) != 0 )
            goto LABEL_32;
          if ( v16 > v15 )
            goto LABEL_34;
        }
        if ( (v14 & 1) == 0 )
        {
LABEL_33:
          **v17 = 0;
LABEL_34:
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
          v19 = v4 | 0x100;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80) == 0 )
            v19 = v4;
          if ( (HANDLE)gpidLogon == PsGetThreadProcessId(Thread) )
            v19 |= 0x2000000u;
          if ( IsCurrentProcessDwm(v21, v20) )
            *(_DWORD *)(ThreadWin32Thread + 1224) |= 4u;
          *(_QWORD *)(ThreadWin32Thread + 340) = 0LL;
          PsGetCurrentProcessWin32Process(v22);
          *(_DWORD *)(ThreadWin32Thread + 328) &= ~8u;
          *(_DWORD *)(ThreadWin32Thread + 480) = v19;
          *(_DWORD *)(ThreadWin32Thread + 1368) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1372) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1360) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1364) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1412) = 0;
          if ( (dword_1C020FEEC & 0x80u) != 0 )
          {
            *(_QWORD *)&v70 = ThreadWin32Thread + 432;
            *((_QWORD *)&v70 + 1) = gspklBaseLayout;
            v75 = v70;
            v23 = (__int64 **)&v75;
            goto LABEL_49;
          }
          if ( !gspklGlobalActive )
          {
            if ( gspklBaseLayout )
            {
              *(_QWORD *)&v71 = &gspklGlobalActive;
              *((_QWORD *)&v71 + 1) = gspklBaseLayout;
              v76 = v71;
              v24 = (__int64 **)&v76;
LABEL_47:
              HMAssignmentLock(v24);
              goto LABEL_48;
            }
            if ( gspklWinstaLessSessionLayouts )
            {
              *(_QWORD *)&v72 = &gspklGlobalActive;
              *((_QWORD *)&v72 + 1) = gspklWinstaLessSessionLayouts;
              v77 = v72;
              v24 = (__int64 **)&v77;
              goto LABEL_47;
            }
          }
LABEL_48:
          *(_QWORD *)&v73 = ThreadWin32Thread + 432;
          *((_QWORD *)&v73 + 1) = gspklGlobalActive;
          v78[0] = v73;
          v23 = (__int64 **)v78;
LABEL_49:
          HMAssignmentLock(v23);
          *(_QWORD *)(ThreadWin32Thread + 440) = ThreadWin32Thread + 1032;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x800000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 480) |= 0x2000000u;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x400) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 1224) |= 0x20u;
          *(_QWORD *)(ThreadWin32Thread + 416) = CurrentProcessWin32Process;
          *(_QWORD *)(ThreadWin32Thread + 656) = *(_QWORD *)(CurrentProcessWin32Process + 320);
          *(_QWORD *)(CurrentProcessWin32Process + 320) = ThreadWin32Thread;
          ++*(_DWORD *)(CurrentProcessWin32Process + 384);
          v25 = Self;
          if ( Self )
            v25[2].StackBase = PsGetThreadId(*(PETHREAD *)ThreadWin32Thread);
          *(_QWORD *)(ThreadWin32Thread + 472) = (char *)v25 + 2048;
          LODWORD(v25[40].ArbitraryUserPointer) = *(_DWORD *)(ThreadWin32Thread + 340);
          *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 236LL) = 0;
          v26 = *(_QWORD *)(ThreadWin32Thread + 472);
          *(_QWORD *)(ThreadWin32Thread + 360) = v26 + 232;
          *(_DWORD *)(v26 + 240) = *(_DWORD *)(ThreadWin32Thread + 344);
          *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 244LL) = 0;
          *(_QWORD *)(ThreadWin32Thread + 368) = *(_QWORD *)(ThreadWin32Thread + 472) + 240LL;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x2000000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 480) |= 0x20000000u;
          if ( !*(_DWORD *)(ThreadWin32Thread + 624) )
          {
            v27 = Process;
            if ( PsGetProcessPeb(Process) )
            {
              ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v27);
              *(_DWORD *)(ThreadWin32Thread + 624) = RtlGetExpWinVer(ProcessSectionBaseAddress);
            }
            else
            {
              *(_DWORD *)(ThreadWin32Thread + 624) = 1536;
            }
          }
          if ( (int)IsSetManifestWinVerSupported() >= 0 )
            SetManifestWinVer();
          v29 = v19 & 0xC;
          if ( !v29 && (int)IsSetAppCompatFlagsSupported() >= 0 && (unsigned int)SetAppCompatFlags(ThreadWin32Thread) )
            *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x1000000u;
          v30 = (HANDLE *)(ThreadWin32Thread + 720);
          Event = ZwCreateEvent((PHANDLE)(ThreadWin32Thread + 720), 0x1F0003u, 0LL, SynchronizationEvent, 0);
          if ( Event >= 0 )
          {
            Event = ObReferenceObjectByHandle(*v30, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
            *(_QWORD *)(ThreadWin32Thread + 728) = Object;
            if ( Event < 0 )
            {
              if ( Event != -1073741816 )
                ObCloseHandle(*v30, 1);
            }
            else
            {
              LOBYTE(v33) = 1;
              Event = ProtectHandle(*v30, v32, ExEventObjectType, v33);
            }
          }
          if ( Event < 0 )
          {
            *v30 = 0LL;
LABEL_189:
            if ( v57 )
              PopAndFreeW32ThreadLock(v67);
            if ( v61 )
              PopAndFreeAlwaysW32ThreadLock(v68);
            xxxDestroyThreadInfo();
            return (unsigned int)Event;
          }
          Event = ObDuplicateObject(Process, *v30, Process, ThreadWin32Thread + 1440, 0, 512, 2, 0);
          if ( Event < 0 )
          {
            *(_QWORD *)(ThreadWin32Thread + 1440) = 0LL;
            goto LABEL_189;
          }
          Event = InitializeThreadInfoIocp(Process, (struct tagTHREADINFO *)ThreadWin32Thread);
          if ( Event < 0 )
            goto LABEL_189;
          v35 = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x4000;
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x4000u;
          if ( !*(_DWORD *)(CurrentProcessWin32Process + 780) && LODWORD(v59[4]) )
          {
            *(_DWORD *)(CurrentProcessWin32Process + 780) = 28;
            *(_QWORD *)(CurrentProcessWin32Process + 784) = v59[2];
            *(_QWORD *)(CurrentProcessWin32Process + 792) = v59[3];
            *(_DWORD *)(CurrentProcessWin32Process + 800) = v59[4];
            *(_WORD *)(CurrentProcessWin32Process + 804) = WORD2(v59[4]);
          }
          if ( v35 )
          {
LABEL_90:
            v38 = AllocQueue(0LL, 0LL);
            v39 = v38;
            if ( !v38 )
            {
              Event = -1073741801;
              goto LABEL_189;
            }
            *(_QWORD *)(ThreadWin32Thread + 424) = v38;
            v78[1] = *(_OWORD *)v38;
            v79 = *(_QWORD *)(v38 + 16);
            *(_QWORD *)(v38 + 104) = ThreadWin32Thread;
            *(_QWORD *)(v38 + 96) = ThreadWin32Thread;
            ApiSetEditionUpdateRawMouseMode(v38);
            ++*(_DWORD *)(v39 + 400);
            if ( Process == gpepCSRSS )
            {
              *(_QWORD *)(v39 + 436) = 0x2000LL;
            }
            else
            {
              *(_DWORD *)(v39 + 436) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 872LL);
              *(_DWORD *)(v39 + 440) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 876LL);
            }
            if ( (*(_DWORD *)(ThreadWin32Thread + 480) & 0xC) != 0 || !grpWinStaList )
            {
              *(_DWORD *)(ThreadWin32Thread + 1224) |= 0x10u;
              if ( (int)IsxxxSetProcessWindowStationSupported() < 0 )
                *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x40010u;
            }
            else
            {
              v58[0] = 0LL;
              Event = IsxxxResolveDesktopSupported();
              if ( Event >= 0 )
                Event = xxxResolveDesktop(-1LL, &v59[5], v58, v59[4] & 0x40000000, &Handle);
              if ( Event < 0 )
              {
                if ( Event == -1073741205 )
                {
                  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
                  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v80);
                  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
                  LeaveEnterCrit::~LeaveEnterCrit(v40);
                }
                else
                {
                  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
                  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                    McTemplateK0qq(
                      Microsoft_Windows_Win32kEnableBits,
                      &DesktopResolutionFailure,
                      v42,
                      CurrentProcessId,
                      Event);
                  Event = -1073741502;
                }
                goto LABEL_189;
              }
              Event = IsxxxSetProcessWindowStationSupported();
              if ( Event >= 0 )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v65);
                LOBYTE(v43) = 1;
                Event = xxxSetProcessWindowStation(v58[0], v43);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v65);
              }
              if ( Event < 0 )
              {
                CloseProtectedHandle(Handle);
                CloseProtectedHandle(v58[0]);
                Handle = 0LL;
                v58[0] = 0LL;
                goto LABEL_189;
              }
              Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v66, 0LL);
              v44 = v66;
              v57 = (struct tagDESKTOP *)v66;
              if ( Event < 0 )
                goto LABEL_189;
              PushW32ThreadLock(v66, v67, CompositionObject::Release);
              if ( v44 )
                ObfReferenceObject(v44);
              ObfDereferenceObject(v44);
              LODWORD(v69[0]) = 1;
              v69[1] = PsGetCurrentProcess(v46, v45);
              v69[2] = v44;
              v69[3] = 0x100000000LL;
              Event = IsMapDesktopSupported();
              if ( Event >= 0 )
                Event = MapDesktop(v69);
              if ( Event < 0 )
                goto LABEL_189;
              if ( !*(_QWORD *)(CurrentProcessWin32Process + 392) && PsGetProcessId(Process) != (HANDLE)gpidLogon )
              {
                LockObjectAssignment(CurrentProcessWin32Process + 336, v44);
                *(_QWORD *)(CurrentProcessWin32Process + 392) = Handle;
              }
            }
            if ( !(unsigned int)InitClientInfo(ThreadWin32Thread) )
              goto LABEL_189;
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v60);
            Event = IszzzSetDesktopSupported();
            if ( Event >= 0 )
              Event = zzzSetDesktop(ThreadWin32Thread, v57, Handle);
            if ( Event < 0 )
            {
              UserAtomicCheck::Detach((UserAtomicCheck *)v60);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v60);
              goto LABEL_189;
            }
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v60);
            if ( v57 == grpdeskRitInput )
            {
              JournallingQueue = 0LL;
              if ( (int)IsGetJournallingQueueSupported() >= 0 )
                JournallingQueue = GetJournallingQueue(ThreadWin32Thread);
              if ( JournallingQueue && JournallingQueue != *(_QWORD *)(ThreadWin32Thread + 424) )
              {
                if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
                  DestroyThreadsMessages(*(_QWORD *)(ThreadWin32Thread + 424), ThreadWin32Thread);
                zzzDestroyQueue(*(_QWORD *)(ThreadWin32Thread + 424), ThreadWin32Thread);
                *(_QWORD *)(ThreadWin32Thread + 424) = JournallingQueue;
                ++*(_DWORD *)(JournallingQueue + 400);
              }
            }
            if ( SLODWORD(v59[4]) < 0 )
            {
              if ( !v35 )
              {
                if ( !gpidLogon || PsGetProcessInheritedFromUniqueProcessId(Process) != gpidLogon )
                {
                  LODWORD(v59[4]) &= ~0x80000000;
                  goto LABEL_146;
                }
                gppiScreenSaver = CurrentProcessWin32Process;
                gptSSCursor = *((_QWORD *)gpsi + 620);
                *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200000u;
                EtwTraceScreenSaverProcessEvent(1LL);
              }
              if ( (int)IsSetForegroundPrioritySupported() >= 0 )
                SetForegroundPriority(ThreadWin32Thread, 1LL);
              if ( !v35 )
                *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400000u;
              *(_DWORD *)(ThreadWin32Thread + 480) |= 0x2000000u;
            }
LABEL_146:
            if ( (*(_DWORD *)(ThreadWin32Thread + 480) & 0xC) == 0 && !v35 )
            {
              ++gdwDeferWinEvent;
              if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
              {
                ProcessWin32Process = PsGetProcessWin32Process(Process);
                zzzCalcStartCursorHide(ProcessWin32Process, 5000LL);
              }
              --gdwDeferWinEvent;
              if ( grpWinStaList )
              {
                if ( !*(_QWORD *)(CurrentProcessWin32Process + 664) )
                {
                  UserSetLastError(1003LL, v48);
LABEL_153:
                  Event = -1073741823;
                  goto LABEL_189;
                }
              }
            }
            if ( (int)IsxxxUpdateInputHangInfoSupported((unsigned int)_InterlockedExchange(
                                                                        (volatile __int32 *)(*(_QWORD *)(ThreadWin32Thread + 440)
                                                                                           + 12LL),
                                                                        (MEMORY[0xFFFFF78000000320]
                                                                       * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)) >= 0 )
              xxxUpdateInputHangInfo(0LL, 1LL);
            SetUnavailableInputSource(ThreadWin32Thread + 1240);
            v51 = *(_QWORD *)(ThreadWin32Thread + 424);
            if ( v51 )
              SetUnavailableInputSource(v51 + 428);
            v52 = *(_DWORD *)(ThreadWin32Thread + 480);
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000) != 0 )
              v52 |= 0x4000u;
            v53 = v52 | 0x1000000;
            *(_DWORD *)(ThreadWin32Thread + 480) = v53;
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x140) == 0 )
            {
              if ( !gptiForeground || CurrentProcessWin32Process != *((_QWORD *)gptiForeground + 52) )
              {
                if ( !CInputGlobals::GetPtiLastWoken(gpInputGlobals)
                  || CurrentProcessWin32Process != *((_QWORD *)CInputGlobals::GetPtiLastWoken(gpInputGlobals) + 52)
                  || (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x30) == 0x10 )
                {
                  goto LABEL_170;
                }
                v53 = *(_DWORD *)(ThreadWin32Thread + 480);
              }
              *(_DWORD *)(ThreadWin32Thread + 480) = v53 | 0x20;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v50) = 4;
                WPP_RECORDER_SF_q(
                  (_DWORD)gBaseLog,
                  v50,
                  13,
                  16,
                  (__int64)&WPP_ab23653d659a3eef467127bc1c313d97_Traceguids,
                  ThreadWin32Thread);
              }
            }
LABEL_170:
            if ( (*(_DWORD *)gpsi & 4) != 0 && (int)IsCreateInputContextSupported() >= 0 )
              CreateInputContext(0LL);
            if ( !v29 )
            {
              Event = IsxxxClientThreadSetupSupported();
              if ( Event >= 0 )
                Event = xxxClientThreadSetup();
              if ( Event < 0 )
                goto LABEL_189;
            }
            if ( !v35
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 1) == 0
              && (int)IsxxxPlayEventSoundSupported() >= 0 )
            {
              xxxPlayEventSound(7LL);
            }
            if ( v57 )
            {
              if ( (*((_DWORD *)v57 + 12) & 8) != 0 )
                goto LABEL_153;
              PopAndFreeW32ThreadLock(v67);
            }
            if ( v61 )
              PopAndFreeAlwaysW32ThreadLock(v68);
            v54 = *(_DWORD *)(ThreadWin32Thread + 1224);
            if ( (v54 & 1) != 0 )
              *(_DWORD *)(ThreadWin32Thread + 1224) = v54 & 0xFFFFFFFE;
            return (unsigned int)Event;
          }
          if ( (v59[4] & 0x200) != 0 )
          {
            v36 = v59[0];
          }
          else
          {
            if ( !LOWORD(v59[7]) )
            {
              *(_DWORD *)(CurrentProcessWin32Process + 684) = 0;
              goto LABEL_87;
            }
            v36 = ParseReserved((const unsigned __int16 *)v59[8], v34);
          }
          *(_DWORD *)(CurrentProcessWin32Process + 684) = v36;
LABEL_87:
          if ( (v59[4] & 0x400) != 0 )
          {
            v37 = v59[1];
            if ( ValidateHmonitor(v59[1]) )
              *(_QWORD *)(CurrentProcessWin32Process + 688) = v37;
          }
          goto LABEL_90;
        }
LABEL_32:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v16, v15);
        v17 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_33;
      }
    }
    if ( (v8 & 1) == 0 )
    {
LABEL_18:
      **v11 = 0;
      goto LABEL_19;
    }
LABEL_17:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v10, ProcessPeb);
    v11 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_18;
  }
  return 3221225738LL;
}
