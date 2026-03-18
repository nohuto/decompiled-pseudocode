/*
 * XREFs of xxxCreateDesktopEx @ 0x1C00B91B4
 * Callers:
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00B702C (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     NtUserCreateDesktopEx @ 0x1C00B78D0 (NtUserCreateDesktopEx.c)
 *     xxxResolveDesktop @ 0x1C00B8640 (xxxResolveDesktop.c)
 *     xxxConnectService @ 0x1C0134E7C (xxxConnectService.c)
 * Callees:
 *     DwmAsyncDesktopCreate @ 0x1C00083EC (DwmAsyncDesktopCreate.c)
 *     DwmAsyncDesktopFree @ 0x1C00094D0 (DwmAsyncDesktopFree.c)
 *     zzzDecomposeDesktop @ 0x1C000A278 (zzzDecomposeDesktop.c)
 *     _CloseDesktop @ 0x1C000E67C (_CloseDesktop.c)
 *     CloseProtectedHandle @ 0x1C000E77C (CloseProtectedHandle.c)
 *     zzzSetDesktop @ 0x1C000F360 (zzzSetDesktop.c)
 *     MapDesktop @ 0x1C0011B90 (MapDesktop.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     zzzEndDeferWinEventNotify @ 0x1C0028B0C (zzzEndDeferWinEventNotify.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     LinkWindow @ 0x1C002E120 (LinkWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00349AC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     PushW32ThreadLock @ 0x1C005D730 (PushW32ThreadLock.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     ?xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z @ 0x1C00B702C (-xxxCreateDisconnectDesktop@@YAHPEAUHWINSTA__@@PEAUtagWINDOWSTATION@@@Z.c)
 *     OpenDesktopCompletion @ 0x1C00B9D94 (OpenDesktopCompletion.c)
 *     zzzComposeDesktop @ 0x1C00C0DD4 (zzzComposeDesktop.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x1C0138F04 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ?CleanupDirtyDesktops@@YAXXZ @ 0x1C01B2D80 (-CleanupDirtyDesktops@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxCreateDesktopEx(__int64 a1, unsigned int a2, __int64 a3, ACCESS_MASK a4, HANDLE *a5, int a6)
{
  int v6; // r11d
  _DWORD *Window; // r13
  _DWORD *v9; // r12
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
  int v22; // esi
  int v23; // eax
  __int64 v24; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v26; // esi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // esi
  _DWORD *v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rax
  _QWORD *v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // r12d
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  ULONG_PTR v52; // r14
  __int64 v53; // rax
  __int64 v54; // rcx
  void *v55; // rcx
  ULONG v56; // eax
  __int64 v57; // rdx
  ULONG v58; // eax
  __int64 v59; // rdx
  ULONG v60; // eax
  __int64 v61; // rdx
  ULONG v62; // eax
  __int64 v63; // rdx
  __int64 **v64; // rax
  __int64 v65; // rbx
  void *v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rax
  _QWORD *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  PVOID v76; // rbx
  __int64 **v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // r8
  void *v80; // rax
  HANDLE Handle; // [rsp+90h] [rbp-288h] BYREF
  int v82; // [rsp+98h] [rbp-280h] BYREF
  int v83; // [rsp+A0h] [rbp-278h]
  PVOID Object; // [rsp+A8h] [rbp-270h] BYREF
  int v85; // [rsp+B0h] [rbp-268h]
  _DWORD *v86; // [rsp+B8h] [rbp-260h]
  PVOID v87; // [rsp+C0h] [rbp-258h]
  __int64 v88; // [rsp+C8h] [rbp-250h]
  __int64 v89; // [rsp+D0h] [rbp-248h]
  struct _OBJECT_HANDLE_INFORMATION v90; // [rsp+E0h] [rbp-238h] BYREF
  _QWORD *v91; // [rsp+E8h] [rbp-230h]
  union _LARGE_INTEGER Timeout; // [rsp+F0h] [rbp-228h] BYREF
  __int64 v93; // [rsp+F8h] [rbp-220h]
  void *v94; // [rsp+100h] [rbp-218h]
  _QWORD v95[2]; // [rsp+110h] [rbp-208h] BYREF
  __int128 v96; // [rsp+120h] [rbp-1F8h]
  _BYTE v97[8]; // [rsp+130h] [rbp-1E8h] BYREF
  _BYTE v98[8]; // [rsp+138h] [rbp-1E0h] BYREF
  HWINSTA v99; // [rsp+140h] [rbp-1D8h]
  _BYTE v100[8]; // [rsp+148h] [rbp-1D0h] BYREF
  _BYTE v101[16]; // [rsp+150h] [rbp-1C8h] BYREF
  __int128 v102; // [rsp+160h] [rbp-1B8h]
  _BYTE v103[8]; // [rsp+170h] [rbp-1A8h] BYREF
  __int64 v104; // [rsp+178h] [rbp-1A0h] BYREF
  _DWORD *v105; // [rsp+180h] [rbp-198h]
  __int64 v106; // [rsp+188h] [rbp-190h]
  __int64 v107; // [rsp+190h] [rbp-188h] BYREF
  _DWORD *v108; // [rsp+198h] [rbp-180h]
  __int64 v109; // [rsp+1A0h] [rbp-178h]
  __int64 v110; // [rsp+1A8h] [rbp-170h] BYREF
  _DWORD *v111; // [rsp+1B0h] [rbp-168h]
  __int64 v112; // [rsp+1B8h] [rbp-160h]
  _QWORD v113[4]; // [rsp+1C0h] [rbp-158h] BYREF
  __int128 v114; // [rsp+1E0h] [rbp-138h]
  __int128 v115; // [rsp+1F0h] [rbp-128h]
  int v116; // [rsp+200h] [rbp-118h] BYREF
  __int64 v117; // [rsp+208h] [rbp-110h]
  _QWORD *v118; // [rsp+210h] [rbp-108h]
  int v119; // [rsp+218h] [rbp-100h]
  int v120; // [rsp+21Ch] [rbp-FCh]
  __int128 v121; // [rsp+220h] [rbp-F8h] BYREF
  __int128 v122; // [rsp+230h] [rbp-E8h] BYREF
  __int128 v123; // [rsp+240h] [rbp-D8h] BYREF
  __int128 v124; // [rsp+260h] [rbp-B8h] BYREF
  _QWORD v125[3]; // [rsp+270h] [rbp-A8h] BYREF
  _QWORD v126[3]; // [rsp+288h] [rbp-90h] BYREF
  _QWORD v127[4]; // [rsp+2A0h] [rbp-78h] BYREF
  __int128 v128; // [rsp+2C0h] [rbp-58h] BYREF
  __int64 v129; // [rsp+2D0h] [rbp-48h] BYREF
  __int64 v130; // [rsp+2E0h] [rbp-38h] BYREF
  char v131; // [rsp+328h] [rbp+10h]

  v131 = a2;
  v6 = a3;
  Handle = 0LL;
  v90 = 0LL;
  Window = 0LL;
  v86 = 0LL;
  v9 = 0LL;
  v107 = 0LL;
  v108 = 0LL;
  v109 = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v112 = 0LL;
  v104 = 0LL;
  v105 = 0LL;
  v106 = 0LL;
  v82 = 0;
  v83 = -1;
  memset(v113, 0, 24);
  v85 = 0;
  v99 = *(HWINSTA *)(a1 + 8);
  v90.HandleAttributes = gSessionId;
  v90.GrantedAccess = a4;
  LOBYTE(a3) = a6 == 0;
  v10 = ObOpenObjectByName(a1, ExDesktopObjectType, a3, 0LL, v6, &v90, &Handle);
  v11 = v10;
  if ( v10 < 0 )
  {
    v56 = RtlNtStatusToDosError(v10);
    UserSetLastError(v56, v57);
    CleanupDirtyDesktops();
LABEL_93:
    *a5 = 0LL;
    return (unsigned int)v11;
  }
  if ( v10 == 0x40000000 )
  {
    if ( !(unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
    {
      v58 = RtlNtStatusToDosError(-1073741801);
      UserSetLastError(v58, v59);
      CloseProtectedHandle(Handle, 0);
LABEL_74:
      v11 = -1073741801;
      goto LABEL_93;
    }
    *a5 = Handle;
    v82 = 1;
  }
  v12 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)ExDesktopObjectType, 1, &Object, 0LL);
  v11 = v12;
  v13 = Object;
  v87 = Object;
  if ( v12 < 0 )
  {
    v60 = RtlNtStatusToDosError(v12);
    UserSetLastError(v60, v61);
    CloseProtectedHandle(Handle, 0);
    goto LABEL_93;
  }
  if ( v82 )
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
  v89 = v15;
  v16 = *(_QWORD *)(v15 + 24);
  v91 = (_QWORD *)*((_QWORD *)Object + 1);
  v91[22] = 0LL;
  if ( !(unsigned int)SetHandleFlag(Handle, 0LL, v131 & 1) )
  {
    CloseProtectedHandle(Handle, 0);
    ObfDereferenceObject(v13);
    goto LABEL_74;
  }
  v19 = gpepCSRSS;
  if ( gpepCSRSS )
  {
    v116 = 1;
    v117 = gpepCSRSS;
    v118 = v13;
    v119 = 0;
    v120 = 1;
    v82 = MapDesktop((__int64)&v116);
    if ( v82 < 0 )
    {
      CloseProtectedHandle(Handle, 0);
      ObfDereferenceObject(v13);
      v62 = RtlNtStatusToDosError(-1073741790);
      UserSetLastError(v62, v63);
      v11 = v82;
      goto LABEL_93;
    }
  }
  v88 = ReferenceDwmApiPort(v19, v17, v18);
  if ( v88 )
  {
    if ( (*(_DWORD *)(v15 + 32) & 0x200) != 0 )
    {
      v64 = (__int64 **)v13[1];
      v65 = **v64;
      v66 = (void *)ReferenceDwmApiPort(*v64, v20, v21);
      DwmAsyncDesktopCreate(v66, v65);
      zzzComposeDesktop((struct tagDESKTOP *)v13);
      v85 = 1;
      v15 = v89;
    }
    DereferenceDwmApiPort(v88);
  }
  v93 = *(_QWORD *)(gptiCurrent + 416LL);
  v89 = *(_QWORD *)(v93 + 336);
  v88 = *(_QWORD *)(gptiCurrent + 448LL);
  v94 = *(void **)(gptiCurrent + 584LL);
  *(_QWORD *)(gptiCurrent + 416LL) = *(_QWORD *)(*(_QWORD *)(v16 + 16) + 416LL);
  PushW32ThreadLock((__int64)v13, v113, UserDereferenceObject);
  ++gdwDeferWinEvent;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v82);
  v22 = zzzSetDesktop(gptiCurrent, (__int64)v13, Handle);
  if ( v22 < 0 )
    goto LABEL_81;
  v23 = *(_DWORD *)(gptiCurrent + 480LL);
  v83 = v23 & 0x10000000;
  *(_DWORD *)(gptiCurrent + 480LL) = v23 | 0x10000000;
  v96 = *(_OWORD *)(*gpDispInfo + 24LL);
  v26 = 0;
  if ( PsGetCurrentProcessWin32Process(gpDispInfo) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
    if ( (unsigned int)IsImmersiveAppRestricted(CurrentProcessWin32Process) )
      v26 = 1;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v125, 0LL);
  Window = xxxCreateWindowEx(
             0,
             32769LL,
             32769LL,
             0LL,
             0x82000000,
             v96,
             SDWORD1(v96),
             DWORD2(v96) - (int)v96,
             HIDWORD(v96) - DWORD1(v96),
             0LL,
             (__int64)v125,
             hModuleWin,
             0LL,
             1u,
             0x30Au,
             v26,
             0LL);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v125, v27);
  if ( !Window )
    goto LABEL_80;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28);
  v107 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v107;
  v108 = Window;
  _InterlockedAdd(Window + 2, 1u);
  v32 = 0;
  if ( PsGetCurrentProcessWin32Process(&v107) )
  {
    v31 = PsGetCurrentProcessWin32Process(v30);
    if ( (unsigned int)IsImmersiveAppRestricted(v31) )
      v32 = 1;
  }
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v126, 0LL);
  v33 = xxxCreateWindowEx(
          0,
          (unsigned __int16)gatomMessage,
          (unsigned __int16)gatomMessage,
          0LL,
          0x82000000,
          0,
          0,
          100,
          100,
          0LL,
          (__int64)v126,
          hModuleWin,
          0LL,
          1u,
          0x30Au,
          v32,
          0LL);
  v86 = v33;
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v126, v34);
  if ( !v33 )
  {
LABEL_80:
    v22 = -1073741801;
LABEL_81:
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v82);
    goto LABEL_95;
  }
  v36 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35);
  v110 = *(_QWORD *)(v36 + 408);
  *(_QWORD *)(v36 + 408) = &v110;
  v111 = v33;
  _InterlockedAdd(v33 + 2, 1u);
  *(_WORD *)(*((_QWORD *)v33 + 5) + 42LL) = *(_WORD *)(*((_QWORD *)v33 + 5) + 42LL) & 0xC000 | 0x29F;
  v37 = v91 + 3;
  *(_QWORD *)(*v91 + 8LL) = *((_QWORD *)Window + 6);
  *(_QWORD *)&v114 = v37;
  *((_QWORD *)&v114 + 1) = Window;
  v124 = v114;
  HMAssignmentLock(&v124);
  SetOrClrWF(0LL, Window, 1799LL, 1LL);
  SetOrClrWF(1LL, Window, 1794LL, 1LL);
  if ( (*(_DWORD *)(v15 + 32) & 4) == 0 && !gspwndFullScreen )
  {
    v95[0] = &gspwndFullScreen;
    v95[1] = Window;
    HMAssignmentLock(v95);
  }
  v121 = *(_OWORD *)LockPointer(&v129, (__int64)(v33 + 20), *(_QWORD *)(v16 + 8));
  HMAssignmentLock(&v121);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v97);
  xxxInheritWindowMonitor((struct tagWND *)v33, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v97);
  LinkWindow((struct tagWND *)v33, 0LL, *(__int64 **)(v16 + 8));
  *(_QWORD *)&v102 = (char *)Object + 104;
  *((_QWORD *)&v102 + 1) = v33;
  v122 = v102;
  HMAssignmentLock(&v122);
  *(_QWORD *)(*((_QWORD *)v33 + 5) + 64LL) = 0LL;
  HMAssignmentUnlock(v33 + 24);
  v123 = *(_OWORD *)LockPointer(&v130, (__int64)(Window + 20), *(_QWORD *)(v16 + 8));
  HMAssignmentLock(&v123);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v101);
  xxxInheritWindowMonitor((struct tagWND *)Window, 0LL, 0);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v101);
  LinkWindow((struct tagWND *)Window, 0LL, *(__int64 **)(v16 + 8));
  *(_QWORD *)(*((_QWORD *)Window + 5) + 64LL) = 0LL;
  HMAssignmentUnlock(Window + 24);
  if ( (*(_DWORD *)(gpDispInfo + 132LL) & 1) == 0 )
  {
    v38 = *((_QWORD *)Window + 5);
    *(_QWORD *)(v38 + 168) = *(_QWORD *)(gpDispInfo + 120LL);
  }
  if ( (*(_DWORD *)(v15 + 32) & 4) == 0 )
  {
    v41 = 0;
    if ( PsGetCurrentProcessWin32Process(v38) )
    {
      v40 = PsGetCurrentProcessWin32Process(v39);
      if ( (unsigned int)IsImmersiveAppRestricted(v40) )
        v41 = 1;
    }
    SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v127, 0LL);
    v9 = xxxCreateWindowEx(
           136,
           32774LL,
           32774LL,
           0LL,
           0x80800000,
           0,
           0,
           100,
           100,
           *(struct tagWND **)v102,
           (__int64)v127,
           hModuleWin,
           0LL,
           1u,
           0x30Au,
           v41,
           0LL);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v127, v42);
    if ( v9 )
    {
      *(_QWORD *)&v115 = (char *)Object + 112;
      *((_QWORD *)&v115 + 1) = v9;
      v128 = v115;
      HMAssignmentLock(&v128);
      v44 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43);
      v104 = *(_QWORD *)(v44 + 408);
      *(_QWORD *)(v44 + 408) = &v104;
      v105 = v9;
      _InterlockedAdd(v9 + 2, 1u);
      goto LABEL_35;
    }
    goto LABEL_80;
  }
LABEL_35:
  HMChangeOwnerThread(v91[3], *(_QWORD *)(v16 + 16));
  HMChangeOwnerThread(v33, *(_QWORD *)(v16 + 16));
  if ( (*(_DWORD *)(v15 + 32) & 4) == 0 )
    HMChangeOwnerThread(v9, *(_QWORD *)(v16 + 16));
  *(_QWORD *)(gptiCurrent + 416LL) = v93;
  *(_DWORD *)(gptiCurrent + 480LL) = v83 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
  v22 = zzzSetDesktop(gptiCurrent, v88, v94);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v82);
  if ( v22 < 0 )
    goto LABEL_95;
  zzzEndDeferWinEventNotify();
  if ( *(_QWORD *)(v16 + 56) )
  {
    if ( (*(_DWORD *)v16 & 2) != 0 )
    {
      ++gdwDeferWinEvent;
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v98);
      v22 = zzzSetDesktop(*(struct tagTHREADINFO **)(v16 + 16), (__int64)Object, 0LL);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v98);
      if ( v22 < 0 )
        goto LABEL_95;
      zzzEndDeferWinEventNotify();
    }
    else
    {
      *(_QWORD *)(gptiRit + 608LL) = v15;
      *(_QWORD *)(*(_QWORD *)(v16 + 16) + 608LL) = v15;
    }
    KeSetEvent(*(PRKEVENT *)(v16 + 56), 1, 0);
    if ( (*(_DWORD *)v16 & 2) == 0 )
    {
      if ( gdwInAtomicOperation )
      {
        v54 = gdwExtraInstrumentations;
        if ( (gdwExtraInstrumentations & 1) != 0 )
          KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
      }
      UserSessionSwitchLeaveCrit(v54, gdwInAtomicOperation, v47, v48);
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
    v55 = *(void **)(v16 + 56);
    if ( v55 )
    {
      ObfDereferenceObject(v55);
      *(_QWORD *)(v16 + 56) = 0LL;
    }
    v46 = gpsi;
    *gpsi |= 0x800u;
  }
  if ( (struct tagTERMINAL *const)v16 == gTermIO )
    xxxSetWindowPos((struct tagWND *)Window, 1LL, 0LL, 0LL, 0, 0, 1115);
  if ( !v89 )
    UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 416LL) + 336LL);
  if ( gspdeskDisconnect || Object != grpdeskLogon )
    goto LABEL_47;
  if ( !(unsigned int)xxxCreateDisconnectDesktop(v99, (struct tagWINDOWSTATION *)v15, v47, v48) )
  {
    if ( v9 )
      ThreadUnlock1(v50, v49, v51);
    ThreadUnlock1(v50, v49, v51);
    ThreadUnlock1(v68, v67, v69);
    v71 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v70);
    *(_QWORD *)(v71 + 16) = v113[0];
    ObfDereferenceObject(Object);
    CloseDesktop((unsigned __int64)Handle, 0);
    v11 = -1073741823;
    goto LABEL_93;
  }
  KeSetEvent(gpEventDiconnectDesktop, 1, 0);
  gdwHydraHint |= 0x40000u;
LABEL_47:
  v52 = (ULONG_PTR)v86;
  while ( 1 )
  {
    if ( v9 )
      v9 = (_DWORD *)ThreadUnlock1(v46, v45, v47);
    if ( v52 )
      v86 = (_DWORD *)ThreadUnlock1(v46, v45, v47);
    if ( Window )
      Window = (_DWORD *)ThreadUnlock1(v46, v45, v47);
    v53 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v45);
    *(_QWORD *)(v53 + 16) = v113[0];
    if ( !Handle || (unsigned int)SetHandleFlag(Handle, 1LL, 1LL) )
      break;
    v22 = -1073741801;
LABEL_95:
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v100);
    if ( v9 )
    {
      xxxDestroyWindow((ULONG_PTR)v9);
      HMAssignmentUnlock((char *)v87 + 112);
    }
    v52 = (ULONG_PTR)v86;
    if ( v86 )
    {
      xxxDestroyWindow((ULONG_PTR)v86);
      HMAssignmentUnlock((char *)v87 + 104);
    }
    if ( Window )
    {
      xxxDestroyWindow((ULONG_PTR)Window);
      v72 = v91 + 3;
      *(_QWORD *)(*v91 + 8LL) = 0LL;
      HMAssignmentUnlock(v72);
      HMAssignmentUnlock(&gspwndFullScreen);
    }
    *(_QWORD *)(gptiCurrent + 416LL) = v93;
    if ( v83 != -1 )
      *(_DWORD *)(gptiCurrent + 480LL) = v83 | *(_DWORD *)(gptiCurrent + 480LL) & 0xEFFFFFFF;
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v100);
    zzzEndDeferWinEventNotify();
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v103);
    zzzSetDesktop(gptiCurrent, v88, v94);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v103);
    if ( v85 )
    {
      Timeout.QuadPart = ReferenceDwmApiPort(v74, v73, v75);
      if ( Timeout.QuadPart )
      {
        v76 = v87;
        zzzDecomposeDesktop((struct tagDESKTOP *)v87);
        v77 = (__int64 **)*((_QWORD *)v76 + 1);
        v78 = **v77;
        v80 = (void *)ReferenceDwmApiPort(v77, *v77, v79);
        DwmAsyncDesktopFree(v80, v78);
        ((void (__fastcall *)(_QWORD))DereferenceDwmApiPort)((union _LARGE_INTEGER)Timeout.QuadPart);
      }
    }
    CloseProtectedHandle(Handle, 0);
    Handle = 0LL;
    if ( !v89 )
      UnlockObjectAssignment(*(_QWORD *)(gptiCurrent + 416LL) + 336LL);
  }
  if ( v22 >= 0 )
    *((_DWORD *)v87 + 12) |= 0x10u;
  ObfDereferenceObject(v87);
  *a5 = Handle;
  return (unsigned int)v22;
}
