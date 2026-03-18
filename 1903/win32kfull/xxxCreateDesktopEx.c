/*
 * XREFs of xxxCreateDesktopEx @ 0x1C00DE64C
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00DBD68 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     xxxConnectService @ 0x1C00DC654 (xxxConnectService.c)
 *     NtUserCreateDesktopEx @ 0x1C00DCD90 (NtUserCreateDesktopEx.c)
 *     xxxResolveDesktop @ 0x1C00DD9A0 (xxxResolveDesktop.c)
 * Callees:
 *     _CloseDesktop @ 0x1C000D998 (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x1C000DE14 (CloseProtectedHandle.c)
 *     MapDesktop @ 0x1C0019DE0 (MapDesktop.c)
 *     PushW32ThreadLock @ 0x1C001F0A0 (PushW32ThreadLock.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     zzzSetDesktop @ 0x1C00232E0 (zzzSetDesktop.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     zzzComposeDesktop @ 0x1C00836A0 (zzzComposeDesktop.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C00A3910 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00BFE08 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     LinkWindow @ 0x1C00CA850 (LinkWindow.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00CCF6C (zzzEndDeferWinEventNotify.c)
 *     DwmAsyncDesktopCreate @ 0x1C00D9C84 (DwmAsyncDesktopCreate.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00DBD68 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     OpenDesktopCompletion @ 0x1C00DF398 (OpenDesktopCompletion.c)
 *     DwmAsyncDesktopFree @ 0x1C015E400 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C015E4AC (zzzDecomposeDesktop.c)
 *     ??0LeaveEnterCrit@@QEAA@XZ @ 0x1C016380C (--0LeaveEnterCrit@@QEAA@XZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1C0163830 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0164214 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01EABF4 (-CleanupDirtyDesktops@@YAXXZ.c)
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
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // rdx
  int v25; // esi
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 CurrentProcessWin32Process; // rax
  char v32; // si
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  char v45; // si
  __int64 *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  _QWORD *v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  char v59; // r12
  __int64 v60; // rdx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdx
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r9
  UserAtomicCheck *v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 *v76; // r14
  __int64 v77; // rax
  int v78; // edx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  LeaveEnterCrit *v82; // rcx
  void *v83; // rcx
  ULONG v84; // eax
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  ULONG v88; // eax
  __int64 v89; // rdx
  __int64 v90; // r8
  __int64 v91; // r9
  ULONG v92; // eax
  __int64 v93; // rdx
  __int64 v94; // r8
  __int64 v95; // r9
  ULONG v96; // eax
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // r9
  __int64 **v100; // rax
  __int64 v101; // rbx
  void *v102; // rax
  __int64 v103; // r9
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  __int64 v107; // rdx
  __int64 v108; // r8
  __int64 v109; // r9
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  _QWORD *v114; // rcx
  __int64 v115; // r9
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  _QWORD *v119; // rbx
  __int64 v120; // r8
  void *v121; // rax
  HANDLE Handle; // [rsp+90h] [rbp-278h] BYREF
  int v123; // [rsp+98h] [rbp-270h] BYREF
  unsigned int v124; // [rsp+A0h] [rbp-268h]
  _BYTE v125[4]; // [rsp+A4h] [rbp-264h] BYREF
  int v126; // [rsp+A8h] [rbp-260h]
  PVOID Object; // [rsp+B0h] [rbp-258h] BYREF
  int v128; // [rsp+B8h] [rbp-250h]
  PVOID v129; // [rsp+C0h] [rbp-248h]
  __int64 *v130; // [rsp+C8h] [rbp-240h]
  __int64 v131; // [rsp+D0h] [rbp-238h]
  __int64 v132; // [rsp+D8h] [rbp-230h]
  union _LARGE_INTEGER Timeout; // [rsp+E0h] [rbp-228h] BYREF
  struct _OBJECT_HANDLE_INFORMATION v134; // [rsp+F0h] [rbp-218h] BYREF
  _QWORD *v135; // [rsp+F8h] [rbp-210h]
  int v136[4]; // [rsp+100h] [rbp-208h] BYREF
  _BYTE v137[8]; // [rsp+110h] [rbp-1F8h] BYREF
  __int64 v138; // [rsp+118h] [rbp-1F0h]
  void *v139; // [rsp+120h] [rbp-1E8h]
  _BYTE v140[8]; // [rsp+128h] [rbp-1E0h] BYREF
  _BYTE v141[8]; // [rsp+130h] [rbp-1D8h] BYREF
  HWINSTA v142; // [rsp+138h] [rbp-1D0h]
  _BYTE v143[16]; // [rsp+140h] [rbp-1C8h] BYREF
  __int128 v144; // [rsp+150h] [rbp-1B8h]
  __int64 v145; // [rsp+160h] [rbp-1A8h] BYREF
  __int64 *v146; // [rsp+168h] [rbp-1A0h]
  __int64 v147; // [rsp+170h] [rbp-198h]
  __int64 v148; // [rsp+178h] [rbp-190h] BYREF
  __int64 v149; // [rsp+180h] [rbp-188h]
  __int64 v150; // [rsp+188h] [rbp-180h]
  __int64 v151; // [rsp+190h] [rbp-178h] BYREF
  __int64 *v152; // [rsp+198h] [rbp-170h]
  __int64 v153; // [rsp+1A0h] [rbp-168h]
  _QWORD v154[3]; // [rsp+1A8h] [rbp-160h] BYREF
  _DWORD v155[2]; // [rsp+1C0h] [rbp-148h] BYREF
  __int64 v156; // [rsp+1C8h] [rbp-140h]
  _QWORD *v157; // [rsp+1D0h] [rbp-138h]
  int v158; // [rsp+1D8h] [rbp-130h]
  int v159; // [rsp+1DCh] [rbp-12Ch]
  __int128 v160; // [rsp+1E0h] [rbp-128h]
  __int128 v161; // [rsp+1F0h] [rbp-118h]
  __int128 v162; // [rsp+200h] [rbp-108h]
  __int128 v163; // [rsp+210h] [rbp-F8h] BYREF
  __int128 v164; // [rsp+220h] [rbp-E8h] BYREF
  __int128 v165; // [rsp+230h] [rbp-D8h] BYREF
  __int128 v166; // [rsp+240h] [rbp-C8h] BYREF
  __int128 v167; // [rsp+250h] [rbp-B8h] BYREF
  __int64 v168[3]; // [rsp+268h] [rbp-A0h] BYREF
  __int64 v169[3]; // [rsp+280h] [rbp-88h] BYREF
  __int64 v170[3]; // [rsp+298h] [rbp-70h] BYREF
  __int128 v171; // [rsp+2B0h] [rbp-58h] BYREF
  __int64 v172; // [rsp+2C0h] [rbp-48h] BYREF
  __int64 v173; // [rsp+2D0h] [rbp-38h] BYREF
  char v174; // [rsp+318h] [rbp+10h]

  v174 = a2;
  v6 = a3;
  Handle = 0LL;
  v134 = 0LL;
  Window = 0LL;
  v130 = 0LL;
  v9 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  v151 = 0LL;
  v152 = 0LL;
  v153 = 0LL;
  v145 = 0LL;
  v146 = 0LL;
  v147 = 0LL;
  v123 = 0;
  v126 = -1;
  memset(v154, 0, sizeof(v154));
  v128 = 0;
  v124 = 0;
  v142 = *(HWINSTA *)(a1 + 8);
  v134.HandleAttributes = gSessionId;
  v134.GrantedAccess = a4;
  LOBYTE(a3) = a6 == 0;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, v6, &v134, &Handle);
  v11 = v10;
  if ( v10 < 0 )
  {
    v84 = RtlNtStatusToDosError(v10);
    UserSetLastError(v84, v85, v86, v87);
    CleanupDirtyDesktops();
    goto LABEL_96;
  }
  if ( v10 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v88 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v88, v89, v90, v91);
      CloseProtectedHandle(Handle, 0);
LABEL_76:
      v11 = -1073741801;
      goto LABEL_96;
    }
    *a5 = Handle;
    v123 = 1;
  }
  v12 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v11 = v12;
  v13 = Object;
  v129 = Object;
  if ( v12 < 0 )
  {
    v92 = RtlNtStatusToDosError(v12);
    UserSetLastError(v92, v93, v94, v95);
    CloseProtectedHandle(Handle, 0);
    goto LABEL_96;
  }
  if ( v123 )
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
  v132 = v15;
  v16 = *(_QWORD *)(v15 + 24);
  v135 = (_QWORD *)*((_QWORD *)Object + 1);
  v135[22] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, v174 & 1) )
  {
    CloseProtectedHandle(Handle, 0);
    ObfDereferenceObject(v13);
    goto LABEL_76;
  }
  v19 = gpepCSRSS;
  if ( gpepCSRSS )
  {
    v155[1] = 0;
    v155[0] = 1;
    v156 = gpepCSRSS;
    v157 = v13;
    v158 = 0;
    v159 = 1;
    v123 = MapDesktop((__int64)v155, v17);
    if ( v123 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      ObfDereferenceObject(v13);
      v96 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v96, v97, v98, v99);
      v11 = v123;
      goto LABEL_96;
    }
  }
  v131 = ReferenceDwmApiPort(v19, v17, v18);
  if ( v131 )
  {
    if ( (*(_DWORD *)(v15 + 32) & 0x200) != 0 )
    {
      v100 = (__int64 **)v13[1];
      v101 = **v100;
      v102 = (void *)ReferenceDwmApiPort(*v100, v20, v21);
      DwmAsyncDesktopCreate(v102, v101);
      zzzComposeDesktop((struct tagDESKTOP *)v13);
      v128 = 1;
      v15 = v132;
    }
    DereferenceDwmApiPort(v131);
  }
  v138 = *(_QWORD *)(gptiCurrent + 416LL);
  v132 = *(_QWORD *)(v138 + 336);
  v131 = *(_QWORD *)(gptiCurrent + 448LL);
  v139 = *(void **)(gptiCurrent + 584LL);
  *(_QWORD *)(gptiCurrent + 416LL) = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 416LL);
  PushW32ThreadLock((__int64)v13, v154, UserDereferenceObject, v22);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v123);
  v25 = zzzSetDesktop(gptiCurrent, (__int64)v13, Handle, v23);
  if ( v25 < 0 )
    goto LABEL_83;
  v124 = W32SetCurrentThreadDpiAwarenessContext(18LL, v24, v26, v27);
  v28 = *(_DWORD *)(gptiCurrent + 480LL);
  v126 = v28 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 480LL) = v28 | 0x10000000;
  *(_OWORD *)v136 = *(_OWORD *)(*gpDispInfo + 24LL);
  v32 = 0;
  if ( PsGetCurrentProcessWin32Process(gpDispInfo, 0x10000000LL) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v30, v29);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v32 = 1;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v168, 0LL);
  Window = xxxCreateWindowEx(
             0,
             32769LL,
             32769LL,
             0LL,
             -2113929216,
             v136[0],
             v136[1],
             v136[2] - v136[0],
             v136[3] - v136[1],
             0LL,
             (__int64 **)v168,
             hModuleWin,
             0LL,
             1u,
             0x30Au,
             v32,
             0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v168, v33, v34, v35);
  if ( !Window )
    goto LABEL_82;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v36, v37, v38);
  v148 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v148;
  v149 = Window;
  HMLockObject(Window);
  v45 = 0;
  if ( PsGetCurrentProcessWin32Process(v41, v40) )
  {
    v44 = PsGetCurrentProcessWin32Process(v43, v42);
    if ( (unsigned int)IsImmersiveAppRestricted(v44) )
      v45 = 1;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v169, 0LL);
  v46 = (__int64 *)xxxCreateWindowEx(
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
                     (__int64 **)v169,
                     hModuleWin,
                     0LL,
                     1u,
                     0x30Au,
                     v45,
                     0LL);
  v130 = v46;
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v169, v47, v48, v49);
  if ( !v46 )
  {
LABEL_82:
    v25 = -1073741801;
LABEL_83:
    v71 = (UserAtomicCheck *)&v123;
    goto LABEL_84;
  }
  v53 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50, v51, v52);
  v151 = *(_QWORD *)(v53 + 408);
  *(_QWORD *)(v53 + 408) = &v151;
  v152 = v46;
  HMLockObject(v46);
  *(_WORD *)(v46[5] + 42) = *(_WORD *)(v46[5] + 42) & 0xC000 | 0x29F;
  v54 = v135 + 3;
  *(_QWORD *)(*v135 + 8LL) = *(_QWORD *)(Window + 48);
  *(_QWORD *)&v160 = v54;
  *((_QWORD *)&v160 + 1) = Window;
  v163 = v160;
  HMAssignmentLock(&v163);
  SetOrClrWF(0, Window, 0x707u, 1);
  SetOrClrWF(1, Window, 0x702u, 1);
  if ( (*(_DWORD *)(v15 + 32) & 4) == 0 && !gspwndFullScreen )
  {
    *(_QWORD *)&v161 = &gspwndFullScreen;
    *((_QWORD *)&v161 + 1) = Window;
    v164 = v161;
    HMAssignmentLock(&v164);
  }
  v165 = *(_OWORD *)LockPointer(&v172, (__int64)(v46 + 13), *(_QWORD *)(v16 + 8));
  HMAssignmentLock(&v165);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v140);
  xxxInheritWindowMonitor((struct tagWND *)v46, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v140);
  LinkWindow((struct tagWND *)v46, 0LL, *(__int64 **)(v16 + 8));
  *(_QWORD *)&v144 = (char *)Object + 104;
  *((_QWORD *)&v144 + 1) = v46;
  v166 = v144;
  HMAssignmentLock(&v166);
  *(_QWORD *)(v46[5] + 64) = 0LL;
  HMAssignmentUnlock(v46 + 15);
  v167 = *(_OWORD *)LockPointer(&v173, Window + 104, *(_QWORD *)(v16 + 8));
  HMAssignmentLock(&v167);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v141);
  xxxInheritWindowMonitor((struct tagWND *)Window, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v141);
  LinkWindow((struct tagWND *)Window, 0LL, *(__int64 **)(v16 + 8));
  *(_QWORD *)(*(_QWORD *)(Window + 40) + 64LL) = 0LL;
  HMAssignmentUnlock(Window + 120);
  if ( (*(_DWORD *)(gpDispInfo + 132LL) & 1) == 0 )
  {
    v55 = *(_QWORD *)(Window + 40);
    *(_QWORD *)(v55 + 168) = *(_QWORD *)(gpDispInfo + 120LL);
  }
  if ( (*(_DWORD *)(v15 + 32) & 4) == 0 )
  {
    v59 = 0;
    if ( PsGetCurrentProcessWin32Process(v55, gpDispInfo) )
    {
      v58 = PsGetCurrentProcessWin32Process(v57, v56);
      if ( (unsigned int)IsImmersiveAppRestricted(v58) )
        v59 = 1;
    }
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v170, 0LL);
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
                      *(struct tagWND **)v144,
                      (__int64 **)v170,
                      hModuleWin,
                      0LL,
                      1u,
                      0x30Au,
                      v59,
                      0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v170, v60, v61, v62);
    if ( v9 )
    {
      *(_QWORD *)&v162 = (char *)Object + 112;
      *((_QWORD *)&v162 + 1) = v9;
      v171 = v162;
      HMAssignmentLock(&v171);
      v66 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v63, v64, v65);
      v145 = *(_QWORD *)(v66 + 408);
      *(_QWORD *)(v66 + 408) = &v145;
      v146 = v9;
      HMLockObject(v9);
      goto LABEL_35;
    }
    goto LABEL_82;
  }
LABEL_35:
  HMChangeOwnerThread(v135[3], *(_QWORD *)(v16 + 16));
  HMChangeOwnerThread(v46, *(_QWORD *)(v16 + 16));
  if ( (*(_DWORD *)(v15 + 32) & 4) == 0 )
    HMChangeOwnerThread(v9, *(_QWORD *)(v16 + 16));
  W32SetCurrentThreadDpiAwarenessContext(v124, v67, v68, v69);
  v124 = 0;
  *(_QWORD *)(gptiCurrent + 416LL) = v138;
  *(_DWORD *)(gptiCurrent + 480LL) = v126 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
  v25 = zzzSetDesktop(gptiCurrent, v131, v139, v70);
  v71 = (UserAtomicCheck *)&v123;
  if ( v25 < 0 )
    goto LABEL_84;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v123);
  zzzEndDeferWinEventNotify();
  if ( !*(_QWORD *)(v16 + 56) )
    goto LABEL_39;
  if ( (*(_DWORD *)v16 & 2) != 0 )
  {
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v137);
    v25 = zzzSetDesktop(*(struct tagTHREADINFO **)(v16 + 16), (__int64)Object, 0LL, v103);
    v71 = (UserAtomicCheck *)v137;
    if ( v25 >= 0 )
    {
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v137);
      zzzEndDeferWinEventNotify();
      goto LABEL_63;
    }
LABEL_84:
    UserAtomicCheck::~UserAtomicCheck(v71);
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
    LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v125);
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
    LeaveEnterCrit::~LeaveEnterCrit(v82);
  }
  v83 = *(void **)(v16 + 56);
  if ( v83 )
  {
    ObfDereferenceObject(v83);
    *(_QWORD *)(v16 + 56) = 0LL;
  }
  v73 = gpsi;
  _InterlockedOr(gpsi, 0x800u);
LABEL_39:
  if ( v16 == gTermIO[0] )
    xxxSetWindowPos((struct tagWND *)Window, 1LL, 0LL, 0LL, 0, 0, 1115);
  if ( !v132 )
    UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 416LL) + 336LL);
  if ( !gspdeskDisconnect && Object == grpdeskLogon )
  {
    if ( (unsigned int)xxxCreateDisconnectDesktop(v142, (struct tagWINDOWSTATION *)v15) )
    {
      KeSetEvent(gpEventDiconnectDesktop, 1, 0);
      gdwHydraHint |= 0x40000u;
      goto LABEL_44;
    }
    if ( v9 )
      ThreadUnlock1(v80, v79, v81);
    ThreadUnlock1(v80, v79, v81);
    ThreadUnlock1(v105, v104, v106);
    v110 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v107, v108, v109);
    *(_QWORD *)(v110 + 16) = v154[0];
    ObfDereferenceObject(Object);
    CloseDesktop((unsigned __int64)Handle, 0);
    v11 = -1073741823;
LABEL_96:
    *a5 = 0LL;
    return (unsigned int)v11;
  }
LABEL_44:
  v76 = v130;
  while ( 1 )
  {
    if ( v9 )
      v9 = (__int64 *)ThreadUnlock1(v73, v72, v74);
    if ( v76 )
      v130 = (__int64 *)ThreadUnlock1(v73, v72, v74);
    if ( Window )
      Window = ThreadUnlock1(v73, v72, v74);
    v77 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v72, v74, v75);
    *(_QWORD *)(v77 + 16) = v154[0];
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v78) = 4;
      WPP_RECORDER_SF_(
        (unsigned int)&WPP_RECORDER_INITIALIZED,
        v78,
        3,
        22,
        (__int64)&WPP_514f6d50daca38afcf86702a8eadf7c9_Traceguids);
    }
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v25 = -1073741801;
LABEL_98:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v143);
    if ( v124 )
      W32SetCurrentThreadDpiAwarenessContext(v124, v111, v112, v113);
    if ( v9 )
    {
      xxxDestroyWindow(v9);
      HMAssignmentUnlock((char *)v129 + 112);
    }
    v76 = v130;
    if ( v130 )
    {
      xxxDestroyWindow(v130);
      HMAssignmentUnlock((char *)v129 + 104);
    }
    if ( Window )
    {
      xxxDestroyWindow((__int64 *)Window);
      v114 = v135 + 3;
      *(_QWORD *)(*v135 + 8LL) = 0LL;
      HMAssignmentUnlock(v114);
      HMAssignmentUnlock(&gspwndFullScreen);
    }
    *(_QWORD *)(gptiCurrent + 416LL) = v138;
    if ( v126 != -1 )
      *(_DWORD *)(gptiCurrent + 480LL) = v126 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v143);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v136);
    zzzSetDesktop(gptiCurrent, v131, v139, v115);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v136);
    if ( v128 )
    {
      Timeout.QuadPart = ReferenceDwmApiPort(v117, v116, v118);
      if ( Timeout.QuadPart )
      {
        v119 = v129;
        zzzDecomposeDesktop((struct tagDESKTOP *)v129);
        v121 = (void *)ReferenceDwmApiPort(v119[1], *(_QWORD *)v119[1], v120);
        DwmAsyncDesktopFree(v121);
        ((void (__fastcall *)(_QWORD))DereferenceDwmApiPort)((union _LARGE_INTEGER)Timeout.QuadPart);
      }
    }
    CloseProtectedHandle(Handle, 0);
    Handle = 0LL;
    if ( !v132 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 416LL) + 336LL);
  }
  if ( v25 >= 0 )
    *((_DWORD *)v129 + 12) |= 0x10u;
  ObfDereferenceObject(v129);
  *a5 = Handle;
  return (unsigned int)v25;
}
