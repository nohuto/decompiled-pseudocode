/*
 * XREFs of xxxCreateWindowEx @ 0x1C0061510
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C001C00C (xxxCreateDefaultImeWindow.c)
 *     NtUserCreateWindowEx @ 0x1C00352A0 (NtUserCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C007F978 (xxxCreateWindowStation.c)
 *     xxxCsDdeInitialize @ 0x1C010D200 (xxxCsDdeInitialize.c)
 *     xxxAddShadow @ 0x1C0146474 (xxxAddShadow.c)
 *     xxxNextWindow @ 0x1C01F5018 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F5898 (xxxOldNextWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C000995C (TraceChildWindowDpiTelemetry.c)
 *     DwmAsyncChildCreate @ 0x1C0010288 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C00103CC (DwmGetClassStyle.c)
 *     xxxSendSizeMessage @ 0x1C0011098 (xxxSendSizeMessage.c)
 *     xxxMinMaximize @ 0x1C0012B9C (xxxMinMaximize.c)
 *     GetMonitorRect @ 0x1C00145DC (GetMonitorRect.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00146C4 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     SetMinimize @ 0x1C0014C84 (SetMinimize.c)
 *     ?GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z @ 0x1C0016910 (-GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z.c)
 *     IsImmersiveAppIORestricted @ 0x1C00183B4 (IsImmersiveAppIORestricted.c)
 *     HasImmersiveAppRight @ 0x1C0018A3C (HasImmersiveAppRight.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C0018DDC (SetWindowSubtreeCoreWindowStatus.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     PWInsertAfter @ 0x1C001A5B4 (PWInsertAfter.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C001ABAC (GetWindowCloakStateComponentUIAware.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C001AC2C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     IsTopmostBandWindow @ 0x1C001ACB4 (IsTopmostBandWindow.c)
 *     ??9?$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAEAEBW4ZBID@@@Z @ 0x1C001ACDC (--9-$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAEAEBW4ZBID@@@Z.c)
 *     GetNonChildAncestor @ 0x1C001ACF8 (GetNonChildAncestor.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C001AD30 (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C001BC74 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     RtlInitLargeAnsiString @ 0x1C001BFD0 (RtlInitLargeAnsiString.c)
 *     xxxCreateDefaultImeWindow @ 0x1C001C00C (xxxCreateDefaultImeWindow.c)
 *     MapClientNeuterToClientPfn @ 0x1C001EFB4 (MapClientNeuterToClientPfn.c)
 *     xxxShowWindow @ 0x1C00225BC (xxxShowWindow.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0026E70 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     SetVisible @ 0x1C0027330 (SetVisible.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0027DC4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _DestroyMenu @ 0x1C0028870 (_DestroyMenu.c)
 *     IsDesktopWindow @ 0x1C002ABEC (IsDesktopWindow.c)
 *     GetStyleWindow @ 0x1C002B990 (GetStyleWindow.c)
 *     GetRedirectionBitmap @ 0x1C0031990 (GetRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1C0032388 (SetRedirectedWindow.c)
 *     CalcWindowFullScreen @ 0x1C0032BBC (CalcWindowFullScreen.c)
 *     DwmChildRectChange @ 0x1C0032E90 (DwmChildRectChange.c)
 *     NeedsWindowEdge @ 0x1C0033550 (NeedsWindowEdge.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C00349E0 (UpdateTopLevelWindowDPITransform.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     DwmAsyncOwnerChange @ 0x1C0036950 (DwmAsyncOwnerChange.c)
 *     RegisterDefaultClass @ 0x1C0036DB8 (RegisterDefaultClass.c)
 *     xxxCheckFullScreen @ 0x1C0037A28 (xxxCheckFullScreen.c)
 *     DereferenceClass @ 0x1C00383C0 (DereferenceClass.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxFreeWindow @ 0x1C00396A4 (xxxFreeWindow.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxUpdateInputHangInfo @ 0x1C003EC90 (xxxUpdateInputHangInfo.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxCallCtfHook @ 0x1C004AEF8 (xxxCallCtfHook.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C004BDB4 (xxxClientAllocWindowClassExtraBytes.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     xxxLoadUserApiHook @ 0x1C0054D80 (xxxLoadUserApiHook.c)
 *     IsInsideUserApiHook @ 0x1C0054E30 (IsInsideUserApiHook.c)
 *     xxxClientLoadMenu @ 0x1C0056C30 (xxxClientLoadMenu.c)
 *     xxxCreateClassSmIcon @ 0x1C0056EB0 (xxxCreateClassSmIcon.c)
 *     CheckGrantedAccess @ 0x1C005FC14 (CheckGrantedAccess.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C005FC3C (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C005FCB8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     IsValidBandForProcess @ 0x1C005FD70 (IsValidBandForProcess.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C005FE08 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     GetClassPtr @ 0x1C00601A0 (GetClassPtr.c)
 *     IsPseudoPwnd @ 0x1C0060294 (IsPseudoPwnd.c)
 *     ??9?$SharedPointerBase@G@@QEBAEH@Z @ 0x1C006077C (--9-$SharedPointerBase@G@@QEBAEH@Z.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C006078C (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     ??8?$SharedPointerBase@G@@QEBAEH@Z @ 0x1C00607EC (--8-$SharedPointerBase@G@@QEBAEH@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ValidateNewParent @ 0x1C0061294 (ValidateNewParent.c)
 *     IsTopLevelParent @ 0x1C0061390 (IsTopLevelParent.c)
 *     ValidateParentDepth @ 0x1C0061448 (ValidateParentDepth.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00614E8 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ??8?$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAE$$QEAW4ZBID@@@Z @ 0x1C00647E0 (--8-$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAE$$QEAW4ZBID@@@Z.c)
 *     xxxSendTransformableMessage @ 0x1C00647FC (xxxSendTransformableMessage.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0064CD4 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C0067C24 (IsDpiBoundaryBetweenWindows.c)
 *     _GetWindowCompositionInfo @ 0x1C0068944 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C0068C9C (_IsTopLevelWindow.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C0068CD4 (ShouldUseLogPixelsForWindowMetrics.c)
 *     xxxInheritWindowMonitor @ 0x1C0068FC8 (xxxInheritWindowMonitor.c)
 *     UnlinkWindow @ 0x1C006A598 (UnlinkWindow.c)
 *     ConstrainWindowSIZERECT @ 0x1C006AAA8 (ConstrainWindowSIZERECT.c)
 *     GetInheritedMonitor @ 0x1C006BA24 (GetInheritedMonitor.c)
 *     LinkWindow @ 0x1C006BF20 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C0089A4C (DwmAsyncChildStyleChange.c)
 *     xxxSetLayeredWindow @ 0x1C008D304 (xxxSetLayeredWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C008D558 (IsWindowBeingDestroyed.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00CC148 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00CC188 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     RecreateRedirectionBitmap @ 0x1C00CC328 (RecreateRedirectionBitmap.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1C00E0C0C (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     xxxAdjustSize @ 0x1C00E409C (xxxAdjustSize.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C00E554C (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ClassLock @ 0x1C00E5AC0 (ClassLock.c)
 *     RECTFromSIZERECT @ 0x1C00E5E30 (RECTFromSIZERECT.c)
 *     W32GetCurrentThreadDpiHostingBehavior @ 0x1C00EBE18 (W32GetCurrentThreadDpiHostingBehavior.c)
 *     SetTiledRect @ 0x1C00EC050 (SetTiledRect.c)
 *     ClassUnlock @ 0x1C00EC808 (ClassUnlock.c)
 *     ReferenceClass @ 0x1C00EC900 (ReferenceClass.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C00ECB68 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ??9?$RedirectedFieldcbwndExtra@H@tagWND@@QEBAEAEBH@Z @ 0x1C00F213C (--9-$RedirectedFieldcbwndExtra@H@tagWND@@QEBAEAEBH@Z.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C00F2158 (IsChildWindowDpiIsolationEnabled.c)
 *     GetMessageWindow @ 0x1C00F2838 (GetMessageWindow.c)
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagCLS@@QEBAEAEBI@Z @ 0x1C00F2A2C (--9-$RedirectedFieldcbWndServerExtra@I@tagCLS@@QEBAEAEBI@Z.c)
 *     GetAppCompatFlags @ 0x1C00F6E70 (GetAppCompatFlags.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ @ 0x1C00F9690 (--B-$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ.c)
 *     xxxGetSystemMenu @ 0x1C00FB780 (xxxGetSystemMenu.c)
 *     RegisterIconTitleClass @ 0x1C00FD218 (RegisterIconTitleClass.c)
 *     IsValidBand @ 0x1C00FE118 (IsValidBand.c)
 *     ValidateOwnerDepth @ 0x1C00FEF34 (ValidateOwnerDepth.c)
 *     IsInternalBand @ 0x1C010EB34 (IsInternalBand.c)
 *     UserGetLastError @ 0x1C0112968 (UserGetLastError.c)
 *     GetPrimaryMonitor @ 0x1C0113884 (GetPrimaryMonitor.c)
 *     ??9?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C011A8A0 (--9-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ @ 0x1C011B14C (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C012CAD0 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 *     zzzAttachThreadInput @ 0x1C0135A64 (zzzAttachThreadInput.c)
 *     RtlInitUnicodeStringOrId @ 0x1C013C7AC (RtlInitUnicodeStringOrId.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?TraceLoggingCreateWindowFailed@@YAXI_K@Z @ 0x1C01CD718 (-TraceLoggingCreateWindowFailed@@YAXI_K@Z.c)
 *     GetTopMostInsertAfter @ 0x1C01D3F8C (GetTopMostInsertAfter.c)
 *     ??$?9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z @ 0x1C01D6618 (--$-9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z.c)
 *     ??4?$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C01D7038 (--4-$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7AC0 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     HasMessageRootWindow @ 0x1C01F81A4 (HasMessageRootWindow.c)
 *     _W32ExceptionHandler @ 0x1C0259354 (_W32ExceptionHandler.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxCreateWindowEx(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        struct tagWND *a10,
        __int64 **a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        char a16,
        __int64 a17)
{
  struct tagWND *v19; // r13
  int v20; // r12d
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // ebx
  int v27; // eax
  __int64 v28; // rax
  char v29; // al
  int v30; // r14d
  int v31; // eax
  __int64 v32; // rax
  int v33; // r12d
  __int64 v34; // rcx
  int v35; // r12d
  __int64 v36; // r15
  __int16 v37; // r12
  __int64 v38; // rbx
  _QWORD *ClassPtr; // rax
  __int64 v40; // r8
  unsigned int v41; // ebx
  __int64 v42; // rax
  struct tagWND *v43; // r15
  __int64 v44; // rax
  unsigned int v45; // ecx
  unsigned __int128 v46; // rax
  int CurrentThreadDpiHostingBehavior; // eax
  __int64 v48; // rdx
  __int64 v49; // r8
  __int64 v50; // rcx
  struct tagWND *v51; // r12
  __int64 v52; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v54; // rax
  struct tagWND *v55; // r12
  __int64 v56; // rbx
  __int64 *v57; // rax
  __int64 v58; // rax
  bool v59; // zf
  __int64 v60; // r12
  __int64 v61; // rcx
  int v62; // ebx
  __int64 v63; // r8
  int v64; // ecx
  int v65; // ecx
  int v66; // edx
  wchar_t *v67; // rcx
  __int64 *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int16 v71; // r14
  int v72; // eax
  LONG v73; // ecx
  unsigned int v74; // edx
  unsigned int v75; // eax
  __int64 *InheritedMonitor; // rbx
  __int64 v77; // rcx
  _DWORD *v78; // rax
  _DWORD *v79; // rax
  __int64 MessageWindow; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 *v84; // rsi
  struct _KTHREAD *v85; // r14
  __int64 v86; // rbx
  __int64 *v87; // rax
  __int64 v88; // rax
  struct _KPROCESS *v89; // rbx
  unsigned int ProcessId; // r14d
  __int64 v91; // rsi
  _DWORD *v92; // rax
  unsigned int v93; // r15d
  int v94; // r12d
  int v95; // r13d
  __int64 ProcessSequenceNumber; // rbx
  int ClassStyle; // edi
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  void *v101; // rax
  unsigned __int16 v102; // r14
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  char v107; // bl
  volatile void *v108; // r14
  __int64 v109; // rcx
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // r8
  int v113; // ebx
  __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // r8
  int AppCompatFlags; // eax
  char v118; // bl
  __int64 v119; // r8
  int v120; // eax
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 v124; // r9
  int v125; // ebx
  int v126; // r14d
  unsigned int v127; // ebx
  __int64 v128; // r8
  int v129; // r14d
  __int64 v130; // rdx
  int v131; // edx
  __int64 v132; // rcx
  struct tagMONITOR *v133; // rax
  __int64 PrimaryMonitor; // rbx
  __int64 v135; // rcx
  _DWORD *v136; // rax
  _DWORD *v137; // rcx
  _DWORD *v138; // rax
  __int16 v139; // ax
  int v140; // eax
  unsigned __int64 v141; // xmm0_8
  int v142; // edx
  int v143; // ecx
  __int64 v144; // rcx
  int v145; // eax
  __int64 v146; // rcx
  __int64 v147; // rcx
  char v148; // al
  struct tagWND *v149; // rcx
  unsigned __int8 *Menu; // rax
  __int64 v151; // rax
  __int64 v152; // rax
  __int64 v153; // r9
  __int64 NonChildAncestor; // r14
  _QWORD *v155; // rbx
  __int64 v156; // rdx
  __int64 v157; // rcx
  struct _KTHREAD *v158; // r14
  __int64 v159; // rbx
  __int64 *v160; // rax
  __int64 v161; // rax
  __int64 KernelEvent; // rax
  __int64 v163; // r8
  __int64 v164; // r9
  _QWORD *v165; // r14
  unsigned int v166; // edx
  __int64 v167; // rcx
  unsigned int v168; // ebx
  NTSTATUS v169; // eax
  ULONG v170; // eax
  __int64 v171; // rdx
  __int64 v172; // r8
  __int64 v173; // r9
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // rbx
  __int64 v177; // rcx
  int v178; // eax
  int v179; // eax
  __int64 v180; // rax
  __int64 *v181; // rbx
  __int64 v182; // rcx
  __int64 v183; // rdx
  _DWORD *v184; // rax
  _DWORD *v185; // rcx
  _DWORD *v186; // rax
  int v187; // eax
  __int64 v188; // rcx
  unsigned int v189; // ebx
  __int64 CacheDC; // rax
  __int64 v191; // rcx
  int v192; // ebx
  __int64 v193; // rcx
  __int64 v194; // rdx
  __int64 v195; // r8
  int v196; // r9d
  __int64 SystemMenu; // rax
  __int64 v198; // rbx
  __int64 v199; // rax
  __int64 v200; // rdx
  __int64 v201; // rcx
  __int64 v202; // r8
  ULONG_PTR *v203; // rbx
  __int64 DefaultImeWindow; // rax
  __int64 v205; // rax
  __int64 v206; // rdx
  __int64 v207; // rcx
  __int64 v208; // r8
  int v209; // ecx
  __int64 v210; // rax
  __int64 v211; // rdx
  __int64 v212; // rcx
  __int64 v213; // r8
  __int64 v214; // rdx
  unsigned __int64 v215; // rbx
  __int64 v216; // r8
  __int64 v217; // r9
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // r8
  int v221; // ebx
  __int64 v222; // rcx
  __int64 TopMostInsertAfter; // rax
  __int64 v224; // r9
  __int64 v225; // rdx
  int v226; // edx
  int v227; // r8d
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // r8
  void *v231; // rax
  __int64 v232; // rdx
  __int64 v233; // r8
  __int64 v234; // rdx
  __int64 v235; // rcx
  __int64 v236; // r8
  __int64 v237; // rbx
  void *v238; // rax
  __int64 v239; // rcx
  char v240; // al
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 *v243; // rbx
  __int64 v244; // r14
  __int64 v245; // rcx
  __int64 v246; // rdx
  __int64 v247; // rcx
  __int64 v248; // r8
  __int64 v249; // rdx
  __int64 v250; // r8
  __int64 v251; // rcx
  __int64 v252; // rdx
  __int64 v253; // rcx
  __int64 v254; // r8
  __int64 v255; // rax
  __int64 v256; // rdx
  __int64 v257; // r8
  __int64 v258; // rbx
  __int64 v259; // rdx
  __int64 v260; // r8
  __int64 v262; // rdx
  __int64 v263; // r8
  unsigned int v264; // [rsp+28h] [rbp-4E0h]
  int v265; // [rsp+68h] [rbp-4A0h]
  int v266; // [rsp+6Ch] [rbp-49Ch]
  int v267; // [rsp+6Ch] [rbp-49Ch]
  int v268; // [rsp+70h] [rbp-498h]
  __int16 v269; // [rsp+74h] [rbp-494h]
  __int64 *v270[2]; // [rsp+78h] [rbp-490h] BYREF
  int v271; // [rsp+88h] [rbp-480h]
  unsigned int v272; // [rsp+90h] [rbp-478h]
  int v273; // [rsp+98h] [rbp-470h]
  _QWORD v274[3]; // [rsp+A0h] [rbp-468h] BYREF
  int v275; // [rsp+B8h] [rbp-450h]
  int WindowCloakStateComponentUIAware; // [rsp+BCh] [rbp-44Ch]
  int v277; // [rsp+C0h] [rbp-448h]
  int v278; // [rsp+C4h] [rbp-444h]
  int v279; // [rsp+C8h] [rbp-440h]
  __int16 v280; // [rsp+CCh] [rbp-43Ch]
  __int16 v281; // [rsp+CEh] [rbp-43Ah]
  int v282; // [rsp+D0h] [rbp-438h]
  int v283; // [rsp+D4h] [rbp-434h]
  int v284; // [rsp+D8h] [rbp-430h]
  unsigned __int64 v285; // [rsp+E0h] [rbp-428h]
  int v286; // [rsp+E8h] [rbp-420h]
  __int64 v287; // [rsp+F0h] [rbp-418h]
  struct _KTHREAD *CurrentThread; // [rsp+F8h] [rbp-410h] BYREF
  __int64 v289; // [rsp+100h] [rbp-408h]
  struct tagWND *v290; // [rsp+108h] [rbp-400h]
  __m128i v291; // [rsp+110h] [rbp-3F8h]
  int v292; // [rsp+120h] [rbp-3E8h]
  int v293; // [rsp+128h] [rbp-3E0h]
  int v294; // [rsp+130h] [rbp-3D8h] BYREF
  int v295; // [rsp+134h] [rbp-3D4h] BYREF
  int v296; // [rsp+138h] [rbp-3D0h] BYREF
  int v297; // [rsp+13Ch] [rbp-3CCh] BYREF
  _DWORD v298[2]; // [rsp+140h] [rbp-3C8h] BYREF
  int v299; // [rsp+148h] [rbp-3C0h] BYREF
  _DWORD v300[3]; // [rsp+14Ch] [rbp-3BCh] BYREF
  __int64 v301; // [rsp+158h] [rbp-3B0h]
  __int64 v302; // [rsp+160h] [rbp-3A8h]
  wchar_t *Str1; // [rsp+168h] [rbp-3A0h]
  _DWORD v304[4]; // [rsp+170h] [rbp-398h] BYREF
  __int64 v305; // [rsp+180h] [rbp-388h]
  __int64 v306; // [rsp+188h] [rbp-380h]
  __int64 v307; // [rsp+190h] [rbp-378h]
  _OWORD v308[7]; // [rsp+1A0h] [rbp-368h] BYREF
  __int64 v309; // [rsp+210h] [rbp-2F8h] BYREF
  struct tagWND *v310; // [rsp+218h] [rbp-2F0h]
  __int64 v311; // [rsp+220h] [rbp-2E8h]
  _QWORD v312[3]; // [rsp+228h] [rbp-2E0h] BYREF
  char v313[8]; // [rsp+240h] [rbp-2C8h] BYREF
  __int64 v314; // [rsp+248h] [rbp-2C0h]
  __int64 v315; // [rsp+250h] [rbp-2B8h] BYREF
  struct CoreWindowProp *v316; // [rsp+258h] [rbp-2B0h] BYREF
  char v317[8]; // [rsp+260h] [rbp-2A8h] BYREF
  __int64 v318; // [rsp+268h] [rbp-2A0h]
  __int64 v319; // [rsp+270h] [rbp-298h]
  __int64 v320; // [rsp+280h] [rbp-288h] BYREF
  unsigned __int64 v321; // [rsp+288h] [rbp-280h]
  char *v322[2]; // [rsp+290h] [rbp-278h] BYREF
  __int128 v323; // [rsp+2A0h] [rbp-268h]
  __int64 v324; // [rsp+2B0h] [rbp-258h]
  __int64 v325; // [rsp+2B8h] [rbp-250h]
  __int64 v326; // [rsp+2C0h] [rbp-248h]
  int v327; // [rsp+2C8h] [rbp-240h]
  __int64 v328; // [rsp+2D0h] [rbp-238h] BYREF
  struct tagWND *v329; // [rsp+2D8h] [rbp-230h]
  __int64 v330; // [rsp+2E0h] [rbp-228h]
  __int64 v331; // [rsp+2E8h] [rbp-220h] BYREF
  __int64 v332; // [rsp+2F0h] [rbp-218h]
  __int64 v333; // [rsp+2F8h] [rbp-210h]
  __int64 v334; // [rsp+300h] [rbp-208h] BYREF
  __int64 v335; // [rsp+308h] [rbp-200h]
  __int64 v336; // [rsp+310h] [rbp-1F8h]
  __int64 v337; // [rsp+318h] [rbp-1F0h] BYREF
  __int64 v338; // [rsp+320h] [rbp-1E8h]
  __int64 v339; // [rsp+328h] [rbp-1E0h]
  __int64 v340; // [rsp+330h] [rbp-1D8h] BYREF
  __int64 v341; // [rsp+338h] [rbp-1D0h]
  __int64 v342; // [rsp+340h] [rbp-1C8h]
  __int128 v343; // [rsp+350h] [rbp-1B8h]
  __int128 v344; // [rsp+360h] [rbp-1A8h]
  __int128 v345; // [rsp+370h] [rbp-198h] BYREF
  __int128 v346; // [rsp+380h] [rbp-188h] BYREF
  __int128 v347; // [rsp+390h] [rbp-178h] BYREF
  __int128 v348; // [rsp+3A0h] [rbp-168h] BYREF
  __int128 v349; // [rsp+3B0h] [rbp-158h] BYREF
  __int128 v350; // [rsp+3C0h] [rbp-148h] BYREF
  __int128 v351; // [rsp+3D0h] [rbp-138h] BYREF
  volatile void *v352; // [rsp+3E0h] [rbp-128h]
  __int64 v353; // [rsp+3E8h] [rbp-120h]
  __int64 v354; // [rsp+3F8h] [rbp-110h] BYREF
  __int128 v355; // [rsp+408h] [rbp-100h] BYREF
  __int64 v356; // [rsp+418h] [rbp-F0h] BYREF
  __int64 v357; // [rsp+428h] [rbp-E0h] BYREF
  __int64 v358; // [rsp+438h] [rbp-D0h] BYREF
  __int64 v359; // [rsp+448h] [rbp-C0h] BYREF
  unsigned __int64 v360; // [rsp+458h] [rbp-B0h] BYREF
  signed __int64 v361; // [rsp+460h] [rbp-A8h]
  __int128 v362; // [rsp+468h] [rbp-A0h] BYREF
  __int128 v363; // [rsp+478h] [rbp-90h] BYREF
  struct tagRECT v364; // [rsp+488h] [rbp-80h] BYREF
  __int64 v365[5]; // [rsp+498h] [rbp-70h] BYREF

  v307 = a4;
  v302 = a3;
  Str1 = (wchar_t *)a2;
  v273 = a1;
  v298[1] = a1;
  v325 = a2;
  v326 = a3;
  v291.m128i_i64[0] = a4;
  v19 = a10;
  v285 = (unsigned __int64)a10;
  v289 = a12;
  v287 = a13;
  v284 = 0;
  v292 = 0;
  v283 = 0;
  v275 = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v270, a2, a3);
  v362 = 0uLL;
  v360 = 0LL;
  v361 = 0LL;
  v277 = 5;
  v293 = 5;
  v301 = 0LL;
  memset(v308, 0, sizeof(v308));
  v305 = gptiCurrent;
  v309 = 0LL;
  v310 = 0LL;
  v311 = 0LL;
  v328 = 0LL;
  v329 = 0LL;
  v330 = 0LL;
  v340 = 0LL;
  v341 = 0LL;
  v342 = 0LL;
  memset(v312, 0, sizeof(v312));
  v278 = 0;
  v279 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v20 = 0;
  v266 = 0;
  v363 = 0uLL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v274, a11, v21);
  v268 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
    goto LABEL_3;
  }
  v26 = a1 & 0x7FFFFFFF;
  if ( a1 >= 0 )
    v26 = a1;
  v27 = 800;
  if ( a1 >= 0 )
    LOWORD(v27) = 0;
  v282 = v27;
  v280 = v27;
  v28 = *(_QWORD *)(gptiCurrent + 448LL);
  v306 = v28;
  v324 = v28;
  if ( a10 )
  {
    if ( *((_QWORD *)a10 + 3) != v28 )
      goto LABEL_3;
  }
  v29 = a16;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 416LL)) )
    {
LABEL_12:
      v25 = 5LL;
      goto LABEL_580;
    }
    v20 = 1;
    v266 = 1;
    v29 = a16;
  }
  if ( (v29 & 2) != 0 && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 416LL)) )
    goto LABEL_12;
  v30 = a14;
  if ( a14 )
  {
    if ( !(unsigned int)IsValidBand(a14)
      || (unsigned int)IsInternalBand(a14)
      || HasImmersiveAppRight(*(_QWORD *)(gptiCurrent + 416LL))
      && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 812LL) & 0x200) == 0
      && a14 == 1
      && !v20
      && !(unsigned int)HasMessageRootWindow(a10) )
    {
      goto LABEL_3;
    }
  }
  v271 = HIWORD(a5) & 0xC000;
  v281 = HIWORD(a5) & 0xC000;
  v286 = (_WORD)v271 == 0x4000;
  v300[1] = v286;
  if ( (_WORD)v271 != 0x4000 )
  {
    if ( (unsigned int)ShouldSetNoOwner(*(_QWORD *)(gptiCurrent + 416LL), a10) )
      v19 = 0LL;
    v285 = (unsigned __int64)v19;
  }
  if ( !v19 || (LOBYTE(v31) = IsDesktopWindow((__int64)v19), v31) )
  {
    if ( !a14 )
    {
      if ( IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 416LL)) )
      {
        v33 = 1;
        v266 = 1;
        v30 = 15;
        goto LABEL_42;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 812LL) & 2) != 0 && (v26 & 8) != 0 )
        v30 = 2;
      else
        v30 = 1;
    }
    v33 = v266;
    goto LABEL_42;
  }
  v32 = *((_QWORD *)v19 + 5);
  v33 = *(_BYTE *)(v32 + 234) & 0x20;
  v266 = v33;
  if ( a14 )
  {
    if ( a14 == *(_DWORD *)(v32 + 236) )
      goto LABEL_42;
LABEL_3:
    v25 = 87LL;
LABEL_580:
    UserSetLastError(v25, v22, v23, v24);
    goto LABEL_581;
  }
  v30 = *(_DWORD *)(v32 + 236);
LABEL_42:
  v304[1] = v33;
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(gptiCurrent + 416LL), v30, (__int64)v19) )
    goto LABEL_12;
  v265 = v26;
  v272 = v26;
  v22 = 0x400000LL;
  if ( (v26 & 0x400000) != 0 )
    goto LABEL_53;
  if ( !v19 )
  {
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v35 = v26;
      v265 = v26;
      v272 = v26;
      if ( (_WORD)a2 == 0x8002 )
        goto LABEL_54;
    }
    v35 = v26;
    v265 = v26;
    v272 = v26;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34, 0x400000LL) + 816) & 1) == 0 )
      goto LABEL_54;
    v35 = v26 | 0x400000;
    goto LABEL_48;
  }
  v265 = v26;
  v272 = v26;
  if ( (_WORD)v271 != 0x4000 )
  {
LABEL_53:
    v35 = v265;
    goto LABEL_54;
  }
  v35 = v26;
  v265 = v26;
  v272 = v26;
  if ( (*(_BYTE *)(*((_QWORD *)v19 + 5) + 26LL) & 0x50) == 0x40 )
  {
    v35 = v26 | 0x400000;
LABEL_48:
    v265 = v35;
    v272 = v35;
  }
LABEL_54:
  if ( (v35 & 0x2200000) == 0x2200000 )
    goto LABEL_3;
  v36 = gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 584LL) && !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 888LL), 2u) )
    goto LABEL_581;
  v37 = v271;
  if ( (_WORD)v271 != 0x4000 )
    goto LABEL_61;
  if ( !v19 )
  {
    v25 = 1406LL;
    goto LABEL_580;
  }
  if ( !(unsigned int)ValidateParentDepth(0LL, (__int64)v19) )
    goto LABEL_3;
  while ( 1 )
  {
LABEL_61:
    v38 = v302;
    if ( (v302 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v313);
      if ( (int)RtlStringCchCopyW((char *)gawchAtomScratch, 256LL, *(char **)(v38 + 8)) < 0 )
      {
        LOWORD(v38) = 0;
        v269 = 0;
        v279 = 1;
      }
      else
      {
        LOWORD(v38) = UserFindAtom(gawchAtomScratch);
        v269 = v38;
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v313);
    }
    else
    {
      v269 = v302;
    }
    if ( (_WORD)v38 )
    {
      ClassPtr = (_QWORD *)GetClassPtr((unsigned __int16)v38, *(_QWORD *)(v36 + 416), v289);
      if ( ClassPtr )
        break;
    }
LABEL_111:
    if ( v279
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v67 = Str1)
        : (v67 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v67)) )
    {
      v25 = 1407LL;
      goto LABEL_580;
    }
    v279 = 1;
    v37 = v271;
    v36 = gptiCurrent;
  }
  SmartObjStackRefBase<tagCLS>::operator=(v270, *ClassPtr);
  if ( (*(_WORD *)(*(_QWORD *)(*v270[0] + 8) + 6LL) & 1) != 0 && (unsigned int)PsGetWin32KFilterSet() == 5 )
    goto LABEL_581;
  if ( (unsigned int)NeedsWindowEdge(a5, v265, a15 >= 0x400u) )
    v41 = v265 | 0x100;
  else
    v41 = v265 & 0xFFFFFEFF;
  v272 = v41;
  v265 = v41;
  LOBYTE(v40) = 1;
  v42 = HMAllocObject(v36, v306, v40);
  v43 = (struct tagWND *)v42;
  v290 = (struct tagWND *)v42;
  if ( !v42 )
  {
    if ( (unsigned int)UserGetLastError() != 8 )
      goto LABEL_581;
    v44 = MEMORY[0xFFFFF78000000320];
    v314 = MEMORY[0xFFFFF78000000320];
    v45 = 1;
LABEL_77:
    v46 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32) * (unsigned __int128)(unsigned __int64)(v44 << 8);
LABEL_78:
    TraceLoggingCreateWindowFailed(v45, *((unsigned __int64 *)&v46 + 1));
    goto LABEL_581;
  }
  tagObjLock::LockInitialize((tagObjLock *)(v42 + 56));
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 2) + 416LL) + 812LL) & 0x2000000) != 0 )
    *((_DWORD *)v43 + 82) |= 0x10u;
  *(_QWORD *)(*((_QWORD *)v43 + 5) + 296LL) = 0LL;
  *((_QWORD *)v43 + 35) = 0LL;
  *(_DWORD *)(*((_QWORD *)v43 + 5) + 232LL) &= ~0x40000000u;
  CurrentThreadDpiHostingBehavior = W32GetCurrentThreadDpiHostingBehavior();
  v50 = *((_QWORD *)v43 + 5);
  *(_DWORD *)(v50 + 292) = CurrentThreadDpiHostingBehavior;
  if ( v37 != 0x4000 || !v19 )
    goto LABEL_101;
  v51 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v52 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v50, v48, v49) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v52 = *ThreadWin32Thread;
  }
  if ( v52 )
  {
    v54 = *(_QWORD *)(v52 + 456);
    if ( v54 )
      v51 = *(struct tagWND **)(v54 + 24);
  }
  if ( v19 != v51 )
  {
    v55 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v56 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v50, v48, v49) )
    {
      v57 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( v57 )
        v56 = *v57;
    }
    if ( v56 )
    {
      v58 = *(_QWORD *)(v56 + 448);
      if ( v58 )
        v55 = *(struct tagWND **)(v58 + 104);
    }
    v59 = v19 == v55;
    v60 = gptiCurrent;
    if ( !v59 )
    {
      v50 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 416LL);
      if ( *(_QWORD *)(gptiCurrent + 416LL) == v50 && !(unsigned int)IsChildWindowDpiIsolationEnabled(0LL, v19) )
      {
        v61 = *(unsigned int *)(*((_QWORD *)v19 + 5) + 288LL);
        *(_DWORD *)(*((_QWORD *)v43 + 5) + 288LL) = v61;
        v62 = *(_DWORD *)(*((_QWORD *)v19 + 5) + 288LL);
        if ( (((unsigned __int8)v62 ^ (unsigned __int8)W32GetCurrentThreadDpiAwarenessContext(v61, v48, v49)) & 0xF) != 0 )
          TraceChildWindowDpiTelemetry((__int64)v43, (__int64)v19, 0);
        goto LABEL_105;
      }
    }
  }
  else
  {
LABEL_101:
    v60 = gptiCurrent;
  }
  *(_DWORD *)(*((_QWORD *)v43 + 5) + 288LL) = W32GetCurrentThreadDpiAwarenessContext(v50, v48, v49);
  if ( (*(_DWORD *)(*((_QWORD *)v43 + 5) + 288LL) & 0x4000000F) == 0
    && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472) + 224LL) & 0x40) != 0 )
  {
    *(_DWORD *)(*((_QWORD *)v43 + 5) + 288LL) |= 0x40000000u;
  }
LABEL_105:
  v63 = *((_QWORD *)v43 + 5);
  v64 = *(_DWORD *)(v63 + 288);
  if ( (v64 & 0xF) == 2 && (v64 & 0xF0) == 0x20 )
  {
    v65 = 0x10000000;
    v66 = 0x20000000;
  }
  else
  {
    v65 = 0;
    v66 = 0;
  }
  *(_DWORD *)(v63 + 232) = v65 | *(_DWORD *)(v63 + 232) & 0xEFFFFFFF;
  *(_DWORD *)(*((_QWORD *)v43 + 5) + 232LL) = v66 | *(_DWORD *)(*((_QWORD *)v43 + 5) + 232LL) & 0xDFFFFFFF;
  tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((char *)v43 + 136, *v270[0]);
  *(_DWORD *)(*((_QWORD *)v43 + 5) + 28LL) = a5 & 0xEFFFFFFF;
  *(_DWORD *)(*((_QWORD *)v43 + 5) + 24LL) = v265 & 0xFDF7FFFF;
  *(_DWORD *)(*((_QWORD *)v43 + 5) + 200LL) = *(_DWORD *)(*(_QWORD *)(*v270[0] + 8) + 80LL);
  *(_DWORD *)(*((_QWORD *)v43 + 5) + 252LL) = *(_DWORD *)(*(_QWORD *)(*v270[0] + 8) + 84LL);
  if ( !(unsigned int)ReferenceClass(*v270[0], v43) )
    goto LABEL_110;
  SmartObjStackRefBase<tagCLS>::operator=(v270, *((_QWORD *)v43 + 17));
  if ( !(unsigned int)ClassLock(*v270[0], v312) )
  {
    DereferenceClass(*(struct tagPROCESSINFO **)(v60 + 416), (__int64)v43);
LABEL_110:
    HMFreeObject(v43);
    goto LABEL_111;
  }
  *(_QWORD *)(*((_QWORD *)v43 + 5) + 224LL) = a17;
  if ( *(_WORD *)(*(_QWORD *)(*v270[0] + 8) + 2LL) == *(_WORD *)(gpsi + 868LL) )
  {
    *(_QWORD *)(*((_QWORD *)v43 + 5) + 208LL) = 0LL;
  }
  else
  {
    v68 = *(__int64 **)(v60 + 784);
    v69 = 0LL;
    if ( v68 )
      v69 = *v68;
    *(_QWORD *)(*((_QWORD *)v43 + 5) + 208LL) = v69;
  }
  *(_DWORD *)(*((_QWORD *)v43 + 5) + 236LL) = v30;
  if ( (unsigned int)IsTopmostBandWindow((__int64)v43, (__int64)v19) )
    *(_DWORD *)(*((_QWORD *)v43 + 5) + 24LL) |= 8u;
  if ( v266 )
    SetOrClrWF(1LL, v43, 55840LL, 0LL);
  ++*(_DWORD *)(v60 + 892);
  memset(v308, 0, sizeof(v308));
  DWORD2(v308[4]) = v265;
  *((_QWORD *)&v308[0] + 1) = v289;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v273 >= 0 )
    {
      *(_QWORD *)&v308[4] = *((_QWORD *)Str1 + 1);
      v308[6] = *(_OWORD *)Str1;
    }
    else
    {
      v70 = *(_QWORD *)(*v270[0] + 104);
      *(_QWORD *)&v308[4] = v70;
      if ( (v70 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString((__int64)&v308[6], v70);
    }
  }
  else
  {
    *(_QWORD *)&v308[4] = Str1;
  }
  if ( v307 )
  {
    *((_QWORD *)&v308[3] + 1) = *(_QWORD *)(v307 + 8);
    v308[5] = *(_OWORD *)v307;
  }
  LODWORD(v308[3]) = a5;
  *((_QWORD *)&v308[2] + 1) = __PAIR64__(a6, a7);
  *(_QWORD *)&v308[2] = __PAIR64__(a8, a9);
  if ( v19 )
    *((_QWORD *)&v308[1] + 1) = *(_QWORD *)v19;
  else
    *((_QWORD *)&v308[1] + 1) = 0LL;
  v71 = v271;
  if ( (_WORD)v271 == 0x4000 )
  {
    *(_QWORD *)&v308[1] = SmartObjStackRef<tagMENU>::operator tagMENU *(v274);
    *(_DWORD *)(*((_QWORD *)v43 + 5) + 24LL) |= *(_DWORD *)(*((_QWORD *)v19 + 5) + 24LL) & 0xC4000000;
  }
  else if ( SmartObjStackRef<tagMENU>::operator==((__int64)v274) )
  {
    *(_QWORD *)&v308[1] = 0LL;
  }
  else
  {
    *(_QWORD *)&v308[1] = *(_QWORD *)SmartObjStackRef<tagMENU>::operator unsigned __int64(v274);
  }
  *(_QWORD *)&v308[0] = v287;
  v309 = *(_QWORD *)(v60 + 408);
  *(_QWORD *)(v60 + 408) = &v309;
  v310 = v43;
  HMLockObject(v43);
  *(_QWORD *)&v364.left = 0LL;
  if ( a6 == 0x80000000 || a6 == 0x8000 )
  {
    v72 = 0;
    v364.left = 0;
  }
  else
  {
    v72 = a6;
    v364.left = a6;
  }
  v73 = a7;
  if ( a7 == 0x80000000 || a7 == 0x8000 )
    v73 = 0;
  v364.top = v73;
  v74 = a8;
  if ( a8 == 0x80000000 || a8 == 0x8000 )
    v74 = 0;
  v364.right = v74 + v72;
  v75 = a9;
  if ( a9 == 0x80000000 || a9 == 0x8000 )
    v75 = 0;
  v364.bottom = v73 + v75;
  InheritedMonitor = (__int64 *)GetInheritedMonitor(v43);
  if ( InheritedMonitor )
  {
    v271 = 1;
  }
  else
  {
    v271 = 0;
    if ( v19 )
      InheritedMonitor = (__int64 *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v19 + 5) + 256LL));
  }
  if ( InheritedMonitor || (InheritedMonitor = (__int64 *)MonitorFromRect(&v364, 2u, 0), v77 = 0LL, InheritedMonitor) )
    v77 = *InheritedMonitor;
  *(_QWORD *)(*((_QWORD *)v43 + 5) + 256LL) = v77;
  *(_DWORD *)(*((_QWORD *)v43 + 5) + 284LL) = *(unsigned __int16 *)(InheritedMonitor[5] + 64);
  v78 = (_DWORD *)InheritedMonitor[39];
  *((_QWORD *)v43 + 36) = v78;
  ++*v78;
  *((_QWORD *)v43 + 37) = 0LL;
  *(_DWORD *)(*((_QWORD *)v43 + 5) + 232LL) &= ~0x4000000u;
  if ( v71 != 0x4000 || (unsigned int)IsDpiBoundaryBetweenWindows(v43, v19) )
    UpdateTopLevelWindowDPITransform((__int64)v43, (__int64)InheritedMonitor);
  if ( v71 == 0x4000 )
  {
    if ( v19 )
    {
      *(_WORD *)(*((_QWORD *)v43 + 5) + 286LL) = *(_WORD *)(*((_QWORD *)v19 + 5) + 286LL);
      v79 = (_DWORD *)*((_QWORD *)v19 + 37);
      if ( v79 )
      {
        *((_QWORD *)v43 + 37) = v79;
        ++*v79;
      }
    }
  }
  if ( *((_QWORD *)v43 + 3) )
  {
    MessageWindow = GetMessageWindow(v43);
    v351 = *(_OWORD *)LockPointer(&v354, (__int64)v43 + 104, MessageWindow);
    HMAssignmentLock(&v351);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v43) )
  {
    v84 = (__int64 *)v19;
    if ( v71 != 0x4000 && (!v19 || v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 104LL)) )
    {
      v84 = 0LL;
      v85 = KeGetCurrentThread();
      v86 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v82, v81, v83) )
      {
        v87 = (__int64 *)PsGetThreadWin32Thread(v85);
        if ( v87 )
          v86 = *v87;
      }
      if ( v86 )
      {
        v88 = *(_QWORD *)(v86 + 456);
        if ( v88 )
          v84 = *(__int64 **)(v88 + 24);
      }
    }
    memset(v365, 0, sizeof(v365));
    GetWindowCompositionInfo(v43, v365);
    v89 = *(struct _KPROCESS **)(**((_QWORD **)v43 + 2) + 544LL);
    if ( v84 )
      v287 = *v84;
    else
      v287 = 0LL;
    ProcessId = (unsigned int)PsGetProcessId(v89);
    v91 = ***(_QWORD ***)(*((_QWORD *)v43 + 3) + 8LL);
    v92 = (_DWORD *)*((_QWORD *)v43 + 5);
    v93 = v92[58];
    v94 = v92[6];
    v95 = v92[7];
    ProcessSequenceNumber = PsGetProcessSequenceNumber(v89);
    ClassStyle = DwmGetClassStyle((__int64)v290);
    v101 = (void *)ReferenceDwmApiPort(v99, v98, v100);
    v264 = v93;
    v43 = v290;
    DwmAsyncChildCreate(
      v101,
      *(_QWORD *)v290,
      v287,
      v95,
      v94,
      v264,
      ClassStyle,
      (__int128 *)v365,
      v91,
      (__int128 *)&v364.left,
      ProcessId,
      ProcessSequenceNumber);
    v19 = (struct tagWND *)v285;
    v60 = gptiCurrent;
  }
  *(_QWORD *)(*((_QWORD *)v43 + 5) + 32LL) = v289;
  v102 = v282;
  *(_QWORD *)(*((_QWORD *)v43 + 5) + 120LL) = MapClientNeuterToClientPfn(*v270[0], 0LL, (unsigned __int16)v282);
  SetOrClrWF((*(_WORD *)(*(_QWORD *)(*v270[0] + 8) + 6LL) & 1) != 0, v43, 516LL, 1LL);
  v304[0] = 0;
  if ( (unsigned __int8)tagCLS::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(*v270[0] + 122, v304) )
  {
    v103 = Win32AllocPoolZInit(*(unsigned int *)(*(_QWORD *)(*v270[0] + 8) + 84LL), 1937208149LL);
    *((_QWORD *)v43 + 35) = v103;
    if ( !v103 )
    {
      v268 = 5;
      goto LABEL_475;
    }
  }
  v107 = *(_BYTE *)(*((_QWORD *)v43 + 5) + 18LL) & 4;
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && !v107 )
  {
    *(_DWORD *)(*((_QWORD *)v43 + 5) + 200LL) = (*(_DWORD *)(*((_QWORD *)v43 + 5) + 200LL) + 7) & 0xFFFFFFF8;
    *(_DWORD *)(*((_QWORD *)v43 + 5) + 200LL) += 32;
  }
  LODWORD(CurrentThread) = 0;
  if ( !(unsigned __int8)tagWND::RedirectedFieldcbwndExtra<int>::operator!=((char *)v43 + 177, &CurrentThread) )
  {
LABEL_201:
    if ( (unsigned int)PsGetWin32KFilterSet() != 5 || v107 )
    {
      v113 = v273;
    }
    else
    {
      v110 = *((_QWORD *)v43 + 5);
      v111 = *(_QWORD *)(v110 + 296);
      v112 = *(int *)(v110 + 200);
      v353 = *(_QWORD *)(v110 + 120);
      *(_QWORD *)(v112 + v111 - 32) = v353;
      v113 = v273;
      if ( v273 >= 0 )
        v114 = *(_QWORD *)(gpsi + 768LL);
      else
        v114 = *(_QWORD *)(gpsi + 576LL);
      *(_QWORD *)(*((_QWORD *)v43 + 5) + 120LL) = v114;
    }
    if ( *(_QWORD *)(*v270[0] + 80) && !*(_QWORD *)(*v270[0] + 112) && (unsigned int)PsGetWin32KFilterSet() != 5 )
      xxxCreateClassSmIcon(v270, v115, v116);
    SetOrClrWF(1LL, v43, v102, 1LL);
    if ( (*(_WORD *)(*(_QWORD *)(*v270[0] + 8) + 6LL) & 2) != 0
      || v113 < 0
      && (v269 == *(_WORD *)(gpsi + 868LL)
       || v269 == *(_WORD *)(gpsi + 878LL)
       || v269 == *(_WORD *)(gpsi + 882LL)
       || v269 == *(_WORD *)(gpsi + 904LL)
       || v269 == *(_WORD *)(gpsi + 870LL)
       || v269 == *(_WORD *)(gpsi + 874LL)
       || v269 == *(_WORD *)(gpsi + 880LL)
       || v269 == *(_WORD *)(gpsi + 898LL)
       || v269 == *(_WORD *)(gpsi + 872LL)) )
    {
      SetOrClrWF(1LL, v43, 520LL, 1LL);
    }
    AppCompatFlags = GetAppCompatFlags(v60);
    v118 = AppCompatFlags;
    if ( (AppCompatFlags & 0x8000000) != 0 )
    {
      SetOrClrWF(1LL, v43, 1032LL, 1LL);
      v265 &= 0x3Fu;
      DWORD2(v308[4]) = BYTE8(v308[4]) & 0x3F;
    }
    *(_WORD *)(*((_QWORD *)v43 + 5) + 40LL) = 0;
    if ( a15 < 0x30Au )
    {
      if ( (v118 & 0x40) == 0 )
        goto LABEL_233;
      v119 = 1600LL;
    }
    else
    {
      SetOrClrWF(1LL, v43, 1281LL, 1LL);
      if ( a15 < 0x400u || (SetOrClrWF(1LL, v43, 1282LL, 1LL), a15 < 0x500u) )
      {
LABEL_233:
        v120 = a15;
        if ( a15 <= *(_WORD *)(v60 + 628) )
          v120 = *(_DWORD *)(v60 + 628);
        *((_DWORD *)v43 + 64) = v120;
        if ( (GetAppCompatFlags2(39168LL) & 0x10000000) != 0 )
          SetOrClrWF(1LL, v43, 2688LL, 1LL);
        if ( IsInsideUserApiHook() )
          xxxLoadUserApiHook(v122, v121, v123, v124);
        if ( (unsigned int)WantImeWindow(v19, v43) )
          xxxCallCtfHook(5, 3, *(_QWORD *)v43, 0LL);
        if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v60 + 456) + 16LL) | *(_BYTE *)(v60 + 672)) & 0x40) != 0 )
        {
          v320 = (__int64)v308;
          v321 = 0LL;
          if ( (unsigned int)xxxCallHook(3, *(_QWORD *)v43, (__int64)&v320, 5) )
          {
            v268 = 6;
            goto LABEL_475;
          }
          v125 = HIDWORD(v308[2]);
          a6 = HIDWORD(v308[2]);
          a7 = DWORD2(v308[2]);
          a8 = DWORD1(v308[2]);
          a9 = v308[2];
          v285 = v321;
        }
        else
        {
          v285 = 0LL;
          v125 = a6;
        }
        v105 = *((_QWORD *)v43 + 5);
        if ( (*(_BYTE *)(v105 + 31) & 0xC0) == 0x40 )
        {
          v104 = 1LL;
          v267 = 1;
          if ( !v19 )
            goto LABEL_475;
        }
        else
        {
          LODWORD(v104) = 0;
          v267 = 0;
        }
        if ( (_DWORD)v104 != v286 )
        {
          SmartObjStackRef<tagMENU>::operator=(v274, 0LL);
          v105 = *((_QWORD *)v43 + 5);
          LODWORD(v104) = v267;
        }
        if ( (*(_BYTE *)(v105 + 31) & 0xC0) != 0 )
        {
          v126 = 0;
          if ( v125 == 0x80000000 || v125 == 0x8000 )
          {
            v125 = 0;
            a6 = 0;
            a7 = 0;
          }
          if ( a8 == 0x80000000 || a8 == 0x8000 )
          {
            a8 = 0;
            a9 = 0;
          }
        }
        else
        {
          v126 = 1;
        }
        v360 = __PAIR64__(a7, v125);
        v127 = a8;
        v361 = __PAIR64__(a9, a8);
        if ( (_DWORD)v104 )
        {
          v363 = *(_OWORD *)(*((_QWORD *)v19 + 5) + 104LL);
          if ( (unsigned int)IsDpiBoundaryBetweenWindows(v43, v19) )
          {
            *((_DWORD *)v43 + 56) = 0;
            *((_DWORD *)v43 + 57) = 0;
            LogicalToPhysicalInPlaceRectWithSubpixel(v19, &v363, (char *)v43 + 224);
            PhysicalToLogicalInPlaceRectWithSubpixel(v43, &v363, (char *)v43 + 224);
            v127 = a8;
          }
          if ( v19 != (struct tagWND *)GetDesktopWindow(v43) )
          {
            LODWORD(v360) = v363 + v360;
            HIDWORD(v360) += DWORD1(v363);
          }
          v285 = 1LL;
        }
        if ( !v126 )
        {
LABEL_323:
          if ( v275 )
            *(_DWORD *)(*(_QWORD *)(v60 + 416) + 800LL) &= 0xFFFFFFF9;
          v147 = *((_QWORD *)v43 + 5);
          v148 = *(_BYTE *)(v147 + 31) & 0xC0;
          if ( v148 == (char)0x80 || v148 == -64 )
          {
            SetOrClrWF(1LL, v43, 3844LL, 1LL);
            v147 = *((_QWORD *)v43 + 5);
          }
          *(_WORD *)(v147 + 30) |= v284;
          if ( SmartObjStackRef<tagMENU>::operator==((__int64)v274)
            && !v267
            && SharedPointerBase<unsigned short>::operator!=((_QWORD *)(*v270[0] + 96)) )
          {
            v322[0] = 0LL;
            v322[1] = 0LL;
            v149 = v43;
            if ( *((_QWORD *)v43 + 13) )
              v149 = (struct tagWND *)*((_QWORD *)v43 + 13);
            zzzLockDisplayAreaAndInvalidateDCCache(v149, 16LL);
            RtlInitUnicodeStringOrId(v322, *(_QWORD *)(*v270[0] + 96));
            Menu = xxxClientLoadMenu(*(_QWORD *)(*(_QWORD *)(*v270[0] + 8) + 64LL), v322);
            SmartObjStackRef<tagMENU>::operator=(v274, Menu);
            if ( (*(_BYTE *)(*((_QWORD *)v43 + 5) + 31LL) & 0xC0) == 0x40 )
            {
              v151 = SmartObjStackRef<tagMENU>::operator tagMENU *(v274);
              DestroyMenu(v151);
              SmartObjStackRef<tagMENU>::operator=(v274, 0LL);
            }
            if ( SmartObjStackRef<tagMENU>::operator==((__int64)v274) )
              *(_QWORD *)&v308[1] = 0LL;
            else
              *(_QWORD *)&v308[1] = *(_QWORD *)SmartObjStackRef<tagMENU>::operator unsigned __int64(v274);
          }
          if ( (*(_BYTE *)(*((_QWORD *)v43 + 5) + 31LL) & 0xC0) == 0x40 )
          {
            v152 = SmartObjStackRef<tagMENU>::operator tagMENU *(v274);
            v105 = *((_QWORD *)v43 + 5);
            *(_QWORD *)(v105 + 152) = v152;
            *((_QWORD *)v43 + 21) = v152;
          }
          else
          {
            LockWndMenuWorker(v43, 0LL, v274);
          }
          LOBYTE(v105) = *(_BYTE *)(*((_QWORD *)v43 + 5) + 31LL) & 0xC0;
          if ( (_BYTE)v105 == 64 )
          {
            if ( !v19 )
              goto LABEL_475;
            if ( (a16 & 2) != 0 )
              goto LABEL_344;
LABEL_389:
            if ( (*(_DWORD *)(*((_QWORD *)v43 + 5) + 232LL) & 8) != 0 )
            {
              v301 = *((_QWORD *)v43 + 13);
              UnlinkWindow(v43, v301);
            }
            if ( !IsTopLevelParent((__int64)v19) )
            {
              *(_DWORD *)(*((_QWORD *)v43 + 5) + 236LL) = *(_DWORD *)(*((_QWORD *)v19 + 5) + 236LL);
              SetOrClrWF(*(_BYTE *)(*((_QWORD *)v19 + 5) + 234LL) & 0x20, v43, 55840LL, 1LL);
            }
            if ( v19 && !(unsigned int)ValidateNewParent(v43, v19, v163, v164) )
            {
              v268 = 9;
              goto LABEL_475;
            }
            v165 = (_QWORD *)((char *)v43 + 104);
            v349 = *(_OWORD *)LockPointer(&v358, (__int64)v43 + 104, (__int64)v19);
            HMAssignmentLock(&v349);
            if ( v19 )
              v166 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v19 + 5) + 232LL), 26);
            else
              v166 = 0;
            SetWindowSubtreeCoreWindowStatus(v43, v166);
            v167 = *((_QWORD *)v43 + 5);
            if ( (*(_DWORD *)(v167 + 288) & 0xF) == 2 )
            {
              *(_DWORD *)(*((_QWORD *)v43 + 5) + 232LL) ^= (*(_DWORD *)(*((_QWORD *)v43 + 5) + 232LL) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics(v43) << 27)) & 0x8000000;
              v167 = *((_QWORD *)v43 + 5);
            }
            if ( (*(_BYTE *)(v167 + 21) & 1) == 0
              && (*(_DWORD *)(*(_QWORD *)(*v270[0] + 8) + 8LL) & 0x80u) != 0
              && (*(_BYTE *)(*((_QWORD *)v19 + 5) + 31LL) & 2) == 0 )
            {
              SetOrClrWF(0LL, v43, 3846LL, 1LL);
            }
            v168 = WindowCloakStateComponentUIAware;
            if ( (WindowCloakStateComponentUIAware & 2) == 0 )
              SetOrClrWF(1LL, v43, 55824LL, 0LL);
            if ( v168 )
            {
              v169 = zzzSetWindowCompositionCloak((__int64)v43, 0LL, v168);
              if ( v169 < 0 )
              {
                v170 = RtlNtStatusToDosError(v169);
                UserSetLastError(v170, v171, v172, v173);
                v268 = 8;
                goto LABEL_475;
              }
            }
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v317);
            if ( v301 )
              zzzLockDisplayAreaAndInvalidateDCCache(v301, 16LL);
            if ( v19 )
              zzzLockDisplayAreaAndInvalidateDCCache(v19, 16LL);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v317);
            if ( (*(_BYTE *)(*((_QWORD *)v43 + 5) + 31LL) & 0xC0) == 0x40
              && !(unsigned int)IsTopLevelWindow(v43)
              && SharedPointerBase<unsigned short>::operator!=((_QWORD *)v43 + 13) )
            {
              v175 = *v165;
              if ( v60 != *(_QWORD *)(*v165 + 16LL) )
              {
                if ( v19 != (struct tagWND *)v175 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v174);
                  v175 = *((_QWORD *)v43 + 13);
                }
                zzzAttachThreadInput(v60, *(_QWORD *)(v175 + 16), 1LL);
                v176 = *v165;
                if ( v176 != GetMessageWindow(v43)
                  && (((unsigned __int8)*(_DWORD *)(*(_QWORD *)(*v165 + 40LL) + 288LL) ^ *(_BYTE *)(*((_QWORD *)v43 + 5)
                                                                                                  + 288LL)) & 0xF) != 0
                  && !(unsigned int)IsChildWindowDpiIsolationEnabled(v43, *v165) )
                {
                  xxxForceUpdateProcessDpiAwarenessContext(v43, *(_DWORD *)(*(_QWORD *)(*v165 + 40LL) + 288LL));
                }
              }
            }
            if ( v302 != (unsigned __int16)gatomMessage && v302 != 32769 && v302 != 32774 && !*(_DWORD *)(v60 + 892) )
            {
              _InterlockedExchange(
                (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
              xxxUpdateInputHangInfo(0LL, 1);
            }
            xxxAdjustSize(v43);
            ConstrainWindowSIZERECT(&v360);
            if ( *((_QWORD *)v43 + 3) )
            {
              v177 = *((_QWORD *)v43 + 5);
              if ( (*(_BYTE *)(v177 + 31) & 0x40) == 0 && *(char *)(v177 + 24) >= 0 )
                xxxCheckFullScreen(v43, (struct tagSIZERECT *)&v360);
            }
            v178 = v361;
            if ( (int)v361 < 0 )
              v178 = 0;
            LODWORD(v361) = v178;
            v179 = HIDWORD(v361);
            if ( v361 < 0 )
              v179 = 0;
            HIDWORD(v361) = v179;
            RECTFromSIZERECT(*((_QWORD *)v43 + 5) + 88LL);
            if ( v267 )
            {
              v180 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v19 + 5) + 256LL));
            }
            else
            {
              if ( !v271 )
              {
                v181 = 0LL;
LABEL_443:
                if ( v181
                  || (v181 = (__int64 *)MonitorFromRect((struct tagRECT *)(*((_QWORD *)v43 + 5) + 88LL), 2u, 0),
                      v182 = 0LL,
                      v181) )
                {
                  v182 = *v181;
                }
                v183 = *((_QWORD *)v43 + 5);
                if ( v182 != *(_QWORD *)(v183 + 256) )
                {
                  *(_QWORD *)(v183 + 256) = v182;
                  *(_WORD *)(*((_QWORD *)v43 + 5) + 284LL) = *(_WORD *)(v181[5] + 64);
                  v184 = (_DWORD *)*((_QWORD *)v43 + 36);
                  if ( v184 )
                  {
                    --*v184;
                    v185 = (_DWORD *)*((_QWORD *)v43 + 36);
                    if ( !*v185 )
                      Win32FreePool(v185);
                    *((_QWORD *)v43 + 36) = 0LL;
                  }
                  v186 = (_DWORD *)v181[39];
                  *((_QWORD *)v43 + 36) = v186;
                  ++*v186;
                  if ( !v267 )
                    UpdateTopLevelWindowDPITransform((__int64)v43, (__int64)v181);
                }
                if ( (*(_BYTE *)(*((_QWORD *)v43 + 5) + 27LL) & 0x20) != 0 && GetRedirectionBitmap((__int64)v43) )
                {
                  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                  v187 = RecreateRedirectionBitmap(v43, 0, 0LL);
                  v188 = *(_QWORD *)(gpDispInfo + 40LL);
                  if ( v187 < 0 )
                  {
                    GreUnlockVisRgn(v188);
                    v268 = 3;
                    goto LABEL_475;
                  }
                  GreUnlockVisRgn(v188);
                }
                if ( (*(_BYTE *)(*(_QWORD *)(*v270[0] + 8) + 8LL) & 0x20) != 0
                  || (*(_BYTE *)(*(_QWORD *)(*v270[0] + 8) + 8LL) & 0x40) != 0 && !*(_QWORD *)(*v270[0] + 40) )
                {
                  v189 = 0x8000;
                  if ( GetStyleWindow((__int64)v43, 2848) )
                    v189 = 49152;
                  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                  CacheDC = CreateCacheDC(v43, v189, 0LL);
                  v191 = *(_QWORD *)(gpDispInfo + 40LL);
                  if ( !CacheDC )
                  {
                    GreUnlockVisRgn(v191);
                    v268 = 10;
                    goto LABEL_475;
                  }
                  GreUnlockVisRgn(v191);
                }
                if ( (v265 & 0x80000) != 0
                  && (*(_BYTE *)(*((_QWORD *)v43 + 5) + 26LL) & 8) == 0
                  && (int)xxxSetLayeredWindow((ULONG_PTR)v43) < 0 )
                {
                  v268 = 11;
                  goto LABEL_475;
                }
                if ( (v265 & 0x2000000) != 0 && !GetStyleWindow(*((_QWORD *)v43 + 13), 2818) )
                {
                  SetOrClrWF(1LL, v43, 2818LL, 1LL);
                  if ( (int)SetRedirectedWindow(v43, 2) < 0 )
                  {
                    SetOrClrWF(0LL, v43, 2818LL, 1LL);
                    v268 = 12;
                    goto LABEL_475;
                  }
                }
                *((_QWORD *)&v308[2] + 1) = __PAIR64__(a6, a7);
                *(_QWORD *)&v308[2] = __PAIR64__(a8, a9);
                if ( !xxxSendMessage((ULONG_PTR)v43) )
                  goto LABEL_475;
                if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v43 + 17) + 8LL) + 9LL) & 2) != 0 )
                {
                  SystemMenu = xxxGetSystemMenu(v43);
                  SmartObjStackRef<tagMENU>::operator=(v274, SystemMenu);
                  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator!=(v274, 0LL) )
                  {
                    v331 = 0LL;
                    v332 = 0LL;
                    v333 = 0LL;
                    v198 = SmartObjStackRef<tagMENU>::operator unsigned __int64(v274);
                    v199 = W32GetThreadWin32Thread(KeGetCurrentThread());
                    v331 = *(_QWORD *)(v199 + 408);
                    *(_QWORD *)(v199 + 408) = &v331;
                    v332 = v198;
                    if ( v198 )
                      HMLockObject(v198);
                    xxxRemoveDeleteMenuHelper(v274, 5LL, 1024LL, 1LL);
                    xxxRemoveDeleteMenuHelper(v274, 5LL, 1024LL, 1LL);
                    ThreadUnlock1(v201, v200, v202);
                  }
                }
                if ( (*(_BYTE *)(*((_QWORD *)v43 + 5) + 18LL) & 2) != 0
                  && (!*((_QWORD *)&v308[5] + 1)
                   || LODWORD(v308[5])
                   || !SharedPointerBase<unsigned short>::operator==((_QWORD *)v43 + 23)) )
                {
                  *((_QWORD *)&v308[3] + 1) = *((_QWORD *)v43 + 23);
                  *((_QWORD *)&v323 + 1) = *((_QWORD *)v43 + 23);
                  *(_QWORD *)&v323 = *(_QWORD *)(*((_QWORD *)v43 + 5) + 184LL);
                  v308[5] = v323;
                }
                if ( (*gpsi & 4) != 0 )
                {
                  v203 = (ULONG_PTR *)(gptiCurrent + 776LL);
                  if ( !*(_QWORD *)(gptiCurrent + 776LL) )
                  {
                    if ( (unsigned int)WantImeWindow(v19, v43) )
                    {
                      DefaultImeWindow = xxxCreateDefaultImeWindow(v43, v269, v289);
                      *(_QWORD *)&v344 = gptiCurrent + 776LL;
                      *((_QWORD *)&v344 + 1) = DefaultImeWindow;
                      v350 = v344;
                      HMAssignmentLock(&v350);
                      v291.m128i_i64[0] = *v203;
                      if ( v291.m128i_i64[0] )
                      {
                        v334 = 0LL;
                        v335 = 0LL;
                        v336 = 0LL;
                        v205 = W32GetThreadWin32Thread(KeGetCurrentThread());
                        v334 = *(_QWORD *)(v205 + 408);
                        *(_QWORD *)(v205 + 408) = &v334;
                        v335 = v291.m128i_i64[0];
                        HMLockObject(v291.m128i_i64[0]);
                        xxxSendMessage(*v203);
                        ThreadUnlock1(v207, v206, v208);
                      }
                      v209 = (**(_DWORD **)(gptiCurrent + 472LL) >> 6) & 1;
                      v327 = v209;
                      v291.m128i_i64[0] = *v203;
                      if ( v291.m128i_i64[0] && v209 )
                      {
                        v337 = 0LL;
                        v338 = 0LL;
                        v339 = 0LL;
                        v210 = W32GetThreadWin32Thread(KeGetCurrentThread());
                        v337 = *(_QWORD *)(v210 + 408);
                        *(_QWORD *)(v210 + 408) = &v337;
                        v338 = v291.m128i_i64[0];
                        if ( v291.m128i_i64[0] )
                          HMLockObject(v291.m128i_i64[0]);
                        xxxSendMessage(*v203);
                        **(_QWORD **)(gptiCurrent + 472LL) &= ~0x40uLL;
                        ThreadUnlock1(v212, v211, v213);
                      }
                    }
                  }
                }
                if ( v19 )
                {
                  v214 = *(unsigned int *)(*((_QWORD *)v43 + 5) + 232LL);
                  if ( (v214 & 8) == 0 || *((struct tagWND **)v43 + 13) == v19 )
                  {
                    v215 = PWInsertAfter(v285, v214);
                    if ( !IsPseudoPwnd(v215) && *(_QWORD *)(v215 + 104) != *((_QWORD *)v43 + 13) )
                      v215 = v267 != 0;
                    if ( SharedPointerBase<unsigned short>::operator!=((_QWORD *)v43 + 15) )
                    {
                      *(_DWORD *)(*((_QWORD *)v43 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v43 + 15) + 40LL)
                                                                            + 236LL);
                      SetOrClrWF(
                        *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v43 + 15) + 40LL) + 234LL) & 0x20,
                        v43,
                        55840LL,
                        1LL);
                    }
                    if ( !(unsigned int)ValidateNewParent(v43, v19, v216, v217) )
                    {
                      v221 = 9;
                      goto LABEL_538;
                    }
                    UnlinkWindow(v43, *((_QWORD *)v43 + 13));
                    v222 = *((_QWORD *)v43 + 5);
                    if ( (*(_BYTE *)(v222 + 31) & 0xC0) != 0x40
                      && v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 104LL) )
                    {
                      if ( (*(_BYTE *)(v222 + 24) & 8) != 0 )
                      {
                        if ( gHardErrorHandler )
                        {
                          TopMostInsertAfter = GetTopMostInsertAfter(v43);
                          if ( TopMostInsertAfter )
                            v215 = TopMostInsertAfter;
                        }
                      }
                      else if ( !v215 || !IsPseudoPwnd(v215) && (*(_BYTE *)(*(_QWORD *)(v215 + 40) + 24LL) & 8) != 0 )
                      {
                        v215 = (unsigned __int64)CalcForegroundInsertAfterComponentUIAware(v43);
                      }
                    }
                    if ( v215 >= 2 && IsPseudoPwnd(v215) )
                    {
                      v221 = 13;
                      goto LABEL_538;
                    }
                    LinkWindow(v43);
                    zzzLockDisplayAreaAndInvalidateDCCache(v19, 16LL);
                  }
                }
                v224 = *((_QWORD *)v43 + 5);
                v225 = v224;
                if ( (*(_BYTE *)(v224 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(*((_QWORD *)v19 + 5) + 26LL) & 0x40) != 0 )
                {
                  v226 = *(_DWORD *)(v224 + 96);
                  v227 = *(_DWORD *)(v224 + 88);
                  *(_DWORD *)(v224 + 96) = DWORD2(v363) + v363 - v227;
                  *(_DWORD *)(*((_QWORD *)v43 + 5) + 88LL) = v227 + *(_DWORD *)(*((_QWORD *)v43 + 5) + 96LL) - v226;
                  v225 = *((_QWORD *)v43 + 5);
                }
                v362 = *(_OWORD *)(v225 + 88);
                xxxSendTransformableMessage((_DWORD)v43, 131, 0, (unsigned int)&v362, 0);
                *(_OWORD *)(*((_QWORD *)v43 + 5) + 104LL) = v362;
                if ( xxxSendMessage((ULONG_PTR)v43) == -1 )
                {
                  v221 = 0;
LABEL_538:
                  if ( v278 )
                    ThreadUnlock1(v219, v218, v220);
                  if ( ThreadUnlock1(v219, v218, v220) )
                    xxxDestroyWindow((__int64 *)v43);
                  ClassUnlock(*(struct tagCLS **)v270[0]);
                  if ( v221 )
                  {
                    v319 = MEMORY[0xFFFFF78000000320];
                    v46 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
                    v45 = v221;
                    goto LABEL_78;
                  }
                  goto LABEL_581;
                }
                SetOrClrWF(1LL, v43, 1920LL, 1LL);
                if ( (unsigned int)IsWindowDesktopComposed(v43) )
                {
                  v231 = (void *)ReferenceDwmApiPort(v229, v228, v230);
                  DwmAsyncChildStyleChange(v231);
                  DwmChildRectChange((unsigned __int64)v43, v232, v233);
                  if ( SharedPointerBase<unsigned short>::operator==((_QWORD *)v43 + 15) )
                    v237 = 0LL;
                  else
                    v237 = **((_QWORD **)v43 + 15);
                  v238 = (void *)ReferenceDwmApiPort(v235, v234, v236);
                  DwmAsyncOwnerChange(v238, *(_QWORD *)v43, v237);
                }
                xxxWindowEvent(0x8000u, v43, 0LL, 0, 0);
                v239 = *((_QWORD *)v43 + 5);
                if ( (*(_BYTE *)(v239 + 16) & 0x10) == 0 )
                {
                  xxxSendSizeMessage((ULONG_PTR)v43);
                  if ( v19 && (struct tagWND *)GetDesktopWindow(v43) != v19 )
                  {
                    LODWORD(v362) = v362 - v363;
                    DWORD1(v362) -= DWORD1(v363);
                  }
                  xxxSendTransformableMessage((_DWORD)v43, 3, 0, (unsigned __int16)v362 | (WORD2(v362) << 16), 0);
                  v239 = *((_QWORD *)v43 + 5);
                }
                v240 = *(_BYTE *)(v239 + 31);
                if ( (v240 & 0x20) != 0 )
                {
                  SetMinimize((__int64)v43, 0);
                  v241 = 7LL;
                }
                else
                {
                  if ( (v240 & 1) == 0 )
                    goto LABEL_559;
                  SetOrClrWF(0LL, v43, 3841LL, 1LL);
                  v241 = 3LL;
                }
                xxxMinMaximize(v43, v241);
LABEL_559:
                CalcWindowFullScreen(v43);
                v242 = *((_QWORD *)v43 + 5);
                if ( (*(_BYTE *)(v242 + 31) & 0xC0) != 0x40 || (*(_BYTE *)(v242 + 24) & 4) != 0 )
                {
                  v244 = gptiCurrent;
                }
                else
                {
                  v243 = (__int64 *)((char *)v43 + 104);
                  v244 = gptiCurrent;
                  if ( SharedPointerBase<unsigned short>::operator!=((_QWORD *)v43 + 13) )
                  {
                    v245 = *v243;
                    v340 = *(_QWORD *)(gptiCurrent + 408LL);
                    *(_QWORD *)(gptiCurrent + 408LL) = &v340;
                    v341 = v245;
                    HMLockObject(v245);
                    xxxSendTransformableMessage(
                      *v243,
                      528,
                      (*((unsigned __int16 *)v43 + 84) << 16) | 1,
                      *(_QWORD *)v43,
                      0);
                    ThreadUnlock1(v247, v246, v248);
                  }
                }
                xxxInheritWindowMonitor(v43);
                if ( (a5 & 0x10000000) != 0 )
                  xxxShowWindow(v43);
                v251 = *((_QWORD *)v43 + 5);
                if ( (*(_BYTE *)(v251 + 31) & 0xC0) == 0 || (*(_BYTE *)(v251 + 26) & 4) != 0 )
                {
                  v251 = *(unsigned int *)(*(_QWORD *)(v244 + 416) + 684LL);
                  if ( (_DWORD)v251 )
                  {
                    xxxSendMessage((ULONG_PTR)v43);
                    *(_DWORD *)(*(_QWORD *)(v244 + 416) + 684LL) = 0;
                  }
                }
                if ( v278 )
                  ThreadUnlock1(v251, v249, v250);
                ClassUnlock(*(struct tagCLS **)v270[0]);
                v255 = ThreadUnlock1(v253, v252, v254);
                v258 = v255;
                if ( !v255 || (*(_BYTE *)(_HMPheFromObject(v255) + 25) & 1) != 0 )
                  v258 = 0LL;
                SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v274, v256, v257);
                SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v270, v259, v260);
                return v258;
              }
              v180 = GetInheritedMonitor(v43);
            }
            v181 = (__int64 *)v180;
            goto LABEL_443;
          }
          if ( (a16 & 4) != 0 && (int)CoreWindowProp::GetOrCreate(v43, &v316) >= 0 )
            *((_DWORD *)v316 + 5) = 1;
          v345 = *(_OWORD *)LockPointer(&v356, (__int64)v43 + 200, (__int64)v43);
          HMAssignmentLock(&v345);
          if ( IsTopLevelParent((__int64)v19) )
          {
            v155 = (_QWORD *)((char *)v43 + 120);
            v347 = *(_OWORD *)LockPointer(&v359, (__int64)v43 + 120, 0LL);
            HMAssignmentLock(&v347);
          }
          else
          {
            NonChildAncestor = GetNonChildAncestor((__int64)v19);
            if ( !(unsigned int)ValidateOwnerDepth(v43, NonChildAncestor) )
              goto LABEL_344;
            if ( NonChildAncestor )
            {
              *(_DWORD *)(*((_QWORD *)v43 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(NonChildAncestor + 40) + 236LL);
              SetOrClrWF(*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 234LL) & 0x20, v43, 55840LL, 1LL);
              WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)NonChildAncestor);
            }
            v155 = (_QWORD *)((char *)v43 + 120);
            v346 = *(_OWORD *)LockPointer(&v357, (__int64)v43 + 120, NonChildAncestor);
            HMAssignmentLock(&v346);
            if ( *((_QWORD *)v43 + 15) )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(*v155 + 40LL) + 24LL) & 8) != 0
                || (v299 = 1, tagWND::RedirectedFieldzbid<enum ZBID>::operator!=((__int64)v43 + 214, &v299)) )
              {
                SetOrClrWF(1LL, v43, 2056LL, 1LL);
              }
            }
            if ( v269 == *(_WORD *)(gpsi + 898LL) )
            {
              v60 = gptiCurrent;
            }
            else
            {
              v60 = gptiCurrent;
              if ( SharedPointerBase<unsigned short>::operator!=((_QWORD *)v43 + 15) )
              {
                v156 = *(_QWORD *)(*v155 + 16LL);
                if ( v156 != gptiCurrent )
                  zzzAttachThreadInput(gptiCurrent, v156, 1LL);
              }
            }
          }
          if ( SharedPointerBase<unsigned short>::operator==(v155) && !(unsigned int)CoreWindowProp::IsComponent(v43) )
          {
            v300[0] = 8;
            if ( (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v43 + 214, v300)
              || (v294 = 9, (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==(
                                               (char *)v43 + 214,
                                               &v294))
              || (v295 = 10,
                  (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v43 + 214, &v295))
              || (v296 = 11,
                  (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v43 + 214, &v296))
              || (v297 = 13,
                  (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v43 + 214, &v297))
              || (v298[0] = 15,
                  (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v43 + 214, v298))
              || (*(_BYTE *)(*((_QWORD *)v43 + 5) + 234LL) & 0x20) != 0 )
            {
              WindowCloakStateComponentUIAware = 2;
            }
          }
          if ( !v19 || v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 104LL) )
          {
            v19 = 0LL;
            v158 = KeGetCurrentThread();
            v159 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v157, v104, v106) )
            {
              v160 = (__int64 *)PsGetThreadWin32Thread(v158);
              if ( v160 )
                v159 = *v160;
            }
            if ( v159 )
            {
              v161 = *(_QWORD *)(v159 + 456);
              if ( v161 )
                v19 = *(struct tagWND **)(v161 + 24);
            }
            v328 = *(_QWORD *)(v60 + 408);
            *(_QWORD *)(v60 + 408) = &v328;
            v329 = v19;
            if ( v19 )
              HMLockObject(v19);
            v278 = 1;
          }
          if ( (a16 & 2) == 0 )
            goto LABEL_389;
          if ( !*(_QWORD *)(v60 + 1392) )
          {
            SetOrClrWF(1LL, v43, 55872LL, 1LL);
            *(_DWORD *)(v60 + 1224) |= 0x40000u;
            *(_DWORD *)(*(_QWORD *)(v60 + 424) + 396LL) |= 0x2000000u;
            if ( !*(_QWORD *)(v60 + 1384) )
            {
              KernelEvent = CreateKernelEvent(1LL, 0LL);
              *(_QWORD *)(v60 + 1384) = KernelEvent;
              if ( !KernelEvent )
              {
                v268 = 7;
                goto LABEL_475;
              }
            }
            *(_QWORD *)&v343 = v60 + 1392;
            *((_QWORD *)&v343 + 1) = v43;
            v348 = v343;
            HMAssignmentLock(&v348);
            goto LABEL_389;
          }
LABEL_344:
          UserSetLastError(87LL, v104, v106, v153);
          goto LABEL_475;
        }
        SetOrClrWF(1LL, v43, 3844LL, 1LL);
        v284 = 192;
        if ( (*(_BYTE *)(*((_QWORD *)v43 + 5) + 21LL) & 2) != 0 )
          SetOrClrWF(1LL, v43, 2305LL, 1LL);
        SetOrClrWF(1LL, v43, 16LL, 1LL);
        v129 = a6;
        v130 = 0x80000000LL;
        if ( (a6 == 0x80000000 || a6 == 0x8000) && HIDWORD(v360) != 0x80000000 )
        {
          v131 = v277;
          if ( HIDWORD(v360) != 0x8000 )
            v131 = HIDWORD(v360);
          v277 = v131;
          v130 = 0x80000000LL;
        }
        if ( v271 || a6 != 0x80000000 && a6 != 0x8000 && v127 != 0x80000000 && v127 != 0x8000 )
        {
          PrimaryMonitor = 0LL;
          goto LABEL_289;
        }
        v132 = *(_QWORD *)(*(_QWORD *)(v60 + 416) + 688LL);
        if ( v132 )
        {
          v133 = (struct tagMONITOR *)((__int64 (*)(void))ValidateHmonitor)();
        }
        else
        {
          if ( !v19 )
          {
            PrimaryMonitor = 0LL;
            goto LABEL_286;
          }
          v133 = _MonitorFromWindowInternal(v19, 2, 0);
        }
        PrimaryMonitor = (__int64)v133;
LABEL_286:
        if ( PrimaryMonitor )
        {
LABEL_302:
          SetTiledRect(v43, &v362, PrimaryMonitor);
          if ( a6 == 0x80000000 || a6 == 0x8000 )
          {
            v144 = *(_QWORD *)(v60 + 416);
            if ( (*(_DWORD *)(v144 + 800) & 4) != 0 )
            {
              v275 = 1;
              v129 = *(_DWORD *)(v144 + 784);
              LODWORD(v360) = v129;
              v145 = *(_DWORD *)(*(_QWORD *)(v60 + 416) + 788LL);
            }
            else
            {
              v129 = v362;
              LODWORD(v360) = v362;
              v145 = DWORD1(v362);
            }
            HIDWORD(v360) = v145;
            a7 = v145;
            a6 = v129;
            v140 = 1;
          }
          else
          {
            v139 = *(_WORD *)(PrimaryMonitor + 226);
            if ( v139 )
              *(_WORD *)(PrimaryMonitor + 226) = v139 - 1;
            v140 = v283;
          }
          if ( (_DWORD)v361 == 0x80000000 || (_DWORD)v361 == 0x8000 )
          {
            v146 = *(_QWORD *)(v60 + 416);
            if ( (*(_DWORD *)(v146 + 800) & 2) != 0 )
            {
              v275 = 1;
              LODWORD(v361) = *(_DWORD *)(v146 + 792);
              HIDWORD(v361) = *(_DWORD *)(*(_QWORD *)(v60 + 416) + 796LL);
            }
            else
            {
              LODWORD(v361) = DWORD2(v362) - v129;
              HIDWORD(v361) = HIDWORD(v362) - a7;
            }
          }
          else if ( v140 )
          {
            v291 = *(__m128i *)GetMonitorRect(&v355, PrimaryMonitor);
            v141 = _mm_srli_si128(v291, 8).m128i_u64[0];
            v142 = v360 + v361 - v141;
            v143 = HIDWORD(v360) + HIDWORD(v361) - HIDWORD(v141);
            if ( v142 > 0 )
            {
              a6 = v129 - v142;
              LODWORD(v360) = v129 - v142;
              if ( v129 - v142 < v291.m128i_i32[0] )
              {
                a6 = v291.m128i_i32[0];
                LODWORD(v360) = v291.m128i_i32[0];
              }
            }
            if ( v143 > 0 )
            {
              a7 -= v143;
              HIDWORD(v360) = a7;
              if ( a7 < v291.m128i_i32[1] )
              {
                a7 = v291.m128i_i32[1];
                HIDWORD(v360) = v291.m128i_i32[1];
              }
            }
          }
          goto LABEL_323;
        }
        PrimaryMonitor = GetPrimaryMonitor(v132, v130, v128);
LABEL_289:
        if ( !PrimaryMonitor )
        {
          PrimaryMonitor = ValidateHmonitor(*(_QWORD *)(*((_QWORD *)v43 + 5) + 256LL));
          if ( !PrimaryMonitor )
          {
            if ( v271 )
              PrimaryMonitor = GetInheritedMonitor(v43);
            else
              PrimaryMonitor = 0LL;
            if ( PrimaryMonitor
              || (PrimaryMonitor = MonitorFromRect((struct tagRECT *)(*((_QWORD *)v43 + 5) + 88LL), 2u, 0),
                  v135 = 0LL,
                  PrimaryMonitor) )
            {
              v135 = *(_QWORD *)PrimaryMonitor;
            }
            *(_QWORD *)(*((_QWORD *)v43 + 5) + 256LL) = v135;
            *(_WORD *)(*((_QWORD *)v43 + 5) + 284LL) = *(_WORD *)(*(_QWORD *)(PrimaryMonitor + 40) + 64LL);
            v136 = (_DWORD *)*((_QWORD *)v43 + 36);
            if ( v136 )
            {
              --*v136;
              v137 = (_DWORD *)*((_QWORD *)v43 + 36);
              if ( !*v137 )
                Win32FreePool(v137);
              *((_QWORD *)v43 + 36) = 0LL;
            }
            v138 = *(_DWORD **)(PrimaryMonitor + 312);
            *((_QWORD *)v43 + 36) = v138;
            ++*v138;
            UpdateTopLevelWindowDPITransform((__int64)v43, PrimaryMonitor);
          }
        }
        goto LABEL_302;
      }
      v119 = 1284LL;
    }
    SetOrClrWF(1LL, v43, v119, 1LL);
    goto LABEL_233;
  }
  v108 = xxxClientAllocWindowClassExtraBytes(*(unsigned int *)(*((_QWORD *)v43 + 5) + 200LL), (__int64)v43);
  v352 = v108;
  if ( v108 )
  {
    if ( (unsigned int)IsWindowBeingDestroyed(v43) )
      goto LABEL_475;
    if ( (*(_BYTE *)(_HMPheFromObject(v43) + 25) & 1) != 0 )
      goto LABEL_475;
    v315 = 0LL;
    if ( (unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned __int64>((char *)v43 + 320, &v315) )
      goto LABEL_475;
    v109 = *((_QWORD *)v43 + 5);
    if ( (*(_DWORD *)(v109 + 232) & 0x800) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v109);
      v109 = *((_QWORD *)v43 + 5);
    }
    *(_QWORD *)(v109 + 296) = v108;
    v102 = v282;
    goto LABEL_201;
  }
  v268 = 2;
LABEL_475:
  v192 = *(_BYTE *)(*((_QWORD *)v43 + 5) + 31LL) & 0x10;
  if ( v278 )
    ThreadUnlock1(v105, v104, v106);
  SetOrClrWF(1LL, v43, 1152LL, 1LL);
  SetOrClrWF(1LL, v43, 896LL, 1LL);
  if ( v192 )
    SetVisible(v43, 0);
  v193 = *((_QWORD *)v43 + 13);
  if ( v193 )
  {
    if ( v192 )
      zzzLockDisplayAreaAndInvalidateDCCache(v193, 16LL);
    if ( (*(_BYTE *)(*((_QWORD *)v43 + 5) + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(v43) )
    {
      v194 = *(_QWORD *)(*((_QWORD *)v43 + 13) + 16LL);
      if ( gptiCurrent != v194 )
        zzzAttachThreadInput(*((_QWORD *)v43 + 2), v194, 0LL);
    }
    UnlinkWindow(v43, *((_QWORD *)v43 + 13));
  }
  ClassUnlock(*(struct tagCLS **)v270[0]);
  xxxFreeWindow(v43, (struct tagSwitchWndInfo *)&v309, v195, v196);
  v45 = v268;
  if ( v268 )
  {
    v44 = MEMORY[0xFFFFF78000000320];
    v318 = MEMORY[0xFFFFF78000000320];
    goto LABEL_77;
  }
LABEL_581:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v274, v22, v23);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v270, v262, v263);
  return 0LL;
}
