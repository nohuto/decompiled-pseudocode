/*
 * XREFs of xxxCreateThreadInfo @ 0x1C006F538
 * Callers:
 *     UserThreadCallout @ 0x1C0033E20 (UserThreadCallout.c)
 *     ?UserInitialize@@YAJXZ @ 0x1C00B23A4 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     Win32AllocPoolWithQuota @ 0x1C00192D0 (Win32AllocPoolWithQuota.c)
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00307FC (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C003574C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0035790 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     LockObjectAssignment @ 0x1C0035810 (LockObjectAssignment.c)
 *     AllocQueue @ 0x1C00359C0 (AllocQueue.c)
 *     ?GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0035E20 (-GetPtiLastWoken@CInputGlobals@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 *     ApiSetEditionUpdateRawMouseMode @ 0x1C003AAEC (ApiSetEditionUpdateRawMouseMode.c)
 *     CloseProtectedHandle @ 0x1C003C094 (CloseProtectedHandle.c)
 *     ValidateHmonitor @ 0x1C00597A0 (ValidateHmonitor.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     SetUnavailableInputSource @ 0x1C005ED00 (SetUnavailableInputSource.c)
 *     ?InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z @ 0x1C005F614 (-InitializeThreadInfoIocp@@YAJPEAU_EPROCESS@@PEAUtagTHREADINFO@@@Z.c)
 *     ProtectHandle @ 0x1C005F844 (ProtectHandle.c)
 *     InitClientInfo @ 0x1C0063284 (InitClientInfo.c)
 *     RtlGetExpWinVer @ 0x1C0064744 (RtlGetExpWinVer.c)
 *     zzzDestroyQueue @ 0x1C00703F0 (zzzDestroyQueue.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0075C20 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     memmove @ 0x1C0079B80 (memmove.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C00A7344 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     ?ParseReserved@@YAKPEBG0@Z @ 0x1C00A753C (-ParseReserved@@YAKPEBG0@Z.c)
 *     EtwTraceScreenSaverProcessEvent @ 0x1C00AC7A0 (EtwTraceScreenSaverProcessEvent.c)
 *     McTemplateK0 @ 0x1C00AD50C (McTemplateK0.c)
 *     McTemplateK0qq @ 0x1C00AECC8 (McTemplateK0qq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCreateThreadInfo(PETHREAD Thread)
{
  PEPROCESS ThreadProcess; // rsi
  struct _NT_TIB *Self; // rcx
  int v4; // r12d
  __int64 ThreadWin32Thread; // rdi
  ULONG64 v6; // rdx
  void *v7; // rsi
  ULONG64 v8; // rdx
  _BYTE **v9; // rax
  void *v10; // rax
  unsigned int *v11; // rdx
  __int64 v12; // rcx
  unsigned __int16 *v13; // r8
  ULONG64 v14; // rdx
  _BYTE **v15; // rax
  __int64 CurrentProcessWin32Process; // r14
  int v17; // r13d
  __int128 *v18; // rcx
  struct _NT_TIB *v19; // rsi
  __int64 v20; // rcx
  __int64 ProcessSectionBaseAddress; // rax
  int v22; // r13d
  HANDLE *v23; // r15
  signed int Event; // esi
  int v25; // edx
  const unsigned __int16 *v26; // rdx
  int v27; // r12d
  unsigned int v28; // eax
  __int64 v29; // r15
  __int64 v30; // rax
  _DWORD *v31; // r15
  int v32; // eax
  LeaveEnterCrit *v33; // rcx
  unsigned int CurrentProcessId; // eax
  const GUID *v35; // r8
  __int64 v36; // rdx
  PVOID v37; // r15
  __int64 v38; // rcx
  __int64 JournallingQueue; // r15
  int *v40; // r15
  __int64 ProcessWin32Process; // rax
  __int64 v42; // rcx
  int v43; // eax
  struct tagDESKTOP *v45; // [rsp+40h] [rbp-1A8h]
  HANDLE v46; // [rsp+48h] [rbp-1A0h] BYREF
  char v47[8]; // [rsp+50h] [rbp-198h] BYREF
  int *v48; // [rsp+58h] [rbp-190h]
  void *v49; // [rsp+60h] [rbp-188h]
  _QWORD v50[2]; // [rsp+70h] [rbp-178h] BYREF
  int v51; // [rsp+80h] [rbp-168h]
  int v52; // [rsp+84h] [rbp-164h]
  int v53; // [rsp+88h] [rbp-160h]
  int v54; // [rsp+8Ch] [rbp-15Ch]
  int v55; // [rsp+90h] [rbp-158h]
  int v56; // [rsp+94h] [rbp-154h]
  unsigned int v57; // [rsp+98h] [rbp-150h]
  void *v58; // [rsp+A0h] [rbp-148h]
  int v59; // [rsp+A8h] [rbp-140h]
  unsigned __int16 *v60; // [rsp+B0h] [rbp-138h]
  __int64 v61; // [rsp+C0h] [rbp-128h]
  _QWORD v62[2]; // [rsp+D0h] [rbp-118h] BYREF
  struct _NT_TIB *v63; // [rsp+E0h] [rbp-108h]
  PVOID Object; // [rsp+E8h] [rbp-100h] BYREF
  char v65[8]; // [rsp+F0h] [rbp-F8h] BYREF
  PVOID v66; // [rsp+F8h] [rbp-F0h] BYREF
  __int128 v67; // [rsp+100h] [rbp-E8h]
  __int128 v68; // [rsp+110h] [rbp-D8h]
  int v69; // [rsp+120h] [rbp-C8h] BYREF
  __int64 CurrentProcess; // [rsp+128h] [rbp-C0h]
  PVOID v71; // [rsp+130h] [rbp-B8h]
  int v72; // [rsp+138h] [rbp-B0h]
  int v73; // [rsp+13Ch] [rbp-ACh]
  __int128 v74; // [rsp+160h] [rbp-88h] BYREF
  __int128 v75; // [rsp+170h] [rbp-78h] BYREF
  _BYTE v76[24]; // [rsp+180h] [rbp-68h] BYREF
  _BYTE v77[80]; // [rsp+198h] [rbp-50h] BYREF
  int v78; // [rsp+1F8h] [rbp+10h]
  struct _EPROCESS *Process; // [rsp+200h] [rbp+18h]
  HANDLE Handle; // [rsp+208h] [rbp+20h] BYREF

  ThreadProcess = PsGetThreadProcess(Thread);
  Process = ThreadProcess;
  v45 = 0LL;
  Handle = 0LL;
  Self = KeGetPcr()->NtTib.Self;
  v63 = Self;
  v49 = 0LL;
  if ( ((unsigned __int16)Microsoft_Windows_Win32kEnableBits & 0x8000) != 0 )
    McTemplateK0(Self, &InitiateGuiThreadExecution, &W32kControlGuid);
  if ( !gbCleanedUpResources && PsGetCurrentProcessWin32Process(Self) )
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
    *(_QWORD *)(ThreadWin32Thread + 840) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 848) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 856) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1456) = 0LL;
    *(_QWORD *)(ThreadWin32Thread + 520) = ThreadWin32Thread + 512;
    *(_QWORD *)(ThreadWin32Thread + 512) = ThreadWin32Thread + 512;
    *(_QWORD *)(ThreadWin32Thread + 1192) = ThreadWin32Thread + 1184;
    *(_QWORD *)(ThreadWin32Thread + 1184) = ThreadWin32Thread + 1184;
    *(_QWORD *)(ThreadWin32Thread + 1080) = ThreadWin32Thread + 1072;
    *(_QWORD *)(ThreadWin32Thread + 1072) = ThreadWin32Thread + 1072;
    *(_DWORD *)(ThreadWin32Thread + 1088) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1120) = ThreadWin32Thread + 1112;
    *(_QWORD *)(ThreadWin32Thread + 1112) = ThreadWin32Thread + 1112;
    *(_BYTE *)(ThreadWin32Thread + 1216) = 0;
    *(_QWORD *)(ThreadWin32Thread + 1368) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 820) = 1;
    v58 = 0LL;
    v61 = *(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32);
    v48 = (int *)v50;
    v50[0] = *(_QWORD *)(v61 + 32);
    v50[1] = *(_QWORD *)(v61 + 40);
    v51 = *(_DWORD *)(v61 + 136);
    v52 = *(_DWORD *)(v61 + 140);
    v53 = *(_DWORD *)(v61 + 144);
    v54 = *(_DWORD *)(v61 + 148);
    v55 = *(_DWORD *)(v61 + 164);
    v56 = *(_DWORD *)(v61 + 168);
    v6 = v61 + 192;
    if ( v61 + 192 >= MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    v57 = *(_DWORD *)v6;
    v7 = *(void **)(v6 + 8);
    v58 = v7;
    if ( !(_WORD)v57 )
    {
      v58 = 0LL;
      goto LABEL_23;
    }
    if ( ((unsigned __int8)v7 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (ULONG64)v7 + (unsigned __int16)v57 + 2;
    v9 = (_BYTE **)MmUserProbeAddress;
    if ( v8 < MmUserProbeAddress && (unsigned __int16)v57 <= HIWORD(v57) )
    {
      if ( (v57 & 1) != 0 )
        goto LABEL_17;
      if ( v8 > (unsigned __int64)v7 )
      {
LABEL_19:
        v10 = (void *)Win32AllocPoolWithQuota((unsigned __int16)v57, 0x79747355u);
        v49 = v10;
        v58 = v10;
        if ( !v10 )
          ExRaiseStatus(-1073741801);
        PushW32ThreadLock(v10, v77, Win32FreePool);
        memmove(v58, v7, (unsigned __int16)v57);
LABEL_23:
        v11 = (unsigned int *)(v61 + 208);
        if ( v61 + 208 >= MmUserProbeAddress )
          v11 = (unsigned int *)MmUserProbeAddress;
        v12 = *v11;
        v78 = *v11;
        v59 = *v11;
        v13 = (unsigned __int16 *)*((_QWORD *)v11 + 1);
        v60 = v13;
        if ( ((unsigned __int8)v13 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v14 = (ULONG64)v13 + (unsigned __int16)v12 + 2;
        v15 = (_BYTE **)MmUserProbeAddress;
        if ( v14 < MmUserProbeAddress && (unsigned __int16)v12 <= HIWORD(v78) )
        {
          if ( (v12 & 1) != 0 )
            goto LABEL_32;
          if ( v14 > (unsigned __int64)v13 )
            goto LABEL_34;
        }
        if ( (v12 & 1) == 0 )
        {
LABEL_33:
          **v15 = 0;
LABEL_34:
          CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
          v17 = v4 | 0x100;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x80) == 0 )
            v17 = v4;
          if ( (HANDLE)gpidLogon == PsGetThreadProcessId(Thread) )
            v17 |= 0x2000000u;
          if ( IsCurrentProcessDwm() )
            *(_DWORD *)(ThreadWin32Thread + 1200) |= 4u;
          *(_QWORD *)(ThreadWin32Thread + 340) = 0LL;
          *(_DWORD *)(ThreadWin32Thread + 480) = v17;
          *(_DWORD *)(ThreadWin32Thread + 1352) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1356) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1344) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1348) = -1;
          *(_DWORD *)(ThreadWin32Thread + 1396) = 0;
          if ( (dword_1C019F2F4 & 0x80u) == 0 )
          {
            if ( !gspklGlobalActive )
            {
              v62[0] = &gspklGlobalActive;
              v62[1] = gspklBaseLayout;
              HMAssignmentLock((__int64)v62);
            }
            *(_QWORD *)&v68 = ThreadWin32Thread + 432;
            *((_QWORD *)&v68 + 1) = gspklGlobalActive;
            v75 = v68;
            v18 = &v75;
          }
          else
          {
            *(_QWORD *)&v67 = ThreadWin32Thread + 432;
            *((_QWORD *)&v67 + 1) = gspklBaseLayout;
            v74 = v67;
            v18 = &v74;
          }
          HMAssignmentLock((__int64)v18);
          *(_QWORD *)(ThreadWin32Thread + 440) = ThreadWin32Thread + 1024;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x800000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 480) |= 0x2000000u;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x400) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 1200) |= 0x20u;
          *(_QWORD *)(ThreadWin32Thread + 416) = CurrentProcessWin32Process;
          *(_QWORD *)(ThreadWin32Thread + 656) = *(_QWORD *)(CurrentProcessWin32Process + 320);
          *(_QWORD *)(CurrentProcessWin32Process + 320) = ThreadWin32Thread;
          ++*(_DWORD *)(CurrentProcessWin32Process + 384);
          v19 = v63;
          if ( v63 )
            v19[2].StackBase = PsGetThreadId(*(PETHREAD *)ThreadWin32Thread);
          *(_QWORD *)(ThreadWin32Thread + 472) = (char *)v19 + 2048;
          LODWORD(v19[40].ArbitraryUserPointer) = *(_DWORD *)(ThreadWin32Thread + 340);
          *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 236LL) = 0;
          v20 = *(_QWORD *)(ThreadWin32Thread + 472);
          *(_QWORD *)(ThreadWin32Thread + 360) = v20 + 232;
          *(_DWORD *)(v20 + 240) = *(_DWORD *)(ThreadWin32Thread + 344);
          *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 472) + 244LL) = 0;
          *(_QWORD *)(ThreadWin32Thread + 368) = *(_QWORD *)(ThreadWin32Thread + 472) + 240LL;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x2000000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 480) |= 0x20000000u;
          if ( !*(_DWORD *)(ThreadWin32Thread + 624) )
          {
            if ( PsGetProcessPeb(Process) )
            {
              ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(Process);
              *(_DWORD *)(ThreadWin32Thread + 624) = RtlGetExpWinVer(ProcessSectionBaseAddress);
            }
            else
            {
              *(_DWORD *)(ThreadWin32Thread + 624) = 1536;
            }
          }
          if ( (int)IsSetManifestWinVerSupported() >= 0 )
            SetManifestWinVer();
          v22 = v17 & 0xC;
          if ( !v22 && (int)IsSetAppCompatFlagsSupported() >= 0 && (unsigned int)SetAppCompatFlags(ThreadWin32Thread) )
            *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x1000000u;
          v23 = (HANDLE *)(ThreadWin32Thread + 712);
          Event = ZwCreateEvent((PHANDLE)(ThreadWin32Thread + 712), 0x1F0003u, 0LL, SynchronizationEvent, 0);
          if ( Event >= 0 )
          {
            Event = ObReferenceObjectByHandle(*v23, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
            *(_QWORD *)(ThreadWin32Thread + 720) = Object;
            if ( Event < 0 )
            {
              if ( Event != -1073741816 )
                ObCloseHandle(*v23, 1);
            }
            else
            {
              Event = ProtectHandle(*v23, v25, (struct _OBJECT_TYPE *)ExEventObjectType, 1);
            }
          }
          if ( Event < 0 )
          {
            *v23 = 0LL;
LABEL_182:
            if ( v45 )
              PopAndFreeW32ThreadLock(v76);
            if ( v49 )
              PopAndFreeAlwaysW32ThreadLock(v77);
            xxxDestroyThreadInfo();
            return (unsigned int)Event;
          }
          Event = ObDuplicateObject(Process, *v23, Process, ThreadWin32Thread + 1424, 0, 512, 2, 0);
          if ( Event < 0 )
          {
            *(_QWORD *)(ThreadWin32Thread + 1424) = 0LL;
            goto LABEL_182;
          }
          Event = InitializeThreadInfoIocp(Process, (void **)ThreadWin32Thread);
          if ( Event < 0 )
            goto LABEL_182;
          v27 = *(_DWORD *)(CurrentProcessWin32Process + 12) & 0x4000;
          *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x4000u;
          if ( !*(_DWORD *)(CurrentProcessWin32Process + 780) && v55 )
          {
            *(_DWORD *)(CurrentProcessWin32Process + 780) = 28;
            *(_DWORD *)(CurrentProcessWin32Process + 784) = v51;
            *(_DWORD *)(CurrentProcessWin32Process + 788) = v52;
            *(_DWORD *)(CurrentProcessWin32Process + 792) = v53;
            *(_DWORD *)(CurrentProcessWin32Process + 796) = v54;
            *(_DWORD *)(CurrentProcessWin32Process + 800) = v55;
            *(_WORD *)(CurrentProcessWin32Process + 804) = v56;
          }
          if ( !v27 )
          {
            if ( (v55 & 0x200) != 0 )
              v28 = v50[0];
            else
              v28 = (_WORD)v59 ? ParseReserved(v60, v26) : 0;
            *(_DWORD *)(CurrentProcessWin32Process + 684) = v28;
            if ( (v48[8] & 0x400) != 0 )
            {
              v29 = *((_QWORD *)v48 + 1);
              if ( ValidateHmonitor(v29) )
                *(_QWORD *)(CurrentProcessWin32Process + 688) = v29;
            }
          }
          v30 = AllocQueue(0LL, 0LL);
          v31 = (_DWORD *)v30;
          if ( !v30 )
          {
            Event = -1073741801;
            goto LABEL_182;
          }
          *(_QWORD *)(ThreadWin32Thread + 424) = v30;
          *(_QWORD *)(v30 + 96) = ThreadWin32Thread;
          *(_QWORD *)(v30 + 88) = ThreadWin32Thread;
          ApiSetEditionUpdateRawMouseMode(v30);
          ++v31[98];
          if ( Process == gpepCSRSS )
          {
            v31[107] = 0x2000;
            v32 = 0;
          }
          else
          {
            v31[107] = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 872LL);
            v32 = *(_DWORD *)(*(_QWORD *)(ThreadWin32Thread + 416) + 876LL);
          }
          v31[108] = v32;
          if ( (*(_DWORD *)(ThreadWin32Thread + 480) & 0xC) != 0 || !grpWinStaList )
          {
            *(_DWORD *)(ThreadWin32Thread + 1200) |= 0x10u;
            if ( (int)IsxxxSetProcessWindowStationSupported() < 0 )
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x40010u;
          }
          else
          {
            v46 = 0LL;
            Event = IsxxxResolveDesktopSupported();
            if ( Event >= 0 )
              Event = xxxResolveDesktop(-1LL, v48 + 10, &v46, v48[8] & 0x40000000, &Handle);
            if ( Event < 0 )
            {
              if ( Event == -1073741205 )
              {
                if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
                  KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
                UserSessionSwitchLeaveCrit((unsigned int)gdwInAtomicOperation);
                ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741205);
                LeaveEnterCrit::~LeaveEnterCrit(v33);
              }
              else
              {
                CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
                if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 1) != 0 )
                  McTemplateK0qq(
                    Microsoft_Windows_Win32kEnableBits,
                    &DesktopResolutionFailure,
                    v35,
                    CurrentProcessId,
                    Event);
                Event = -1073741502;
              }
              goto LABEL_182;
            }
            Event = IsxxxSetProcessWindowStationSupported();
            if ( Event >= 0 )
            {
              UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v65);
              LOBYTE(v36) = 1;
              Event = xxxSetProcessWindowStation(v46, v36);
              UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v65);
            }
            if ( Event < 0 )
            {
              CloseProtectedHandle(Handle);
              CloseProtectedHandle(v46);
              Handle = 0LL;
              v46 = 0LL;
              goto LABEL_182;
            }
            Event = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &v66, 0LL);
            v37 = v66;
            v45 = (struct tagDESKTOP *)v66;
            if ( Event < 0 )
              goto LABEL_182;
            PushW32ThreadLock(v66, v76, CompositionObject::Release);
            if ( v37 )
              ObfReferenceObject(v37);
            ObfDereferenceObject(v37);
            v69 = 1;
            CurrentProcess = PsGetCurrentProcess(v38);
            v71 = v37;
            v72 = 0;
            v73 = 1;
            Event = IsMapDesktopSupported();
            if ( Event >= 0 )
              Event = MapDesktop(&v69);
            if ( Event < 0 )
              goto LABEL_182;
            if ( !*(_QWORD *)(CurrentProcessWin32Process + 392) && PsGetProcessId(Process) != (HANDLE)gpidLogon )
            {
              LockObjectAssignment((void **)(CurrentProcessWin32Process + 336), v37);
              *(_QWORD *)(CurrentProcessWin32Process + 392) = Handle;
            }
          }
          if ( !(unsigned int)InitClientInfo(ThreadWin32Thread) )
            goto LABEL_182;
          UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v47);
          Event = IszzzSetDesktopSupported();
          if ( Event >= 0 )
            Event = zzzSetDesktop(ThreadWin32Thread, v45, Handle);
          if ( Event < 0 )
          {
            UserAtomicCheck::Detach((UserAtomicCheck *)v47);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v47);
            goto LABEL_182;
          }
          UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v47);
          if ( v45 == grpdeskRitInput )
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
              ++*(_DWORD *)(JournallingQueue + 392);
            }
          }
          v40 = v48;
          if ( v48[8] < 0 )
          {
            if ( !v27 )
            {
              if ( !gpidLogon || PsGetProcessInheritedFromUniqueProcessId(Process) != gpidLogon )
              {
                v40[8] &= ~0x80000000;
                goto LABEL_141;
              }
              gppiScreenSaver = CurrentProcessWin32Process;
              gptSSCursor = *((_QWORD *)gpsi + 620);
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200000u;
              EtwTraceScreenSaverProcessEvent(1LL);
            }
            if ( (int)IsSetForegroundPrioritySupported() >= 0 )
              SetForegroundPriority(ThreadWin32Thread, 1LL);
            if ( !v27 )
              *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x400000u;
            *(_DWORD *)(ThreadWin32Thread + 480) |= 0x2000000u;
          }
LABEL_141:
          if ( (*(_DWORD *)(ThreadWin32Thread + 480) & 0xC) == 0 && !v27 )
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
                UserSetLastError(1003);
LABEL_148:
                Event = -1073741823;
                goto LABEL_182;
              }
            }
          }
          if ( (int)IsxxxUpdateInputHangInfoSupported((unsigned int)_InterlockedExchange(
                                                                      (volatile __int32 *)(*(_QWORD *)(ThreadWin32Thread + 440)
                                                                                         + 12LL),
                                                                      (MEMORY[0xFFFFF78000000320]
                                                                     * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)) >= 0 )
            xxxUpdateInputHangInfo(0LL, 1LL);
          SetUnavailableInputSource((_DWORD *)(ThreadWin32Thread + 1208));
          v42 = *(_QWORD *)(ThreadWin32Thread + 424);
          if ( v42 )
            SetUnavailableInputSource((_DWORD *)(v42 + 420));
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x20000) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 480) |= 0x4000u;
          *(_DWORD *)(ThreadWin32Thread + 480) |= 0x1000000u;
          if ( (*(_DWORD *)(CurrentProcessWin32Process + 12) & 0x140) == 0
            && (gptiForeground && CurrentProcessWin32Process == *((_QWORD *)gptiForeground + 52)
             || CInputGlobals::GetPtiLastWoken(gpInputGlobals)
             && CurrentProcessWin32Process == *((_QWORD *)CInputGlobals::GetPtiLastWoken(gpInputGlobals) + 52)
             && (*(_DWORD *)(CurrentProcessWin32Process + 812) & 0x30) != 0x10) )
          {
            *(_DWORD *)(ThreadWin32Thread + 480) |= 0x20u;
          }
          if ( (*(_DWORD *)gpsi & 4) != 0 && (int)IsCreateInputContextSupported() >= 0 )
            CreateInputContext(0LL);
          if ( !v22 )
          {
            Event = IsxxxClientThreadSetupSupported();
            if ( Event >= 0 )
              Event = xxxClientThreadSetup();
            if ( Event < 0 )
              goto LABEL_182;
          }
          if ( !v27
            && (*(_DWORD *)(CurrentProcessWin32Process + 12) & 1) == 0
            && (int)IsxxxPlayEventSoundSupported() >= 0 )
          {
            xxxPlayEventSound(7LL);
          }
          if ( v45 )
          {
            if ( (*((_DWORD *)v45 + 12) & 8) != 0 )
              goto LABEL_148;
            PopAndFreeW32ThreadLock(v76);
          }
          if ( v49 )
            PopAndFreeAlwaysW32ThreadLock(v77);
          v43 = *(_DWORD *)(ThreadWin32Thread + 1200);
          if ( (v43 & 1) != 0 )
            *(_DWORD *)(ThreadWin32Thread + 1200) = v43 & 0xFFFFFFFE;
          return (unsigned int)Event;
        }
LABEL_32:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v14);
        v15 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_33;
      }
    }
    if ( (v57 & 1) == 0 )
    {
LABEL_18:
      **v9 = 0;
      goto LABEL_19;
    }
LABEL_17:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v57, v8);
    v9 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_18;
  }
  return 3221225738LL;
}
