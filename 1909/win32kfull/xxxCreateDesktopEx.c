/*
 * XREFs of xxxCreateDesktopEx @ 0x1C007E33C
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C007BA58 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxConnectService @ 0x1C007C344 (xxxConnectService.c)
 *     NtUserCreateDesktopEx @ 0x1C007CA80 (NtUserCreateDesktopEx.c)
 *     xxxResolveDesktop @ 0x1C007D690 (xxxResolveDesktop.c)
 * Callees:
 *     _CloseDesktop @ 0x1C000CE08 (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x1C000D284 (CloseProtectedHandle.c)
 *     DwmAsyncDesktopCreate @ 0x1C000FBC0 (DwmAsyncDesktopCreate.c)
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 *     PushW32ThreadLock @ 0x1C001EF30 (PushW32ThreadLock.c)
 *     MapDesktop @ 0x1C0021C00 (MapDesktop.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     zzzSetDesktop @ 0x1C0029750 (zzzSetDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00446E0 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00614E8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxInheritWindowMonitor @ 0x1C0068FC8 (xxxInheritWindowMonitor.c)
 *     LinkWindow @ 0x1C006BF20 (LinkWindow.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006E63C (zzzEndDeferWinEventNotify.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C007BA58 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     OpenDesktopCompletion @ 0x1C007F088 (OpenDesktopCompletion.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     DwmAsyncDesktopFree @ 0x1C015F520 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C015F5CC (zzzDecomposeDesktop.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C01647DC (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0164800 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C01651E4 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01EAA74 (-CleanupDirtyDesktops@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(__int64 a1, unsigned int a2, __int64 a3, ACCESS_MASK a4, HANDLE *a5, int a6)
{
  int v6; // r11d
  __int64 Window; // r13
  __int64 *v9; // r12
  NTSTATUS v10; // eax
  int v11; // ebx
  int v12; // eax
  _QWORD *v13; // rsi
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  int v23; // esi
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v29; // si
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  char v38; // si
  __int64 *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  _QWORD *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rax
  char v48; // r12
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  UserAtomicCheck *v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 *v58; // r14
  __int64 v59; // rax
  int v60; // edx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  LeaveEnterCrit *v64; // rcx
  void *v65; // rcx
  ULONG v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  ULONG v70; // eax
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  ULONG v74; // eax
  __int64 v75; // rdx
  __int64 v76; // r8
  __int64 v77; // r9
  ULONG v78; // eax
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 **v82; // rax
  __int64 v83; // rbx
  void *v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r8
  _QWORD *v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // r8
  _QWORD *v95; // rbx
  __int64 v96; // r8
  void *v97; // rax
  HANDLE Handle; // [rsp+90h] [rbp-278h] BYREF
  int v99; // [rsp+98h] [rbp-270h] BYREF
  unsigned int v100; // [rsp+A0h] [rbp-268h]
  _BYTE v101[4]; // [rsp+A4h] [rbp-264h] BYREF
  int v102; // [rsp+A8h] [rbp-260h]
  PVOID Object; // [rsp+B0h] [rbp-258h] BYREF
  int v104; // [rsp+B8h] [rbp-250h]
  PVOID v105; // [rsp+C0h] [rbp-248h]
  __int64 *v106; // [rsp+C8h] [rbp-240h]
  __int64 v107; // [rsp+D0h] [rbp-238h]
  __int64 v108; // [rsp+D8h] [rbp-230h]
  union _LARGE_INTEGER Timeout; // [rsp+E0h] [rbp-228h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v110; // [rsp+F0h] [rbp-218h] BYREF
  _QWORD *v111; // [rsp+F8h] [rbp-210h]
  int v112[4]; // [rsp+100h] [rbp-208h] BYREF
  _BYTE v113[8]; // [rsp+110h] [rbp-1F8h] BYREF
  __int64 v114; // [rsp+118h] [rbp-1F0h]
  void *v115; // [rsp+120h] [rbp-1E8h]
  _BYTE v116[8]; // [rsp+128h] [rbp-1E0h] BYREF
  _BYTE v117[8]; // [rsp+130h] [rbp-1D8h] BYREF
  HWINSTA v118; // [rsp+138h] [rbp-1D0h]
  _BYTE v119[16]; // [rsp+140h] [rbp-1C8h] BYREF
  __int128 v120; // [rsp+150h] [rbp-1B8h]
  __int64 v121; // [rsp+160h] [rbp-1A8h] BYREF
  __int64 *v122; // [rsp+168h] [rbp-1A0h]
  __int64 v123; // [rsp+170h] [rbp-198h]
  __int64 v124; // [rsp+178h] [rbp-190h] BYREF
  __int64 v125; // [rsp+180h] [rbp-188h]
  __int64 v126; // [rsp+188h] [rbp-180h]
  __int64 v127; // [rsp+190h] [rbp-178h] BYREF
  __int64 *v128; // [rsp+198h] [rbp-170h]
  __int64 v129; // [rsp+1A0h] [rbp-168h]
  _QWORD v130[3]; // [rsp+1A8h] [rbp-160h] BYREF
  _DWORD v131[2]; // [rsp+1C0h] [rbp-148h] BYREF
  __int64 v132; // [rsp+1C8h] [rbp-140h]
  _QWORD *v133; // [rsp+1D0h] [rbp-138h]
  int v134; // [rsp+1D8h] [rbp-130h]
  int v135; // [rsp+1DCh] [rbp-12Ch]
  __int128 v136; // [rsp+1E0h] [rbp-128h]
  __int128 v137; // [rsp+1F0h] [rbp-118h]
  __int128 v138; // [rsp+200h] [rbp-108h]
  __int128 v139; // [rsp+210h] [rbp-F8h] BYREF
  __int128 v140; // [rsp+220h] [rbp-E8h] BYREF
  __int128 v141; // [rsp+230h] [rbp-D8h] BYREF
  __int128 v142; // [rsp+240h] [rbp-C8h] BYREF
  __int128 v143; // [rsp+250h] [rbp-B8h] BYREF
  __int64 v144[3]; // [rsp+268h] [rbp-A0h] BYREF
  __int64 v145[3]; // [rsp+280h] [rbp-88h] BYREF
  __int64 v146[3]; // [rsp+298h] [rbp-70h] BYREF
  __int128 v147; // [rsp+2B0h] [rbp-58h] BYREF
  __int64 v148; // [rsp+2C0h] [rbp-48h] BYREF
  __int64 v149; // [rsp+2D0h] [rbp-38h] BYREF
  char v150; // [rsp+318h] [rbp+10h]

  v150 = a2;
  v6 = a3;
  Handle = 0LL;
  v110 = 0LL;
  Window = 0LL;
  v106 = 0LL;
  v9 = 0LL;
  v124 = 0LL;
  v125 = 0LL;
  v126 = 0LL;
  v127 = 0LL;
  v128 = 0LL;
  v129 = 0LL;
  v121 = 0LL;
  v122 = 0LL;
  v123 = 0LL;
  v99 = 0;
  v102 = -1;
  memset(v130, 0, sizeof(v130));
  v104 = 0;
  v100 = 0;
  v118 = *(HWINSTA *)(a1 + 8);
  v110.HandleAttributes = gSessionId;
  v110.GrantedAccess = a4;
  LOBYTE(a3) = a6 == 0;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, v6, &v110, &Handle);
  v11 = v10;
  if ( v10 < 0 )
  {
    v66 = RtlNtStatusToDosError(v10);
    UserSetLastError(v66, v67, v68, v69);
    CleanupDirtyDesktops();
    goto LABEL_96;
  }
  if ( v10 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v70 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v70, v71, v72, v73);
      CloseProtectedHandle(Handle, 0);
LABEL_76:
      v11 = -1073741801;
      goto LABEL_96;
    }
    *a5 = Handle;
    v99 = 1;
  }
  v12 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v11 = v12;
  v13 = Object;
  v105 = Object;
  if ( v12 < 0 )
  {
    v74 = RtlNtStatusToDosError(v12);
    UserSetLastError(v74, v75, v76, v77);
    CloseProtectedHandle(Handle, 0);
    goto LABEL_96;
  }
  if ( v99 )
  {
    v11 = OpenDesktopCompletion(Object, Handle, a2);
    if ( v11 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      *a5 = 0LL;
    }
    ObfDereferenceObject(v13);
    return (unsigned int)v11;
  }
  v15 = *((_QWORD *)Object + 5);
  v108 = v15;
  v16 = *(_QWORD *)(v15 + 24);
  v111 = (_QWORD *)*((_QWORD *)Object + 1);
  v111[22] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, v150 & 1) )
  {
    CloseProtectedHandle(Handle, 0);
    ObfDereferenceObject(v13);
    goto LABEL_76;
  }
  v19 = gpepCSRSS;
  if ( gpepCSRSS )
  {
    v131[1] = 0;
    v131[0] = 1;
    v132 = gpepCSRSS;
    v133 = v13;
    v134 = 0;
    v135 = 1;
    v99 = MapDesktop((__int64)v131, v17);
    if ( v99 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      ObfDereferenceObject(v13);
      v78 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v78, v79, v80, v81);
      v11 = v99;
      goto LABEL_96;
    }
  }
  v107 = ReferenceDwmApiPort(v19, v17, v18);
  if ( v107 )
  {
    if ( (*(_DWORD *)(v15 + 32) & 0x200) != 0 )
    {
      v82 = (__int64 **)v13[1];
      v83 = **v82;
      v84 = (void *)ReferenceDwmApiPort(*v82, v20, v21);
      DwmAsyncDesktopCreate(v84, v83);
      zzzComposeDesktop((struct tagDESKTOP *)v13);
      v104 = 1;
      v15 = v108;
    }
    DereferenceDwmApiPort(v107);
  }
  v114 = *(_QWORD *)(gptiCurrent + 416LL);
  v108 = *(_QWORD *)(v114 + 336);
  v107 = *(_QWORD *)(gptiCurrent + 448LL);
  v115 = *(void **)(gptiCurrent + 584LL);
  *(_QWORD *)(gptiCurrent + 416LL) = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 416LL);
  PushW32ThreadLock((__int64)v13, v130, UserDereferenceObject);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v99);
  v23 = zzzSetDesktop(gptiCurrent, (__int64)v13, Handle);
  if ( v23 < 0 )
    goto LABEL_83;
  v100 = W32SetCurrentThreadDpiAwarenessContext(18LL, v22, v24);
  v25 = *(_DWORD *)(gptiCurrent + 480LL);
  v102 = v25 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 480LL) = v25 | 0x10000000;
  *(_OWORD *)v112 = *(_OWORD *)(*gpDispInfo + 24LL);
  v29 = 0;
  if ( PsGetCurrentProcessWin32Process(gpDispInfo, 0x10000000LL) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27, v26);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v29 = 1;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v144, 0LL);
  Window = xxxCreateWindowEx(
             0,
             32769LL,
             32769LL,
             0LL,
             -2113929216,
             v112[0],
             v112[1],
             v112[2] - v112[0],
             v112[3] - v112[1],
             0LL,
             (__int64 **)v144,
             hModuleWin,
             0LL,
             1u,
             0x30Au,
             v29,
             0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v144, v30, v31);
  if ( !Window )
    goto LABEL_82;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v124 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v124;
  v125 = Window;
  HMLockObject(Window);
  v38 = 0;
  if ( PsGetCurrentProcessWin32Process(v34, v33) )
  {
    v37 = PsGetCurrentProcessWin32Process(v36, v35);
    if ( (unsigned int)IsImmersiveAppRestricted(v37) )
      v38 = 1;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v145, 0LL);
  v39 = (__int64 *)xxxCreateWindowEx(
                     0,
                     (unsigned __int16)gatomMessage,
                     (unsigned __int16)gatomMessage,
                     0LL,
                     -2113929216,
                     0,
                     0,
                     0x64u,
                     0x64u,
                     0LL,
                     (__int64 **)v145,
                     hModuleWin,
                     0LL,
                     1u,
                     0x30Au,
                     v38,
                     0LL);
  v106 = v39;
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v145, v40, v41);
  if ( !v39 )
  {
LABEL_82:
    v23 = -1073741801;
LABEL_83:
    v54 = (UserAtomicCheck *)&v99;
    goto LABEL_84;
  }
  v42 = W32GetThreadWin32Thread(KeGetCurrentThread());
  v127 = *(_QWORD *)(v42 + 408);
  *(_QWORD *)(v42 + 408) = &v127;
  v128 = v39;
  HMLockObject(v39);
  *(_WORD *)(v39[5] + 42) = *(_WORD *)(v39[5] + 42) & 0xC000 | 0x29F;
  v43 = v111 + 3;
  *(_QWORD *)(*v111 + 8LL) = *(_QWORD *)(Window + 48);
  *(_QWORD *)&v136 = v43;
  *((_QWORD *)&v136 + 1) = Window;
  v139 = v136;
  HMAssignmentLock(&v139);
  SetOrClrWF(0LL, Window, 1799LL, 1LL);
  SetOrClrWF(1LL, Window, 1794LL, 1LL);
  if ( (*(_DWORD *)(v15 + 32) & 4) == 0 && !gspwndFullScreen )
  {
    *(_QWORD *)&v137 = &gspwndFullScreen;
    *((_QWORD *)&v137 + 1) = Window;
    v140 = v137;
    HMAssignmentLock(&v140);
  }
  v141 = *(_OWORD *)LockPointer(&v148, (__int64)(v39 + 13), *(_QWORD *)(v16 + 8));
  HMAssignmentLock(&v141);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v116);
  xxxInheritWindowMonitor((struct tagWND *)v39, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v116);
  LinkWindow((struct tagWND *)v39, 0LL, *(__int64 **)(v16 + 8));
  *(_QWORD *)&v120 = (char *)Object + 104;
  *((_QWORD *)&v120 + 1) = v39;
  v142 = v120;
  HMAssignmentLock(&v142);
  *(_QWORD *)(v39[5] + 64) = 0LL;
  HMAssignmentUnlock(v39 + 15);
  v143 = *(_OWORD *)LockPointer(&v149, Window + 104, *(_QWORD *)(v16 + 8));
  HMAssignmentLock(&v143);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v117);
  xxxInheritWindowMonitor((struct tagWND *)Window, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v117);
  LinkWindow((struct tagWND *)Window, 0LL, *(__int64 **)(v16 + 8));
  *(_QWORD *)(*(_QWORD *)(Window + 40) + 64LL) = 0LL;
  HMAssignmentUnlock(Window + 120);
  if ( (*(_DWORD *)(gpDispInfo + 132LL) & 1) == 0 )
  {
    v44 = *(_QWORD *)(Window + 40);
    *(_QWORD *)(v44 + 168) = *(_QWORD *)(gpDispInfo + 120LL);
  }
  if ( (*(_DWORD *)(v15 + 32) & 4) == 0 )
  {
    v48 = 0;
    if ( PsGetCurrentProcessWin32Process(v44, gpDispInfo) )
    {
      v47 = PsGetCurrentProcessWin32Process(v46, v45);
      if ( (unsigned int)IsImmersiveAppRestricted(v47) )
        v48 = 1;
    }
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v146, 0LL);
    v9 = (__int64 *)xxxCreateWindowEx(
                      136,
                      32774LL,
                      32774LL,
                      0LL,
                      -2139095040,
                      0,
                      0,
                      0x64u,
                      0x64u,
                      *(struct tagWND **)v120,
                      (__int64 **)v146,
                      hModuleWin,
                      0LL,
                      1u,
                      0x30Au,
                      v48,
                      0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v146, v49, v50);
    if ( v9 )
    {
      *(_QWORD *)&v138 = (char *)Object + 112;
      *((_QWORD *)&v138 + 1) = v9;
      v147 = v138;
      HMAssignmentLock(&v147);
      v51 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v121 = *(_QWORD *)(v51 + 408);
      *(_QWORD *)(v51 + 408) = &v121;
      v122 = v9;
      HMLockObject(v9);
      goto LABEL_35;
    }
    goto LABEL_82;
  }
LABEL_35:
  HMChangeOwnerThread(v111[3], *(_QWORD *)(v16 + 16));
  HMChangeOwnerThread(v39, *(_QWORD *)(v16 + 16));
  if ( (*(_DWORD *)(v15 + 32) & 4) == 0 )
    HMChangeOwnerThread(v9, *(_QWORD *)(v16 + 16));
  W32SetCurrentThreadDpiAwarenessContext(v100, v52, v53);
  v100 = 0;
  *(_QWORD *)(gptiCurrent + 416LL) = v114;
  *(_DWORD *)(gptiCurrent + 480LL) = v102 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
  v23 = zzzSetDesktop(gptiCurrent, v107, v115);
  v54 = (UserAtomicCheck *)&v99;
  if ( v23 < 0 )
    goto LABEL_84;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v99);
  zzzEndDeferWinEventNotify();
  if ( !*(_QWORD *)(v16 + 56) )
    goto LABEL_39;
  if ( (*(_DWORD *)v16 & 2) != 0 )
  {
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v113);
    v23 = zzzSetDesktop(*(struct tagTHREADINFO **)(v16 + 16), (__int64)Object, 0LL);
    v54 = (UserAtomicCheck *)v113;
    if ( v23 >= 0 )
    {
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v113);
      zzzEndDeferWinEventNotify();
      goto LABEL_63;
    }
LABEL_84:
    UserAtomicCheck::~UserAtomicCheck(v54);
    goto LABEL_98;
  }
  *(_QWORD *)(gptiRit + 608LL) = v15;
  *(_QWORD *)(*(_QWORD *)(v16 + 16) + 608LL) = v15;
LABEL_63:
  KeSetEvent(*(PRKEVENT *)(v16 + 56), 1, 0);
  if ( (*(_DWORD *)v16 & 2) == 0 )
  {
    if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v101);
    while ( !grpdeskRitInput )
    {
      if ( gpEventSwitchDesktop )
      {
        Timeout.QuadPart = -200000LL;
        KeWaitForSingleObject(gpEventSwitchDesktop, Executive, 0, 0, &Timeout);
      }
      else
      {
        UserSleep(20LL);
      }
    }
    LeaveEnterCrit::~LeaveEnterCrit(v64);
  }
  v65 = *(void **)(v16 + 56);
  if ( v65 )
  {
    ObfDereferenceObject(v65);
    *(_QWORD *)(v16 + 56) = 0LL;
  }
  v56 = gpsi;
  _InterlockedOr(gpsi, 0x800u);
LABEL_39:
  if ( v16 == gTermIO[0] )
    xxxSetWindowPos((struct tagWND *)Window, 1LL, 0LL, 0LL, 0, 0, 1115);
  if ( !v108 )
    UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 416LL) + 336LL);
  if ( !gspdeskDisconnect && Object == grpdeskLogon )
  {
    if ( (unsigned int)xxxCreateDisconnectDesktop(v118, (struct tagWINDOWSTATION *)v15) )
    {
      KeSetEvent(gpEventDiconnectDesktop, 1, 0);
      gdwHydraHint |= 0x40000u;
      goto LABEL_44;
    }
    if ( v9 )
      ThreadUnlock1(v62, v61, v63);
    ThreadUnlock1(v62, v61, v63);
    ThreadUnlock1(v86, v85, v87);
    v88 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(v88 + 16) = v130[0];
    ObfDereferenceObject(Object);
    CloseDesktop((unsigned __int64)Handle, 0);
    v11 = -1073741823;
LABEL_96:
    *a5 = 0LL;
    return (unsigned int)v11;
  }
LABEL_44:
  v58 = v106;
  while ( 1 )
  {
    if ( v9 )
      v9 = (__int64 *)ThreadUnlock1(v56, v55, v57);
    if ( v58 )
      v106 = (__int64 *)ThreadUnlock1(v56, v55, v57);
    if ( Window )
      Window = ThreadUnlock1(v56, v55, v57);
    v59 = W32GetThreadWin32Thread(KeGetCurrentThread());
    *(_QWORD *)(v59 + 16) = v130[0];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v60) = 4;
      WPP_RECORDER_SF_(
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v60,
        3,
        22,
        (__int64)&WPP_402c5f24833438052b5cb2c912b968aa_Traceguids);
    }
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v23 = -1073741801;
LABEL_98:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v119);
    if ( v100 )
      W32SetCurrentThreadDpiAwarenessContext(v100, v89, v90);
    if ( v9 )
    {
      xxxDestroyWindow(v9);
      HMAssignmentUnlock((char *)v105 + 112);
    }
    v58 = v106;
    if ( v106 )
    {
      xxxDestroyWindow(v106);
      HMAssignmentUnlock((char *)v105 + 104);
    }
    if ( Window )
    {
      xxxDestroyWindow((__int64 *)Window);
      v91 = v111 + 3;
      *(_QWORD *)(*v111 + 8LL) = 0LL;
      HMAssignmentUnlock(v91);
      HMAssignmentUnlock(&gspwndFullScreen);
    }
    *(_QWORD *)(gptiCurrent + 416LL) = v114;
    if ( v102 != -1 )
      *(_DWORD *)(gptiCurrent + 480LL) = v102 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v119);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v112);
    zzzSetDesktop(gptiCurrent, v107, v115);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v112);
    if ( v104 )
    {
      Timeout.QuadPart = ReferenceDwmApiPort(v93, v92, v94);
      if ( Timeout.QuadPart )
      {
        v95 = v105;
        zzzDecomposeDesktop((struct tagDESKTOP *)v105);
        v97 = (void *)ReferenceDwmApiPort(v95[1], *(_QWORD *)v95[1], v96);
        DwmAsyncDesktopFree(v97);
        ((void (__fastcall *)(_QWORD))DereferenceDwmApiPort)((union _LARGE_INTEGER)Timeout.QuadPart);
      }
    }
    CloseProtectedHandle(Handle, 0);
    Handle = 0LL;
    if ( !v108 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 416LL) + 336LL);
  }
  if ( v23 >= 0 )
    *((_DWORD *)v105 + 12) |= 0x10u;
  ObfDereferenceObject(v105);
  *a5 = Handle;
  return (unsigned int)v23;
}
