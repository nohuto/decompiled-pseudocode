/*
 * XREFs of xxxCreateWindowEx @ 0x1C003DE94
 * Callers:
 *     NtUserCreateWindowEx @ 0x1C00685B0 (NtUserCreateWindowEx.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00AD260 (xxxCreateDefaultImeWindow.c)
 *     xxxCreateWindowStation @ 0x1C00EC474 (xxxCreateWindowStation.c)
 *     xxxCreateDesktopEx @ 0x1C00EFCF4 (xxxCreateDesktopEx.c)
 *     xxxCsDdeInitialize @ 0x1C0126F90 (xxxCsDdeInitialize.c)
 *     xxxAddShadow @ 0x1C0139D34 (xxxAddShadow.c)
 *     xxxNextWindow @ 0x1C01DF29C (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C0006400 (TraceChildWindowDpiTelemetry.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C000C9AC (SetWindowSubtreeCoreWindowStatus.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C000CCBC (GetWindowCloakStateComponentUIAware.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C000CD3C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     IsTopmostBandWindow @ 0x1C000CDC4 (IsTopmostBandWindow.c)
 *     ??9?$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAEAEBW4ZBID@@@Z @ 0x1C000CDEC (--9-$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAEAEBW4ZBID@@@Z.c)
 *     GetNonChildAncestor @ 0x1C000CE08 (GetNonChildAncestor.c)
 *     IsImmersiveAppIORestricted @ 0x1C000CE7C (IsImmersiveAppIORestricted.c)
 *     IsValidBandForProcess @ 0x1C000D42C (IsValidBandForProcess.c)
 *     HasImmersiveAppRight @ 0x1C000D4D0 (HasImmersiveAppRight.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C000EE84 (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     PWInsertAfter @ 0x1C000FC68 (PWInsertAfter.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C000FD08 (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     RecreateRedirectionBitmap @ 0x1C00107D4 (RecreateRedirectionBitmap.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C0016654 (xxxClientAllocWindowClassExtraBytes.c)
 *     xxxCallCtfHook @ 0x1C00167C8 (xxxCallCtfHook.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     UnlinkWindow @ 0x1C001B6E4 (UnlinkWindow.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     DwmAsyncOwnerChange @ 0x1C001CB10 (DwmAsyncOwnerChange.c)
 *     xxxCheckFullScreen @ 0x1C001CD74 (xxxCheckFullScreen.c)
 *     xxxFreeWindow @ 0x1C001E184 (xxxFreeWindow.c)
 *     SetTiledRect @ 0x1C001F7E4 (SetTiledRect.c)
 *     DereferenceClass @ 0x1C0021A20 (DereferenceClass.c)
 *     GetClassPtr @ 0x1C00224A0 (GetClassPtr.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0022754 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     RegisterDefaultClass @ 0x1C00230C8 (RegisterDefaultClass.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _IsTopLevelWindow @ 0x1C002BEB4 (_IsTopLevelWindow.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     xxxUpdateInputHangInfo @ 0x1C00341E0 (xxxUpdateInputHangInfo.c)
 *     GetStyleWindow @ 0x1C0039EC0 (GetStyleWindow.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C003AB88 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     ??8?$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAE$$QEAW4ZBID@@@Z @ 0x1C0041030 (--8-$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAE$$QEAW4ZBID@@@Z.c)
 *     xxxSendTransformableMessage @ 0x1C004104C (xxxSendTransformableMessage.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C004108C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ValidateNewParent @ 0x1C00410B4 (ValidateNewParent.c)
 *     IsTopLevelParent @ 0x1C00411A8 (IsTopLevelParent.c)
 *     ValidateParentDepth @ 0x1C0041260 (ValidateParentDepth.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C0041300 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C0041428 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??8?$SharedPointerBase@G@@QEBAEH@Z @ 0x1C00415DC (--8-$SharedPointerBase@G@@QEBAEH@Z.c)
 *     GetInheritedMonitor @ 0x1C0042D58 (GetInheritedMonitor.c)
 *     LinkWindow @ 0x1C0043240 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0069C30 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     xxxAdjustSize @ 0x1C0069CEC (xxxAdjustSize.c)
 *     MapClientNeuterToClientPfn @ 0x1C0069E6C (MapClientNeuterToClientPfn.c)
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C006BABC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C006C328 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     _DestroyMenu @ 0x1C006C6D0 (_DestroyMenu.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C006F2D8 (IsDpiBoundaryBetweenWindows.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C006F350 (ShouldUseLogPixelsForWindowMetrics.c)
 *     xxxInheritWindowMonitor @ 0x1C006F3B0 (xxxInheritWindowMonitor.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C007219C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ConstrainWindowSIZERECT @ 0x1C0072218 (ConstrainWindowSIZERECT.c)
 *     _GetWindowCompositionInfo @ 0x1C00722F8 (_GetWindowCompositionInfo.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     SetRedirectedWindow @ 0x1C0074068 (SetRedirectedWindow.c)
 *     GetRedirectionBitmap @ 0x1C0077990 (GetRedirectionBitmap.c)
 *     CalcWindowFullScreen @ 0x1C0079A8C (CalcWindowFullScreen.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C0079F78 (UpdateTopLevelWindowDPITransform.c)
 *     SetVisible @ 0x1C007A1B0 (SetVisible.c)
 *     IsDesktopWindow @ 0x1C007A740 (IsDesktopWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007A7CC (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C007A8E0 (_MonitorFromRect.c)
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C007C6F4 (IsWindowBeingDestroyed.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00A60B8 (RtlInitUnicodeStringOrId.c)
 *     xxxGetSystemMenu @ 0x1C00A625C (xxxGetSystemMenu.c)
 *     DwmChildRectChange @ 0x1C00A746C (DwmChildRectChange.c)
 *     NeedsWindowEdge @ 0x1C00A7B24 (NeedsWindowEdge.c)
 *     CheckGrantedAccess @ 0x1C00AA204 (CheckGrantedAccess.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 *     xxxCreateDefaultImeWindow @ 0x1C00AD260 (xxxCreateDefaultImeWindow.c)
 *     RtlInitLargeAnsiString @ 0x1C00B06D4 (RtlInitLargeAnsiString.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00B0B4C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     xxxClientLoadMenu @ 0x1C00B3DE8 (xxxClientLoadMenu.c)
 *     xxxLoadUserApiHook @ 0x1C00B5140 (xxxLoadUserApiHook.c)
 *     IsInsideUserApiHook @ 0x1C00B51F0 (IsInsideUserApiHook.c)
 *     xxxCreateClassSmIcon @ 0x1C00B6560 (xxxCreateClassSmIcon.c)
 *     GetMonitorRect @ 0x1C00B709C (GetMonitorRect.c)
 *     SetMinimize @ 0x1C00B8C08 (SetMinimize.c)
 *     xxxMinMaximize @ 0x1C00B937C (xxxMinMaximize.c)
 *     xxxSendSizeMessage @ 0x1C00BC968 (xxxSendSizeMessage.c)
 *     DwmAsyncChildCreate @ 0x1C00C8048 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C00C818C (DwmGetClassStyle.c)
 *     zzzAttachThreadInput @ 0x1C00D7444 (zzzAttachThreadInput.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1C00FE590 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x1C0104ADC (ClassLock.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C01070EC (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     RECTFromSIZERECT @ 0x1C0107194 (RECTFromSIZERECT.c)
 *     W32GetCurrentThreadDpiHostingBehavior @ 0x1C0108BB4 (W32GetCurrentThreadDpiHostingBehavior.c)
 *     IsPseudoPwnd @ 0x1C01090CC (IsPseudoPwnd.c)
 *     ClassUnlock @ 0x1C0109748 (ClassUnlock.c)
 *     ReferenceClass @ 0x1C0109980 (ReferenceClass.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C0109BE4 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C010C02C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C01105A0 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     ??9?$RedirectedFieldcbwndExtra@H@tagWND@@QEBAEAEBH@Z @ 0x1C01105B0 (--9-$RedirectedFieldcbwndExtra@H@tagWND@@QEBAEAEBH@Z.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0110FE0 (IsChildWindowDpiIsolationEnabled.c)
 *     GetMessageWindow @ 0x1C0111020 (GetMessageWindow.c)
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagCLS@@QEBAEAEBI@Z @ 0x1C0111074 (--9-$RedirectedFieldcbWndServerExtra@I@tagCLS@@QEBAEAEBI@Z.c)
 *     GetAppCompatFlags @ 0x1C0115390 (GetAppCompatFlags.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ @ 0x1C0117C80 (--B-$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ.c)
 *     RegisterIconTitleClass @ 0x1C0119D7C (RegisterIconTitleClass.c)
 *     IsValidBand @ 0x1C011C210 (IsValidBand.c)
 *     ValidateOwnerDepth @ 0x1C011C720 (ValidateOwnerDepth.c)
 *     xxxShowWindow @ 0x1C011E440 (xxxShowWindow.c)
 *     ?GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z @ 0x1C01228D4 (-GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z.c)
 *     IsInternalBand @ 0x1C0127C3C (IsInternalBand.c)
 *     GetPrimaryMonitor @ 0x1C012D1D4 (GetPrimaryMonitor.c)
 *     UserGetLastError @ 0x1C01310C0 (UserGetLastError.c)
 *     ??9?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0135490 (--9-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ @ 0x1C0135D54 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?TraceLoggingCreateWindowFailed@@YAXI_K@Z @ 0x1C01B9840 (-TraceLoggingCreateWindowFailed@@YAXI_K@Z.c)
 *     GetTopMostInsertAfter @ 0x1C01C03A4 (GetTopMostInsertAfter.c)
 *     ??$?9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z @ 0x1C01C3448 (--$-9_K@RedirectedFieldpExtraBytes@tagWND@@QEBAEAEB_K@Z.c)
 *     ??4?$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C01C3DF4 (--4-$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01D3000 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     HasMessageRootWindow @ 0x1C01E2134 (HasMessageRootWindow.c)
 *     _W32ExceptionHandler @ 0x1C0240D78 (_W32ExceptionHandler.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_DWORD *__fastcall xxxCreateWindowEx(
        int a1,
        wchar_t *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        struct tagWND *a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        unsigned __int16 a15,
        int a16,
        __int64 a17)
{
  struct tagWND *v19; // r13
  int v20; // r12d
  __int64 v21; // rcx
  int v22; // ebx
  int v23; // eax
  __int64 v24; // rax
  char v25; // al
  int v26; // r14d
  BOOL v27; // eax
  __int64 v28; // r8
  int v29; // r12d
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // edx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v34; // r15
  __int64 v35; // rdx
  __int64 v36; // rbx
  _QWORD *ClassPtr; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // ebx
  __int64 v43; // rax
  struct tagWND *v44; // r15
  unsigned int v45; // ecx
  unsigned __int128 v46; // rax
  int CurrentThreadDpiHostingBehavior; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  struct tagWND *v50; // r12
  __int64 v51; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v53; // rax
  struct tagWND *v54; // r12
  __int64 v55; // rbx
  __int64 *v56; // rax
  __int64 v57; // rax
  bool v58; // zf
  __int64 v59; // r12
  __int64 v60; // rcx
  int v61; // ebx
  __int64 v62; // r8
  int v63; // ecx
  int v64; // ecx
  int v65; // edx
  wchar_t *v66; // rcx
  __int64 *v67; // rax
  __int64 v68; // rcx
  __int16 v69; // r14
  int v70; // eax
  LONG v71; // ecx
  unsigned int v72; // edx
  unsigned int v73; // eax
  __int64 *InheritedMonitor; // rbx
  __int64 v75; // rcx
  _DWORD *v76; // rax
  _DWORD *v77; // rax
  __int64 MessageWindow; // rax
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 *v81; // rsi
  struct _KTHREAD *CurrentThread; // r14
  __int64 v83; // rbx
  __int64 *v84; // rax
  __int64 v85; // rax
  struct _KPROCESS *v86; // rbx
  int ProcessId; // r14d
  __int64 v88; // rsi
  __int64 v89; // rax
  int v90; // r15d
  int v91; // r12d
  __int64 ProcessSequenceNumber; // rbx
  int ClassStyle; // edi
  __int64 v94; // rdx
  __int64 v95; // rcx
  void *v96; // rax
  unsigned __int16 v97; // r14
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  __int64 v101; // rax
  char v102; // bl
  __int64 v103; // rcx
  __int64 v104; // r8
  volatile void *v105; // r14
  __int64 v106; // rdx
  __int64 v107; // r8
  __int64 v108; // rcx
  __int64 v109; // rdx
  int v110; // ebx
  __int64 v111; // rdx
  int AppCompatFlags; // eax
  char v113; // bl
  unsigned __int16 v114; // r8
  int v115; // eax
  int v116; // ebx
  __int64 v117; // rax
  char v118; // r14
  unsigned int v119; // ebx
  __int32 v120; // r14d
  int v121; // edx
  __int64 v122; // rcx
  struct tagMONITOR *v123; // rax
  __int64 PrimaryMonitor; // rbx
  __int64 v125; // rcx
  _DWORD *v126; // rax
  _DWORD *v127; // rcx
  _DWORD *v128; // rax
  __int16 v129; // ax
  int v130; // eax
  unsigned __int64 v131; // xmm0_8
  int v132; // edx
  int v133; // ecx
  __int64 v134; // rcx
  __int32 v135; // eax
  __int64 v136; // rcx
  __int64 v137; // rcx
  char v138; // al
  __int64 v139; // rcx
  __int64 Menu; // rax
  __int64 v141; // rax
  __int64 v142; // rax
  __int64 NonChildAncestor; // r14
  char *v144; // rbx
  __int64 v145; // rdx
  __int64 v146; // rdx
  __int64 v147; // rcx
  struct _KTHREAD *v148; // r14
  __int64 v149; // rbx
  __int64 *v150; // rax
  __int64 v151; // rax
  __int64 KernelEvent; // rax
  _QWORD *v153; // r14
  unsigned int v154; // edx
  __int64 v155; // rcx
  unsigned int v156; // ebx
  NTSTATUS v157; // eax
  ULONG v158; // eax
  __int64 v159; // rcx
  __int64 v160; // rdx
  __int64 v161; // rbx
  __int64 v162; // rcx
  int v163; // eax
  int v164; // eax
  __int64 v165; // rax
  __int64 *v166; // rbx
  __int64 v167; // rcx
  __int64 v168; // rdx
  _DWORD *v169; // rax
  _DWORD *v170; // rcx
  _DWORD *v171; // rax
  int v172; // eax
  __int64 v173; // rcx
  unsigned int v174; // ebx
  __int64 CacheDC; // rax
  __int64 v176; // rcx
  int v177; // ebx
  __int64 v178; // rcx
  __int64 v179; // rdx
  __int64 SystemMenu; // rax
  __int64 v181; // rbx
  __int64 v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rcx
  ULONG_PTR *v185; // rbx
  __int64 DefaultImeWindow; // rax
  __int64 v187; // rax
  __int64 v188; // rdx
  __int64 v189; // rcx
  int v190; // ecx
  ULONG_PTR v191; // rbx
  __int64 v192; // rax
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // rdx
  unsigned __int64 v196; // rbx
  __int64 v197; // rdx
  __int64 v198; // rcx
  int v199; // ebx
  __int64 v200; // rcx
  __int64 TopMostInsertAfter; // rax
  __int64 v202; // r9
  __int64 v203; // rdx
  int v204; // edx
  int v205; // r8d
  __int64 v206; // rdx
  __int64 v207; // rcx
  int v208; // ebx
  void *v209; // rax
  __int64 v210; // rdx
  __int64 v211; // rcx
  __int64 v212; // rbx
  void *v213; // rax
  __int64 v214; // rcx
  char v215; // al
  __int64 v216; // rdx
  __int64 v217; // rcx
  __int64 *v218; // rbx
  __int64 v219; // r14
  __int64 v220; // rdx
  __int64 v221; // rdx
  __int64 v222; // rcx
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // rdx
  __int64 v226; // rcx
  _DWORD *v227; // rax
  __int64 v228; // rdx
  _DWORD *v229; // rbx
  int v231; // [rsp+28h] [rbp-4A0h]
  __int32 v232; // [rsp+68h] [rbp-460h]
  unsigned int v233; // [rsp+70h] [rbp-458h]
  char v234; // [rsp+74h] [rbp-454h]
  int v235; // [rsp+78h] [rbp-450h]
  int v236; // [rsp+7Ch] [rbp-44Ch]
  unsigned int v237; // [rsp+7Ch] [rbp-44Ch]
  __int16 v238; // [rsp+80h] [rbp-448h]
  __int32 v239; // [rsp+84h] [rbp-444h]
  _QWORD v240[2]; // [rsp+88h] [rbp-440h] BYREF
  int v241; // [rsp+98h] [rbp-430h]
  unsigned int v242; // [rsp+9Ch] [rbp-42Ch]
  int v243; // [rsp+A0h] [rbp-428h]
  int v244; // [rsp+A4h] [rbp-424h]
  _QWORD v245[3]; // [rsp+A8h] [rbp-420h] BYREF
  int v246; // [rsp+C0h] [rbp-408h]
  int WindowCloakStateComponentUIAware; // [rsp+C4h] [rbp-404h]
  int v248; // [rsp+C8h] [rbp-400h]
  int v249; // [rsp+CCh] [rbp-3FCh]
  int v250; // [rsp+D0h] [rbp-3F8h]
  int v251; // [rsp+D4h] [rbp-3F4h]
  int v252; // [rsp+D8h] [rbp-3F0h]
  int v253; // [rsp+DCh] [rbp-3ECh]
  unsigned __int64 v254; // [rsp+E0h] [rbp-3E8h]
  BOOL v255; // [rsp+E8h] [rbp-3E0h]
  __m128i v256; // [rsp+F0h] [rbp-3D8h]
  int v257; // [rsp+100h] [rbp-3C8h]
  __int64 v258; // [rsp+108h] [rbp-3C0h]
  struct tagWND *v259; // [rsp+110h] [rbp-3B8h]
  __int64 v260; // [rsp+118h] [rbp-3B0h]
  int v261; // [rsp+124h] [rbp-3A4h]
  int v262; // [rsp+130h] [rbp-398h]
  int v263; // [rsp+134h] [rbp-394h]
  int v264; // [rsp+138h] [rbp-390h] BYREF
  int v265; // [rsp+13Ch] [rbp-38Ch] BYREF
  int v266; // [rsp+140h] [rbp-388h] BYREF
  int v267; // [rsp+144h] [rbp-384h] BYREF
  int v268; // [rsp+148h] [rbp-380h] BYREF
  int v269; // [rsp+14Ch] [rbp-37Ch] BYREF
  int v270; // [rsp+150h] [rbp-378h] BYREF
  int v271; // [rsp+154h] [rbp-374h] BYREF
  __int64 v272; // [rsp+158h] [rbp-370h]
  __int64 v273; // [rsp+160h] [rbp-368h]
  wchar_t *Str1; // [rsp+168h] [rbp-360h]
  int v275; // [rsp+170h] [rbp-358h] BYREF
  __int64 v276; // [rsp+178h] [rbp-350h]
  __int64 v277; // [rsp+180h] [rbp-348h]
  __int64 v278; // [rsp+188h] [rbp-340h]
  _OWORD v279[7]; // [rsp+190h] [rbp-338h] BYREF
  __int64 v280; // [rsp+208h] [rbp-2C0h]
  __int64 v281; // [rsp+210h] [rbp-2B8h]
  wchar_t *v282; // [rsp+218h] [rbp-2B0h]
  __int64 v283; // [rsp+220h] [rbp-2A8h]
  char v284[8]; // [rsp+228h] [rbp-2A0h] BYREF
  __int64 v285; // [rsp+230h] [rbp-298h] BYREF
  struct CoreWindowProp *v286; // [rsp+238h] [rbp-290h] BYREF
  char v287[8]; // [rsp+240h] [rbp-288h] BYREF
  __int64 v288; // [rsp+248h] [rbp-280h]
  int v289; // [rsp+250h] [rbp-278h]
  __int64 v290; // [rsp+258h] [rbp-270h] BYREF
  unsigned __int64 v291; // [rsp+260h] [rbp-268h]
  __int128 v292; // [rsp+268h] [rbp-260h]
  char v293[24]; // [rsp+278h] [rbp-250h] BYREF
  _QWORD v294[5]; // [rsp+290h] [rbp-238h] BYREF
  __int64 v295; // [rsp+2B8h] [rbp-210h]
  __int128 v296; // [rsp+2C0h] [rbp-208h] BYREF
  __int128 v297; // [rsp+2D0h] [rbp-1F8h] BYREF
  __int128 v298; // [rsp+2E0h] [rbp-1E8h] BYREF
  __int128 v299; // [rsp+2F0h] [rbp-1D8h] BYREF
  __int128 v300; // [rsp+300h] [rbp-1C8h] BYREF
  __m128i v301; // [rsp+310h] [rbp-1B8h] BYREF
  __m128i v302; // [rsp+320h] [rbp-1A8h] BYREF
  _BYTE v303[16]; // [rsp+330h] [rbp-198h] BYREF
  _QWORD v304[3]; // [rsp+340h] [rbp-188h] BYREF
  _QWORD v305[3]; // [rsp+358h] [rbp-170h] BYREF
  _QWORD v306[3]; // [rsp+370h] [rbp-158h] BYREF
  _QWORD v307[3]; // [rsp+388h] [rbp-140h] BYREF
  _QWORD v308[3]; // [rsp+3A0h] [rbp-128h] BYREF
  char v309[16]; // [rsp+3B8h] [rbp-110h] BYREF
  char v310[16]; // [rsp+3C8h] [rbp-100h] BYREF
  char v311[16]; // [rsp+3D8h] [rbp-F0h] BYREF
  char v312[16]; // [rsp+3E8h] [rbp-E0h] BYREF
  __int64 v313; // [rsp+3F8h] [rbp-D0h] BYREF
  __int64 v314; // [rsp+408h] [rbp-C0h] BYREF
  __int32 v315; // [rsp+418h] [rbp-B0h] BYREF
  __int32 v316; // [rsp+41Ch] [rbp-ACh]
  int v317; // [rsp+420h] [rbp-A8h]
  int v318; // [rsp+424h] [rbp-A4h]
  __int128 v319; // [rsp+428h] [rbp-A0h] BYREF
  __int128 v320; // [rsp+438h] [rbp-90h] BYREF
  struct tagRECT v321; // [rsp+448h] [rbp-80h] BYREF
  __int64 v322[5]; // [rsp+458h] [rbp-70h] BYREF

  v277 = a4;
  v273 = a3;
  Str1 = a2;
  v243 = a1;
  v255 = a1;
  v282 = a2;
  v283 = a3;
  v281 = a4;
  v19 = a10;
  v254 = (unsigned __int64)a10;
  v258 = a12;
  v260 = a13;
  v253 = 0;
  v242 = 0;
  v252 = 0;
  v246 = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v240);
  v319 = 0uLL;
  v248 = 5;
  v261 = 5;
  v272 = 0LL;
  v276 = gptiCurrent;
  v249 = 0;
  v250 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v20 = 0;
  v236 = 0;
  v320 = 0uLL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v245, a11);
  v235 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x10000000) == 0
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
  v251 = v23;
  v24 = *(_QWORD *)(gptiCurrent + 456LL);
  v278 = v24;
  v280 = v24;
  if ( a10 )
  {
    if ( *((_QWORD *)a10 + 3) != v24 )
      goto LABEL_3;
  }
  v25 = a16;
  v244 = a16;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 424LL)) )
    {
LABEL_12:
      v21 = 5LL;
      goto LABEL_573;
    }
    v20 = 1;
    v236 = 1;
    v25 = v244;
  }
  if ( (v25 & 2) != 0 && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 424LL)) )
    goto LABEL_12;
  v26 = a14;
  if ( !a14 )
  {
LABEL_24:
    v28 = gptiCurrent;
    goto LABEL_25;
  }
  if ( !(unsigned int)IsValidBand(a14) || (unsigned int)IsInternalBand(a14) )
    goto LABEL_3;
  v27 = HasImmersiveAppRight(*(_QWORD *)(gptiCurrent + 424LL));
  v28 = gptiCurrent;
  if ( v27 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 820LL) & 0x200) == 0 && a14 == 1 && !v20 )
  {
    if ( !(unsigned int)HasMessageRootWindow(a10) )
      goto LABEL_3;
    goto LABEL_24;
  }
LABEL_25:
  v29 = HIWORD(a5) & 0xC000;
  v241 = v29;
  v257 = (_WORD)v29 == 0x4000;
  v263 = v257;
  if ( (_WORD)v29 != 0x4000 )
  {
    if ( (unsigned int)ShouldSetNoOwner(*(_QWORD *)(v28 + 424), a10) )
      v19 = 0LL;
    v254 = (unsigned __int64)v19;
  }
  if ( !v19 || (unsigned int)IsDesktopWindow(v19) )
  {
    if ( !a14 )
    {
      if ( IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 424LL)) )
      {
        v236 = 1;
        v26 = 15;
      }
      else if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 820LL) & 2) != 0 && (v22 & 8) != 0 )
      {
        v26 = 2;
      }
      else
      {
        v26 = 1;
      }
    }
    goto LABEL_42;
  }
  v30 = *((_QWORD *)v19 + 5);
  v236 = *(_BYTE *)(v30 + 234) & 0x20;
  if ( a14 )
  {
    if ( a14 == *(_DWORD *)(v30 + 236) )
      goto LABEL_42;
LABEL_3:
    v21 = 87LL;
LABEL_573:
    UserSetLastError(v21);
    goto LABEL_574;
  }
  v26 = *(_DWORD *)(v30 + 236);
LABEL_42:
  v262 = v236;
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(gptiCurrent + 424LL), v26, (__int64)v19) )
    goto LABEL_12;
  v233 = v22;
  if ( (v22 & 0x400000) != 0 )
    goto LABEL_53;
  if ( !v19 )
  {
    if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v32 = v22;
      v233 = v22;
      if ( (_WORD)a2 == 0x8002 )
        goto LABEL_54;
    }
    v233 = v22;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v31);
    v32 = v22;
    if ( (*(_DWORD *)(CurrentProcessWin32Process + 824) & 1) == 0 )
      goto LABEL_54;
    v32 = v22 | 0x400000;
    goto LABEL_48;
  }
  v233 = v22;
  if ( (_WORD)v29 != 0x4000 )
  {
LABEL_53:
    v32 = v233;
    goto LABEL_54;
  }
  v32 = v22;
  v233 = v22;
  if ( (*(_BYTE *)(*((_QWORD *)v19 + 5) + 26LL) & 0x50) == 0x40 )
  {
    v32 = v22 | 0x400000;
LABEL_48:
    v233 = v32;
  }
LABEL_54:
  if ( (v32 & 0x2200000) == 0x2200000 )
    goto LABEL_3;
  v34 = gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 592LL)
    && !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 888LL), 2LL) )
  {
    goto LABEL_574;
  }
  if ( (_WORD)v29 != 0x4000 )
    goto LABEL_61;
  if ( !v19 )
  {
    v21 = 1406LL;
    goto LABEL_573;
  }
  if ( !(unsigned int)ValidateParentDepth(0LL, v19) )
    goto LABEL_3;
  while ( 1 )
  {
LABEL_61:
    v36 = v273;
    if ( (v273 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v284);
      if ( RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, *(NTSTRSAFE_PCWSTR *)(v36 + 8)) < 0 )
      {
        LOWORD(v36) = 0;
        v238 = 0;
        v250 = 1;
      }
      else
      {
        LOWORD(v36) = UserFindAtom(&gawchAtomScratch);
        v238 = v36;
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v284);
    }
    else
    {
      v238 = v273;
    }
    if ( (_WORD)v36 )
    {
      ClassPtr = (_QWORD *)GetClassPtr((unsigned __int16)v36, *(_QWORD *)(v34 + 424), v258);
      if ( ClassPtr )
        break;
    }
LABEL_109:
    if ( v250
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v66 = Str1)
        : (v66 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v66)) )
    {
      v21 = 1407LL;
      goto LABEL_573;
    }
    v250 = 1;
    LOWORD(v29) = v241;
    v34 = gptiCurrent;
  }
  SmartObjStackRefBase<tagCLS>::operator=(v240, *ClassPtr);
  v40 = *(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v240[0] + 8LL) + 6LL);
  if ( (v40 & 1) != 0 && (unsigned int)PsGetWin32KFilterSet(v40, v38, v39) == 5 )
    goto LABEL_574;
  if ( (unsigned int)NeedsWindowEdge(a5, v233, a15 >= 0x400u) )
    v42 = v233 | 0x100;
  else
    v42 = v233 & 0xFFFFFEFF;
  v233 = v42;
  LOBYTE(v41) = 1;
  v43 = HMAllocObject(v34, v278, v41, 312LL);
  v44 = (struct tagWND *)v43;
  v259 = (struct tagWND *)v43;
  if ( !v43 )
  {
    if ( (unsigned int)UserGetLastError() != 8 )
      goto LABEL_574;
    v45 = 1;
LABEL_77:
    v46 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
LABEL_78:
    TraceLoggingCreateWindowFailed(v45, *((unsigned __int64 *)&v46 + 1));
    goto LABEL_574;
  }
  *(_QWORD *)(*(_QWORD *)(v43 + 40) + 296LL) = 0LL;
  *(_QWORD *)(v43 + 264) = 0LL;
  *(_DWORD *)(*(_QWORD *)(v43 + 40) + 232LL) &= ~0x40000000u;
  CurrentThreadDpiHostingBehavior = W32GetCurrentThreadDpiHostingBehavior();
  v49 = *((_QWORD *)v44 + 5);
  *(_DWORD *)(v49 + 292) = CurrentThreadDpiHostingBehavior;
  if ( (_WORD)v29 != 0x4000 || !v19 )
    goto LABEL_99;
  v50 = 0LL;
  v256.m128i_i64[0] = (__int64)KeGetCurrentThread();
  v51 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v49, v48) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v256.m128i_i64[0]);
    if ( ThreadWin32Thread )
      v51 = *ThreadWin32Thread;
  }
  if ( v51 )
  {
    v53 = *(_QWORD *)(v51 + 464);
    if ( v53 )
      v50 = *(struct tagWND **)(v53 + 24);
  }
  if ( v19 != v50 )
  {
    v54 = 0LL;
    v256.m128i_i64[0] = (__int64)KeGetCurrentThread();
    v55 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v49, v48) )
    {
      v56 = (__int64 *)PsGetThreadWin32Thread(v256.m128i_i64[0]);
      if ( v56 )
        v55 = *v56;
    }
    if ( v55 )
    {
      v57 = *(_QWORD *)(v55 + 456);
      if ( v57 )
        v54 = *(struct tagWND **)(v57 + 104);
    }
    v58 = v19 == v54;
    v59 = gptiCurrent;
    if ( !v58 )
    {
      v49 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 424LL);
      if ( *(_QWORD *)(gptiCurrent + 424LL) == v49 && !(unsigned int)IsChildWindowDpiIsolationEnabled(0LL, v19) )
      {
        v60 = *(unsigned int *)(*((_QWORD *)v19 + 5) + 288LL);
        *(_DWORD *)(*((_QWORD *)v44 + 5) + 288LL) = v60;
        v61 = *(_DWORD *)(*((_QWORD *)v19 + 5) + 288LL);
        if ( (((unsigned __int8)v61 ^ (unsigned __int8)W32GetCurrentThreadDpiAwarenessContext(v60, v48)) & 0xF) != 0 )
          TraceChildWindowDpiTelemetry((__int64)v44, (__int64)v19, 0);
        goto LABEL_103;
      }
    }
  }
  else
  {
LABEL_99:
    v59 = gptiCurrent;
  }
  *(_DWORD *)(*((_QWORD *)v44 + 5) + 288LL) = W32GetCurrentThreadDpiAwarenessContext(v49, v48);
  if ( (*(_DWORD *)(*((_QWORD *)v44 + 5) + 288LL) & 0x4000000F) == 0
    && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480) + 224LL) & 0x40) != 0 )
  {
    *(_DWORD *)(*((_QWORD *)v44 + 5) + 288LL) |= 0x40000000u;
  }
LABEL_103:
  v62 = *((_QWORD *)v44 + 5);
  v63 = *(_DWORD *)(v62 + 288);
  if ( (v63 & 0xF) == 2 && (v63 & 0xF0) == 0x20 )
  {
    v64 = 0x10000000;
    v65 = 0x20000000;
  }
  else
  {
    v64 = 0;
    v65 = 0;
  }
  *(_DWORD *)(v62 + 232) = v64 | *(_DWORD *)(v62 + 232) & 0xEFFFFFFF;
  *(_DWORD *)(*((_QWORD *)v44 + 5) + 232LL) = v65 | *(_DWORD *)(*((_QWORD *)v44 + 5) + 232LL) & 0xDFFFFFFF;
  tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((char *)v44 + 112, *(_QWORD *)v240[0]);
  *(_DWORD *)(*((_QWORD *)v44 + 5) + 28LL) = a5 & 0xEFFFFFFF;
  *(_DWORD *)(*((_QWORD *)v44 + 5) + 24LL) = v233 & 0xFDF7FFFF;
  *(_DWORD *)(*((_QWORD *)v44 + 5) + 200LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v240[0] + 8LL) + 80LL);
  *(_DWORD *)(*((_QWORD *)v44 + 5) + 252LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v240[0] + 8LL) + 84LL);
  if ( !(unsigned int)ReferenceClass(*(_QWORD *)v240[0], v44) )
    goto LABEL_108;
  SmartObjStackRefBase<tagCLS>::operator=(v240, *((_QWORD *)v44 + 14));
  if ( !(unsigned int)ClassLock(*(_QWORD *)v240[0], v293) )
  {
    DereferenceClass(*(struct tagPROCESSINFO **)(v59 + 424), (__int64)v44);
LABEL_108:
    HMFreeObject(v44);
    goto LABEL_109;
  }
  *(_QWORD *)(*((_QWORD *)v44 + 5) + 224LL) = a17;
  if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v240[0] + 8LL) + 2LL) == *(_WORD *)(gpsi + 868LL) )
  {
    *(_QWORD *)(*((_QWORD *)v44 + 5) + 208LL) = 0LL;
  }
  else
  {
    v67 = *(__int64 **)(v59 + 792);
    v68 = 0LL;
    if ( v67 )
      v68 = *v67;
    *(_QWORD *)(*((_QWORD *)v44 + 5) + 208LL) = v68;
  }
  *(_DWORD *)(*((_QWORD *)v44 + 5) + 236LL) = v26;
  if ( (unsigned int)IsTopmostBandWindow((__int64)v44, (__int64)v19) )
    *(_DWORD *)(*((_QWORD *)v44 + 5) + 24LL) |= 8u;
  if ( v236 )
    SetOrClrWF(1, (__int64)v44, 0xDA20u, 0);
  ++*(_DWORD *)(v59 + 892);
  memset(v279, 0, sizeof(v279));
  DWORD2(v279[4]) = v233;
  *((_QWORD *)&v279[0] + 1) = v258;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v243 >= 0 )
    {
      *(_QWORD *)&v279[4] = *((_QWORD *)Str1 + 1);
      v279[6] = *(_OWORD *)Str1;
    }
    else
    {
      *(_QWORD *)&v279[4] = *(_QWORD *)(*(_QWORD *)v240[0] + 104LL);
      if ( (*(_QWORD *)&v279[4] & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString(&v279[6]);
    }
  }
  else
  {
    *(_QWORD *)&v279[4] = Str1;
  }
  if ( v277 )
  {
    *((_QWORD *)&v279[3] + 1) = *(_QWORD *)(v277 + 8);
    v279[5] = *(_OWORD *)v277;
  }
  LODWORD(v279[3]) = a5;
  v232 = a6;
  v239 = a7;
  *((_QWORD *)&v279[2] + 1) = __PAIR64__(a6, a7);
  v237 = a8;
  v242 = a9;
  *(_QWORD *)&v279[2] = __PAIR64__(a8, a9);
  if ( v19 )
    *((_QWORD *)&v279[1] + 1) = *(_QWORD *)v19;
  else
    *((_QWORD *)&v279[1] + 1) = 0LL;
  v69 = v241;
  if ( (_WORD)v241 == 0x4000 )
  {
    *(_QWORD *)&v279[1] = SmartObjStackRef<tagMENU>::operator tagMENU *(v245);
    *(_DWORD *)(*((_QWORD *)v44 + 5) + 24LL) |= *(_DWORD *)(*((_QWORD *)v19 + 5) + 24LL) & 0xC4000000;
  }
  else if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v245) )
  {
    *(_QWORD *)&v279[1] = 0LL;
  }
  else
  {
    *(_QWORD *)&v279[1] = *(_QWORD *)SmartObjStackRef<tagMENU>::operator unsigned __int64(v245);
  }
  *(_QWORD *)&v279[0] = v260;
  v294[0] = *(_QWORD *)(v59 + 416);
  *(_QWORD *)(v59 + 416) = v294;
  v294[1] = v44;
  _InterlockedAdd((volatile signed __int32 *)v44 + 2, 1u);
  if ( a6 == 0x80000000 || a6 == 0x8000 )
  {
    v70 = 0;
    v321.left = 0;
  }
  else
  {
    v70 = a6;
    v321.left = a6;
  }
  v71 = a7;
  if ( a7 == 0x80000000 || a7 == 0x8000 )
    v71 = 0;
  v321.top = v71;
  v72 = a8;
  if ( a8 == 0x80000000 || a8 == 0x8000 )
    v72 = 0;
  v321.right = v72 + v70;
  v73 = v242;
  if ( v242 == 0x80000000 || v242 == 0x8000 )
    v73 = 0;
  v321.bottom = v71 + v73;
  InheritedMonitor = (__int64 *)GetInheritedMonitor(v44);
  if ( InheritedMonitor )
  {
    v241 = 1;
  }
  else
  {
    v241 = 0;
    if ( v19 )
      InheritedMonitor = (__int64 *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v19 + 5) + 256LL));
  }
  if ( InheritedMonitor || (InheritedMonitor = (__int64 *)MonitorFromRect(&v321), v75 = 0LL, InheritedMonitor) )
    v75 = *InheritedMonitor;
  *(_QWORD *)(*((_QWORD *)v44 + 5) + 256LL) = v75;
  *(_DWORD *)(*((_QWORD *)v44 + 5) + 284LL) = *(unsigned __int16 *)(InheritedMonitor[5] + 64);
  v76 = (_DWORD *)InheritedMonitor[39];
  *((_QWORD *)v44 + 34) = v76;
  ++*v76;
  *((_QWORD *)v44 + 35) = 0LL;
  *(_DWORD *)(*((_QWORD *)v44 + 5) + 232LL) &= ~0x4000000u;
  if ( v69 != 0x4000 || (unsigned int)IsDpiBoundaryBetweenWindows(v44, v19) )
    UpdateTopLevelWindowDPITransform(v44, InheritedMonitor);
  if ( v69 == 0x4000 )
  {
    if ( v19 )
    {
      *(_WORD *)(*((_QWORD *)v44 + 5) + 286LL) = *(_WORD *)(*((_QWORD *)v19 + 5) + 286LL);
      v77 = (_DWORD *)*((_QWORD *)v19 + 35);
      if ( v77 )
      {
        *((_QWORD *)v44 + 35) = v77;
        ++*v77;
      }
    }
  }
  if ( *((_QWORD *)v44 + 3) )
  {
    MessageWindow = GetMessageWindow(v44);
    v296 = *(_OWORD *)LockPointer(v309, (char *)v44 + 80, MessageWindow);
    HMAssignmentLock(&v296);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v44) )
  {
    v81 = (__int64 *)v19;
    if ( v69 != 0x4000 && (!v19 || v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 104LL)) )
    {
      v81 = 0LL;
      CurrentThread = KeGetCurrentThread();
      v83 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v80, v79) )
      {
        v84 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( v84 )
          v83 = *v84;
      }
      if ( v83 )
      {
        v85 = *(_QWORD *)(v83 + 464);
        if ( v85 )
          v81 = *(__int64 **)(v85 + 24);
      }
    }
    memset(v322, 0, sizeof(v322));
    GetWindowCompositionInfo(v44, v322);
    v86 = *(struct _KPROCESS **)(**((_QWORD **)v44 + 2) + 544LL);
    if ( v81 )
      v260 = *v81;
    else
      v260 = 0LL;
    ProcessId = (unsigned int)PsGetProcessId(v86);
    v88 = ***(_QWORD ***)(*((_QWORD *)v44 + 3) + 8LL);
    v89 = *((_QWORD *)v44 + 5);
    v90 = *(_DWORD *)(v89 + 232);
    v91 = *(_DWORD *)(v89 + 24);
    ProcessSequenceNumber = PsGetProcessSequenceNumber(v86);
    ClassStyle = DwmGetClassStyle(v259);
    v96 = (void *)ReferenceDwmApiPort(v95, v94);
    v231 = v90;
    v44 = v259;
    DwmAsyncChildCreate(
      v96,
      v91,
      v231,
      ClassStyle,
      (__int64)v322,
      v88,
      (__int64)&v321,
      ProcessId,
      ProcessSequenceNumber);
    v19 = (struct tagWND *)v254;
    v59 = gptiCurrent;
  }
  *(_QWORD *)(*((_QWORD *)v44 + 5) + 32LL) = v258;
  v97 = v251;
  *(_QWORD *)(*((_QWORD *)v44 + 5) + 120LL) = MapClientNeuterToClientPfn(
                                                *(_QWORD *)v240[0],
                                                0LL,
                                                (unsigned __int16)v251);
  SetOrClrWF(*(_WORD *)(*(_QWORD *)(*(_QWORD *)v240[0] + 8LL) + 6LL) & 1, (__int64)v44, 0x204u, 1);
  v264 = 0;
  if ( (unsigned __int8)tagCLS::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(
                          *(_QWORD *)v240[0] + 122LL,
                          &v264) )
  {
    v101 = Win32AllocPoolZInit(*(unsigned int *)(*(_QWORD *)(*(_QWORD *)v240[0] + 8LL) + 84LL), 1937208149LL);
    *((_QWORD *)v44 + 33) = v101;
    if ( !v101 )
    {
      v235 = 5;
      goto LABEL_470;
    }
  }
  v102 = *(_BYTE *)(*((_QWORD *)v44 + 5) + 18LL) & 4;
  if ( (unsigned int)PsGetWin32KFilterSet(v99, v98, v100) == 5 && !v102 )
  {
    *(_DWORD *)(*((_QWORD *)v44 + 5) + 200LL) = (*(_DWORD *)(*((_QWORD *)v44 + 5) + 200LL) + 7) & 0xFFFFFFF8;
    *(_DWORD *)(*((_QWORD *)v44 + 5) + 200LL) += 32;
  }
  v265 = 0;
  if ( !(unsigned __int8)tagWND::RedirectedFieldcbwndExtra<int>::operator!=((char *)v44 + 161, &v265) )
  {
LABEL_199:
    if ( (unsigned int)PsGetWin32KFilterSet(v103, v98, v104) != 5 || v102 )
    {
      v110 = v243;
    }
    else
    {
      v108 = *((_QWORD *)v44 + 5);
      v109 = *(_QWORD *)(v108 + 296);
      v107 = *(int *)(v108 + 200);
      v295 = *(_QWORD *)(v108 + 120);
      *(_QWORD *)(v107 + v109 - 32) = v295;
      v110 = v243;
      if ( v243 >= 0 )
        v106 = *(_QWORD *)(gpsi + 768LL);
      else
        v106 = *(_QWORD *)(gpsi + 576LL);
      *(_QWORD *)(*((_QWORD *)v44 + 5) + 120LL) = v106;
    }
    if ( *(_QWORD *)(*(_QWORD *)v240[0] + 80LL)
      && !*(_QWORD *)(*(_QWORD *)v240[0] + 112LL)
      && (unsigned int)PsGetWin32KFilterSet(*(_QWORD *)v240[0], v106, v107) != 5 )
    {
      xxxCreateClassSmIcon(v240);
    }
    SetOrClrWF(1, (__int64)v44, v97, 1);
    if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v240[0] + 8LL) + 6LL) & 2) != 0
      || v110 < 0
      && (v238 == *(_WORD *)(gpsi + 868LL)
       || v238 == *(_WORD *)(gpsi + 878LL)
       || v238 == *(_WORD *)(gpsi + 882LL)
       || v238 == *(_WORD *)(gpsi + 904LL)
       || v238 == *(_WORD *)(gpsi + 870LL)
       || v238 == *(_WORD *)(gpsi + 874LL)
       || v238 == *(_WORD *)(gpsi + 880LL)
       || v238 == *(_WORD *)(gpsi + 898LL)
       || v238 == *(_WORD *)(gpsi + 872LL)) )
    {
      SetOrClrWF(1, (__int64)v44, 0x208u, 1);
    }
    AppCompatFlags = GetAppCompatFlags(v59, v111);
    v113 = AppCompatFlags;
    if ( (AppCompatFlags & 0x8000000) != 0 )
    {
      SetOrClrWF(1, (__int64)v44, 0x408u, 1);
      v233 &= 0x3Fu;
      DWORD2(v279[4]) = BYTE8(v279[4]) & 0x3F;
    }
    *(_WORD *)(*((_QWORD *)v44 + 5) + 40LL) = 0;
    if ( a15 < 0x30Au )
    {
      if ( (v113 & 0x40) == 0 )
        goto LABEL_231;
      v114 = 1600;
    }
    else
    {
      SetOrClrWF(1, (__int64)v44, 0x501u, 1);
      if ( a15 < 0x400u || (SetOrClrWF(1, (__int64)v44, 0x502u, 1), a15 < 0x500u) )
      {
LABEL_231:
        v115 = a15;
        if ( a15 <= *(_WORD *)(v59 + 636) )
          v115 = *(_DWORD *)(v59 + 636);
        *((_DWORD *)v44 + 60) = v115;
        if ( (GetAppCompatFlags2(39168LL) & 0x10000000) != 0 )
          SetOrClrWF(1, (__int64)v44, 0xA80u, 1);
        if ( (unsigned int)IsInsideUserApiHook() )
          xxxLoadUserApiHook();
        if ( (unsigned int)WantImeWindow(v19, v44) )
          xxxCallCtfHook(5, 3, *(_QWORD *)v44, 0LL);
        if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v59 + 464) + 16LL) | *(_BYTE *)(v59 + 680)) & 0x40) != 0 )
        {
          v290 = (__int64)v279;
          v291 = 0LL;
          if ( (unsigned int)xxxCallHook(3, *(_QWORD *)v44, (__int64)&v290, 5) )
          {
            v235 = 6;
            goto LABEL_470;
          }
          v116 = HIDWORD(v279[2]);
          v232 = HIDWORD(v279[2]);
          v239 = DWORD2(v279[2]);
          v237 = DWORD1(v279[2]);
          v242 = v279[2];
          v254 = v291;
        }
        else
        {
          v254 = 0LL;
          v116 = a6;
        }
        v117 = *((_QWORD *)v44 + 5);
        LOBYTE(v98) = *(_BYTE *)(v117 + 31) & 0xC0;
        v234 = v98;
        v99 = (_BYTE)v98 == 64;
        v255 = (_BYTE)v98 == 64;
        if ( (_BYTE)v98 == 64 && !v19 )
          goto LABEL_470;
        if ( (_DWORD)v99 != v257 )
        {
          SmartObjStackRef<tagMENU>::operator=(v245, 0LL);
          v117 = *((_QWORD *)v44 + 5);
          LOBYTE(v98) = v234;
        }
        v118 = *(_BYTE *)(v117 + 31) & 0xC0;
        if ( v118 )
        {
          if ( v116 == 0x80000000 || v116 == 0x8000 )
          {
            v116 = 0;
            v232 = 0;
            v239 = 0;
          }
          if ( v237 == 0x80000000 || v237 == 0x8000 )
          {
            v237 = 0;
            v242 = 0;
          }
        }
        v315 = v116;
        v316 = v239;
        v119 = v237;
        v317 = v237;
        v318 = v242;
        if ( (_BYTE)v98 == 64 )
        {
          v320 = *(_OWORD *)(*((_QWORD *)v19 + 5) + 104LL);
          if ( (unsigned int)IsDpiBoundaryBetweenWindows(v44, v19) )
          {
            *((_DWORD *)v44 + 52) = 0;
            *((_DWORD *)v44 + 53) = 0;
            LogicalToPhysicalInPlaceRectWithSubpixel(v19, &v320, (char *)v44 + 208);
            PhysicalToLogicalInPlaceRectWithSubpixel(v44, &v320, (char *)v44 + 208);
            v119 = v237;
          }
          if ( v19 != (struct tagWND *)GetDesktopWindow(v44) )
          {
            v315 += v320;
            v316 += DWORD1(v320);
          }
          v254 = 1LL;
        }
        if ( v118 )
        {
LABEL_318:
          if ( v246 )
            *(_DWORD *)(*(_QWORD *)(v59 + 424) + 808LL) &= 0xFFFFFFF9;
          v137 = *((_QWORD *)v44 + 5);
          v138 = *(_BYTE *)(v137 + 31) & 0xC0;
          if ( v138 == (char)0x80 || v138 == -64 )
          {
            SetOrClrWF(1, (__int64)v44, 0xF04u, 1);
            v137 = *((_QWORD *)v44 + 5);
          }
          *(_WORD *)(v137 + 30) |= v253;
          if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v245)
            && v234 != 64
            && (unsigned __int8)HmgLockResultBase<META>::operator bool(*(_QWORD *)v240[0] + 96LL, 0LL) )
          {
            v139 = (__int64)v44;
            if ( *((_QWORD *)v44 + 10) )
              v139 = *((_QWORD *)v44 + 10);
            zzzLockDisplayAreaAndInvalidateDCCache(v139, 16, 0LL);
            RtlInitUnicodeStringOrId(v303, *(_QWORD *)(*(_QWORD *)v240[0] + 96LL));
            Menu = xxxClientLoadMenu(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v240[0] + 8LL) + 64LL), v303);
            SmartObjStackRef<tagMENU>::operator=(v245, Menu);
            if ( v255 != ((*(_BYTE *)(*((_QWORD *)v44 + 5) + 31LL) & 0xC0) == 64) )
            {
              v141 = SmartObjStackRef<tagMENU>::operator tagMENU *(v245);
              DestroyMenu(v141);
              SmartObjStackRef<tagMENU>::operator=(v245, 0LL);
            }
            if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v245) )
              *(_QWORD *)&v279[1] = 0LL;
            else
              *(_QWORD *)&v279[1] = *(_QWORD *)SmartObjStackRef<tagMENU>::operator unsigned __int64(v245);
          }
          if ( (*(_BYTE *)(*((_QWORD *)v44 + 5) + 31LL) & 0xC0) == 0x40 )
          {
            v142 = SmartObjStackRef<tagMENU>::operator tagMENU *(v245);
            v99 = *((_QWORD *)v44 + 5);
            *(_QWORD *)(v99 + 152) = v142;
            *((_QWORD *)v44 + 18) = v142;
          }
          else
          {
            LockWndMenuWorker(v44, 0LL, v245);
          }
          LOBYTE(v99) = *(_BYTE *)(*((_QWORD *)v44 + 5) + 31LL) & 0xC0;
          if ( (_BYTE)v99 == 64 )
          {
            if ( !v19 )
              goto LABEL_470;
            if ( (v244 & 2) != 0 )
              goto LABEL_339;
LABEL_384:
            if ( (*(_DWORD *)(*((_QWORD *)v44 + 5) + 232LL) & 8) != 0 )
            {
              v272 = *((_QWORD *)v44 + 10);
              UnlinkWindow(v44, v272);
            }
            if ( !(unsigned int)IsTopLevelParent(v19) )
            {
              *(_DWORD *)(*((_QWORD *)v44 + 5) + 236LL) = *(_DWORD *)(*((_QWORD *)v19 + 5) + 236LL);
              SetOrClrWF(*(_BYTE *)(*((_QWORD *)v19 + 5) + 234LL) & 0x20, (__int64)v44, 0xDA20u, 1);
            }
            if ( v19 && !(unsigned int)ValidateNewParent(v44, v19) )
            {
              v235 = 9;
              goto LABEL_470;
            }
            v153 = (_QWORD *)((char *)v44 + 80);
            v297 = *(_OWORD *)LockPointer(v311, (char *)v44 + 80, v19);
            HMAssignmentLock(&v297);
            if ( v19 )
              v154 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v19 + 5) + 232LL), 26);
            else
              v154 = 0;
            SetWindowSubtreeCoreWindowStatus(v44, v154);
            v155 = *((_QWORD *)v44 + 5);
            if ( (*(_DWORD *)(v155 + 288) & 0xF) == 2 )
            {
              *(_DWORD *)(*((_QWORD *)v44 + 5) + 232LL) ^= (*(_DWORD *)(*((_QWORD *)v44 + 5) + 232LL) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics(v44) << 27)) & 0x8000000;
              v155 = *((_QWORD *)v44 + 5);
            }
            if ( (*(_BYTE *)(v155 + 21) & 1) == 0
              && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v240[0] + 8LL) + 8LL) & 0x80u) != 0
              && (*(_BYTE *)(*((_QWORD *)v19 + 5) + 31LL) & 2) == 0 )
            {
              SetOrClrWF(0, (__int64)v44, 0xF06u, 1);
            }
            v156 = WindowCloakStateComponentUIAware;
            if ( (WindowCloakStateComponentUIAware & 2) == 0 )
              SetOrClrWF(1, (__int64)v44, 0xDA10u, 0);
            if ( v156 )
            {
              v157 = zzzSetWindowCompositionCloak(v44, 0LL, v156);
              if ( v157 < 0 )
              {
                v158 = RtlNtStatusToDosError(v157);
                UserSetLastError(v158);
                v235 = 8;
                goto LABEL_470;
              }
            }
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v287);
            if ( v272 )
              zzzLockDisplayAreaAndInvalidateDCCache(v272, 16, 0LL);
            if ( v19 )
              zzzLockDisplayAreaAndInvalidateDCCache((__int64)v19, 16, 0LL);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v287);
            if ( (*(_BYTE *)(*((_QWORD *)v44 + 5) + 31LL) & 0xC0) == 0x40
              && !(unsigned int)IsTopLevelWindow((__int64)v44) )
            {
              if ( (unsigned __int8)HmgLockResultBase<META>::operator bool((char *)v44 + 80, 0LL) )
              {
                v160 = *v153;
                if ( v59 != *(_QWORD *)(*v153 + 16LL) )
                {
                  if ( v19 != (struct tagWND *)v160 )
                  {
                    MicrosoftTelemetryAssertTriggeredNoArgsKM(v159);
                    v160 = *((_QWORD *)v44 + 10);
                  }
                  zzzAttachThreadInput(v59, *(_QWORD *)(v160 + 16), 1LL);
                  v161 = *v153;
                  if ( v161 != GetMessageWindow(v44)
                    && (((unsigned __int8)*(_DWORD *)(*(_QWORD *)(*v153 + 40LL) + 288LL) ^ *(_BYTE *)(*((_QWORD *)v44 + 5) + 288LL)) & 0xF) != 0
                    && !(unsigned int)IsChildWindowDpiIsolationEnabled(v44, *v153) )
                  {
                    xxxForceUpdateProcessDpiAwarenessContext(v44, *(_DWORD *)(*(_QWORD *)(*v153 + 40LL) + 288LL));
                  }
                }
              }
            }
            if ( v273 != (unsigned __int16)gatomMessage && v273 != 32769 && v273 != 32774 && !*(_DWORD *)(v59 + 892) )
            {
              _InterlockedExchange(
                (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 448LL) + 12LL),
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
              xxxUpdateInputHangInfo(0LL, 1);
            }
            xxxAdjustSize(v44);
            ConstrainWindowSIZERECT(&v315);
            if ( *((_QWORD *)v44 + 3) )
            {
              v162 = *((_QWORD *)v44 + 5);
              if ( (*(_BYTE *)(v162 + 31) & 0x40) == 0 && *(char *)(v162 + 24) >= 0 )
                xxxCheckFullScreen(v44, (struct tagSIZERECT *)&v315);
            }
            v163 = v317;
            if ( v317 < 0 )
              v163 = 0;
            v317 = v163;
            v164 = v318;
            if ( v318 < 0 )
              v164 = 0;
            v318 = v164;
            RECTFromSIZERECT(*((_QWORD *)v44 + 5) + 88LL);
            if ( v234 == 64 )
            {
              v165 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v19 + 5) + 256LL));
            }
            else
            {
              if ( !v241 )
              {
                v166 = 0LL;
LABEL_438:
                if ( v166
                  || (v166 = (__int64 *)MonitorFromRect((struct tagRECT *)(*((_QWORD *)v44 + 5) + 88LL)),
                      v167 = 0LL,
                      v166) )
                {
                  v167 = *v166;
                }
                v288 = v167;
                v168 = *((_QWORD *)v44 + 5);
                if ( v167 != *(_QWORD *)(v168 + 256) )
                {
                  *(_QWORD *)(v168 + 256) = v167;
                  *(_WORD *)(*((_QWORD *)v44 + 5) + 284LL) = *(_WORD *)(v166[5] + 64);
                  v169 = (_DWORD *)*((_QWORD *)v44 + 34);
                  if ( v169 )
                  {
                    --*v169;
                    v170 = (_DWORD *)*((_QWORD *)v44 + 34);
                    if ( !*v170 )
                      Win32FreePool(v170);
                    *((_QWORD *)v44 + 34) = 0LL;
                  }
                  v171 = (_DWORD *)v166[39];
                  *((_QWORD *)v44 + 34) = v171;
                  ++*v171;
                  if ( v234 != 64 )
                    UpdateTopLevelWindowDPITransform(v44, v166);
                }
                if ( (*(_BYTE *)(*((_QWORD *)v44 + 5) + 27LL) & 0x20) != 0 && GetRedirectionBitmap(v44) )
                {
                  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                  v172 = RecreateRedirectionBitmap(v44, 0, 0, 0, 0, 0LL);
                  v173 = *(_QWORD *)(gpDispInfo + 40LL);
                  if ( v172 < 0 )
                  {
                    GreUnlockVisRgn(v173);
                    v235 = 3;
                    goto LABEL_470;
                  }
                  GreUnlockVisRgn(v173);
                }
                if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v240[0] + 8LL) + 8LL) & 0x20) != 0
                  || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v240[0] + 8LL) + 8LL) & 0x40) != 0
                  && !*(_QWORD *)(*(_QWORD *)v240[0] + 40LL) )
                {
                  v174 = 0x8000;
                  if ( GetStyleWindow((__int64)v44, 2848) )
                    v174 = 49152;
                  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL));
                  CacheDC = CreateCacheDC(v44, v174, 0LL);
                  v176 = *(_QWORD *)(gpDispInfo + 40LL);
                  if ( !CacheDC )
                  {
                    GreUnlockVisRgn(v176);
                    v235 = 10;
                    goto LABEL_470;
                  }
                  GreUnlockVisRgn(v176);
                }
                if ( (v233 & 0x80000) != 0
                  && (*(_BYTE *)(*((_QWORD *)v44 + 5) + 26LL) & 8) == 0
                  && (int)xxxSetLayeredWindow(v44) < 0 )
                {
                  v235 = 11;
                  goto LABEL_470;
                }
                if ( (v233 & 0x2000000) != 0 && !GetStyleWindow(*((_QWORD *)v44 + 10), 2818) )
                {
                  SetOrClrWF(1, (__int64)v44, 0xB02u, 1);
                  if ( (int)SetRedirectedWindow(v44) < 0 )
                  {
                    SetOrClrWF(0, (__int64)v44, 0xB02u, 1);
                    v235 = 12;
                    goto LABEL_470;
                  }
                }
                *((_QWORD *)&v279[2] + 1) = __PAIR64__(v232, v239);
                *(_QWORD *)&v279[2] = __PAIR64__(v237, v242);
                if ( !xxxSendMessage((ULONG_PTR)v44) )
                  goto LABEL_470;
                if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v44 + 14) + 8LL) + 9LL) & 2) != 0 )
                {
                  SystemMenu = xxxGetSystemMenu(v44);
                  SmartObjStackRef<tagMENU>::operator=(v245, SystemMenu);
                  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator!=(v245, 0LL) )
                  {
                    v181 = SmartObjStackRef<tagMENU>::operator unsigned __int64(v245);
                    v182 = W32GetThreadWin32Thread(KeGetCurrentThread());
                    v304[0] = *(_QWORD *)(v182 + 416);
                    *(_QWORD *)(v182 + 416) = v304;
                    v304[1] = v181;
                    if ( v181 )
                      _InterlockedAdd((volatile signed __int32 *)(v181 + 8), 1u);
                    xxxRemoveDeleteMenuHelper(v245, 5LL, 1024LL, 1LL);
                    xxxRemoveDeleteMenuHelper(v245, 5LL, 1024LL, 1LL);
                    ThreadUnlock1(v184, v183);
                  }
                }
                if ( (*(_BYTE *)(*((_QWORD *)v44 + 5) + 18LL) & 2) != 0
                  && (!*((_QWORD *)&v279[5] + 1)
                   || LODWORD(v279[5])
                   || !(unsigned __int8)SharedPointerBase<unsigned short>::operator==((char *)v44 + 168, 0LL)) )
                {
                  *((_QWORD *)&v279[3] + 1) = *((_QWORD *)v44 + 21);
                  *((_QWORD *)&v292 + 1) = *((_QWORD *)v44 + 21);
                  *(_QWORD *)&v292 = *(_QWORD *)(*((_QWORD *)v44 + 5) + 184LL);
                  v279[5] = v292;
                }
                if ( (*gpsi & 4) != 0 )
                {
                  v185 = (ULONG_PTR *)(gptiCurrent + 784LL);
                  if ( !*(_QWORD *)(gptiCurrent + 784LL) )
                  {
                    if ( (unsigned int)WantImeWindow(v19, v44) )
                    {
                      DefaultImeWindow = xxxCreateDefaultImeWindow(v44);
                      v256.m128i_i64[0] = gptiCurrent + 784LL;
                      v256.m128i_i64[1] = DefaultImeWindow;
                      v302 = v256;
                      HMAssignmentLock(&v302);
                      v256.m128i_i64[0] = *v185;
                      if ( v256.m128i_i64[0] )
                      {
                        v187 = W32GetThreadWin32Thread(KeGetCurrentThread());
                        v306[0] = *(_QWORD *)(v187 + 416);
                        *(_QWORD *)(v187 + 416) = v306;
                        v306[1] = v256.m128i_i64[0];
                        _InterlockedAdd((volatile signed __int32 *)(v256.m128i_i64[0] + 8), 1u);
                        xxxSendMessage(*v185);
                        ThreadUnlock1(v189, v188);
                      }
                      v190 = (**(_DWORD **)(gptiCurrent + 480LL) >> 6) & 1;
                      v289 = v190;
                      v191 = *v185;
                      if ( v191 && v190 )
                      {
                        v192 = W32GetThreadWin32Thread(KeGetCurrentThread());
                        v307[0] = *(_QWORD *)(v192 + 416);
                        *(_QWORD *)(v192 + 416) = v307;
                        v307[1] = v191;
                        _InterlockedAdd((volatile signed __int32 *)(v191 + 8), 1u);
                        xxxSendMessage(*(_QWORD *)(gptiCurrent + 784LL));
                        **(_QWORD **)(gptiCurrent + 480LL) &= ~0x40uLL;
                        ThreadUnlock1(v194, v193);
                      }
                    }
                  }
                }
                if ( v19 )
                {
                  v195 = *(unsigned int *)(*((_QWORD *)v44 + 5) + 232LL);
                  if ( (v195 & 8) == 0 || *((struct tagWND **)v44 + 10) == v19 )
                  {
                    v196 = PWInsertAfter(v254, v195);
                    if ( !(unsigned int)IsPseudoPwnd(v196) && *(_QWORD *)(v196 + 80) != *((_QWORD *)v44 + 10) )
                      v196 = v234 == 64;
                    if ( (unsigned __int8)HmgLockResultBase<META>::operator bool((char *)v44 + 96, 0LL) )
                    {
                      *(_DWORD *)(*((_QWORD *)v44 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 12) + 40LL)
                                                                            + 236LL);
                      SetOrClrWF(
                        *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v44 + 12) + 40LL) + 234LL) & 0x20,
                        (__int64)v44,
                        0xDA20u,
                        1);
                    }
                    if ( !(unsigned int)ValidateNewParent(v44, v19) )
                    {
                      v199 = 9;
                      goto LABEL_531;
                    }
                    UnlinkWindow(v44, *((_QWORD *)v44 + 10));
                    v200 = *((_QWORD *)v44 + 5);
                    if ( (*(_BYTE *)(v200 + 31) & 0xC0) != 0x40
                      && v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 104LL) )
                    {
                      if ( (*(_BYTE *)(v200 + 24) & 8) != 0 )
                      {
                        if ( gHardErrorHandler )
                        {
                          TopMostInsertAfter = GetTopMostInsertAfter(v44);
                          if ( TopMostInsertAfter )
                            v196 = TopMostInsertAfter;
                        }
                      }
                      else if ( !v196
                             || !(unsigned int)IsPseudoPwnd(v196)
                             && (*(_BYTE *)(*(_QWORD *)(v196 + 40) + 24LL) & 8) != 0 )
                      {
                        v196 = (unsigned __int64)CalcForegroundInsertAfterComponentUIAware(v44);
                      }
                    }
                    if ( v196 >= 2 && (unsigned int)IsPseudoPwnd(v196) )
                    {
                      v199 = 13;
                      goto LABEL_531;
                    }
                    LinkWindow(v44);
                    zzzLockDisplayAreaAndInvalidateDCCache((__int64)v19, 16, 0LL);
                  }
                }
                v202 = *((_QWORD *)v44 + 5);
                v203 = v202;
                if ( (*(_BYTE *)(v202 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(*((_QWORD *)v19 + 5) + 26LL) & 0x40) != 0 )
                {
                  v204 = *(_DWORD *)(v202 + 96);
                  v205 = *(_DWORD *)(v202 + 88);
                  *(_DWORD *)(v202 + 96) = DWORD2(v320) + v320 - v205;
                  *(_DWORD *)(*((_QWORD *)v44 + 5) + 88LL) = v205 + *(_DWORD *)(*((_QWORD *)v44 + 5) + 96LL) - v204;
                  v203 = *((_QWORD *)v44 + 5);
                }
                v319 = *(_OWORD *)(v203 + 88);
                xxxSendTransformableMessage((_DWORD)v44, 131, 0, (unsigned int)&v319, 0);
                *(_OWORD *)(*((_QWORD *)v44 + 5) + 104LL) = v319;
                if ( xxxSendMessage((ULONG_PTR)v44) == -1 )
                {
                  v199 = 0;
LABEL_531:
                  if ( v249 )
                    ThreadUnlock1(v198, v197);
                  if ( ThreadUnlock1(v198, v197) )
                    xxxDestroyWindow((volatile signed __int32 *)v44);
                  ClassUnlock(*(struct tagCLS **)v240[0]);
                  if ( v199 )
                  {
                    v46 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
                    v45 = v199;
                    goto LABEL_78;
                  }
                  goto LABEL_574;
                }
                SetOrClrWF(1, (__int64)v44, 0x780u, 1);
                if ( (unsigned int)IsWindowDesktopComposed(v44) )
                {
                  v208 = *(_DWORD *)(*((_QWORD *)v44 + 5) + 28LL);
                  v209 = (void *)ReferenceDwmApiPort(v207, v206);
                  DwmAsyncChildStyleChange(v209, *(_QWORD *)v44, -16, v208);
                  DwmChildRectChange(v44);
                  if ( (unsigned __int8)SharedPointerBase<unsigned short>::operator==((char *)v44 + 96, 0LL) )
                    v212 = 0LL;
                  else
                    v212 = **((_QWORD **)v44 + 12);
                  v213 = (void *)ReferenceDwmApiPort(v211, v210);
                  DwmAsyncOwnerChange(v213, *(_QWORD *)v44, v212);
                }
                xxxWindowEvent(0x8000u, (__int64)v44, 0, 0, 0);
                v214 = *((_QWORD *)v44 + 5);
                if ( (*(_BYTE *)(v214 + 16) & 0x10) == 0 )
                {
                  xxxSendSizeMessage((ULONG_PTR)v44);
                  if ( v19 && (struct tagWND *)GetDesktopWindow(v44) != v19 )
                  {
                    LODWORD(v319) = v319 - v320;
                    DWORD1(v319) -= DWORD1(v320);
                  }
                  xxxSendTransformableMessage((_DWORD)v44, 3, 0, (unsigned __int16)v319 | (WORD2(v319) << 16), 0);
                  v214 = *((_QWORD *)v44 + 5);
                }
                v215 = *(_BYTE *)(v214 + 31);
                if ( (v215 & 0x20) != 0 )
                {
                  SetMinimize(v44, 0LL);
                  v216 = 7LL;
                }
                else
                {
                  if ( (v215 & 1) == 0 )
                    goto LABEL_552;
                  SetOrClrWF(0, (__int64)v44, 0xF01u, 1);
                  v216 = 3LL;
                }
                xxxMinMaximize(v44, v216, gdwPUDFlags & 0x10000 | 1u);
LABEL_552:
                CalcWindowFullScreen(v44);
                v217 = *((_QWORD *)v44 + 5);
                if ( (*(_BYTE *)(v217 + 31) & 0xC0) != 0x40 || (*(_BYTE *)(v217 + 24) & 4) != 0 )
                {
                  v219 = gptiCurrent;
                }
                else
                {
                  v218 = (__int64 *)((char *)v44 + 80);
                  v219 = gptiCurrent;
                  if ( (unsigned __int8)HmgLockResultBase<META>::operator bool((char *)v44 + 80, 0LL) )
                  {
                    v220 = *v218;
                    v308[0] = *(_QWORD *)(gptiCurrent + 416LL);
                    *(_QWORD *)(gptiCurrent + 416LL) = v308;
                    v308[1] = v220;
                    _InterlockedAdd((volatile signed __int32 *)(v220 + 8), 1u);
                    xxxSendTransformableMessage(
                      *v218,
                      528,
                      (*((unsigned __int16 *)v44 + 72) << 16) | 1,
                      *(_QWORD *)v44,
                      0);
                    ThreadUnlock1(v222, v221);
                  }
                }
                xxxInheritWindowMonitor(v44);
                if ( (a5 & 0x10000000) != 0 )
                  xxxShowWindow(v44, v248 | gdwPUDFlags & 0x10000u);
                v224 = *((_QWORD *)v44 + 5);
                if ( (*(_BYTE *)(v224 + 31) & 0xC0) == 0 || (*(_BYTE *)(v224 + 26) & 4) != 0 )
                {
                  v224 = *(unsigned int *)(*(_QWORD *)(v219 + 424) + 692LL);
                  if ( (_DWORD)v224 )
                  {
                    xxxSendMessage((ULONG_PTR)v44);
                    *(_DWORD *)(*(_QWORD *)(v219 + 424) + 692LL) = 0;
                  }
                }
                if ( v249 )
                  ThreadUnlock1(v224, v223);
                ClassUnlock(*(struct tagCLS **)v240[0]);
                v227 = (_DWORD *)ThreadUnlock1(v226, v225);
                v229 = v227;
                if ( !v227
                  || (v228 = gSharedInfo,
                      (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*v227
                                + *((_QWORD *)&gSharedInfo + 1)
                                + 25LL) & 1) != 0) )
                {
                  v229 = 0LL;
                }
                SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v245, v228);
                SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v240);
                return v229;
              }
              v165 = GetInheritedMonitor(v44);
            }
            v166 = (__int64 *)v165;
            goto LABEL_438;
          }
          if ( (v244 & 4) != 0 && (int)CoreWindowProp::GetOrCreate(v44, &v286) >= 0 )
            *((_DWORD *)v286 + 5) = 1;
          v298 = *(_OWORD *)LockPointer(v312, (char *)v44 + 184);
          HMAssignmentLock(&v298);
          if ( (unsigned int)IsTopLevelParent(v19) )
          {
            v144 = (char *)v44 + 96;
            v300 = *(_OWORD *)LockPointer(&v314, (__int64)v44 + 96, 0LL);
            HMAssignmentLock(&v300);
          }
          else
          {
            NonChildAncestor = GetNonChildAncestor((__int64)v19);
            if ( !(unsigned int)ValidateOwnerDepth(v44, NonChildAncestor) )
              goto LABEL_339;
            if ( NonChildAncestor )
            {
              *(_DWORD *)(*((_QWORD *)v44 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(NonChildAncestor + 40) + 236LL);
              SetOrClrWF(*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 234LL) & 0x20, (__int64)v44, 0xDA20u, 1);
              WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)NonChildAncestor);
            }
            v144 = (char *)v44 + 96;
            v299 = *(_OWORD *)LockPointer(&v313, (__int64)v44 + 96, NonChildAncestor);
            HMAssignmentLock(&v299);
            if ( *((_QWORD *)v44 + 12) )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v144 + 40LL) + 24LL) & 8) != 0
                || (v266 = 1, tagWND::RedirectedFieldzbid<enum ZBID>::operator!=((__int64)v44 + 198, &v266)) )
              {
                SetOrClrWF(1, (__int64)v44, 0x808u, 1);
              }
            }
            if ( v238 == *(_WORD *)(gpsi + 898LL) )
            {
              v59 = gptiCurrent;
            }
            else
            {
              v59 = gptiCurrent;
              if ( (unsigned __int8)HmgLockResultBase<META>::operator bool((char *)v44 + 96, 0LL) )
              {
                v145 = *(_QWORD *)(*(_QWORD *)v144 + 16LL);
                if ( v145 != gptiCurrent )
                  zzzAttachThreadInput(gptiCurrent, v145, 1LL);
              }
            }
          }
          if ( (unsigned __int8)SharedPointerBase<unsigned short>::operator==(v144, 0LL) )
          {
            if ( !(unsigned int)CoreWindowProp::IsComponent(v44) )
            {
              v267 = 8;
              if ( (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v44 + 198, &v267)
                || (v268 = 9,
                    (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v44 + 198, &v268))
                || (v269 = 10,
                    (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v44 + 198, &v269))
                || (v270 = 11,
                    (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v44 + 198, &v270))
                || (v271 = 13,
                    (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v44 + 198, &v271))
                || (v275 = 15,
                    (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v44 + 198, &v275))
                || (*(_BYTE *)(*((_QWORD *)v44 + 5) + 234LL) & 0x20) != 0 )
              {
                WindowCloakStateComponentUIAware = 2;
              }
            }
          }
          if ( !v19 || v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 104LL) )
          {
            v19 = 0LL;
            v148 = KeGetCurrentThread();
            v149 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v147, v146) )
            {
              v150 = (__int64 *)PsGetThreadWin32Thread(v148);
              if ( v150 )
                v149 = *v150;
            }
            if ( v149 )
            {
              v151 = *(_QWORD *)(v149 + 464);
              if ( v151 )
                v19 = *(struct tagWND **)(v151 + 24);
            }
            v305[0] = *(_QWORD *)(v59 + 416);
            *(_QWORD *)(v59 + 416) = v305;
            v305[1] = v19;
            if ( v19 )
              _InterlockedAdd((volatile signed __int32 *)v19 + 2, 1u);
            v249 = 1;
          }
          if ( (v244 & 2) == 0 )
            goto LABEL_384;
          if ( !*(_QWORD *)(v59 + 1368) )
          {
            SetOrClrWF(1, (__int64)v44, 0xDA40u, 1);
            *(_DWORD *)(v59 + 1208) |= 0x40000u;
            *(_DWORD *)(*(_QWORD *)(v59 + 432) + 388LL) |= 0x2000000u;
            if ( !*(_QWORD *)(v59 + 1360) )
            {
              KernelEvent = CreateKernelEvent(1LL, 0LL);
              *(_QWORD *)(v59 + 1360) = KernelEvent;
              if ( !KernelEvent )
              {
                v235 = 7;
                goto LABEL_470;
              }
            }
            v256.m128i_i64[0] = v59 + 1368;
            v256.m128i_i64[1] = (__int64)v44;
            v301 = v256;
            HMAssignmentLock(&v301);
            goto LABEL_384;
          }
LABEL_339:
          UserSetLastError(87LL);
          goto LABEL_470;
        }
        SetOrClrWF(1, (__int64)v44, 0xF04u, 1);
        v253 = 192;
        if ( (*(_BYTE *)(*((_QWORD *)v44 + 5) + 21LL) & 2) != 0 )
          SetOrClrWF(1, (__int64)v44, 0x901u, 1);
        SetOrClrWF(1, (__int64)v44, 0x10u, 1);
        v120 = v232;
        if ( (v232 == 0x80000000 || v232 == 0x8000) && v316 != 0x80000000 )
        {
          v121 = v248;
          if ( v316 != 0x8000 )
            v121 = v316;
          v248 = v121;
        }
        if ( v241 || v232 != 0x80000000 && v232 != 0x8000 && v119 != 0x80000000 && v119 != 0x8000 )
        {
          PrimaryMonitor = 0LL;
          goto LABEL_284;
        }
        v122 = *(_QWORD *)(*(_QWORD *)(v59 + 424) + 696LL);
        if ( v122 )
        {
          v123 = (struct tagMONITOR *)ValidateHmonitor(v122);
        }
        else
        {
          if ( !v19 )
          {
            PrimaryMonitor = 0LL;
            goto LABEL_281;
          }
          v123 = _MonitorFromWindowInternal(v19, 2u, 0);
        }
        PrimaryMonitor = (__int64)v123;
LABEL_281:
        if ( PrimaryMonitor )
        {
LABEL_297:
          SetTiledRect((__int64)v44, &v319, PrimaryMonitor);
          if ( v232 == 0x80000000 || v232 == 0x8000 )
          {
            v134 = *(_QWORD *)(v59 + 424);
            if ( (*(_DWORD *)(v134 + 808) & 4) != 0 )
            {
              v246 = 1;
              v120 = *(_DWORD *)(v134 + 792);
              v315 = v120;
              v135 = *(_DWORD *)(*(_QWORD *)(v59 + 424) + 796LL);
            }
            else
            {
              v120 = v319;
              v315 = v319;
              v135 = DWORD1(v319);
            }
            v316 = v135;
            v239 = v135;
            v232 = v120;
            v130 = 1;
          }
          else
          {
            v129 = *(_WORD *)(PrimaryMonitor + 226);
            if ( v129 )
              *(_WORD *)(PrimaryMonitor + 226) = v129 - 1;
            v130 = v252;
          }
          if ( v317 == 0x80000000 || v317 == 0x8000 )
          {
            v136 = *(_QWORD *)(v59 + 424);
            if ( (*(_DWORD *)(v136 + 808) & 2) != 0 )
            {
              v246 = 1;
              v317 = *(_DWORD *)(v136 + 800);
              v318 = *(_DWORD *)(*(_QWORD *)(v59 + 424) + 804LL);
            }
            else
            {
              v317 = DWORD2(v319) - v120;
              v318 = HIDWORD(v319) - v239;
            }
          }
          else if ( v130 )
          {
            v256 = *(__m128i *)GetMonitorRect(v310, PrimaryMonitor);
            v131 = _mm_srli_si128(v256, 8).m128i_u64[0];
            v132 = v315 + v317 - v131;
            v133 = v316 + v318 - HIDWORD(v131);
            if ( v132 > 0 )
            {
              v232 = v120 - v132;
              v315 = v120 - v132;
              if ( v120 - v132 < v256.m128i_i32[0] )
              {
                v232 = v256.m128i_i32[0];
                v315 = v256.m128i_i32[0];
              }
            }
            if ( v133 > 0 )
            {
              v239 -= v133;
              v316 = v239;
              if ( v239 < v256.m128i_i32[1] )
              {
                v239 = v256.m128i_i32[1];
                v316 = v256.m128i_i32[1];
              }
            }
          }
          goto LABEL_318;
        }
        PrimaryMonitor = GetPrimaryMonitor();
LABEL_284:
        if ( !PrimaryMonitor )
        {
          PrimaryMonitor = ValidateHmonitor(*(_QWORD *)(*((_QWORD *)v44 + 5) + 256LL));
          if ( !PrimaryMonitor )
          {
            if ( v241 )
              PrimaryMonitor = GetInheritedMonitor(v44);
            else
              PrimaryMonitor = 0LL;
            if ( PrimaryMonitor
              || (PrimaryMonitor = MonitorFromRect((struct tagRECT *)(*((_QWORD *)v44 + 5) + 88LL)),
                  v125 = 0LL,
                  PrimaryMonitor) )
            {
              v125 = *(_QWORD *)PrimaryMonitor;
            }
            *(_QWORD *)(*((_QWORD *)v44 + 5) + 256LL) = v125;
            *(_WORD *)(*((_QWORD *)v44 + 5) + 284LL) = *(_WORD *)(*(_QWORD *)(PrimaryMonitor + 40) + 64LL);
            v126 = (_DWORD *)*((_QWORD *)v44 + 34);
            if ( v126 )
            {
              --*v126;
              v127 = (_DWORD *)*((_QWORD *)v44 + 34);
              if ( !*v127 )
                Win32FreePool(v127);
              *((_QWORD *)v44 + 34) = 0LL;
            }
            v128 = *(_DWORD **)(PrimaryMonitor + 312);
            *((_QWORD *)v44 + 34) = v128;
            ++*v128;
            UpdateTopLevelWindowDPITransform(v44, PrimaryMonitor);
          }
        }
        goto LABEL_297;
      }
      v114 = 1284;
    }
    SetOrClrWF(1, (__int64)v44, v114, 1);
    goto LABEL_231;
  }
  v105 = xxxClientAllocWindowClassExtraBytes(*(unsigned int *)(*((_QWORD *)v44 + 5) + 200LL), (__int64)v44);
  v294[4] = v105;
  if ( v105 )
  {
    if ( (unsigned int)IsWindowBeingDestroyed(v44) )
      goto LABEL_470;
    v98 = gSharedInfo;
    v99 = *((_DWORD *)&gSharedInfo + 4) * (unsigned int)(unsigned __int16)*(_DWORD *)v44;
    LOBYTE(v99) = *(_BYTE *)(v99 + *((_QWORD *)&gSharedInfo + 1) + 25);
    if ( (v99 & 1) != 0 )
      goto LABEL_470;
    v285 = 0LL;
    if ( (unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator!=<unsigned __int64>((char *)v44 + 304, &v285) )
      goto LABEL_470;
    v103 = *((_QWORD *)v44 + 5);
    if ( (*(_DWORD *)(v103 + 232) & 0x800) != 0 )
    {
      MicrosoftTelemetryAssertTriggeredMsgKM("MSRC 62839: Console window assigned client extra bytes!");
      v103 = *((_QWORD *)v44 + 5);
    }
    *(_QWORD *)(v103 + 296) = v105;
    v97 = v251;
    goto LABEL_199;
  }
  v235 = 2;
LABEL_470:
  v177 = *(_BYTE *)(*((_QWORD *)v44 + 5) + 31LL) & 0x10;
  if ( v249 )
    ThreadUnlock1(v99, v98);
  SetOrClrWF(1, (__int64)v44, 0x480u, 1);
  SetOrClrWF(1, (__int64)v44, 0x380u, 1);
  if ( v177 )
    SetVisible(v44);
  v178 = *((_QWORD *)v44 + 10);
  if ( v178 )
  {
    if ( v177 )
      zzzLockDisplayAreaAndInvalidateDCCache(v178, 16, 0LL);
    if ( (*(_BYTE *)(*((_QWORD *)v44 + 5) + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow((__int64)v44) )
    {
      v179 = *(_QWORD *)(*((_QWORD *)v44 + 10) + 16LL);
      if ( gptiCurrent != v179 )
        zzzAttachThreadInput(*((_QWORD *)v44 + 2), v179, 0LL);
    }
    UnlinkWindow(v44, *((_QWORD *)v44 + 10));
  }
  ClassUnlock(*(struct tagCLS **)v240[0]);
  xxxFreeWindow(v44, (struct tagSwitchWndInfo *)v294);
  v45 = v235;
  if ( v235 )
    goto LABEL_77;
LABEL_574:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v245, v35);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v240);
  return 0LL;
}
