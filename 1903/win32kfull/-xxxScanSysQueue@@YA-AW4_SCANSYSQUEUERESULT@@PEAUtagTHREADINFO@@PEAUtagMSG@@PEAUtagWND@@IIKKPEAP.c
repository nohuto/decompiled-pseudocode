/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C009BCF0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@W4ISOD_INPUTROUTING@@@Z @ 0x1C0006244 (-DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@W4ISOD_INPUTROUTING@@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C0010510 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C0010648 (FreeQEntry.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00107FC (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0010BDC (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     IsInsideMenuLoop @ 0x1C001197C (IsInsideMenuLoop.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0011D7C (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C0016A74 (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     xxxTrackMouseMove @ 0x1C001C4B4 (xxxTrackMouseMove.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C001E4D8 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     PtiMouseFromQ @ 0x1C001E774 (PtiMouseFromQ.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0023720 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C0024334 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C00244D0 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     PostEventMessageEx @ 0x1C0025670 (PostEventMessageEx.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00258DC (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002E7F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C0079414 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 *     GetMouseKeyFlags @ 0x1C0083C88 (GetMouseKeyFlags.c)
 *     _PostTransformableMessage @ 0x1C0087904 (_PostTransformableMessage.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0088CD8 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C008A4B4 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C008AB44 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     TransferWakeBit @ 0x1C009A67C (TransferWakeBit.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxCallCtfHook @ 0x1C00AA118 (xxxCallCtfHook.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     xxxImmProcessKey @ 0x1C00B185C (xxxImmProcessKey.c)
 *     GetAppImeCompatFlags @ 0x1C00B1B38 (GetAppImeCompatFlags.c)
 *     xxxSendTransformableMessage @ 0x1C00C3130 (xxxSendTransformableMessage.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00C82C4 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C00C8310 (xxxDCEWindowHitTestIndirect.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00C8C80 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 *     IsThreadDesktopComposed @ 0x1C00C94A0 (IsThreadDesktopComposed.c)
 *     LockExchangeW32Thread @ 0x1C00CF71C (LockExchangeW32Thread.c)
 *     ??$?0UtagObjLock@@U0@U0@U0@U0@U0@U0@@?$CMultiPerObjectLockExclusive@$06@@QEAA@AEAUtagObjLock@@000000@Z @ 0x1C00CF768 (--$-0UtagObjLock@@U0@U0@U0@U0@U0@U0@@-$CMultiPerObjectLockExclusive@$06@@QEAA@AEAUtagObjLock@@00.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     DelQEntry @ 0x1C00CFB78 (DelQEntry.c)
 *     xxxProcessEventMessage @ 0x1C00CFC24 (xxxProcessEventMessage.c)
 *     ?ShouldDeferMessage@@YA_NW4ISOD_INPUTROUTING@@I@Z @ 0x1C00D0900 (-ShouldDeferMessage@@YA_NW4ISOD_INPUTROUTING@@I@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     ClearWakeBit @ 0x1C00D0A20 (ClearWakeBit.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiPtiQ@@@Z @ 0x1C00D0ADC (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1PEAVCMultiPerObjectLockExclusivePpiP.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00D0C3C (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C00D0E60 (LockW32Thread.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00ECE48 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C01096A0 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     xxxDCEWindowHitTest @ 0x1C010AC5C (xxxDCEWindowHitTest.c)
 *     GetThreadDesktopWindow @ 0x1C010B1CC (GetThreadDesktopWindow.c)
 *     ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C010B240 (-MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z.c)
 *     IsMouseInPointerActive @ 0x1C010B2B4 (IsMouseInPointerActive.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C010EA90 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C0110F34 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ThreadLockExchange @ 0x1C0117610 (ThreadLockExchange.c)
 *     FindNCHitEx @ 0x1C0118398 (FindNCHitEx.c)
 *     IsHiddenByInputService @ 0x1C011BBC0 (IsHiddenByInputService.c)
 *     CheckPwndFilter @ 0x1C011C26C (CheckPwndFilter.c)
 *     xxxWindowHitTest @ 0x1C011EBCC (xxxWindowHitTest.c)
 *     ThreadLockExchangeAlways @ 0x1C011EE8C (ThreadLockExchangeAlways.c)
 *     IsMenuStarted @ 0x1C01230E8 (IsMenuStarted.c)
 *     ?IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z @ 0x1C0124C60 (-IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?RedirectForCapture@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEAUHWND__@@@Z @ 0x1C012D240 (-RedirectForCapture@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@PEAUHWND__@@@Z.c)
 *     xxxCallMouseHook @ 0x1C0137100 (xxxCallMouseHook.c)
 *     xxxSnapWindow @ 0x1C015CA8C (xxxSnapWindow.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     IsStatelessPointerInputMessage @ 0x1C01CD7D0 (IsStatelessPointerInputMessage.c)
 *     ??$?0UtagObjLock@@@?$CMultiPerObjectLockExclusive@$00@@QEAA@AEAUtagObjLock@@@Z @ 0x1C01D60E4 (--$-0UtagObjLock@@@-$CMultiPerObjectLockExclusive@$00@@QEAA@AEAUtagObjLock@@@Z.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D6108 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E14E0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01E1540 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01E1B18 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01E1E10 (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01E2BF4 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01E2D68 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01E2D94 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     SetMiPPromotion @ 0x1C01E3AC0 (SetMiPPromotion.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01E72A0 (PhysicalToLogicalInPlacePointWithParent.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01F1588 (xxxRetrievePointerInputMessage.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01F1F00 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?HasTransform@InputTransform@@YAHPEAUtagWND@@@Z @ 0x1C01F6818 (-HasTransform@InputTransform@@YAHPEAUtagWND@@@Z.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C01F8A34 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 *     GetPenDoubleClickTime @ 0x1C01F8FB0 (GetPenDoubleClickTime.c)
 *     xxxClientCallLocalMouseHooks @ 0x1C021E220 (xxxClientCallLocalMouseHooks.c)
 *     xxxCallHandleMenuMessages @ 0x1C02230F0 (xxxCallHandleMenuMessages.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1C023E7A0 (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     xxxDefPointerProc @ 0x1C024064C (xxxDefPointerProc.c)
 *     HotKeyToWindow @ 0x1C0240900 (HotKeyToWindow.c)
 *     _W32ExceptionHandler @ 0x1C0259A94 (_W32ExceptionHandler.c)
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
  __int64 v10; // r12
  int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  _DWORD *v26; // rax
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 NextSysMsg; // r15
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r9
  __int64 v38; // r10
  __int64 v39; // rbx
  bool v40; // zf
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // rax
  int v55; // ebx
  const struct tagWND *v56; // rdi
  bool v57; // zf
  BOOL v58; // ebx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  unsigned int v62; // ecx
  unsigned int v63; // edx
  __int64 v64; // rcx
  __int64 v65; // rax
  __int64 *v66; // rbx
  __int64 v67; // r8
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rax
  struct tagWND *v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rcx
  int v75; // eax
  unsigned __int64 v76; // r8
  __int64 v77; // rbx
  char v78; // al
  unsigned int *v79; // rsi
  __int64 v80; // rdx
  unsigned __int16 v81; // bx
  int v82; // eax
  char v83; // bl
  int v84; // edi
  __int64 v85; // rcx
  __int64 v86; // rbx
  __int64 v87; // rdx
  int v88; // ecx
  __int64 *v89; // r8
  unsigned __int64 v90; // rdx
  int v91; // ecx
  struct tagWND *v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rcx
  int v97; // eax
  int InteractiveControlInputMessage; // ebx
  int v99; // ebx
  struct tagWND *v100; // rcx
  int v101; // edi
  __int64 v102; // rdx
  __int64 v103; // r8
  __int64 v104; // r9
  int v105; // edi
  __int64 v106; // rax
  __int64 v107; // rax
  struct tagWND *ThreadDesktopWindow; // rbx
  __int64 v109; // rax
  unsigned __int64 v110; // rbx
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  struct tagWND *v117; // rax
  __int64 v118; // rdx
  __int64 v119; // rcx
  __int64 v120; // r8
  __int64 v121; // rcx
  int v122; // eax
  struct tagWND *v123; // rdx
  int HasTransform; // ebx
  _DWORD *v125; // rax
  _DWORD *v126; // rax
  unsigned int MouseKeyFlags; // eax
  __int64 v128; // rdx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rcx
  char *v132; // rax
  char v133; // cl
  int v134; // eax
  unsigned int v135; // edx
  unsigned int v136; // r8d
  int v137; // ecx
  int v138; // eax
  int v139; // edi
  __int64 v140; // rax
  HWND *v141; // rdx
  struct tagWND *v142; // rbx
  int v143; // eax
  __int64 v144; // r9
  HWND v145; // rbx
  __int64 v146; // rdx
  __int64 v147; // r8
  __int64 v148; // r9
  struct tagWND *v149; // rax
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // r8
  __int64 v153; // r9
  __int64 v154; // rcx
  __int64 v155; // rax
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // rax
  int v159; // ebx
  unsigned int v160; // ebx
  int v161; // ebx
  __int64 v162; // rcx
  int v163; // eax
  struct tagWND *v164; // r9
  __int64 v165; // rcx
  __int64 v166; // rdx
  __int64 v167; // r8
  __int64 v168; // r9
  unsigned __int64 v169; // rbx
  int v170; // edx
  int v171; // edx
  __int64 v172; // rcx
  int v173; // ecx
  __int64 v174; // rcx
  BOOL v175; // edi
  unsigned int v176; // eax
  unsigned int v177; // esi
  unsigned int v178; // edx
  __int64 v179; // rcx
  int v180; // eax
  int v181; // esi
  unsigned int v182; // edx
  __int64 v183; // rax
  __int64 v184; // rax
  __int64 v185; // r9
  __int64 v186; // rax
  __int64 v187; // rcx
  int v188; // eax
  int v189; // ecx
  unsigned int TouchTimeFromCPLValue; // eax
  unsigned int v191; // ecx
  int v192; // eax
  __int64 v193; // rdx
  __int64 v194; // r8
  __int64 v195; // r9
  __int64 v196; // rcx
  ULONG_PTR v197; // rbx
  struct tagWND *CompositionInputWindowUIOwner; // rbx
  const struct tagWND *TopLevelWindow; // rax
  bool v200; // di
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v202; // rdx
  __int64 v203; // rdx
  __int64 v204; // rcx
  __int64 v205; // r8
  int v206; // edi
  __int64 v207; // rcx
  __int64 v208; // rcx
  _DWORD *v209; // rax
  _DWORD *v210; // rax
  __int64 v211; // rax
  __int64 v212; // rdx
  __int64 v213; // r8
  __int64 v214; // r9
  __int64 v215; // rax
  __int64 *v216; // rbx
  __int64 v217; // rdx
  __int64 v218; // r8
  __int64 v219; // r9
  __int64 v220; // rcx
  __int64 v221; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v223; // rdx
  __int64 v224; // rcx
  __int64 v225; // r8
  __int64 v226; // rax
  int v227; // edx
  int v228; // esi
  __int64 v229; // rcx
  const struct tagQMSG *v230; // rbx
  int v231; // ebx
  __int64 v232; // rbx
  __int64 v233; // rcx
  int v234; // ebx
  unsigned __int64 MiPWindowFlags; // rax
  __int64 v236; // rbx
  struct tagWND *v237; // rcx
  int v238; // ebx
  int v239; // ebx
  int v240; // ebx
  int v241; // edx
  int v242; // eax
  __int64 v243; // rcx
  __int64 v244; // rax
  _QWORD *v245; // rax
  int v246; // ecx
  _DWORD *v247; // rax
  struct tagMSG *v248; // rbx
  __int64 v249; // rax
  int v250; // eax
  __int64 v251; // rdx
  __int64 v252; // r8
  __int64 v253; // r9
  __int64 v254; // rdx
  __int64 v255; // r8
  __int64 v256; // r9
  __int64 v257; // rdx
  __int64 v258; // r8
  __int64 v259; // r9
  __int64 v260; // rdx
  __int64 v261; // r8
  __int64 v262; // r9
  __int64 v263; // rdx
  __int64 v264; // r8
  __int64 v265; // r9
  __int64 v266; // rdx
  __int64 v267; // rcx
  __int64 v268; // r8
  void *v269; // rdx
  __int64 v270; // rdi
  __int64 v271; // rsi
  __int64 v272; // rdx
  __int64 v273; // r8
  __int64 v274; // r9
  __int64 v275; // rdx
  __int64 v276; // r8
  __int64 v277; // r9
  __int64 v278; // rdx
  __int64 v279; // r8
  __int64 v280; // r9
  __int64 v281; // rdx
  __int64 v282; // r8
  __int64 v283; // r9
  __int64 v284; // rdx
  __int64 v285; // r8
  __int64 v286; // r9
  __int64 v287; // rdx
  __int64 v288; // r8
  __int64 v289; // r9
  __int64 v290; // rdx
  __int64 v291; // rcx
  __int64 v292; // r8
  int v293; // [rsp+80h] [rbp-798h] BYREF
  unsigned int v294; // [rsp+84h] [rbp-794h] BYREF
  int v295; // [rsp+88h] [rbp-790h] BYREF
  BOOL v296; // [rsp+8Ch] [rbp-78Ch]
  struct tagWND *v297; // [rsp+90h] [rbp-788h] BYREF
  int v298; // [rsp+98h] [rbp-780h]
  int v299; // [rsp+9Ch] [rbp-77Ch]
  bool v300; // [rsp+A0h] [rbp-778h]
  int v301; // [rsp+A4h] [rbp-774h] BYREF
  struct tagPOINT v302; // [rsp+A8h] [rbp-770h] BYREF
  __int128 v303; // [rsp+B0h] [rbp-768h] BYREF
  int v304; // [rsp+C0h] [rbp-758h] BYREF
  __int64 v305; // [rsp+C8h] [rbp-750h]
  bool v306; // [rsp+D0h] [rbp-748h]
  bool v307; // [rsp+D1h] [rbp-747h]
  unsigned int v308; // [rsp+D4h] [rbp-744h]
  int v309; // [rsp+D8h] [rbp-740h]
  int v310; // [rsp+DCh] [rbp-73Ch]
  struct tagQMSG **v311; // [rsp+E0h] [rbp-738h]
  int v312[2]; // [rsp+E8h] [rbp-730h]
  char v313; // [rsp+F0h] [rbp-728h] BYREF
  char v314[3]; // [rsp+F1h] [rbp-727h] BYREF
  int v315; // [rsp+F4h] [rbp-724h]
  int v316; // [rsp+F8h] [rbp-720h]
  int v317; // [rsp+FCh] [rbp-71Ch]
  int v318; // [rsp+100h] [rbp-718h]
  _OWORD v319[11]; // [rsp+110h] [rbp-708h] BYREF
  unsigned int *v320; // [rsp+1C0h] [rbp-658h]
  __int64 v321; // [rsp+1C8h] [rbp-650h]
  unsigned int v322; // [rsp+1D0h] [rbp-648h]
  unsigned int v323; // [rsp+1D4h] [rbp-644h]
  unsigned int v324; // [rsp+1D8h] [rbp-640h]
  __int64 v325; // [rsp+1E0h] [rbp-638h]
  __int64 v326; // [rsp+1E8h] [rbp-630h]
  __int64 v327; // [rsp+1F0h] [rbp-628h]
  __int64 v328; // [rsp+1F8h] [rbp-620h]
  int v329; // [rsp+200h] [rbp-618h]
  __int64 v330; // [rsp+208h] [rbp-610h] BYREF
  __int64 v331; // [rsp+210h] [rbp-608h]
  __int64 v332; // [rsp+218h] [rbp-600h]
  __int64 v333; // [rsp+220h] [rbp-5F8h] BYREF
  __int64 v334; // [rsp+228h] [rbp-5F0h]
  __int64 v335; // [rsp+230h] [rbp-5E8h]
  __int64 v336; // [rsp+238h] [rbp-5E0h]
  __int64 v337; // [rsp+240h] [rbp-5D8h]
  __int64 v338; // [rsp+248h] [rbp-5D0h] BYREF
  struct tagWND *v339; // [rsp+250h] [rbp-5C8h]
  __int64 v340; // [rsp+258h] [rbp-5C0h]
  __int64 v341; // [rsp+260h] [rbp-5B8h]
  struct tagMSG *v342; // [rsp+268h] [rbp-5B0h]
  char v343[8]; // [rsp+270h] [rbp-5A8h] BYREF
  __int128 v344; // [rsp+278h] [rbp-5A0h] BYREF
  __int64 v345; // [rsp+288h] [rbp-590h]
  __int128 v346; // [rsp+290h] [rbp-588h]
  __int64 v347; // [rsp+2A0h] [rbp-578h]
  _QWORD v348[3]; // [rsp+2A8h] [rbp-570h] BYREF
  _QWORD v349[3]; // [rsp+2C0h] [rbp-558h] BYREF
  _QWORD v350[3]; // [rsp+2D8h] [rbp-540h] BYREF
  _QWORD v351[3]; // [rsp+2F0h] [rbp-528h] BYREF
  _QWORD v352[3]; // [rsp+308h] [rbp-510h] BYREF
  int v353; // [rsp+320h] [rbp-4F8h]
  __int64 v354; // [rsp+328h] [rbp-4F0h] BYREF
  __int64 *v355; // [rsp+330h] [rbp-4E8h]
  __int64 v356; // [rsp+338h] [rbp-4E0h]
  _DWORD v357[2]; // [rsp+340h] [rbp-4D8h] BYREF
  __int128 v358; // [rsp+348h] [rbp-4D0h]
  int *v359; // [rsp+358h] [rbp-4C0h]
  int v360; // [rsp+360h] [rbp-4B8h]
  int v361; // [rsp+364h] [rbp-4B4h]
  char *v362; // [rsp+368h] [rbp-4B0h]
  __int64 v363; // [rsp+370h] [rbp-4A8h]
  __int64 v364; // [rsp+378h] [rbp-4A0h]
  __int128 v365; // [rsp+380h] [rbp-498h]
  __int128 v366; // [rsp+390h] [rbp-488h]
  __int128 v367; // [rsp+3A0h] [rbp-478h]
  __int128 v368; // [rsp+3B0h] [rbp-468h]
  __int64 v369; // [rsp+3C0h] [rbp-458h] BYREF
  int v370; // [rsp+3C8h] [rbp-450h]
  __int64 v371; // [rsp+3CCh] [rbp-44Ch]
  __int64 v372; // [rsp+3D4h] [rbp-444h]
  __int64 v373; // [rsp+3DCh] [rbp-43Ch]
  __int64 v374; // [rsp+3E4h] [rbp-434h]
  int v375; // [rsp+3ECh] [rbp-42Ch]
  __int128 v376; // [rsp+410h] [rbp-408h]
  __int128 v377; // [rsp+420h] [rbp-3F8h]
  __int128 v378; // [rsp+430h] [rbp-3E8h]
  __int128 v379; // [rsp+440h] [rbp-3D8h]
  __int128 v380; // [rsp+450h] [rbp-3C8h]
  __int128 v381; // [rsp+460h] [rbp-3B8h]
  HWND v382; // [rsp+480h] [rbp-398h]
  _OWORD v383[6]; // [rsp+4A0h] [rbp-378h] BYREF
  _OWORD v384[11]; // [rsp+500h] [rbp-318h] BYREF
  _OWORD v385[11]; // [rsp+5B0h] [rbp-268h] BYREF
  _OWORD v386[11]; // [rsp+660h] [rbp-1B8h] BYREF
  _DWORD v387[44]; // [rsp+710h] [rbp-108h] BYREF
  _DWORD v388[4]; // [rsp+7C0h] [rbp-58h] BYREF

  v308 = a4;
  *(_QWORD *)v312 = a3;
  v323 = a5;
  v341 = a1;
  v325 = a1;
  v342 = a2;
  v347 = a3;
  v324 = a4;
  v322 = a4;
  v311 = a8;
  memset(v319, 0, 0xA8uLL);
  memset(v384, 0, 0xA8uLL);
  v10 = 0LL;
  *((_QWORD *)&v303 + 1) = 0LL;
  v302 = 0LL;
  v333 = 0LL;
  v334 = 0LL;
  v335 = 0LL;
  v336 = 0LL;
  v337 = 0LL;
  v329 = 0;
  v330 = 0LL;
  v331 = 0LL;
  v332 = 0LL;
  v338 = 0LL;
  v339 = 0LL;
  v340 = 0LL;
  memset(v348, 0, sizeof(v348));
  memset(v349, 0, sizeof(v349));
  memset(v352, 0, sizeof(v352));
  memset(v351, 0, sizeof(v351));
  memset(v350, 0, sizeof(v350));
  v295 = a6 & 1;
  v317 = 0;
  v11 = 0;
  v299 = 0;
  LOBYTE(v8) = 0;
  v296 = v8;
  v300 = 0;
  CMultiPerObjectLockExclusivePpiPtiQ::CMultiPerObjectLockExclusivePpiPtiQ(
    (CMultiPerObjectLockExclusivePpiPtiQ *)&v293,
    (struct tagTHREADINFO *)a1);
  v320 = 0LL;
  *a8 = 0LL;
  if ( a7 == 0x2000 && *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) )
  {
    EtwTraceInputQueueLockedPeekRecursion();
    goto LABEL_742;
  }
  v315 = 0;
  v298 = 0;
  v310 = 0;
  v15 = *(_QWORD *)(a1 + 424);
  if ( !*(_QWORD *)(v15 + 72) )
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
        v15,
        0LL);
      v15 = *(_QWORD *)(a1 + 424);
    }
    *(_QWORD *)(v15 + 72) = a1;
    **(_DWORD **)(a1 + 440) |= 1u;
    v15 = *(_QWORD *)(a1 + 424);
  }
  if ( (a7 & 0x1C07) != 0 )
  {
    if ( v295 )
      *(_DWORD *)(v15 + 396) &= ~0x400u;
    else
      *(_DWORD *)(v15 + 396) |= 0x400u;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 424) + 72LL) != a1 )
  {
    EtwTraceInputQueueLocked();
    CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
    return 2LL;
  }
  v305 = 0LL;
  v326 = 0LL;
  v328 = 0LL;
  v321 = 0LL;
  v327 = 0LL;
  LockW32Thread(0LL, v348, v13, v14);
  LockW32Thread(0LL, v349, v17, v18);
  LockW32Thread(0LL, v352, v19, v20);
  LockW32Thread(0LL, v351, v21, v22);
  LockW32Thread(0LL, v350, v23, v24);
  v297 = 0LL;
  v330 = *(_QWORD *)(a1 + 408);
  *(_QWORD *)(a1 + 408) = &v330;
  v331 = 0LL;
LABEL_18:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v25) = 4;
    WPP_RECORDER_SF_qq(
      (__int64)gFullLog,
      v25,
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
                v26 = *(_DWORD **)(a1 + 472);
                v27 = (*v26 >> 9) & 1;
                v353 = v27;
                v28 = *(_QWORD *)(a1 + 424);
                if ( *(_QWORD *)(v28 + 88) )
                {
                  if ( !(_BYTE)v8 )
                  {
                    v296 = ((v11 - 1) & 0xFFFFFFFD) == 0;
                    v300 = ((v11 - 1) & 0xFFFFFFFD) == 0;
                  }
                }
                else
                {
                  v11 = 0;
                  v299 = 0;
                  LOBYTE(v26) = 0;
                  v296 = (int)v26;
                  v300 = 0;
                }
                v8 = 0;
                v309 = 0;
                *(_QWORD *)&v303 = 0LL;
                v318 = 0;
                NextSysMsg = xxxGetNextSysMsg(
                               (struct tagTHREADINFO *)a1,
                               *(struct tagQMSG **)(v28 + 88),
                               (struct tagQMSG *)v319,
                               (struct CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                *(_QWORD *)&v346 = NextSysMsg;
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v29) = 4;
                  WPP_RECORDER_SF_qqq(
                    (__int64)gFullLog,
                    v29,
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
                v33 = DWORD1(v319[6]);
                if ( (BYTE4(v319[6]) & 0x20) != 0 )
                {
                  *v311 = (struct tagQMSG *)NextSysMsg;
                  *(_DWORD *)(NextSysMsg + 100) |= 0x100u;
                  v30 = 0LL;
                  v295 = 0;
                  v33 = DWORD1(v319[6]);
                }
                else
                {
                  v30 = (unsigned int)v295;
                }
                if ( (v33 & 0x10000) == 0 )
                  break;
                if ( *((_QWORD *)&v319[6] + 1) == a1 )
                  v11 = 1;
                v299 = v11;
                LOBYTE(v8) = 1;
                v296 = v8;
                v300 = 1;
              }
              if ( (v33 & 0x80000) == 0 )
                break;
              LOBYTE(v8) = v296;
              if ( *((_QWORD *)&v319[6] + 1) == a1 )
                goto LABEL_21;
            }
            if ( LODWORD(v319[6]) == 4 && v296 )
            {
              DeferSysPeekMsg(a1, 3);
              goto LABEL_23;
            }
            if ( (v33 & 0x20000) == 0 )
              break;
            LOBYTE(v8) = v296;
            if ( *((_QWORD *)&v319[6] + 1) == a1 )
            {
              v11 = 2;
              goto LABEL_22;
            }
          }
          if ( (_DWORD)v30 && ShouldDeferMessage(v11, SDWORD2(v319[1])) )
          {
            DeferSysPeekMsg(a1, 3);
LABEL_21:
            v11 = 3;
LABEL_22:
            v299 = v11;
            goto LABEL_23;
          }
LABEL_50:
          if ( !*(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) )
          {
            if ( a7 == 0x2000 )
              ClearWakeBit(a1, 0x2000, 0);
            goto LABEL_719;
          }
          ThreadUnlock1(v30, v29, v31);
          LOBYTE(v34) = 1;
          v38 = HMValidateHandleNoSecure(*(unsigned __int64 *)&v319[1], v34, v35, v36);
          v297 = (struct tagWND *)v38;
          v330 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v330;
          v331 = v38;
          if ( v38 )
          {
            HMLockObject(v38);
            v38 = (__int64)v297;
          }
          if ( !LODWORD(v319[6]) )
            break;
          if ( LODWORD(v319[6]) == 4 )
          {
            LOBYTE(v8) = v296;
            if ( *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) != *(_QWORD *)(*(_QWORD *)(a1 + 424) + 24LL) )
              continue;
          }
          if ( LODWORD(v319[6]) != 9 || DWORD2(v319[1]) != 96 )
            goto LABEL_65;
          v39 = *((_QWORD *)&v319[0] + 1);
          v40 = *((_QWORD *)&v319[0] + 1) == 0LL;
          if ( *((_QWORD *)&v319[0] + 1) )
          {
            do
            {
              if ( !(unsigned int)IsHiddenByInputService(v39) )
                break;
              v39 = *(_QWORD *)(v39 + 8);
            }
            while ( v39 );
            v40 = v39 == 0;
          }
          v11 = v299;
          LOBYTE(v8) = v296;
          if ( v40 )
          {
LABEL_65:
            v41 = *((_QWORD *)&v319[6] + 1);
            if ( *((_QWORD *)&v319[6] + 1) && *((_QWORD *)&v319[6] + 1) != a1 )
            {
              v42 = *(_QWORD *)(a1 + 424);
              if ( *(_QWORD *)(*((_QWORD *)&v319[6] + 1) + 424LL) == v42 )
              {
                LockExchangeW32Thread(*((__int64 *)&v319[6] + 1), (__int64)v352);
                v44 = v341;
                v45 = *(_QWORD *)(v341 + 424);
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v43) = 4;
                  WPP_RECORDER_SF_qq(
                    (__int64)gFullLog,
                    v43,
                    0x12u,
                    0x1Eu,
                    (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                    v45,
                    *(_QWORD *)(v45 + 88));
                  v45 = *(_QWORD *)(v44 + 424);
                }
                *(_QWORD *)(v45 + 88) = 0LL;
                v328 = v41;
                goto LABEL_719;
              }
              CleanEventMessage(*(struct tagQMSG **)(v42 + 88));
              DelQEntry(*(_QWORD *)(a1 + 424) + 24LL, *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL), 1);
              goto LABEL_16;
            }
            EtwTraceRetrieveQueueEventMessage(*(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL));
            DelQEntry(*(_QWORD *)(a1 + 424) + 24LL, *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL), 1);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v46) = 4;
              WPP_RECORDER_SF_qq(
                (__int64)gFullLog,
                v46,
                0x12u,
                0x1Fu,
                (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                *(_QWORD *)(a1 + 424),
                *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL));
            }
            *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) = 0LL;
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
            xxxProcessEventMessage(a1, (__int64)v319, v47, v48);
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
            v11 = v299;
            LOBYTE(v8) = v296;
            goto LABEL_18;
          }
        }
        if ( a7 == 0x2000 )
          goto LABEL_23;
        v49 = DWORD2(v319[1]);
        v294 = DWORD2(v319[1]);
        if ( DWORD2(v319[1]) <= 0x20A )
          break;
        switch ( DWORD2(v319[1]) )
        {
          case 0x20E:
            goto LABEL_300;
          case 0x238:
            goto LABEL_379;
          case 0x240:
LABEL_374:
            if ( !v38 )
              goto LABEL_309;
            v132 = *(char **)(v38 + 40);
            if ( v132[20] < 0 )
              goto LABEL_309;
            if ( v132[19] < 0 )
              goto LABEL_309;
            v133 = v132[31];
            if ( (v133 & 8) != 0 || (v133 & 0x10) == 0 )
              goto LABEL_309;
LABEL_379:
            v303 = v319[2];
            if ( !v38 )
              goto LABEL_309;
            if ( CheckCrossThreadInput((struct tagWND *const)v38, (struct tagQMSG *)NextSysMsg, &v301, &v295, v311) )
              goto LABEL_719;
            if ( v301 )
              goto LABEL_309;
            if ( !v308 && a5 == -1 )
              goto LABEL_390;
            if ( v308 <= a5 )
            {
              LOBYTE(v8) = v296;
              if ( v294 < v308 || v294 > a5 )
                goto LABEL_24;
            }
            else if ( v294 >= a5 && v294 <= v308 )
            {
              goto LABEL_23;
            }
LABEL_390:
            v134 = CheckPwndFilter(v297, *(_QWORD *)v312);
            LOBYTE(v8) = v296;
            if ( v134 )
            {
              if ( !v295 )
                goto LABEL_686;
LABEL_392:
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v319, 1u);
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
            v105 = v298;
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
            if ( !v308 && a5 == -1 )
              goto LABEL_292;
            if ( v308 <= a5 )
            {
              if ( DWORD2(v319[1]) < v322 || DWORD2(v319[1]) > v323 )
                goto LABEL_719;
            }
            else if ( DWORD2(v319[1]) >= v323 && DWORD2(v319[1]) <= v322 )
            {
              goto LABEL_719;
            }
LABEL_292:
            if ( (unsigned int)IsInsideMenuLoop(a1) )
              goto LABEL_309;
            if ( v295 )
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v319, 1u);
            if ( !v297 )
              v297 = *(struct tagWND **)(*(_QWORD *)(a1 + 424) + 120LL);
            v303 = v319[2];
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
            InteractiveControlInputMessage = xxxRetrieveInteractiveControlInputMessage(
                                               (unsigned __int16)v303,
                                               WORD1(v303));
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
            v99 = InteractiveControlInputMessage - 1;
            if ( !v99 )
              goto LABEL_686;
            if ( v99 == 1 )
              goto LABEL_719;
            goto LABEL_309;
          default:
LABEL_394:
            v302.x = SWORD4(v319[2]);
            v302.y = SWORD5(v319[2]);
            v304 = 1;
            if ( (BYTE4(v319[6]) & 0x20) == 0 )
              goto LABEL_404;
            if ( !v38 )
              goto LABEL_404;
            v135 = *(_DWORD *)(*(_QWORD *)(v38 + 40) + 288LL);
            v136 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v38 + 16) + 416LL) + 280LL);
            if ( (((unsigned __int16)(v136 >> 8) ^ (unsigned __int16)(v135 >> 8)) & 0x1FF) != 0 )
              goto LABEL_404;
            if ( (v135 & 0xF) != 2 || (v137 = 1, (v135 & 0x20000000) == 0) )
              v137 = 0;
            if ( (v136 & 0xF) != 2 || (v138 = 1, (v136 & 0x20000000) == 0) )
              v138 = 0;
            if ( v137 != v138 )
            {
LABEL_404:
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
              if ( !v297 || (v139 = 1, !(unsigned int)IsCompositionInputWindowForHitTest(v297)) )
                v139 = 0;
              v317 = v139;
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
              v140 = *(_QWORD *)(a1 + 424);
              v141 = *(HWND **)(v140 + 112);
              if ( v141 )
              {
                v297 = *(struct tagWND **)(v140 + 112);
                InputTraceLogging::Mouse::RedirectForCapture((const struct tagQMSG *)v319, *v141);
                if ( v139 )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  v159 = IsCompositionInputWindowForHitTest(v297);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  if ( !v159 )
                  {
                    DWORD1(v319[6]) &= ~0x2000u;
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
                if ( v139 )
                {
                  v142 = v297;
                }
                else
                {
                  v142 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 448LL) + 8LL) + 24LL);
                  v338 = *(_QWORD *)(a1 + 408);
                  *(_QWORD *)(a1 + 408) = &v338;
                  v339 = v142;
                  if ( v142 )
                    HMLockObject(v142);
                }
                if ( (unsigned int)IsThreadDesktopComposed(a1) )
                {
                  v357[0] = DWORD2(v319[1]);
                  v357[1] = 0;
                  v358 = v319[2];
                  v359 = &v304;
                  v143 = 1;
                  if ( v139 )
                    v143 = 9;
                  v360 = v143;
                  v361 = 0;
                  v362 = (char *)&v319[5] + 8;
                  v363 = 0LL;
                  v364 = 0LL;
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  v145 = xxxDCEWindowHitTestIndirect((ULONG_PTR)v142, *(struct tagPOINT *)&v319[5], (__int64)v357, v144);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  if ( v145 && (_DWORD)v363 )
                  {
                    *((_QWORD *)&v319[2] + 1) = *((_QWORD *)&v358 + 1);
                    DWORD1(v319[3]) = SWORD4(v358);
                    v146 = *((_QWORD *)&v358 + 1) >> 16;
                    DWORD2(v319[3]) = SWORD5(v358);
                    v302 = *(struct tagPOINT *)((char *)&v319[3] + 4);
                  }
                }
                else
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  v145 = (HWND)xxxWindowHitTest((ULONG_PTR)v142);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                }
                LOBYTE(v146) = 1;
                v149 = (struct tagWND *)HMValidateHandleNoSecure((unsigned __int64)v145, v146, v147, v148);
                InputTraceLogging::Mouse::SecondaryHitTest((const struct tagQMSG *)v319, &v302, v149);
                if ( !v139 )
                  ThreadUnlock1(v151, v150, v152);
                LOBYTE(v150) = 1;
                v297 = (struct tagWND *)HMValidateHandleNoSecure((unsigned __int64)v145, v150, v152, v153);
                if ( !v297 )
                {
                  v297 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL) + 24LL);
                  if ( !v297 )
                    v297 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 448LL) + 8LL) + 24LL);
                }
                if ( (unsigned int)IsMouseInPointerActive(a1)
                  && (v154 = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 448LL)) != 0
                  && (v155 = ValidateHwnd(v154)) != 0
                  && ((v156 = *(_QWORD *)(v155 + 16), v157 = *(_QWORD *)(a1 + 424), *(_QWORD *)(v156 + 424) == v157)
                   || *(_QWORD *)(v156 + 416) == *(_QWORD *)(a1 + 416)) )
                {
                  v297 = (struct tagWND *)v155;
                  v304 = 1;
                  *(_DWORD *)(v157 + 156) = 0;
                }
                else
                {
                  v158 = *(_QWORD *)(a1 + 424);
                  *(_DWORD *)(v158 + 156) = v304 != 1;
                }
              }
              v38 = (__int64)v297;
              if ( v297 == *(struct tagWND **)(*(_QWORD *)(a1 + 424) + 112LL) )
              {
                v160 = *(_DWORD *)(*((_QWORD *)v297 + 5) + 288LL);
                if ( (((unsigned __int16)(v160 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(PtiMouseFromQ(*(_QWORD *)(*((_QWORD *)v297 + 2) + 424LL))
                                                                                                + 416)
                                                                                    + 280LL) >> 8)) & 0x1FF) != 0 )
                  goto LABEL_448;
                if ( (*(_DWORD *)(*((_QWORD *)v297 + 5) + 288LL) & 0xF) != 2
                  || (v161 = 1, (*(_DWORD *)(*((_QWORD *)v297 + 5) + 288LL) & 0x20000000) == 0) )
                {
                  v161 = 0;
                }
                if ( (*(_DWORD *)(*(_QWORD *)(PtiMouseFromQ(*(_QWORD *)(*((_QWORD *)v297 + 2) + 424LL)) + 416) + 280LL) & 0xF) != 2
                  || (v162 = *(_QWORD *)(PtiMouseFromQ(*(_QWORD *)(*((_QWORD *)v297 + 2) + 424LL)) + 416),
                      v163 = 1,
                      (*(_DWORD *)(v162 + 280) & 0x20000000) == 0) )
                {
                  v163 = 0;
                }
                if ( v161 != v163 || (unsigned int)IsOleDragDropCaptureWindow(v297) )
                {
LABEL_448:
                  v302 = *(struct tagPOINT *)&v319[5];
                  PhysicalToLogicalInPlacePointWithParent(v297, &v302, (char *)&v319[5] + 8);
                  *((_QWORD *)&v303 + 1) = (LOWORD(v302.y) << 16) | LOWORD(v302.x);
                  *(struct tagPOINT *)((char *)&v319[3] + 4) = v302;
                }
                v38 = (__int64)v297;
              }
            }
            ThreadLockExchange(v38, &v330);
            if ( CheckCrossThreadInput(v297, (struct tagQMSG *)NextSysMsg, &v301, &v295, v311) )
              goto LABEL_719;
            if ( !v301 )
            {
              if ( (WORD2(v319[6]) & 0x1000) != 0
                && !(unsigned __int8)CheckAccess(&v319[7], *(_QWORD *)(*((_QWORD *)v297 + 2) + 416LL) + 872LL) )
              {
                EtwTraceUIPIMsgError(
                  0LL,
                  *(_QWORD *)(*((_QWORD *)v297 + 2) + 416LL),
                  v294,
                  *(_QWORD *)&v319[2],
                  *((_QWORD *)&v319[2] + 1));
LABEL_453:
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                zzzSetCursor((struct tagCURSOR *)gasyscur[1], v166, v167, v168);
                goto LABEL_308;
              }
              goto LABEL_456;
            }
            v164 = v297;
            v165 = *((_QWORD *)v297 + 2);
            if ( *(_QWORD *)(v165 + 424) != *(_QWORD *)(a1 + 424) )
              goto LABEL_453;
            if ( !v305 )
            {
              v305 = *((_QWORD *)v297 + 2);
              LockExchangeW32Thread(v165, (__int64)v349);
LABEL_456:
              v164 = v297;
            }
            v169 = (unsigned __int64)v302;
            v170 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v164 + 2) + 424LL) + 156LL);
            if ( v170 && (v171 = v170 - 2) != 0 )
            {
              if ( v171 != 1 )
                goto LABEL_472;
              v172 = *((_QWORD *)v164 + 5);
              if ( (*(_BYTE *)(v172 + 26) & 0x40) != 0 )
                v302.x = *(_DWORD *)(v172 + 96) - v302.x;
              else
                v302.x -= *(_DWORD *)(v172 + 88);
              v173 = *(_DWORD *)(*((_QWORD *)v164 + 5) + 92LL);
            }
            else
            {
              v174 = *((_QWORD *)v164 + 5);
              if ( (*(_BYTE *)(v174 + 26) & 0x40) != 0 )
                v302.x = *(_DWORD *)(v174 + 112) - v302.x;
              else
                v302.x -= *(_DWORD *)(v174 + 104);
              v173 = *(_DWORD *)(*((_QWORD *)v164 + 5) + 108LL);
            }
            v302.y -= v173;
LABEL_472:
            if ( !v301 && *(_QWORD *)(a1 + 424) == gpqCursor )
            {
              v175 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 184LL) != (_QWORD)v164;
              v176 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))FindNCHitEx)(v164, (unsigned int)v304, v302);
              v177 = v176;
              v178 = v294;
              if ( v294 != 512 || v175 || *(_DWORD *)(*(_QWORD *)(a1 + 448) + 192LL) != v176 )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                xxxTrackMouseMove(v297, v177, v294);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                v178 = v294;
              }
              if ( !v175 )
              {
                v179 = *(_QWORD *)(a1 + 448);
                if ( (*(_DWORD *)(v179 + 48) & 0x40) != 0 && (v178 != 512 || !PtInRect((_DWORD *)(v179 + 196), v169)) )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  ResetMouseHover(*(struct tagDESKTOP **)(a1 + 448), (struct tagPOINT)v169);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                }
              }
              v164 = v297;
            }
            v180 = CheckPwndFilter(v164, *(_QWORD *)v312);
            v11 = v299;
            LOBYTE(v8) = v296;
            if ( !v180 )
              goto LABEL_24;
            v181 = 0;
            v316 = 0;
            v182 = v294;
            switch ( v294 )
            {
              case 0x201u:
                v40 = (unsigned __int8)IsMessageInputSourceTouch(v319) == 0;
                v183 = *(_QWORD *)(a1 + 424);
                if ( v40 )
                  *(_DWORD *)(v183 + 396) &= ~0x800000u;
                else
                  *(_DWORD *)(v183 + 396) |= 0x800000u;
                v40 = (unsigned __int8)IsMessageInputSourcePen(v319) == 0;
                v184 = *(_QWORD *)(a1 + 424);
                if ( v40 )
                  *(_DWORD *)(v184 + 396) &= ~0x1000000u;
                else
                  *(_DWORD *)(v184 + 396) |= 0x1000000u;
                v182 = v294;
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
                if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v297 + 17) + 8LL) + 8LL) & 8) != 0
                  || *(_DWORD *)(*(_QWORD *)(a1 + 424) + 156LL) == 1 )
                {
                  goto LABEL_497;
                }
                if ( !(unsigned int)IsMenuStarted(a1) )
                  goto LABEL_508;
                v182 = v294;
