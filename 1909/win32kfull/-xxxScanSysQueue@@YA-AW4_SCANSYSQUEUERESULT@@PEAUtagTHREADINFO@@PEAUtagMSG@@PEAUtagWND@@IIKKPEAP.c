/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C003CAC0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@W4ISOD_INPUTROUTING@@@Z @ 0x1C0006244 (-DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@W4ISOD_INPUTROUTING@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C000B38C (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C000B76C (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     GetMouseKeyFlags @ 0x1C00117BC (GetMouseKeyFlags.c)
 *     _PostTransformableMessage @ 0x1C0012284 (_PostTransformableMessage.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C001E368 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     PtiMouseFromQ @ 0x1C001E604 (PtiMouseFromQ.c)
 *     xxxTrackMouseMove @ 0x1C00200FC (xxxTrackMouseMove.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C0023F14 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0027734 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0027DC4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0029B90 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C002A7A4 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C002A940 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     PostEventMessageEx @ 0x1C002BAE0 (PostEventMessageEx.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C002BD4C (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     TransferWakeBit @ 0x1C003B44C (TransferWakeBit.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxCallCtfHook @ 0x1C004AEF8 (xxxCallCtfHook.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     xxxImmProcessKey @ 0x1C00526BC (xxxImmProcessKey.c)
 *     GetAppImeCompatFlags @ 0x1C0052998 (GetAppImeCompatFlags.c)
 *     xxxSendTransformableMessage @ 0x1C00647FC (xxxSendTransformableMessage.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0069994 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C00699E0 (xxxDCEWindowHitTestIndirect.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C006A350 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     IsThreadDesktopComposed @ 0x1C006AB70 (IsThreadDesktopComposed.c)
 *     LockExchangeW32Thread @ 0x1C0070DEC (LockExchangeW32Thread.c)
 *     ??$?0UtagObjLock@@U0@U0@U0@U0@U0@U0@@?$CMultiPerObjectLockExclusive@$06@@QEAA@AEAUtagObjLock@@000000@Z @ 0x1C0070E38 (--$-0UtagObjLock@@U0@U0@U0@U0@U0@U0@@-$CMultiPerObjectLockExclusive@$06@@QEAA@AEAUtagObjLock@@00.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 *     DelQEntry @ 0x1C0071248 (DelQEntry.c)
 *     xxxProcessEventMessage @ 0x1C00712F4 (xxxProcessEventMessage.c)
 *     ?ShouldDeferMessage@@YA_NW4ISOD_INPUTROUTING@@I@Z @ 0x1C0071FD0 (-ShouldDeferMessage@@YA_NW4ISOD_INPUTROUTING@@I@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     ClearWakeBit @ 0x1C00720F0 (ClearWakeBit.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C00721AC (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C007230C (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C0072530 (LockW32Thread.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00CBA28 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E3C40 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     xxxDCEWindowHitTest @ 0x1C00E51FC (xxxDCEWindowHitTest.c)
 *     GetThreadDesktopWindow @ 0x1C00E576C (GetThreadDesktopWindow.c)
 *     ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C00E57E0 (-MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z.c)
 *     IsMouseInPointerActive @ 0x1C00E5854 (IsMouseInPointerActive.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00E8E10 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C00EA1BC (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00EBE74 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00EF3D0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ThreadLockExchange @ 0x1C00F15D0 (ThreadLockExchange.c)
 *     FindNCHitEx @ 0x1C00F2358 (FindNCHitEx.c)
 *     IsHiddenByInputService @ 0x1C00F5BB0 (IsHiddenByInputService.c)
 *     CheckPwndFilter @ 0x1C00F5D70 (CheckPwndFilter.c)
 *     xxxWindowHitTest @ 0x1C00F98A0 (xxxWindowHitTest.c)
 *     ThreadLockExchangeAlways @ 0x1C00F9B60 (ThreadLockExchangeAlways.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C00FCD54 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 *     IsMenuStarted @ 0x1C00FDA08 (IsMenuStarted.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C00FDF4C (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z @ 0x1C0101390 (-IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z.c)
 *     FreeQEntry @ 0x1C010143C (FreeQEntry.c)
 *     ?RedirectForCapture@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEAUHWND__@@@Z @ 0x1C0108340 (-RedirectForCapture@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEAUHWND__@@@Z.c)
 *     xxxCallMouseHook @ 0x1C0111180 (xxxCallMouseHook.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C012FDE4 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     IsInsideMenuLoop @ 0x1C0139498 (IsInsideMenuLoop.c)
 *     xxxSnapWindow @ 0x1C015DA3C (xxxSnapWindow.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     IsStatelessPointerInputMessage @ 0x1C01CD640 (IsStatelessPointerInputMessage.c)
 *     ??$?0UtagObjLock@@@?$CMultiPerObjectLockExclusive@$00@@QEAA@AEAUtagObjLock@@@Z @ 0x1C01D5F54 (--$-0UtagObjLock@@@-$CMultiPerObjectLockExclusive@$00@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D5F78 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E1360 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01E13C0 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01E1998 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01E1C90 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01E2A74 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E2BE8 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01E2C14 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     SetMiPPromotion @ 0x1C01E3940 (SetMiPPromotion.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E7120 (PhysicalToLogicalInPlacePointWithParent.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F1408 (xxxRetrievePointerInputMessage.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01F1D80 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?HasTransform@InputTransform@@YAHPEAUtagWND@@@Z @ 0x1C01F656C (-HasTransform@InputTransform@@YAHPEAUtagWND@@@Z.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C01F8784 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 *     GetPenDoubleClickTime @ 0x1C01F8D00 (GetPenDoubleClickTime.c)
 *     xxxClientCallLocalMouseHooks @ 0x1C021DCE0 (xxxClientCallLocalMouseHooks.c)
 *     xxxCallHandleMenuMessages @ 0x1C0222BB0 (xxxCallHandleMenuMessages.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1C023E180 (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     xxxDefPointerProc @ 0x1C024002C (xxxDefPointerProc.c)
 *     HotKeyToWindow @ 0x1C02402E0 (HotKeyToWindow.c)
 *     _W32ExceptionHandler @ 0x1C0259354 (_W32ExceptionHandler.c)
 */

__int64 __fastcall xxxScanSysQueue(
        __int64 a1,
        struct tagMSG *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        int a7,
        struct tagQMSG **a8)
{
  int v8; // esi
  unsigned __int64 v10; // r12
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // rdx
  _DWORD *v21; // rax
  int v22; // edi
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned __int64 NextSysMsg; // r15
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r10
  __int64 v32; // rbx
  bool v33; // zf
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // r8
  unsigned int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // r8
  char v46; // r9
  int v47; // ebx
  const struct tagWND *v48; // rdi
  bool v49; // zf
  BOOL v50; // ebx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned int v54; // ecx
  unsigned int v55; // edx
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 *v58; // rbx
  __int64 v59; // r8
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rax
  struct tagWND *v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  int v67; // eax
  unsigned __int64 v68; // r8
  __int64 v69; // rbx
  char v70; // al
  struct tagQMSG *v71; // rsi
  __int64 v72; // rdx
  unsigned __int16 v73; // bx
  int v74; // eax
  char v75; // bl
  int v76; // edi
  __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // rdx
  int v80; // ecx
  __int128 *v81; // r8
  unsigned __int64 v82; // rdx
  int v83; // ecx
  struct tagWND *v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rcx
  int v89; // eax
  int InteractiveControlInputMessage; // ebx
  int v91; // ebx
  struct tagWND *v92; // rcx
  int v93; // edi
  int v94; // edi
  __int64 v95; // rax
  __int64 v96; // rax
  struct tagWND *ThreadDesktopWindow; // rbx
  __int64 v98; // rax
  unsigned __int64 v99; // rbx
  __int64 v100; // rdx
  __int64 v101; // r8
  __int64 v102; // rdx
  __int64 v103; // r8
  struct tagWND *v104; // rax
  __int64 v105; // rdx
  __int64 v106; // rcx
  __int64 v107; // r8
  __int64 v108; // rcx
  int v109; // eax
  struct tagWND *v110; // rdx
  int HasTransform; // ebx
  _DWORD *v112; // rax
  _DWORD *v113; // rax
  unsigned int MouseKeyFlags; // eax
  __int64 v115; // rcx
  char *v116; // rax
  char v117; // cl
  int v118; // eax
  unsigned int v119; // edx
  unsigned int v120; // r8d
  int v121; // ecx
  int v122; // eax
  int v123; // edi
  __int64 v124; // rax
  HWND *v125; // rdx
  struct tagWND *v126; // rbx
  int v127; // eax
  HWND v128; // rbx
  __int64 v129; // rdx
  __int64 v130; // r8
  struct tagWND *v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // rcx
  __int64 v136; // rax
  __int64 v137; // rdx
  __int64 v138; // r8
  __int64 v139; // rax
  int v140; // ebx
  unsigned int v141; // ebx
  int v142; // ebx
  __int64 v143; // rcx
  int v144; // eax
  struct tagWND *v145; // r9
  __int64 v146; // rcx
  unsigned __int64 v147; // rbx
  int v148; // edx
  int v149; // edx
  __int64 v150; // rcx
  int v151; // ecx
  __int64 v152; // rcx
  BOOL v153; // edi
  unsigned int v154; // eax
  unsigned int v155; // esi
  unsigned int v156; // edx
  __int64 v157; // rcx
  int v158; // eax
  int v159; // esi
  unsigned int v160; // edx
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // r9
  __int64 v164; // rax
  __int64 v165; // rcx
  int v166; // eax
  int v167; // ecx
  unsigned int TouchTimeFromCPLValue; // eax
  unsigned int v169; // ecx
  int v170; // eax
  __int64 v171; // rcx
  ULONG_PTR v172; // rbx
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  const struct tagWND *TopLevelWindow; // rax
  bool v175; // di
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v177; // rdx
  __int64 v178; // rdx
  __int64 v179; // rcx
  __int64 v180; // r8
  int v181; // edi
  __int64 v182; // rcx
  __int64 v183; // rcx
  _DWORD *v184; // rax
  _DWORD *v185; // rax
  __int64 v186; // rax
  __int64 v187; // rdx
  __int64 v188; // r8
  __int64 v189; // rax
  __int64 *v190; // rbx
  __int64 v191; // rcx
  __int64 v192; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v194; // rdx
  __int64 v195; // rcx
  __int64 v196; // r8
  __int64 v197; // rax
  int v198; // edx
  int v199; // esi
  __int64 v200; // rcx
  const struct tagQMSG *v201; // rbx
  int v202; // ebx
  __int64 v203; // rbx
  unsigned __int64 v204; // rcx
  int v205; // ebx
  unsigned __int64 MiPWindowFlags; // rax
  __int64 v207; // rbx
  struct tagWND *v208; // rcx
  int v209; // ebx
  int v210; // ebx
  int v211; // ebx
  int v212; // edx
  int v213; // eax
  __int64 v214; // rcx
  unsigned __int64 v215; // rax
  _QWORD *v216; // rax
  int v217; // ecx
  _DWORD *v218; // rax
  struct tagMSG *v219; // rbx
  __int64 v220; // rax
  int v221; // eax
  __int64 v222; // rdx
  __int64 v223; // r8
  __int64 v224; // rdx
  __int64 v225; // r8
  __int64 v226; // rdx
  __int64 v227; // r8
  __int64 v228; // rdx
  __int64 v229; // r8
  __int64 v230; // rdx
  __int64 v231; // r8
  __int64 v232; // rdx
  __int64 v233; // rcx
  __int64 v234; // r8
  void *v235; // rdx
  __int64 v236; // rdi
  __int64 v237; // rsi
  __int64 v238; // rdx
  __int64 v239; // r8
  __int64 v240; // rdx
  __int64 v241; // r8
  __int64 v242; // rdx
  __int64 v243; // r8
  __int64 v244; // rdx
  __int64 v245; // r8
  __int64 v246; // rdx
  __int64 v247; // r8
  __int64 v248; // rdx
  __int64 v249; // rcx
  __int64 v250; // r8
  int v251; // [rsp+80h] [rbp-798h] BYREF
  unsigned int v252; // [rsp+84h] [rbp-794h] BYREF
  int v253; // [rsp+88h] [rbp-790h] BYREF
  BOOL v254; // [rsp+8Ch] [rbp-78Ch]
  struct tagWND *v255; // [rsp+90h] [rbp-788h] BYREF
  int v256; // [rsp+98h] [rbp-780h]
  int v257; // [rsp+9Ch] [rbp-77Ch]
  bool v258; // [rsp+A0h] [rbp-778h]
  int v259; // [rsp+A4h] [rbp-774h] BYREF
  struct tagPOINT v260; // [rsp+A8h] [rbp-770h] BYREF
  __int128 v261; // [rsp+B0h] [rbp-768h] BYREF
  int v262; // [rsp+C0h] [rbp-758h] BYREF
  __int64 v263; // [rsp+C8h] [rbp-750h]
  bool v264; // [rsp+D0h] [rbp-748h]
  bool v265; // [rsp+D1h] [rbp-747h]
  unsigned int v266; // [rsp+D4h] [rbp-744h]
  int v267; // [rsp+D8h] [rbp-740h]
  int v268; // [rsp+DCh] [rbp-73Ch]
  struct tagQMSG **v269; // [rsp+E0h] [rbp-738h]
  int v270[2]; // [rsp+E8h] [rbp-730h]
  char v271; // [rsp+F0h] [rbp-728h] BYREF
  char v272[3]; // [rsp+F1h] [rbp-727h] BYREF
  int v273; // [rsp+F4h] [rbp-724h]
  int v274; // [rsp+F8h] [rbp-720h]
  int v275; // [rsp+FCh] [rbp-71Ch]
  int v276; // [rsp+100h] [rbp-718h]
  _OWORD v277[11]; // [rsp+110h] [rbp-708h] BYREF
  struct tagQMSG *v278; // [rsp+1C0h] [rbp-658h]
  __int64 v279; // [rsp+1C8h] [rbp-650h]
  unsigned int v280; // [rsp+1D0h] [rbp-648h]
  unsigned int v281; // [rsp+1D4h] [rbp-644h]
  unsigned int v282; // [rsp+1D8h] [rbp-640h]
  __int64 v283; // [rsp+1E0h] [rbp-638h]
  __int64 v284; // [rsp+1E8h] [rbp-630h]
  __int64 v285; // [rsp+1F0h] [rbp-628h]
  __int64 v286; // [rsp+1F8h] [rbp-620h]
  int v287; // [rsp+200h] [rbp-618h]
  __int64 v288; // [rsp+208h] [rbp-610h] BYREF
  __int64 v289; // [rsp+210h] [rbp-608h]
  __int64 v290; // [rsp+218h] [rbp-600h]
  __int128 v291; // [rsp+220h] [rbp-5F8h] BYREF
  __int64 v292; // [rsp+230h] [rbp-5E8h]
  __int64 v293; // [rsp+238h] [rbp-5E0h]
  __int64 v294; // [rsp+240h] [rbp-5D8h]
  __int64 v295; // [rsp+248h] [rbp-5D0h] BYREF
  struct tagWND *v296; // [rsp+250h] [rbp-5C8h]
  __int64 v297; // [rsp+258h] [rbp-5C0h]
  __int64 v298; // [rsp+260h] [rbp-5B8h]
  struct tagMSG *v299; // [rsp+268h] [rbp-5B0h]
  char v300[8]; // [rsp+270h] [rbp-5A8h] BYREF
  __int128 v301; // [rsp+278h] [rbp-5A0h] BYREF
  __int64 v302; // [rsp+288h] [rbp-590h]
  __int128 v303; // [rsp+290h] [rbp-588h]
  __int64 v304; // [rsp+2A0h] [rbp-578h]
  _QWORD v305[3]; // [rsp+2A8h] [rbp-570h] BYREF
  _QWORD v306[3]; // [rsp+2C0h] [rbp-558h] BYREF
  _QWORD v307[3]; // [rsp+2D8h] [rbp-540h] BYREF
  _QWORD v308[3]; // [rsp+2F0h] [rbp-528h] BYREF
  _QWORD v309[3]; // [rsp+308h] [rbp-510h] BYREF
  int v310; // [rsp+320h] [rbp-4F8h]
  __int64 v311; // [rsp+328h] [rbp-4F0h] BYREF
  __int64 *v312; // [rsp+330h] [rbp-4E8h]
  __int64 v313; // [rsp+338h] [rbp-4E0h]
  _DWORD v314[2]; // [rsp+340h] [rbp-4D8h] BYREF
  __int128 v315; // [rsp+348h] [rbp-4D0h]
  int *v316; // [rsp+358h] [rbp-4C0h]
  int v317; // [rsp+360h] [rbp-4B8h]
  int v318; // [rsp+364h] [rbp-4B4h]
  char *v319; // [rsp+368h] [rbp-4B0h]
  __int64 v320; // [rsp+370h] [rbp-4A8h]
  __int64 v321; // [rsp+378h] [rbp-4A0h]
  __int128 v322; // [rsp+380h] [rbp-498h]
  __int128 v323; // [rsp+390h] [rbp-488h]
  __int128 v324; // [rsp+3A0h] [rbp-478h]
  __int128 v325; // [rsp+3B0h] [rbp-468h]
  unsigned __int64 v326; // [rsp+3C0h] [rbp-458h] BYREF
  int v327; // [rsp+3C8h] [rbp-450h]
  __int64 v328; // [rsp+3CCh] [rbp-44Ch]
  __int64 v329; // [rsp+3D4h] [rbp-444h]
  __int64 v330; // [rsp+3DCh] [rbp-43Ch]
  __int64 v331; // [rsp+3E4h] [rbp-434h]
  int v332; // [rsp+3ECh] [rbp-42Ch]
  __int128 v333; // [rsp+410h] [rbp-408h]
  __int128 v334; // [rsp+420h] [rbp-3F8h]
  __int128 v335; // [rsp+430h] [rbp-3E8h]
  __int128 v336; // [rsp+440h] [rbp-3D8h]
  __int128 v337; // [rsp+450h] [rbp-3C8h]
  __int128 v338; // [rsp+460h] [rbp-3B8h]
  unsigned __int64 v339; // [rsp+480h] [rbp-398h]
  _OWORD v340[6]; // [rsp+4A0h] [rbp-378h] BYREF
  _OWORD v341[11]; // [rsp+500h] [rbp-318h] BYREF
  _OWORD v342[11]; // [rsp+5B0h] [rbp-268h] BYREF
  _OWORD v343[11]; // [rsp+660h] [rbp-1B8h] BYREF
  _DWORD v344[44]; // [rsp+710h] [rbp-108h] BYREF
  _DWORD v345[4]; // [rsp+7C0h] [rbp-58h] BYREF

  v266 = a4;
  *(_QWORD *)v270 = a3;
  v281 = a5;
  v298 = a1;
  v283 = a1;
  v299 = a2;
  v304 = a3;
  v282 = a4;
  v280 = a4;
  v269 = a8;
  memset(v277, 0, 0xA8uLL);
  memset(v341, 0, 0xA8uLL);
  v10 = 0LL;
  *((_QWORD *)&v261 + 1) = 0LL;
  v260 = 0LL;
  v291 = 0uLL;
  v292 = 0LL;
  v293 = 0LL;
  v294 = 0LL;
  v287 = 0;
  v288 = 0LL;
  v289 = 0LL;
  v290 = 0LL;
  v295 = 0LL;
  v296 = 0LL;
  v297 = 0LL;
  memset(v305, 0, sizeof(v305));
  memset(v306, 0, sizeof(v306));
  memset(v309, 0, sizeof(v309));
  memset(v308, 0, sizeof(v308));
  memset(v307, 0, sizeof(v307));
  v253 = a6 & 1;
  v275 = 0;
  v11 = 0;
  v257 = 0;
  LOBYTE(v8) = 0;
  v254 = v8;
  v258 = 0;
  CMultiPerObjectLockExclusivePpiPtiQ::CMultiPerObjectLockExclusivePpiPtiQ(
    (CMultiPerObjectLockExclusivePpiPtiQ *)&v251,
    (struct tagTHREADINFO *)a1);
  v278 = 0LL;
  *a8 = 0LL;
  if ( a7 == 0x2000 && *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) )
  {
    EtwTraceInputQueueLockedPeekRecursion();
    goto LABEL_742;
  }
  v273 = 0;
  v256 = 0;
  v268 = 0;
  v14 = *(_QWORD *)(a1 + 424);
  if ( !*(_QWORD *)(v14 + 72) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_qqq(
        (__int64)gFullLog,
        v12,
        0x12u,
        0x1Bu,
        (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
        a1,
        v14,
        0LL);
      v14 = *(_QWORD *)(a1 + 424);
    }
    *(_QWORD *)(v14 + 72) = a1;
    **(_DWORD **)(a1 + 440) |= 1u;
    v14 = *(_QWORD *)(a1 + 424);
  }
  if ( (a7 & 0x1C07) != 0 )
  {
    if ( v253 )
      *(_DWORD *)(v14 + 396) &= ~0x400u;
    else
      *(_DWORD *)(v14 + 396) |= 0x400u;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 424) + 72LL) != a1 )
  {
    EtwTraceInputQueueLocked();
    CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
    return 2LL;
  }
  v263 = 0LL;
  v284 = 0LL;
  v286 = 0LL;
  v279 = 0LL;
  v285 = 0LL;
  LockW32Thread(0LL, v305, v13);
  LockW32Thread(0LL, v306, v16);
  LockW32Thread(0LL, v309, v17);
  LockW32Thread(0LL, v308, v18);
  LockW32Thread(0LL, v307, v19);
  v255 = 0LL;
  v288 = *(_QWORD *)(a1 + 408);
  *(_QWORD *)(a1 + 408) = &v288;
  v289 = 0LL;
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_qq(
      (__int64)gFullLog,
      v20,
      0x12u,
      0x1Cu,
      (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
      *(_QWORD *)(a1 + 424),
      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL));
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) = 0LL;
  while ( 1 )
  {
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
LABEL_24:
                v21 = *(_DWORD **)(a1 + 472);
                v22 = (*v21 >> 9) & 1;
                v310 = v22;
                v23 = *(_QWORD *)(a1 + 424);
                if ( *(_QWORD *)(v23 + 88) )
                {
                  if ( !(_BYTE)v8 )
                  {
                    v254 = ((v11 - 1) & 0xFFFFFFFD) == 0;
                    v258 = ((v11 - 1) & 0xFFFFFFFD) == 0;
                  }
                }
                else
                {
                  v11 = 0;
                  v257 = 0;
                  LOBYTE(v21) = 0;
                  v254 = (int)v21;
                  v258 = 0;
                }
                v8 = 0;
                v267 = 0;
                *(_QWORD *)&v261 = 0LL;
                v276 = 0;
                NextSysMsg = xxxGetNextSysMsg(
                               (struct tagTHREADINFO *)a1,
                               *(struct tagQMSG **)(v23 + 88),
                               (struct tagQMSG *)v277,
                               (struct CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                *(_QWORD *)&v303 = NextSysMsg;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v24) = 4;
                  WPP_RECORDER_SF_qqq(
                    (__int64)gFullLog,
                    v24,
                    0x12u,
                    0x1Du,
                    (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                    NextSysMsg,
                    *(_QWORD *)(a1 + 424),
                    *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL));
                }
                *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) = NextSysMsg;
                if ( NextSysMsg <= 1 )
                  goto LABEL_50;
                v28 = DWORD1(v277[6]);
                if ( (BYTE4(v277[6]) & 0x20) != 0 )
                {
                  *v269 = (struct tagQMSG *)NextSysMsg;
                  *(_DWORD *)(NextSysMsg + 100) |= 0x100u;
                  v25 = 0LL;
                  v253 = 0;
                  v28 = DWORD1(v277[6]);
                }
                else
                {
                  v25 = (unsigned int)v253;
                }
                if ( (v28 & 0x10000) == 0 )
                  break;
                if ( *((_QWORD *)&v277[6] + 1) == a1 )
                  v11 = 1;
                v257 = v11;
                LOBYTE(v8) = 1;
                v254 = v8;
                v258 = 1;
              }
              if ( (v28 & 0x80000) == 0 )
                break;
              LOBYTE(v8) = v254;
              if ( *((_QWORD *)&v277[6] + 1) == a1 )
                goto LABEL_21;
            }
            if ( LODWORD(v277[6]) == 4 && v254 )
            {
              DeferSysPeekMsg(a1, 3);
              goto LABEL_23;
            }
            if ( (v28 & 0x20000) == 0 )
              break;
            LOBYTE(v8) = v254;
            if ( *((_QWORD *)&v277[6] + 1) == a1 )
            {
              v11 = 2;
              goto LABEL_22;
            }
          }
          if ( (_DWORD)v25 && ShouldDeferMessage(v11, SDWORD2(v277[1])) )
          {
            DeferSysPeekMsg(a1, 3);
LABEL_21:
            v11 = 3;
LABEL_22:
            v257 = v11;
            goto LABEL_23;
          }
LABEL_50:
          if ( !*(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) )
          {
            if ( a7 == 0x2000 )
              ClearWakeBit(a1, 0x2000, 0);
            goto LABEL_719;
          }
          ThreadUnlock1(v25, v24, v26);
          LOBYTE(v29) = 1;
          v31 = HMValidateHandleNoSecure(*(unsigned __int64 *)&v277[1], v29, v30);
          v255 = (struct tagWND *)v31;
          v288 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v288;
          v289 = v31;
          if ( v31 )
          {
            HMLockObject(v31);
            v31 = (__int64)v255;
          }
          if ( !LODWORD(v277[6]) )
            break;
          if ( LODWORD(v277[6]) == 4 )
          {
            LOBYTE(v8) = v254;
            if ( *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) != *(_QWORD *)(*(_QWORD *)(a1 + 424) + 24LL) )
              continue;
          }
          if ( LODWORD(v277[6]) != 9 || DWORD2(v277[1]) != 96 )
            goto LABEL_65;
          v32 = *((_QWORD *)&v277[0] + 1);
          v33 = *((_QWORD *)&v277[0] + 1) == 0LL;
          if ( *((_QWORD *)&v277[0] + 1) )
          {
            do
            {
              if ( !(unsigned int)IsHiddenByInputService(v32) )
                break;
              v32 = *(_QWORD *)(v32 + 8);
            }
            while ( v32 );
            v33 = v32 == 0;
          }
          v11 = v257;
          LOBYTE(v8) = v254;
          if ( v33 )
          {
LABEL_65:
            v34 = *((_QWORD *)&v277[6] + 1);
            if ( *((_QWORD *)&v277[6] + 1) && *((_QWORD *)&v277[6] + 1) != a1 )
            {
              v35 = *(_QWORD *)(a1 + 424);
              if ( *(_QWORD *)(*((_QWORD *)&v277[6] + 1) + 424LL) == v35 )
              {
                LockExchangeW32Thread(*((__int64 *)&v277[6] + 1), (__int64)v309);
                v37 = v298;
                v38 = *(_QWORD *)(v298 + 424);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v36) = 4;
                  WPP_RECORDER_SF_qq(
                    (__int64)gFullLog,
                    v36,
                    0x12u,
                    0x1Eu,
                    (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                    v38,
                    *(_QWORD *)(v38 + 88));
                  v38 = *(_QWORD *)(v37 + 424);
                }
                *(_QWORD *)(v38 + 88) = 0LL;
                v286 = v34;
                goto LABEL_719;
              }
              CleanEventMessage(*(struct tagQMSG **)(v35 + 88));
              DelQEntry(*(_QWORD *)(a1 + 424) + 24LL, *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL), 1);
              goto LABEL_16;
            }
            EtwTraceRetrieveQueueEventMessage(*(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL));
            DelQEntry(*(_QWORD *)(a1 + 424) + 24LL, *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL), 1);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v39) = 4;
              WPP_RECORDER_SF_qq(
                (__int64)gFullLog,
                v39,
                0x12u,
                0x1Fu,
                (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                *(_QWORD *)(a1 + 424),
                *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL));
            }
            *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) = 0LL;
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
            xxxProcessEventMessage(a1, (__int64)v277, v40);
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
            v11 = v257;
            LOBYTE(v8) = v254;
            goto LABEL_18;
          }
        }
        if ( a7 == 0x2000 )
          goto LABEL_23;
        v41 = DWORD2(v277[1]);
        v252 = DWORD2(v277[1]);
        if ( DWORD2(v277[1]) <= 0x20A )
          break;
        switch ( DWORD2(v277[1]) )
        {
          case 0x20E:
            goto LABEL_300;
          case 0x238:
            goto LABEL_379;
          case 0x240:
LABEL_374:
            if ( !v31 )
              goto LABEL_309;
            v116 = *(char **)(v31 + 40);
            if ( v116[20] < 0 )
              goto LABEL_309;
            if ( v116[19] < 0 )
              goto LABEL_309;
            v117 = v116[31];
            if ( (v117 & 8) != 0 || (v117 & 0x10) == 0 )
              goto LABEL_309;
LABEL_379:
            v261 = v277[2];
            if ( !v31 )
              goto LABEL_309;
            if ( CheckCrossThreadInput((struct tagWND *const)v31, (struct tagQMSG *)NextSysMsg, &v259, &v253, v269) )
              goto LABEL_719;
            if ( v259 )
              goto LABEL_309;
            if ( !v266 && a5 == -1 )
              goto LABEL_390;
            if ( v266 <= a5 )
            {
              LOBYTE(v8) = v254;
              if ( v252 < v266 || v252 > a5 )
                goto LABEL_24;
            }
            else if ( v252 >= a5 && v252 <= v266 )
            {
              goto LABEL_23;
            }
LABEL_390:
            v118 = CheckPwndFilter(v255, *(_QWORD *)v270);
            LOBYTE(v8) = v254;
            if ( v118 )
            {
              if ( !v253 )
                goto LABEL_686;
LABEL_392:
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v277, 1u);
              goto LABEL_686;
            }
            break;
          case 0x245:
          case 0x246:
          case 0x247:
          case 0x249:
          case 0x24A:
          case 0x251:
          case 0x252:
          case 0x253:
            v94 = v256;
            goto LABEL_651;
          case 0x2E8:
          case 0x2E9:
          case 0x2EA:
          case 0x2EB:
          case 0x2EC:
          case 0x2ED:
          case 0x2EE:
          case 0x2EF:
          case 0x2F0:
          case 0x2F1:
          case 0x2F2:
          case 0x2F3:
          case 0x2F4:
          case 0x2F5:
            if ( !v266 && a5 == -1 )
              goto LABEL_292;
            if ( v266 <= a5 )
            {
              if ( DWORD2(v277[1]) < v280 || DWORD2(v277[1]) > v281 )
                goto LABEL_719;
            }
            else if ( DWORD2(v277[1]) >= v281 && DWORD2(v277[1]) <= v280 )
            {
              goto LABEL_719;
            }
LABEL_292:
            if ( (unsigned int)IsInsideMenuLoop(a1) )
              goto LABEL_309;
            if ( v253 )
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v277, 1u);
            if ( !v255 )
              v255 = *(struct tagWND **)(*(_QWORD *)(a1 + 424) + 120LL);
            v261 = v277[2];
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
            InteractiveControlInputMessage = xxxRetrieveInteractiveControlInputMessage(
                                               (unsigned __int16)v261,
                                               WORD1(v261));
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
            v91 = InteractiveControlInputMessage - 1;
            if ( !v91 )
              goto LABEL_686;
            if ( v91 == 1 )
              goto LABEL_719;
            goto LABEL_309;
          default:
LABEL_394:
            v260.x = SWORD4(v277[2]);
            v260.y = SWORD5(v277[2]);
            v262 = 1;
            if ( (BYTE4(v277[6]) & 0x20) == 0 )
              goto LABEL_404;
            if ( !v31 )
              goto LABEL_404;
            v119 = *(_DWORD *)(*(_QWORD *)(v31 + 40) + 288LL);
            v120 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 416LL) + 280LL);
            if ( (((unsigned __int16)(v120 >> 8) ^ (unsigned __int16)(v119 >> 8)) & 0x1FF) != 0 )
              goto LABEL_404;
            if ( (v119 & 0xF) != 2 || (v121 = 1, (v119 & 0x20000000) == 0) )
              v121 = 0;
            if ( (v120 & 0xF) != 2 || (v122 = 1, (v120 & 0x20000000) == 0) )
              v122 = 0;
            if ( v121 != v122 )
            {
LABEL_404:
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
              if ( !v255 || (v123 = 1, !(unsigned int)IsCompositionInputWindowForHitTest(v255)) )
                v123 = 0;
              v275 = v123;
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
              v124 = *(_QWORD *)(a1 + 424);
              v125 = *(HWND **)(v124 + 112);
              if ( v125 )
              {
                v255 = *(struct tagWND **)(v124 + 112);
                InputTraceLogging::Mouse::RedirectForCapture((const struct tagQMSG *)v277, *v125);
                if ( v123 )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  v140 = IsCompositionInputWindowForHitTest(v255);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  if ( !v140 )
                  {
                    DWORD1(v277[6]) &= ~0x2000u;
                    if ( NextSysMsg )
                    {
                      if ( (unsigned int)IsMouseInPointerActive(a1) )
                        *(_DWORD *)(NextSysMsg + 100) &= ~0x2000u;
                    }
                  }
                }
              }
              else
              {
                if ( v123 )
                {
                  v126 = v255;
                }
                else
                {
                  v126 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 448LL) + 8LL) + 24LL);
                  v295 = *(_QWORD *)(a1 + 408);
                  *(_QWORD *)(a1 + 408) = &v295;
                  v296 = v126;
                  if ( v126 )
                    HMLockObject(v126);
                }
                if ( (unsigned int)IsThreadDesktopComposed(a1) )
                {
                  v314[0] = DWORD2(v277[1]);
                  v314[1] = 0;
                  v315 = v277[2];
                  v316 = &v262;
                  v127 = 1;
                  if ( v123 )
                    v127 = 9;
                  v317 = v127;
                  v318 = 0;
                  v319 = (char *)&v277[5] + 8;
                  v320 = 0LL;
                  v321 = 0LL;
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  v128 = xxxDCEWindowHitTestIndirect((ULONG_PTR)v126, *(struct tagPOINT *)&v277[5], (__int64)v314);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  if ( v128 && (_DWORD)v320 )
                  {
                    *((_QWORD *)&v277[2] + 1) = *((_QWORD *)&v315 + 1);
                    DWORD1(v277[3]) = SWORD4(v315);
                    v129 = *((_QWORD *)&v315 + 1) >> 16;
                    DWORD2(v277[3]) = SWORD5(v315);
                    v260 = *(struct tagPOINT *)((char *)&v277[3] + 4);
                  }
                }
                else
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  v128 = (HWND)xxxWindowHitTest((ULONG_PTR)v126);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                }
                LOBYTE(v129) = 1;
                v131 = (struct tagWND *)HMValidateHandleNoSecure((unsigned __int64)v128, v129, v130);
                InputTraceLogging::Mouse::SecondaryHitTest((const struct tagQMSG *)v277, &v260, v131);
                if ( !v123 )
                  ThreadUnlock1(v133, v132, v134);
                LOBYTE(v132) = 1;
                v255 = (struct tagWND *)HMValidateHandleNoSecure((unsigned __int64)v128, v132, v134);
                if ( !v255 )
                {
                  v255 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL) + 24LL);
                  if ( !v255 )
                    v255 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 448LL) + 8LL) + 24LL);
                }
                if ( (unsigned int)IsMouseInPointerActive(a1)
                  && (v135 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 448LL)) != 0
                  && (v136 = ValidateHwnd(v135)) != 0
                  && ((v137 = *(_QWORD *)(v136 + 16), v138 = *(_QWORD *)(a1 + 424), *(_QWORD *)(v137 + 424) == v138)
                   || *(_QWORD *)(v137 + 416) == *(_QWORD *)(a1 + 416)) )
                {
                  v255 = (struct tagWND *)v136;
                  v262 = 1;
                  *(_DWORD *)(v138 + 156) = 0;
                }
                else
                {
                  v139 = *(_QWORD *)(a1 + 424);
                  *(_DWORD *)(v139 + 156) = v262 != 1;
                }
              }
              v31 = (__int64)v255;
              if ( v255 == *(struct tagWND **)(*(_QWORD *)(a1 + 424) + 112LL) )
              {
                v141 = *(_DWORD *)(*((_QWORD *)v255 + 5) + 288LL);
                if ( (((unsigned __int16)(v141 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(PtiMouseFromQ(*(_QWORD *)(*((_QWORD *)v255 + 2) + 424LL))
                                                                                                + 416)
                                                                                    + 280LL) >> 8)) & 0x1FF) != 0 )
                  goto LABEL_448;
                if ( (*(_DWORD *)(*((_QWORD *)v255 + 5) + 288LL) & 0xF) != 2
                  || (v142 = 1, (*(_DWORD *)(*((_QWORD *)v255 + 5) + 288LL) & 0x20000000) == 0) )
                {
                  v142 = 0;
                }
                if ( (*(_DWORD *)(*(_QWORD *)(PtiMouseFromQ(*(_QWORD *)(*((_QWORD *)v255 + 2) + 424LL)) + 416) + 280LL) & 0xF) != 2
                  || (v143 = *(_QWORD *)(PtiMouseFromQ(*(_QWORD *)(*((_QWORD *)v255 + 2) + 424LL)) + 416),
                      v144 = 1,
                      (*(_DWORD *)(v143 + 280) & 0x20000000) == 0) )
                {
                  v144 = 0;
                }
                if ( v142 != v144 || (unsigned int)IsOleDragDropCaptureWindow(v255) )
                {
LABEL_448:
                  v260 = *(struct tagPOINT *)&v277[5];
                  PhysicalToLogicalInPlacePointWithParent(v255, &v260, (char *)&v277[5] + 8);
                  *((_QWORD *)&v261 + 1) = (LOWORD(v260.y) << 16) | LOWORD(v260.x);
                  *(struct tagPOINT *)((char *)&v277[3] + 4) = v260;
                }
                v31 = (__int64)v255;
              }
            }
            ThreadLockExchange(v31, &v288);
            if ( CheckCrossThreadInput(v255, (struct tagQMSG *)NextSysMsg, &v259, &v253, v269) )
              goto LABEL_719;
            if ( !v259 )
            {
              if ( (WORD2(v277[6]) & 0x1000) != 0
                && !(unsigned __int8)CheckAccess(&v277[7], *(_QWORD *)(*((_QWORD *)v255 + 2) + 416LL) + 872LL) )
              {
                EtwTraceUIPIMsgError(
                  0LL,
                  *(_QWORD *)(*((_QWORD *)v255 + 2) + 416LL),
                  v252,
                  *(_QWORD *)&v277[2],
                  *((_QWORD *)&v277[2] + 1));
LABEL_453:
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
                goto LABEL_308;
              }
              goto LABEL_456;
            }
            v145 = v255;
            v146 = *((_QWORD *)v255 + 2);
            if ( *(_QWORD *)(v146 + 424) != *(_QWORD *)(a1 + 424) )
              goto LABEL_453;
            if ( !v263 )
            {
              v263 = *((_QWORD *)v255 + 2);
              LockExchangeW32Thread(v146, (__int64)v306);
LABEL_456:
              v145 = v255;
            }
            v147 = (unsigned __int64)v260;
            v148 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v145 + 2) + 424LL) + 156LL);
            if ( v148 && (v149 = v148 - 2) != 0 )
            {
              if ( v149 != 1 )
                goto LABEL_472;
              v150 = *((_QWORD *)v145 + 5);
              if ( (*(_BYTE *)(v150 + 26) & 0x40) != 0 )
                v260.x = *(_DWORD *)(v150 + 96) - v260.x;
              else
                v260.x -= *(_DWORD *)(v150 + 88);
              v151 = *(_DWORD *)(*((_QWORD *)v145 + 5) + 92LL);
            }
            else
            {
              v152 = *((_QWORD *)v145 + 5);
              if ( (*(_BYTE *)(v152 + 26) & 0x40) != 0 )
                v260.x = *(_DWORD *)(v152 + 112) - v260.x;
              else
                v260.x -= *(_DWORD *)(v152 + 104);
              v151 = *(_DWORD *)(*((_QWORD *)v145 + 5) + 108LL);
            }
            v260.y -= v151;
