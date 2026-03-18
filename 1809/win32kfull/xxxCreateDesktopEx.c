/*
 * XREFs of xxxCreateDesktopEx @ 0x1C00EFCF4
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00ED8F8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     NtUserCreateDesktopEx @ 0x1C00EE3F0 (NtUserCreateDesktopEx.c)
 *     xxxResolveDesktop @ 0x1C00EF100 (xxxResolveDesktop.c)
 *     xxxConnectService @ 0x1C022BD68 (xxxConnectService.c)
 * Callees:
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32SetCurrentThreadDpiAwarenessContext @ 0x1C002B480 (W32SetCurrentThreadDpiAwarenessContext.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C004108C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     LinkWindow @ 0x1C0043240 (LinkWindow.c)
 *     zzzEndDeferWinEventNotify @ 0x1C00444C0 (zzzEndDeferWinEventNotify.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxInheritWindowMonitor @ 0x1C006F3B0 (xxxInheritWindowMonitor.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C00AF710 (PushW32ThreadLock.c)
 *     zzzSetDesktop @ 0x1C00B11B0 (zzzSetDesktop.c)
 *     MapDesktop @ 0x1C00B24C0 (MapDesktop.c)
 *     _CloseDesktop @ 0x1C00BB508 (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x1C00BB984 (CloseProtectedHandle.c)
 *     DwmAsyncDesktopCreate @ 0x1C00C6BA8 (DwmAsyncDesktopCreate.c)
 *     DwmAsyncDesktopFree @ 0x1C00C7968 (DwmAsyncDesktopFree.c)
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00CC674 (zzzDecomposeDesktop.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00ED8F8 (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     OpenDesktopCompletion @ 0x1C00F0E28 (OpenDesktopCompletion.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C015CB48 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01D54C4 (-CleanupDirtyDesktops@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(__int64 a1, unsigned int a2, __int64 a3, ACCESS_MASK a4, HANDLE *a5, int a6)
{
  int v6; // r11d
  _DWORD *Window; // r13
  volatile signed __int32 *v9; // r12
  NTSTATUS v10; // eax
  int v11; // ebx
  ULONG v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  ULONG v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  _QWORD *v21; // rsi
  ULONG v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  ULONG v30; // eax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 **v35; // rax
  __int64 v36; // rbx
  void *v37; // rax
  __int64 v38; // rdx
  int v39; // esi
  _DWORD *v40; // rbx
  __int64 v41; // rdx
  _QWORD *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r14
  PVOID v46; // rbx
  __int64 **v47; // rcx
  __int64 v48; // rbx
  void *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  int v53; // eax
  __int64 v54; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v56; // ebx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  int v62; // ebx
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rax
  _QWORD *v66; // rdx
  struct tagWINDOWSTATION *v67; // rsi
  __int64 v68; // rcx
  __int64 v69; // rcx
  __int64 v70; // rax
  int v71; // r12d
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  struct tagWINDOWSTATION *v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  void *v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rax
  HANDLE Handle; // [rsp+90h] [rbp-258h] BYREF
  int v89; // [rsp+98h] [rbp-250h] BYREF
  unsigned int v90; // [rsp+A0h] [rbp-248h]
  int v91; // [rsp+A4h] [rbp-244h]
  __int128 v92; // [rsp+B0h] [rbp-238h] BYREF
  PVOID Object; // [rsp+C0h] [rbp-228h] BYREF
  int v94; // [rsp+C8h] [rbp-220h]
  _DWORD *v95; // [rsp+D0h] [rbp-218h]
  PVOID v96; // [rsp+D8h] [rbp-210h]
  __int64 v97; // [rsp+E0h] [rbp-208h]
  struct _OBJECT_HANDLE_INFORMATION v98; // [rsp+F0h] [rbp-1F8h] BYREF
  struct tagWINDOWSTATION *v99; // [rsp+F8h] [rbp-1F0h]
  _QWORD *v100; // [rsp+100h] [rbp-1E8h]
  int v101[4]; // [rsp+108h] [rbp-1E0h] BYREF
  __int64 v102; // [rsp+118h] [rbp-1D0h]
  void *v103; // [rsp+120h] [rbp-1C8h]
  __int64 v104; // [rsp+128h] [rbp-1C0h]
  _BYTE v105[8]; // [rsp+130h] [rbp-1B8h] BYREF
  _BYTE v106[8]; // [rsp+138h] [rbp-1B0h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+140h] [rbp-1A8h] BYREF
  HWINSTA v108; // [rsp+148h] [rbp-1A0h]
  _BYTE v109[16]; // [rsp+150h] [rbp-198h] BYREF
  _BYTE v110[8]; // [rsp+160h] [rbp-188h] BYREF
  __int64 v111; // [rsp+168h] [rbp-180h] BYREF
  _DWORD *v112; // [rsp+170h] [rbp-178h]
  __int64 v113; // [rsp+178h] [rbp-170h]
  __int64 v114; // [rsp+180h] [rbp-168h] BYREF
  _DWORD *v115; // [rsp+188h] [rbp-160h]
  __int64 v116; // [rsp+190h] [rbp-158h]
  __int64 v117; // [rsp+198h] [rbp-150h] BYREF
  volatile signed __int32 *v118; // [rsp+1A0h] [rbp-148h]
  __int64 v119; // [rsp+1A8h] [rbp-140h]
  _QWORD v120[3]; // [rsp+1B0h] [rbp-138h] BYREF
  int v121; // [rsp+1C8h] [rbp-120h] BYREF
  __int64 v122; // [rsp+1D0h] [rbp-118h]
  _QWORD *v123; // [rsp+1D8h] [rbp-110h]
  int v124; // [rsp+1E0h] [rbp-108h]
  int v125; // [rsp+1E4h] [rbp-104h]
  __int128 v126; // [rsp+1F0h] [rbp-F8h] BYREF
  __int128 v127; // [rsp+200h] [rbp-E8h] BYREF
  __int128 v128; // [rsp+220h] [rbp-C8h] BYREF
  __int128 v129; // [rsp+230h] [rbp-B8h] BYREF
  __int128 v130; // [rsp+240h] [rbp-A8h] BYREF
  __int64 v131[3]; // [rsp+250h] [rbp-98h] BYREF
  __int64 v132[3]; // [rsp+268h] [rbp-80h] BYREF
  __int64 v133[3]; // [rsp+280h] [rbp-68h] BYREF
  __int64 v134; // [rsp+298h] [rbp-50h] BYREF
  _QWORD v135[3]; // [rsp+2A8h] [rbp-40h] BYREF
  char v136; // [rsp+2F8h] [rbp+10h]

  v136 = a2;
  v6 = a3;
  Handle = 0LL;
  v98 = 0LL;
  Window = 0LL;
  v95 = 0LL;
  v9 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  v113 = 0LL;
  v114 = 0LL;
  v115 = 0LL;
  v116 = 0LL;
  v117 = 0LL;
  v118 = 0LL;
  v119 = 0LL;
  v89 = 0;
  v91 = -1;
  memset(v120, 0, sizeof(v120));
  v94 = 0;
  v90 = 0;
  v108 = *(HWINSTA *)(a1 + 8);
  v98.HandleAttributes = gSessionId;
  v98.GrantedAccess = a4;
  LOBYTE(a3) = a6 == 0;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, v6, &v98, &Handle);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = RtlNtStatusToDosError(v10);
    UserSetLastError(v12, v13, v14, v15);
    CleanupDirtyDesktops();
LABEL_105:
    *a5 = 0LL;
    return (unsigned int)v11;
  }
  if ( v10 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v16 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v16, v17, v18, v19);
      CloseProtectedHandle(Handle, 0);
LABEL_6:
      v11 = -1073741801;
      goto LABEL_105;
    }
    *a5 = Handle;
    v89 = 1;
  }
  v20 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v11 = v20;
  v21 = Object;
  v96 = Object;
  if ( v20 < 0 )
  {
    v22 = RtlNtStatusToDosError(v20);
    UserSetLastError(v22, v23, v24, v25);
    CloseProtectedHandle(Handle, 0);
    goto LABEL_105;
  }
  if ( v89 )
  {
    v11 = OpenDesktopCompletion(Object, Handle, a2);
    if ( v11 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      *a5 = 0LL;
    }
    ObfDereferenceObject(v21);
    return (unsigned int)v11;
  }
  v26 = *((_QWORD *)Object + 5);
  v99 = (struct tagWINDOWSTATION *)v26;
  v27 = *(_QWORD *)(v26 + 24);
  v100 = (_QWORD *)*((_QWORD *)Object + 1);
  v100[22] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, v136 & 1) )
  {
    CloseProtectedHandle(Handle, 0);
    ObfDereferenceObject(v21);
    goto LABEL_6;
  }
  v29 = gpepCSRSS;
  if ( gpepCSRSS )
  {
    v121 = 1;
    v122 = gpepCSRSS;
    v123 = v21;
    v124 = 0;
    v125 = 1;
    v89 = MapDesktop((__int64)&v121);
    if ( v89 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      ObfDereferenceObject(v21);
      v30 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v30, v31, v32, v33);
      v11 = v89;
      goto LABEL_105;
    }
  }
  v97 = ReferenceDwmApiPort(v29, v28);
  if ( v97 )
  {
    if ( (*(_DWORD *)(v26 + 32) & 0x200) != 0 )
    {
      v35 = (__int64 **)v21[1];
      v36 = **v35;
      v37 = (void *)ReferenceDwmApiPort(*v35, v34);
      DwmAsyncDesktopCreate(v37, v36);
      zzzComposeDesktop((struct tagDESKTOP *)v21);
      v94 = 1;
    }
    DereferenceDwmApiPort(v97);
  }
  v102 = *(_QWORD *)(gptiCurrent + 424LL);
  v97 = *(_QWORD *)(v102 + 344);
  v104 = *(_QWORD *)(gptiCurrent + 456LL);
  v103 = *(void **)(gptiCurrent + 592LL);
  *(_QWORD *)(gptiCurrent + 424LL) = *(_QWORD *)(*(_QWORD *)(v27 + 16) + 424LL);
  PushW32ThreadLock((__int64)v21, v120, UserDereferenceObject);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v89);
  v39 = zzzSetDesktop(gptiCurrent, (__int64)v21, Handle);
  if ( v39 < 0 )
    goto LABEL_24;
  v90 = W32SetCurrentThreadDpiAwarenessContext(18LL, v38);
  v53 = *(_DWORD *)(gptiCurrent + 488LL);
  v91 = v53 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 488LL) = v53 | 0x10000000;
  *(_OWORD *)v101 = *(_OWORD *)(*gpDispInfo + 24LL);
  if ( !PsGetCurrentProcessWin32Process(gpDispInfo)
    || (CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v54),
        v56 = 1,
        !(unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process)) )
  {
    v56 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v131, 0LL);
  Window = xxxCreateWindowEx(
             0,
             (wchar_t *)0x8001,
             32769LL,
             0LL,
             0x82000000,
             v101[0],
             v101[1],
             v101[2] - v101[0],
             v101[3] - v101[1],
             0LL,
             (__int64)v131,
             hModuleWin,
             0LL,
             1u,
             0x30Au,
             v56,
             0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v131, v57);
  if ( !Window )
  {
    v39 = -1073741801;
LABEL_24:
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v89);
    v40 = v95;
    goto LABEL_25;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v58);
  v111 = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = &v111;
  v112 = Window;
  _InterlockedAdd(Window + 2, 1u);
  if ( !PsGetCurrentProcessWin32Process(&v111)
    || (v61 = PsGetCurrentProcessWin32Process(v60), v62 = 1, !(unsigned int)IsImmersiveAppRestricted(v61)) )
  {
    v62 = 0;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v132, 0LL);
  v40 = xxxCreateWindowEx(
          0,
          (wchar_t *)(unsigned __int16)gatomMessage,
          (unsigned __int16)gatomMessage,
          0LL,
          0x82000000,
          0,
          0,
          0x64u,
          0x64u,
          0LL,
          (__int64)v132,
          hModuleWin,
          0LL,
          1u,
          0x30Au,
          v62,
          0LL);
  v95 = v40;
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v132, v63);
  if ( !v40 )
    goto LABEL_58;
  if ( (*(_WORD *)(*((_QWORD *)v40 + 5) + 42LL) & 0x3FFF) != 0 )
  {
    v39 = -1073741790;
    goto LABEL_59;
  }
  v65 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v64);
  v114 = *(_QWORD *)(v65 + 416);
  *(_QWORD *)(v65 + 416) = &v114;
  v115 = v40;
  _InterlockedAdd(v40 + 2, 1u);
  *(_WORD *)(*((_QWORD *)v40 + 5) + 42LL) = *(_WORD *)(*((_QWORD *)v40 + 5) + 42LL) & 0xC000 | 0x29F;
  v66 = v100 + 3;
  *(_QWORD *)(*v100 + 8LL) = *((_QWORD *)Window + 6);
  *(_QWORD *)&v92 = v66;
  *((_QWORD *)&v92 + 1) = Window;
  v128 = v92;
  HMAssignmentLock(&v128);
  SetOrClrWF(0, (__int64)Window, 0x707u, 1);
  SetOrClrWF(1, (__int64)Window, 0x702u, 1);
  v67 = v99;
  if ( (*((_DWORD *)v99 + 8) & 4) == 0 && !gspwndFullScreen )
  {
    *(_QWORD *)&v92 = &gspwndFullScreen;
    *((_QWORD *)&v92 + 1) = Window;
    v129 = v92;
    HMAssignmentLock(&v129);
  }
  v130 = *(_OWORD *)LockPointer(&v134, (__int64)(v40 + 20), *(_QWORD *)(v27 + 8));
  HMAssignmentLock(&v130);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v110);
  xxxInheritWindowMonitor((struct tagWND *)v40, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v110);
  LinkWindow((struct tagWND *)v40, 0LL, *(__int64 **)(v27 + 8));
  *(_QWORD *)&v92 = (char *)Object + 104;
  *((_QWORD *)&v92 + 1) = v40;
  v126 = v92;
  HMAssignmentLock(&v126);
  *(_QWORD *)(*((_QWORD *)v40 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock(v40 + 24);
  v127 = *(_OWORD *)LockPointer(v135, (__int64)(Window + 20), *(_QWORD *)(v27 + 8));
  HMAssignmentLock(&v127);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v105);
  xxxInheritWindowMonitor((struct tagWND *)Window, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v105);
  LinkWindow((struct tagWND *)Window, 0LL, *(__int64 **)(v27 + 8));
  *(_QWORD *)(*((_QWORD *)Window + 5) + 64LL) = 0LL;
  HMAssignmentUnlock(Window + 24);
  if ( (*(_DWORD *)(gpDispInfo + 132LL) & 1) == 0 )
  {
    v68 = *((_QWORD *)Window + 5);
    *(_QWORD *)(v68 + 168) = *(_QWORD *)(gpDispInfo + 120LL);
  }
  if ( (*((_DWORD *)v67 + 8) & 4) == 0 )
  {
    v71 = 0;
    if ( PsGetCurrentProcessWin32Process(v68) )
    {
      v70 = PsGetCurrentProcessWin32Process(v69);
      if ( (unsigned int)IsImmersiveAppRestricted(v70) )
        v71 = 1;
    }
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v133, 0LL);
    v9 = xxxCreateWindowEx(
           136,
           (wchar_t *)0x8006,
           32774LL,
           0LL,
           0x80800000,
           0,
           0,
           0x64u,
           0x64u,
           *(struct tagWND **)v92,
           (__int64)v133,
           hModuleWin,
           0LL,
           1u,
           0x30Au,
           v71,
           0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v133, v72);
    if ( !v9 )
    {
LABEL_58:
      v39 = -1073741801;
LABEL_59:
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v89);
      goto LABEL_25;
    }
    *(_QWORD *)&v92 = (char *)Object + 112;
    *((_QWORD *)&v92 + 1) = v9;
    HMAssignmentLock(&v92);
    v74 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v73);
    v117 = *(_QWORD *)(v74 + 416);
    *(_QWORD *)(v74 + 416) = &v117;
    v118 = v9;
    _InterlockedAdd(v9 + 2, 1u);
  }
  HMChangeOwnerThread(v100[3], *(_QWORD *)(v27 + 16));
  HMChangeOwnerThread(v40, *(_QWORD *)(v27 + 16));
  if ( (*((_DWORD *)v67 + 8) & 4) == 0 )
    HMChangeOwnerThread(v9, *(_QWORD *)(v27 + 16));
  W32SetCurrentThreadDpiAwarenessContext(v90, v75);
  v90 = 0;
  *(_QWORD *)(gptiCurrent + 424LL) = v102;
  *(_DWORD *)(gptiCurrent + 488LL) = v91 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
  v39 = zzzSetDesktop(gptiCurrent, v104, v103);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v89);
  if ( v39 >= 0 )
  {
    zzzEndDeferWinEventNotify();
    if ( !*(_QWORD *)(v27 + 56) )
    {
LABEL_95:
      if ( (struct tagTERMINAL *const)v27 == gTermIO )
        xxxSetWindowPos((struct tagWND *)Window, 1LL, 0LL, 0LL, 0, 0, 1115);
      if ( !v97 )
        UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 424LL) + 344LL);
      if ( gspdeskDisconnect || Object != grpdeskLogon )
        goto LABEL_40;
      if ( (unsigned int)xxxCreateDisconnectDesktop(v108, v99) )
      {
        KeSetEvent(gpEventDiconnectDesktop, 1, 0);
        gdwHydraHint |= 0x40000u;
        goto LABEL_40;
      }
      if ( v9 )
        ThreadUnlock1(v82, v81);
      ThreadUnlock1(v82, v81);
      ThreadUnlock1(v84, v83);
      v86 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v85);
      *(_QWORD *)(v86 + 16) = v120[0];
      ObfDereferenceObject(Object);
      CloseDesktop((unsigned __int64)Handle, 0);
      v11 = -1073741823;
      goto LABEL_105;
    }
    if ( (*(_DWORD *)v27 & 2) == 0 )
    {
      v76 = v99;
      *(_QWORD *)(gptiRit + 616LL) = v99;
      *(_QWORD *)(*(_QWORD *)(v27 + 16) + 616LL) = v76;
LABEL_82:
      KeSetEvent(*(PRKEVENT *)(v27 + 56), 1, 0);
      if ( (*(_DWORD *)v27 & 2) == 0 )
      {
        if ( gdwInAtomicOperation )
        {
          v77 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v77, gdwInAtomicOperation, v78, v79);
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
        EnterCrit(0LL, 1LL);
      }
      v80 = *(void **)(v27 + 56);
      if ( v80 )
      {
        ObfDereferenceObject(v80);
        *(_QWORD *)(v27 + 56) = 0LL;
      }
      v51 = gpsi;
      *gpsi |= 0x800u;
      goto LABEL_95;
    }
    ++gdwDeferWinEvent;
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v106);
    v39 = zzzSetDesktop(*(struct tagTHREADINFO **)(v27 + 16), (__int64)Object, 0LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v106);
    if ( v39 >= 0 )
    {
      zzzEndDeferWinEventNotify();
      goto LABEL_82;
    }
  }
  while ( 1 )
  {
LABEL_25:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v109);
    if ( v90 )
      W32SetCurrentThreadDpiAwarenessContext(v90, v41);
    if ( v9 )
    {
      xxxDestroyWindow(v9);
      HMAssignmentUnlock((char *)v96 + 112);
    }
    if ( v40 )
    {
      xxxDestroyWindow(v40);
      HMAssignmentUnlock((char *)v96 + 104);
    }
    if ( Window )
    {
      xxxDestroyWindow(Window);
      v42 = v100 + 3;
      *(_QWORD *)(*v100 + 8LL) = 0LL;
      HMAssignmentUnlock(v42);
      HMAssignmentUnlock(&gspwndFullScreen);
    }
    *(_QWORD *)(gptiCurrent + 424LL) = v102;
    if ( v91 != -1 )
      *(_DWORD *)(gptiCurrent + 488LL) = v91 | *(_DWORD *)(gptiCurrent + 488LL) & 0xEFFFFFFF;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v109);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v101);
    zzzSetDesktop(gptiCurrent, v104, v103);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v101);
    if ( v94 )
    {
      v45 = ReferenceDwmApiPort(v44, v43);
      if ( v45 )
      {
        v46 = v96;
        zzzDecomposeDesktop((struct tagDESKTOP *)v96, 0);
        v47 = (__int64 **)*((_QWORD *)v46 + 1);
        v48 = **v47;
        v49 = (void *)ReferenceDwmApiPort(v47, *v47);
        DwmAsyncDesktopFree(v49, v48);
        DereferenceDwmApiPort(v45);
        v40 = v95;
      }
    }
    CloseProtectedHandle(Handle, 0);
    Handle = 0LL;
    if ( !v97 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 424LL) + 344LL);
LABEL_40:
    if ( v9 )
      v9 = (volatile signed __int32 *)ThreadUnlock1(v51, v50);
    if ( v40 )
    {
      v40 = (_DWORD *)ThreadUnlock1(v51, v50);
      v95 = v40;
    }
    if ( Window )
      Window = (_DWORD *)ThreadUnlock1(v51, v50);
    v52 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v50);
    *(_QWORD *)(v52 + 16) = v120[0];
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v39 = -1073741801;
  }
  if ( v39 >= 0 )
    *((_DWORD *)v96 + 12) |= 0x10u;
  ObfDereferenceObject(v96);
  *a5 = Handle;
  return (unsigned int)v39;
}