LABEL_497:
                v181 = 1;
                v316 = 1;
                v185 = *(_QWORD *)(a1 + 424);
                if ( LODWORD(v319[3]) <= *(_DWORD *)(v185 + 168) && !gbClientDoubleClickSupport )
                {
                  v186 = v297 ? *(_QWORD *)v297 : 0LL;
                  if ( v186 == *(_QWORD *)(v185 + 176)
                    && v182 == *(_DWORD *)(v185 + 160)
                    && (v182 != 523 || WORD1(v319[2]) == *(_WORD *)(v185 + 164)) )
                  {
                    v388[0] = *(_DWORD *)(v185 + 184) - *(_DWORD *)(gpsi + 2040LL) / 2;
                    v388[1] = *(_DWORD *)(v185 + 188) - *(_DWORD *)(gpsi + 2044LL) / 2;
                    v388[2] = *(_DWORD *)(v185 + 184) + *(_DWORD *)(gpsi + 2040LL) / 2;
                    v388[3] = *(_DWORD *)(v185 + 188) + *(_DWORD *)(gpsi + 2044LL) / 2;
                    if ( PtInRect(v388, *(unsigned __int64 *)((char *)&v319[3] + 4)) )
                    {
                      v182 = v294 + 2;
                      v294 += 2;
                      v181 = 2;
                      v316 = 2;
                    }
                    else
                    {
LABEL_508:
                      v182 = v294;
                    }
                  }
                }