LABEL_472:
            if ( !v259 && *(_QWORD *)(a1 + 424) == gpqCursor )
            {
              v153 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 184LL) != (_QWORD)v145;
              v154 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))FindNCHitEx)(v145, (unsigned int)v262, v260);
              v155 = v154;
              v156 = v252;
              if ( v252 != 512 || v153 || *(_DWORD *)(*(_QWORD *)(a1 + 448) + 192LL) != v154 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                xxxTrackMouseMove(v255, v155, v252);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                v156 = v252;
              }
              if ( !v153 )
              {
                v157 = *(_QWORD *)(a1 + 448);
                if ( (*(_DWORD *)(v157 + 48) & 0x40) != 0 && (v156 != 512 || !PtInRect((_DWORD *)(v157 + 196), v147)) )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  ResetMouseHover(*(struct tagDESKTOP **)(a1 + 448), (struct tagPOINT)v147);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                }
              }
              v145 = v255;
            }
            v158 = CheckPwndFilter(v145, *(_QWORD *)v270);
            v11 = v257;
            LOBYTE(v8) = v254;
            if ( !v158 )
              goto LABEL_24;
            v159 = 0;
            v274 = 0;
            v160 = v252;
            switch ( v252 )
            {
              case 0x201u:
                v33 = (unsigned __int8)IsMessageInputSourceTouch(v277) == 0;
                v161 = *(_QWORD *)(a1 + 424);
                if ( v33 )
                  *(_DWORD *)(v161 + 396) &= ~0x800000u;
                else
                  *(_DWORD *)(v161 + 396) |= 0x800000u;
                v33 = (unsigned __int8)IsMessageInputSourcePen(v277) == 0;
                v162 = *(_QWORD *)(a1 + 424);
                if ( v33 )
                  *(_DWORD *)(v162 + 396) &= ~0x1000000u;
                else
                  *(_DWORD *)(v162 + 396) |= 0x1000000u;
                v160 = v252;
                goto LABEL_493;
              case 0x202u:
              case 0x205u:
              case 0x208u:
              case 0x20Cu:
                goto LABEL_509;
              case 0x204u:
              case 0x207u:
              case 0x20Bu:
LABEL_493:
                if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v255 + 17) + 8LL) + 8LL) & 8) != 0
                  || *(_DWORD *)(*(_QWORD *)(a1 + 424) + 156LL) == 1 )
                {
                  goto LABEL_497;
                }
                if ( !(unsigned int)IsMenuStarted(a1) )
                  goto LABEL_508;
                v160 = v252;
