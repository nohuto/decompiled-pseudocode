/*
 * XREFs of xxxCreateWindowEx @ 0x1C00BFE30
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C009020C (xxxCreateDefaultImeWindow.c)
 *     NtUserCreateWindowEx @ 0x1C0094570 (NtUserCreateWindowEx.c)
 *     xxxCreateDesktopEx @ 0x1C00DE64C (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C00DFC88 (xxxCreateWindowStation.c)
 *     xxxCsDdeInitialize @ 0x1C0132700 (xxxCsDdeInitialize.c)
 *     xxxAddShadow @ 0x1C01456C4 (xxxAddShadow.c)
 *     xxxNextWindow @ 0x1C01F5198 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F5A18 (xxxOldNextWindow.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     TraceChildWindowDpiTelemetry @ 0x1C000995C (TraceChildWindowDpiTelemetry.c)
 *     xxxGetSystemMenu @ 0x1C000C650 (xxxGetSystemMenu.c)
 *     zzzAttachThreadInput @ 0x1C00123D8 (zzzAttachThreadInput.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tagWND@@PEAX@Z @ 0x1C001B54C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndLastActive@UtagWND@@@tag.c)
 *     MapClientNeuterToClientPfn @ 0x1C001F124 (MapClientNeuterToClientPfn.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C0020698 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     _DestroyMenu @ 0x1C0022400 (_DestroyMenu.c)
 *     IsDesktopWindow @ 0x1C002477C (IsDesktopWindow.c)
 *     GetStyleWindow @ 0x1C0025520 (GetStyleWindow.c)
 *     GetRedirectionBitmap @ 0x1C002B520 (GetRedirectionBitmap.c)
 *     SetRedirectedWindow @ 0x1C002BF18 (SetRedirectedWindow.c)
 *     CalcWindowFullScreen @ 0x1C002C8AC (CalcWindowFullScreen.c)
 *     xxxShowWindow @ 0x1C002CA38 (xxxShowWindow.c)
 *     SetVisible @ 0x1C002CDA0 (SetVisible.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00318B0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C0048A98 (IsWindowBeingDestroyed.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxMinMaximize @ 0x1C0084170 (xxxMinMaximize.c)
 *     SetMinimize @ 0x1C0084C28 (SetMinimize.c)
 *     ?GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z @ 0x1C008610C (-GetOrCreate@CoreWindowProp@@KAJPEAUtagWND@@PEAPEAV1@@Z.c)
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0089448 (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C008A3A4 (GetWindowCloakStateComponentUIAware.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C008AB44 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
 *     PWInsertAfter @ 0x1C008BD94 (PWInsertAfter.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@PEAX@Z @ 0x1C008C59C (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndOwner@UtagWND@@@tagWND@@.c)
 *     IsTopmostBandWindow @ 0x1C008C624 (IsTopmostBandWindow.c)
 *     ??9?$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAEAEBW4ZBID@@@Z @ 0x1C008C64C (--9-$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAEAEBW4ZBID@@@Z.c)
 *     GetNonChildAncestor @ 0x1C008C668 (GetNonChildAncestor.c)
 *     IsImmersiveAppIORestricted @ 0x1C008ED88 (IsImmersiveAppIORestricted.c)
 *     HasImmersiveAppRight @ 0x1C008F40C (HasImmersiveAppRight.c)
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C008F7AC (SetWindowSubtreeCoreWindowStatus.c)
 *     RtlInitLargeAnsiString @ 0x1C00901D0 (RtlInitLargeAnsiString.c)
 *     xxxCreateDefaultImeWindow @ 0x1C009020C (xxxCreateDefaultImeWindow.c)
 *     GetMonitorRect @ 0x1C0090E1C (GetMonitorRect.c)
 *     xxxSendSizeMessage @ 0x1C0091C40 (xxxSendSizeMessage.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0091D38 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     _MonitorFromRect @ 0x1C0091E40 (_MonitorFromRect.c)
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     DwmChildRectChange @ 0x1C0092168 (DwmChildRectChange.c)
 *     NeedsWindowEdge @ 0x1C0092828 (NeedsWindowEdge.c)
 *     UpdateTopLevelWindowDPITransform @ 0x1C0093CB8 (UpdateTopLevelWindowDPITransform.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     DwmAsyncOwnerChange @ 0x1C0095C18 (DwmAsyncOwnerChange.c)
 *     RegisterDefaultClass @ 0x1C0096080 (RegisterDefaultClass.c)
 *     xxxCheckFullScreen @ 0x1C0096CF8 (xxxCheckFullScreen.c)
 *     DereferenceClass @ 0x1C0097690 (DereferenceClass.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxUpdateInputHangInfo @ 0x1C009DEC0 (xxxUpdateInputHangInfo.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxCallCtfHook @ 0x1C00AA118 (xxxCallCtfHook.c)
 *     xxxClientAllocWindowClassExtraBytes @ 0x1C00AAFD4 (xxxClientAllocWindowClassExtraBytes.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     xxxLoadUserApiHook @ 0x1C00B4030 (xxxLoadUserApiHook.c)
 *     xxxClientLoadMenu @ 0x1C00B5E80 (xxxClientLoadMenu.c)
 *     xxxCreateClassSmIcon @ 0x1C00B6100 (xxxCreateClassSmIcon.c)
 *     CheckGrantedAccess @ 0x1C00BE534 (CheckGrantedAccess.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C00BE55C (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z @ 0x1C00BE5D8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@AEBV0@@Z.c)
 *     IsValidBandForProcess @ 0x1C00BE690 (IsValidBandForProcess.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C00BE728 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     GetClassPtr @ 0x1C00BEAC0 (GetClassPtr.c)
 *     IsPseudoPwnd @ 0x1C00BEBB4 (IsPseudoPwnd.c)
 *     ??9?$SharedPointerBase@G@@QEBAEH@Z @ 0x1C00BF09C (--9-$SharedPointerBase@G@@QEBAEH@Z.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C00BF0AC (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 *     ??8?$SharedPointerBase@G@@QEBAEH@Z @ 0x1C00BF10C (--8-$SharedPointerBase@G@@QEBAEH@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00BFB98 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ValidateNewParent @ 0x1C00BFBB4 (ValidateNewParent.c)
 *     IsTopLevelParent @ 0x1C00BFCB0 (IsTopLevelParent.c)
 *     ValidateParentDepth @ 0x1C00BFD68 (ValidateParentDepth.c)
 *     ?LockPointer@@YA?AU_LOCKASSIGNPAIR@@PEAV?$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@@PEAX@Z @ 0x1C00BFE08 (-LockPointer@@YA-AU_LOCKASSIGNPAIR@@PEAV-$SharedUserObjPointerFieldspwndParent@UtagWND@@@tagWND@.c)
 *     ??8?$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAE$$QEAW4ZBID@@@Z @ 0x1C00C3114 (--8-$RedirectedFieldzbid@W4ZBID@@@tagWND@@QEBAE$$QEAW4ZBID@@@Z.c)
 *     xxxSendTransformableMessage @ 0x1C00C3130 (xxxSendTransformableMessage.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C00C3604 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     IsDpiBoundaryBetweenWindows @ 0x1C00C6554 (IsDpiBoundaryBetweenWindows.c)
 *     _GetWindowCompositionInfo @ 0x1C00C7274 (_GetWindowCompositionInfo.c)
 *     _IsTopLevelWindow @ 0x1C00C75CC (_IsTopLevelWindow.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C00C7604 (ShouldUseLogPixelsForWindowMetrics.c)
 *     xxxInheritWindowMonitor @ 0x1C00C78F8 (xxxInheritWindowMonitor.c)
 *     UnlinkWindow @ 0x1C00C8EC8 (UnlinkWindow.c)
 *     ConstrainWindowSIZERECT @ 0x1C00C93D8 (ConstrainWindowSIZERECT.c)
 *     GetInheritedMonitor @ 0x1C00CA354 (GetInheritedMonitor.c)
 *     LinkWindow @ 0x1C00CA850 (LinkWindow.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     DwmAsyncChildCreate @ 0x1C00D9AC8 (DwmAsyncChildCreate.c)
 *     DwmGetClassStyle @ 0x1C00D9C0C (DwmGetClassStyle.c)
 *     RtlInitUnicodeStringOrId @ 0x1C00E2FE4 (RtlInitUnicodeStringOrId.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x1C00ED568 (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x1C00ED5A8 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     RecreateRedirectionBitmap @ 0x1C00ED748 (RecreateRedirectionBitmap.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x1C01069AC (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     xxxAdjustSize @ 0x1C0109AFC (xxxAdjustSize.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C010AFAC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ClassLock @ 0x1C010B520 (ClassLock.c)
 *     RECTFromSIZERECT @ 0x1C010BBB8 (RECTFromSIZERECT.c)
 *     W32GetCurrentThreadDpiHostingBehavior @ 0x1C0110ED8 (W32GetCurrentThreadDpiHostingBehavior.c)
 *     SetTiledRect @ 0x1C01111A0 (SetTiledRect.c)
 *     ClassUnlock @ 0x1C0111958 (ClassUnlock.c)
 *     ReferenceClass @ 0x1C0111A50 (ReferenceClass.c)
 *     ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z @ 0x1C0111CB8 (--4-$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QEAAPEAUtagCLS@@PEAU2@@Z.c)
 *     ??9?$RedirectedFieldcbwndExtra@H@tagWND@@QEBAEAEBH@Z @ 0x1C011817C (--9-$RedirectedFieldcbwndExtra@H@tagWND@@QEBAEAEBH@Z.c)
 *     IsChildWindowDpiIsolationEnabled @ 0x1C0118198 (IsChildWindowDpiIsolationEnabled.c)
 *     GetMessageWindow @ 0x1C0118828 (GetMessageWindow.c)
 *     ??9?$RedirectedFieldcbWndServerExtra@I@tagCLS@@QEBAEAEBI@Z @ 0x1C0118A1C (--9-$RedirectedFieldcbWndServerExtra@I@tagCLS@@QEBAEAEBI@Z.c)
 *     IsInsideUserApiHook @ 0x1C011C0AC (IsInsideUserApiHook.c)
 *     ??$?8_K@RedirectedFieldpExtraBytes@tagWND@@QEBAE$$QEA_K@Z @ 0x1C011C250 (--$-8_K@RedirectedFieldpExtraBytes@tagWND@@QEBAE$$QEA_K@Z.c)
 *     GetAppCompatFlags @ 0x1C011D3E0 (GetAppCompatFlags.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ @ 0x1C011EAB0 (--B-$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ.c)
 *     RegisterIconTitleClass @ 0x1C0122218 (RegisterIconTitleClass.c)
 *     IsValidBand @ 0x1C0123A18 (IsValidBand.c)
 *     ValidateOwnerDepth @ 0x1C0124560 (ValidateOwnerDepth.c)
 *     IsInternalBand @ 0x1C0133FD0 (IsInternalBand.c)
 *     UserGetLastError @ 0x1C0138968 (UserGetLastError.c)
 *     GetPrimaryMonitor @ 0x1C0139884 (GetPrimaryMonitor.c)
 *     ??9?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0140390 (--9-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ @ 0x1C0140A70 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?TraceLoggingCreateWindowFailed@@YAXI_K@Z @ 0x1C01CD8A8 (-TraceLoggingCreateWindowFailed@@YAXI_K@Z.c)
 *     GetTopMostInsertAfter @ 0x1C01D411C (GetTopMostInsertAfter.c)
 *     ??4?$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C01D71B8 (--4-$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01E7C40 (xxxForceUpdateProcessDpiAwarenessContext.c)
 *     HasMessageRootWindow @ 0x1C01F8454 (HasMessageRootWindow.c)
 *     _W32ExceptionHandler @ 0x1C0259A94 (_W32ExceptionHandler.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rcx
  int v27; // ebx
  int v28; // eax
  __int64 v29; // rax
  char v30; // al
  int v31; // r14d
  int v32; // eax
  __int64 v33; // rax
  int v34; // r12d
  __int64 v35; // rcx
  int v36; // r12d
  __int64 v37; // r15
  __int16 v38; // r12
  __int64 v39; // rbx
  _QWORD *ClassPtr; // rax
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // r8
  unsigned int v44; // eax
  __int64 v45; // rax
  struct tagWND *v46; // r15
  __int64 v47; // rax
  unsigned int v48; // ecx
  unsigned __int128 v49; // rax
  int CurrentThreadDpiHostingBehavior; // eax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  struct tagWND *v55; // r12
  __int64 v56; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v58; // rax
  struct tagWND *v59; // r12
  __int64 v60; // rbx
  __int64 *v61; // rax
  __int64 v62; // rax
  bool v63; // zf
  __int64 v64; // r12
  __int64 v65; // rcx
  int v66; // ebx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // r8
  int v71; // ecx
  int v72; // ecx
  int v73; // edx
  wchar_t *v74; // rcx
  __int64 *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int16 v78; // r14
  int v79; // eax
  LONG v80; // ecx
  unsigned int v81; // edx
  unsigned int v82; // eax
  __int64 *InheritedMonitor; // rbx
  __int64 v84; // rcx
  _DWORD *v85; // rax
  _DWORD *v86; // rax
  __int64 MessageWindow; // rax
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 *v92; // rsi
  struct _KTHREAD *v93; // r14
  __int64 v94; // rbx
  __int64 *v95; // rax
  __int64 v96; // rax
  struct _KPROCESS *v97; // rbx
  int ProcessId; // r14d
  __int64 v99; // rsi
  __int64 v100; // rax
  int v101; // r15d
  int v102; // r12d
  __int64 ProcessSequenceNumber; // rbx
  int ClassStyle; // edi
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  void *v108; // rax
  unsigned __int16 v109; // r14
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  char v114; // bl
  __int64 v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // r8
  int v118; // ebx
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  int AppCompatFlags; // eax
  __int64 v124; // rdx
  __int64 v125; // r8
  __int64 v126; // r9
  char v127; // bl
  unsigned __int16 v128; // r8
  int v129; // eax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  __int64 v133; // r9
  int v134; // ebx
  int v135; // r14d
  unsigned int v136; // ebx
  __int64 v137; // r8
  int v138; // r14d
  __int64 v139; // rdx
  int v140; // edx
  __int64 v141; // rcx
  struct tagMONITOR *v142; // rax
  __int64 PrimaryMonitor; // rbx
  __int64 v144; // rcx
  _DWORD *v145; // rax
  _DWORD *v146; // rcx
  _DWORD *v147; // rax
  __int16 v148; // ax
  int v149; // eax
  unsigned __int64 v150; // xmm0_8
  int v151; // edx
  int v152; // ecx
  __int64 v153; // rcx
  int v154; // eax
  __int64 v155; // rcx
  __int64 v156; // rcx
  char v157; // al
  struct tagWND *v158; // rcx
  unsigned __int8 *Menu; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // r9
  __int64 NonChildAncestor; // r14
  _QWORD *v164; // rbx
  __int64 v165; // rdx
  __int64 v166; // rcx
  struct _KTHREAD *v167; // r14
  __int64 v168; // rbx
  __int64 *v169; // rax
  __int64 v170; // rax
  __int64 KernelEvent; // rax
  __int64 v172; // r8
  __int64 v173; // r9
  _QWORD *v174; // r14
  int v175; // edx
  __int64 v176; // rcx
  unsigned int v177; // ebx
  NTSTATUS v178; // eax
  ULONG v179; // eax
  __int64 v180; // rdx
  __int64 v181; // r8
  __int64 v182; // r9
  __int64 v183; // rcx
  __int64 v184; // rdx
  __int64 v185; // rbx
  __int64 v186; // rcx
  int v187; // eax
  int v188; // eax
  __int64 v189; // rax
  __int64 *v190; // rbx
  __int64 v191; // rcx
  __int64 v192; // rdx
  _DWORD *v193; // rax
  _DWORD *v194; // rcx
  _DWORD *v195; // rax
  __int64 v196; // rdx
  __int64 v197; // r8
  __int64 v198; // r9
  int v199; // eax
  __int64 v200; // rcx
  __int64 v201; // rdx
  __int64 v202; // r8
  __int64 v203; // r9
  unsigned int v204; // ebx
  __int64 CacheDC; // rax
  __int64 v206; // rcx
  int v207; // ebx
  __int64 v208; // rcx
  __int64 v209; // rdx
  __int64 v210; // r8
  int v211; // r9d
  __int64 SystemMenu; // rax
  __int64 v213; // rbx
  __int64 v214; // rdx
  __int64 v215; // r8
  __int64 v216; // r9
  __int64 v217; // rax
  __int64 v218; // rdx
  __int64 v219; // rcx
  __int64 v220; // r8
  ULONG_PTR *v221; // rbx
  __int64 v222; // r9
  __int64 DefaultImeWindow; // rax
  __int64 v224; // rdx
  __int64 v225; // r8
  __int64 v226; // r9
  __int64 v227; // rax
  __int64 v228; // rdx
  __int64 v229; // rcx
  __int64 v230; // r8
  int v231; // ecx
  __int64 v232; // rax
  __int64 v233; // rdx
  __int64 v234; // rcx
  __int64 v235; // r8
  __int64 v236; // rdx
  unsigned __int64 v237; // rbx
  __int64 v238; // r8
  __int64 v239; // r9
  __int64 v240; // rdx
  __int64 v241; // rcx
  __int64 v242; // r8
  int v243; // ebx
  __int64 v244; // rcx
  __int64 TopMostInsertAfter; // rax
  __int64 v246; // r9
  __int64 v247; // rdx
  int v248; // edx
  int v249; // r8d
  __int64 v250; // rdx
  __int64 v251; // rcx
  __int64 v252; // r8
  int v253; // ebx
  void *v254; // rax
  __int64 v255; // rdx
  __int64 v256; // r8
  __int64 v257; // r9
  __int64 v258; // rdx
  __int64 v259; // rcx
  __int64 v260; // r8
  __int64 v261; // rbx
  void *v262; // rax
  __int64 v263; // rcx
  char v264; // al
  __int64 v265; // rdx
  __int64 v266; // rcx
  __int64 *v267; // rbx
  __int64 v268; // r14
  __int64 v269; // rcx
  __int64 v270; // rdx
  __int64 v271; // rcx
  __int64 v272; // r8
  __int64 v273; // rdx
  __int64 v274; // r8
  __int64 v275; // rcx
  __int64 v276; // rdx
  __int64 v277; // rcx
  __int64 v278; // r8
  __int64 v279; // rax
  __int64 v280; // rdx
  __int64 v281; // r8
  __int64 v282; // r9
  __int64 v283; // rbx
  __int64 v284; // rdx
  __int64 v285; // r8
  __int64 v286; // r9
  __int64 v288; // rdx
  __int64 v289; // r8
  __int64 v290; // r9
  int v291; // [rsp+28h] [rbp-4C0h]
  int v292; // [rsp+68h] [rbp-480h]
  unsigned __int16 v293; // [rsp+6Ch] [rbp-47Ch]
  int v294; // [rsp+70h] [rbp-478h]
  int v295; // [rsp+70h] [rbp-478h]
  int v296; // [rsp+74h] [rbp-474h]
  __int64 *v297[2]; // [rsp+78h] [rbp-470h] BYREF
  int v298; // [rsp+88h] [rbp-460h]
  unsigned int v299; // [rsp+90h] [rbp-458h]
  int v300; // [rsp+98h] [rbp-450h]
  _QWORD v301[3]; // [rsp+A0h] [rbp-448h] BYREF
  int v302; // [rsp+B8h] [rbp-430h]
  int WindowCloakStateComponentUIAware; // [rsp+BCh] [rbp-42Ch]
  int v304; // [rsp+C0h] [rbp-428h]
  int v305; // [rsp+C4h] [rbp-424h]
  int v306; // [rsp+C8h] [rbp-420h]
  __int16 v307; // [rsp+CCh] [rbp-41Ch]
  __int16 v308; // [rsp+CEh] [rbp-41Ah]
  int v309; // [rsp+D0h] [rbp-418h]
  int v310; // [rsp+D4h] [rbp-414h]
  unsigned __int64 v311; // [rsp+D8h] [rbp-410h]
  int v312; // [rsp+E0h] [rbp-408h]
  int v313; // [rsp+E4h] [rbp-404h]
  struct _KTHREAD *CurrentThread; // [rsp+E8h] [rbp-400h] BYREF
  __int64 v315; // [rsp+F0h] [rbp-3F8h]
  struct tagWND *v316; // [rsp+F8h] [rbp-3F0h]
  __int64 v317; // [rsp+100h] [rbp-3E8h]
  __m128i v318; // [rsp+108h] [rbp-3E0h]
  int v319; // [rsp+118h] [rbp-3D0h]
  int v320; // [rsp+11Ch] [rbp-3CCh] BYREF
  int v321; // [rsp+120h] [rbp-3C8h] BYREF
  int v322; // [rsp+124h] [rbp-3C4h] BYREF
  int v323; // [rsp+128h] [rbp-3C0h] BYREF
  int v324; // [rsp+12Ch] [rbp-3BCh] BYREF
  int v325; // [rsp+130h] [rbp-3B8h] BYREF
  _DWORD v326[7]; // [rsp+134h] [rbp-3B4h] BYREF
  __int64 v327; // [rsp+150h] [rbp-398h]
  __int64 v328; // [rsp+158h] [rbp-390h]
  wchar_t *Str1; // [rsp+160h] [rbp-388h]
  __int64 v330; // [rsp+168h] [rbp-380h]
  int v331; // [rsp+170h] [rbp-378h]
  int v332; // [rsp+174h] [rbp-374h]
  int v333; // [rsp+178h] [rbp-370h] BYREF
  __int64 v334; // [rsp+180h] [rbp-368h]
  __int64 v335; // [rsp+188h] [rbp-360h]
  _OWORD v336[7]; // [rsp+190h] [rbp-358h] BYREF
  __int64 v337; // [rsp+200h] [rbp-2E8h] BYREF
  struct tagWND *v338; // [rsp+208h] [rbp-2E0h]
  __int64 v339; // [rsp+210h] [rbp-2D8h]
  _QWORD v340[3]; // [rsp+218h] [rbp-2D0h] BYREF
  char v341[8]; // [rsp+230h] [rbp-2B8h] BYREF
  __int64 v342; // [rsp+238h] [rbp-2B0h]
  __int64 v343; // [rsp+240h] [rbp-2A8h] BYREF
  struct CoreWindowProp *v344; // [rsp+248h] [rbp-2A0h] BYREF
  char v345[8]; // [rsp+250h] [rbp-298h] BYREF
  __int64 v346; // [rsp+258h] [rbp-290h]
  __int64 v347; // [rsp+260h] [rbp-288h]
  __int64 v348; // [rsp+270h] [rbp-278h] BYREF
  unsigned __int64 v349; // [rsp+278h] [rbp-270h]
  char *v350[2]; // [rsp+280h] [rbp-268h] BYREF
  __int128 v351; // [rsp+290h] [rbp-258h]
  __int64 v352; // [rsp+2A0h] [rbp-248h]
  __int64 v353; // [rsp+2A8h] [rbp-240h]
  __int64 v354; // [rsp+2B0h] [rbp-238h]
  int v355; // [rsp+2B8h] [rbp-230h]
  __int64 v356; // [rsp+2C0h] [rbp-228h] BYREF
  struct tagWND *v357; // [rsp+2C8h] [rbp-220h]
  __int64 v358; // [rsp+2D0h] [rbp-218h]
  __int64 v359; // [rsp+2D8h] [rbp-210h] BYREF
  __int64 v360; // [rsp+2E0h] [rbp-208h]
  __int64 v361; // [rsp+2E8h] [rbp-200h]
  __int64 v362; // [rsp+2F0h] [rbp-1F8h] BYREF
  __int64 v363; // [rsp+2F8h] [rbp-1F0h]
  __int64 v364; // [rsp+300h] [rbp-1E8h]
  __int64 v365; // [rsp+308h] [rbp-1E0h] BYREF
  __int64 v366; // [rsp+310h] [rbp-1D8h]
  __int64 v367; // [rsp+318h] [rbp-1D0h]
  __int64 v368; // [rsp+320h] [rbp-1C8h] BYREF
  __int64 v369; // [rsp+328h] [rbp-1C0h]
  __int64 v370; // [rsp+330h] [rbp-1B8h]
  __int128 v371; // [rsp+340h] [rbp-1A8h]
  __int128 v372; // [rsp+350h] [rbp-198h]
  __int128 v373; // [rsp+360h] [rbp-188h] BYREF
  __int128 v374; // [rsp+370h] [rbp-178h] BYREF
  __int128 v375; // [rsp+380h] [rbp-168h] BYREF
  __int128 v376; // [rsp+390h] [rbp-158h] BYREF
  __int128 v377; // [rsp+3A0h] [rbp-148h] BYREF
  __int128 v378; // [rsp+3B0h] [rbp-138h] BYREF
  __int128 v379; // [rsp+3C0h] [rbp-128h] BYREF
  __int64 v380; // [rsp+3D0h] [rbp-118h]
  __int64 v381; // [rsp+3E0h] [rbp-108h] BYREF
  __int128 v382; // [rsp+3F0h] [rbp-F8h] BYREF
  __int64 v383; // [rsp+400h] [rbp-E8h] BYREF
  __int64 v384; // [rsp+410h] [rbp-D8h] BYREF
  __int64 v385; // [rsp+420h] [rbp-C8h] BYREF
  __int64 v386; // [rsp+430h] [rbp-B8h] BYREF
  unsigned __int64 v387; // [rsp+440h] [rbp-A8h] BYREF
  signed __int64 v388; // [rsp+448h] [rbp-A0h]
  __int128 v389; // [rsp+450h] [rbp-98h] BYREF
  __int128 v390; // [rsp+460h] [rbp-88h] BYREF
  struct tagRECT v391; // [rsp+470h] [rbp-78h] BYREF
  __int64 v392[5]; // [rsp+480h] [rbp-68h] BYREF

  v335 = a4;
  v328 = a3;
  Str1 = (wchar_t *)a2;
  v300 = a1;
  v332 = a1;
  v353 = a2;
  v354 = a3;
  v318.m128i_i64[0] = a4;
  v19 = a10;
  v311 = (unsigned __int64)a10;
  v315 = a12;
  v317 = a13;
  v310 = 0;
  v319 = 0;
  v309 = 0;
  v302 = 0;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v297, a2, a3, a4);
  v389 = 0uLL;
  v387 = 0LL;
  v388 = 0LL;
  v304 = 5;
  v326[2] = 5;
  v327 = 0LL;
  memset(v336, 0, sizeof(v336));
  v334 = gptiCurrent;
  v337 = 0LL;
  v338 = 0LL;
  v339 = 0LL;
  v356 = 0LL;
  v357 = 0LL;
  v358 = 0LL;
  v368 = 0LL;
  v369 = 0LL;
  v370 = 0LL;
  memset(v340, 0, sizeof(v340));
  v305 = 0;
  v306 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x2000;
  WindowCloakStateComponentUIAware = 0;
  v20 = 0;
  v294 = 0;
  v390 = 0uLL;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v301, a11, v21, v22);
  v296 = 0;
  if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x10000000) == 0
    && !(unsigned int)RegisterIconTitleClass() )
  {
    goto LABEL_3;
  }
  v27 = a1 & 0x7FFFFFFF;
  if ( a1 >= 0 )
    v27 = a1;
  v28 = 800;
  if ( a1 >= 0 )
    LOWORD(v28) = 0;
  v312 = v28;
  v307 = v28;
  v29 = *(_QWORD *)(gptiCurrent + 448LL);
  v330 = v29;
  v352 = v29;
  if ( a10 )
  {
    if ( *((_QWORD *)a10 + 3) != v29 )
      goto LABEL_3;
  }
  v30 = a16;
  if ( (a16 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopApp(*(_QWORD *)(gptiCurrent + 416LL)) )
    {
LABEL_12:
      v26 = 5LL;
      goto LABEL_583;
    }
    v20 = 1;
    v294 = 1;
    v30 = a16;
  }
  if ( (v30 & 2) != 0 && !(unsigned int)IsImmersiveBroker(*(_QWORD *)(gptiCurrent + 416LL)) )
    goto LABEL_12;
  v31 = a14;
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
  v298 = HIWORD(a5) & 0xC000;
  v308 = HIWORD(a5) & 0xC000;
  v313 = (_WORD)v298 == 0x4000;
  v331 = v313;
  if ( (_WORD)v298 != 0x4000 )
  {
    if ( (unsigned int)ShouldSetNoOwner(*(_QWORD *)(gptiCurrent + 416LL), a10) )
      v19 = 0LL;
    v311 = (unsigned __int64)v19;
  }
  if ( !v19 || (LOBYTE(v32) = IsDesktopWindow((__int64)v19), v32) )
  {
    if ( !a14 )
    {
      if ( IsImmersiveAppIORestricted(*(_QWORD *)(gptiCurrent + 416LL)) )
      {
        v34 = 1;
        v294 = 1;
        v31 = 15;
        goto LABEL_42;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 812LL) & 2) != 0 && (v27 & 8) != 0 )
        v31 = 2;
      else
        v31 = 1;
    }
    v34 = v294;
    goto LABEL_42;
  }
  v33 = *((_QWORD *)v19 + 5);
  v34 = *(_BYTE *)(v33 + 234) & 0x20;
  v294 = v34;
  if ( a14 )
  {
    if ( a14 == *(_DWORD *)(v33 + 236) )
      goto LABEL_42;
LABEL_3:
    v26 = 87LL;
LABEL_583:
    UserSetLastError(v26, v23, v24, v25);
    goto LABEL_584;
  }
  v31 = *(_DWORD *)(v33 + 236);
LABEL_42:
  v326[5] = v34;
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(gptiCurrent + 416LL), v31, (__int64)v19) )
    goto LABEL_12;
  v292 = v27;
  v299 = v27;
  v23 = 0x400000LL;
  if ( (v27 & 0x400000) != 0 )
    goto LABEL_53;
  if ( !v19 )
  {
    if ( (a2 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v36 = v27;
      v292 = v27;
      v299 = v27;
      if ( (_WORD)a2 == 0x8002 )
        goto LABEL_54;
    }
    v36 = v27;
    v292 = v27;
    v299 = v27;
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35, 0x400000LL) + 816) & 1) == 0 )
      goto LABEL_54;
    v36 = v27 | 0x400000;
    goto LABEL_48;
  }
  v292 = v27;
  v299 = v27;
  if ( (_WORD)v298 != 0x4000 )
  {
LABEL_53:
    v36 = v292;
    goto LABEL_54;
  }
  v36 = v27;
  v292 = v27;
  v299 = v27;
  if ( (*(_BYTE *)(*((_QWORD *)v19 + 5) + 26LL) & 0x50) == 0x40 )
  {
    v36 = v27 | 0x400000;
LABEL_48:
    v292 = v36;
    v299 = v36;
  }
LABEL_54:
  if ( (v36 & 0x2200000) == 0x2200000 )
    goto LABEL_3;
  v37 = gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 584LL) && !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 888LL), 2u) )
    goto LABEL_584;
  v38 = v298;
  if ( (_WORD)v298 != 0x4000 )
    goto LABEL_61;
  if ( !v19 )
  {
    v26 = 1406LL;
    goto LABEL_583;
  }
  if ( !(unsigned int)ValidateParentDepth(0LL, (__int64)v19) )
    goto LABEL_3;
  while ( 1 )
  {
LABEL_61:
    v39 = v328;
    if ( (v328 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v341);
      if ( (int)RtlStringCchCopyW((char *)gawchAtomScratch, 256LL, *(char **)(v39 + 8)) < 0 )
      {
        LOWORD(v39) = 0;
        v293 = 0;
        v306 = 1;
      }
      else
      {
        LOWORD(v39) = UserFindAtom(gawchAtomScratch);
        v293 = v39;
      }
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v341);
    }
    else
    {
      v293 = v328;
    }
    if ( (_WORD)v39 )
    {
      ClassPtr = (_QWORD *)GetClassPtr((unsigned __int16)v39, *(_QWORD *)(v37 + 416), v315);
      if ( ClassPtr )
        break;
    }
LABEL_117:
    if ( v306
      || (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 12LL) & 0x2000) != 0
      || (((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) == 0
        ? (v74 = Str1)
        : (v74 = (wchar_t *)*((_QWORD *)Str1 + 1)),
          !(unsigned int)RegisterDefaultClass(v74)) )
    {
      v26 = 1407LL;
      goto LABEL_583;
    }
    v306 = 1;
    v38 = v298;
    v37 = gptiCurrent;
  }
  SmartObjStackRefBase<tagCLS>::operator=(v297, *ClassPtr);
  if ( (*(_WORD *)(*(_QWORD *)(*v297[0] + 8) + 6LL) & 1) != 0 )
  {
    if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
      goto LABEL_584;
    v41 = v330;
    if ( v330 )
    {
      v42 = *(_QWORD *)(v330 + 8);
      if ( v42 )
      {
        if ( *(_QWORD *)(v42 + 24) && v293 == *(_WORD *)(gpsi + 902LL) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(gpsi);
      }
    }
  }
  else
  {
    v41 = v330;
  }
  if ( (unsigned int)NeedsWindowEdge(a5, v292, a15 >= 0x400u) )
    v44 = v292 | 0x100;
  else
    v44 = v292 & 0xFFFFFEFF;
  v299 = v44;
  v292 = v44;
  LOBYTE(v43) = 1;
  v45 = HMAllocObject(v37, v41, v43);
  v46 = (struct tagWND *)v45;
  v316 = (struct tagWND *)v45;
  if ( !v45 )
  {
    if ( (unsigned int)UserGetLastError() != 8 )
      goto LABEL_584;
    v47 = MEMORY[0xFFFFF78000000320];
    v342 = MEMORY[0xFFFFF78000000320];
    v48 = 1;
LABEL_83:
    v49 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32) * (unsigned __int128)(unsigned __int64)(v47 << 8);
LABEL_84:
    TraceLoggingCreateWindowFailed(v48, *((unsigned __int64 *)&v49 + 1));
    goto LABEL_584;
  }
  tagObjLock::LockInitialize((tagObjLock *)(v45 + 56));
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 2) + 416LL) + 812LL) & 0x2000000) != 0 )
    *((_DWORD *)v46 + 82) |= 0x10u;
  *(_QWORD *)(*((_QWORD *)v46 + 5) + 296LL) = 0LL;
  *((_QWORD *)v46 + 35) = 0LL;
  *(_DWORD *)(*((_QWORD *)v46 + 5) + 232LL) &= ~0x40000000u;
  CurrentThreadDpiHostingBehavior = W32GetCurrentThreadDpiHostingBehavior();
  v54 = *((_QWORD *)v46 + 5);
  *(_DWORD *)(v54 + 292) = CurrentThreadDpiHostingBehavior;
  if ( v38 != 0x4000 || !v19 )
    goto LABEL_107;
  v55 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v56 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v54, v51, v52, v53) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v56 = *ThreadWin32Thread;
  }
  if ( v56 )
  {
    v58 = *(_QWORD *)(v56 + 456);
    if ( v58 )
      v55 = *(struct tagWND **)(v58 + 24);
  }
  if ( v19 != v55 )
  {
    v59 = 0LL;
    CurrentThread = KeGetCurrentThread();
    v60 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v54, v51, v52, v53) )
    {
      v61 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( v61 )
        v60 = *v61;
    }
    if ( v60 )
    {
      v62 = *(_QWORD *)(v60 + 448);
      if ( v62 )
        v59 = *(struct tagWND **)(v62 + 104);
    }
    v63 = v19 == v59;
    v64 = gptiCurrent;
    if ( !v63 )
    {
      v54 = *(_QWORD *)(*((_QWORD *)v19 + 2) + 416LL);
      if ( *(_QWORD *)(gptiCurrent + 416LL) == v54 && !(unsigned int)IsChildWindowDpiIsolationEnabled(0LL, v19) )
      {
        v65 = *(unsigned int *)(*((_QWORD *)v19 + 5) + 288LL);
        *(_DWORD *)(*((_QWORD *)v46 + 5) + 288LL) = v65;
        v66 = *(_DWORD *)(*((_QWORD *)v19 + 5) + 288LL);
        if ( (((unsigned __int8)v66 ^ (unsigned __int8)W32GetCurrentThreadDpiAwarenessContext(v65, v51, v52, v53)) & 0xF) != 0 )
          TraceChildWindowDpiTelemetry((__int64)v46, (__int64)v19, 0);
        goto LABEL_111;
      }
    }
  }
  else
  {
LABEL_107:
    v64 = gptiCurrent;
  }
  *(_DWORD *)(*((_QWORD *)v46 + 5) + 288LL) = W32GetCurrentThreadDpiAwarenessContext(v54, v51, v52, v53);
  if ( (*(_DWORD *)(*((_QWORD *)v46 + 5) + 288LL) & 0x4000000F) == 0
    && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v67, v68, v69) + 472) + 224LL) & 0x40) != 0 )
  {
    *(_DWORD *)(*((_QWORD *)v46 + 5) + 288LL) |= 0x40000000u;
  }
LABEL_111:
  v70 = *((_QWORD *)v46 + 5);
  v71 = *(_DWORD *)(v70 + 288);
  if ( (v71 & 0xF) == 2 && (v71 & 0xF0) == 0x20 )
  {
    v72 = 0x10000000;
    v73 = 0x20000000;
  }
  else
  {
    v72 = 0;
    v73 = 0;
  }
  *(_DWORD *)(v70 + 232) = v72 | *(_DWORD *)(v70 + 232) & 0xEFFFFFFF;
  *(_DWORD *)(*((_QWORD *)v46 + 5) + 232LL) = v73 | *(_DWORD *)(*((_QWORD *)v46 + 5) + 232LL) & 0xDFFFFFFF;
  tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=((char *)v46 + 136, *v297[0]);
  *(_DWORD *)(*((_QWORD *)v46 + 5) + 28LL) = a5 & 0xEFFFFFFF;
  *(_DWORD *)(*((_QWORD *)v46 + 5) + 24LL) = v292 & 0xFDF7FFFF;
  *(_DWORD *)(*((_QWORD *)v46 + 5) + 200LL) = *(_DWORD *)(*(_QWORD *)(*v297[0] + 8) + 80LL);
  *(_DWORD *)(*((_QWORD *)v46 + 5) + 252LL) = *(_DWORD *)(*(_QWORD *)(*v297[0] + 8) + 84LL);
  if ( !(unsigned int)ReferenceClass(*v297[0], v46) )
    goto LABEL_116;
  SmartObjStackRefBase<tagCLS>::operator=(v297, *((_QWORD *)v46 + 17));
  if ( !(unsigned int)ClassLock(*v297[0], v340) )
  {
    DereferenceClass(*(struct tagPROCESSINFO **)(v64 + 416), (__int64)v46);
LABEL_116:
    HMFreeObject(v46);
    goto LABEL_117;
  }
  *(_QWORD *)(*((_QWORD *)v46 + 5) + 224LL) = a17;
  if ( *(_WORD *)(*(_QWORD *)(*v297[0] + 8) + 2LL) == *(_WORD *)(gpsi + 868LL) )
  {
    *(_QWORD *)(*((_QWORD *)v46 + 5) + 208LL) = 0LL;
  }
  else
  {
    v75 = *(__int64 **)(v64 + 784);
    v76 = 0LL;
    if ( v75 )
      v76 = *v75;
    *(_QWORD *)(*((_QWORD *)v46 + 5) + 208LL) = v76;
  }
  *(_DWORD *)(*((_QWORD *)v46 + 5) + 236LL) = v31;
  if ( (unsigned int)IsTopmostBandWindow((__int64)v46, (__int64)v19) )
    *(_DWORD *)(*((_QWORD *)v46 + 5) + 24LL) |= 8u;
  if ( v294 )
    SetOrClrWF(1, (__int64)v46, 0xDA20u, 0);
  ++*(_DWORD *)(v64 + 892);
  memset(v336, 0, sizeof(v336));
  DWORD2(v336[4]) = v292;
  *((_QWORD *)&v336[0] + 1) = v315;
  if ( ((unsigned __int64)Str1 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( v300 >= 0 )
    {
      *(_QWORD *)&v336[4] = *((_QWORD *)Str1 + 1);
      v336[6] = *(_OWORD *)Str1;
    }
    else
    {
      v77 = *(_QWORD *)(*v297[0] + 104);
      *(_QWORD *)&v336[4] = v77;
      if ( (v77 & 0xFFFFFFFFFFFF0000uLL) != 0 )
        RtlInitLargeAnsiString((__int64)&v336[6], v77);
    }
  }
  else
  {
    *(_QWORD *)&v336[4] = Str1;
  }
  if ( v335 )
  {
    *((_QWORD *)&v336[3] + 1) = *(_QWORD *)(v335 + 8);
    v336[5] = *(_OWORD *)v335;
  }
  LODWORD(v336[3]) = a5;
  *((_QWORD *)&v336[2] + 1) = __PAIR64__(a6, a7);
  *(_QWORD *)&v336[2] = __PAIR64__(a8, a9);
  if ( v19 )
    *((_QWORD *)&v336[1] + 1) = *(_QWORD *)v19;
  else
    *((_QWORD *)&v336[1] + 1) = 0LL;
  v78 = v298;
  if ( (_WORD)v298 == 0x4000 )
  {
    *(_QWORD *)&v336[1] = SmartObjStackRef<tagMENU>::operator tagMENU *(v301);
    *(_DWORD *)(*((_QWORD *)v46 + 5) + 24LL) |= *(_DWORD *)(*((_QWORD *)v19 + 5) + 24LL) & 0xC4000000;
  }
  else if ( SmartObjStackRef<tagMENU>::operator==((__int64)v301) )
  {
    *(_QWORD *)&v336[1] = 0LL;
  }
  else
  {
    *(_QWORD *)&v336[1] = *(_QWORD *)SmartObjStackRef<tagMENU>::operator unsigned __int64(v301);
  }
  *(_QWORD *)&v336[0] = v317;
  v337 = *(_QWORD *)(v64 + 408);
  *(_QWORD *)(v64 + 408) = &v337;
  v338 = v46;
  HMLockObject(v46);
  *(_QWORD *)&v391.left = 0LL;
  if ( a6 == 0x80000000 || a6 == 0x8000 )
  {
    v79 = 0;
    v391.left = 0;
  }
  else
  {
    v79 = a6;
    v391.left = a6;
  }
  v80 = a7;
  if ( a7 == 0x80000000 || a7 == 0x8000 )
    v80 = 0;
  v391.top = v80;
  v81 = a8;
  if ( a8 == 0x80000000 || a8 == 0x8000 )
    v81 = 0;
  v391.right = v81 + v79;
  v82 = a9;
  if ( a9 == 0x80000000 || a9 == 0x8000 )
    v82 = 0;
  v391.bottom = v80 + v82;
  InheritedMonitor = (__int64 *)GetInheritedMonitor(v46);
  if ( InheritedMonitor )
  {
    v298 = 1;
  }
  else
  {
    v298 = 0;
    if ( v19 )
      InheritedMonitor = (__int64 *)ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v19 + 5) + 256LL));
  }
  if ( InheritedMonitor || (InheritedMonitor = (__int64 *)MonitorFromRect(&v391, 2u, 0), v84 = 0LL, InheritedMonitor) )
    v84 = *InheritedMonitor;
  *(_QWORD *)(*((_QWORD *)v46 + 5) + 256LL) = v84;
  *(_DWORD *)(*((_QWORD *)v46 + 5) + 284LL) = *(unsigned __int16 *)(InheritedMonitor[5] + 64);
  v85 = (_DWORD *)InheritedMonitor[39];
  *((_QWORD *)v46 + 36) = v85;
  ++*v85;
  *((_QWORD *)v46 + 37) = 0LL;
  *(_DWORD *)(*((_QWORD *)v46 + 5) + 232LL) &= ~0x4000000u;
  if ( v78 != 0x4000 || (unsigned int)IsDpiBoundaryBetweenWindows(v46, v19) )
    UpdateTopLevelWindowDPITransform((__int64)v46, (__int64)InheritedMonitor);
  if ( v78 == 0x4000 )
  {
    if ( v19 )
    {
      *(_WORD *)(*((_QWORD *)v46 + 5) + 286LL) = *(_WORD *)(*((_QWORD *)v19 + 5) + 286LL);
      v86 = (_DWORD *)*((_QWORD *)v19 + 37);
      if ( v86 )
      {
        *((_QWORD *)v46 + 37) = v86;
        ++*v86;
      }
    }
  }
  if ( *((_QWORD *)v46 + 3) )
  {
    MessageWindow = GetMessageWindow(v46);
    v379 = *(_OWORD *)LockPointer(&v381, (__int64)v46 + 104, MessageWindow);
    HMAssignmentLock(&v379);
  }
  if ( (unsigned int)IsWindowDesktopComposed(v46) )
  {
    v92 = (__int64 *)v19;
    if ( v78 != 0x4000 && (!v19 || v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 104LL)) )
    {
      v92 = 0LL;
      v93 = KeGetCurrentThread();
      v94 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v89, v88, v90, v91) )
      {
        v95 = (__int64 *)PsGetThreadWin32Thread(v93);
        if ( v95 )
          v94 = *v95;
      }
      if ( v94 )
      {
        v96 = *(_QWORD *)(v94 + 456);
        if ( v96 )
          v92 = *(__int64 **)(v96 + 24);
      }
    }
    memset(v392, 0, sizeof(v392));
    GetWindowCompositionInfo(v46, v392);
    v97 = *(struct _KPROCESS **)(**((_QWORD **)v46 + 2) + 544LL);
    if ( v92 )
      v317 = *v92;
    else
      v317 = 0LL;
    ProcessId = (unsigned int)PsGetProcessId(v97);
    v99 = ***(_QWORD ***)(*((_QWORD *)v46 + 3) + 8LL);
    v100 = *((_QWORD *)v46 + 5);
    v101 = *(_DWORD *)(v100 + 232);
    v102 = *(_DWORD *)(v100 + 24);
    ProcessSequenceNumber = PsGetProcessSequenceNumber(v97);
    ClassStyle = DwmGetClassStyle(v316);
    v108 = (void *)ReferenceDwmApiPort(v106, v105, v107);
    v291 = v101;
    v46 = v316;
    DwmAsyncChildCreate(
      v108,
      v102,
      v291,
      ClassStyle,
      (__int64)v392,
      v99,
      (__int64)&v391,
      ProcessId,
      ProcessSequenceNumber);
    v19 = (struct tagWND *)v311;
    v64 = gptiCurrent;
  }
  *(_QWORD *)(*((_QWORD *)v46 + 5) + 32LL) = v315;
  v109 = v312;
  *(_QWORD *)(*((_QWORD *)v46 + 5) + 120LL) = MapClientNeuterToClientPfn(*v297[0], 0LL, (unsigned __int16)v312);
  SetOrClrWF((*(_WORD *)(*(_QWORD *)(*v297[0] + 8) + 6LL) & 1) != 0, (__int64)v46, 0x204u, 1);
  v333 = 0;
  if ( (unsigned __int8)tagCLS::RedirectedFieldcbWndServerExtra<unsigned int>::operator!=(*v297[0] + 122, &v333) )
  {
    v110 = Win32AllocPoolZInit(*(unsigned int *)(*(_QWORD *)(*v297[0] + 8) + 84LL), 1937208149LL);
    *((_QWORD *)v46 + 35) = v110;
    if ( !v110 )
    {
      v296 = 5;
      goto LABEL_478;
    }
  }
  v114 = *(_BYTE *)(*((_QWORD *)v46 + 5) + 18LL) & 4;
  if ( (unsigned int)PsGetWin32KFilterSet() == 5 && !v114 )
  {
    *(_DWORD *)(*((_QWORD *)v46 + 5) + 200LL) = (*(_DWORD *)(*((_QWORD *)v46 + 5) + 200LL) + 7) & 0xFFFFFFF8;
    *(_DWORD *)(*((_QWORD *)v46 + 5) + 200LL) += 32;
  }
  LODWORD(CurrentThread) = 0;
  if ( !(unsigned __int8)tagWND::RedirectedFieldcbwndExtra<int>::operator!=((char *)v46 + 177, &CurrentThread) )
  {
LABEL_204:
    if ( (unsigned int)PsGetWin32KFilterSet() != 5 || v114 )
    {
      v118 = v300;
    }
    else
    {
      v115 = *((_QWORD *)v46 + 5);
      v116 = *(_QWORD *)(v115 + 296);
      v117 = *(int *)(v115 + 200);
      v380 = *(_QWORD *)(v115 + 120);
      *(_QWORD *)(v117 + v116 - 32) = v380;
      v118 = v300;
      if ( v300 >= 0 )
        v119 = *(_QWORD *)(gpsi + 768LL);
      else
        v119 = *(_QWORD *)(gpsi + 576LL);
      *(_QWORD *)(*((_QWORD *)v46 + 5) + 120LL) = v119;
    }
    if ( *(_QWORD *)(*v297[0] + 80) && !*(_QWORD *)(*v297[0] + 112) && (unsigned int)PsGetWin32KFilterSet() != 5 )
      xxxCreateClassSmIcon(v297, v120, v121, v122);
    SetOrClrWF(1, (__int64)v46, v109, 1);
    if ( (*(_WORD *)(*(_QWORD *)(*v297[0] + 8) + 6LL) & 2) != 0
      || v118 < 0
      && (v293 == *(_WORD *)(gpsi + 868LL)
       || v293 == *(_WORD *)(gpsi + 878LL)
       || v293 == *(_WORD *)(gpsi + 882LL)
       || v293 == *(_WORD *)(gpsi + 904LL)
       || v293 == *(_WORD *)(gpsi + 870LL)
       || v293 == *(_WORD *)(gpsi + 874LL)
       || v293 == *(_WORD *)(gpsi + 880LL)
       || v293 == *(_WORD *)(gpsi + 898LL)
       || v293 == *(_WORD *)(gpsi + 872LL)) )
    {
      SetOrClrWF(1, (__int64)v46, 0x208u, 1);
    }
    AppCompatFlags = GetAppCompatFlags(v64);
    v127 = AppCompatFlags;
    if ( (AppCompatFlags & 0x8000000) != 0 )
    {
      SetOrClrWF(1, (__int64)v46, 0x408u, 1);
      v292 &= 0x3Fu;
      DWORD2(v336[4]) = BYTE8(v336[4]) & 0x3F;
    }
    *(_WORD *)(*((_QWORD *)v46 + 5) + 40LL) = 0;
    if ( a15 < 0x30Au )
    {
      if ( (v127 & 0x40) == 0 )
        goto LABEL_236;
      v128 = 1600;
    }
    else
    {
      SetOrClrWF(1, (__int64)v46, 0x501u, 1);
      if ( a15 < 0x400u || (SetOrClrWF(1, (__int64)v46, 0x502u, 1), a15 < 0x500u) )
      {
LABEL_236:
        v129 = a15;
        if ( a15 <= *(_WORD *)(v64 + 628) )
          v129 = *(_DWORD *)(v64 + 628);
        *((_DWORD *)v46 + 64) = v129;
        if ( (GetAppCompatFlags2(39168LL, v124, v125, v126) & 0x10000000) != 0 )
          SetOrClrWF(1, (__int64)v46, 0xA80u, 1);
        if ( (unsigned int)IsInsideUserApiHook() )
          xxxLoadUserApiHook(v131, v130, v132, v133);
        if ( (unsigned int)WantImeWindow(v19, v46) )
          xxxCallCtfHook(5, 3, *(_QWORD *)v46, 0LL);
        if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(v64 + 456) + 16LL) | *(_BYTE *)(v64 + 672)) & 0x40) != 0 )
        {
          v348 = (__int64)v336;
          v349 = 0LL;
          if ( (unsigned int)xxxCallHook(3, *(_QWORD *)v46, (__int64)&v348, 5) )
          {
            v296 = 6;
            goto LABEL_478;
          }
          v134 = HIDWORD(v336[2]);
          a6 = HIDWORD(v336[2]);
          a7 = DWORD2(v336[2]);
          a8 = DWORD1(v336[2]);
          a9 = v336[2];
          v311 = v349;
        }
        else
        {
          v311 = 0LL;
          v134 = a6;
        }
        v112 = *((_QWORD *)v46 + 5);
        if ( (*(_BYTE *)(v112 + 31) & 0xC0) == 0x40 )
        {
          v111 = 1LL;
          v295 = 1;
          if ( !v19 )
            goto LABEL_478;
        }
        else
        {
          LODWORD(v111) = 0;
          v295 = 0;
        }
        if ( (_DWORD)v111 != v313 )
        {
          SmartObjStackRef<tagMENU>::operator=(v301, 0LL);
          v112 = *((_QWORD *)v46 + 5);
          LODWORD(v111) = v295;
        }
        if ( (*(_BYTE *)(v112 + 31) & 0xC0) != 0 )
        {
          v135 = 0;
          if ( v134 == 0x80000000 || v134 == 0x8000 )
          {
            v134 = 0;
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
          v135 = 1;
        }
        v387 = __PAIR64__(a7, v134);
        v136 = a8;
        v388 = __PAIR64__(a9, a8);
        if ( (_DWORD)v111 )
        {
          v390 = *(_OWORD *)(*((_QWORD *)v19 + 5) + 104LL);
          if ( (unsigned int)IsDpiBoundaryBetweenWindows(v46, v19) )
          {
            *((_DWORD *)v46 + 56) = 0;
            *((_DWORD *)v46 + 57) = 0;
            LogicalToPhysicalInPlaceRectWithSubpixel(v19, &v390, (char *)v46 + 224);
            PhysicalToLogicalInPlaceRectWithSubpixel(v46, &v390, (char *)v46 + 224);
            v136 = a8;
          }
          if ( v19 != (struct tagWND *)GetDesktopWindow(v46) )
          {
            LODWORD(v387) = v390 + v387;
            HIDWORD(v387) += DWORD1(v390);
          }
          v311 = 1LL;
        }
        if ( !v135 )
        {
LABEL_326:
          if ( v302 )
            *(_DWORD *)(*(_QWORD *)(v64 + 416) + 800LL) &= 0xFFFFFFF9;
          v156 = *((_QWORD *)v46 + 5);
          v157 = *(_BYTE *)(v156 + 31) & 0xC0;
          if ( v157 == (char)0x80 || v157 == -64 )
          {
            SetOrClrWF(1, (__int64)v46, 0xF04u, 1);
            v156 = *((_QWORD *)v46 + 5);
          }
          *(_WORD *)(v156 + 30) |= v310;
          if ( SmartObjStackRef<tagMENU>::operator==((__int64)v301)
            && !v295
            && SharedPointerBase<unsigned short>::operator!=((_QWORD *)(*v297[0] + 96)) )
          {
            v350[0] = 0LL;
            v350[1] = 0LL;
            v158 = v46;
            if ( *((_QWORD *)v46 + 13) )
              v158 = (struct tagWND *)*((_QWORD *)v46 + 13);
            zzzLockDisplayAreaAndInvalidateDCCache(v158, 16LL, 0LL);
            RtlInitUnicodeStringOrId(v350, *(_QWORD *)(*v297[0] + 96));
            Menu = xxxClientLoadMenu(*(_QWORD *)(*(_QWORD *)(*v297[0] + 8) + 64LL), v350);
            SmartObjStackRef<tagMENU>::operator=(v301, Menu);
            if ( (*(_BYTE *)(*((_QWORD *)v46 + 5) + 31LL) & 0xC0) == 0x40 )
            {
              v160 = SmartObjStackRef<tagMENU>::operator tagMENU *(v301);
              DestroyMenu(v160);
              SmartObjStackRef<tagMENU>::operator=(v301, 0LL);
            }
            if ( SmartObjStackRef<tagMENU>::operator==((__int64)v301) )
              *(_QWORD *)&v336[1] = 0LL;
            else
              *(_QWORD *)&v336[1] = *(_QWORD *)SmartObjStackRef<tagMENU>::operator unsigned __int64(v301);
          }
          if ( (*(_BYTE *)(*((_QWORD *)v46 + 5) + 31LL) & 0xC0) == 0x40 )
          {
            v161 = SmartObjStackRef<tagMENU>::operator tagMENU *(v301);
            v112 = *((_QWORD *)v46 + 5);
            *(_QWORD *)(v112 + 152) = v161;
            *((_QWORD *)v46 + 21) = v161;
          }
          else
          {
            LockWndMenuWorker(v46, 0LL, v301);
          }
          LOBYTE(v112) = *(_BYTE *)(*((_QWORD *)v46 + 5) + 31LL) & 0xC0;
          if ( (_BYTE)v112 == 64 )
          {
            if ( !v19 )
              goto LABEL_478;
            if ( (a16 & 2) != 0 )
              goto LABEL_347;
LABEL_392:
            if ( (*(_DWORD *)(*((_QWORD *)v46 + 5) + 232LL) & 8) != 0 )
            {
              v327 = *((_QWORD *)v46 + 13);
              UnlinkWindow(v46, v327);
            }
            if ( !IsTopLevelParent((__int64)v19) )
            {
              *(_DWORD *)(*((_QWORD *)v46 + 5) + 236LL) = *(_DWORD *)(*((_QWORD *)v19 + 5) + 236LL);
              SetOrClrWF(*(_BYTE *)(*((_QWORD *)v19 + 5) + 234LL) & 0x20, (__int64)v46, 0xDA20u, 1);
            }
            if ( v19 && !(unsigned int)ValidateNewParent(v46, v19, v172, v173) )
            {
              v296 = 9;
              goto LABEL_478;
            }
            v174 = (_QWORD *)((char *)v46 + 104);
            v377 = *(_OWORD *)LockPointer(&v385, (__int64)v46 + 104, (__int64)v19);
            HMAssignmentLock(&v377);
            if ( v19 )
              v175 = -__CFSHR__(*(_DWORD *)(*((_QWORD *)v19 + 5) + 232LL), 26);
            else
              v175 = 0;
            SetWindowSubtreeCoreWindowStatus((__int64)v46, v175);
            v176 = *((_QWORD *)v46 + 5);
            if ( (*(_DWORD *)(v176 + 288) & 0xF) == 2 )
            {
              *(_DWORD *)(*((_QWORD *)v46 + 5) + 232LL) ^= (*(_DWORD *)(*((_QWORD *)v46 + 5) + 232LL) ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics(v46) << 27)) & 0x8000000;
              v176 = *((_QWORD *)v46 + 5);
            }
            if ( (*(_BYTE *)(v176 + 21) & 1) == 0
              && (*(_DWORD *)(*(_QWORD *)(*v297[0] + 8) + 8LL) & 0x80u) != 0
              && (*(_BYTE *)(*((_QWORD *)v19 + 5) + 31LL) & 2) == 0 )
            {
              SetOrClrWF(0, (__int64)v46, 0xF06u, 1);
            }
            v177 = WindowCloakStateComponentUIAware;
            if ( (WindowCloakStateComponentUIAware & 2) == 0 )
              SetOrClrWF(1, (__int64)v46, 0xDA10u, 0);
            if ( v177 )
            {
              v178 = zzzSetWindowCompositionCloak((__int64)v46, 0LL, v177);
              if ( v178 < 0 )
              {
                v179 = RtlNtStatusToDosError(v178);
                UserSetLastError(v179, v180, v181, v182);
                v296 = 8;
                goto LABEL_478;
              }
            }
            UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v345);
            if ( v327 )
              zzzLockDisplayAreaAndInvalidateDCCache(v327, 16LL, 0LL);
            if ( v19 )
              zzzLockDisplayAreaAndInvalidateDCCache(v19, 16LL, 0LL);
            UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v345);
            if ( (*(_BYTE *)(*((_QWORD *)v46 + 5) + 31LL) & 0xC0) == 0x40
              && !(unsigned int)IsTopLevelWindow(v46)
              && SharedPointerBase<unsigned short>::operator!=((_QWORD *)v46 + 13) )
            {
              v184 = *v174;
              if ( v64 != *(_QWORD *)(*v174 + 16LL) )
              {
                if ( v19 != (struct tagWND *)v184 )
                {
                  MicrosoftTelemetryAssertTriggeredNoArgsKM(v183);
                  v184 = *((_QWORD *)v46 + 13);
                }
                zzzAttachThreadInput(v64, *(_QWORD *)(v184 + 16), 1);
                v185 = *v174;
                if ( v185 != GetMessageWindow(v46)
                  && (((unsigned __int8)*(_DWORD *)(*(_QWORD *)(*v174 + 40LL) + 288LL) ^ *(_BYTE *)(*((_QWORD *)v46 + 5)
                                                                                                  + 288LL)) & 0xF) != 0
                  && !(unsigned int)IsChildWindowDpiIsolationEnabled(v46, *v174) )
                {
                  xxxForceUpdateProcessDpiAwarenessContext(v46, *(_DWORD *)(*(_QWORD *)(*v174 + 40LL) + 288LL));
                }
              }
            }
            if ( v328 != (unsigned __int16)gatomMessage && v328 != 32769 && v328 != 32774 && !*(_DWORD *)(v64 + 892) )
            {
              _InterlockedExchange(
                (volatile __int32 *)(*(_QWORD *)(gptiCurrent + 440LL) + 12LL),
                (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
              xxxUpdateInputHangInfo(0LL, 1);
            }
            xxxAdjustSize(v46);
            ConstrainWindowSIZERECT(&v387);
            if ( *((_QWORD *)v46 + 3) )
            {
              v186 = *((_QWORD *)v46 + 5);
              if ( (*(_BYTE *)(v186 + 31) & 0x40) == 0 && *(char *)(v186 + 24) >= 0 )
                xxxCheckFullScreen(v46, (struct tagSIZERECT *)&v387);
            }
            v187 = v388;
            if ( (int)v388 < 0 )
              v187 = 0;
            LODWORD(v388) = v187;
            v188 = HIDWORD(v388);
            if ( v388 < 0 )
              v188 = 0;
            HIDWORD(v388) = v188;
            RECTFromSIZERECT(*((_QWORD *)v46 + 5) + 88LL);
            if ( v295 )
            {
              v189 = ValidateHmonitorNoRip(*(_QWORD *)(*((_QWORD *)v19 + 5) + 256LL));
            }
            else
            {
              if ( !v298 )
              {
                v190 = 0LL;
LABEL_446:
                if ( v190
                  || (v190 = (__int64 *)MonitorFromRect((struct tagRECT *)(*((_QWORD *)v46 + 5) + 88LL), 2u, 0),
                      v191 = 0LL,
                      v190) )
                {
                  v191 = *v190;
                }
                v192 = *((_QWORD *)v46 + 5);
                if ( v191 != *(_QWORD *)(v192 + 256) )
                {
                  *(_QWORD *)(v192 + 256) = v191;
                  *(_WORD *)(*((_QWORD *)v46 + 5) + 284LL) = *(_WORD *)(v190[5] + 64);
                  v193 = (_DWORD *)*((_QWORD *)v46 + 36);
                  if ( v193 )
                  {
                    --*v193;
                    v194 = (_DWORD *)*((_QWORD *)v46 + 36);
                    if ( !*v194 )
                      Win32FreePool(v194);
                    *((_QWORD *)v46 + 36) = 0LL;
                  }
                  v195 = (_DWORD *)v190[39];
                  *((_QWORD *)v46 + 36) = v195;
                  ++*v195;
                  if ( !v295 )
                    UpdateTopLevelWindowDPITransform((__int64)v46, (__int64)v190);
                }
                if ( (*(_BYTE *)(*((_QWORD *)v46 + 5) + 27LL) & 0x20) != 0 && GetRedirectionBitmap((__int64)v46) )
                {
                  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v196, v197, v198);
                  v199 = RecreateRedirectionBitmap(v46, 0, 0LL);
                  v200 = *(_QWORD *)(gpDispInfo + 40LL);
                  if ( v199 < 0 )
                  {
                    GreUnlockVisRgn(v200);
                    v296 = 3;
                    goto LABEL_478;
                  }
                  GreUnlockVisRgn(v200);
                }
                if ( (*(_BYTE *)(*(_QWORD *)(*v297[0] + 8) + 8LL) & 0x20) != 0
                  || (*(_BYTE *)(*(_QWORD *)(*v297[0] + 8) + 8LL) & 0x40) != 0 && !*(_QWORD *)(*v297[0] + 40) )
                {
                  v204 = 0x8000;
                  if ( GetStyleWindow((__int64)v46, 2848) )
                    v204 = 49152;
                  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40LL), v201, v202, v203);
                  CacheDC = CreateCacheDC(v46, v204, 0LL);
                  v206 = *(_QWORD *)(gpDispInfo + 40LL);
                  if ( !CacheDC )
                  {
                    GreUnlockVisRgn(v206);
                    v296 = 10;
                    goto LABEL_478;
                  }
                  GreUnlockVisRgn(v206);
                }
                if ( (v292 & 0x80000) != 0
                  && (*(_BYTE *)(*((_QWORD *)v46 + 5) + 26LL) & 8) == 0
                  && (int)xxxSetLayeredWindow(v46, 0, 0LL) < 0 )
                {
                  v296 = 11;
                  goto LABEL_478;
                }
                if ( (v292 & 0x2000000) != 0 && !GetStyleWindow(*((_QWORD *)v46 + 13), 2818) )
                {
                  SetOrClrWF(1, (__int64)v46, 0xB02u, 1);
                  if ( (int)SetRedirectedWindow(v46, 2) < 0 )
                  {
                    SetOrClrWF(0, (__int64)v46, 0xB02u, 1);
                    v296 = 12;
                    goto LABEL_478;
                  }
                }
                *((_QWORD *)&v336[2] + 1) = __PAIR64__(a6, a7);
                *(_QWORD *)&v336[2] = __PAIR64__(a8, a9);
                if ( !xxxSendMessage((ULONG_PTR)v46) )
                  goto LABEL_478;
                if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v46 + 17) + 8LL) + 9LL) & 2) != 0 )
                {
                  SystemMenu = xxxGetSystemMenu(v46, 0);
                  SmartObjStackRef<tagMENU>::operator=(v301, SystemMenu);
                  if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator!=(v301, 0LL) )
                  {
                    v359 = 0LL;
                    v360 = 0LL;
                    v361 = 0LL;
                    v213 = SmartObjStackRef<tagMENU>::operator unsigned __int64(v301);
                    v217 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v214, v215, v216);
                    v359 = *(_QWORD *)(v217 + 408);
                    *(_QWORD *)(v217 + 408) = &v359;
                    v360 = v213;
                    if ( v213 )
                      HMLockObject(v213);
                    xxxRemoveDeleteMenuHelper((__int64)v301, 5u, 1024, 1u);
                    xxxRemoveDeleteMenuHelper((__int64)v301, 5u, 1024, 1u);
                    ThreadUnlock1(v219, v218, v220);
                  }
                }
                if ( (*(_BYTE *)(*((_QWORD *)v46 + 5) + 18LL) & 2) != 0
                  && (!*((_QWORD *)&v336[5] + 1)
                   || LODWORD(v336[5])
                   || !SharedPointerBase<unsigned short>::operator==((_QWORD *)v46 + 23)) )
                {
                  *((_QWORD *)&v336[3] + 1) = *((_QWORD *)v46 + 23);
                  *((_QWORD *)&v351 + 1) = *((_QWORD *)v46 + 23);
                  *(_QWORD *)&v351 = *(_QWORD *)(*((_QWORD *)v46 + 5) + 184LL);
                  v336[5] = v351;
                }
                if ( (*gpsi & 4) != 0 )
                {
                  v221 = (ULONG_PTR *)(gptiCurrent + 776LL);
                  if ( !*(_QWORD *)(gptiCurrent + 776LL) )
                  {
                    if ( (unsigned int)WantImeWindow(v19, v46) )
                    {
                      DefaultImeWindow = xxxCreateDefaultImeWindow(v46, v293, v315, v222);
                      *(_QWORD *)&v372 = gptiCurrent + 776LL;
                      *((_QWORD *)&v372 + 1) = DefaultImeWindow;
                      v378 = v372;
                      HMAssignmentLock(&v378);
                      v318.m128i_i64[0] = *v221;
                      if ( v318.m128i_i64[0] )
                      {
                        v362 = 0LL;
                        v363 = 0LL;
                        v364 = 0LL;
                        v227 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v224, v225, v226);
                        v362 = *(_QWORD *)(v227 + 408);
                        *(_QWORD *)(v227 + 408) = &v362;
                        v363 = v318.m128i_i64[0];
                        HMLockObject(v318.m128i_i64[0]);
                        xxxSendMessage(*v221);
                        ThreadUnlock1(v229, v228, v230);
                      }
                      v231 = (**(_DWORD **)(gptiCurrent + 472LL) >> 6) & 1;
                      v355 = v231;
                      v318.m128i_i64[0] = *v221;
                      if ( v318.m128i_i64[0] && v231 )
                      {
                        v365 = 0LL;
                        v366 = 0LL;
                        v367 = 0LL;
                        v232 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v224, v225, v226);
                        v365 = *(_QWORD *)(v232 + 408);
                        *(_QWORD *)(v232 + 408) = &v365;
                        v366 = v318.m128i_i64[0];
                        if ( v318.m128i_i64[0] )
                          HMLockObject(v318.m128i_i64[0]);
                        xxxSendMessage(*v221);
                        **(_QWORD **)(gptiCurrent + 472LL) &= ~0x40uLL;
                        ThreadUnlock1(v234, v233, v235);
                      }
                    }
                  }
                }
                if ( v19 )
                {
                  v236 = *(unsigned int *)(*((_QWORD *)v46 + 5) + 232LL);
                  if ( (v236 & 8) == 0 || *((struct tagWND **)v46 + 13) == v19 )
                  {
                    v237 = PWInsertAfter(v311, v236);
                    if ( !IsPseudoPwnd(v237) && *(_QWORD *)(v237 + 104) != *((_QWORD *)v46 + 13) )
                      v237 = v295 != 0;
                    if ( SharedPointerBase<unsigned short>::operator!=((_QWORD *)v46 + 15) )
                    {
                      *(_DWORD *)(*((_QWORD *)v46 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v46 + 15) + 40LL)
                                                                            + 236LL);
                      SetOrClrWF(
                        *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v46 + 15) + 40LL) + 234LL) & 0x20,
                        (__int64)v46,
                        0xDA20u,
                        1);
                    }
                    if ( !(unsigned int)ValidateNewParent(v46, v19, v238, v239) )
                    {
                      v243 = 9;
                      goto LABEL_541;
                    }
                    UnlinkWindow(v46, *((_QWORD *)v46 + 13));
                    v244 = *((_QWORD *)v46 + 5);
                    if ( (*(_BYTE *)(v244 + 31) & 0xC0) != 0x40
                      && v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 104LL) )
                    {
                      if ( (*(_BYTE *)(v244 + 24) & 8) != 0 )
                      {
                        if ( gHardErrorHandler )
                        {
                          TopMostInsertAfter = GetTopMostInsertAfter(v46);
                          if ( TopMostInsertAfter )
                            v237 = TopMostInsertAfter;
                        }
                      }
                      else if ( !v237 || !IsPseudoPwnd(v237) && (*(_BYTE *)(*(_QWORD *)(v237 + 40) + 24LL) & 8) != 0 )
                      {
                        v237 = (unsigned __int64)CalcForegroundInsertAfterComponentUIAware(v46);
                      }
                    }
                    if ( v237 >= 2 && IsPseudoPwnd(v237) )
                    {
                      v243 = 13;
                      goto LABEL_541;
                    }
                    LinkWindow(v46);
                    zzzLockDisplayAreaAndInvalidateDCCache(v19, 16LL, 0LL);
                  }
                }
                v246 = *((_QWORD *)v46 + 5);
                v247 = v246;
                if ( (*(_BYTE *)(v246 + 31) & 0xC0) == 0x40 && (*(_BYTE *)(*((_QWORD *)v19 + 5) + 26LL) & 0x40) != 0 )
                {
                  v248 = *(_DWORD *)(v246 + 96);
                  v249 = *(_DWORD *)(v246 + 88);
                  *(_DWORD *)(v246 + 96) = DWORD2(v390) + v390 - v249;
                  *(_DWORD *)(*((_QWORD *)v46 + 5) + 88LL) = v249 + *(_DWORD *)(*((_QWORD *)v46 + 5) + 96LL) - v248;
                  v247 = *((_QWORD *)v46 + 5);
                }
                v389 = *(_OWORD *)(v247 + 88);
                xxxSendTransformableMessage((_DWORD)v46, 131, 0, (unsigned int)&v389, 0);
                *(_OWORD *)(*((_QWORD *)v46 + 5) + 104LL) = v389;
                if ( xxxSendMessage((ULONG_PTR)v46) == -1 )
                {
                  v243 = 0;
LABEL_541:
                  if ( v305 )
                    ThreadUnlock1(v241, v240, v242);
                  if ( ThreadUnlock1(v241, v240, v242) )
                    xxxDestroyWindow((__int64 *)v46);
                  ClassUnlock(*(struct tagCLS **)v297[0]);
                  if ( v243 )
                  {
                    v347 = MEMORY[0xFFFFF78000000320];
                    v49 = ((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                        * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
                    v48 = v243;
                    goto LABEL_84;
                  }
                  goto LABEL_584;
                }
                SetOrClrWF(1, (__int64)v46, 0x780u, 1);
                if ( (unsigned int)IsWindowDesktopComposed(v46) )
                {
                  v253 = *(_DWORD *)(*((_QWORD *)v46 + 5) + 28LL);
                  v254 = (void *)ReferenceDwmApiPort(v251, v250, v252);
                  DwmAsyncChildStyleChange(v254, *(_QWORD *)v46, -16, v253);
                  DwmChildRectChange((unsigned __int64)v46, v255, v256, v257);
                  if ( SharedPointerBase<unsigned short>::operator==((_QWORD *)v46 + 15) )
                    v261 = 0LL;
                  else
                    v261 = **((_QWORD **)v46 + 15);
                  v262 = (void *)ReferenceDwmApiPort(v259, v258, v260);
                  DwmAsyncOwnerChange(v262, *(_QWORD *)v46, v261);
                }
                xxxWindowEvent(0x8000u, v46, 0LL, 0LL, 0);
                v263 = *((_QWORD *)v46 + 5);
                if ( (*(_BYTE *)(v263 + 16) & 0x10) == 0 )
                {
                  xxxSendSizeMessage((ULONG_PTR)v46);
                  if ( v19 && (struct tagWND *)GetDesktopWindow(v46) != v19 )
                  {
                    LODWORD(v389) = v389 - v390;
                    DWORD1(v389) -= DWORD1(v390);
                  }
                  xxxSendTransformableMessage((_DWORD)v46, 3, 0, (unsigned __int16)v389 | (WORD2(v389) << 16), 0);
                  v263 = *((_QWORD *)v46 + 5);
                }
                v264 = *(_BYTE *)(v263 + 31);
                if ( (v264 & 0x20) != 0 )
                {
                  SetMinimize((__int64)v46, 0);
                  v265 = 7LL;
                }
                else
                {
                  if ( (v264 & 1) == 0 )
                    goto LABEL_562;
                  SetOrClrWF(0, (__int64)v46, 0xF01u, 1);
                  v265 = 3LL;
                }
                xxxMinMaximize(v46, v265);
LABEL_562:
                CalcWindowFullScreen(v46);
                v266 = *((_QWORD *)v46 + 5);
                if ( (*(_BYTE *)(v266 + 31) & 0xC0) != 0x40 || (*(_BYTE *)(v266 + 24) & 4) != 0 )
                {
                  v268 = gptiCurrent;
                }
                else
                {
                  v267 = (__int64 *)((char *)v46 + 104);
                  v268 = gptiCurrent;
                  if ( SharedPointerBase<unsigned short>::operator!=((_QWORD *)v46 + 13) )
                  {
                    v269 = *v267;
                    v368 = *(_QWORD *)(gptiCurrent + 408LL);
                    *(_QWORD *)(gptiCurrent + 408LL) = &v368;
                    v369 = v269;
                    HMLockObject(v269);
                    xxxSendTransformableMessage(
                      *v267,
                      528,
                      (*((unsigned __int16 *)v46 + 84) << 16) | 1,
                      *(_QWORD *)v46,
                      0);
                    ThreadUnlock1(v271, v270, v272);
                  }
                }
                xxxInheritWindowMonitor(v46);
                if ( (a5 & 0x10000000) != 0 )
                  xxxShowWindow(v46);
                v275 = *((_QWORD *)v46 + 5);
                if ( (*(_BYTE *)(v275 + 31) & 0xC0) == 0 || (*(_BYTE *)(v275 + 26) & 4) != 0 )
                {
                  v275 = *(unsigned int *)(*(_QWORD *)(v268 + 416) + 684LL);
                  if ( (_DWORD)v275 )
                  {
                    xxxSendMessage((ULONG_PTR)v46);
                    *(_DWORD *)(*(_QWORD *)(v268 + 416) + 684LL) = 0;
                  }
                }
                if ( v305 )
                  ThreadUnlock1(v275, v273, v274);
                ClassUnlock(*(struct tagCLS **)v297[0]);
                v279 = ThreadUnlock1(v277, v276, v278);
                v283 = v279;
                if ( !v279 || (*(_BYTE *)(_HMPheFromObject(v279) + 25) & 1) != 0 )
                  v283 = 0LL;
                SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v301, v280, v281, v282);
                SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v297, v284, v285, v286);
                return v283;
              }
              v189 = GetInheritedMonitor(v46);
            }
            v190 = (__int64 *)v189;
            goto LABEL_446;
          }
          if ( (a16 & 4) != 0 && (int)CoreWindowProp::GetOrCreate(v46, &v344) >= 0 )
            *((_DWORD *)v344 + 5) = 1;
          v373 = *(_OWORD *)LockPointer(&v383, (__int64)v46 + 200, (__int64)v46);
          HMAssignmentLock(&v373);
          if ( IsTopLevelParent((__int64)v19) )
          {
            v164 = (_QWORD *)((char *)v46 + 120);
            v375 = *(_OWORD *)LockPointer(&v386, (__int64)v46 + 120, 0LL);
            HMAssignmentLock(&v375);
          }
          else
          {
            NonChildAncestor = GetNonChildAncestor((__int64)v19);
            if ( !(unsigned int)ValidateOwnerDepth(v46, NonChildAncestor) )
              goto LABEL_347;
            if ( NonChildAncestor )
            {
              *(_DWORD *)(*((_QWORD *)v46 + 5) + 236LL) = *(_DWORD *)(*(_QWORD *)(NonChildAncestor + 40) + 236LL);
              SetOrClrWF(*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 234LL) & 0x20, (__int64)v46, 0xDA20u, 1);
              WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)NonChildAncestor);
            }
            v164 = (_QWORD *)((char *)v46 + 120);
            v374 = *(_OWORD *)LockPointer(&v384, (__int64)v46 + 120, NonChildAncestor);
            HMAssignmentLock(&v374);
            if ( *((_QWORD *)v46 + 15) )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(*v164 + 40LL) + 24LL) & 8) != 0
                || (v320 = 1, tagWND::RedirectedFieldzbid<enum ZBID>::operator!=((__int64)v46 + 214, &v320)) )
              {
                SetOrClrWF(1, (__int64)v46, 0x808u, 1);
              }
            }
            if ( v293 == *(_WORD *)(gpsi + 898LL) )
            {
              v64 = gptiCurrent;
            }
            else
            {
              v64 = gptiCurrent;
              if ( SharedPointerBase<unsigned short>::operator!=((_QWORD *)v46 + 15) )
              {
                v165 = *(_QWORD *)(*v164 + 16LL);
                if ( v165 != gptiCurrent )
                  zzzAttachThreadInput(gptiCurrent, v165, 1);
              }
            }
          }
          if ( SharedPointerBase<unsigned short>::operator==(v164) && !(unsigned int)CoreWindowProp::IsComponent(v46) )
          {
            v321 = 8;
            if ( (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v46 + 214, &v321)
              || (v322 = 9, (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==(
                                               (char *)v46 + 214,
                                               &v322))
              || (v323 = 10,
                  (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v46 + 214, &v323))
              || (v324 = 11,
                  (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v46 + 214, &v324))
              || (v325 = 13,
                  (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v46 + 214, &v325))
              || (v326[0] = 15,
                  (unsigned __int8)tagWND::RedirectedFieldzbid<enum ZBID>::operator==((char *)v46 + 214, v326))
              || (*(_BYTE *)(*((_QWORD *)v46 + 5) + 234LL) & 0x20) != 0 )
            {
              WindowCloakStateComponentUIAware = 2;
            }
          }
          if ( !v19 || v19 != *(struct tagWND **)(*((_QWORD *)v19 + 3) + 104LL) )
          {
            v19 = 0LL;
            v167 = KeGetCurrentThread();
            v168 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v166, v111, v113, v162) )
            {
              v169 = (__int64 *)PsGetThreadWin32Thread(v167);
              if ( v169 )
                v168 = *v169;
            }
            if ( v168 )
            {
              v170 = *(_QWORD *)(v168 + 456);
              if ( v170 )
                v19 = *(struct tagWND **)(v170 + 24);
            }
            v356 = *(_QWORD *)(v64 + 408);
            *(_QWORD *)(v64 + 408) = &v356;
            v357 = v19;
            if ( v19 )
              HMLockObject(v19);
            v305 = 1;
          }
          if ( (a16 & 2) == 0 )
            goto LABEL_392;
          if ( !*(_QWORD *)(v64 + 1392) )
          {
            SetOrClrWF(1, (__int64)v46, 0xDA40u, 1);
            *(_DWORD *)(v64 + 1224) |= 0x40000u;
            *(_DWORD *)(*(_QWORD *)(v64 + 424) + 396LL) |= 0x2000000u;
            if ( !*(_QWORD *)(v64 + 1384) )
            {
              KernelEvent = CreateKernelEvent(1LL, 0LL);
              *(_QWORD *)(v64 + 1384) = KernelEvent;
              if ( !KernelEvent )
              {
                v296 = 7;
                goto LABEL_478;
              }
            }
            *(_QWORD *)&v371 = v64 + 1392;
            *((_QWORD *)&v371 + 1) = v46;
            v376 = v371;
            HMAssignmentLock(&v376);
            goto LABEL_392;
          }
LABEL_347:
          UserSetLastError(87LL, v111, v113, v162);
          goto LABEL_478;
        }
        SetOrClrWF(1, (__int64)v46, 0xF04u, 1);
        v310 = 192;
        if ( (*(_BYTE *)(*((_QWORD *)v46 + 5) + 21LL) & 2) != 0 )
          SetOrClrWF(1, (__int64)v46, 0x901u, 1);
        SetOrClrWF(1, (__int64)v46, 0x10u, 1);
        v138 = a6;
        v139 = 0x80000000LL;
        if ( (a6 == 0x80000000 || a6 == 0x8000) && HIDWORD(v387) != 0x80000000 )
        {
          v140 = v304;
          if ( HIDWORD(v387) != 0x8000 )
            v140 = HIDWORD(v387);
          v304 = v140;
          v139 = 0x80000000LL;
        }
        if ( v298 || a6 != 0x80000000 && a6 != 0x8000 && v136 != 0x80000000 && v136 != 0x8000 )
        {
          PrimaryMonitor = 0LL;
          goto LABEL_292;
        }
        v141 = *(_QWORD *)(*(_QWORD *)(v64 + 416) + 688LL);
        if ( v141 )
        {
          v142 = (struct tagMONITOR *)((__int64 (*)(void))ValidateHmonitor)();
        }
        else
        {
          if ( !v19 )
          {
            PrimaryMonitor = 0LL;
            goto LABEL_289;
          }
          v142 = _MonitorFromWindowInternal(v19, 2, 0);
        }
        PrimaryMonitor = (__int64)v142;
LABEL_289:
        if ( PrimaryMonitor )
        {
LABEL_305:
          SetTiledRect(v46, &v389, PrimaryMonitor);
          if ( a6 == 0x80000000 || a6 == 0x8000 )
          {
            v153 = *(_QWORD *)(v64 + 416);
            if ( (*(_DWORD *)(v153 + 800) & 4) != 0 )
            {
              v302 = 1;
              v138 = *(_DWORD *)(v153 + 784);
              LODWORD(v387) = v138;
              v154 = *(_DWORD *)(*(_QWORD *)(v64 + 416) + 788LL);
            }
            else
            {
              v138 = v389;
              LODWORD(v387) = v389;
              v154 = DWORD1(v389);
            }
            HIDWORD(v387) = v154;
            a7 = v154;
            a6 = v138;
            v149 = 1;
          }
          else
          {
            v148 = *(_WORD *)(PrimaryMonitor + 226);
            if ( v148 )
              *(_WORD *)(PrimaryMonitor + 226) = v148 - 1;
            v149 = v309;
          }
          if ( (_DWORD)v388 == 0x80000000 || (_DWORD)v388 == 0x8000 )
          {
            v155 = *(_QWORD *)(v64 + 416);
            if ( (*(_DWORD *)(v155 + 800) & 2) != 0 )
            {
              v302 = 1;
              LODWORD(v388) = *(_DWORD *)(v155 + 792);
              HIDWORD(v388) = *(_DWORD *)(*(_QWORD *)(v64 + 416) + 796LL);
            }
            else
            {
              LODWORD(v388) = DWORD2(v389) - v138;
              HIDWORD(v388) = HIDWORD(v389) - a7;
            }
          }
          else if ( v149 )
          {
            v318 = *(__m128i *)GetMonitorRect(&v382, PrimaryMonitor);
            v150 = _mm_srli_si128(v318, 8).m128i_u64[0];
            v151 = v387 + v388 - v150;
            v152 = HIDWORD(v387) + HIDWORD(v388) - HIDWORD(v150);
            if ( v151 > 0 )
            {
              a6 = v138 - v151;
              LODWORD(v387) = v138 - v151;
              if ( v138 - v151 < v318.m128i_i32[0] )
              {
                a6 = v318.m128i_i32[0];
                LODWORD(v387) = v318.m128i_i32[0];
              }
            }
            if ( v152 > 0 )
            {
              a7 -= v152;
              HIDWORD(v387) = a7;
              if ( a7 < v318.m128i_i32[1] )
              {
                a7 = v318.m128i_i32[1];
                HIDWORD(v387) = v318.m128i_i32[1];
              }
            }
          }
          goto LABEL_326;
        }
        PrimaryMonitor = GetPrimaryMonitor(v141, v139, v137);
LABEL_292:
        if ( !PrimaryMonitor )
        {
          PrimaryMonitor = ValidateHmonitor(*(_QWORD *)(*((_QWORD *)v46 + 5) + 256LL));
          if ( !PrimaryMonitor )
          {
            if ( v298 )
              PrimaryMonitor = GetInheritedMonitor(v46);
            else
              PrimaryMonitor = 0LL;
            if ( PrimaryMonitor
              || (PrimaryMonitor = MonitorFromRect((struct tagRECT *)(*((_QWORD *)v46 + 5) + 88LL), 2u, 0),
                  v144 = 0LL,
                  PrimaryMonitor) )
            {
              v144 = *(_QWORD *)PrimaryMonitor;
            }
            *(_QWORD *)(*((_QWORD *)v46 + 5) + 256LL) = v144;
            *(_WORD *)(*((_QWORD *)v46 + 5) + 284LL) = *(_WORD *)(*(_QWORD *)(PrimaryMonitor + 40) + 64LL);
            v145 = (_DWORD *)*((_QWORD *)v46 + 36);
            if ( v145 )
            {
              --*v145;
              v146 = (_DWORD *)*((_QWORD *)v46 + 36);
              if ( !*v146 )
                Win32FreePool(v146);
              *((_QWORD *)v46 + 36) = 0LL;
            }
            v147 = *(_DWORD **)(PrimaryMonitor + 312);
            *((_QWORD *)v46 + 36) = v147;
            ++*v147;
            UpdateTopLevelWindowDPITransform((__int64)v46, PrimaryMonitor);
          }
        }
        goto LABEL_305;
      }
      v128 = 1284;
    }
    SetOrClrWF(1, (__int64)v46, v128, 1);
    goto LABEL_236;
  }
  *(_QWORD *)(*((_QWORD *)v46 + 5) + 296LL) = xxxClientAllocWindowClassExtraBytes(*(unsigned int *)(*((_QWORD *)v46 + 5)
                                                                                                  + 200LL));
  v343 = 0LL;
  if ( !(unsigned __int8)tagWND::RedirectedFieldpExtraBytes::operator==<unsigned __int64>((char *)v46 + 320, &v343) )
  {
    if ( (unsigned int)IsWindowBeingDestroyed((__int64)v46) || (*(_BYTE *)(_HMPheFromObject(v46) + 25) & 1) != 0 )
    {
      *(_QWORD *)(*((_QWORD *)v46 + 5) + 296LL) = 0LL;
      goto LABEL_478;
    }
    goto LABEL_204;
  }
  v296 = 2;
LABEL_478:
  v207 = *(_BYTE *)(*((_QWORD *)v46 + 5) + 31LL) & 0x10;
  if ( v305 )
    ThreadUnlock1(v112, v111, v113);
  SetOrClrWF(1, (__int64)v46, 0x480u, 1);
  SetOrClrWF(1, (__int64)v46, 0x380u, 1);
  if ( v207 )
    SetVisible(v46, 0);
  v208 = *((_QWORD *)v46 + 13);
  if ( v208 )
  {
    if ( v207 )
      zzzLockDisplayAreaAndInvalidateDCCache(v208, 16LL, 0LL);
    if ( (*(_BYTE *)(*((_QWORD *)v46 + 5) + 31LL) & 0xC0) == 0x40 && !(unsigned int)IsTopLevelWindow(v46) )
    {
      v209 = *(_QWORD *)(*((_QWORD *)v46 + 13) + 16LL);
      if ( gptiCurrent != v209 )
        zzzAttachThreadInput(*((_QWORD *)v46 + 2), v209, 0);
    }
    UnlinkWindow(v46, *((_QWORD *)v46 + 13));
  }
  ClassUnlock(*(struct tagCLS **)v297[0]);
  xxxFreeWindow(v46, (struct tagSwitchWndInfo *)&v337, v210, v211);
  v48 = v296;
  if ( v296 )
  {
    v47 = MEMORY[0xFFFFF78000000320];
    v346 = MEMORY[0xFFFFF78000000320];
    goto LABEL_83;
  }
LABEL_584:
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v301, v23, v24, v25);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v297, v288, v289, v290);
  return 0LL;
}