LABEL_509:
                v187 = *(_QWORD *)(a1 + 424);
                v188 = *(_DWORD *)(v187 + 396);
                if ( (v188 & 8) != 0 )
                {
                  *(_DWORD *)(v187 + 396) = v188 | 4;
                  v182 = v294;
                }
                if ( v182 - 514 <= 0xA )
                {
                  v189 = 1097;
                  if ( _bittest(&v189, v182 - 514) )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)(a1 + 424) + 168LL) && ((DWORD2(v319[7]) - 4) & 0xFFFFFFFB) == 0 )
                    {
                      if ( DWORD2(v319[7]) == 4 )
                        TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(0x12Cu, 0xB4u, 5u, 1);
                      else
                        TouchTimeFromCPLValue = GetPenDoubleClickTime();
                      *(_DWORD *)(*(_QWORD *)(a1 + 424) + 168LL) = DWORD2(v319[9]) + TouchTimeFromCPLValue;
                      v182 = v294;
                    }
                  }
                }
LABEL_519:
                if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v297 + 2) + 424LL) + 156LL) == 1 )
                {
                  v182 -= 352;
                  v294 = v182;
                  *(_QWORD *)&v303 = (unsigned int)v304;
                }
                if ( !(unsigned int)MiPCheckMsgFilter((struct tagQMSG *)NextSysMsg, v182, v308, a5) )
                  goto LABEL_23;
                if ( v301 )
                  goto LABEL_719;
                v191 = v294;
                if ( v294 - 512 <= 0xE && (*(_DWORD *)(a1 + 480) & 0x8000) != 0 )
                  goto LABEL_23;
                v192 = *(_DWORD *)(a1 + 480);
                if ( (v192 & 0x100000) != 0 )
                {
                  *(_DWORD *)(a1 + 480) = v192 & 0xFFEFFFFF;
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  xxxWindowEvent(0x800Bu, 0LL, 4294967287LL, 0LL, 1);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  v191 = v294;
                }
                v333 = *(_QWORD *)((char *)&v319[3] + 4);
                if ( v297 )
                  v334 = *(_QWORD *)v297;
                else
                  v334 = 0LL;
                LODWORD(v335) = v304;
                v336 = *((_QWORD *)&v319[4] + 1);
                LODWORD(v337) = v319[2];
                if ( !v295 || v191 == 512 || v191 == 160 )
                {
                  v105 = v298;
                }
                else
                {
                  v105 = 1;
                  v298 = 1;
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  if ( (unsigned int)xxxCallCtfHook(7, 0, v294, (__int64)&v333) )
                    goto LABEL_543;
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                }
                if ( ((*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_DWORD *)(a1 + 672)) & 0x100) == 0 )
                  goto LABEL_540;
                v105 = 1;
                v298 = 1;
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                if ( (unsigned int)xxxCallMouseHook(v294, &v333, (unsigned int)v295) )
                  goto LABEL_543;
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
LABEL_540:
                if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
                  goto LABEL_545;
                v196 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v193, v194, v195) + 472);
                v307 = 0;
                v307 = *(_QWORD *)(v196 + 248) != 0LL;
                if ( !v307 )
                  goto LABEL_545;
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                if ( xxxClientCallLocalMouseHooks(v294, &v333, (unsigned int)v295) )
                  goto LABEL_543;
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
LABEL_545:
                if ( (*(_DWORD *)(a1 + 1224) & 0x2000) == 0 && ((v304 + 2) & 0xFFFFFFFD) == 0 )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  v197 = 0LL;
                  if ( v317 )
                  {
                    CompositionInputWindowUIOwner = v297;
                    if ( (unsigned int)IsIndependentInputWindow(v297) )
                      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v297);
                    TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
                    v197 = (ULONG_PTR)TopLevelWindow;
                    if ( TopLevelWindow )
                    {
                      v200 = 0;
                      if ( (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) && v294 == 161 )
                        v200 = *(_QWORD *)(*(_QWORD *)(v197 + 16) + 424LL) == gpqForeground;
                      CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf((const struct tagWND *)v197);
                      v197 = (ULONG_PTR)CompositeAppFrameWindowOrSelf;
                      if ( v200 )
                      {
                        v202 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 2);
                        if ( *(_QWORD *)(v202 + 424) != gpqForeground )
                          *(_DWORD *)(v202 + 480) |= 0x20u;
                      }
                      v338 = *(_QWORD *)(a1 + 408);
                      *(_QWORD *)(a1 + 408) = &v338;
                      v339 = CompositeAppFrameWindowOrSelf;
                      if ( CompositeAppFrameWindowOrSelf )
                        HMLockObject(CompositeAppFrameWindowOrSelf);
                      xxxSendMessage(v197);
                      ThreadUnlock1(v204, v203, v205);
                    }
                  }
                  if ( !v197 )
                    xxxSendMessage((ULONG_PTR)v297);
                  if ( *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) == NextSysMsg
                    && NextSysMsg
                    && (unsigned int)IsMouseInPointerActive(a1)
                    && (*(_DWORD *)(NextSysMsg + 100) & 0x800) != 0
                    && (unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(NextSysMsg + 120))
                    && IsMiPMouseMessage(*(_DWORD *)(NextSysMsg + 24)) )
                  {
                    memset(v387, 0, 0xA8uLL);
                    GeneratePointerMessageFromMouse(
                      (struct tagQMSG *)v387,
                      v294,
                      (struct tagQMSG *)NextSysMsg,
                      v297,
                      v295);
                    SetMiPPromotion(*((_QWORD *)v297 + 2), v387[6]);
                  }
                  goto LABEL_308;
                }
                if ( *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) != NextSysMsg )
                  goto LABEL_719;
                memset(v383, 0, sizeof(v383));
                v346 = v383[0];
                v365 = v383[1];
                v366 = v383[2];
                v367 = v383[3];
                v368 = v383[4];
                v344 = v383[5];
                v206 = 0;
                v384[0] = v319[0];
                v384[1] = v319[1];
                v384[2] = v319[2];
                v384[3] = v319[3];
                v384[4] = v319[4];
                v384[5] = v319[5];
                v384[6] = v319[6];
                v384[7] = v319[7];
                v384[8] = v319[8];
                v384[9] = v319[9];
                *(_QWORD *)&v384[10] = *(_QWORD *)&v319[10];
                if ( !NextSysMsg || !(unsigned int)IsMouseInPointerActive(a1) )
                  goto LABEL_593;
                DWORD2(v384[1]) = v294;
                *(_QWORD *)&v384[2] = v303;
                if ( (*(_DWORD *)(NextSysMsg + 100) & 0x800) != 0 )
                {
                  memset(v385, 0, 0xA8uLL);
                  v207 = *(_QWORD *)(a1 + 1280);
                  if ( v207 && (*(_DWORD *)v207 & 1) != 0 )
                  {
                    v346 = *(_OWORD *)(v207 + 24);
                    v365 = *(_OWORD *)(v207 + 40);
                    v366 = *(_OWORD *)(v207 + 56);
                    v367 = *(_OWORD *)(v207 + 72);
                    v368 = *(_OWORD *)(v207 + 88);
                    v344 = *(_OWORD *)(v207 + 104);
                    v206 = 1;
                  }
                  if ( GeneratePointerMessageFromMouse(
                         (struct tagQMSG *)v385,
                         v294,
                         (struct tagQMSG *)NextSysMsg,
                         v297,
                         v295) )
                  {
                    v319[0] = v385[0];
                    v319[1] = v385[1];
                    v319[2] = v385[2];
                    v319[3] = v385[3];
                    v319[4] = v385[4];
                    v319[5] = v385[5];
                    v319[6] = v385[6];
                    v319[7] = v385[7];
                    v319[8] = v385[8];
                    v319[9] = v385[9];
                    *(_QWORD *)&v319[10] = *(_QWORD *)&v385[10];
                    v309 = 1;
                    if ( DWORD2(v385[1]) == 582 )
                    {
                      v208 = 0LL;
                      if ( v297 )
                        v208 = *(_QWORD *)v297;
                      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 448LL) = v208;
                    }
                    else if ( ((DWORD2(v385[1]) - 579) & 0xFFFFFFFB) == 0 )
                    {
                      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 448LL) = 0LL;
                    }
                  }
                  if ( !v295 )
                  {
LABEL_628:
                    v8 = v309;
                    goto LABEL_629;
                  }
                  *(_DWORD *)(NextSysMsg + 100) &= ~0x800u;
                }
                else
                {
                  if ( !v295 )
                    goto LABEL_628;
                  if ( IsMiPMouseMessage(*(_DWORD *)(NextSysMsg + 24)) )
                  {
                    if ( (unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(NextSysMsg + 120)) )
                    {
                      v209 = *(_DWORD **)(a1 + 1280);
                      if ( v209 )
                      {
                        if ( (*v209 & 2) == 0 && (*v209 & 4) == 0 )
                          goto LABEL_15;
                      }
                    }
                    v210 = *(_DWORD **)(a1 + 1280);
                    if ( v210 )
                      *v210 &= ~2u;
                  }
                }