LABEL_497:
                v159 = 1;
                v274 = 1;
                v163 = *(_QWORD *)(a1 + 424);
                if ( LODWORD(v277[3]) <= *(_DWORD *)(v163 + 168) && !gbClientDoubleClickSupport )
                {
                  v164 = v255 ? *(_QWORD *)v255 : 0LL;
                  if ( v164 == *(_QWORD *)(v163 + 176)
                    && v160 == *(_DWORD *)(v163 + 160)
                    && (v160 != 523 || WORD1(v277[2]) == *(_WORD *)(v163 + 164)) )
                  {
                    v345[0] = *(_DWORD *)(v163 + 184) - *(_DWORD *)(gpsi + 2040LL) / 2;
                    v345[1] = *(_DWORD *)(v163 + 188) - *(_DWORD *)(gpsi + 2044LL) / 2;
                    v345[2] = *(_DWORD *)(v163 + 184) + *(_DWORD *)(gpsi + 2040LL) / 2;
                    v345[3] = *(_DWORD *)(v163 + 188) + *(_DWORD *)(gpsi + 2044LL) / 2;
                    if ( PtInRect(v345, *(unsigned __int64 *)((char *)&v277[3] + 4)) )
                    {
                      v160 = v252 + 2;
                      v252 += 2;
                      v159 = 2;
                      v274 = 2;
                    }
                    else
                    {
LABEL_508:
                      v160 = v252;
                    }
                  }
                }
