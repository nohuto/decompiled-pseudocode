/*
 * XREFs of xxxCreateThreadInfo @ 0x1C002F9C4
 * Callers:
 *     UserThreadCallout @ 0x1C002E220 (UserThreadCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C0073120 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     ProtectHandle @ 0x1C000FCDC (ProtectHandle.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1C000FD78 (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C0013990 (Win32AllocPoolWithQuota.c)
 *     HMAssignmentLock @ 0x1C0023D60 (HMAssignmentLock.c)
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C002C65C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002EACC (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002EB20 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     AllocQueue @ 0x1C002F500 (AllocQueue.c)
 *     InitClientInfo @ 0x1C002F7EC (InitClientInfo.c)
 *     RtlGetExpWinVer @ 0x1C0030AE8 (RtlGetExpWinVer.c)
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0034570 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     zzzDestroyQueue @ 0x1C0035070 (zzzDestroyQueue.c)
 *     LockObjectAssignment @ 0x1C00354C0 (LockObjectAssignment.c)
 *     CloseProtectedHandle @ 0x1C00384A8 (CloseProtectedHandle.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0039390 (ApiSetEditionUpdateRawMouseMode.c)
 *     ValidateHmonitor @ 0x1C003D600 (ValidateHmonitor.c)
 *     SetUnavailableInputSource @ 0x1C007AF50 (SetUnavailableInputSource.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C008EFEC (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C008F2B0 (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ?ParseReserved@@YAKPEBG0@Z @ 0x1C00A8800 (-ParseReserved@@YAKPEBG0@Z.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C010A1C8 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C010E44C (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0 @ 0x1C010F010 (McTemplateK0.c)
 *     McTemplateK0qq @ 0x1C010FE64 (McTemplateK0qq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  struct _KPROCESS *ThreadProcess; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // r15d
  __int64 ThreadWin32Thread; // rdi
  __int64 ProcessPeb; // r8
  unsigned int *v8; // rdx
  __int64 v9; // rcx
  const void *v10; // rsi
  ULONG64 v11; // rdx
  _BYTE **v12; // rax
  __int64 v13; // rax
  unsigned int *v14; // rdx
  __int64 v15; // rcx
  ULONG64 v16; // r8
  ULONG64 v17; // rdx
  _BYTE **v18; // rax
  __int64 CurrentProcessWin32Process; // r14
  int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 **v25; // rcx
  __int64 **v26; // rcx
  struct _NT_TIB *v27; // rsi
  __int64 v28; // rcx
  PEPROCESS v29; // rsi
  __int64 ProcessSectionBaseAddress; // rax
  int v31; // r13d
  HANDLE *v32; // r15
  signed int Event; // esi
  int v34; // edx
  const unsigned __int16 *v35; // rdx
  int v36; // r12d
  unsigned int v37; // eax
  __int64 v38; // r15
  __int64 v39; // rax
  __int64 v40; // r15
  LeaveEnterCrit *v41; // rcx
  unsigned int CurrentProcessId; // eax
  const GUID *v43; // r8
  __int64 v44; // rdx
  PVOID v45; // r15
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 JournallingQueue; // r15
  __int64 v49; // rdx
  __int64 ProcessWin32Process; // rax
  int v51; // edx
  __int64 v52; // rcx
  int v53; // ecx
  int v54; // ecx
  int v55; // eax
  HANDLE Handle; // [rsp+40h] [rbp-1F8h] BYREF
  struct tagDESKTOP *v58; // [rsp+48h] [rbp-1F0h]
  HANDLE v59[2]; // [rsp+50h] [rbp-1E8h] BYREF
  _QWORD v60[10]; // [rsp+60h] [rbp-1D8h] BYREF
  _BYTE v61[8]; // [rsp+B0h] [rbp-188h] BYREF
  __int64 v62; // [rsp+B8h] [rbp-180h]
  _QWORD *v63; // [rsp+C0h] [rbp-178h]
  struct _NT_TIB *Self; // [rsp+C8h] [rbp-170h]
  PVOID Object; // [rsp+D0h] [rbp-168h] BYREF
  _BYTE v66[8]; // [rsp+D8h] [rbp-160h] BYREF
  PVOID v67; // [rsp+E0h] [rbp-158h] BYREF
  _QWORD v68[3]; // [rsp+E8h] [rbp-150h] BYREF
  _QWORD v69[3]; // [rsp+100h] [rbp-138h] BYREF
  _QWORD v70[5]; // [rsp+118h] [rbp-120h] BYREF
  __int128 v71; // [rsp+140h] [rbp-F8h]
  __int128 v72; // [rsp+150h] [rbp-E8h]
  __int128 v73; // [rsp+160h] [rbp-D8h]
  __int128 v74; // [rsp+170h] [rbp-C8h]
  _QWORD *v75; // [rsp+180h] [rbp-B8h]
  __int128 v76; // [rsp+1A0h] [rbp-98h] BYREF
  __int128 v77; // [rsp+1B0h] [rbp-88h] BYREF
  __int128 v78; // [rsp+1C0h] [rbp-78h] BYREF
  _OWORD v79[2]; // [rsp+1D0h] [rbp-68h] BYREF
  __int64 v80; // [rsp+1F0h] [rbp-48h]
  char v81; // [rsp+248h] [rbp+10h] BYREF
  int v82; // [rsp+250h] [rbp+18h]
  PEPROCESS Process; // [rsp+258h] [rbp+20h]

  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  memset(v60, 0, 0x48uLL);
  v58 = 0LL;
  Handle = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  memset(v68, 0, sizeof(v68));
  memset(v69, 0, sizeof(v69));
  v62 = 0LL;
  memset(v70, 0, 0x20uLL);
  if ( SBYTE1(Microsoft_Windows_Win32kEnableBits) < 0 )
    McTemplateK0(v4, &InitiateGuiThreadExecution, &Context.Flags);
  if ( !gbCleanedUpResources && PsGetCurrentProcessWin32Process(v4, v3) )
  {
    ++gdwGuiThreads;
    v5 = 0;
    if ( ThreadProcess == gpepCSRSS )
      v5 = 33554504;
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
    v63 = *(_QWORD **)(ProcessPeb + 32);
    v75 = v60;
    v60[0] = v63[4];
    v60[1] = v63[5];
    v60[2] = v63[17];
    v60[3] = v63[18];
    v60[4] = *(_QWORD *)((char *)v63 + 164);
    v8 = (unsigned int *)(v63 + 24);
    if ( (unsigned __int64)(v63 + 24) >= MmUserProbeAddress )
      v8 = (unsigned int *)MmUserProbeAddress;
    v9 = *v8;
    v82 = v9;
    LODWORD(v60[5]) = v9;
    v10 = (const void *)*((_QWORD *)v8 + 1);
    v60[6] = v10;
    if ( !(_WORD)v9 )
    {
      v60[6] = 0LL;
      goto LABEL_23;
    }
    if ( ((unsigned __int8)v10 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v11 = (ULONG64)v10 + (unsigned __int16)v9 + 2;
    v12 = (_BYTE **)MmUserProbeAddress;
    if ( v11 < MmUserProbeAddress && (unsigned __int16)v9 <= HIWORD(v82) )
    {
      if ( (v9 & 1) != 0 )
        goto LABEL_17;
      if ( v11 > (unsigned __int64)v10 )
      {
LABEL_19:
        v13 = Win32AllocPoolWithQuota(LOWORD(v60[5]), 0x79747355u);
        v62 = v13;
        v60[6] = v13;
        if ( !v13 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v13, v69, Win32FreePool);
        memmove((void *)v60[6], v10, LOWORD(v60[5]));
LABEL_23:
        v14 = (unsigned int *)(v63 + 26);
        if ( (unsigned __int64)(v63 + 26) >= MmUserProbeAddress )
          v14 = (unsigned int *)MmUserProbeAddress;
        v15 = *v14;
        v82 = v15;
        LODWORD(v60[7]) = v15;
        v16 = *((_QWORD *)v14 + 1);
        v60[8] = v16;
        if ( (v16 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = (unsigned __int16)v15 + v16 + 2;
        v18 = (_BYTE **)MmUserProbeAddress;
        if ( v17 < MmUserProbeAddress && (unsigned __int16)v15 <= HIWORD(v82) )
        {
          if ( (v15 & 1) != 0 )
            goto LABEL_32;
          if ( v17 > v16 )
            goto LABEL_34;
        }
        if ( (v15 & 1) == 0 )
        {
LABEL_33:
          **v18 = 0;
LABEL_34:
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15, v17);
          v20 = v5 | 0x100;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80) == 0 )
            v20 = v5;
          if ( (HANDLE)gpidLogon == PsGetThreadProcessId(Thread) )
            v20 |= 0x2000000u;
          if ( IsCurrentProcessDwm(v22, v21) )
            *(_DWORD *)(ThreadWin32Thread + 1224) |= 4u;
          *(_QWORD *)(ThreadWin32Thread + 340) = 0LL;
          PsGetCurrentProcessWin32Process(v24, v23);
          *(_DWORD *)(ThreadWin32Thread + 328) &= ~8u;
          *(_DWORD *)(ThreadWin32Thread + 480) = v20;
          *(_DWORD *)(ThreadWin32Thread + 1368) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1372) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1360) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1364) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1412) = 0;
          if ( (dword_1C0212EEC & 0x80u) != 0 )
          {
            *(_QWORD *)&v71 = ThreadWin32Thread + 432;
            *((_QWORD *)&v71 + 1) = gspklBaseLayout;
            v76 = v71;
            v25 = (__int64 **)&v76;
            goto LABEL_49;
          }
          if ( !gspklGlobalActive )
          {
            if ( gspklBaseLayout )
            {
              *(_QWORD *)&v72 = &gspklGlobalActive;
              *((_QWORD *)&v72 + 1) = gspklBaseLayout;
              v77 = v72;
              v26 = (__int64 **)&v77;
LABEL_47:
              HMAssignmentLock(v26);
              goto LABEL_48;
            }
            if ( gspklWinstaLessSessionLayouts )
            {
              *(_QWORD *)&v73 = &gspklGlobalActive;
              *((_QWORD *)&v73 + 1) = gspklWinstaLessSessionLayouts;
              v78 = v73;
              v26 = (__int64 **)&v78;
              goto LABEL_47;
            }
          }
LABEL_48:
          *(_QWORD *)&v74 = ThreadWin32Thread + 432;
          *((_QWORD *)&v74 + 1) = gspklGlobalActive;
          v79[0] = v74;
          v25 = (__int64 **)v79;
LABEL_49:
          HMAssignmentLock(v25);
          *(_QWORD *)(ThreadWin32Thread + 440) = ThreadWin32Thread + 1032;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x800000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 480) |= 0x2000000u;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x400) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 1224) |= 0x20u;
          *(_QWORD *)(ThreadWin32Thread + 416) = CurrentProcessWin32Process;
          *(_QWORD *)(ThreadWin32Thread + 656) = *(_QWORD *)(CurrentProcessWin32Process + 320);
          *(_QWORD *)(CurrentProcessWin32Process + 320) = ThreadWin32Thread;
          ++*(_DWORD *)(CurrentProcessWin32Process + 384);
          v27 = Self;
          if ( Self )
            v27[2].StackBase = PsGetThreadId(*(PETHREAD *)ThreadWin32Thread);
          *(_QWORD *)(ThreadWin32Thread + 472) = (char *)v27 + 2048;
          LODWORD(v27[40].ArbitraryUserPointer) = *(_DWORD *)(ThreadWin32Thread + 340);
          *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 236LL) = 0;
          v28 = *(_QWORD *)(ThreadWin32Thread + 472);
          *(_QWORD *)(ThreadWin32Thread + 360) = v28 + 232;
          *(_DWORD *)(v28 + 240) = *(_DWORD *)(ThreadWin32Thread + 344);
          *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 244LL) = 0;
          *(_QWORD *)(ThreadWin32Thread + 368) = *(_QWORD *)(ThreadWin32Thread + 472) + 240LL;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x2000000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 480) |= 0x20000000u;
          if ( !*(_DWORD *)(ThreadWin32Thread + 624) )
          {
            v29 = Process;
            if ( PsGetProcessPeb(Process) )
            {
              ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v29);
              *(_DWORD *)(ThreadWin32Thread + 624) = RtlGetExpWinVer(ProcessSectionBaseAddress);
            }
            else
            {
              *(_DWORD *)(ThreadWin32Thread + 624) = 1536;
            }
          }
          if ( (int)IsSetManifestWinVerSupported() >= 0 )
            SetManifestWinVer();
          v31 = v20 & 0xC;
          if ( !v31 && (int)IsSetAppCompatFlagsSupported() >= 0 && (unsigned int)SetAppCompatFlags(ThreadWin32Thread) )
            *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x1000000u;
          v32 = (HANDLE *)(ThreadWin32Thread + 720);
          Event = ZwCreateEvent((PHANDLE)(ThreadWin32Thread + 720), 0x1F0003u, 0LL, SynchronizationEvent, 0);
          if ( Event >= 0 )
          {
            Event = ObReferenceObjectByHandle(*v32, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
            *(_QWORD *)(ThreadWin32Thread + 728) = Object;
            if ( Event < 0 )
            {
              if ( Event != -1073741816 )
                ObCloseHandle(*v32, 1);
            }
            else
            {
              Event = ProtectHandle(*v32, v34, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
            }
          }
          if ( Event < 0 )
          {
            *v32 = 0LL;
LABEL_189:
            if ( v58 )
              PopAndFreeW32ThreadLock(v68);
            if ( v62 )
              PopAndFreeAlwaysW32ThreadLock(v69);
            xxxDestroyThreadInfo();
            return (unsigned int)Event;
          }
          Event = ObDuplicateObject(Process, *v32, Process, ThreadWin32Thread + 1440, 0, 512, 2, 0);
          if ( Event < 0 )
          {
            *(_QWORD *)(ThreadWin32Thread + 1440) = 0LL;
            goto LABEL_189;
          }
          Event = InitializeThreadInfoIocp(Process, (void **)ThreadWin32Thread);
          if ( Event < 0 )
            goto LABEL_189;
          v36 = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x4000;
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x4000u;
          if ( !*(_DWORD *)(CurrentProcessWin32Process + 780) && LODWORD(v60[4]) )
          {
            *(_DWORD *)(CurrentProcessWin32Process + 780) = 28;
            *(_QWORD *)(CurrentProcessWin32Process + 784) = v60[2];
            *(_QWORD *)(CurrentProcessWin32Process + 792) = v60[3];
            *(_DWORD *)(CurrentProcessWin32Process + 800) = v60[4];
            *(_WORD *)(CurrentProcessWin32Process + 804) = WORD2(v60[4]);
          }
          if ( v36 )
          {
LABEL_90:
            v39 = AllocQueue(0LL, 0LL);
            v40 = v39;
            if ( !v39 )
            {
              Event = -1073741801;
              goto LABEL_189;
            }
            *(_QWORD *)(ThreadWin32Thread + 424) = v39;
            v79[1] = *(_OWORD *)v39;
            v80 = *(_QWORD *)(v39 + 16);
            *(_QWORD *)(v39 + 104) = ThreadWin32Thread;
            *(_QWORD *)(v39 + 96) = ThreadWin32Thread;
            ApiSetEditionUpdateRawMouseMode(v39);
            ++*(_DWORD *)(v40 + 400);
            if ( Process == gpepCSRSS )
            {
              *(_QWORD *)(v40 + 436) = 0x2000LL;
            }
            else
            {
              *(_DWORD *)(v40 + 436) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 872LL);
              *(_DWORD *)(v40 + 440) = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 876LL);
            }
            if ( (*(_DWORD *)(ThreadWin32Thread + 480) & 0xC) != 0 || !grpWinStaList )
            {
              *(_DWORD *)(ThreadWin32Thread + 1224) |= 0x10u;
              if ( (int)IsxxxSetProcessWindowStationSupported() < 0 )
                *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x40010u;
            }
            else
            {
              v59[0] = 0LL;
              Event = IsxxxResolveDesktopSupported();
              if ( Event >= 0 )
                Event = xxxResolveDesktop(-1LL, &v60[5], v59, v60[4] & 0x40000000, &Handle);
              if ( Event < 0 )
              {
                if ( Event == -1073741205 )
                {
                  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
                  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v81);
                  ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
                  LeaveEnterCrit::~LeaveEnterCrit(v41);
                }
                else
                {
                  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
                  if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                    McTemplateK0qq(
                      Microsoft_Windows_Win32kEnableBits,
                      &DesktopResolutionFailure,
                      v43,
                      CurrentProcessId,
                      Event);
                  Event = -1073741502;
                }
                goto LABEL_189;
              }
              Event = IsxxxSetProcessWindowStationSupported();
              if ( Event >= 0 )
              {
                UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v66);
                LOBYTE(v44) = 1;
                Event = xxxSetProcessWindowStation(v59[0], v44);
                UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v66);
              }
              if ( Event < 0 )
              {
                CloseProtectedHandle(Handle);
                CloseProtectedHandle(v59[0]);
                Handle = 0LL;
                v59[0] = 0LL;
                goto LABEL_189;
              }
              Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v67, 0LL);
              v45 = v67;
              v58 = (struct tagDESKTOP *)v67;
              if ( Event < 0 )
                goto LABEL_189;
              PushW32ThreadLock(v67, v68, CompositionObject::Release);
              if ( v45 )
                ObfReferenceObject(v45);
              ObfDereferenceObject(v45);
              LODWORD(v70[0]) = 1;
              v70[1] = PsGetCurrentProcess(v47, v46);
              v70[2] = v45;
              v70[3] = 0x100000000LL;
              Event = IsMapDesktopSupported();
              if ( Event >= 0 )
                Event = MapDesktop(v70);
              if ( Event < 0 )
                goto LABEL_189;
              if ( !*(_QWORD *)(CurrentProcessWin32Process + 392) && PsGetProcessId(Process) != (HANDLE)gpidLogon )
              {
                LockObjectAssignment(CurrentProcessWin32Process + 336, v45);
                *(_QWORD *)(CurrentProcessWin32Process + 392) = Handle;
              }
            }
            if ( !(unsigned int)InitClientInfo(ThreadWin32Thread) )
              goto LABEL_189;
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v61);
            Event = IszzzSetDesktopSupported();
            if ( Event >= 0 )
              Event = zzzSetDesktop(ThreadWin32Thread, v58, Handle);
            if ( Event < 0 )
            {
              UserAtomicCheck::Detach((UserAtomicCheck *)v61);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v61);
              goto LABEL_189;
            }
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v61);
            if ( v58 == grpdeskRitInput )
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
            if ( SLODWORD(v60[4]) < 0 )
            {
              if ( !v36 )
              {
                if ( !gpidLogon || PsGetProcessInheritedFromUniqueProcessId(Process) != gpidLogon )
                {
                  LODWORD(v60[4]) &= ~0x80000000;
                  goto LABEL_146;
                }
                gppiScreenSaver = CurrentProcessWin32Process;
                gptSSCursor = *((_QWORD *)gpsi + 620);
                *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200000u;
                EtwTraceScreenSaverProcessEvent(1LL);
              }
              if ( (int)IsSetForegroundPrioritySupported() >= 0 )
                SetForegroundPriority(ThreadWin32Thread, 1LL);
              if ( !v36 )
                *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400000u;
              *(_DWORD *)(ThreadWin32Thread + 480) |= 0x2000000u;
            }
LABEL_146:
            if ( (*(_DWORD *)(ThreadWin32Thread + 480) & 0xC) == 0 && !v36 )
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
                  UserSetLastError(1003LL, v49);
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
            v52 = *(_QWORD *)(ThreadWin32Thread + 424);
            if ( v52 )
              SetUnavailableInputSource(v52 + 428);
            v53 = *(_DWORD *)(ThreadWin32Thread + 480);
            if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000) != 0 )
              v53 |= 0x4000u;
            v54 = v53 | 0x1000000;
            *(_DWORD *)(ThreadWin32Thread + 480) = v54;
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
                v54 = *(_DWORD *)(ThreadWin32Thread + 480);
              }
              *(_DWORD *)(ThreadWin32Thread + 480) = v54 | 0x20;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(v51) = 4;
                WPP_RECORDER_SF_q(
                  (_DWORD)gBaseLog,
                  v51,
                  13,
                  16,
                  (__int64)&WPP_ab23653d659a3eef467127bc1c313d97_Traceguids,
                  ThreadWin32Thread);
              }
            }
LABEL_170:
            if ( (*(_DWORD *)gpsi & 4) != 0 && (int)IsCreateInputContextSupported() >= 0 )
              CreateInputContext(0LL);
            if ( !v31 )
            {
              Event = IsxxxClientThreadSetupSupported();
              if ( Event >= 0 )
                Event = xxxClientThreadSetup();
              if ( Event < 0 )
                goto LABEL_189;
            }
            if ( !v36
              && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 1) == 0
              && (int)IsxxxPlayEventSoundSupported() >= 0 )
            {
              xxxPlayEventSound(7LL);
            }
            if ( v58 )
            {
              if ( (*((_DWORD *)v58 + 12) & 8) != 0 )
                goto LABEL_153;
              PopAndFreeW32ThreadLock(v68);
            }
            if ( v62 )
              PopAndFreeAlwaysW32ThreadLock(v69);
            v55 = *(_DWORD *)(ThreadWin32Thread + 1224);
            if ( (v55 & 1) != 0 )
              *(_DWORD *)(ThreadWin32Thread + 1224) = v55 & 0xFFFFFFFE;
            return (unsigned int)Event;
          }
          if ( (v60[4] & 0x200) != 0 )
          {
            v37 = v60[0];
          }
          else
          {
            if ( !LOWORD(v60[7]) )
            {
              *(_DWORD *)(CurrentProcessWin32Process + 684) = 0;
              goto LABEL_87;
            }
            v37 = ParseReserved((const unsigned __int16 *)v60[8], v35);
          }
          *(_DWORD *)(CurrentProcessWin32Process + 684) = v37;
LABEL_87:
          if ( (v60[4] & 0x400) != 0 )
          {
            v38 = v60[1];
            if ( ValidateHmonitor(v60[1]) )
              *(_QWORD *)(CurrentProcessWin32Process + 688) = v38;
          }
          goto LABEL_90;
        }
LABEL_32:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v17, v16);
        v18 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_33;
      }
    }
    if ( (v9 & 1) == 0 )
    {
LABEL_18:
      **v12 = 0;
      goto LABEL_19;
    }
LABEL_17:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v11, ProcessPeb);
    v12 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_18;
  }
  return 3221225738LL;
}