LABEL_593:
                if ( !v295 )
                  goto LABEL_628;
                if ( (DWORD2(v384[1]) == 512 || DWORD2(v384[1]) == 160)
                  && (v297 ? (v211 = *(_QWORD *)v297) : (v211 = 0LL),
                      v211 != gMiPTracking
                   && (unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(NextSysMsg + 120))) )
                {
                  LOBYTE(v212) = 1;
                  v215 = HMValidateHandleNoSecure(gMiPTracking, v212, v213, v214);
                  v216 = (__int64 *)v215;
                  if ( v215
                    && (unsigned int)IsMouseInPointerActive(*(_QWORD *)(v215 + 16))
                    && (GetMiPWindowFlags((struct tagWND *)v216) & 1) == 0 )
                  {
                    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                    v220 = v216[2];
                    if ( v220 == a1 )
                    {
                      v221 = *(_QWORD *)(a1 + 1280);
                      v376 = *(_OWORD *)(v221 + 24);
                      v377 = *(_OWORD *)(v221 + 40);
                      v378 = *(_OWORD *)(v221 + 56);
                      v379 = *(_OWORD *)(v221 + 72);
                      v380 = *(_OWORD *)(v221 + 88);
                      v381 = *(_OWORD *)(v221 + 104);
                      if ( v206 )
                      {
                        *(_OWORD *)(v221 + 24) = v346;
                        *(_OWORD *)(v221 + 40) = v365;
                        *(_OWORD *)(v221 + 56) = v366;
                        *(_OWORD *)(v221 + 72) = v367;
                        *(_OWORD *)(v221 + 88) = v368;
                        *(_OWORD *)(v221 + 104) = v344;
                        v221 = *(_QWORD *)(v341 + 1280);
                      }
                      v382 = (HWND)(((*(_DWORD *)(v221 + 36) & 0xFFFFE1F7) << 16) | 1LL);
                      v354 = 0LL;
                      v355 = 0LL;
                      v356 = 0LL;
                      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v217, v218, v219);
                      v354 = *(_QWORD *)(ThreadWin32Thread + 408);
                      *(_QWORD *)(ThreadWin32Thread + 408) = &v354;
                      v355 = v216;
                      HMLockObject(v216);
                      FindTimer((_DWORD)v216, 65523, 2, 1, 0LL);
                      xxxSendTransformableMessage(v216, 0x24Au, v382, 0LL, 0);
                      ThreadUnlock1(v224, v223, v225);
                      if ( v206 )
                      {
                        v226 = *(_QWORD *)(a1 + 1280);
                        *(_OWORD *)(v226 + 24) = v376;
                        *(_OWORD *)(v226 + 40) = v377;
                        *(_OWORD *)(v226 + 56) = v378;
                        *(_OWORD *)(v226 + 72) = v379;
                        *(_OWORD *)(v226 + 88) = v380;
                        *(_OWORD *)(v226 + 104) = v381;
                      }
                    }
                    else
                    {
                      PostEventMessageEx(
                        (struct tagTHREADINFO *)v220,
                        *(_QWORD *)(v220 + 424),
                        0x15u,
                        (__int64)v216,
                        0,
                        0LL,
                        0LL,
                        0LL);
                    }
                    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  }
                  v227 = v309;
                  if ( v309 && v297 )
                    gMiPTracking = *(_QWORD *)v297;
                  else
                    gMiPTracking = 0LL;
                }
                else
                {
                  v227 = v309;
                }
                if ( !v227 )
                {
                  v228 = v181 - 1;
                  if ( v228 )
                  {
                    if ( v228 == 1 )
                      *(_DWORD *)(*(_QWORD *)(a1 + 424) + 168LL) = 0;
                  }
                  else
                  {
                    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 160LL) = DWORD2(v319[1]);
                    *(_WORD *)(*(_QWORD *)(a1 + 424) + 164LL) = WORD1(v319[2]);
                    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 168LL) = gdtDblClk + LODWORD(v319[3]);
                    if ( v297 )
                      v229 = *(_QWORD *)v297;
                    else
                      v229 = 0LL;
                    *(_QWORD *)(*(_QWORD *)(a1 + 424) + 176LL) = v229;
                    *(_QWORD *)(*(_QWORD *)(a1 + 424) + 184LL) = *(_QWORD *)((char *)&v319[3] + 4);
                  }
                }
                v230 = (const struct tagQMSG *)v384;
                v8 = v309;
                if ( !v309 )
                  v230 = (const struct tagQMSG *)v319;
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                v231 = xxxMouseActivate((struct tagTHREADINFO *)a1, v297, v230, v304);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                if ( v231 == 1 )
                  goto LABEL_309;