LABEL_509:
                v165 = *(_QWORD *)(a1 + 424);
                v166 = *(_DWORD *)(v165 + 396);
                if ( (v166 & 8) != 0 )
                {
                  *(_DWORD *)(v165 + 396) = v166 | 4;
                  v160 = v252;
                }
                if ( v160 - 514 <= 0xA )
                {
                  v167 = 1097;
                  if ( _bittest(&v167, v160 - 514) )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)(a1 + 424) + 168LL) && ((DWORD2(v277[7]) - 4) & 0xFFFFFFFB) == 0 )
                    {
                      if ( DWORD2(v277[7]) == 4 )
                        TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(0x12Cu, 0xB4u, 5u, 1);
                      else
                        TouchTimeFromCPLValue = GetPenDoubleClickTime();
                      *(_DWORD *)(*(_QWORD *)(a1 + 424) + 168LL) = DWORD2(v277[9]) + TouchTimeFromCPLValue;
                      v160 = v252;
                    }
                  }
                }
LABEL_519:
                if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v255 + 2) + 424LL) + 156LL) == 1 )
                {
                  v160 -= 352;
                  v252 = v160;
                  *(_QWORD *)&v261 = (unsigned int)v262;
                }
                if ( !(unsigned int)MiPCheckMsgFilter((struct tagQMSG *)NextSysMsg, v160, v266, a5) )
                  goto LABEL_23;
                if ( v259 )
                  goto LABEL_719;
                v169 = v252;
                if ( v252 - 512 <= 0xE && (*(_DWORD *)(a1 + 480) & 0x8000) != 0 )
                  goto LABEL_23;
                v170 = *(_DWORD *)(a1 + 480);
                if ( (v170 & 0x100000) != 0 )
                {
                  *(_DWORD *)(a1 + 480) = v170 & 0xFFEFFFFF;
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  xxxWindowEvent(0x800Bu, 0LL, 4294967287LL, 0, 1);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  v169 = v252;
                }
                *(_QWORD *)&v291 = *(_QWORD *)((char *)&v277[3] + 4);
                if ( v255 )
                  *((_QWORD *)&v291 + 1) = *(_QWORD *)v255;
                else
                  *((_QWORD *)&v291 + 1) = 0LL;
                LODWORD(v292) = v262;
                v293 = *((_QWORD *)&v277[4] + 1);
                LODWORD(v294) = v277[2];
                if ( !v253 || v169 == 512 || v169 == 160 )
                {
                  v94 = v256;
                }
                else
                {
                  v94 = 1;
                  v256 = 1;
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  if ( (unsigned int)xxxCallCtfHook(7, 0, v252, &v291) )
                    goto LABEL_543;
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                }
                if ( ((*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_DWORD *)(a1 + 672)) & 0x100) == 0 )
                  goto LABEL_540;
                v94 = 1;
                v256 = 1;
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                if ( (unsigned int)xxxCallMouseHook(v252, &v291, (unsigned int)v253) )
                  goto LABEL_543;
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
LABEL_540:
                if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
                  goto LABEL_545;
                v171 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472);
                v265 = 0;
                v265 = *(_QWORD *)(v171 + 248) != 0LL;
                if ( !v265 )
                  goto LABEL_545;
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                if ( xxxClientCallLocalMouseHooks(v252, &v291, (unsigned int)v253) )
                  goto LABEL_543;
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
LABEL_545:
                if ( (*(_DWORD *)(a1 + 1224) & 0x2000) == 0 && ((v262 + 2) & 0xFFFFFFFD) == 0 )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  v172 = 0LL;
                  if ( v275 )
                  {
                    CompositionInputWindowUIOwner = v255;
                    if ( (unsigned int)IsIndependentInputWindow(v255) )
                      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v255);
                    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                    v172 = (ULONG_PTR)TopLevelWindow;
                    if ( TopLevelWindow )
                    {
                      v175 = 0;
                      if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) && v252 == 161 )
                        v175 = *(_QWORD *)(*(_QWORD *)(v172 + 16) + 424LL) == gpqForeground;
                      CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v172);
                      v172 = (ULONG_PTR)CompositeAppFrameWindowOrSelf;
                      if ( v175 )
                      {
                        v177 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 2);
                        if ( *(_QWORD *)(v177 + 424) != gpqForeground )
                          *(_DWORD *)(v177 + 480) |= 0x20u;
                      }
                      v295 = *(_QWORD *)(a1 + 408);
                      *(_QWORD *)(a1 + 408) = &v295;
                      v296 = CompositeAppFrameWindowOrSelf;
                      if ( CompositeAppFrameWindowOrSelf )
                        HMLockObject(CompositeAppFrameWindowOrSelf);
                      xxxSendMessage(v172);
                      ThreadUnlock1(v179, v178, v180);
                    }
                  }
                  if ( !v172 )
                    xxxSendMessage((ULONG_PTR)v255);
                  if ( *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) == NextSysMsg
                    && NextSysMsg
                    && (unsigned int)IsMouseInPointerActive(a1)
                    && (*(_DWORD *)(NextSysMsg + 100) & 0x800) != 0
                    && (unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(NextSysMsg + 120))
                    && IsMiPMouseMessage(*(_DWORD *)(NextSysMsg + 24)) )
                  {
                    memset(v344, 0, 0xA8uLL);
                    GeneratePointerMessageFromMouse(
                      (struct tagQMSG *)v344,
                      v252,
                      (struct tagQMSG *)NextSysMsg,
                      v255,
                      v253);
                    SetMiPPromotion(*((_QWORD *)v255 + 2), v344[6]);
                  }
                  goto LABEL_308;
                }
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) != NextSysMsg )
                  goto LABEL_719;
                memset(v340, 0, sizeof(v340));
                v303 = v340[0];
                v322 = v340[1];
                v323 = v340[2];
                v324 = v340[3];
                v325 = v340[4];
                v301 = v340[5];
                v181 = 0;
                v341[0] = v277[0];
                v341[1] = v277[1];
                v341[2] = v277[2];
                v341[3] = v277[3];
                v341[4] = v277[4];
                v341[5] = v277[5];
                v341[6] = v277[6];
                v341[7] = v277[7];
                v341[8] = v277[8];
                v341[9] = v277[9];
                *(_QWORD *)&v341[10] = *(_QWORD *)&v277[10];
                if ( !NextSysMsg || !(unsigned int)IsMouseInPointerActive(a1) )
                  goto LABEL_593;
                DWORD2(v341[1]) = v252;
                *(_QWORD *)&v341[2] = v261;
                if ( (*(_DWORD *)(NextSysMsg + 100) & 0x800) != 0 )
                {
                  memset(v342, 0, 0xA8uLL);
                  v182 = *(_QWORD *)(a1 + 1280);
                  if ( v182 && (*(_DWORD *)v182 & 1) != 0 )
                  {
                    v303 = *(_OWORD *)(v182 + 24);
                    v322 = *(_OWORD *)(v182 + 40);
                    v323 = *(_OWORD *)(v182 + 56);
                    v324 = *(_OWORD *)(v182 + 72);
                    v325 = *(_OWORD *)(v182 + 88);
                    v301 = *(_OWORD *)(v182 + 104);
                    v181 = 1;
                  }
                  if ( GeneratePointerMessageFromMouse(
                         (struct tagQMSG *)v342,
                         v252,
                         (struct tagQMSG *)NextSysMsg,
                         v255,
                         v253) )
                  {
                    v277[0] = v342[0];
                    v277[1] = v342[1];
                    v277[2] = v342[2];
                    v277[3] = v342[3];
                    v277[4] = v342[4];
                    v277[5] = v342[5];
                    v277[6] = v342[6];
                    v277[7] = v342[7];
                    v277[8] = v342[8];
                    v277[9] = v342[9];
                    *(_QWORD *)&v277[10] = *(_QWORD *)&v342[10];
                    v267 = 1;
                    if ( DWORD2(v342[1]) == 582 )
                    {
                      v183 = 0LL;
                      if ( v255 )
                        v183 = *(_QWORD *)v255;
                      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 448LL) = v183;
                    }
                    else if ( ((DWORD2(v342[1]) - 579) & 0xFFFFFFFB) == 0 )
                    {
                      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 448LL) = 0LL;
                    }
                  }
                  if ( !v253 )
                  {
LABEL_628:
                    v8 = v267;
                    goto LABEL_629;
                  }
                  *(_DWORD *)(NextSysMsg + 100) &= ~0x800u;
                }
                else
                {
                  if ( !v253 )
                    goto LABEL_628;
                  if ( IsMiPMouseMessage(*(_DWORD *)(NextSysMsg + 24)) )
                  {
                    if ( (unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(NextSysMsg + 120)) )
                    {
                      v184 = *(_DWORD **)(a1 + 1280);
                      if ( v184 )
                      {
                        if ( (*v184 & 2) == 0 && (*v184 & 4) == 0 )
                          goto LABEL_15;
                      }
                    }
                    v185 = *(_DWORD **)(a1 + 1280);
                    if ( v185 )
                      *v185 &= ~2u;
                  }
                }
