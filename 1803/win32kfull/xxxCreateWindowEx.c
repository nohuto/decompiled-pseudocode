/*
 * XREFs of xxxCreateWindowEx @ 0x1C0030FEC
 * Callers:
 *     NtUserCreateWindowEx @ 0x1C0022B90 (NtUserCreateWindowEx.c)
 *     xxxCreateDefaultImeWindow @ 0x1C005BB1C (xxxCreateDefaultImeWindow.c)
 *     xxxCreateWindowStation @ 0x1C00B437C (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 *     xxxCsDdeInitialize @ 0x1C0107074 (xxxCsDdeInitialize.c)
 *     xxxAddShadow @ 0x1C0119F60 (xxxAddShadow.c)
 *     xxxNextWindow @ 0x1C01BC6C8 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C00069CC (TraceChildWindowDpiTelemetry.c)
 *     DwmAsyncChildCreate @ 0x1C0009B30 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C0009C60 (DwmGetClassStyle.c)
 *     ?ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0x1C000CA70 (-ChangeRole@CoreWindowProp@@KAJPEAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C000FD7C (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     RtlStringCchCopyW @ 0x1C0015490 (RtlStringCchCopyW.c)
 *     RegisterDefaultClass @ 0x1C001A8C0 (RegisterDefaultClass.c)
 *     xxxCallCtfHook @ 0x1C001C1F4 (xxxCallCtfHook.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     xxxAdjustSize @ 0x1C002219C (xxxAdjustSize.c)
 *     MapClientNeuterToClientPfn @ 0x1C002227C (MapClientNeuterToClientPfn.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ @ 0x1C0026234 (--B-$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C0026290 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     GetStyleWindow @ 0x1C0028180 (GetStyleWindow.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GetInheritedMonitor @ 0x1C002D830 (GetInheritedMonitor.c)
 *     _GetWindowCompositionInfo @ 0x1C002DC68 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C002DEA4 (_IsTopLevelWindow.c)
 *     LinkWindow @ 0x1C002E120 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C002F2E4 (ShouldUseLogPixelsForWindowMetrics.c)
 *     UnlinkWindow @ 0x1C002FDB0 (UnlinkWindow.c)
 *     xxxInheritWindowMonitor @ 0x1C0030244 (xxxInheritWindowMonitor.c)
 *     IsValidBandForProcess @ 0x1C0030770 (IsValidBandForProcess.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C0030CE0 (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 *     GetClassPtr @ 0x1C0030EA0 (GetClassPtr.c)
 *     IsPseudoPwnd @ 0x1C0030F98 (IsPseudoPwnd.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0033D9C (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00349AC (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ValidateNewParent @ 0x1C00349D4 (ValidateNewParent.c)
 *     IsTopLevelParent @ 0x1C0034AC8 (IsTopLevelParent.c)
 *     ValidateParentDepth @ 0x1C0034B80 (ValidateParentDepth.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C0034C20 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003547C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     xxxCheckFullScreen @ 0x1C0035620 (xxxCheckFullScreen.c)
 *     DereferenceClass @ 0x1C0035F90 (DereferenceClass.c)
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 *     SetTiledRect @ 0x1C003813C (SetTiledRect.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxLoadUserApiHook @ 0x1C003B220 (xxxLoadUserApiHook.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxUpdateInputHangInfo @ 0x1C0048CD0 (xxxUpdateInputHangInfo.c)
 *     _DestroyMenu @ 0x1C00507F0 (_DestroyMenu.c)
 *     zzzAttachThreadInput @ 0x1C00581EC (zzzAttachThreadInput.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C005AAA4 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     xxxCreateDefaultImeWindow @ 0x1C005BB1C (xxxCreateDefaultImeWindow.c)
 *     xxxMinMaximize @ 0x1C0065638 (xxxMinMaximize.c)
 *     GetMonitorRect @ 0x1C0066BB4 (GetMonitorRect.c)
 *     SetMinimize @ 0x1C0066E0C (SetMinimize.c)
 *     RtlInitUnicodeStringOrId @ 0x1C006B768 (RtlInitUnicodeStringOrId.c)
 *     xxxCreateClassSmIcon @ 0x1C006BF64 (xxxCreateClassSmIcon.c)
 *     xxxClientLoadMenu @ 0x1C006C1CC (xxxClientLoadMenu.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C006E5AC (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     DwmAsyncOwnerChange @ 0x1C006ED2C (DwmAsyncOwnerChange.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     PWInsertAfter @ 0x1C0070050 (PWInsertAfter.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C0070A0C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     GetNonChildAncestor @ 0x1C0070A34 (GetNonChildAncestor.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     CalcWindowFullScreen @ 0x1C007290C (CalcWindowFullScreen.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0072A9C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     DwmChildRectChange @ 0x1C0072D4C (DwmChildRectChange.c)
 *     NeedsWindowEdge @ 0x1C00733B4 (NeedsWindowEdge.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C0073610 (UpdateTopLevelWindowDPITransform.c)
 *     xxxShowWindow @ 0x1C0073948 (xxxShowWindow.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C0073B50 (GetWindowCloakStateComponentUIAware.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C0074AA0 (IsDpiBoundaryBetweenWindows.c)
 *     SetRedirectedWindow @ 0x1C0075334 (SetRedirectedWindow.c)
 *     SetVisible @ 0x1C0075CA0 (SetVisible.c)
 *     IsDesktopWindow @ 0x1C0076580 (IsDesktopWindow.c)
 *     GetRedirectionBitmap @ 0x1C007BA20 (GetRedirectionBitmap.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C00C1910 (SetWindowSubtreeCoreWindowStatus.c)
 *     IsImmersiveAppIORestricted @ 0x1C00C19D4 (IsImmersiveAppIORestricted.c)
 *     xxxGetSystemMenu @ 0x1C00C2104 (xxxGetSystemMenu.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C00C476C (IsWindowBeingDestroyed.c)
 *     RtlInitLargeAnsiString @ 0x1C00E6434 (RtlInitLargeAnsiString.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C00E655C (xxxClientAllocWindowClassExtraBytes.c)
 *     RecreateRedirectionBitmap @ 0x1C00E8330 (RecreateRedirectionBitmap.c)
 *     xxxSendSizeMessage @ 0x1C00E98E8 (xxxSendSizeMessage.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00EA614 (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ClassLock @ 0x1C00ECB2C (ClassLock.c)
 *     RECTFromSIZERECT @ 0x1C00ECFCC (RECTFromSIZERECT.c)
 *     W32GetCurrentThreadDpiHostingBehavior @ 0x1C00F00A8 (W32GetCurrentThreadDpiHostingBehavior.c)
 *     ReferenceClass @ 0x1C00F03B0 (ReferenceClass.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C00F05FC (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     GetThreadDesktopWindow @ 0x1C00F06E0 (GetThreadDesktopWindow.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00F6A00 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C00F79E8 (IsChildWindowDpiIsolationEnabled.c)
 *     GetAppCompatFlags @ 0x1C00F8F30 (GetAppCompatFlags.c)
 *     RegisterIconTitleClass @ 0x1C00FBFF0 (RegisterIconTitleClass.c)
 *     IsValidBand @ 0x1C00FE8AC (IsValidBand.c)
 *     ValidateOwnerDepth @ 0x1C00FE9E8 (ValidateOwnerDepth.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0138FD0 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ??$?9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z @ 0x1C0196A28 (--$-9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z.c)
 *     ??4?$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0196A7C (--4-$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     GetTopMostInsertAfter @ 0x1C019EE14 (GetTopMostInsertAfter.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C01AF81C (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C01AF920 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01B022C (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     HasMessageRootWindow @ 0x1C01BF600 (HasMessageRootWindow.c)
 *     _W32ExceptionHandler @ 0x1C0216FFC (_W32ExceptionHandler.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_DWORD *__fastcall xxxCreateWindowEx(
        int a1,
        __int64 a2,
        __int64 a3,
        struct _KPROCESS *a4,
        unsigned int a5,
        __int32 a6,
        __int32 a7,
        int a8,
        int a9,
        struct tagWND *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        int a16,
        __int64 a17)
{
  __int64 v19; // r14
  int v20; // r15d
  __int64 v21; // rcx
  int v22; // ebx
  int v23; // eax
  __int64 v24; // rax
  char v25; // al
  int v26; // r12d
  int v27; // ecx
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // edx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v34; // rbx
  __int64 *ClassPtr; // rax
  __int64 v36; // rbx
  __int64 v37; // r8
  int v38; // r10d
  unsigned int v39; // r10d
  __int64 v40; // rax
  __int64 v41; // rdx
  struct tagWND *v42; // r15
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v46; // rax
  int v47; // ebx
  __int64 v48; // rdx
  __int64 v49; // r8
  int v50; // ecx
  int v51; // ecx
  int v52; // edx
  wchar_t *v53; // rcx
  __int64 v54; // rbx
  __int64 *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rdx
  int v60; // r13d
  __int16 v61; // r12
  LONG v62; // edx
  int v63; // r8d
  int v64; // r10d
  _QWORD *v65; // rax
  LONG v66; // eax
  LONG v67; // ecx
  int v68; // edx
  int v69; // eax
  __int64 *InheritedMonitor; // rbx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 *ThreadDesktopWindow; // rbx
  struct _KPROCESS *v74; // rcx
  unsigned int ProcessId; // r14d
  __int64 v76; // rsi
  _DWORD *v77; // rax
  unsigned int v78; // r15d
  int v79; // r12d
  int v80; // r13d
  __int64 ProcessSequenceNumber; // rbx
  int ClassStyle; // edi
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  void *v86; // rax
  unsigned __int16 v87; // r12
  __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  char v92; // bl
  SIZE_T v93; // rcx
  __int64 v94; // r12
  __int64 v95; // rcx
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // r8
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // r12
  int AppCompatFlags; // eax
  __int64 v103; // rdx
  char v104; // bl
  unsigned __int16 v105; // bx
  int v106; // eax
  __int64 v107; // rax
  int v108; // eax
  __int64 v109; // r13
  int v110; // ebx
  __int64 v111; // rdx
  __int64 v112; // r9
  __int64 v113; // r10
  __int64 v114; // r9
  __int64 v115; // rdx
  struct tagCLS *v116; // rbx
  __int64 v117; // rax
  __int64 v118; // rax
  char v119; // bl
  int v120; // eax
  __int32 v121; // r12d
  int v122; // edx
  __int64 v123; // rcx
  struct tagMONITOR *v124; // rax
  __int64 v125; // rbx
  __int64 v126; // rcx
  int v127; // edx
  __int16 v128; // ax
  int v129; // ecx
  _DWORD *v130; // rcx
  int v131; // eax
  unsigned __int64 v132; // xmm0_8
  int v133; // r13d
  int v134; // r12d
  _DWORD *v135; // rcx
  int v136; // eax
  __int64 v137; // rcx
  char v138; // al
  struct tagWND *v139; // rcx
  __int64 Menu; // rax
  __int64 v141; // rax
  _QWORD *v142; // rax
  char v143; // bl
  __int64 v144; // rcx
  __int64 NonChildAncestor; // rbx
  _QWORD *v146; // r12
  __int64 v147; // rdx
  __int64 v148; // rdx
  __int64 v149; // rcx
  unsigned int v150; // eax
  int v151; // edx
  __int64 KernelEvent; // rax
  __int64 v153; // r12
  __int64 *v154; // r13
  __int64 v155; // rdx
  __int64 v156; // rbx
  unsigned int v157; // ecx
  __int64 v158; // rbx
  NTSTATUS v159; // eax
  ULONG v160; // eax
  __int64 v161; // rcx
  __int64 v162; // rdx
  __int64 v163; // rdx
  __int64 v164; // rax
  __int64 v165; // rcx
  int v166; // ecx
  int v167; // eax
  int v168; // edx
  int v169; // ecx
  __int64 v170; // r8
  __int64 v171; // rax
  __int64 *v172; // rdx
  __int64 v173; // rcx
  __int64 v174; // r8
  int v175; // eax
  __int64 v176; // rcx
  __int64 StyleWindow; // rbx
  __int64 CacheDC; // rax
  __int64 SystemMenu; // rax
  __int64 v180; // rdx
  volatile signed __int32 *v181; // rbx
  __int64 v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rcx
  __int64 v185; // r8
  _QWORD *v186; // rbx
  __int64 DefaultImeWindow; // rax
  __int64 v188; // rdx
  __int64 v189; // r12
  __int64 v190; // rax
  __int64 v191; // rdx
  __int64 v192; // rcx
  __int64 v193; // r8
  int v194; // ecx
  __int64 v195; // r12
  __int64 v196; // rax
  __int64 v197; // r12
  __int64 v198; // rdx
  __int64 v199; // rcx
  __int64 v200; // r8
  unsigned __int64 v201; // rbx
  __int64 v202; // rax
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // r8
  __int64 v206; // rcx
  __int64 TopMostInsertAfter; // rax
  __int64 v208; // r9
  __int64 v209; // rdx
  int v210; // edx
  int v211; // r8d
  __int64 v212; // rdx
  struct tagCLS *v213; // rbx
  __int64 v214; // rax
  __int64 v215; // rdx
  __int64 v216; // rcx
  __int64 v217; // r8
  void *v218; // rax
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // r8
  void *v222; // rax
  __int64 v223; // rcx
  char v224; // al
  __int64 v225; // rdx
  __int64 v226; // rcx
  __int64 v227; // rcx
  ULONG_PTR v228; // rcx
  __int64 v229; // rdx
  __int64 v230; // rcx
  __int64 v231; // r8
  __int64 v232; // rdx
  __int64 v233; // r8
  __int64 v234; // rcx
  struct tagCLS *v235; // rbx
  __int64 v236; // rax
  __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 v239; // r8
  _DWORD *v240; // rax
  __int64 v241; // rdx
  _DWORD *v242; // rbx
  __int64 v243; // rdx
  __int64 v245; // rdx
  unsigned int v246; // [rsp+28h] [rbp-4A0h]
  __int32 v247; // [rsp+60h] [rbp-468h]
  unsigned int v248; // [rsp+70h] [rbp-458h]
  int v249; // [rsp+74h] [rbp-454h]
  int v250; // [rsp+74h] [rbp-454h]
  __int32 v251; // [rsp+78h] [rbp-450h]
  char v252; // [rsp+7Ch] [rbp-44Ch]
  unsigned __int16 v253; // [rsp+80h] [rbp-448h]
  __int64 v254[2]; // [rsp+88h] [rbp-440h] BYREF
  int v255; // [rsp+98h] [rbp-430h]
  __int64 v256; // [rsp+A0h] [rbp-428h]
  int v257; // [rsp+A8h] [rbp-420h]
  int v258; // [rsp+B0h] [rbp-418h] BYREF
  int v259; // [rsp+B4h] [rbp-414h]
  int v260; // [rsp+B8h] [rbp-410h] BYREF
  int v261; // [rsp+BCh] [rbp-40Ch] BYREF
  __int16 v262; // [rsp+C0h] [rbp-408h]
  int v263; // [rsp+C4h] [rbp-404h]
  _QWORD v264[2]; // [rsp+C8h] [rbp-400h] BYREF
  _QWORD *v265; // [rsp+D8h] [rbp-3F0h]
  int v266; // [rsp+E0h] [rbp-3E8h]
  int WindowCloakStateComponentUIAware; // [rsp+E4h] [rbp-3E4h]
  int v268; // [rsp+E8h] [rbp-3E0h]
  int v269; // [rsp+ECh] [rbp-3DCh]
  int v270; // [rsp+F0h] [rbp-3D8h]
  int v271; // [rsp+F4h] [rbp-3D4h]
  int v272; // [rsp+F8h] [rbp-3D0h]
  int v273; // [rsp+FCh] [rbp-3CCh]
  BOOL v274; // [rsp+100h] [rbp-3C8h]
  __int64 v275; // [rsp+108h] [rbp-3C0h]
  int v276; // [rsp+110h] [rbp-3B8h]
  int v277; // [rsp+114h] [rbp-3B4h]
  struct tagWND *v278; // [rsp+118h] [rbp-3B0h]
  __int64 v279; // [rsp+120h] [rbp-3A8h]
  __int64 v280; // [rsp+128h] [rbp-3A0h]
  __int128 v281; // [rsp+130h] [rbp-398h] BYREF
  int v282; // [rsp+140h] [rbp-388h]
  int v283; // [rsp+148h] [rbp-380h]
  int v284; // [rsp+14Ch] [rbp-37Ch]
  int v285; // [rsp+150h] [rbp-378h]
  int v286; // [rsp+154h] [rbp-374h]
  __int64 v287; // [rsp+158h] [rbp-370h]
  struct _KPROCESS *v288; // [rsp+160h] [rbp-368h]
  __int64 v289; // [rsp+168h] [rbp-360h]
  __int64 v290; // [rsp+170h] [rbp-358h]
  struct _KPROCESS *v291; // [rsp+178h] [rbp-350h]
  __int64 v292; // [rsp+180h] [rbp-348h]
  _OWORD v293[7]; // [rsp+190h] [rbp-338h] BYREF
  __m128i v294; // [rsp+200h] [rbp-2C8h]
  int v295; // [rsp+210h] [rbp-2B8h]
  char v296[8]; // [rsp+218h] [rbp-2B0h] BYREF
  __int64 v297; // [rsp+220h] [rbp-2A8h] BYREF
  char v298[8]; // [rsp+228h] [rbp-2A0h] BYREF
  __int64 v299; // [rsp+230h] [rbp-298h]
  __int64 v300; // [rsp+238h] [rbp-290h]
  __int64 v301; // [rsp+240h] [rbp-288h] BYREF
  __int64 v302; // [rsp+248h] [rbp-280h]
  __int64 v303; // [rsp+250h] [rbp-278h]
  __int128 v304; // [rsp+258h] [rbp-270h]
  __int128 v305; // [rsp+270h] [rbp-258h]
  __int128 v306; // [rsp+280h] [rbp-248h]
  _QWORD v307[3]; // [rsp+290h] [rbp-238h] BYREF
  _QWORD v308[5]; // [rsp+2A8h] [rbp-220h] BYREF
  __int64 v309; // [rsp+2D0h] [rbp-1F8h]
  __int128 v310; // [rsp+2E0h] [rbp-1E8h] BYREF
  _BYTE v311[16]; // [rsp+2F0h] [rbp-1D8h] BYREF
  __int128 v312; // [rsp+300h] [rbp-1C8h] BYREF
  __int128 v313; // [rsp+310h] [rbp-1B8h] BYREF
  __int128 v314; // [rsp+320h] [rbp-1A8h] BYREF
  __int128 v315; // [rsp+330h] [rbp-198h] BYREF
  __int128 v316; // [rsp+340h] [rbp-188h] BYREF
  _QWORD v317[4]; // [rsp+350h] [rbp-178h] BYREF
  __int128 v318; // [rsp+370h] [rbp-158h] BYREF
  _QWORD v319[3]; // [rsp+380h] [rbp-148h] BYREF
  _QWORD v320[3]; // [rsp+398h] [rbp-130h] BYREF
  _QWORD v321[3]; // [rsp+3B0h] [rbp-118h] BYREF
  _QWORD v322[3]; // [rsp+3C8h] [rbp-100h] BYREF
  __int64 v323[5]; // [rsp+3E0h] [rbp-E8h] BYREF
  char v324[16]; // [rsp+408h] [rbp-C0h] BYREF
  char v325[16]; // [rsp+418h] [rbp-B0h] BYREF
  char v326[16]; // [rsp+428h] [rbp-A0h] BYREF
  char v327[16]; // [rsp+438h] [rbp-90h] BYREF
  char v328[16]; // [rsp+448h] [rbp-80h] BYREF
  char v329[16]; // [rsp+458h] [rbp-70h] BYREF
  __int128 v330; // [rsp+468h] [rbp-60h] BYREF
  struct tagRECT v331; // [rsp+478h] [rbp-50h] BYREF

  v291 = a4;
  v287 = a3;
  v276 = a1;
  v283 = a1;
  v274 = a1;
  v286 = a1;
  v303 = a2;
  v288 = a4;
  v19 = (__int64)a10;
  v275 = (__int64)a10;
  v280 = a12;
  v279 = a13;
  v273 = 0;
  v263 = 0;
  v272 = 0;
  v266 = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v254);
  v330 = 0uLL;
  v268 = 5;
  v282 = 5;
  v289 = 0LL;
  v292 = gptiCurrent;
  v269 = 0;
  v270 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v20 = 0;
  v249 = 0;
  v281 = 0uLL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>((__int64)v264, a11);
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
    goto LABEL_3;
  }
  v22 = a1 & 0x7FFFFFFF;
  if ( a1 >= 0 )
    v22 = a1;
  v23 = 800;
  if ( a1 >= 0 )
    LOWORD(v23) = 0;
  v271 = v23;
  v24 = *(_QWORD *)(gptiCurrent + 448LL);
  v290 = v24;
  v300 = v24;
  if ( a10 )
  {
    if ( *((_QWORD *)a10 + 3) != v24 )
      goto LABEL_3;
  }
  v25 = a16;
  v257 = a16;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 416LL)) )
    {
LABEL_12:
      v21 = 5LL;
      goto LABEL_559;
    }
    v20 = 1;
    v249 = 1;
    v25 = v257;
  }
  if ( (v25 & 2) != 0 && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 416LL)) )
    goto LABEL_12;
  v26 = a14;
  if ( a14 )
  {
    if ( !(unsigned int)IsValidBand(a14)
      || a14 == 15
      || (v27 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 812LL), (v27 & 0x30) == 0x10)
      && (v27 & 0x200) == 0
      && a14 == 1
      && !v20
      && !(unsigned int)HasMessageRootWindow(a10) )
    {
LABEL_3:
      v21 = 87LL;
LABEL_559:
      UserSetLastError(v21);
      goto LABEL_560;
    }
  }
  v255 = HIWORD(a5) & 0xC000;
  v262 = HIWORD(a5) & 0xC000;
  v277 = (_WORD)v255 == 0x4000;
  v285 = v277;
  v28 = gptiCurrent;
  if ( (_WORD)v255 != 0x4000 )
  {
    if ( (unsigned int)ShouldSetNoOwner(*(_QWORD *)(gptiCurrent + 416LL), a10) )
      v19 = 0LL;
    v275 = v19;
  }
  if ( !v19 || (unsigned int)IsDesktopWindow(v19) )
  {
    if ( !a14 )
    {
      if ( (unsigned int)IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 416LL)) )
      {
        v249 = 1;
        v26 = 15;
      }
      else if ( (*(_DWORD *)(v30 + 812) & 2) != 0 && (v22 & 8) != 0 )
      {
        v26 = 2;
      }
      else
      {
        v26 = 1;
      }
    }
  }
  else
  {
    v29 = *(_QWORD *)(v19 + 40);
    v249 = *(_BYTE *)(v29 + 234) & 0x20;
    if ( a14 )
    {
      if ( a14 != *(_DWORD *)(v29 + 236) )
        goto LABEL_3;
    }
    else
    {
      v26 = *(_DWORD *)(v29 + 236);
    }
  }
  v284 = v249;
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(gptiCurrent + 416LL), v26, v19) )
    goto LABEL_12;
  v248 = v22;
  if ( (v22 & 0x400000) != 0 )
    goto LABEL_52;
  if ( !v19 )
  {
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v32 = v22;
      v248 = v22;
      if ( (_WORD)a2 == 0x8002 )
        goto LABEL_53;
    }
    v248 = v22;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
    v32 = v22;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 816) & 1) == 0 )
      goto LABEL_53;
    v32 = v22 | 0x400000;
    goto LABEL_47;
  }
  v248 = v22;
  if ( (_WORD)v255 != 0x4000 )
  {
LABEL_52:
    v32 = v248;
    goto LABEL_53;
  }
  v32 = v22;
  v248 = v22;
  if ( (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 26LL) & 0x50) == 0x40 )
  {
    v32 = v22 | 0x400000;
LABEL_47:
    v248 = v32;
  }
LABEL_53:
  if ( (v32 & 0x2200000) == 0x2200000 )
    goto LABEL_3;
  if ( *(_QWORD *)(gptiCurrent + 584LL) && !RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 880LL), 2u) )
    goto LABEL_12;
  if ( (_WORD)v255 != 0x4000 )
    goto LABEL_60;
  if ( !v19 )
  {
    v21 = 1406LL;
    goto LABEL_559;
  }
  if ( !(unsigned int)ValidateParentDepth(0LL, v19) )
    goto LABEL_3;
  while ( 1 )
  {
LABEL_60:
    v34 = v287;
    if ( (v287 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v296);
      if ( RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, *(NTSTRSAFE_PCWSTR *)(v34 + 8)) < 0 )
      {
        LOWORD(v34) = 0;
        v253 = 0;
        v270 = 1;
      }
      else
      {
        LOWORD(v34) = UserFindAtom(&gawchAtomScratch);
        v253 = v34;
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v296);
    }
    else
    {
      v253 = v287;
    }
    if ( (_WORD)v34 )
    {
      ClassPtr = (__int64 *)GetClassPtr((unsigned __int16)v34, *(_QWORD *)(v28 + 416), v280);
      if ( ClassPtr )
        break;
    }
LABEL_96:
    if ( v270
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x2000) != 0
      || ((a2 & 0xFFFFFFFFFFFF0000uLL) == 0 ? (v53 = (wchar_t *)a2) : (v53 = *(wchar_t **)(a2 + 8)),
          !(unsigned int)RegisterDefaultClass(v53)) )
    {
      v21 = 1407LL;
      goto LABEL_559;
    }
    v270 = 1;
    v28 = gptiCurrent;
  }
  v36 = *ClassPtr;
  if ( *ClassPtr != *(_QWORD *)v254[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v254);
    if ( v36 )
    {
      v254[0] = *(_QWORD *)(v36 + 128);
      ++*(_DWORD *)(v254[0] + 8);
    }
    else
    {
      v254[0] = gSmartObjNullRef;
    }
  }
  if ( (unsigned int)NeedsWindowEdge(a5, v248, a15 >= 0x400u) )
    v39 = v38 | 0x100;
  else
    v39 = v38 & 0xFFFFFEFF;
  v248 = v39;
  LOBYTE(v37) = 1;
  v40 = HMAllocObject(v28, v290, v37, 296LL);
  v256 = v40;
  v42 = (struct tagWND *)v40;
  v278 = (struct tagWND *)v40;
  if ( !v40 )
    goto LABEL_560;
  *(_QWORD *)(*(_QWORD *)(v40 + 40) + 296LL) = 0LL;
  *(_QWORD *)(v40 + 272) = 0LL;
  *(_DWORD *)(*(_QWORD *)(v40 + 40) + 232LL) &= ~0x40000000u;
  *(_DWORD *)(*(_QWORD *)(v40 + 40) + 292LL) = W32GetCurrentThreadDpiHostingBehavior();
  if ( (_WORD)v255 != 0x4000 || !v19 || v19 == GetThreadDesktopWindow(0LL) )
    goto LABEL_87;
  v44 = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v43);
  if ( ThreadWin32Thread )
  {
    v46 = *(_QWORD *)(ThreadWin32Thread + 448);
    if ( v46 )
      v44 = *(_QWORD *)(v46 + 104);
  }
  if ( v19 == v44
    || *(_QWORD *)(gptiCurrent + 416LL) != *(_QWORD *)(*(_QWORD *)(v19 + 16) + 416LL)
    || (unsigned int)IsChildWindowDpiIsolationEnabled(0LL, v19) )
  {
LABEL_87:
    *(_DWORD *)(*((_QWORD *)v42 + 5) + 288LL) = W32GetCurrentThreadDpiAwarenessContext();
    if ( (*(_DWORD *)(*((_QWORD *)v42 + 5) + 288LL) & 0x4000000F) == 0
      && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v48) + 472) + 224LL) & 0x40) != 0 )
    {
      *(_DWORD *)(*((_QWORD *)v42 + 5) + 288LL) |= 0x40000000u;
    }
  }
  else
  {
    *(_DWORD *)(*((_QWORD *)v42 + 5) + 288LL) = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 288LL);
    v47 = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 288LL);
    if ( (((unsigned __int8)v47 ^ (unsigned __int8)W32GetCurrentThreadDpiAwarenessContext()) & 0xF) != 0 )
      TraceChildWindowDpiTelemetry((__int64)v42, v19, 0);
  }
  v49 = *((_QWORD *)v42 + 5);
  v50 = *(_DWORD *)(v49 + 288);
  if ( (v50 & 0xF) == 2 && (v50 & 0xF0) == 0x20 )
  {
    v51 = 0x10000000;
    v52 = 0x20000000;
  }
  else
  {
    v51 = 0;
    v52 = 0;
  }
  *(_DWORD *)(v49 + 232) = v51 | *(_DWORD *)(v49 + 232) & 0xEFFFFFFF;
  *(_DWORD *)(*((_QWORD *)v42 + 5) + 232LL) = v52 | *(_DWORD *)(*((_QWORD *)v42 + 5) + 232LL) & 0xDFFFFFFF;
  tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((char *)v42 + 112, *(_QWORD *)v254[0]);
  *(_DWORD *)(*((_QWORD *)v42 + 5) + 28LL) = a5 & 0xEFFFFFFF;
  *(_DWORD *)(*((_QWORD *)v42 + 5) + 24LL) = v248 & 0xFDF7FFFF;
  *(_DWORD *)(*((_QWORD *)v42 + 5) + 200LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v254[0] + 8LL) + 80LL);
  *(_DWORD *)(*((_QWORD *)v42 + 5) + 252LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v254[0] + 8LL) + 84LL);
  if ( !(unsigned int)ReferenceClass(*(_QWORD *)v254[0], v42) )
  {
LABEL_95:
    HMFreeObject(v42);
    goto LABEL_96;
  }
  v54 = *((_QWORD *)v42 + 14);
  if ( v54 != *(_QWORD *)v254[0] )
  {
    SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(v254);
    if ( v54 )
    {
      v254[0] = *(_QWORD *)(v54 + 128);
      ++*(_DWORD *)(v254[0] + 8);
    }
    else
    {
      v254[0] = gSmartObjNullRef;
    }
  }
  if ( !(unsigned int)ClassLock(*(_QWORD *)v254[0], v308) )
  {
    DereferenceClass(*(struct tagPROCESSINFO **)(gptiCurrent + 416LL));
    goto LABEL_95;
  }
  *(_QWORD *)(*((_QWORD *)v42 + 5) + 224LL) = a17;
  if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v254[0] + 8LL) + 2LL) == *(_WORD *)(gpsi + 868LL) )
  {
    *(_QWORD *)(*((_QWORD *)v42 + 5) + 208LL) = 0LL;
  }
  else
  {
    v55 = *(__int64 **)(gptiCurrent + 776LL);
    v56 = 0LL;
    if ( v55 )
      v56 = *v55;
    *(_QWORD *)(*((_QWORD *)v42 + 5) + 208LL) = v56;
  }
  *(_DWORD *)(*((_QWORD *)v42 + 5) + 236LL) = v26;
  v57 = *((_QWORD *)v42 + 5);
  if ( *(_DWORD *)(v57 + 236) == 1 )
    v58 = 0;
  else
    v58 = IsTopLevelParent(v19);
  if ( v58 )
  {
    *(_DWORD *)(v57 + 24) |= 8u;
    v57 = *((_QWORD *)v42 + 5);
  }
  if ( v249 )
    *(_BYTE *)(v57 + 234) |= 0x20u;
  ++*(_DWORD *)(gptiCurrent + 884LL);
  memset(v293, 0, sizeof(v293));
  DWORD2(v293[4]) = v248;
  *((_QWORD *)&v293[0] + 1) = v280;
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v286 >= 0 )
    {
      *(_QWORD *)&v293[4] = *(_QWORD *)(a2 + 8);
      v293[6] = *(_OWORD *)a2;
    }
    else
    {
      v59 = *(_QWORD *)(*(_QWORD *)v254[0] + 104LL);
      *(_QWORD *)&v293[4] = v59;
      if ( (v59 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString(&v293[6], v59);
    }
  }
  else
  {
    *(_QWORD *)&v293[4] = a2;
  }
  if ( v291 )
  {
    *((_QWORD *)&v293[3] + 1) = *((_QWORD *)v291 + 1);
    v293[5] = *(_OWORD *)v291;
  }
  LODWORD(v293[3]) = a5;
  v60 = a6;
  v251 = a6;
  v247 = a7;
  *((_QWORD *)&v293[2] + 1) = __PAIR64__(a6, a7);
  v250 = a8;
  v263 = a9;
  *(_QWORD *)&v293[2] = __PAIR64__(a8, a9);
  if ( v19 )
    *((_QWORD *)&v293[1] + 1) = *(_QWORD *)v19;
  else
    *((_QWORD *)&v293[1] + 1) = 0LL;
  v61 = v255;
  if ( (_WORD)v255 == 0x4000 )
  {
    *(_QWORD *)&v293[1] = SmartObjStackRef<tagMENU>::operator tagMENU *(v264);
    *(_DWORD *)(*((_QWORD *)v42 + 5) + 24LL) |= *(_DWORD *)(*(_QWORD *)(v19 + 40) + 24LL) & 0xC4000000;
  }
  else if ( SmartObjStackRef<tagMENU>::operator==((__int64)v264) )
  {
    *(_QWORD *)&v293[1] = 0LL;
  }
  else
  {
    v65 = v265;
    if ( !v265 )
      v65 = *(_QWORD **)v264[0];
    *(_QWORD *)&v293[1] = *v65;
  }
  *(_QWORD *)&v293[0] = v279;
  v307[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v307;
  v307[1] = v42;
  _InterlockedAdd((volatile signed __int32 *)v42 + 2, 1u);
  if ( a6 == 0x80000000 || (v66 = a6, a6 == 0x8000) )
    v66 = 0;
  v331.left = v66;
  if ( v62 == 0x80000000 || v62 == 0x8000 )
  {
    v67 = 0;
    v331.top = 0;
  }
  else
  {
    v67 = v62;
    v331.top = v62;
  }
  if ( v63 == 0x80000000 || (v68 = v63, v63 == 0x8000) )
    v68 = 0;
  v331.right = v68 + v66;
  if ( v64 == 0x80000000 || (v69 = v64, v64 == 0x8000) )
    v69 = 0;
  v331.bottom = v67 + v69;
  InheritedMonitor = (__int64 *)GetInheritedMonitor(v42);
  if ( InheritedMonitor )
  {
    v255 = 1;
  }
  else
  {
    v255 = 0;
    if ( v19 )
      InheritedMonitor = (__int64 *)ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 256LL));
  }
  if ( InheritedMonitor || (InheritedMonitor = (__int64 *)MonitorFromRect(&v331), v71 = 0LL, InheritedMonitor) )
    v71 = *InheritedMonitor;
  *(_QWORD *)(*((_QWORD *)v42 + 5) + 256LL) = v71;
  *(_DWORD *)(*((_QWORD *)v42 + 5) + 284LL) = *(unsigned __int16 *)(InheritedMonitor[5] + 64);
  *(_DWORD *)(*((_QWORD *)v42 + 5) + 232LL) &= ~0x4000000u;
  if ( v61 != 0x4000 || (unsigned int)IsDpiBoundaryBetweenWindows(v42, v19) )
    UpdateTopLevelWindowDPITransform(v42, InheritedMonitor);
  if ( v61 == 0x4000 && v19 )
    *(_WORD *)(*((_QWORD *)v42 + 5) + 286LL) = *(_WORD *)(*(_QWORD *)(v19 + 40) + 286LL);
  v72 = *((_QWORD *)v42 + 3);
  if ( v72 )
  {
    v310 = *(_OWORD *)LockPointer(v324, (char *)v42 + 80, *(_QWORD *)(v72 + 104));
    HMAssignmentLock(&v310);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v42) )
  {
    ThreadDesktopWindow = (__int64 *)v19;
    if ( v61 != 0x4000 && (!v19 || v19 != *(_QWORD *)(*(_QWORD *)(v19 + 24) + 104LL)) )
      ThreadDesktopWindow = (__int64 *)GetThreadDesktopWindow(0LL);
    memset(v323, 0, sizeof(v323));
    GetWindowCompositionInfo((__int64)v42, (__int64)v323);
    v74 = *(struct _KPROCESS **)(**((_QWORD **)v42 + 2) + 544LL);
    v288 = v74;
    if ( ThreadDesktopWindow )
      v279 = *ThreadDesktopWindow;
    else
      v279 = 0LL;
    ProcessId = (unsigned int)PsGetProcessId(v74);
    v76 = ***(_QWORD ***)(*((_QWORD *)v42 + 3) + 8LL);
    v77 = (_DWORD *)*((_QWORD *)v42 + 5);
    v78 = v77[58];
    v79 = v77[6];
    v80 = v77[7];
    ProcessSequenceNumber = PsGetProcessSequenceNumber(v288);
    ClassStyle = DwmGetClassStyle((__int64)v278);
    v86 = (void *)ReferenceDwmApiPort(v84, v83, v85);
    v246 = v78;
    v42 = v278;
    DwmAsyncChildCreate(
      v86,
      *(_QWORD *)v278,
      v279,
      v80,
      v79,
      v246,
      ClassStyle,
      (__int128 *)v323,
      v76,
      (__int128 *)&v331.left,
      ProcessId,
      ProcessSequenceNumber);
    v19 = v275;
    v60 = a6;
  }
  *(_QWORD *)(*((_QWORD *)v42 + 5) + 32LL) = v280;
  v87 = v271;
  *(_QWORD *)(*((_QWORD *)v42 + 5) + 120LL) = MapClientNeuterToClientPfn(
                                                *(_QWORD *)v254[0],
                                                0LL,
                                                (unsigned __int16)v271);
  SetOrClrWF(*(_WORD *)(*(_QWORD *)(*(_QWORD *)v254[0] + 8LL) + 6LL) & 1, v42, 516LL, 1LL);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v254[0] + 8LL) + 84LL) )
  {
    v88 = Win32AllocPoolZInit(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)v254[0] + 8LL) + 84LL), 1937208149LL);
    *((_QWORD *)v42 + 34) = v88;
    if ( !v88 )
      goto LABEL_231;
  }
  v92 = *(_BYTE *)(*((_QWORD *)v42 + 5) + 18LL) & 4;
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && !v92 )
  {
    *(_DWORD *)(*((_QWORD *)v42 + 5) + 200LL) = (*(_DWORD *)(*((_QWORD *)v42 + 5) + 200LL) + 7) & 0xFFFFFFF8;
    *(_DWORD *)(*((_QWORD *)v42 + 5) + 200LL) += 16;
  }
  v93 = *(unsigned int *)(*((_QWORD *)v42 + 5) + 200LL);
  if ( (_DWORD)v93 )
  {
    v94 = xxxClientAllocWindowClassExtraBytes(v93);
    v308[4] = v94;
    if ( v94 )
    {
      if ( !(unsigned int)IsWindowBeingDestroyed(v42) )
      {
        v89 = gSharedInfo[0];
        v90 = LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)v42;
        LOBYTE(v90) = *(_BYTE *)(v90 + gSharedInfo[1] + 25);
        if ( (v90 & 1) == 0 )
        {
          v297 = 0LL;
          if ( !(unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned __int64>(
                                   (char *)v42 + 292,
                                   &v297) )
          {
            v95 = *((_QWORD *)v42 + 5);
            if ( (*(_DWORD *)(v95 + 232) & 0x800) != 0 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v95);
              v95 = *(_QWORD *)(v256 + 40);
            }
            *(_QWORD *)(v95 + 296) = v94;
            v87 = v271;
            goto LABEL_186;
          }
        }
      }
    }
LABEL_231:
    v101 = gptiCurrent;
    goto LABEL_232;
  }
LABEL_186:
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && !v92 )
  {
    v96 = *((_QWORD *)v42 + 5);
    v97 = *(_QWORD *)(v96 + 296);
    v98 = *(int *)(v96 + 200);
    v309 = *(_QWORD *)(v96 + 120);
    *(_QWORD *)(v98 + v97 - 16) = v309;
    if ( v274 >= 0 )
      v99 = *(_QWORD *)(gpsi + 768LL);
    else
      v99 = *(_QWORD *)(gpsi + 576LL);
    *(_QWORD *)(*((_QWORD *)v42 + 5) + 120LL) = v99;
  }
  if ( *(_QWORD *)(*(_QWORD *)v254[0] + 80LL)
    && !*(_QWORD *)(*(_QWORD *)v254[0] + 112LL)
    && (unsigned int)PsGetWin32KFilterSet() != 5 )
  {
    xxxCreateClassSmIcon(v254);
  }
  SetOrClrWF(1LL, v42, v87, 1LL);
  if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v254[0] + 8LL) + 6LL) & 2) != 0
    || v276 < 0
    && (v253 == *(_WORD *)(gpsi + 868LL)
     || v253 == *(_WORD *)(gpsi + 878LL)
     || v253 == *(_WORD *)(gpsi + 882LL)
     || v253 == *(_WORD *)(gpsi + 904LL)
     || v253 == *(_WORD *)(gpsi + 870LL)
     || v253 == *(_WORD *)(gpsi + 874LL)
     || v253 == *(_WORD *)(gpsi + 880LL)
     || v253 == *(_WORD *)(gpsi + 898LL)
     || v253 == *(_WORD *)(gpsi + 872LL)) )
  {
    SetOrClrWF(1LL, v42, 520LL, 1LL);
  }
  v101 = gptiCurrent;
  AppCompatFlags = GetAppCompatFlags(gptiCurrent, v100);
  v104 = AppCompatFlags;
  if ( (AppCompatFlags & 0x8000000) != 0 )
  {
    SetOrClrWF(1LL, v42, 1032LL, 1LL);
    v248 &= 0x3Fu;
    DWORD2(v293[4]) = BYTE8(v293[4]) & 0x3F;
  }
  *(_WORD *)(*((_QWORD *)v42 + 5) + 40LL) = 0;
  if ( a15 < 0x30Au )
  {
    if ( (v104 & 0x40) != 0 )
      SetOrClrWF(1LL, v42, 1600LL, 1LL);
    v105 = a15;
  }
  else
  {
    SetOrClrWF(1LL, v42, 1281LL, 1LL);
    v105 = a15;
    if ( a15 >= 0x400u )
    {
      SetOrClrWF(1LL, v42, 1282LL, 1LL);
      if ( a15 >= 0x500u )
        SetOrClrWF(1LL, v42, 1284LL, 1LL);
    }
  }
  v106 = v105;
  if ( v105 <= *(_WORD *)(gptiCurrent + 628LL) )
    v106 = *(_DWORD *)(gptiCurrent + 628LL);
  *((_DWORD *)v42 + 60) = v106;
  v107 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v103);
  if ( *(_DWORD *)(v107 + 624) <= 0x9900u )
    v108 = *(_DWORD *)(v107 + 640);
  else
    v108 = 0;
  if ( (v108 & 0x10000000) != 0 )
    SetOrClrWF(1LL, v42, 2688LL, 1LL);
  if ( gihmodUserApiHook >= 0 )
    xxxLoadUserApiHook();
  if ( (unsigned int)WantImeWindow((struct tagWND *)v19, v42) )
    xxxCallCtfHook(5, 3, *(_QWORD *)v42, 0LL);
  if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL) | *(_BYTE *)(gptiCurrent + 672LL)) & 0x40) != 0 )
  {
    v301 = (__int64)v293;
    v302 = 0LL;
    if ( (unsigned int)xxxCallHook(3, *(_QWORD *)v42, (__int64)&v301, 5) )
      goto LABEL_232;
    v60 = HIDWORD(v293[2]);
    v251 = HIDWORD(v293[2]);
    v247 = DWORD2(v293[2]);
    v250 = DWORD1(v293[2]);
    v263 = v293[2];
    v91 = v302;
    v275 = v302;
  }
  else
  {
    v275 = 0LL;
  }
  v118 = *((_QWORD *)v42 + 5);
  LOBYTE(v89) = *(_BYTE *)(v118 + 31) & 0xC0;
  v252 = v89;
  v90 = (_BYTE)v89 == 64;
  v274 = (_BYTE)v89 == 64;
  if ( (_BYTE)v89 == 64 && !v19 )
    goto LABEL_232;
  if ( (_DWORD)v90 != v277 )
  {
    SmartObjStackRef<tagMENU>::operator=(v264, 0LL);
    v118 = *(_QWORD *)(v256 + 40);
    LOBYTE(v89) = v252;
  }
  v119 = *(_BYTE *)(v118 + 31) & 0xC0;
  LOBYTE(v262) = v119;
  if ( v119 )
  {
    if ( v60 == 0x80000000 || v60 == 0x8000 )
    {
      v60 = 0;
      v251 = 0;
      v247 = 0;
    }
    v120 = v250;
    if ( v250 == 0x80000000 || v250 == 0x8000 )
    {
      v120 = 0;
      v250 = 0;
      v263 = 0;
    }
  }
  else
  {
    v120 = v250;
  }
  v258 = v60;
  v121 = v247;
  v259 = v247;
  v260 = v120;
  v261 = v263;
  if ( (_BYTE)v89 == 64 )
  {
    v281 = *(_OWORD *)(*(_QWORD *)(v19 + 40) + 104LL);
    if ( (unsigned int)IsDpiBoundaryBetweenWindows(v42, v19) )
    {
      *((_DWORD *)v42 + 52) = 0;
      *((_DWORD *)v42 + 53) = 0;
      LogicalToPhysicalInPlaceRectWithSubpixel(v19, &v281, (char *)v42 + 208);
      PhysicalToLogicalInPlaceRectWithSubpixel(v42, &v281, (char *)v42 + 208);
      v119 = v262;
    }
    if ( v19 != GetDesktopWindow((__int64)v42) )
    {
      v60 = v251 + v281;
      v258 = v251 + v281;
      v121 = DWORD1(v281) + v247;
      v259 = DWORD1(v281) + v247;
    }
    v275 = 1LL;
  }
  if ( v119 )
    goto LABEL_318;
  SetOrClrWF(1LL, v42, 3844LL, 1LL);
  v273 = 192;
  if ( (*(_BYTE *)(*((_QWORD *)v42 + 5) + 21LL) & 2) != 0 )
    SetOrClrWF(1LL, v42, 2305LL, 1LL);
  SetOrClrWF(1LL, v42, 16LL, 1LL);
  if ( (v251 == 0x80000000 || v251 == 0x8000) && v121 != 0x80000000 )
  {
    v122 = v268;
    if ( v121 != 0x8000 )
      v122 = v121;
    v268 = v122;
  }
  if ( !v255 && (v251 == 0x80000000 || v251 == 0x8000 || v250 == 0x80000000 || v250 == 0x8000) )
  {
    v123 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 688LL);
    if ( v123 )
    {
      v124 = (struct tagMONITOR *)ValidateHmonitor(v123);
      goto LABEL_281;
    }
    if ( v19 )
    {
      v124 = _MonitorFromWindowInternal((struct tagWND *)v19, 2u, 0);
LABEL_281:
      v125 = (__int64)v124;
    }
    else
    {
      v125 = 0LL;
    }
    if ( !v125 )
    {
      v125 = *(_QWORD *)(GetDispInfo() + 96);
      goto LABEL_288;
    }
  }
  else
  {
    v125 = 0LL;
LABEL_288:
    if ( !v125 )
    {
      v125 = ValidateHmonitor(*(_QWORD *)(*((_QWORD *)v42 + 5) + 256LL));
      if ( !v125 )
      {
        if ( v255 )
          v125 = GetInheritedMonitor(v42);
        else
          v125 = 0LL;
        if ( v125 || (v125 = MonitorFromRect((struct tagRECT *)(*((_QWORD *)v42 + 5) + 88LL)), v126 = 0LL, v125) )
          v126 = *(_QWORD *)v125;
        *(_QWORD *)(*((_QWORD *)v42 + 5) + 256LL) = v126;
        *(_WORD *)(*((_QWORD *)v42 + 5) + 284LL) = *(_WORD *)(*(_QWORD *)(v125 + 40) + 64LL);
        UpdateTopLevelWindowDPITransform(v42, v125);
      }
    }
  }
  SetTiledRect(v42, &v330, v125);
  v127 = v251;
  if ( v251 == 0x80000000 || v251 == 0x8000 )
  {
    v130 = *(_DWORD **)(gptiCurrent + 416LL);
    if ( (v130[200] & 4) != 0 )
    {
      v266 = 1;
      v127 = v130[196];
      v131 = v130[197];
    }
    else
    {
      v127 = v330;
      v131 = DWORD1(v330);
    }
    v259 = v131;
    v121 = v131;
    v247 = v131;
    v258 = v127;
    v60 = v127;
    v251 = v127;
    v129 = 1;
  }
  else
  {
    v128 = *(_WORD *)(v125 + 226);
    v129 = v272;
    if ( v128 )
      *(_WORD *)(v125 + 226) = v128 - 1;
  }
  if ( v250 == 0x80000000 || v250 == 0x8000 )
  {
    v101 = gptiCurrent;
    v135 = *(_DWORD **)(gptiCurrent + 416LL);
    if ( (v135[200] & 2) != 0 )
    {
      v266 = 1;
      v260 = v135[198];
      v136 = v135[199];
    }
    else
    {
      v260 = DWORD2(v330) - v127;
      v136 = HIDWORD(v330) - v247;
    }
    v261 = v136;
    goto LABEL_319;
  }
  if ( !v129 )
    goto LABEL_318;
  v294 = *(__m128i *)GetMonitorRect(v325, v125);
  v132 = _mm_srli_si128(v294, 8).m128i_u64[0];
  v133 = v250 + v60 - v132;
  v134 = v263 + v121 - HIDWORD(v132);
  if ( v133 > 0 )
  {
    v251 -= v133;
    v258 = v251;
    if ( v251 < v294.m128i_i32[0] )
    {
      v251 = v294.m128i_i32[0];
      v258 = v294.m128i_i32[0];
    }
  }
  if ( v134 <= 0 )
  {
LABEL_318:
    v101 = gptiCurrent;
    goto LABEL_319;
  }
  v247 -= v134;
  v259 = v247;
  v101 = gptiCurrent;
  if ( v247 < v294.m128i_i32[1] )
  {
    v247 = v294.m128i_i32[1];
    v259 = v294.m128i_i32[1];
  }
LABEL_319:
  if ( v266 )
    *(_DWORD *)(*(_QWORD *)(v101 + 416) + 800LL) &= 0xFFFFFFF9;
  v137 = *((_QWORD *)v42 + 5);
  v138 = *(_BYTE *)(v137 + 31) & 0xC0;
  if ( v138 == (char)0x80 || v138 == -64 )
  {
    SetOrClrWF(1LL, v42, 3844LL, 1LL);
    v109 = v256;
    v137 = *(_QWORD *)(v256 + 40);
  }
  else
  {
    v109 = v256;
  }
  *(_WORD *)(v137 + 30) |= v273;
  if ( SmartObjStackRef<tagMENU>::operator==((__int64)v264) && v252 != 64 && *(_QWORD *)(*(_QWORD *)v254[0] + 96LL) )
  {
    v139 = v42;
    if ( *((_QWORD *)v42 + 10) )
      v139 = (struct tagWND *)*((_QWORD *)v42 + 10);
    zzzLockDisplayAreaAndInvalidateDCCache(v139, 16LL, 0LL);
    RtlInitUnicodeStringOrId(v311, *(_QWORD *)(*(_QWORD *)v254[0] + 96LL));
    Menu = xxxClientLoadMenu(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v254[0] + 8LL) + 64LL), v311);
    SmartObjStackRef<tagMENU>::operator=(v264, Menu);
    if ( v274 != ((*(_BYTE *)(*((_QWORD *)v42 + 5) + 31LL) & 0xC0) == 64) )
    {
      v141 = SmartObjStackRef<tagMENU>::operator tagMENU *(v264);
      DestroyMenu(v141);
      SmartObjStackRef<tagMENU>::operator=(v264, 0LL);
    }
    if ( SmartObjStackRef<tagMENU>::operator==((__int64)v264) )
    {
      *(_QWORD *)&v293[1] = 0LL;
    }
    else
    {
      v142 = v265;
      if ( !v265 )
        v142 = *(_QWORD **)v264[0];
      *(_QWORD *)&v293[1] = *v142;
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)v42 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    v90 = SmartObjStackRef<tagMENU>::operator tagMENU *(v264);
    *(_QWORD *)(*((_QWORD *)v42 + 5) + 152LL) = v90;
    *((_QWORD *)v42 + 18) = v90;
  }
  else
  {
    LockWndMenuWorker(v42, 0LL, v264);
  }
  LOBYTE(v90) = *(_BYTE *)(*((_QWORD *)v42 + 5) + 31LL) & 0xC0;
  if ( (_BYTE)v90 != 64 )
  {
    v143 = v257;
    if ( (v257 & 4) != 0 )
      CoreWindowProp::ChangeRole(v42, 1, 1u);
    v312 = *(_OWORD *)LockPointer(v326, (char *)v42 + 184, v42);
    HMAssignmentLock(&v312);
    if ( (unsigned int)IsTopLevelParent(v19) )
    {
      v146 = (_QWORD *)((char *)v42 + 96);
      v313 = *(_OWORD *)LockPointer(v327, (char *)v42 + 96, 0LL);
      HMAssignmentLock(&v313);
    }
    else
    {
      NonChildAncestor = GetNonChildAncestor(v144);
      if ( !(unsigned int)ValidateOwnerDepth(v42, NonChildAncestor) )
      {
LABEL_343:
        UserSetLastError(87LL);
        goto LABEL_233;
      }
      if ( NonChildAncestor )
      {
        *(_DWORD *)(*((_QWORD *)v42 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(NonChildAncestor + 40) + 236LL);
        SetOrClrWF(*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 234LL) & 0x20, v42, 55840LL, 1LL);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)NonChildAncestor);
      }
      v146 = (_QWORD *)((char *)v42 + 96);
      v318 = *(_OWORD *)LockPointer(v328, (char *)v42 + 96, NonChildAncestor);
      HMAssignmentLock(&v318);
      v147 = *((_QWORD *)v42 + 12);
      if ( v147
        && ((*(_BYTE *)(*(_QWORD *)(v147 + 40) + 24LL) & 8) != 0 || *(_DWORD *)(*((_QWORD *)v42 + 5) + 236LL) != 1) )
      {
        SetOrClrWF(1LL, v42, 2056LL, 1LL);
        v147 = *(_QWORD *)(v109 + 96);
      }
      if ( v253 != *(_WORD *)(gpsi + 898LL) )
      {
        if ( v147 )
        {
          v148 = *(_QWORD *)(v147 + 16);
          if ( v148 != gptiCurrent )
            zzzAttachThreadInput(gptiCurrent, v148, 1LL);
        }
      }
      v143 = v257;
    }
    if ( !*v146 && !(unsigned int)CoreWindowProp::IsComponent(v42) )
    {
      if ( (v149 = *((_QWORD *)v42 + 5), v150 = *(_DWORD *)(v149 + 236), v150 <= 0xF)
        && (v151 = 44800, _bittest(&v151, v150))
        || (*(_BYTE *)(v149 + 234) & 0x20) != 0 )
      {
        WindowCloakStateComponentUIAware = 2;
      }
    }
    if ( v19 && v19 == *(_QWORD *)(*(_QWORD *)(v19 + 24) + 104LL) )
    {
      v101 = gptiCurrent;
    }
    else
    {
      v19 = GetThreadDesktopWindow(0LL);
      v101 = gptiCurrent;
      v317[0] = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = v317;
      v317[1] = v19;
      if ( v19 )
        _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
      v269 = 1;
    }
    if ( (v143 & 2) == 0 )
      goto LABEL_377;
    if ( !*(_QWORD *)(v101 + 1376) )
    {
      SetOrClrWF(1LL, v42, 55872LL, 1LL);
      *(_DWORD *)(v101 + 1200) |= 0x40000u;
      *(_DWORD *)(*(_QWORD *)(v101 + 424) + 388LL) |= 0x2000000u;
      if ( *(_QWORD *)(v101 + 1368)
        || (KernelEvent = CreateKernelEvent(1LL, 0LL), (*(_QWORD *)(v101 + 1368) = KernelEvent) != 0LL) )
      {
        *(_QWORD *)&v305 = v101 + 1376;
        *((_QWORD *)&v305 + 1) = v42;
        v314 = v305;
        HMAssignmentLock(&v314);
        goto LABEL_377;
      }
      goto LABEL_233;
    }
    goto LABEL_343;
  }
  if ( !v19 )
    goto LABEL_233;
  if ( (v257 & 2) != 0 )
    goto LABEL_343;
LABEL_377:
  if ( (*(_DWORD *)(*((_QWORD *)v42 + 5) + 232LL) & 8) != 0 )
  {
    v153 = *((_QWORD *)v42 + 10);
    UnlinkWindow(v42, v153);
  }
  else
  {
    v153 = v289;
  }
  if ( !(unsigned int)IsTopLevelParent(v19) )
  {
    *(_DWORD *)(*((_QWORD *)v42 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(v19 + 40) + 236LL);
    SetOrClrWF(*(_BYTE *)(*(_QWORD *)(v19 + 40) + 234LL) & 0x20, v42, 55840LL, 1LL);
  }
  if ( v19 && !(unsigned int)ValidateNewParent(v42, v19) )
  {
    v101 = gptiCurrent;
    goto LABEL_233;
  }
  v154 = (__int64 *)((char *)v42 + 80);
  v315 = *(_OWORD *)LockPointer(v329, (char *)v42 + 80, v19);
  HMAssignmentLock(&v315);
  if ( v19 )
    v155 = (unsigned int)-__CFSHR__(*(_DWORD *)(*(_QWORD *)(v19 + 40) + 232LL), 26);
  else
    v155 = 0LL;
  SetWindowSubtreeCoreWindowStatus(v42, v155);
  v156 = *((_QWORD *)v42 + 5);
  if ( (*(_DWORD *)(v156 + 288) & 0xF) == 2 )
  {
    *(_DWORD *)(v156 + 232) ^= (*(_DWORD *)(v156 + 232) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics((__int64)v42) << 27)) & 0x8000000;
    v156 = *(_QWORD *)(v256 + 40);
  }
  if ( (*(_BYTE *)(v156 + 21) & 1) == 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v254[0] + 8LL) + 8LL) & 0x80u) != 0
    && (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 31LL) & 2) == 0 )
  {
    SetOrClrWF(0LL, v42, 3846LL, 1LL);
  }
  v157 = WindowCloakStateComponentUIAware;
  v158 = v256;
  if ( (WindowCloakStateComponentUIAware & 2) == 0 )
    *(_BYTE *)(*(_QWORD *)(v256 + 40) + 234LL) |= 0x10u;
  if ( v157 )
  {
    v159 = zzzSetWindowCompositionCloak(v42, 0LL, v157);
    if ( v159 < 0 )
    {
      v160 = RtlNtStatusToDosError(v159);
      UserSetLastError(v160);
      goto LABEL_231;
    }
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v298);
  if ( v153 )
    zzzLockDisplayAreaAndInvalidateDCCache(v153, 16LL, 0LL);
  if ( v19 )
    zzzLockDisplayAreaAndInvalidateDCCache(v19, 16LL, 0LL);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v298);
  if ( (*(_BYTE *)(*((_QWORD *)v42 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    v101 = gptiCurrent;
    if ( !(unsigned int)IsTopLevelWindow((__int64)v42) )
    {
      v162 = *v154;
      if ( *v154 )
      {
        if ( gptiCurrent != *(_QWORD *)(v162 + 16) )
        {
          if ( v19 != v162 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v161);
            v162 = *(_QWORD *)(v158 + 80);
          }
          zzzAttachThreadInput(gptiCurrent, *(_QWORD *)(v162 + 16), 1LL);
          v163 = *v154;
          v164 = 0LL;
          v165 = *((_QWORD *)v42 + 3);
          if ( v165 )
            v164 = *(_QWORD *)(v165 + 104);
          if ( v163 != v164
            && (((unsigned __int8)*(_DWORD *)(*(_QWORD *)(v163 + 40) + 288LL) ^ *(_BYTE *)(*((_QWORD *)v42 + 5) + 288LL)) & 0xF) != 0
            && !(unsigned int)IsChildWindowDpiIsolationEnabled(v42, v163) )
          {
            xxxForceUpdateProcessDpiAwarenessContext(v42, *(_DWORD *)(*(_QWORD *)(*v154 + 40) + 288LL));
          }
        }
      }
    }
  }
  else
  {
    v101 = gptiCurrent;
  }
  if ( v287 != (unsigned __int16)gatomMessage && v287 != 32769 && v287 != 32774 && !*(_DWORD *)(v101 + 884) )
  {
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(v101 + 440) + 12LL),
      (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
    xxxUpdateInputHangInfo(0LL, 1LL);
  }
  xxxAdjustSize(v42, &v260, &v261);
  v166 = v258;
  v167 = 0x7FFF;
  if ( v258 <= 0x7FFF )
  {
    if ( v258 < -32768 )
      v166 = -32768;
  }
  else
  {
    v166 = 0x7FFF;
  }
  v258 = v166;
  if ( v259 <= 0x7FFF )
  {
    v167 = v259;
    if ( v259 < -32768 )
      v167 = -32768;
  }
  v259 = v167;
  v168 = v260;
  v169 = 0xFFFF;
  if ( v260 <= 0xFFFF )
  {
    if ( v260 < 0 )
      v168 = 0;
  }
  else
  {
    v168 = 0xFFFF;
  }
  v260 = v168;
  if ( v261 <= 0xFFFF )
  {
    v169 = v261;
    if ( v261 < 0 )
      v169 = 0;
  }
  v261 = v169;
  if ( *((_QWORD *)v42 + 3) )
  {
    v170 = *((_QWORD *)v42 + 5);
    if ( (*(_BYTE *)(v170 + 31) & 0x40) == 0 && *(char *)(v170 + 24) >= 0 )
    {
      xxxCheckFullScreen(v42, (struct tagSIZERECT *)&v258);
      v169 = v261;
      v168 = v260;
    }
  }
  if ( v168 < 0 )
    v168 = 0;
  v260 = v168;
  if ( v169 < 0 )
    v169 = 0;
  v261 = v169;
  RECTFromSIZERECT(*((_QWORD *)v42 + 5) + 88LL, &v258);
  if ( v252 == 64 )
  {
    v171 = ValidateHmonitorNoRip(*(_QWORD *)(*(_QWORD *)(v19 + 40) + 256LL));
LABEL_447:
    v172 = (__int64 *)v171;
  }
  else
  {
    if ( v255 )
    {
      v171 = GetInheritedMonitor(v42);
      goto LABEL_447;
    }
    v172 = 0LL;
  }
  if ( v172 || (v172 = (__int64 *)MonitorFromRect((struct tagRECT *)(*((_QWORD *)v42 + 5) + 88LL)), v173 = 0LL, v172) )
    v173 = *v172;
  v299 = v173;
  v174 = *((_QWORD *)v42 + 5);
  if ( v173 != *(_QWORD *)(v174 + 256) )
  {
    *(_QWORD *)(v174 + 256) = v173;
    *(_WORD *)(*((_QWORD *)v42 + 5) + 284LL) = *(_WORD *)(v172[5] + 64);
    if ( v252 != 64 )
      UpdateTopLevelWindowDPITransform(v42, v172);
  }
  if ( (*(_BYTE *)(*((_QWORD *)v42 + 5) + 27LL) & 0x20) != 0 && GetRedirectionBitmap(v42) )
  {
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    v175 = RecreateRedirectionBitmap(v42, 0, 0LL);
    v176 = *(_QWORD *)(gpDispInfo + 40LL);
    if ( v175 < 0 )
    {
LABEL_457:
      GreUnlockVisRgn(v176);
      goto LABEL_232;
    }
    GreUnlockVisRgn(v176);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v254[0] + 8LL) + 8LL) & 0x20) != 0
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v254[0] + 8LL) + 8LL) & 0x40) != 0 && !*(_QWORD *)(*(_QWORD *)v254[0] + 40LL) )
  {
    StyleWindow = GetStyleWindow((__int64)v42, 2848);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
    CacheDC = CreateCacheDC(v42, StyleWindow != 0 ? 49152 : 0x8000, 0LL);
    v176 = *(_QWORD *)(gpDispInfo + 40LL);
    if ( !CacheDC )
      goto LABEL_457;
    GreUnlockVisRgn(v176);
  }
  if ( (v248 & 0x80000) != 0 && (*(_BYTE *)(*((_QWORD *)v42 + 5) + 26LL) & 8) == 0 && (int)xxxSetLayeredWindow(v42) < 0 )
    goto LABEL_232;
  if ( (v248 & 0x2000000) != 0 && !GetStyleWindow(*v154, 2818) )
  {
    SetOrClrWF(1LL, v42, 2818LL, 1LL);
    if ( (int)SetRedirectedWindow(v42) < 0 )
    {
      SetOrClrWF(0LL, v42, 2818LL, 1LL);
      goto LABEL_232;
    }
  }
  *((_QWORD *)&v293[2] + 1) = __PAIR64__(v251, v247);
  *(_QWORD *)&v293[2] = __PAIR64__(v250, v263);
  if ( !xxxSendMessage(v42, 129LL, 0LL, v293) )
  {
LABEL_232:
    v109 = v256;
LABEL_233:
    v110 = *(_BYTE *)(*((_QWORD *)v42 + 5) + 31LL) & 0x10;
    if ( v269 )
      ThreadUnlock1(v90, v89, v91);
    SetOrClrWF(1LL, v42, 1152LL, 1LL);
    SetOrClrWF(1LL, v42, 896LL, 1LL);
    if ( v110 )
      SetVisible(v42);
    v112 = *((_QWORD *)v42 + 10);
    if ( v112 )
    {
      if ( v110 )
      {
        zzzLockDisplayAreaAndInvalidateDCCache(*((_QWORD *)v42 + 10), 16LL, 0LL);
        v112 = *(_QWORD *)(v109 + 80);
      }
      v113 = v112;
      if ( (*(_BYTE *)(*((_QWORD *)v42 + 5) + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow((__int64)v42) )
      {
        v115 = *(_QWORD *)(v114 + 16);
        if ( v101 != v115 )
        {
          zzzAttachThreadInput(*((_QWORD *)v42 + 2), v115, 0LL);
          v113 = *(_QWORD *)(v109 + 80);
        }
      }
      UnlinkWindow(v42, v113);
    }
    v116 = *(struct tagCLS **)v254[0];
    v117 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v111);
    *(_QWORD *)(v117 + 16) = v308[0];
    ClassUnlockWorker(v116);
    xxxFreeWindow(v42);
    goto LABEL_560;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v42 + 14) + 8LL) + 9LL) & 2) != 0 )
  {
    SystemMenu = xxxGetSystemMenu(v42);
    SmartObjStackRef<tagMENU>::operator=(v264, SystemMenu);
    if ( !SmartObjStackRef<tagMENU>::operator==((__int64)v264) )
    {
      v181 = (volatile signed __int32 *)v265;
      if ( !v265 )
        v181 = *(volatile signed __int32 **)v264[0];
      v182 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v180);
      v319[0] = *(_QWORD *)(v182 + 408);
      *(_QWORD *)(v182 + 408) = v319;
      v319[1] = v181;
      if ( v181 )
        _InterlockedAdd(v181 + 2, 1u);
      xxxRemoveDeleteMenuHelper((__int64)v264, 5u, 1024, 1u);
      xxxRemoveDeleteMenuHelper((__int64)v264, 5u, 1024, 1u);
      ThreadUnlock1(v184, v183, v185);
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)v42 + 5) + 18LL) & 2) != 0
    && (!*((_QWORD *)&v293[5] + 1) || LODWORD(v293[5]) || *((_QWORD *)v42 + 21)) )
  {
    *((_QWORD *)&v293[3] + 1) = *((_QWORD *)v42 + 21);
    *((_QWORD *)&v304 + 1) = *((_QWORD *)v42 + 21);
    *(_QWORD *)&v304 = *(_QWORD *)(*((_QWORD *)v42 + 5) + 184LL);
    v293[5] = v304;
  }
  if ( (*gpsi & 4) == 0 )
    goto LABEL_495;
  v186 = (_QWORD *)(v101 + 768);
  if ( *(_QWORD *)(v101 + 768) || !(unsigned int)WantImeWindow((struct tagWND *)v19, v42) )
    goto LABEL_495;
  DefaultImeWindow = xxxCreateDefaultImeWindow(v42, v253, v280);
  *(_QWORD *)&v306 = v101 + 768;
  *((_QWORD *)&v306 + 1) = DefaultImeWindow;
  v316 = v306;
  HMAssignmentLock(&v316);
  v189 = *v186;
  if ( *v186 )
  {
    v190 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v188);
    v320[0] = *(_QWORD *)(v190 + 408);
    *(_QWORD *)(v190 + 408) = v320;
    v320[1] = v189;
    _InterlockedAdd((volatile signed __int32 *)(v189 + 8), 1u);
    xxxSendMessage(*v186, 647LL, 33LL, 0LL);
    ThreadUnlock1(v192, v191, v193);
  }
  v194 = (**(_DWORD **)(gptiCurrent + 472LL) >> 6) & 1;
  v295 = v194;
  v195 = *v186;
  if ( *v186 && v194 )
  {
    v196 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v188);
    v321[0] = *(_QWORD *)(v196 + 408);
    *(_QWORD *)(v196 + 408) = v321;
    v321[1] = v195;
    if ( v195 )
      _InterlockedAdd((volatile signed __int32 *)(v195 + 8), 1u);
    v197 = gptiCurrent;
    xxxSendMessage(*v186, 647LL, 25LL, *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 40LL));
    **(_QWORD **)(gptiCurrent + 472LL) &= ~0x40uLL;
    ThreadUnlock1(v199, v198, v200);
  }
  else
  {
LABEL_495:
    v197 = gptiCurrent;
  }
  if ( !v19 || (*(_DWORD *)(*((_QWORD *)v42 + 5) + 232LL) & 8) != 0 && *v154 != v19 )
  {
LABEL_518:
    v208 = *((_QWORD *)v42 + 5);
    v209 = v208;
    if ( (*(_BYTE *)(v208 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(*(_QWORD *)(v19 + 40) + 26LL) & 0x40) != 0 )
    {
      v210 = *(_DWORD *)(v208 + 96);
      v211 = *(_DWORD *)(v208 + 88);
      *(_DWORD *)(v208 + 96) = DWORD2(v281) + v281 - v211;
      *(_DWORD *)(*((_QWORD *)v42 + 5) + 88LL) = v211 + *(_DWORD *)(*((_QWORD *)v42 + 5) + 96LL) - v210;
      v209 = *(_QWORD *)(v256 + 40);
    }
    v330 = *(_OWORD *)(v209 + 88);
    _InterlockedAdd(&glSendMessage, 1u);
    xxxSendTransformableMessageTimeout((ULONG_PTR)v42, 0, 0, 0LL, 1, 0);
    *(_OWORD *)(*((_QWORD *)v42 + 5) + 104LL) = v330;
    if ( xxxSendMessage(v42, 1LL, 0LL, v293) == -1 )
      goto LABEL_522;
    SetOrClrWF(1LL, v42, 1920LL, 1LL);
    if ( (unsigned int)IsWindowDesktopComposed(v42) )
    {
      v218 = (void *)ReferenceDwmApiPort(v216, v215, v217);
      DwmAsyncChildStyleChange(v218);
      DwmChildRectChange(v42);
      v222 = (void *)ReferenceDwmApiPort(v220, v219, v221);
      DwmAsyncOwnerChange(v222);
    }
    xxxWindowEvent(0x8000u, (__int64)v42, 0, 0, 0);
    v223 = *((_QWORD *)v42 + 5);
    if ( (*(_BYTE *)(v223 + 16) & 0x10) == 0 )
    {
      xxxSendSizeMessage((ULONG_PTR)v42);
      if ( v19 && GetDesktopWindow((__int64)v42) != v19 )
      {
        LODWORD(v330) = v330 - v281;
        DWORD1(v330) -= DWORD1(v281);
      }
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout((ULONG_PTR)v42, 0, 0, 0LL, 1, 0);
      v223 = *(_QWORD *)(v256 + 40);
    }
    v224 = *(_BYTE *)(v223 + 31);
    if ( (v224 & 0x20) != 0 )
    {
      SetMinimize(v42, 0LL);
      v225 = 7LL;
    }
    else
    {
      if ( (v224 & 1) == 0 )
        goto LABEL_539;
      SetOrClrWF(0LL, v42, 3841LL, 1LL);
      v225 = 3LL;
    }
    xxxMinMaximize(v42, v225, gdwPUDFlags & 0x10000 | 1u);
LABEL_539:
    CalcWindowFullScreen(v42);
    v226 = *((_QWORD *)v42 + 5);
    if ( (*(_BYTE *)(v226 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(v226 + 24) & 4) == 0 )
    {
      v227 = *v154;
      if ( *v154 )
      {
        v322[0] = *(_QWORD *)(v197 + 408);
        *(_QWORD *)(v197 + 408) = v322;
        v322[1] = v227;
        _InterlockedAdd((volatile signed __int32 *)(v227 + 8), 1u);
        v228 = *v154;
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout(v228, 0, 0, 0LL, 1, 0);
        ThreadUnlock1(v230, v229, v231);
      }
    }
    xxxInheritWindowMonitor(v42, 0LL, 0);
    if ( (a5 & 0x10000000) != 0 )
      xxxShowWindow(v42, v268 | gdwPUDFlags & 0x10000u);
    v234 = *((_QWORD *)v42 + 5);
    if ( (*(_BYTE *)(v234 + 31) & 0xC0) == 0 || (*(_BYTE *)(v234 + 26) & 4) != 0 )
    {
      v234 = *(unsigned int *)(*(_QWORD *)(v197 + 416) + 684LL);
      if ( (_DWORD)v234 )
      {
        xxxSendMessage(v42, 50LL, (unsigned int)v234, 0LL);
        *(_DWORD *)(*(_QWORD *)(v197 + 416) + 684LL) = 0;
      }
    }
    if ( v269 )
      ThreadUnlock1(v234, v232, v233);
    v235 = *(struct tagCLS **)v254[0];
    v236 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v232);
    *(_QWORD *)(v236 + 16) = v308[0];
    ClassUnlockWorker(v235);
    v240 = (_DWORD *)ThreadUnlock1(v238, v237, v239);
    v242 = v240;
    if ( !v240
      || (*(_BYTE *)(LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*v240 + gSharedInfo[1] + 25LL) & 1) != 0 )
    {
      v242 = 0LL;
    }
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v264, v241);
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v254, v243);
    return v242;
  }
  v201 = PWInsertAfter(v275);
  if ( !IsPseudoPwnd(v201) && *(_QWORD *)(v201 + 80) != *v154 )
    v201 = v252 == 64;
  v202 = *((_QWORD *)v42 + 12);
  if ( v202 )
  {
    *(_DWORD *)(*((_QWORD *)v42 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(v202 + 40) + 236LL);
    SetOrClrWF(*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v42 + 12) + 40LL) + 234LL) & 0x20, v42, 55840LL, 1LL);
  }
  if ( (unsigned int)ValidateNewParent(v42, v19) )
  {
    UnlinkWindow(v42, *v154);
    v206 = *((_QWORD *)v42 + 5);
    if ( (*(_BYTE *)(v206 + 31) & 0xC0) != 0x40 && v19 != *(_QWORD *)(*(_QWORD *)(v19 + 24) + 104LL) )
    {
      if ( (*(_BYTE *)(v206 + 24) & 8) != 0 )
      {
        if ( gHardErrorHandler )
        {
          TopMostInsertAfter = GetTopMostInsertAfter(v42);
          if ( TopMostInsertAfter )
            v201 = TopMostInsertAfter;
        }
      }
      else if ( !v201 || !IsPseudoPwnd(v201) && (*(_BYTE *)(*(_QWORD *)(v201 + 40) + 24LL) & 8) != 0 )
      {
        v201 = (unsigned __int64)CalcForegroundInsertAfterComponentUIAware(v42);
      }
    }
    if ( v201 < 2 || !IsPseudoPwnd(v201) )
    {
      LinkWindow(v42, (_QWORD *)v201, (__int64 *)v19);
      zzzLockDisplayAreaAndInvalidateDCCache(v19, 16LL, 0LL);
      goto LABEL_518;
    }
  }
LABEL_522:
  if ( v269 )
    ThreadUnlock1(v204, v203, v205);
  if ( ThreadUnlock1(v204, v203, v205) )
    xxxDestroyWindow(v42);
  v213 = *(struct tagCLS **)v254[0];
  v214 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v212);
  *(_QWORD *)(v214 + 16) = v308[0];
  ClassUnlockWorker(v213);
LABEL_560:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v264, v41);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v254, v245);
  return 0LL;
}