LABEL_629:
                if ( v295 )
                {
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v319, 1u);
                  if ( v295 )
                  {
                    if ( v298
                      && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_BYTE *)(a1 + 672)) & 0x40) != 0 )
                    {
                      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                      xxxCallHook(6, v294, (__int64)&v333, 5);
                      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                    }
                  }
                }
                v105 = 0;
                v298 = 0;
                *((_QWORD *)&v303 + 1) = (LOWORD(v302.y) << 16) | LOWORD(v302.x);
                if ( v294 >= 0x200 )
                  *(_QWORD *)&v303 = (unsigned int)GetMouseKeyFlags(*(unsigned __int8 **)(a1 + 424));
                if ( (v294 - 171 <= 2 || v294 - 523 <= 2) && !v8 )
                  *(_QWORD *)&v303 = *(_QWORD *)&v319[2] | v303;
                v232 = *(_QWORD *)(a1 + 600);
                if ( v304 != 5
                  || !v295
                  || !v232
                  || (*(_DWORD *)(v232 + 8) & 0x100) == 0
                  || !*(_QWORD *)v232
                  || (**(_DWORD **)v232 & 1) == 0 )
                {
                  goto LABEL_649;
                }
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                  (MenuStateOwnerLockxxxUnlock *)v343,
                  (struct tagMENUSTATE *)v232);
                if ( (unsigned int)xxxCallHandleMenuMessages(v232, (_DWORD)v297, v294, v303, *((__int64 *)&v303 + 1)) )
                {
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v343);
                  goto LABEL_16;
                }
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v343);
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
      if ( DWORD2(v319[1]) != 522 )
      {
        switch ( DWORD2(v319[1]) )
        {
          case 0x23:
            *(_QWORD *)&v303 = 0LL;
            *((_QWORD *)&v303 + 1) = *((_QWORD *)&v319[2] + 1);
            if ( v38 )
            {
              v50 = *(_QWORD *)(v38 + 16);
              if ( v50 != a1 )
              {
                if ( *(_QWORD *)(v50 + 424) == *(_QWORD *)(a1 + 424) )
                {
                  v51 = v305;
                  if ( !v305 )
                  {
                    v51 = *(_QWORD *)(v38 + 16);
                    LockExchangeW32Thread(v50, (__int64)v349);
                  }
                  goto LABEL_720;
                }
                goto LABEL_309;
              }
            }
            if ( !(unsigned int)MiPCheckMsgFilter((struct tagQMSG *)NextSysMsg, DWORD2(v319[1]), v308, a5) )
              goto LABEL_719;
            if ( !v295 )
              goto LABEL_686;
            goto LABEL_392;
          case 0xFE:
            goto LABEL_379;
          case 0xFF:
            v303 = v319[2];
            v92 = 0LL;
            v297 = 0LL;
            if ( *((_QWORD *)&v319[2] + 1) )
            {
              LOBYTE(v49) = 18;
              v93 = HMValidateHandle(*((unsigned __int64 *)&v319[2] + 1), v49, 0x1C0000000LL, v37);
              if ( v93 )
              {
                v92 = *(struct tagWND **)(v93 + 24);
                v297 = v92;
              }
              else
              {
                v92 = v297;
              }
            }
            if ( !v92 )
            {
              v94 = *(_QWORD *)(a1 + 424);
              v92 = *(struct tagWND **)(v94 + 120);
              v297 = v92;
              if ( !v92 )
              {
                v92 = *(struct tagWND **)(v94 + 128);
                v297 = v92;
                if ( !v92 )
                  goto LABEL_309;
              }
            }
            ThreadLockExchangeAlways(v92, &v330);
            if ( CheckCrossThreadInput(v297, (struct tagQMSG *)NextSysMsg, &v301, &v295, v311) )
              goto LABEL_719;
            if ( !v301 )
              goto LABEL_271;
            if ( *(_QWORD *)(*((_QWORD *)v297 + 2) + 424LL) != *(_QWORD *)(a1 + 424) )
              goto LABEL_309;
            if ( (unsigned int)IsInsideMenuLoop(a1) )
            {
              v95 = *(_QWORD *)(**(_QWORD **)(a1 + 600) + 8LL);
            }
            else
            {
              v96 = *(_QWORD *)(a1 + 664);
              if ( !v96 )
                goto LABEL_269;
              v95 = *(_QWORD *)(v96 + 16);
            }
            if ( v95 )
            {
              v297 = (struct tagWND *)v95;
              v301 = *(_QWORD *)(v95 + 16) != a1;
              ThreadLockExchangeAlways(v95, &v330);
            }
LABEL_269:
            if ( !v321 )
            {
              v321 = *((_QWORD *)v297 + 2);
              LockExchangeW32Thread(v321, (__int64)v351);
            }
LABEL_271:
            if ( !v308 && a5 == -1 )
              goto LABEL_279;
            if ( v308 <= a5 )
            {
              LOBYTE(v8) = v296;
              if ( v294 < v308 || v294 > a5 )
                goto LABEL_24;
            }
            else if ( v294 >= a5 && v294 <= v308 )
            {
              goto LABEL_23;
            }
LABEL_279:
            v97 = CheckPwndFilter(v297, *(_QWORD *)v312);
            LOBYTE(v8) = v296;
            if ( v97 )
            {
              if ( v301 )
                goto LABEL_719;
              if ( !v295 )
                goto LABEL_686;
              goto LABEL_392;
            }
            goto LABEL_24;
          case 0x100:
          case 0x104:
            v315 = 1;
            if ( (*(_DWORD *)(a1 + 480) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
              goto LABEL_719;
            v52 = *(_QWORD *)&v319[2];
            v53 = LOBYTE(v319[2]);
            *(_QWORD *)&v303 = LOBYTE(v319[2]);
            if ( v295 && (DWORD1(v319[6]) & 0x40000) != 0 )
              goto LABEL_119;
            if ( LOBYTE(v319[2]) != 18LL )
            {
              *(_DWORD *)(*(_QWORD *)(a1 + 424) + 396LL) &= 0xFFFFFFF3;
              v52 = *(_QWORD *)&v319[2];
              v53 = v303;
            }
            v54 = *(_QWORD *)(a1 + 424);
            v37 = *(unsigned __int8 *)(v54 + 240);
            v55 = *(_BYTE *)(v54 + 240) & 0x10;
            if ( v53 != 44 )
              goto LABEL_106;
            if ( (*(_BYTE *)(v54 + 240) & 0x10) == 0 )
            {
              if ( (*(_DWORD *)(a1 + 876) & 0x20) != 0 )
                goto LABEL_106;
LABEL_98:
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v319, 1u);
              if ( v55 || (DWORD2(v319[2]) & 0xFF0000) == 0x10000LL )
              {
                v56 = *(const struct tagWND **)(*(_QWORD *)(a1 + 424) + 128LL);
                v57 = v56 == 0LL;
                if ( !v56 )
                {
LABEL_104:
                  v11 = v299;
                  LOBYTE(v8) = v296;
                  if ( v57 )
                    goto LABEL_18;
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  v58 = HIDWORD(v319[7]) != 1;
                  v338 = *(_QWORD *)(a1 + 408);
                  *(_QWORD *)(a1 + 408) = &v338;
                  v339 = v56;
                  HMLockObject(v56);
                  xxxSnapWindow(v56, v58);
                  ThreadUnlock1(v60, v59, v61);
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
LABEL_16:
                  v11 = v299;
                  goto LABEL_17;
                }
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                v56 = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v56);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
              }
              else
              {
                v56 = *(const struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL) + 24LL);
              }
              v57 = v56 == 0LL;
              goto LABEL_104;
            }
            if ( (*(_DWORD *)(a1 + 876) & 0x10) == 0 )
              goto LABEL_98;
LABEL_106:
            if ( gcHotKey && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
            {
              v62 = v53 | 0x400;
              if ( (v37 & 0x10) == 0 )
                v62 = v53;
              v63 = v62 | 0x200;
              if ( (v37 & 4) == 0 )
                v63 = v62;
              v64 = v63;
              LODWORD(v64) = v63 | 0x100;
              if ( (v37 & 1) == 0 )
                v64 = v63;
              v65 = HotKeyToWindow(v64);
              v66 = (__int64 *)v65;
              if ( v65 && *(_QWORD *)(a1 + 448) == *(_QWORD *)(*(_QWORD *)(v65 + 16) + 448LL) )
              {
                CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                PostTransformableMessage(*(struct tagWND **)(*(_QWORD *)(a1 + 424) + 128LL), 0x112u, 0xF150uLL, *v66, 0);
                CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
LABEL_15:
                xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v319, 1u);
                goto LABEL_16;
              }
              v52 = *(_QWORD *)&v319[2];
              v53 = v303;
            }
LABEL_119:
            if ( v53 == 231 )
            {
              *(_WORD *)(a1 + 874) = WORD1(v52);
              v52 = 231LL;
            }
LABEL_122:
            v67 = (unsigned __int8)v52;
            *(_QWORD *)&v303 = (unsigned __int8)v52;
            if ( (unsigned __int8)v52 == 231LL )
              v52 = 231LL;
            *(_QWORD *)&v319[2] = v52;
            if ( v295 && (DWORD1(v319[6]) & 0x40000) != 0 || !LODWORD(WPP_MAIN_CB.Dpc.DpcData) )
            {
LABEL_141:
              if ( v67 == 121 )
                v294 |= 4u;
              if ( (*(_BYTE *)(*(_QWORD *)(a1 + 424) + 240LL) & 4) != 0 && v67 == 27 )
                v294 |= 4u;
              if ( (*(_DWORD *)(a1 + 480) & 8) == 0 )
                *((_QWORD *)&v319[2] + 1) &= ~0x2000000uLL;
LABEL_148:
              *(_QWORD *)&v303 = LOBYTE(v319[2]);
              v71 = *(_QWORD *)(a1 + 424);
              v72 = *(struct tagWND **)(v71 + 120);
              v297 = v72;
              if ( !*(_QWORD *)(v71 + 120) )
              {
                v72 = *(struct tagWND **)(v71 + 128);
                v297 = v72;
                if ( !v72 )
                  goto LABEL_309;
                if ( v294 - 256 <= 3 )
                  v294 += 4;
              }
              ThreadLockExchangeAlways(v72, &v330);
              if ( *((_QWORD *)v297 + 2) == a1 )
              {
                v301 = 0;
                goto LABEL_163;
              }
              v301 = 1;
              if ( *(_QWORD *)(*((_QWORD *)v297 + 2) + 424LL) != *(_QWORD *)(a1 + 424) )
                goto LABEL_309;
              if ( (unsigned int)IsInsideMenuLoop(a1) )
              {
                v73 = *(_QWORD *)(**(_QWORD **)(a1 + 600) + 8LL);
                goto LABEL_158;
              }
              v74 = *(_QWORD *)(a1 + 664);
              if ( v74 )
              {
                v73 = *(_QWORD *)(v74 + 16);
LABEL_158:
                if ( v73 )
                {
                  v297 = (struct tagWND *)v73;
                  v301 = *(_QWORD *)(v73 + 16) != a1;
                  ThreadLockExchangeAlways(v73, &v330);
                }
              }
              if ( !v326 )
              {
                v326 = *((_QWORD *)v297 + 2);
                LockExchangeW32Thread(v326, (__int64)v348);
              }
LABEL_163:
              if ( !v308 && a5 == -1 )
                goto LABEL_171;
              if ( v308 > a5 )
              {
                if ( v294 >= a5 && v294 <= v308 )
                {
                  v11 = v299;
                  goto LABEL_23;
                }
                goto LABEL_171;
              }
              v11 = v299;
              LOBYTE(v8) = v296;
              if ( v294 >= v308 && v294 <= a5 )
              {
LABEL_171:
                v75 = CheckPwndFilter(v297, *(_QWORD *)v312);
                v11 = v299;
                LOBYTE(v8) = v296;
                if ( v75 )
                {
                  if ( v301 )
                    goto LABEL_719;
                  if ( v295 )
                  {
                    if ( (DWORD1(v319[6]) & 0x40000) != 0 )
                      goto LABEL_196;
                    if ( !(unsigned int)IsInsideMenuLoop(a1) )
                    {
                      if ( (_QWORD)v303 == 93LL && v294 == 257 )
                      {
                        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                        v76 = 0LL;
                        if ( v297 )
                          v76 = *(_QWORD *)v297;
                        PostTransformableMessage(v297, 0x7Bu, v76, -1LL, 0);
                        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                      }
                      if ( (_QWORD)v303 == 112LL && v294 == 256 )
                      {
                        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                        PostMessage((int)v297, 77, 0, 0);
                        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                      }
                    }
                  }
                  if ( (_QWORD)v303 == 16LL )
                  {
                    v77 = DWORD2(v319[2]) & 0x1000000;
                    if ( !v315 )
                    {
                      v78 = 1;
                      if ( (DWORD2(v319[2]) & 0x1000000) == 0 )
                        v78 = 4;
                      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 424) + 276LL) & (unsigned __int8)v78) != 0
                        && (unsigned int)IsDesktopApp(*(_QWORD *)(a1 + 416))
                        && (*(_DWORD *)(a1 + 480) & 8) == 0 )
                      {
                        *(_QWORD *)&v319[2] = (v77 != 0) + 160LL;
                        goto LABEL_15;
                      }
                    }
                  }
                  v329 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)v303 >> 2)
                                            + *(_QWORD *)(a1 + 424)
                                            + 236) & (1 << (2 * (v303 & 3)));
                  if ( v329 )
                  {
                    if ( !v295 )
                      goto LABEL_202;
                    if ( NextSysMsg > 1 )
                      *(_QWORD *)(NextSysMsg + 40) |= 0x40000000uLL;
                  }