LABEL_593:
                if ( !v253 )
                  goto LABEL_628;
                if ( (DWORD2(v341[1]) == 512 || DWORD2(v341[1]) == 160)
                  && (v255 ? (v186 = *(_QWORD *)v255) : (v186 = 0LL),
                      v186 != gMiPTracking
                   && (unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(NextSysMsg + 120))) )
                {
                  LOBYTE(v187) = 1;
                  v189 = HMValidateHandleNoSecure(gMiPTracking, v187, v188);
                  v190 = (__int64 *)v189;
                  if ( v189
                    && (unsigned int)IsMouseInPointerActive(*(_QWORD *)(v189 + 16))
                    && (GetMiPWindowFlags((struct tagWND *)v190) & 1) == 0 )
                  {
                    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                    v191 = v190[2];
                    if ( v191 == a1 )
                    {
                      v192 = *(_QWORD *)(a1 + 1280);
                      v333 = *(_OWORD *)(v192 + 24);
                      v334 = *(_OWORD *)(v192 + 40);
                      v335 = *(_OWORD *)(v192 + 56);
                      v336 = *(_OWORD *)(v192 + 72);
                      v337 = *(_OWORD *)(v192 + 88);
                      v338 = *(_OWORD *)(v192 + 104);
                      if ( v181 )
                      {
                        *(_OWORD *)(v192 + 24) = v303;
                        *(_OWORD *)(v192 + 40) = v322;
                        *(_OWORD *)(v192 + 56) = v323;
                        *(_OWORD *)(v192 + 72) = v324;
                        *(_OWORD *)(v192 + 88) = v325;
                        *(_OWORD *)(v192 + 104) = v301;
                        v192 = *(_QWORD *)(v298 + 1280);
                      }
                      v339 = ((*(_DWORD *)(v192 + 36) & 0xFFFFE1F7) << 16) | 1LL;
                      v311 = 0LL;
                      v312 = 0LL;
                      v313 = 0LL;
                      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
                      v311 = *(_QWORD *)(ThreadWin32Thread + 408);
                      *(_QWORD *)(ThreadWin32Thread + 408) = &v311;
                      v312 = v190;
                      HMLockObject(v190);
                      FindTimer((_DWORD)v190, 65523, 2, 1, 0LL);
                      xxxSendTransformableMessage(v190, 0x24Au, v339, 0LL, 0);
                      ThreadUnlock1(v195, v194, v196);
                      if ( v181 )
                      {
                        v197 = *(_QWORD *)(a1 + 1280);
                        *(_OWORD *)(v197 + 24) = v333;
                        *(_OWORD *)(v197 + 40) = v334;
                        *(_OWORD *)(v197 + 56) = v335;
                        *(_OWORD *)(v197 + 72) = v336;
                        *(_OWORD *)(v197 + 88) = v337;
                        *(_OWORD *)(v197 + 104) = v338;
                      }
                    }
                    else
                    {
                      PostEventMessageEx(
                        (struct tagTHREADINFO *)v191,
                        *(_QWORD *)(v191 + 424),
                        0x15u,
                        (__int64)v190,
                        0,
                        0LL,
                        0LL,
                        0LL);
                    }
                    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  }
                  v198 = v267;
                  if ( v267 && v255 )
                    gMiPTracking = *(_QWORD *)v255;
                  else
                    gMiPTracking = 0LL;
                }
                else
                {
                  v198 = v267;
                }
                if ( !v198 )
                {
                  v199 = v159 - 1;
                  if ( v199 )
                  {
                    if ( v199 == 1 )
                      *(_DWORD *)(*(_QWORD *)(a1 + 424) + 168LL) = 0;
                  }
                  else
                  {
                    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 160LL) = DWORD2(v277[1]);
                    *(_WORD *)(*(_QWORD *)(a1 + 424) + 164LL) = WORD1(v277[2]);
                    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 168LL) = gdtDblClk + LODWORD(v277[3]);
                    if ( v255 )
                      v200 = *(_QWORD *)v255;
                    else
                      v200 = 0LL;
                    *(_QWORD *)(*(_QWORD *)(a1 + 424) + 176LL) = v200;
                    *(_QWORD *)(*(_QWORD *)(a1 + 424) + 184LL) = *(_QWORD *)((char *)&v277[3] + 4);
                  }
                }
                v201 = (const struct tagQMSG *)v341;
                v8 = v267;
                if ( !v267 )
                  v201 = (const struct tagQMSG *)v277;
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                v202 = xxxMouseActivate((struct tagTHREADINFO *)a1, v255, v201, v262);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                if ( v202 == 1 )
                  goto LABEL_309;
