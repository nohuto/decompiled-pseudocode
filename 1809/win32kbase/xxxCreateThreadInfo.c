/*
 * XREFs of xxxCreateThreadInfo @ 0x1C002C1CC
 * Callers:
 *     UserThreadCallout @ 0x1C002ABF0 (UserThreadCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C006B700 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     McTemplateK0 @ 0x1C0004BA8 (McTemplateK0.c)
 *     ValidateHmonitor @ 0x1C0013BC0 (ValidateHmonitor.c)
 *     ProtectHandle @ 0x1C0017508 (ProtectHandle.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1C00175A0 (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     Win32AllocPoolWithQuota @ 0x1C0019AB0 (Win32AllocPoolWithQuota.c)
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C0028F0C (-IsCurrentProcessDwm@@YAHXZ.c)
 *     InitClientInfo @ 0x1C002C00C (InitClientInfo.c)
 *     RtlGetExpWinVer @ 0x1C002D1D8 (RtlGetExpWinVer.c)
 *     LockObjectAssignment @ 0x1C002E5D0 (LockObjectAssignment.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C002E66C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C002E6B8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HMAssignmentLock @ 0x1C0031820 (HMAssignmentLock.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C0031DA0 (ApiSetEditionUpdateRawMouseMode.c)
 *     CloseProtectedHandle @ 0x1C0033A08 (CloseProtectedHandle.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     AllocQueue @ 0x1C005F060 (AllocQueue.c)
 *     SetUnavailableInputSource @ 0x1C00696C0 (SetUnavailableInputSource.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C00725E0 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ?ParseReserved@@YAKPEBG0@Z @ 0x1C0095238 (-ParseReserved@@YAKPEBG0@Z.c)
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C00A8398 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C00AF880 (memmove.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C00E4238 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     zzzDestroyQueue @ 0x1C00E48C0 (zzzDestroyQueue.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00E7E8C (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0qq @ 0x1C00E97D4 (McTemplateK0qq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  PEPROCESS ThreadProcess; // rsi
  struct _MCGEN_TRACE_CONTEXT *Self; // rcx
  int v4; // r12d
  __int64 ThreadWin32Thread; // rdi
  __int64 ProcessPeb; // r8
  ULONG64 v7; // rdx
  void *v8; // rsi
  ULONG64 v9; // rdx
  _BYTE **v10; // rax
  void *v11; // rax
  unsigned int *v12; // rdx
  __int64 v13; // rcx
  unsigned __int16 *v14; // r8
  ULONG64 v15; // rdx
  _BYTE **v16; // rax
  __int64 CurrentProcessWin32Process; // r14
  int v18; // r13d
  __int128 *v19; // rcx
  struct _MCGEN_TRACE_CONTEXT *v20; // rsi
  __int64 v21; // rcx
  __int64 ProcessSectionBaseAddress; // rax
  int v23; // r13d
  HANDLE *v24; // r15
  signed int Event; // esi
  int v26; // edx
  const unsigned __int16 *v27; // rdx
  int v28; // r12d
  unsigned int v29; // eax
  __int64 v30; // r15
  __int64 v31; // rax
  _DWORD *v32; // r15
  int v33; // eax
  LeaveEnterCrit *v34; // rcx
  unsigned int CurrentProcessId; // eax
  const GUID *v36; // r8
  __int64 v37; // rdx
  PVOID v38; // r15
  __int64 v39; // rcx
  __int64 JournallingQueue; // r15
  int *v41; // r15
  __int64 ProcessWin32Process; // rax
  __int64 v43; // rcx
  int v44; // eax
  struct tagDESKTOP *v46; // [rsp+40h] [rbp-188h]
  HANDLE v47; // [rsp+48h] [rbp-180h] BYREF
  __int128 v48; // [rsp+50h] [rbp-178h]
  char v49[8]; // [rsp+60h] [rbp-168h] BYREF
  int *v50; // [rsp+68h] [rbp-160h]
  void *v51; // [rsp+70h] [rbp-158h]
  _QWORD v52[2]; // [rsp+80h] [rbp-148h] BYREF
  int v53; // [rsp+90h] [rbp-138h]
  int v54; // [rsp+94h] [rbp-134h]
  int v55; // [rsp+98h] [rbp-130h]
  int v56; // [rsp+9Ch] [rbp-12Ch]
  int v57; // [rsp+A0h] [rbp-128h]
  int v58; // [rsp+A4h] [rbp-124h]
  unsigned int v59; // [rsp+A8h] [rbp-120h]
  void *v60; // [rsp+B0h] [rbp-118h]
  int v61; // [rsp+B8h] [rbp-110h]
  unsigned __int16 *v62; // [rsp+C0h] [rbp-108h]
  __int64 v63; // [rsp+D0h] [rbp-F8h]
  struct _MCGEN_TRACE_CONTEXT *v64; // [rsp+D8h] [rbp-F0h]
  PVOID Object; // [rsp+E0h] [rbp-E8h] BYREF
  char v66[8]; // [rsp+E8h] [rbp-E0h] BYREF
  PVOID v67; // [rsp+F0h] [rbp-D8h] BYREF
  int v68; // [rsp+F8h] [rbp-D0h] BYREF
  __int64 CurrentProcess; // [rsp+100h] [rbp-C8h]
  PVOID v70; // [rsp+108h] [rbp-C0h]
  int v71; // [rsp+110h] [rbp-B8h]
  int v72; // [rsp+114h] [rbp-B4h]
  __int128 v73; // [rsp+130h] [rbp-98h] BYREF
  __int128 v74; // [rsp+140h] [rbp-88h] BYREF
  __int128 v75; // [rsp+150h] [rbp-78h] BYREF
  _BYTE v76[24]; // [rsp+160h] [rbp-68h] BYREF
  _BYTE v77[80]; // [rsp+178h] [rbp-50h] BYREF
  int v78; // [rsp+1D8h] [rbp+10h]
  struct _EPROCESS *Process; // [rsp+1E0h] [rbp+18h]
  HANDLE Handle; // [rsp+1E8h] [rbp+20h] BYREF

  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  v46 = 0LL;
  Handle = 0LL;
  Self = (struct _MCGEN_TRACE_CONTEXT *)KeGetPcr()->NtTib.Self;
  v64 = Self;
  v51 = 0LL;
  if ( SBYTE1(Microsoft_Windows_Win32kEnableBits) < 0 )
    McTemplateK0(Self, &InitiateGuiThreadExecution, (const GUID *)&Context.Flags);
  if ( !gbCleanedUpResources && PsGetCurrentProcessWin32Process(Self) )
  {
    ++gdwGuiThreads;
    v4 = 0;
    if ( ThreadProcess == gpepCSRSS )
      v4 = 33554504;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    *(_QWORD *)(ThreadWin32Thread + 392) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 400) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 408) = 0;
    *(_QWORD *)(ThreadWin32Thread + 544) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 552) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 560) = 0;
    *(_QWORD *)(ThreadWin32Thread + 848) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 856) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 864) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1448) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 528) = ThreadWin32Thread + 520;
    *(_QWORD *)(ThreadWin32Thread + 520) = ThreadWin32Thread + 520;
    *(_QWORD *)(ThreadWin32Thread + 1200) = ThreadWin32Thread + 1192;
    *(_QWORD *)(ThreadWin32Thread + 1192) = ThreadWin32Thread + 1192;
    *(_QWORD *)(ThreadWin32Thread + 1088) = ThreadWin32Thread + 1080;
    *(_QWORD *)(ThreadWin32Thread + 1080) = ThreadWin32Thread + 1080;
    *(_DWORD *)(ThreadWin32Thread + 1096) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1128) = ThreadWin32Thread + 1120;
    *(_QWORD *)(ThreadWin32Thread + 1120) = ThreadWin32Thread + 1120;
    *(_BYTE *)(ThreadWin32Thread + 1224) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1360) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 828) = 1;
    v60 = 0LL;
    ProcessPeb = PsGetProcessPeb(ThreadProcess);
    v63 = *(_QWORD *)(ProcessPeb + 32);
    v50 = (int *)v52;
    v52[0] = *(_QWORD *)(v63 + 32);
    v52[1] = *(_QWORD *)(v63 + 40);
    v53 = *(_DWORD *)(v63 + 136);
    v54 = *(_DWORD *)(v63 + 140);
    v55 = *(_DWORD *)(v63 + 144);
    v56 = *(_DWORD *)(v63 + 148);
    v57 = *(_DWORD *)(v63 + 164);
    v58 = *(_DWORD *)(v63 + 168);
    v7 = v63 + 192;
    if ( v63 + 192 >= MmUserProbeAddress )
      v7 = MmUserProbeAddress;
    v59 = *(_DWORD *)v7;
    v8 = *(void **)(v7 + 8);
    v60 = v8;
    if ( !(_WORD)v59 )
    {
      v60 = 0LL;
      goto LABEL_23;
    }
    if ( ((unsigned __int8)v8 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (ULONG64)v8 + (unsigned __int16)v59 + 2;
    v10 = (_BYTE **)MmUserProbeAddress;
    if ( v9 < MmUserProbeAddress && (unsigned __int16)v59 <= HIWORD(v59) )
    {
      if ( (v59 & 1) != 0 )
        goto LABEL_17;
      if ( v9 > (unsigned __int64)v8 )
      {
LABEL_19:
        v11 = (void *)Win32AllocPoolWithQuota((unsigned __int16)v59, 0x79747355u);
        v51 = v11;
        v60 = v11;
        if ( !v11 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v11, v77, Win32FreePool);
        memmove(v60, v8, (unsigned __int16)v59);
LABEL_23:
        v12 = (unsigned int *)(v63 + 208);
        if ( v63 + 208 >= MmUserProbeAddress )
          v12 = (unsigned int *)MmUserProbeAddress;
        v13 = *v12;
        v78 = *v12;
        v61 = *v12;
        v14 = (unsigned __int16 *)*((_QWORD *)v12 + 1);
        v62 = v14;
        if ( ((unsigned __int8)v14 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (ULONG64)v14 + (unsigned __int16)v13 + 2;
        v16 = (_BYTE **)MmUserProbeAddress;
        if ( v15 < MmUserProbeAddress && (unsigned __int16)v13 <= HIWORD(v78) )
        {
          if ( (v13 & 1) != 0 )
            goto LABEL_32;
          if ( v15 > (unsigned __int64)v14 )
            goto LABEL_34;
        }
        if ( (v13 & 1) == 0 )
        {
LABEL_33:
          **v16 = 0;
LABEL_34:
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
          v18 = v4 | 0x100;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80) == 0 )
            v18 = v4;
          if ( (HANDLE)gpidLogon == PsGetThreadProcessId(Thread) )
            v18 |= 0x2000000u;
          if ( IsCurrentProcessDwm() )
            *(_DWORD *)(ThreadWin32Thread + 1208) |= 4u;
          *(_QWORD *)(ThreadWin32Thread + 340) = 0LL;
          *(_DWORD *)(ThreadWin32Thread + 488) = v18;
          *(_DWORD *)(ThreadWin32Thread + 1344) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1348) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1336) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1340) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1388) = 0;
          if ( (dword_1C01CB1CC & 0x80u) == 0 )
          {
            if ( !gspklGlobalActive )
            {
              *(_QWORD *)&v48 = &gspklGlobalActive;
              *((_QWORD *)&v48 + 1) = gspklBaseLayout;
              v74 = v48;
              HMAssignmentLock(&v74);
            }
            *(_QWORD *)&v48 = ThreadWin32Thread + 440;
            *((_QWORD *)&v48 + 1) = gspklGlobalActive;
            v75 = v48;
            v19 = &v75;
          }
          else
          {
            *(_QWORD *)&v48 = ThreadWin32Thread + 440;
            *((_QWORD *)&v48 + 1) = gspklBaseLayout;
            v73 = v48;
            v19 = &v73;
          }
          HMAssignmentLock(v19);
          *(_QWORD *)(ThreadWin32Thread + 448) = ThreadWin32Thread + 1032;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x800000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 488) |= 0x2000000u;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x400) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 1208) |= 0x20u;
          *(_QWORD *)(ThreadWin32Thread + 424) = CurrentProcessWin32Process;
          *(_QWORD *)(ThreadWin32Thread + 664) = *(_QWORD *)(CurrentProcessWin32Process + 328);
          *(_QWORD *)(CurrentProcessWin32Process + 328) = ThreadWin32Thread;
          ++*(_DWORD *)(CurrentProcessWin32Process + 392);
          v20 = v64;
          if ( v64 )
            v20[1].EnableBitMask = (PULONG)PsGetThreadId(*(PETHREAD *)ThreadWin32Thread);
          *(_QWORD *)(ThreadWin32Thread + 480) = (char *)v20 + 2048;
          LODWORD(v20[31].EnableBitMask) = *(_DWORD *)(ThreadWin32Thread + 340);
          *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 236LL) = 0;
          v21 = *(_QWORD *)(ThreadWin32Thread + 480);
          *(_QWORD *)(ThreadWin32Thread + 360) = v21 + 232;
          *(_DWORD *)(v21 + 240) = *(_DWORD *)(ThreadWin32Thread + 344);
          *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 480) + 244LL) = 0;
          *(_QWORD *)(ThreadWin32Thread + 368) = *(_QWORD *)(ThreadWin32Thread + 480) + 240LL;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x2000000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 488) |= 0x20000000u;
          if ( !*(_DWORD *)(ThreadWin32Thread + 632) )
          {
            if ( PsGetProcessPeb(Process) )
            {
              ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(Process);
              *(_DWORD *)(ThreadWin32Thread + 632) = RtlGetExpWinVer(ProcessSectionBaseAddress);
            }
            else
            {
              *(_DWORD *)(ThreadWin32Thread + 632) = 1536;
            }
          }
          if ( (int)IsSetManifestWinVerSupported() >= 0 )
            SetManifestWinVer();
          v23 = v18 & 0xC;
          if ( !v23 && (int)IsSetAppCompatFlagsSupported() >= 0 && (unsigned int)SetAppCompatFlags(ThreadWin32Thread) )
            *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x1000000u;
          v24 = (HANDLE *)(ThreadWin32Thread + 728);
          Event = ZwCreateEvent((PHANDLE)(ThreadWin32Thread + 728), 0x1F0003u, 0LL, SynchronizationEvent, 0);
          if ( Event >= 0 )
          {
            Event = ObReferenceObjectByHandle(*v24, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
            *(_QWORD *)(ThreadWin32Thread + 736) = Object;
            if ( Event < 0 )
            {
              if ( Event != -1073741816 )
                ObCloseHandle(*v24, 1);
            }
            else
            {
              Event = ProtectHandle(*v24, v26, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
            }
          }
          if ( Event < 0 )
          {
            *v24 = 0LL;
LABEL_182:
            if ( v46 )
              PopAndFreeW32ThreadLock(v76);
            if ( v51 )
              PopAndFreeAlwaysW32ThreadLock(v77);
            xxxDestroyThreadInfo();
            return (unsigned int)Event;
          }
          Event = ObDuplicateObject(Process, *v24, Process, ThreadWin32Thread + 1416, 0, 512, 2, 0);
          if ( Event < 0 )
          {
            *(_QWORD *)(ThreadWin32Thread + 1416) = 0LL;
            goto LABEL_182;
          }
          Event = InitializeThreadInfoIocp(Process, (void **)ThreadWin32Thread);
          if ( Event < 0 )
            goto LABEL_182;
          v28 = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x4000;
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x4000u;
          if ( !*(_DWORD *)(CurrentProcessWin32Process + 788) && v57 )
          {
            *(_DWORD *)(CurrentProcessWin32Process + 788) = 28;
            *(_DWORD *)(CurrentProcessWin32Process + 792) = v53;
            *(_DWORD *)(CurrentProcessWin32Process + 796) = v54;
            *(_DWORD *)(CurrentProcessWin32Process + 800) = v55;
            *(_DWORD *)(CurrentProcessWin32Process + 804) = v56;
            *(_DWORD *)(CurrentProcessWin32Process + 808) = v57;
            *(_WORD *)(CurrentProcessWin32Process + 812) = v58;
          }
          if ( !v28 )
          {
            if ( (v57 & 0x200) != 0 )
              v29 = v52[0];
            else
              v29 = (_WORD)v61 ? ParseReserved(v62, v27) : 0;
            *(_DWORD *)(CurrentProcessWin32Process + 692) = v29;
            if ( (v50[8] & 0x400) != 0 )
            {
              v30 = *((_QWORD *)v50 + 1);
              if ( ValidateHmonitor(v30) )
                *(_QWORD *)(CurrentProcessWin32Process + 696) = v30;
            }
          }
          v31 = AllocQueue(0LL, 0LL);
          v32 = (_DWORD *)v31;
          if ( !v31 )
          {
            Event = -1073741801;
            goto LABEL_182;
          }
          *(_QWORD *)(ThreadWin32Thread + 432) = v31;
          *(_QWORD *)(v31 + 96) = ThreadWin32Thread;
          *(_QWORD *)(v31 + 88) = ThreadWin32Thread;
          ApiSetEditionUpdateRawMouseMode(v31);
          ++v32[98];
          if ( Process == gpepCSRSS )
          {
            v32[107] = 0x2000;
            v33 = 0;
          }
          else
          {
            v32[107] = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 880LL);
            v33 = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 424) + 884LL);
          }
          v32[108] = v33;
          if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 0xC) != 0 || !grpWinStaList )
          {
            *(_DWORD *)(ThreadWin32Thread + 1208) |= 0x10u;
            if ( (int)IsxxxSetProcessWindowStationSupported() < 0 )
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x40010u;
          }
          else
          {
            v47 = 0LL;
            Event = IsxxxResolveDesktopSupported();
            if ( Event >= 0 )
              Event = xxxResolveDesktop(-1LL, v50 + 10, &v47, v50[8] & 0x40000000, &Handle);
            if ( Event < 0 )
            {
              if ( Event == -1073741205 )
              {
                if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
                UserSessionSwitchLeaveCrit();
                ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
                LeaveEnterCrit::~LeaveEnterCrit(v34);
              }
              else
              {
                CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
                if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                  McTemplateK0qq(
                    Microsoft_Windows_Win32kEnableBits,
                    &DesktopResolutionFailure,
                    v36,
                    CurrentProcessId,
                    Event);
                Event = -1073741502;
              }
              goto LABEL_182;
            }
            Event = IsxxxSetProcessWindowStationSupported();
            if ( Event >= 0 )
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v66);
              LOBYTE(v37) = 1;
              Event = xxxSetProcessWindowStation(v47, v37);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v66);
            }
            if ( Event < 0 )
            {
              CloseProtectedHandle(Handle);
              CloseProtectedHandle(v47);
              Handle = 0LL;
              v47 = 0LL;
              goto LABEL_182;
            }
            Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v67, 0LL);
            v38 = v67;
            v46 = (struct tagDESKTOP *)v67;
            if ( Event < 0 )
              goto LABEL_182;
            PushW32ThreadLock(v67, v76, CompositionObject::Release);
            if ( v38 )
              ObfReferenceObject(v38);
            ObfDereferenceObject(v38);
            v68 = 1;
            CurrentProcess = PsGetCurrentProcess(v39);
            v70 = v38;
            v71 = 0;
            v72 = 1;
            Event = IsMapDesktopSupported();
            if ( Event >= 0 )
              Event = MapDesktop(&v68);
            if ( Event < 0 )
              goto LABEL_182;
            if ( !*(_QWORD *)(CurrentProcessWin32Process + 400) && PsGetProcessId(Process) != (HANDLE)gpidLogon )
            {
              LockObjectAssignment(CurrentProcessWin32Process + 344, v38);
              *(_QWORD *)(CurrentProcessWin32Process + 400) = Handle;
            }
          }
          if ( !(unsigned int)InitClientInfo(ThreadWin32Thread) )
            goto LABEL_182;
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v49);
          Event = IszzzSetDesktopSupported();
          if ( Event >= 0 )
            Event = zzzSetDesktop(ThreadWin32Thread, v46, Handle);
          if ( Event < 0 )
          {
            UserAtomicCheck::Detach((UserAtomicCheck *)v49);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v49);
            goto LABEL_182;
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v49);
          if ( v46 == grpdeskRitInput )
          {
            JournallingQueue = 0LL;
            if ( (int)IsGetJournallingQueueSupported() >= 0 )
              JournallingQueue = GetJournallingQueue(ThreadWin32Thread);
            if ( JournallingQueue && JournallingQueue != *(_QWORD *)(ThreadWin32Thread + 432) )
            {
              if ( (int)IsDestroyThreadsMessagesSupported() >= 0 )
                DestroyThreadsMessages(*(_QWORD *)(ThreadWin32Thread + 432), ThreadWin32Thread);
              zzzDestroyQueue(*(_QWORD *)(ThreadWin32Thread + 432), ThreadWin32Thread);
              *(_QWORD *)(ThreadWin32Thread + 432) = JournallingQueue;
              ++*(_DWORD *)(JournallingQueue + 392);
            }
          }
          v41 = v50;
          if ( v50[8] < 0 )
          {
            if ( !v28 )
            {
              if ( !gpidLogon || PsGetProcessInheritedFromUniqueProcessId(Process) != gpidLogon )
              {
                v41[8] &= ~0x80000000;
                goto LABEL_141;
              }
              gppiScreenSaver = CurrentProcessWin32Process;
              gptSSCursor = *((_QWORD *)gpsi + 620);
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200000u;
              EtwTraceScreenSaverProcessEvent(1LL);
            }
            if ( (int)IsSetForegroundPrioritySupported() >= 0 )
              SetForegroundPriority(ThreadWin32Thread, 1LL);
            if ( !v28 )
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400000u;
            *(_DWORD *)(ThreadWin32Thread + 488) |= 0x2000000u;
          }
LABEL_141:
          if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 0xC) == 0 && !v28 )
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
              if ( !*(_QWORD *)(CurrentProcessWin32Process + 672) )
              {
                UserSetLastError(1003LL);
LABEL_148:
                Event = -1073741823;
                goto LABEL_182;
              }
            }
          }
          if ( (int)IsxxxUpdateInputHangInfoSupported((unsigned int)_InterlockedExchange(
                                                                      (volatile __int32 *)(*(_QWORD *)(ThreadWin32Thread + 448)
                                                                                         + 12LL),
                                                                      (MEMORY[0xFFFFF78000000320]
                                                                     * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)) >= 0 )
            xxxUpdateInputHangInfo(0LL, 1LL);
          SetUnavailableInputSource(ThreadWin32Thread + 1216);
          v43 = *(_QWORD *)(ThreadWin32Thread + 432);
          if ( v43 )
            SetUnavailableInputSource(v43 + 420);
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 488) |= 0x4000u;
          *(_DWORD *)(ThreadWin32Thread + 488) |= 0x1000000u;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x140) == 0
            && (gptiForeground && CurrentProcessWin32Process == *((_QWORD *)gptiForeground + 53)
             || CInputGlobals::GetPtiLastWoken(gpInputGlobals)
             && CurrentProcessWin32Process == *((_QWORD *)CInputGlobals::GetPtiLastWoken(gpInputGlobals) + 53)
             && (*(_DWORD *)(CurrentProcessWin32Process + 820) & 0x30) != 0x10) )
          {
            *(_DWORD *)(ThreadWin32Thread + 488) |= 0x20u;
          }
          if ( (*(_DWORD *)gpsi & 4) != 0 && (int)IsCreateInputContextSupported() >= 0 )
            CreateInputContext(0LL);
          if ( !v23 )
          {
            Event = IsxxxClientThreadSetupSupported();
            if ( Event >= 0 )
              Event = xxxClientThreadSetup();
            if ( Event < 0 )
              goto LABEL_182;
          }
          if ( !v28
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 1) == 0
            && (int)IsxxxPlayEventSoundSupported() >= 0 )
          {
            xxxPlayEventSound(7LL);
          }
          if ( v46 )
          {
            if ( (*((_DWORD *)v46 + 12) & 8) != 0 )
              goto LABEL_148;
            PopAndFreeW32ThreadLock(v76);
          }
          if ( v51 )
            PopAndFreeAlwaysW32ThreadLock(v77);
          v44 = *(_DWORD *)(ThreadWin32Thread + 1208);
          if ( (v44 & 1) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 1208) = v44 & 0xFFFFFFFE;
          return (unsigned int)Event;
        }
LABEL_32:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v15, v14);
        v16 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_33;
      }
    }
    if ( (v59 & 1) == 0 )
    {
LABEL_18:
      **v10 = 0;
      goto LABEL_19;
    }
LABEL_17:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v59, v9, ProcessPeb);
    v10 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_18;
  }
  return 3221225738LL;
}