LABEL_196:
                  if ( v295 )
                  {
                    if ( (DWORD1(v319[6]) & 0x40000) == 0 && NextSysMsg > 1 && (*(_DWORD *)(a1 + 1224) & 0x8000000) != 0 )
                    {
                      v79 = (unsigned int *)xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v319, 0);
                      v320 = v79;
                      goto LABEL_203;
                    }
                    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v319, 1u);
                  }
LABEL_202:
                  v79 = v320;
LABEL_203:
                  v80 = *((_QWORD *)&v319[2] + 1);
                  v303 = v319[2];
                  if ( v329 )
                  {
                    v80 = *((_QWORD *)&v319[2] + 1) | 0x40000000LL;
                    *((_QWORD *)&v303 + 1) = *((_QWORD *)&v319[2] + 1) | 0x40000000LL;
                  }
                  if ( v294 == 257 || v294 == 261 )
                  {
                    v80 |= 0x80000000uLL;
                    *((_QWORD *)&v303 + 1) = v80;
                  }
                  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 424) + 240LL) & 0x10) != 0 )
                    *((_QWORD *)&v303 + 1) = v80 | 0x20000000;
                  if ( (unsigned int)IsMenuStarted(a1) )
                    *((_QWORD *)&v303 + 1) |= 0x10000000uLL;
                  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 424) + 396LL) & 0x4000) != 0 )
                    *((_QWORD *)&v303 + 1) |= 0x8000000uLL;
                  if ( (v27 || gpImeHotKeyListHeader) && (DWORD1(v319[6]) & 0x40000) == 0 )
                  {
                    if ( !v295 )
                      goto LABEL_243;
                    if ( !(unsigned int)IsMenuStarted(a1) && (*(_DWORD *)(a1 + 480) & 0x2000000) == 0 && v297 )
                    {
                      v81 = v303;
                      if ( (_QWORD)v303 == 231LL )
                        v81 = 231;
                      *(_QWORD *)(a1 + 1240) = *((_QWORD *)&v319[7] + 1);
                      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                      v82 = xxxImmProcessKey(*(_QWORD *)(a1 + 424), (__int64 *)v297, v294, v81, *((__int64 *)&v303 + 1));
                      v83 = v82;
                      v318 = v82;
                      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                      if ( (v83 & 0x11) != 0 )
                      {
                        if ( v79 )
                          FreeQEntry(v79);
                        v320 = 0LL;
                        goto LABEL_309;
                      }
                    }
                  }
                  if ( !v295 )
                    goto LABEL_243;
                  v310 = 1;
                  v84 = 0;
                  if ( (DWORD1(v319[6]) & 0x40000) != 0 )
                    goto LABEL_242;
                  v85 = *(_QWORD *)(a1 + 424);
                  v86 = *(_QWORD *)(v85 + 416);
                  *(_QWORD *)(v85 + 416) = *((_QWORD *)&v319[4] + 1);
                  *(_QWORD *)(a1 + 1240) = *((_QWORD *)&v319[7] + 1);
                  KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
                    (KeyboardInputTelemetry *)gKeyboardInputTelemetry,
                    *(_DWORD *)(*(_QWORD *)a1 + 1616LL));
                  CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  v84 = xxxCallCtfHook(2, v318 & 2, v303, *((__int64 *)&v303 + 1));
                  CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                  *(_QWORD *)(*(_QWORD *)(a1 + 424) + 416LL) = v86;
                  if ( !v79 )
                    goto LABEL_241;
                  if ( (unsigned int)(v84 - 2) > 1
                    || (*(_DWORD *)(a1 + 1224) & 0x10000000) != 0
                    || !AllocQEntryEx((struct tagMLIST *)(*(_QWORD *)(a1 + 424) + 24LL), (struct tagQMSG *)v79, 1) )
                  {
                    FreeQEntry(v79);
                    v320 = 0LL;
LABEL_241:
                    KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
                      (KeyboardInputTelemetry *)gKeyboardInputTelemetry,
                      *(_DWORD *)(*(_QWORD *)a1 + 1616LL),
                      ((DWORD2(v319[1]) - 257) & 0xFFFFFFFB) == 0);