LABEL_629:
                if ( v253 )
                {
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v277, 1u);
                  if ( v253 )
                  {
                    if ( v256
                      && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_BYTE *)(a1 + 672)) & 0x40) != 0 )
                    {
                      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                      xxxCallHook(6, v252, (__int64)&v291, 5);
                      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                    }
                  }
                }
                v94 = 0;
                v256 = 0;
                *((_QWORD *)&v261 + 1) = (LOWORD(v260.y) << 16) | LOWORD(v260.x);
                if ( v252 >= 0x200 )
                  *(_QWORD *)&v261 = (unsigned int)GetMouseKeyFlags(*(unsigned __int8 **)(a1 + 424));
                if ( (v252 - 171 <= 2 || v252 - 523 <= 2) && !v8 )
                  *(_QWORD *)&v261 = *(_QWORD *)&v277[2] | v261;
                v203 = *(_QWORD *)(a1 + 600);
                if ( v262 != 5
                  || !v253
                  || !v203
                  || (*(_DWORD *)(v203 + 8) & 0x100) == 0
                  || !*(_QWORD *)v203
                  || (**(_DWORD **)v203 & 1) == 0 )
                {
                  goto LABEL_649;
                }
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                  (MenuStateOwnerLockxxxUnlock *)v300,
                  (struct tagMENUSTATE *)v203);
                if ( (unsigned int)xxxCallHandleMenuMessages(v203, (_DWORD)v255, v252, v261, *((__int64 *)&v261 + 1)) )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v300);
                  goto LABEL_16;
                }
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v300);
LABEL_649:
                if ( !v8 )
                  goto LABEL_686;
                break;
              default:
                goto LABEL_519;
            }
            goto LABEL_650;
        }
      }
      if ( DWORD2(v277[1]) != 522 )
      {
        switch ( DWORD2(v277[1]) )
        {
          case 0x23:
            *(_QWORD *)&v261 = 0LL;
            *((_QWORD *)&v261 + 1) = *((_QWORD *)&v277[2] + 1);
            if ( v31 )
            {
              v42 = *(_QWORD *)(v31 + 16);
              if ( v42 != a1 )
              {
                if ( *(_QWORD *)(v42 + 424) == *(_QWORD *)(a1 + 424) )
                {
                  v43 = v263;
                  if ( !v263 )
                  {
                    v43 = *(_QWORD *)(v31 + 16);
                    LockExchangeW32Thread(v42, (__int64)v306);
                  }
                  goto LABEL_720;
                }
                goto LABEL_309;
              }
            }
            if ( !(unsigned int)MiPCheckMsgFilter((struct tagQMSG *)NextSysMsg, DWORD2(v277[1]), v266, a5) )
              goto LABEL_719;
            if ( !v253 )
              goto LABEL_686;
            goto LABEL_392;
          case 0xFE:
            goto LABEL_379;
          case 0xFF:
            v261 = v277[2];
            v84 = 0LL;
            v255 = 0LL;
            if ( *((_QWORD *)&v277[2] + 1) )
            {
              v85 = HMValidateHandle(*((unsigned __int64 *)&v277[2] + 1), 18);
              if ( v85 )
              {
                v84 = *(struct tagWND **)(v85 + 24);
                v255 = v84;
              }
              else
              {
                v84 = v255;
              }
            }
            if ( !v84 )
            {
              v86 = *(_QWORD *)(a1 + 424);
              v84 = *(struct tagWND **)(v86 + 120);
              v255 = v84;
              if ( !v84 )
              {
                v84 = *(struct tagWND **)(v86 + 128);
                v255 = v84;
                if ( !v84 )
                  goto LABEL_309;
              }
            }
            ThreadLockExchangeAlways(v84, &v288);
            if ( CheckCrossThreadInput(v255, (struct tagQMSG *)NextSysMsg, &v259, &v253, v269) )
              goto LABEL_719;
            if ( !v259 )
              goto LABEL_271;
            if ( *(_QWORD *)(*((_QWORD *)v255 + 2) + 424LL) != *(_QWORD *)(a1 + 424) )
              goto LABEL_309;
            if ( (unsigned int)IsInsideMenuLoop(a1) )
            {
              v87 = *(_QWORD *)(**(_QWORD **)(a1 + 600) + 8LL);
            }
            else
            {
              v88 = *(_QWORD *)(a1 + 664);
              if ( !v88 )
                goto LABEL_269;
              v87 = *(_QWORD *)(v88 + 16);
            }
            if ( v87 )
            {
              v255 = (struct tagWND *)v87;
              v259 = *(_QWORD *)(v87 + 16) != a1;
              ThreadLockExchangeAlways(v87, &v288);
            }
LABEL_269:
            if ( !v279 )
            {
              v279 = *((_QWORD *)v255 + 2);
              LockExchangeW32Thread(v279, (__int64)v308);
            }
LABEL_271:
            if ( !v266 && a5 == -1 )
              goto LABEL_279;
            if ( v266 <= a5 )
            {
              LOBYTE(v8) = v254;
              if ( v252 < v266 || v252 > a5 )
                goto LABEL_24;
            }
            else if ( v252 >= a5 && v252 <= v266 )
            {
              goto LABEL_23;
            }
LABEL_279:
            v89 = CheckPwndFilter(v255, *(_QWORD *)v270);
            LOBYTE(v8) = v254;
            if ( v89 )
            {
              if ( v259 )
                goto LABEL_719;
              if ( !v253 )
                goto LABEL_686;
              goto LABEL_392;
            }
            goto LABEL_24;
          case 0x100:
          case 0x104:
            v273 = 1;
            if ( (*(_DWORD *)(a1 + 480) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
              goto LABEL_719;
            v44 = *(_QWORD *)&v277[2];
            v45 = LOBYTE(v277[2]);
            *(_QWORD *)&v261 = LOBYTE(v277[2]);
            if ( v253 && (DWORD1(v277[6]) & 0x40000) != 0 )
              goto LABEL_119;
            if ( LOBYTE(v277[2]) != 18LL )
            {
              *(_DWORD *)(*(_QWORD *)(a1 + 424) + 396LL) &= 0xFFFFFFF3;
              v44 = *(_QWORD *)&v277[2];
              v45 = v261;
            }
            v46 = *(_BYTE *)(*(_QWORD *)(a1 + 424) + 240LL);
            v47 = v46 & 0x10;
            if ( v45 != 44 )
              goto LABEL_106;
            if ( (v46 & 0x10) == 0 )
            {
              if ( (*(_DWORD *)(a1 + 876) & 0x20) != 0 )
                goto LABEL_106;
LABEL_98:
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v277, 1u);
              if ( v47 || (DWORD2(v277[2]) & 0xFF0000) == 0x10000LL )
              {
                v48 = *(const struct tagWND **)(*(_QWORD *)(a1 + 424) + 128LL);
                v49 = v48 == 0LL;
                if ( !v48 )
                {
LABEL_104:
                  v11 = v257;
                  LOBYTE(v8) = v254;
                  if ( v49 )
                    goto LABEL_18;
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  v50 = HIDWORD(v277[7]) != 1;
                  v295 = *(_QWORD *)(a1 + 408);
                  *(_QWORD *)(a1 + 408) = &v295;
                  v296 = v48;
                  HMLockObject(v48);
                  xxxSnapWindow(v48, v50);
                  ThreadUnlock1(v52, v51, v53);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
LABEL_16:
                  v11 = v257;
                  goto LABEL_17;
                }
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                v48 = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v48);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
              }
              else
              {
                v48 = *(const struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL) + 24LL);
              }
              v49 = v48 == 0LL;
              goto LABEL_104;
            }
            if ( (*(_DWORD *)(a1 + 876) & 0x10) == 0 )
              goto LABEL_98;
LABEL_106:
            if ( gcHotKey && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
            {
              v54 = v45 | 0x400;
              if ( (v46 & 0x10) == 0 )
                v54 = v45;
              v55 = v54 | 0x200;
              if ( (v46 & 4) == 0 )
                v55 = v54;
              v56 = v55;
              LODWORD(v56) = v55 | 0x100;
              if ( (v46 & 1) == 0 )
                v56 = v55;
              v57 = HotKeyToWindow(v56);
              v58 = (__int64 *)v57;
              if ( v57 && *(_QWORD *)(a1 + 448) == *(_QWORD *)(*(_QWORD *)(v57 + 16) + 448LL) )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                PostTransformableMessage(*(struct tagWND **)(*(_QWORD *)(a1 + 424) + 128LL), 0x112u, 0xF150uLL, *v58, 0);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
LABEL_15:
                xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v277, 1u);
                goto LABEL_16;
              }
              v44 = *(_QWORD *)&v277[2];
              v45 = v261;
            }
LABEL_119:
            if ( v45 == 231 )
            {
              *(_WORD *)(a1 + 874) = WORD1(v44);
              v44 = 231LL;
            }
LABEL_122:
            v59 = (unsigned __int8)v44;
            *(_QWORD *)&v261 = (unsigned __int8)v44;
            if ( (unsigned __int8)v44 == 231LL )
              v44 = 231LL;
            *(_QWORD *)&v277[2] = v44;
            if ( v253 && (DWORD1(v277[6]) & 0x40000) != 0 || !LODWORD(WPP_MAIN_CB.Dpc.DpcData) )
            {
LABEL_141:
              if ( v59 == 121 )
                v252 |= 4u;
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 424) + 240LL) & 4) != 0 && v59 == 27 )
                v252 |= 4u;
              if ( (*(_DWORD *)(a1 + 480) & 8) == 0 )
                *((_QWORD *)&v277[2] + 1) &= ~0x2000000uLL;
LABEL_148:
              *(_QWORD *)&v261 = LOBYTE(v277[2]);
              v63 = *(_QWORD *)(a1 + 424);
              v64 = *(struct tagWND **)(v63 + 120);
              v255 = v64;
              if ( !*(_QWORD *)(v63 + 120) )
              {
                v64 = *(struct tagWND **)(v63 + 128);
                v255 = v64;
                if ( !v64 )
                  goto LABEL_309;
                if ( v252 - 256 <= 3 )
                  v252 += 4;
              }
              ThreadLockExchangeAlways(v64, &v288);
              if ( *((_QWORD *)v255 + 2) == a1 )
              {
                v259 = 0;
                goto LABEL_163;
              }
              v259 = 1;
              if ( *(_QWORD *)(*((_QWORD *)v255 + 2) + 424LL) != *(_QWORD *)(a1 + 424) )
                goto LABEL_309;
              if ( (unsigned int)IsInsideMenuLoop(a1) )
              {
                v65 = *(_QWORD *)(**(_QWORD **)(a1 + 600) + 8LL);
                goto LABEL_158;
              }
              v66 = *(_QWORD *)(a1 + 664);
              if ( v66 )
              {
                v65 = *(_QWORD *)(v66 + 16);
LABEL_158:
                if ( v65 )
                {
                  v255 = (struct tagWND *)v65;
                  v259 = *(_QWORD *)(v65 + 16) != a1;
                  ThreadLockExchangeAlways(v65, &v288);
                }
              }
              if ( !v284 )
              {
                v284 = *((_QWORD *)v255 + 2);
                LockExchangeW32Thread(v284, (__int64)v305);
              }
LABEL_163:
              if ( !v266 && a5 == -1 )
                goto LABEL_171;
              if ( v266 > a5 )
              {
                if ( v252 >= a5 && v252 <= v266 )
                {
                  v11 = v257;
                  goto LABEL_23;
                }
                goto LABEL_171;
              }
              v11 = v257;
              LOBYTE(v8) = v254;
              if ( v252 >= v266 && v252 <= a5 )
              {
LABEL_171:
                v67 = CheckPwndFilter(v255, *(_QWORD *)v270);
                v11 = v257;
                LOBYTE(v8) = v254;
                if ( v67 )
                {
                  if ( v259 )
                    goto LABEL_719;
                  if ( v253 )
                  {
                    if ( (DWORD1(v277[6]) & 0x40000) != 0 )
                      goto LABEL_196;
                    if ( !(unsigned int)IsInsideMenuLoop(a1) )
                    {
                      if ( (_QWORD)v261 == 93LL && v252 == 257 )
                      {
                        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                        v68 = 0LL;
                        if ( v255 )
                          v68 = *(_QWORD *)v255;
                        PostTransformableMessage(v255, 0x7Bu, v68, -1LL, 0);
                        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                      }
                      if ( (_QWORD)v261 == 112LL && v252 == 256 )
                      {
                        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                        PostMessage(v255, 77LL, 0LL);
                        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                      }
                    }
                  }
                  if ( (_QWORD)v261 == 16LL )
                  {
                    v69 = DWORD2(v277[2]) & 0x1000000;
                    if ( !v273 )
                    {
                      v70 = 1;
                      if ( (DWORD2(v277[2]) & 0x1000000) == 0 )
                        v70 = 4;
                      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 424) + 276LL) & (unsigned __int8)v70) != 0
                        && (unsigned int)IsDesktopApp(*(_QWORD *)(a1 + 416))
                        && (*(_DWORD *)(a1 + 480) & 8) == 0 )
                      {
                        *(_QWORD *)&v277[2] = (v69 != 0) + 160LL;
                        goto LABEL_15;
                      }
                    }
                  }
                  v287 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)v261 >> 2)
                                            + *(_QWORD *)(a1 + 424)
                                            + 236) & (1 << (2 * (v261 & 3)));
                  if ( v287 )
                  {
                    if ( !v253 )
                      goto LABEL_202;
                    if ( NextSysMsg > 1 )
                      *(_QWORD *)(NextSysMsg + 40) |= 0x40000000uLL;
                  }
LABEL_196:
                  if ( v253 )
                  {
                    if ( (DWORD1(v277[6]) & 0x40000) == 0 && NextSysMsg > 1 && (*(_DWORD *)(a1 + 1224) & 0x8000000) != 0 )
                    {
                      v71 = xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v277, 0);
                      v278 = v71;
                      goto LABEL_203;
                    }
                    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v277, 1u);
                  }
LABEL_202:
                  v71 = v278;
LABEL_203:
                  v72 = *((_QWORD *)&v277[2] + 1);
                  v261 = v277[2];
                  if ( v287 )
                  {
                    v72 = *((_QWORD *)&v277[2] + 1) | 0x40000000LL;
                    *((_QWORD *)&v261 + 1) = *((_QWORD *)&v277[2] + 1) | 0x40000000LL;
                  }
                  if ( v252 == 257 || v252 == 261 )
                  {
                    v72 |= 0x80000000uLL;
                    *((_QWORD *)&v261 + 1) = v72;
                  }
                  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 424) + 240LL) & 0x10) != 0 )
                    *((_QWORD *)&v261 + 1) = v72 | 0x20000000;
                  if ( (unsigned int)IsMenuStarted(a1) )
                    *((_QWORD *)&v261 + 1) |= 0x10000000uLL;
                  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 396LL) & 0x4000) != 0 )
                    *((_QWORD *)&v261 + 1) |= 0x8000000uLL;
                  if ( (v22 || gpImeHotKeyListHeader) && (DWORD1(v277[6]) & 0x40000) == 0 )
                  {
                    if ( !v253 )
                      goto LABEL_243;
                    if ( !(unsigned int)IsMenuStarted(a1) && (*(_DWORD *)(a1 + 480) & 0x2000000) == 0 && v255 )
                    {
                      v73 = v261;
                      if ( (_QWORD)v261 == 231LL )
                        v73 = 231;
                      *(_QWORD *)(a1 + 1240) = *((_QWORD *)&v277[7] + 1);
                      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                      v74 = xxxImmProcessKey(*(_QWORD *)(a1 + 424), (__int64 *)v255, v252, v73, *((__int64 *)&v261 + 1));
                      v75 = v74;
                      v276 = v74;
                      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                      if ( (v75 & 0x11) != 0 )
                      {
                        if ( v71 )
                          FreeQEntry(v71);
                        v278 = 0LL;
                        goto LABEL_309;
                      }
                    }
                  }
                  if ( !v253 )
                    goto LABEL_243;
                  v268 = 1;
                  v76 = 0;
                  if ( (DWORD1(v277[6]) & 0x40000) != 0 )
                    goto LABEL_242;
                  v77 = *(_QWORD *)(a1 + 424);
                  v78 = *(_QWORD *)(v77 + 416);
                  *(_QWORD *)(v77 + 416) = *((_QWORD *)&v277[4] + 1);
                  *(_QWORD *)(a1 + 1240) = *((_QWORD *)&v277[7] + 1);
                  KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
                    (KeyboardInputTelemetry *)&gKeyboardInputTelemetry,
                    *(_DWORD *)(*(_QWORD *)a1 + 1616LL));
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  v76 = xxxCallCtfHook(2, v276 & 2, v261, *((__int128 **)&v261 + 1));
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                  *(_QWORD *)(*(_QWORD *)(a1 + 424) + 416LL) = v78;
                  if ( !v71 )
                    goto LABEL_241;
                  if ( (unsigned int)(v76 - 2) > 1
                    || (*(_DWORD *)(a1 + 1224) & 0x10000000) != 0
                    || !AllocQEntryEx((struct tagMLIST *)(*(_QWORD *)(a1 + 424) + 24LL), v71, 1) )
                  {
                    FreeQEntry(v71);
                    v278 = 0LL;
LABEL_241:
                    KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
                      (KeyboardInputTelemetry *)&gKeyboardInputTelemetry,
                      *(_DWORD *)(*(_QWORD *)a1 + 1616LL),
                      ((DWORD2(v277[1]) - 257) & 0xFFFFFFFB) == 0);