LABEL_242:
                    if ( !v84 )
                    {
LABEL_243:
                      if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_BYTE *)(a1 + 672)) & 8) == 0 )
                        goto LABEL_248;
                      v310 = 1;
                      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                      v88 = 3;
                      if ( v295 )
                        v88 = 0;
                      if ( !(unsigned int)xxxCallHook(v88, v303, *((__int64 *)&v303 + 1), 2) )
                      {
                        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
LABEL_248:
                        if ( v310
                          && v295
                          && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_BYTE *)(a1 + 672)) & 0x40) != 0 )
                        {
                          CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                          v89 = (__int64 *)*((_QWORD *)&v303 + 1);
                          v90 = v303;
                          v91 = 7;
                          goto LABEL_252;
                        }
                        goto LABEL_686;
                      }
LABEL_308:
                      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
                    }
LABEL_309:
                    v105 = v298;
                    goto LABEL_310;
                  }
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    LOBYTE(v87) = 4;
                    WPP_RECORDER_SF_qqq(
                      (__int64)gFullLog,
                      v87,
                      0x12u,
                      0x20u,
                      (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 24LL),
                      *(_QWORD *)(a1 + 424),
                      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL));
                  }
                  *(_QWORD *)(*(_QWORD *)(a1 + 424) + 88LL) = *(_QWORD *)(*(_QWORD *)(a1 + 424) + 24LL);
                  if ( v84 == 2 )
                  {
                    v11 = 1;
                  }
                  else
                  {
                    v11 = v299;
                    if ( v84 == 3 )
                      v11 = 2;
                  }
                  v299 = v11;
                  DeferSysPeekMsg(a1, v11);
                  v320 = 0LL;
LABEL_23:
                  LOBYTE(v8) = v296;
                }
              }
              goto LABEL_24;
            }
            if ( (GetAppImeCompatFlags(0LL, v52, v67, v37) & 0x800000) != 0 )
              goto LABEL_140;
            if ( BYTE10(v319[2]) != 41 )
              goto LABEL_140;
            if ( !v295 )
              goto LABEL_140;
            v68 = *(_QWORD *)(a1 + 424);
            if ( (*(_BYTE *)(v68 + 240) & 0x15) != 0
              || (*(_BYTE *)(v68 + 258) & 0x40) != 0
              || (*(_BYTE *)(v68 + 259) & 1) != 0 )
            {
              goto LABEL_140;
            }
            v69 = *(_QWORD *)(v68 + 120);
            v297 = (struct tagWND *)v69;
            v70 = v69;
            if ( !v69 )
            {
              v69 = *(_QWORD *)(v68 + 128);
              v297 = (struct tagWND *)v69;
              v70 = v69;
            }
            if ( v70 && *(_QWORD *)(v69 + 16) != a1 )
            {
LABEL_140:
              v67 = v303;
              goto LABEL_141;
            }
            xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v319, 1u);
            v11 = v299;
            LOBYTE(v8) = v296;
            if ( !v315 && v297 )
            {
              v369 = *(_QWORD *)v297;
              v370 = 80;
              v371 = 0LL;
              v372 = 0LL;
              v373 = 0LL;
              v374 = 0LL;
              v375 = 0;
              CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
              xxxCallCtfHook(3, 0, 1LL, (__int64)&v369);
              CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
              goto LABEL_17;
            }
            break;
          case 0x101:
          case 0x105:
            v52 = *(_QWORD *)&v319[2];
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
      if ( (DWORD1(v319[6]) & 0x400000) != 0 )
      {
        v100 = *(struct tagWND **)(*(_QWORD *)(a1 + 424) + 120LL);
        v297 = v100;
      }
      else
      {
        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
        if ( v297 && (unsigned int)IsCompositionInputWindowForHitTest(v297) )
        {
          v101 = 1;
          if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v297) )
            goto LABEL_308;
          ThreadDesktopWindow = v297;
        }
        else
        {
          ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(0LL);
          v297 = ThreadDesktopWindow;
          v101 = 0;
        }
        v344 = 0uLL;
        v345 = 0LL;
        v109 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v102, v103, v104);
        *(_QWORD *)&v344 = *(_QWORD *)(v109 + 408);
        *(_QWORD *)(v109 + 408) = &v344;
        *((_QWORD *)&v344 + 1) = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          HMLockObject(ThreadDesktopWindow);
        v110 = xxxDCEWindowHitTest(
                 (_DWORD)v297,
                 512,
                 v319[2],
                 DWORD2(v319[2]),
                 *(__int64 *)&v319[5],
                 (__int64)&v304,
                 8 * v101 + 1);
        LOBYTE(v111) = 1;
        v297 = (struct tagWND *)HMValidateHandleNoSecure(v110, v111, v112, v113);
        LOBYTE(v114) = 1;
        v117 = (struct tagWND *)HMValidateHandleNoSecure(v110, v114, v115, v116);
        InputTraceLogging::Mouse::SecondaryHitTest(
          (const struct tagQMSG *)v319,
          (const struct tagPOINT *)&v319[5],
          v117);
        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
        ThreadUnlock1(v119, v118, v120);
        v100 = v297;
      }
      if ( !v100 )
        goto LABEL_309;
      ThreadLockExchangeAlways(v100, &v330);
      if ( *((_QWORD *)v297 + 2) == a1 )
      {
        v301 = 0;
      }
      else
      {
        v301 = 1;
        v121 = *((_QWORD *)v297 + 2);
        if ( *(_QWORD *)(v121 + 424) != *(_QWORD *)(a1 + 424) )
          goto LABEL_309;
        if ( !v326 )
        {
          v326 = *((_QWORD *)v297 + 2);
          LockExchangeW32Thread(v121, (__int64)v348);
        }
      }
      v122 = MiPCheckMsgFilter((struct tagQMSG *)NextSysMsg, v294, v308, a5);
      v11 = v299;
      LOBYTE(v8) = v296;
    }
    while ( !v122 || !(unsigned int)CheckPwndFilter(v297, *(_QWORD *)v312) );
    if ( v301 )
      goto LABEL_719;
    if ( !NextSysMsg || !(unsigned int)IsMouseInPointerActive(a1) )
      goto LABEL_353;
    if ( (*(_DWORD *)(NextSysMsg + 100) & 0x800) == 0 )
    {
      if ( !v295 )
        goto LABEL_355;
      if ( !IsMiPMouseMessage(*(_DWORD *)(NextSysMsg + 24)) )
        goto LABEL_353;
      if ( !(unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(NextSysMsg + 120))
        || (v125 = *(_DWORD **)(a1 + 1280)) == 0LL
        || (*v125 & 2) != 0
        || (*v125 & 4) != 0 )
      {
        v126 = *(_DWORD **)(a1 + 1280);
        if ( v126 )
          *v126 &= ~2u;
LABEL_353:
        if ( v295 )
          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v319, 1u);
LABEL_355:
        MouseKeyFlags = GetMouseKeyFlags(*(unsigned __int8 **)(a1 + 424));
        v303 = v319[2] | MouseKeyFlags;
        v302.x = SWORD4(v319[2]);
        v302.y = SWORD5(v319[2]);
        PhysicalToLogicalDPIPointWithHitTest(&v302, &v302, 0LL, v297);
        *((_QWORD *)&v303 + 1) = (LOWORD(v302.y) << 16) | LOWORD(v302.x);
        *(struct tagPOINT *)((char *)&v319[3] + 4) = v302;
        v333 = (__int64)v302;
        if ( v297 )
          v334 = *(_QWORD *)v297;
        else
          v334 = 0LL;
        LODWORD(v335) = 0;
        v336 = *((_QWORD *)&v319[4] + 1);
        LODWORD(v337) = v319[2];
        if ( v295 )
        {
          v105 = 1;
          v298 = 1;
          CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
          if ( (unsigned int)xxxCallCtfHook(7, 0, v294, (__int64)&v333) )
          {
LABEL_543:
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
            goto LABEL_310;
          }
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
        }
        else
        {
          v105 = v298;
        }
        if ( ((*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_DWORD *)(a1 + 672)) & 0x100) != 0 )
        {
          v105 = 1;
          v298 = 1;
          CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
          if ( (unsigned int)xxxCallMouseHook(v294, &v333, (unsigned int)v295) )
            goto LABEL_543;
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
        }
        if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
          goto LABEL_370;
        v131 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v128, v129, v130) + 472);
        v306 = 0;
        v306 = *(_QWORD *)(v131 + 248) != 0LL;
        if ( !v306 )
          goto LABEL_370;
        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
        if ( xxxClientCallLocalMouseHooks(v294, &v333, (unsigned int)v295) )
          goto LABEL_543;
        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
LABEL_370:
        if ( v105
          && v295
          && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_BYTE *)(a1 + 672)) & 0x40) != 0 )
        {
          CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
          v90 = v294;
          v89 = &v333;
          v91 = 6;
LABEL_252:
          xxxCallHook(v91, v90, (__int64)v89, 5);
          CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
        }
LABEL_686:
        if ( *(_QWORD *)(a1 + 756) != *(_QWORD *)((char *)&v319[3] + 4) )
          *(_DWORD *)(a1 + 480) |= 0x100000u;
        if ( NextSysMsg > 1 && (BYTE4(v319[6]) & 0x20) != 0 )
        {
          if ( *(_DWORD *)(NextSysMsg + 24) == 512 )
          {
            if ( v297 )
              v244 = *(_QWORD *)v297;
            else
              v244 = 0LL;
            *(_QWORD *)(NextSysMsg + 16) = v244;
            *(_DWORD *)(NextSysMsg + 100) |= 0x400u;
          }
          *(_QWORD *)(NextSysMsg + 64) = *((_QWORD *)&v303 + 1);
        }
        *(_QWORD *)(a1 + 756) = *(_QWORD *)((char *)&v319[3] + 4);
        *(_DWORD *)(a1 + 764) = *(_DWORD *)(*((_QWORD *)v297 + 5) + 288LL);
        *(_QWORD *)(a1 + 768) = *(_QWORD *)&v319[5];
        *(_DWORD *)(a1 + 560) = v319[3];
        *(_QWORD *)(*(_QWORD *)(a1 + 424) + 416LL) = *((_QWORD *)&v319[4] + 1);
        *(_QWORD *)(*(_QWORD *)(a1 + 424) + 80LL) = 1LL;
        *(_QWORD *)(a1 + 568) = 1LL;
        *(_QWORD *)(a1 + 1240) = *((_QWORD *)&v319[7] + 1);
        *(_DWORD *)(a1 + 1288) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( *(_DWORD *)(a1 + 1244) == 1 )
          *(_DWORD *)(a1 + 1224) |= 0x20000u;
        else
          *(_DWORD *)(a1 + 1224) &= ~0x20000u;
        **(_DWORD **)(a1 + 440) &= ~8u;
        **(_QWORD **)(a1 + 472) &= 0x7FFFFFFFuLL;
        if ( v295 )
        {
          v245 = *(_QWORD **)(a1 + 472);
          if ( (BYTE4(v319[6]) & 1) != 0 )
            *v245 |= 0x1000uLL;
          else
            *v245 &= ~0x1000uLL;
        }
        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
        TransferWakeBit(a1, v294);
        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
        ClearWakeBit(a1, 31751, 1);
        v246 = v295;
        if ( v295 )
        {
          if ( v309 )
          {
            v247 = *(_DWORD **)(a1 + 1280);
            if ( v247 )
            {
              if ( (*v247 & 1) != 0 && (*v247 & 4) != 0 )
              {
                SetMiPWakeBit((struct tagTHREADINFO *)a1);
                v246 = v295;
              }
            }
          }
        }
        if ( v297 )
          v10 = *(_QWORD *)v297;
        v248 = v342;
        *(_QWORD *)v342 = v10;
        *((_DWORD *)v248 + 2) = v294;
        v249 = v303;
        if ( (v318 & 2) != 0 )
          v249 = 229LL;
        *((_QWORD *)v248 + 2) = v249;
        *((_QWORD *)v248 + 3) = *((_QWORD *)&v303 + 1);
        *((_DWORD *)v248 + 8) = v319[3];
        *(_QWORD *)((char *)v248 + 36) = *(_QWORD *)((char *)&v319[3] + 4);
        InputTraceLogging::Delivery::ScanSysQueue(
          (const struct tagQMSG *)v319,
          v248,
          (const struct tagTHREADINFO *)a1,
          v246 != 0);
        if ( v295 )
        {
          EtwTraceInputProcessDelay(a1);
          *(_DWORD *)(*(_QWORD *)(a1 + 424) + 424LL) = (MEMORY[0xFFFFF78000000320]
                                                      * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          v250 = *((_DWORD *)v248 + 2);
          if ( v250 == 256 )
          {
            *(_DWORD *)(a1 + 1344) |= 1u;
            *(_QWORD *)(a1 + 1328) = *(_QWORD *)(a1 + 1240);
            *(_DWORD *)(a1 + 1320) = *((unsigned __int16 *)v248 + 13);
            *(_DWORD *)(a1 + 1324) = *((_DWORD *)v248 + 4);
            *(_QWORD *)(a1 + 1336) = *(_QWORD *)&v319[9];
          }
          else if ( ((v250 - 257) & 0xFFFFFFFB) == 0 )
          {
            *(_DWORD *)(a1 + 1344) &= ~1u;
          }
        }
        EtwTraceRetrieveInputMessage(v248, (unsigned int)v295);
        PopAndFreeW32ThreadLock((__int64)v350, v251, v252, v253);
        PopAndFreeW32ThreadLock((__int64)v351, v254, v255, v256);
        PopAndFreeW32ThreadLock((__int64)v352, v257, v258, v259);
        PopAndFreeW32ThreadLock((__int64)v349, v260, v261, v262);
        PopAndFreeW32ThreadLock((__int64)v348, v263, v264, v265);
        ThreadUnlock1(v267, v266, v268);
        CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
        return 1LL;
      }
      xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v319, 1u);
LABEL_17:
      LOBYTE(v8) = v296;
      goto LABEL_18;
    }
    memset(v386, 0, 0xA8uLL);
    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
    CMultiPerObjectLockExclusive<1>::CMultiPerObjectLockExclusive<1>(&v313, (char *)v297 + 56);
    HasTransform = InputTransform::HasTransform(v297, v123);
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
    if ( !HasTransform )
      *(_DWORD *)(NextSysMsg + 100) &= ~0x2000u;
    if ( !GeneratePointerMessageFromMouse((struct tagQMSG *)v386, v294, (struct tagQMSG *)NextSysMsg, v297, v295) )
    {
      if ( v295 )
      {
        *(_DWORD *)(NextSysMsg + 100) &= ~0x800u;
        goto LABEL_353;
      }
      goto LABEL_355;
    }
    v319[0] = v386[0];
    v319[1] = v386[1];
    v319[2] = v386[2];
    v319[3] = v386[3];
    v319[4] = v386[4];
    v319[5] = v386[5];
    v319[6] = v386[6];
    v319[7] = v386[7];
    v319[8] = v386[8];
    v319[9] = v386[9];
    *(_QWORD *)&v319[10] = *(_QWORD *)&v386[10];
    v8 = 1;
    v309 = 1;
    v105 = v298;
    if ( v295 )
      *(_DWORD *)(NextSysMsg + 100) &= ~0x800u;
LABEL_650:
    LODWORD(v49) = DWORD2(v319[1]);
LABEL_651:
    if ( ((DWORD2(v319[7]) - 2) & 0xFFFFFFCF) == 0 && DWORD2(v319[7]) != 50 )
    {
      v294 = v49;
      v303 = v319[2];
LABEL_654:
      if ( v295 )
      {
        if ( (unsigned int)IsMouseInPointerActive(a1) && v8 )
        {
          v233 = 0LL;
          if ( v297 )
            v233 = *(_QWORD *)v297;
          *(_QWORD *)(*(_QWORD *)(a1 + 1280) + 48LL) = v233;
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1280) + 36LL) & 0x400000) != 0 )
          {
            CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
            v234 = IsCompositionInputWindow(v297);
            CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
            if ( !v234 )
              *(_DWORD *)(*(_QWORD *)(a1 + 1280) + 36LL) &= ~0x400000u;
          }
          MiPWindowFlags = GetMiPWindowFlags(v297);
          SetMiPWindowFlags(v297, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
          if ( ((DWORD2(v319[1]) - 578) & 0xFFFFFFFB) != 0 )
          {
            if ( ((DWORD2(v319[1]) - 579) & 0xFFFFFFFB) == 0 )
              **(_DWORD **)(a1 + 1280) &= ~8u;
          }
          else
          {
            v241 = 0;
            if ( DWORD2(v319[1]) == 578 )
              v241 = 8;
            **(_DWORD **)(a1 + 1280) = v241 | **(_DWORD **)(a1 + 1280) & 0xFFFFFFF7;
          }
        }
        else
        {
          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v319, 1u);
        }
      }
      if ( CTouchProcessor::IsPointerMessageTouchpad(
             gpTouchProcessor,
             (struct tagTHREADINFO *)a1,
             *((unsigned __int64 *)&v319[2] + 1),
             v8) )
      {
        if ( !v295
          && !(unsigned int)IsPTPAllowedOnThread(
                              (struct tagTHREADINFO *)a1,
                              DWORD2(v319[1]),
                              *(unsigned __int64 *)&v319[2]) )
        {
          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v319, 1u);
        }
        v242 = IsStatelessPointerInputMessage(v294);
        v243 = *((_QWORD *)&v303 + 1);
        if ( v242 )
          v243 = -1LL;
        *((_QWORD *)&v303 + 1) = v243;
      }
      goto LABEL_686;
    }
    EtwTraceBeginPointerMessageRetrieve(NextSysMsg, LOWORD(v319[2]), (unsigned int)v49);
    v236 = (unsigned int)xxxRetrievePointerInputMessage(
                           a1,
                           v312[0],
                           v308,
                           a5,
                           1,
                           0,
                           &v295,
                           (struct tagQMSG *)NextSysMsg,
                           (__int64)&v297,
                           (__int64)&v294,
                           (__int64)&v303,
                           (__int64)&v303 + 8,
                           &v301,
                           v311,
                           (int)&v293);
    InputTraceLogging::Pointer::RetrieveMessage(NextSysMsg, 0LL, v236);
    EtwTraceEndPointerMessageRetrieve(NextSysMsg, LOWORD(v319[2]), DWORD2(v319[1]));
    v237 = v297;
    if ( v297 )
    {
      ThreadLockExchange(v297, &v330);
      v237 = v297;
    }
    v238 = v236 - 1;
    if ( !v238 )
      goto LABEL_654;
    v239 = v238 - 1;
    if ( !v239 )
      break;
    v240 = v239 - 1;
    if ( !v240 )
    {
      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
      xxxDefPointerProc(v297, DWORD2(v319[1]), *(_QWORD *)&v319[2], *((_QWORD *)&v319[2] + 1));
      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
      *v311 = 0LL;
      goto LABEL_310;
    }
    *v311 = 0LL;
    if ( v240 == 1 )
    {
      v11 = v299;
      goto LABEL_23;
    }
LABEL_310:
    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)v319, 1u);
    if ( v105 )
    {
      v106 = *(_QWORD *)(a1 + 456);
      v25 = (unsigned int)(*(_DWORD *)(a1 + 672) | *(_DWORD *)(*(_QWORD *)v106 + 16LL));
      if ( ((*(_BYTE *)(a1 + 672) | *(_BYTE *)(*(_QWORD *)v106 + 16LL)) & 0x40) != 0 )
      {
        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
        xxxCallHook(6, v294, (__int64)&v333, 5);
        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
      }
      v298 = 0;
    }
    if ( v310 )
    {
      v107 = *(_QWORD *)(a1 + 456);
      v25 = (unsigned int)(*(_DWORD *)(a1 + 672) | *(_DWORD *)(*(_QWORD *)v107 + 16LL));
      if ( ((*(_BYTE *)(a1 + 672) | *(_BYTE *)(*(_QWORD *)v107 + 16LL)) & 0x40) != 0 )
      {
        CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
        xxxCallHook(7, v303, *((__int64 *)&v303 + 1), 5);
        CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
      }
      v310 = 0;
    }
    v11 = v299;
    LOBYTE(v8) = v296;
    if ( v295 )
      goto LABEL_17;
  }
  if ( v301 )
  {
    v327 = *((_QWORD *)v237 + 2);
    LockExchangeW32Thread(v327, (__int64)v350);
  }
LABEL_719:
  v51 = v305;
LABEL_720:
  v269 = &WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids;
  *(_QWORD *)(*(_QWORD *)(a1 + 424) + 80LL) = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v269) = 4;
    WPP_RECORDER_SF_qq(
      (__int64)gFullLog,
      (__int64)v269,
      0x12u,
      0x21u,
      (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
      *(_QWORD *)(a1 + 424),
      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 72LL));
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 424) + 72LL) = 0LL;
  **(_DWORD **)(a1 + 440) &= ~1u;
  v270 = v326;
  v271 = v321;
  if ( v326 || v51 || v328 || v321 || v327 )
  {
    CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
    CMultiPerObjectLockExclusive<7>::CMultiPerObjectLockExclusive<7>((__int64)v314);
    if ( v270 )
    {
      SetWakeBit(v270, 0x4001u);
      ClearWakeBit(a1, 16385, 0);
    }
    if ( v51 )
    {
      SetWakeBit(v51, 0x4006u);
      ClearWakeBit(a1, 16390, 0);
    }
    if ( v271 )
    {
      SetWakeBit(v271, 0x4400u);
      ClearWakeBit(a1, 17408, 0);
    }
    if ( v327 )
    {
      SetWakeBit(v327, 0x5000u);
      ClearWakeBit(a1, 20480, 0);
    }
    if ( v328 )
    {
      SetWakeBit(v328, 0x2040u);
      ClearWakeBit(a1, 0x2000, 0);
    }
    else if ( *(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v275, v276, v277) + 456)
                        + 56LL) )
    {
      CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
      *(_WORD *)(*(_QWORD *)(a1 + 440) + 8LL) |= *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) & 0x5C07;
      ClearWakeBit(a1, 23559, 0);
      *(_WORD *)(*(_QWORD *)(a1 + 440) + 4LL) &= 0xA3F8u;
      CMultiPerObjectLockExclusivePpiPtiQ::unlock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
    }
    CMultiPerObjectLockExclusivePpiPtiQ::lock((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
  }
  else
  {
    *(_WORD *)(*(_QWORD *)(a1 + 440) + 8LL) = 0;
    ClearWakeBit(a1, 31751, 1);
  }
  PopAndFreeW32ThreadLock((__int64)v350, v272, v273, v274);
  PopAndFreeW32ThreadLock((__int64)v351, v278, v279, v280);
  PopAndFreeW32ThreadLock((__int64)v352, v281, v282, v283);
  PopAndFreeW32ThreadLock((__int64)v349, v284, v285, v286);
  PopAndFreeW32ThreadLock((__int64)v348, v287, v288, v289);
  ThreadUnlock1(v291, v290, v292);
LABEL_742:
  CMultiPerObjectLockExclusivePpiPtiQ::~CMultiPerObjectLockExclusivePpiPtiQ((CMultiPerObjectLockExclusivePpiPtiQ *)&v293);
  return 0LL;
}