LABEL_242:
                    if ( !v76 )
                    {
LABEL_243:
                      if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_BYTE *)(a1 + 672)) & 8) == 0 )
                        goto LABEL_248;
                      v268 = 1;
                      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                      v80 = 3;
                      if ( v253 )
                        v80 = 0;
                      if ( !(unsigned int)xxxCallHook(v80, v261, *((__int64 *)&v261 + 1), 2) )
                      {
                        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
LABEL_248:
                        if ( v268
                          && v253
                          && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_BYTE *)(a1 + 672)) & 0x40) != 0 )
                        {
                          CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                          v81 = (__int128 *)*((_QWORD *)&v261 + 1);
                          v82 = v261;
                          v83 = 7;
                          goto LABEL_252;
                        }
                        goto LABEL_686;
                      }
LABEL_308:
                      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
                    }
LABEL_309:
                    v94 = v256;
                    goto LABEL_310;
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v79) = 4;
                    WPP_RECORDER_SF_qqq(
                      (__int64)gFullLog,
                      v79,
                      0x12u,
                      0x20u,
                      (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 24LL),
                      *(_QWORD *)(a1 + 424),
                      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL));
                  }
                  *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 24LL);
                  if ( v76 == 2 )
                  {
                    v11 = 1;
                  }
                  else
                  {
                    v11 = v257;
                    if ( v76 == 3 )
                      v11 = 2;
                  }
                  v257 = v11;
                  DeferSysPeekMsg(a1, v11);
                  v278 = 0LL;
LABEL_23:
                  LOBYTE(v8) = v254;
                }
              }
              goto LABEL_24;
            }
            if ( (GetAppImeCompatFlags(0LL) & 0x800000) != 0 )
              goto LABEL_140;
            if ( BYTE10(v277[2]) != 41 )
              goto LABEL_140;
            if ( !v253 )
              goto LABEL_140;
            v60 = *(_QWORD *)(a1 + 424);
            if ( (*(_BYTE *)(v60 + 240) & 0x15) != 0
              || (*(_BYTE *)(v60 + 258) & 0x40) != 0
              || (*(_BYTE *)(v60 + 259) & 1) != 0 )
            {
              goto LABEL_140;
            }
            v61 = *(_QWORD *)(v60 + 120);
            v255 = (struct tagWND *)v61;
            v62 = v61;
            if ( !v61 )
            {
              v61 = *(_QWORD *)(v60 + 128);
              v255 = (struct tagWND *)v61;
              v62 = v61;
            }
            if ( v62 && *(_QWORD *)(v61 + 16) != a1 )
            {
LABEL_140:
              v59 = v261;
              goto LABEL_141;
            }
            xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v277, 1u);
            v11 = v257;
            LOBYTE(v8) = v254;
            if ( !v273 && v255 )
            {
              v326 = *(_QWORD *)v255;
              v327 = 80;
              v328 = 0LL;
              v329 = 0LL;
              v330 = 0LL;
              v331 = 0LL;
              v332 = 0;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
              xxxCallCtfHook(3, 0, 1LL, (__int128 *)&v326);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
              goto LABEL_17;
            }
            break;
          case 0x101:
          case 0x105:
            v44 = *(_QWORD *)&v277[2];
            goto LABEL_122;
          case 0x102:
            goto LABEL_148;
          case 0x119:
          case 0x11B:
            goto LABEL_374;
          default:
            goto LABEL_394;
        }
        goto LABEL_18;
      }
LABEL_300:
      if ( (*(_DWORD *)(a1 + 480) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
        goto LABEL_719;
      if ( (unsigned int)IsInsideMenuLoop(a1) )
        goto LABEL_309;
      if ( (DWORD1(v277[6]) & 0x400000) != 0 )
      {
        v92 = *(struct tagWND **)(*(_QWORD *)(a1 + 424) + 120LL);
        v255 = v92;
      }
      else
      {
        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
        if ( v255 && (unsigned int)IsCompositionInputWindowForHitTest(v255) )
        {
          v93 = 1;
          if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v255) )
            goto LABEL_308;
          ThreadDesktopWindow = v255;
        }
        else
        {
          ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(0LL);
          v255 = ThreadDesktopWindow;
          v93 = 0;
        }
        v301 = 0uLL;
        v302 = 0LL;
        v98 = W32GetThreadWin32Thread(KeGetCurrentThread());
        *(_QWORD *)&v301 = *(_QWORD *)(v98 + 408);
        *(_QWORD *)(v98 + 408) = &v301;
        *((_QWORD *)&v301 + 1) = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          HMLockObject(ThreadDesktopWindow);
        v99 = xxxDCEWindowHitTest(
                (_DWORD)v255,
                512,
                v277[2],
                DWORD2(v277[2]),
                *(__int64 *)&v277[5],
                (__int64)&v262,
                8 * v93 + 1);
        LOBYTE(v100) = 1;
        v255 = (struct tagWND *)HMValidateHandleNoSecure(v99, v100, v101);
        LOBYTE(v102) = 1;
        v104 = (struct tagWND *)HMValidateHandleNoSecure(v99, v102, v103);
        InputTraceLogging::Mouse::SecondaryHitTest(
          (const struct tagQMSG *)v277,
          (const struct tagPOINT *)&v277[5],
          v104);
        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
        ThreadUnlock1(v106, v105, v107);
        v92 = v255;
      }
      if ( !v92 )
        goto LABEL_309;
      ThreadLockExchangeAlways(v92, &v288);
      if ( *((_QWORD *)v255 + 2) == a1 )
      {
        v259 = 0;
      }
      else
      {
        v259 = 1;
        v108 = *((_QWORD *)v255 + 2);
        if ( *(_QWORD *)(v108 + 424) != *(_QWORD *)(a1 + 424) )
          goto LABEL_309;
        if ( !v284 )
        {
          v284 = *((_QWORD *)v255 + 2);
          LockExchangeW32Thread(v108, (__int64)v305);
        }
      }
      v109 = MiPCheckMsgFilter((struct tagQMSG *)NextSysMsg, v252, v266, a5);
      v11 = v257;
      LOBYTE(v8) = v254;
    }
    while ( !v109 || !(unsigned int)CheckPwndFilter(v255, *(_QWORD *)v270) );
    if ( v259 )
      goto LABEL_719;
    if ( !NextSysMsg || !(unsigned int)IsMouseInPointerActive(a1) )
      goto LABEL_353;
    if ( (*(_DWORD *)(NextSysMsg + 100) & 0x800) == 0 )
    {
      if ( !v253 )
        goto LABEL_355;
      if ( !IsMiPMouseMessage(*(_DWORD *)(NextSysMsg + 24)) )
        goto LABEL_353;
      if ( !(unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(NextSysMsg + 120))
        || (v112 = *(_DWORD **)(a1 + 1280)) == 0LL
        || (*v112 & 2) != 0
        || (*v112 & 4) != 0 )
      {
        v113 = *(_DWORD **)(a1 + 1280);
        if ( v113 )
          *v113 &= ~2u;
LABEL_353:
        if ( v253 )
          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v277, 1u);
LABEL_355:
        MouseKeyFlags = GetMouseKeyFlags(*(unsigned __int8 **)(a1 + 424));
        v261 = v277[2] | MouseKeyFlags;
        v260.x = SWORD4(v277[2]);
        v260.y = SWORD5(v277[2]);
        PhysicalToLogicalDPIPointWithHitTest(&v260, &v260, 0LL, v255);
        *((_QWORD *)&v261 + 1) = (LOWORD(v260.y) << 16) | LOWORD(v260.x);
        *(struct tagPOINT *)((char *)&v277[3] + 4) = v260;
        *(struct tagPOINT *)&v291 = v260;
        if ( v255 )
          *((_QWORD *)&v291 + 1) = *(_QWORD *)v255;
        else
          *((_QWORD *)&v291 + 1) = 0LL;
        LODWORD(v292) = 0;
        v293 = *((_QWORD *)&v277[4] + 1);
        LODWORD(v294) = v277[2];
        if ( v253 )
        {
          v94 = 1;
          v256 = 1;
          CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
          if ( (unsigned int)xxxCallCtfHook(7, 0, v252, &v291) )
          {
LABEL_543:
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
            goto LABEL_310;
          }
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
        }
        else
        {
          v94 = v256;
        }
        if ( ((*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_DWORD *)(a1 + 672)) & 0x100) != 0 )
        {
          v94 = 1;
          v256 = 1;
          CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
          if ( (unsigned int)xxxCallMouseHook(v252, &v291, (unsigned int)v253) )
            goto LABEL_543;
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
        }
        if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
          goto LABEL_370;
        v115 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 472);
        v264 = 0;
        v264 = *(_QWORD *)(v115 + 248) != 0LL;
        if ( !v264 )
          goto LABEL_370;
        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
        if ( xxxClientCallLocalMouseHooks(v252, &v291, (unsigned int)v253) )
          goto LABEL_543;
        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
LABEL_370:
        if ( v94
          && v253
          && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_BYTE *)(a1 + 672)) & 0x40) != 0 )
        {
          CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
          v82 = v252;
          v81 = &v291;
          v83 = 6;
LABEL_252:
          xxxCallHook(v83, v82, (__int64)v81, 5);
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
        }
LABEL_686:
        if ( *(_QWORD *)(a1 + 756) != *(_QWORD *)((char *)&v277[3] + 4) )
          *(_DWORD *)(a1 + 480) |= 0x100000u;
        if ( NextSysMsg > 1 && (BYTE4(v277[6]) & 0x20) != 0 )
        {
          if ( *(_DWORD *)(NextSysMsg + 24) == 512 )
          {
            if ( v255 )
              v215 = *(_QWORD *)v255;
            else
              v215 = 0LL;
            *(_QWORD *)(NextSysMsg + 16) = v215;
            *(_DWORD *)(NextSysMsg + 100) |= 0x400u;
          }
          *(_QWORD *)(NextSysMsg + 64) = *((_QWORD *)&v261 + 1);
        }
        *(_QWORD *)(a1 + 756) = *(_QWORD *)((char *)&v277[3] + 4);
        *(_DWORD *)(a1 + 764) = *(_DWORD *)(*((_QWORD *)v255 + 5) + 288LL);
        *(_QWORD *)(a1 + 768) = *(_QWORD *)&v277[5];
        *(_DWORD *)(a1 + 560) = v277[3];
        *(_QWORD *)(*(_QWORD *)(a1 + 424) + 416LL) = *((_QWORD *)&v277[4] + 1);
        *(_QWORD *)(*(_QWORD *)(a1 + 424) + 80LL) = 1LL;
        *(_QWORD *)(a1 + 568) = 1LL;
        *(_QWORD *)(a1 + 1240) = *((_QWORD *)&v277[7] + 1);
        *(_DWORD *)(a1 + 1288) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( *(_DWORD *)(a1 + 1244) == 1 )
          *(_DWORD *)(a1 + 1224) |= 0x20000u;
        else
          *(_DWORD *)(a1 + 1224) &= ~0x20000u;
        **(_DWORD **)(a1 + 440) &= ~8u;
        **(_QWORD **)(a1 + 472) &= 0x7FFFFFFFuLL;
        if ( v253 )
        {
          v216 = *(_QWORD **)(a1 + 472);
          if ( (BYTE4(v277[6]) & 1) != 0 )
            *v216 |= 0x1000uLL;
          else
            *v216 &= ~0x1000uLL;
        }
        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
        TransferWakeBit(a1, v252);
        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
        ClearWakeBit(a1, 31751, 1);
        v217 = v253;
        if ( v253 )
        {
          if ( v267 )
          {
            v218 = *(_DWORD **)(a1 + 1280);
            if ( v218 )
            {
              if ( (*v218 & 1) != 0 && (*v218 & 4) != 0 )
              {
                SetMiPWakeBit((struct tagTHREADINFO *)a1);
                v217 = v253;
              }
            }
          }
        }
        if ( v255 )
          v10 = *(_QWORD *)v255;
        v219 = v299;
        *(_QWORD *)v299 = v10;
        *((_DWORD *)v219 + 2) = v252;
        v220 = v261;
        if ( (v276 & 2) != 0 )
          v220 = 229LL;
        *((_QWORD *)v219 + 2) = v220;
        *((_QWORD *)v219 + 3) = *((_QWORD *)&v261 + 1);
        *((_DWORD *)v219 + 8) = v277[3];
        *(_QWORD *)((char *)v219 + 36) = *(_QWORD *)((char *)&v277[3] + 4);
        InputTraceLogging::Delivery::ScanSysQueue(
          (const struct tagQMSG *)v277,
          v219,
          (const struct tagTHREADINFO *)a1,
          v217 != 0);
        if ( v253 )
        {
          EtwTraceInputProcessDelay(a1);
          *(_DWORD *)(*(_QWORD *)(a1 + 424) + 424LL) = (MEMORY[0xFFFFF78000000320]
                                                      * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v221 = *((_DWORD *)v219 + 2);
          if ( v221 == 256 )
          {
            *(_DWORD *)(a1 + 1344) |= 1u;
            *(_QWORD *)(a1 + 1328) = *(_QWORD *)(a1 + 1240);
            *(_DWORD *)(a1 + 1320) = *((unsigned __int16 *)v219 + 13);
            *(_DWORD *)(a1 + 1324) = *((_DWORD *)v219 + 4);
            *(_QWORD *)(a1 + 1336) = *(_QWORD *)&v277[9];
          }
          else if ( ((v221 - 257) & 0xFFFFFFFB) == 0 )
          {
            *(_DWORD *)(a1 + 1344) &= ~1u;
          }
        }
        EtwTraceRetrieveInputMessage(v219, (unsigned int)v253);
        PopAndFreeW32ThreadLock((__int64)v307, v222, v223);
        PopAndFreeW32ThreadLock((__int64)v308, v224, v225);
        PopAndFreeW32ThreadLock((__int64)v309, v226, v227);
        PopAndFreeW32ThreadLock((__int64)v306, v228, v229);
        PopAndFreeW32ThreadLock((__int64)v305, v230, v231);
        ThreadUnlock1(v233, v232, v234);
        CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
        return 1LL;
      }
      xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v277, 1u);
LABEL_17:
      LOBYTE(v8) = v254;
      goto LABEL_18;
    }
    memset(v343, 0, 0xA8uLL);
    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
    CMultiPerObjectLockExclusive<1>::CMultiPerObjectLockExclusive<1>(&v271, (char *)v255 + 56);
    HasTransform = InputTransform::HasTransform(v255, v110);
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
    if ( !HasTransform )
      *(_DWORD *)(NextSysMsg + 100) &= ~0x2000u;
    if ( !GeneratePointerMessageFromMouse((struct tagQMSG *)v343, v252, (struct tagQMSG *)NextSysMsg, v255, v253) )
    {
      if ( v253 )
      {
        *(_DWORD *)(NextSysMsg + 100) &= ~0x800u;
        goto LABEL_353;
      }
      goto LABEL_355;
    }
    v277[0] = v343[0];
    v277[1] = v343[1];
    v277[2] = v343[2];
    v277[3] = v343[3];
    v277[4] = v343[4];
    v277[5] = v343[5];
    v277[6] = v343[6];
    v277[7] = v343[7];
    v277[8] = v343[8];
    v277[9] = v343[9];
    *(_QWORD *)&v277[10] = *(_QWORD *)&v343[10];
    v8 = 1;
    v267 = 1;
    v94 = v256;
    if ( v253 )
      *(_DWORD *)(NextSysMsg + 100) &= ~0x800u;
LABEL_650:
    v41 = DWORD2(v277[1]);
LABEL_651:
    if ( ((DWORD2(v277[7]) - 2) & 0xFFFFFFCF) == 0 && DWORD2(v277[7]) != 50 )
    {
      v252 = v41;
      v261 = v277[2];
LABEL_654:
      if ( v253 )
      {
        if ( (unsigned int)IsMouseInPointerActive(a1) && v8 )
        {
          v204 = 0LL;
          if ( v255 )
            v204 = *(_QWORD *)v255;
          *(_QWORD *)(*(_QWORD *)(a1 + 1280) + 48LL) = v204;
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1280) + 36LL) & 0x400000) != 0 )
          {
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
            v205 = IsCompositionInputWindow(v255);
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
            if ( !v205 )
              *(_DWORD *)(*(_QWORD *)(a1 + 1280) + 36LL) &= ~0x400000u;
          }
          MiPWindowFlags = GetMiPWindowFlags(v255);
          SetMiPWindowFlags(v255, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
          if ( ((DWORD2(v277[1]) - 578) & 0xFFFFFFFB) != 0 )
          {
            if ( ((DWORD2(v277[1]) - 579) & 0xFFFFFFFB) == 0 )
              **(_DWORD **)(a1 + 1280) &= ~8u;
          }
          else
          {
            v212 = 0;
            if ( DWORD2(v277[1]) == 578 )
              v212 = 8;
            **(_DWORD **)(a1 + 1280) = v212 | **(_DWORD **)(a1 + 1280) & 0xFFFFFFF7;
          }
        }
        else
        {
          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v277, 1u);
        }
      }
      if ( CTouchProcessor::IsPointerMessageTouchpad(
             gpTouchProcessor,
             (struct tagTHREADINFO *)a1,
             *((unsigned __int64 *)&v277[2] + 1),
             v8) )
      {
        if ( !v253
          && !(unsigned int)IsPTPAllowedOnThread(
                              (struct tagTHREADINFO *)a1,
                              DWORD2(v277[1]),
                              *(unsigned __int64 *)&v277[2]) )
        {
          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v277, 1u);
        }
        v213 = IsStatelessPointerInputMessage(v252);
        v214 = *((_QWORD *)&v261 + 1);
        if ( v213 )
          v214 = -1LL;
        *((_QWORD *)&v261 + 1) = v214;
      }
      goto LABEL_686;
    }
    EtwTraceBeginPointerMessageRetrieve(NextSysMsg, LOWORD(v277[2]), v41);
    v207 = (unsigned int)xxxRetrievePointerInputMessage(
                           a1,
                           v270[0],
                           v266,
                           a5,
                           1,
                           0,
                           &v253,
                           (struct tagQMSG *)NextSysMsg,
                           (__int64)&v255,
                           (__int64)&v252,
                           (__int64)&v261,
                           (__int64)&v261 + 8,
                           &v259,
                           v269,
                           (int)&v251);
    InputTraceLogging::Pointer::RetrieveMessage(NextSysMsg, 0LL, v207);
    EtwTraceEndPointerMessageRetrieve(NextSysMsg, LOWORD(v277[2]), DWORD2(v277[1]));
    v208 = v255;
    if ( v255 )
    {
      ThreadLockExchange(v255, &v288);
      v208 = v255;
    }
    v209 = v207 - 1;
    if ( !v209 )
      goto LABEL_654;
    v210 = v209 - 1;
    if ( !v210 )
      break;
    v211 = v210 - 1;
    if ( !v211 )
    {
      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
      xxxDefPointerProc(v255, DWORD2(v277[1]), *(_QWORD *)&v277[2], *((_QWORD *)&v277[2] + 1));
      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
      *v269 = 0LL;
      goto LABEL_310;
    }
    *v269 = 0LL;
    if ( v211 == 1 )
    {
      v11 = v257;
      goto LABEL_23;
    }
LABEL_310:
    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v277, 1u);
    if ( v94 )
    {
      v95 = *(_QWORD *)(a1 + 456);
      v20 = (unsigned int)(*(_DWORD *)(a1 + 672) | *(_DWORD *)(*(_QWORD *)v95 + 16LL));
      if ( ((*(_BYTE *)(a1 + 672) | *(_BYTE *)(*(_QWORD *)v95 + 16LL)) & 0x40) != 0 )
      {
        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
        xxxCallHook(6, v252, (__int64)&v291, 5);
        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
      }
      v256 = 0;
    }
    if ( v268 )
    {
      v96 = *(_QWORD *)(a1 + 456);
      v20 = (unsigned int)(*(_DWORD *)(a1 + 672) | *(_DWORD *)(*(_QWORD *)v96 + 16LL));
      if ( ((*(_BYTE *)(a1 + 672) | *(_BYTE *)(*(_QWORD *)v96 + 16LL)) & 0x40) != 0 )
      {
        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
        xxxCallHook(7, v261, *((__int64 *)&v261 + 1), 5);
        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
      }
      v268 = 0;
    }
    v11 = v257;
    LOBYTE(v8) = v254;
    if ( v253 )
      goto LABEL_17;
  }
  if ( v259 )
  {
    v285 = *((_QWORD *)v208 + 2);
    LockExchangeW32Thread(v285, (__int64)v307);
  }
LABEL_719:
  v43 = v263;
LABEL_720:
  v235 = &WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids;
  *(_QWORD *)(*(_QWORD *)(a1 + 424) + 80LL) = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v235) = 4;
    WPP_RECORDER_SF_qq(
      (__int64)gFullLog,
      (__int64)v235,
      0x12u,
      0x21u,
      (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
      *(_QWORD *)(a1 + 424),
      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 72LL));
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 424) + 72LL) = 0LL;
  **(_DWORD **)(a1 + 440) &= ~1u;
  v236 = v284;
  v237 = v279;
  if ( v284 || v43 || v286 || v279 || v285 )
  {
    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
    CMultiPerObjectLockExclusive<7>::CMultiPerObjectLockExclusive<7>((__int64)v272);
    if ( v236 )
    {
      SetWakeBit(v236, 0x4001u);
      ClearWakeBit(a1, 16385, 0);
    }
    if ( v43 )
    {
      SetWakeBit(v43, 0x4006u);
      ClearWakeBit(a1, 16390, 0);
    }
    if ( v237 )
    {
      SetWakeBit(v237, 0x4400u);
      ClearWakeBit(a1, 17408, 0);
    }
    if ( v285 )
    {
      SetWakeBit(v285, 0x5000u);
      ClearWakeBit(a1, 20480, 0);
    }
    if ( v286 )
    {
      SetWakeBit(v286, 0x2040u);
      ClearWakeBit(a1, 0x2000, 0);
    }
    else if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 456) + 56LL) )
    {
      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
      *(_WORD *)(*(_QWORD *)(a1 + 440) + 8LL) |= *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) & 0x5C07;
      ClearWakeBit(a1, 23559, 0);
      *(_WORD *)(*(_QWORD *)(a1 + 440) + 4LL) &= 0xA3F8u;
      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
    }
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 440) + 8LL) = 0;
    ClearWakeBit(a1, 31751, 1);
  }
  PopAndFreeW32ThreadLock((__int64)v307, v238, v239);
  PopAndFreeW32ThreadLock((__int64)v308, v240, v241);
  PopAndFreeW32ThreadLock((__int64)v309, v242, v243);
  PopAndFreeW32ThreadLock((__int64)v306, v244, v245);
  PopAndFreeW32ThreadLock((__int64)v305, v246, v247);
  ThreadUnlock1(v249, v248, v250);
LABEL_742:
  CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)&v251);
  return 0LL;
}
