/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0047090 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00052E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C000554C (-DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@H@Z.c)
 *     DeferMessagesOnQueue @ 0x1C00059AC (DeferMessagesOnQueue.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C000C670 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C000F124 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     IsHiddenByInputService @ 0x1C000F944 (IsHiddenByInputService.c)
 *     FreeQEntry @ 0x1C000F9A0 (FreeQEntry.c)
 *     zzzSetCursor @ 0x1C001574C (zzzSetCursor.c)
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C0019A54 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C0019B5C (-IsMiPMouseMessage@@YAHI@Z.c)
 *     InternalSetTimer @ 0x1C001A1B0 (InternalSetTimer.c)
 *     xxxCallCtfHook @ 0x1C001C1F4 (xxxCallCtfHook.c)
 *     PostEventMessageEx @ 0x1C001C3FC (PostEventMessageEx.c)
 *     WakeSomeone @ 0x1C001C69C (WakeSomeone.c)
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     PtiMouseFromQ @ 0x1C001DEE0 (PtiMouseFromQ.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     IsPointerInputMessage @ 0x1C0023E34 (IsPointerInputMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C00351EC (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003547C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     PhkNextValid @ 0x1C003BC60 (PhkNextValid.c)
 *     xxxProcessEventMessage @ 0x1C003C798 (xxxProcessEventMessage.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     IsInsideMenuLoop @ 0x1C0056EB4 (IsInsideMenuLoop.c)
 *     xxxTrackMouseMove @ 0x1C005CF1C (xxxTrackMouseMove.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C005FD6C (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     LockExchangeW32Thread @ 0x1C00614C8 (LockExchangeW32Thread.c)
 *     _PostTransformableMessage @ 0x1C0061C04 (_PostTransformableMessage.c)
 *     GetMouseKeyFlags @ 0x1C006343C (GetMouseKeyFlags.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C0064684 (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     ?LoadPointerDevicePenSettings@@YAHXZ @ 0x1C00655A0 (-LoadPointerDevicePenSettings@@YAHXZ.c)
 *     IsThreadDesktopComposed @ 0x1C0066CF8 (IsThreadDesktopComposed.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006E820 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C00BD66C (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C00BD6A4 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     xxxDCEWindowHitTest @ 0x1C00D62E0 (xxxDCEWindowHitTest.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C00D68D0 (xxxDCEWindowHitTestIndirect.c)
 *     xxxCallMouseHook @ 0x1C00D7154 (xxxCallMouseHook.c)
 *     xxxWindowHitTest @ 0x1C00DAA44 (xxxWindowHitTest.c)
 *     ThreadLockExchangeAlways @ 0x1C00DACD0 (ThreadLockExchangeAlways.c)
 *     ThreadLockExchange @ 0x1C00DACFC (ThreadLockExchange.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C00DAD58 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00E5604 (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     xxxImmProcessKey @ 0x1C00EA7F4 (xxxImmProcessKey.c)
 *     GetAppImeCompatFlags @ 0x1C00EAAD8 (GetAppImeCompatFlags.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C00EBB00 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C00EBEDC (-MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z.c)
 *     IsMouseInPointerActive @ 0x1C00EBF68 (IsMouseInPointerActive.c)
 *     IsThreadMiPEnabled @ 0x1C00EBFAC (IsThreadMiPEnabled.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00ED278 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     GetThreadDesktopWindow @ 0x1C00F06E0 (GetThreadDesktopWindow.c)
 *     TransferWakeBit @ 0x1C00F2D20 (TransferWakeBit.c)
 *     CheckPwndFilter @ 0x1C00F6928 (CheckPwndFilter.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C00F9398 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C00F9564 (PhysicalToLogicalInPlacePointWithParent.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0103948 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     xxxSnapWindow @ 0x1C0134044 (xxxSnapWindow.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     ?IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z @ 0x1C0139F80 (-IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01AA854 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01AABF0 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01AAEDC (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01AB650 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01AB67C (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     SetMiPPromotion @ 0x1C01ABFDC (SetMiPPromotion.c)
 *     xxxCallJournalPlaybackHook @ 0x1C01B052C (xxxCallJournalPlaybackHook.c)
 *     FreePointerMessageParams @ 0x1C01B84E4 (FreePointerMessageParams.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01B8C08 (xxxRetrievePointerInputMessage.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01B9548 (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C01D19CC (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01D4E34 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxClientCallLocalMouseHooks @ 0x1C01E0E00 (xxxClientCallLocalMouseHooks.c)
 *     MNItemHitTest @ 0x1C01E5304 (MNItemHitTest.c)
 *     xxxCallHandleMenuMessages @ 0x1C01E5680 (xxxCallHandleMenuMessages.c)
 *     xxxDefPointerProc @ 0x1C01FF9A4 (xxxDefPointerProc.c)
 *     HotKeyToWindow @ 0x1C01FFB4C (HotKeyToWindow.c)
 *     ?HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z @ 0x1C01FFCCC (-HitTestScrollBar@@YAHPEAUtagWND@@HUtagPOINT@@@Z.c)
 *     ?FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z @ 0x1C020BD70 (-FindDevice@InteractiveControlManager@@AEAAJKPEAXPEAPEAVInteractiveControlDevice@@PEAK@Z.c)
 *     ?GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z @ 0x1C0211788 (-GetInputReport@InteractiveControlDevice@@QEAAHKPEAPEAVInteractiveControlInput@@@Z.c)
 *     _W32ExceptionHandler @ 0x1C0216FFC (_W32ExceptionHandler.c)
 */

__int64 __fastcall xxxScanSysQueue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        char a6,
        int a7,
        struct tagQMSG **a8)
{
  int v9; // esi
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // eax
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v21; // rdi
  __int64 v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 *v25; // rax
  struct _KTHREAD *v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v30; // rax
  struct _KTHREAD *v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 *v35; // rax
  struct _KTHREAD *v36; // rdi
  __int64 v37; // rbx
  __int64 *v38; // rax
  unsigned int v39; // r15d
  unsigned __int64 i; // rdx
  _DWORD *v41; // rax
  __int64 *v42; // rdi
  __int64 v43; // r8
  __int64 v44; // rbx
  __int64 Valid; // rcx
  struct tagMLIST *v46; // rcx
  unsigned int v47; // eax
  unsigned __int64 *v48; // rax
  int v49; // eax
  __int64 v50; // rax
  int v51; // eax
  _QWORD *v52; // r15
  unsigned __int64 v53; // rbx
  __int64 v54; // rsi
  struct _KTHREAD *v55; // rdi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r9
  __int64 v59; // r8
  __int64 v60; // rdi
  __int64 *v61; // r14
  unsigned __int64 v62; // rbx
  __int64 v63; // r14
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rbx
  _QWORD *v68; // rdx
  int v69; // eax
  unsigned int v71; // r12d
  __int64 v72; // r12
  __int64 v73; // rcx
  __int64 v74; // rdi
  unsigned int v75; // edi
  __int64 v76; // r8
  __int64 v77; // r10
  _QWORD *v78; // rdi
  char v79; // r9
  int v80; // ebx
  struct tagWND *v81; // rcx
  bool v82; // zf
  _BOOL8 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  unsigned int v87; // ecx
  unsigned int v88; // edx
  __int64 v89; // rcx
  _QWORD *v90; // rax
  __int64 v91; // r11
  __int64 v92; // rsi
  __int64 AppImeCompatFlags; // rax
  _QWORD *v94; // rdx
  __int64 v95; // rcx
  _QWORD *v96; // rbx
  _QWORD *v97; // rdi
  KeyboardInputTelemetry **v98; // rsi
  __int64 v99; // rax
  __int64 v100; // rbx
  __int64 *v101; // rbx
  __int64 v102; // rcx
  BOOL v103; // edi
  BOOL v104; // edx
  __int64 v105; // rcx
  __int64 v106; // rcx
  int v107; // eax
  unsigned __int8 v108; // r8
  struct tagQMSG *v109; // rbx
  struct tagQMSG *v110; // rdi
  int v111; // r9d
  KeyboardInputTelemetry *v112; // r10
  __int64 v113; // rcx
  int v114; // edi
  KeyboardInputTelemetry *v115; // rcx
  __int64 v116; // rbx
  int v117; // eax
  KeyboardInputTelemetry *v118; // rcx
  unsigned int *v119; // rbx
  int v120; // ecx
  __int64 v121; // rax
  __int64 v122; // rdi
  __int64 v123; // rcx
  __int64 v124; // rax
  int v125; // ebx
  __int64 v126; // rdi
  __int64 v127; // rcx
  __int64 v128; // rcx
  bool v129; // zf
  unsigned int v130; // edi
  unsigned int v131; // ebx
  InteractiveControlManager *v132; // rax
  int v133; // ecx
  int v134; // ecx
  __int64 v135; // rdx
  __int64 v136; // rax
  struct tagWND *v137; // rcx
  unsigned __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // r8
  __int64 v143; // rbx
  struct tagQMSG *v144; // rdi
  int v145; // eax
  int v146; // esi
  _DWORD *v147; // rax
  _DWORD *v148; // rax
  unsigned int v149; // eax
  __int64 v150; // rdx
  __int64 v151; // rcx
  char *v152; // rax
  char v153; // cl
  __int64 v154; // rsi
  int v155; // r8d
  struct tagWND *v156; // rcx
  int v157; // r8d
  int v158; // eax
  __int64 v159; // rdx
  __int64 v160; // rcx
  unsigned __int64 v161; // rbx
  __int64 v162; // r8
  __int64 v163; // rcx
  __int64 v164; // rax
  __int64 v165; // rdx
  __int64 v166; // r8
  __int64 v167; // r9
  __int64 v168; // rax
  unsigned int v169; // edx
  int v170; // r12d
  __int64 v171; // rbx
  __int64 v172; // rax
  struct tagPOINT v173; // r8
  struct tagPOINT v174; // rbx
  int v175; // eax
  int v176; // eax
  __int64 v177; // rcx
  int v178; // ecx
  __int64 v179; // rdx
  __int64 v180; // rcx
  __int64 v181; // rcx
  BOOL v182; // r15d
  unsigned __int16 v183; // di
  __int64 v184; // rsi
  int v185; // eax
  unsigned __int64 v186; // rdx
  unsigned __int64 v187; // rdx
  unsigned __int64 v188; // rdx
  int v189; // edx
  __int64 v190; // r8
  int v191; // esi
  char v192; // al
  __int64 v193; // rdx
  int v194; // ecx
  unsigned int v195; // ecx
  char v196; // al
  __int64 v197; // rdx
  int v198; // ecx
  unsigned int v199; // ecx
  _QWORD *v200; // rbx
  __int64 v201; // rax
  __int64 v202; // r11
  int v203; // r10d
  int v204; // r9d
  int v205; // kr04_4
  int v206; // edx
  int v207; // eax
  int v208; // ecx
  unsigned int TouchTimeFromCPLValue; // ecx
  struct tagQMSG *v210; // rbx
  int v211; // eax
  __int64 v212; // rcx
  unsigned int v213; // r12d
  __int64 v214; // rbx
  const struct tagWND *CompositionInputWindowUIOwner; // rax
  bool v216; // di
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *CompositeAppFrameWindowOrSelf; // rax
  __int64 v219; // rdx
  __int64 v220; // rdx
  __int64 v221; // rcx
  __int64 v222; // r8
  __int64 v223; // r10
  __int64 v224; // r10
  BOOL v225; // eax
  struct tagQMSG *v226; // r10
  int v227; // edi
  struct tagQMSG *v228; // r10
  unsigned int v229; // ebx
  __int64 v230; // rcx
  _DWORD *v231; // rax
  _DWORD *v232; // rax
  __int64 v233; // rdx
  unsigned __int64 v234; // r8
  __int64 v235; // rax
  __int64 v236; // rbx
  __int64 v237; // rdx
  __int64 v238; // rcx
  __int64 v239; // rax
  __int64 v240; // rax
  __int64 v241; // rdx
  __int64 v242; // rcx
  __int64 v243; // r8
  __int64 v244; // rax
  int v245; // ebx
  int v246; // esi
  const struct tagQMSG *v247; // r8
  int v248; // eax
  __int64 v249; // r10
  int v250; // r10d
  unsigned int v251; // ebx
  struct tagQMSG *v252; // rdi
  int v253; // ebx
  __int64 v254; // rcx
  int v255; // ebx
  int v256; // ebx
  int v257; // ebx
  struct tagTHREADINFO *v258; // rcx
  __int64 v259; // rcx
  unsigned __int64 MiPWindowFlags; // rax
  int v261; // edx
  __int64 v262; // rax
  struct tagQMSG *v263; // rcx
  __int64 v264; // rax
  int v265; // ecx
  unsigned int v266; // ecx
  int v267; // ebx
  unsigned __int64 *v268; // rcx
  unsigned __int64 v269; // rax
  unsigned __int64 v270; // rax
  unsigned int v271; // r14d
  __int16 v272; // dx
  __int64 v273; // r8
  _DWORD *v274; // rax
  unsigned __int64 v275; // rax
  int v276; // eax
  __int64 v277; // rdx
  __int64 v278; // rcx
  __int64 v279; // r8
  __int64 v280; // rcx
  __int64 v281; // r8
  struct _KTHREAD *v282; // rdi
  __int64 v283; // r13
  __int64 v284; // rbx
  __int64 v285; // rdx
  __int64 *v286; // rax
  __int64 v287; // rcx
  struct _KTHREAD *v288; // rdi
  __int64 v289; // rbx
  __int64 v290; // rdx
  __int64 *v291; // rax
  __int64 v292; // rcx
  struct _KTHREAD *v293; // rdi
  __int64 v294; // rbx
  __int64 v295; // rdx
  __int64 *v296; // rax
  __int64 v297; // rcx
  struct _KTHREAD *v298; // rdi
  __int64 v299; // rbx
  __int64 v300; // rdx
  __int64 *v301; // rax
  __int64 v302; // rcx
  struct _KTHREAD *v303; // rbx
  __int64 v304; // rdx
  __int64 v305; // r8
  __int64 *v306; // rax
  __int64 v307; // rcx
  int v308; // [rsp+70h] [rbp-838h] BYREF
  unsigned int v309; // [rsp+74h] [rbp-834h]
  int v310; // [rsp+78h] [rbp-830h]
  bool v311; // [rsp+7Ch] [rbp-82Ch]
  BOOL v312; // [rsp+80h] [rbp-828h]
  unsigned int v313; // [rsp+84h] [rbp-824h] BYREF
  unsigned int v314; // [rsp+88h] [rbp-820h] BYREF
  __int64 ThreadDesktopWindow; // [rsp+90h] [rbp-818h] BYREF
  __int64 v316; // [rsp+98h] [rbp-810h] BYREF
  struct tagPOINT v317; // [rsp+A0h] [rbp-808h] BYREF
  int v318; // [rsp+A8h] [rbp-800h]
  unsigned __int64 MouseKeyFlags; // [rsp+B0h] [rbp-7F8h] BYREF
  bool v320; // [rsp+B8h] [rbp-7F0h]
  bool v321; // [rsp+B9h] [rbp-7EFh]
  int v322; // [rsp+BCh] [rbp-7ECh] BYREF
  struct tagQMSG *v323; // [rsp+C0h] [rbp-7E8h]
  int v324; // [rsp+C8h] [rbp-7E0h]
  _QWORD *v325; // [rsp+D0h] [rbp-7D8h]
  int v326; // [rsp+D8h] [rbp-7D0h]
  int v327; // [rsp+DCh] [rbp-7CCh]
  __int64 v328; // [rsp+E0h] [rbp-7C8h]
  int v329; // [rsp+E8h] [rbp-7C0h]
  struct tagQMSG *v330; // [rsp+F0h] [rbp-7B8h]
  __int64 v331; // [rsp+F8h] [rbp-7B0h]
  int v332; // [rsp+100h] [rbp-7A8h]
  int v333; // [rsp+104h] [rbp-7A4h]
  int v334; // [rsp+108h] [rbp-7A0h]
  __int128 v335; // [rsp+110h] [rbp-798h] BYREF
  __int128 v336; // [rsp+120h] [rbp-788h]
  __int128 v337; // [rsp+130h] [rbp-778h]
  __int128 v338; // [rsp+140h] [rbp-768h]
  __int128 v339; // [rsp+150h] [rbp-758h]
  __int128 v340; // [rsp+160h] [rbp-748h] BYREF
  __int128 v341; // [rsp+170h] [rbp-738h]
  __int128 v342; // [rsp+180h] [rbp-728h]
  __int128 v343; // [rsp+190h] [rbp-718h]
  __int128 v344; // [rsp+1A0h] [rbp-708h]
  unsigned __int64 v345; // [rsp+1B0h] [rbp-6F8h]
  struct tagQMSG *v346; // [rsp+1B8h] [rbp-6F0h]
  __int64 v347; // [rsp+1C0h] [rbp-6E8h]
  int v348; // [rsp+1C8h] [rbp-6E0h]
  __int64 v349; // [rsp+1D0h] [rbp-6D8h]
  __int64 v350; // [rsp+1D8h] [rbp-6D0h] BYREF
  __int64 v351; // [rsp+1E0h] [rbp-6C8h]
  __int64 v352; // [rsp+1E8h] [rbp-6C0h]
  __int64 v353; // [rsp+1F0h] [rbp-6B8h]
  __int64 v354; // [rsp+1F8h] [rbp-6B0h]
  __int64 v355; // [rsp+200h] [rbp-6A8h] BYREF
  __int64 v356; // [rsp+208h] [rbp-6A0h]
  __int64 v357; // [rsp+218h] [rbp-690h]
  __int64 v358; // [rsp+220h] [rbp-688h]
  int v359; // [rsp+228h] [rbp-680h]
  __int64 v360; // [rsp+230h] [rbp-678h] BYREF
  __int64 v361; // [rsp+238h] [rbp-670h]
  void (*v362)(void); // [rsp+240h] [rbp-668h]
  __int64 v363; // [rsp+248h] [rbp-660h] BYREF
  __int64 v364; // [rsp+250h] [rbp-658h]
  void (*v365)(void); // [rsp+258h] [rbp-650h]
  struct InteractiveControlInput *v366; // [rsp+260h] [rbp-648h] BYREF
  struct tagMENUSTATE *v367; // [rsp+268h] [rbp-640h] BYREF
  __int64 v368; // [rsp+270h] [rbp-638h] BYREF
  __int64 v369; // [rsp+278h] [rbp-630h]
  __int64 v370; // [rsp+288h] [rbp-620h] BYREF
  __int64 v371; // [rsp+290h] [rbp-618h]
  void (*v372)(void); // [rsp+298h] [rbp-610h]
  __int64 v373; // [rsp+2A0h] [rbp-608h] BYREF
  __int64 v374; // [rsp+2A8h] [rbp-600h]
  void (*v375)(void); // [rsp+2B0h] [rbp-5F8h]
  __int64 v376; // [rsp+2B8h] [rbp-5F0h] BYREF
  __int64 v377; // [rsp+2C0h] [rbp-5E8h]
  void (*v378)(void); // [rsp+2C8h] [rbp-5E0h]
  struct InteractiveControlDevice *v379; // [rsp+2D0h] [rbp-5D8h] BYREF
  _DWORD v380[4]; // [rsp+2D8h] [rbp-5D0h] BYREF
  __int64 v381; // [rsp+2E8h] [rbp-5C0h]
  __int64 v382; // [rsp+2F0h] [rbp-5B8h]
  __int64 v383; // [rsp+2F8h] [rbp-5B0h]
  __int64 v384; // [rsp+300h] [rbp-5A8h]
  __int64 v385; // [rsp+310h] [rbp-598h]
  __int64 v386; // [rsp+318h] [rbp-590h]
  __int64 v387; // [rsp+320h] [rbp-588h]
  __int64 v388; // [rsp+328h] [rbp-580h]
  __int64 v389; // [rsp+330h] [rbp-578h]
  __int64 v390; // [rsp+338h] [rbp-570h]
  __int64 v391; // [rsp+340h] [rbp-568h]
  __int64 v392; // [rsp+348h] [rbp-560h]
  __int64 v393; // [rsp+350h] [rbp-558h]
  __int64 v394; // [rsp+358h] [rbp-550h]
  __int64 v395; // [rsp+360h] [rbp-548h]
  int v396; // [rsp+370h] [rbp-538h]
  __int128 v397; // [rsp+378h] [rbp-530h]
  unsigned int *v398; // [rsp+388h] [rbp-520h]
  int v399; // [rsp+390h] [rbp-518h]
  int v400; // [rsp+394h] [rbp-514h]
  char *v401; // [rsp+398h] [rbp-510h]
  int v402; // [rsp+3A0h] [rbp-508h]
  __int64 v403; // [rsp+3A8h] [rbp-500h]
  __int128 v404; // [rsp+3B0h] [rbp-4F8h]
  __int128 v405; // [rsp+3C0h] [rbp-4E8h]
  __int128 v406; // [rsp+3D0h] [rbp-4D8h]
  __int128 v407; // [rsp+3E0h] [rbp-4C8h]
  __int128 v408; // [rsp+3F0h] [rbp-4B8h]
  __int128 v409; // [rsp+400h] [rbp-4A8h]
  __int64 v410; // [rsp+410h] [rbp-498h] BYREF
  int v411; // [rsp+418h] [rbp-490h]
  __int64 v412; // [rsp+420h] [rbp-488h]
  __int64 v413; // [rsp+428h] [rbp-480h]
  __int64 v414; // [rsp+430h] [rbp-478h]
  __int64 v415; // [rsp+438h] [rbp-470h]
  __int128 v416; // [rsp+440h] [rbp-468h]
  __int128 v417; // [rsp+450h] [rbp-458h]
  __int128 v418; // [rsp+460h] [rbp-448h]
  __int128 v419; // [rsp+470h] [rbp-438h]
  __int128 v420; // [rsp+480h] [rbp-428h]
  __int128 v421; // [rsp+490h] [rbp-418h]
  _QWORD v422[3]; // [rsp+4C0h] [rbp-3E8h] BYREF
  _QWORD v423[3]; // [rsp+4D8h] [rbp-3D0h] BYREF
  __int128 v424; // [rsp+4F0h] [rbp-3B8h]
  __int128 v425; // [rsp+500h] [rbp-3A8h]
  __int128 v426; // [rsp+510h] [rbp-398h]
  __int128 v427; // [rsp+520h] [rbp-388h]
  __int128 v428; // [rsp+530h] [rbp-378h]
  __int128 v429; // [rsp+540h] [rbp-368h]
  HWND v430; // [rsp+560h] [rbp-348h]
  __int64 v431; // [rsp+568h] [rbp-340h]
  __int64 v432; // [rsp+570h] [rbp-338h]
  __int64 v433; // [rsp+578h] [rbp-330h]
  _OWORD v434[6]; // [rsp+580h] [rbp-328h] BYREF
  __int128 v435; // [rsp+5E0h] [rbp-2C8h] BYREF
  __int128 v436; // [rsp+5F0h] [rbp-2B8h]
  __int128 v437; // [rsp+600h] [rbp-2A8h]
  __int128 v438; // [rsp+610h] [rbp-298h]
  __int128 v439; // [rsp+620h] [rbp-288h]
  __int128 v440; // [rsp+630h] [rbp-278h]
  __int128 v441; // [rsp+640h] [rbp-268h]
  __int128 v442; // [rsp+650h] [rbp-258h]
  __int128 v443; // [rsp+660h] [rbp-248h]
  __int128 v444; // [rsp+670h] [rbp-238h]
  __int128 v445; // [rsp+680h] [rbp-228h] BYREF
  __int128 v446; // [rsp+690h] [rbp-218h]
  __int128 v447; // [rsp+6A0h] [rbp-208h]
  __int128 v448; // [rsp+6B0h] [rbp-1F8h]
  __int128 v449; // [rsp+6C0h] [rbp-1E8h]
  __int128 v450; // [rsp+6D0h] [rbp-1D8h]
  __int128 v451; // [rsp+6E0h] [rbp-1C8h]
  __int128 v452; // [rsp+6F0h] [rbp-1B8h]
  __int128 v453; // [rsp+700h] [rbp-1A8h]
  __int128 v454; // [rsp+710h] [rbp-198h]
  _OWORD v455[10]; // [rsp+720h] [rbp-188h] BYREF
  char v456[24]; // [rsp+7C0h] [rbp-E8h] BYREF
  unsigned int v457; // [rsp+7D8h] [rbp-D0h]

  v393 = a1;
  v392 = a1;
  v388 = a1;
  v391 = a1;
  v390 = a1;
  v389 = a1;
  v387 = a1;
  v383 = a1;
  v386 = a1;
  v394 = a1;
  v395 = a1;
  v381 = a1;
  v384 = a1;
  v385 = a1;
  v316 = 0LL;
  v350 = 0LL;
  v351 = 0LL;
  v352 = 0LL;
  v353 = 0LL;
  v354 = 0LL;
  v348 = 0;
  v308 = a6 & 1;
  v326 = 0;
  v9 = 0;
  v310 = 0;
  v312 = 0;
  v311 = 0;
  v330 = 0LL;
  *a8 = 0LL;
  if ( a7 == 0x2000 && *(_QWORD *)(*(_QWORD *)(a1 + 424) + 80LL) )
  {
    EtwTraceInputQueueLockedPeekRecursion();
    return 0LL;
  }
  v332 = 0;
  v324 = 0;
  v329 = 0;
  v10 = *(_QWORD *)(a1 + 424);
  if ( !*(_QWORD *)(v10 + 64) )
  {
    *(_QWORD *)(v10 + 64) = a1;
    **(_DWORD **)(a1 + 440) |= 1u;
  }
  if ( (a7 & 0x1C07) != 0 )
  {
    v11 = *(_QWORD *)(a1 + 424);
    v12 = *(_DWORD *)(v11 + 388);
    if ( (a6 & 1) != 0 )
      v13 = v12 & 0xFFFFFBFF;
    else
      v13 = v12 | 0x400;
    *(_DWORD *)(v11 + 388) = v13;
  }
  v14 = *(_QWORD *)(a1 + 424);
  if ( *(_QWORD *)(v14 + 64) != a1 )
  {
    EtwTraceInputQueueLocked();
    return 2LL;
  }
  v328 = 0LL;
  v331 = 0LL;
  v347 = 0LL;
  v358 = 0LL;
  v349 = 0LL;
  v357 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v17 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v14, a6 & 1) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v17 = *ThreadWin32Thread;
  }
  v363 = *(_QWORD *)(v17 + 16);
  *(_QWORD *)(v17 + 16) = &v363;
  v364 = 0LL;
  v365 = (void (*)(void))DereferenceW32Thread;
  v21 = KeGetCurrentThread();
  v22 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v19, v18) )
  {
    v25 = (__int64 *)PsGetThreadWin32Thread(v21);
    if ( v25 )
      v22 = *v25;
  }
  v360 = *(_QWORD *)(v22 + 16);
  *(_QWORD *)(v22 + 16) = &v360;
  v361 = 0LL;
  v362 = (void (*)(void))DereferenceW32Thread;
  v26 = KeGetCurrentThread();
  v27 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v24, v23) )
  {
    v30 = (__int64 *)PsGetThreadWin32Thread(v26);
    if ( v30 )
      v27 = *v30;
  }
  v376 = *(_QWORD *)(v27 + 16);
  *(_QWORD *)(v27 + 16) = &v376;
  v377 = 0LL;
  v378 = (void (*)(void))DereferenceW32Thread;
  v31 = KeGetCurrentThread();
  v32 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v29, v28) )
  {
    v35 = (__int64 *)PsGetThreadWin32Thread(v31);
    if ( v35 )
      v32 = *v35;
  }
  v373 = *(_QWORD *)(v32 + 16);
  *(_QWORD *)(v32 + 16) = &v373;
  v374 = 0LL;
  v375 = (void (*)(void))DereferenceW32Thread;
  v36 = KeGetCurrentThread();
  v37 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v34, v33) )
  {
    v38 = (__int64 *)PsGetThreadWin32Thread(v36);
    if ( v38 )
      v37 = *v38;
  }
  v370 = *(_QWORD *)(v37 + 16);
  *(_QWORD *)(v37 + 16) = &v370;
  v371 = 0LL;
  v372 = (void (*)(void))DereferenceW32Thread;
  v355 = *(_QWORD *)(a1 + 408);
  *(_QWORD *)(a1 + 408) = &v355;
  v356 = 0LL;
LABEL_29:
  v39 = v308;
LABEL_30:
  *(_QWORD *)(*(_QWORD *)(a1 + 424) + 80LL) = 0LL;
  for ( i = v312; ; i = v312 )
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
              while ( 1 )
              {
                while ( 1 )
                {
LABEL_32:
                  v41 = *(_DWORD **)(a1 + 472);
                  v359 = (*v41 >> 9) & 1;
                  v42 = (__int64 *)(a1 + 424);
                  v325 = (_QWORD *)(a1 + 424);
                  v382 = a1 + 424;
                  v43 = *(_QWORD *)(a1 + 424);
                  v44 = *(_QWORD *)(v43 + 80);
                  if ( v44 )
                  {
                    if ( !(_BYTE)i )
                    {
                      i = v9 != 0;
                      v312 = v9 != 0;
                      v311 = v9 != 0;
                    }
                  }
                  else
                  {
                    v9 = 0;
                    v310 = 0;
                    LOBYTE(v41) = 0;
                    v312 = (int)v41;
                    v311 = 0;
                  }
                  v318 = 0;
                  v327 = 0;
                  MouseKeyFlags = 0LL;
                  v334 = 0;
                  Valid = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 56LL);
                  if ( !Valid )
                    goto LABEL_48;
                  if ( (*(_DWORD *)(Valid + 64) & 0x80u) != 0 )
                    Valid = PhkNextValid(Valid);
                  if ( Valid && (v46 = (struct tagMLIST *)grpdeskRitInput, *(_QWORD *)(a1 + 448) == grpdeskRitInput) )
                  {
                    if ( v44 )
                    {
                      i = 0LL;
                      v323 = 0LL;
                    }
                    else
                    {
                      v47 = xxxCallJournalPlaybackHook(&v335, i);
                      v43 = v47;
                      if ( v47 == -1 )
                      {
                        i = 0LL;
                        v323 = 0LL;
                      }
                      else if ( v47 )
                      {
                        *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) &= 0xE3F8u;
                        *(_WORD *)(*(_QWORD *)(a1 + 440) + 4LL) &= 0xE3F8u;
                        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 400LL) = DWORD2(v336);
                        qword_1C0326F80 = InternalSetTimer(0LL, qword_1C0326F80, v47, (__int64)JournalTimer, 32, 276);
                        i = 0LL;
                        v323 = 0LL;
                      }
                      else
                      {
                        WakeSomeone(*v42, 0LL, DWORD2(v336), 0LL);
                        CInputGlobals::MarkLastInputAsJournalling(gpInputGlobals);
                        i = 1LL;
                        v323 = (struct tagQMSG *)1;
                      }
                    }
                  }
                  else
                  {
LABEL_48:
                    PostPendingMouseMove(v43, i);
                    v46 = (struct tagMLIST *)(*v42 + 24);
                    if ( !*(_DWORD *)(*v42 + 40) )
                    {
                      i = 0LL;
                      v323 = 0LL;
                      goto LABEL_66;
                    }
                    if ( v44 && (v48 = *(unsigned __int64 **)(*v42 + 80), (unsigned __int64)v48 > 1) )
                      i = *v48;
                    else
                      i = *(_QWORD *)v46;
                    v323 = (struct tagQMSG *)i;
                    if ( (*(_DWORD *)(a1 + 1200) & 0x2000) != 0 )
                    {
                      if ( !i )
                        goto LABEL_66;
                      do
                      {
                        v49 = *(_DWORD *)(i + 100);
                        if ( (v49 & 0x20) == 0 )
                          break;
                        if ( (v49 & 0x10) == 0 )
                          break;
                        i = *(_QWORD *)i;
                        v323 = (struct tagQMSG *)i;
                      }
                      while ( i );
                    }
                    if ( i )
                    {
                      v50 = *(_QWORD *)(i + 104);
                      if ( v50 && v50 != a1 && (*(_DWORD *)(v50 + 480) & 0x10000) != 0 )
                      {
                        i = (unsigned __int64)DeferMessagesOnQueue(v46, (struct tagQMSG *)i);
                        v323 = (struct tagQMSG *)i;
                      }
                      if ( i )
                      {
                        v46 = (struct tagMLIST *)&v335;
                        v335 = *(_OWORD *)i;
                        v336 = *(_OWORD *)(i + 16);
                        v337 = *(_OWORD *)(i + 32);
                        v338 = *(_OWORD *)(i + 48);
                        v339 = *(_OWORD *)(i + 64);
                        v340 = *(_OWORD *)(i + 80);
                        v341 = *(_OWORD *)(i + 96);
                        v342 = *(_OWORD *)(i + 112);
                        v343 = *(_OWORD *)(i + 128);
                        v344 = *(_OWORD *)(i + 144);
                      }
                    }
                  }
LABEL_66:
                  v345 = i;
                  v346 = (struct tagQMSG *)i;
                  *(_QWORD *)(*v42 + 80) = i;
                  if ( i <= 1 )
                    goto LABEL_88;
                  v51 = DWORD1(v341);
                  if ( (BYTE4(v341) & 0x20) != 0 )
                  {
                    *a8 = (struct tagQMSG *)i;
                    *(_DWORD *)(i + 100) |= 0x100u;
                    v39 = 0;
                    v308 = 0;
                    v51 = DWORD1(v341);
                  }
                  if ( (v51 & 0x10000) == 0 )
                    break;
                  if ( *((_QWORD *)&v341 + 1) == a1 )
                    v9 = 1;
                  v310 = v9;
                  LOBYTE(i) = 1;
                  v312 = i;
                  v311 = 1;
                }
                if ( (v51 & 0x40000) == 0 )
                  break;
                i = v312;
                if ( *((_QWORD *)&v341 + 1) == a1 && v9 == 1 )
                {
                  v9 = 2;
                  v310 = 2;
                }
              }
              if ( (_DWORD)v341 != 4 || !v312 )
                break;
LABEL_79:
              DeferSysPeekMsg((struct tagTHREADINFO *)a1, 0);
              i = v312;
            }
            if ( !v39 )
              goto LABEL_88;
            v46 = (struct tagMLIST *)DWORD2(v336);
            if ( !v9 || (unsigned int)(DWORD2(v336) - 256) > 9 )
              break;
            DeferSysPeekMsg((struct tagTHREADINFO *)a1, 0);
            v9 = 2;
            v310 = 2;
            i = v312;
          }
          if ( v9 == 2 && ((unsigned int)(DWORD2(v336) - 512) <= 0xE || (unsigned int)(DWORD2(v336) - 160) <= 0xD) )
            goto LABEL_79;
LABEL_88:
          v52 = (_QWORD *)(a1 + 424);
          if ( !*(_QWORD *)(*v42 + 80) )
          {
            if ( a7 == 0x2000 )
              *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) &= ~0x2000u;
            goto LABEL_780;
          }
          ThreadUnlock1(v46, i, v43);
          v53 = v336;
          v54 = 0LL;
          v55 = KeGetCurrentThread();
          if ( !(unsigned int)IsThreadCrossSessionAttached(v57, v56) )
            PsGetThreadWin32Thread(v55);
          v59 = (unsigned __int16)v53;
          if ( (unsigned __int64)(unsigned __int16)v53 < *(_QWORD *)(gpsi + 8LL) )
          {
            v60 = gSharedInfo[1] + (unsigned int)(unsigned __int16)v53 * LODWORD(gSharedInfo[2]);
            v61 = (__int64 *)(gpKernelHandleTable
                            + 24 * ((__int64)((unsigned int)(unsigned __int16)v53 * LODWORD(gSharedInfo[2])) >> 5));
            v62 = v53 >> 16;
            if ( ((_WORD)v62 == *(_WORD *)(v60 + 26)
               || (_WORD)v62 == 0xFFFF
               || !(_WORD)v62
               && PsGetCurrentProcessWow64Process(
                    gpKernelHandleTable,
                    3 * ((__int64)(unsigned int)(v59 * LODWORD(gSharedInfo[2])) >> 5),
                    v59,
                    v58))
              && (*(_BYTE *)(v60 + 25) & 1) == 0
              && *(_BYTE *)(v60 + 24) == 1 )
            {
              v54 = *v61;
            }
          }
          v63 = v54;
          ThreadDesktopWindow = v54;
          v355 = *(_QWORD *)(a1 + 408);
          *(_QWORD *)(a1 + 408) = &v355;
          v356 = v54;
          if ( v54 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v54 + 8));
            v63 = ThreadDesktopWindow;
          }
          if ( (_DWORD)v341 )
          {
            if ( (_DWORD)v341 == 4 && *(_QWORD *)(*v52 + 80LL) != *(_QWORD *)(*v52 + 24LL) )
              goto LABEL_714;
            if ( (_DWORD)v341 == 9 && DWORD2(v336) == 96 )
            {
              v64 = *((_QWORD *)&v335 + 1);
              if ( *((_QWORD *)&v335 + 1) )
              {
                do
                {
                  if ( !IsHiddenByInputService(v64) )
                    break;
                  v64 = *(_QWORD *)(v64 + 8);
                }
                while ( v64 );
                if ( v64 )
                  goto LABEL_714;
              }
            }
            v65 = *((_QWORD *)&v341 + 1);
            if ( !*((_QWORD *)&v341 + 1) || *((_QWORD *)&v341 + 1) == a1 )
            {
              EtwTraceRetrieveQueueEventMessage(*(_QWORD *)(*v52 + 80LL));
              v66 = *v52;
              v67 = *(_QWORD *)(*v52 + 80LL);
              v68 = *(_QWORD **)(v67 + 8);
              if ( v68 )
                *v68 = *(_QWORD *)v67;
              if ( *(_QWORD *)v67 )
                *(_QWORD *)(*(_QWORD *)v67 + 8LL) = *(_QWORD *)(v67 + 8);
              if ( *(_QWORD *)(v66 + 24) == v67 )
                *(_QWORD *)(v66 + 24) = *(_QWORD *)v67;
              if ( *(_QWORD *)(v66 + 32) == v67 )
                *(_QWORD *)(v66 + 32) = *(_QWORD *)(v67 + 8);
              v69 = *(_DWORD *)(v67 + 100);
              if ( (v69 & 0x10000) == 0 && (v69 & 0x40000) == 0 )
              {
                --*(_DWORD *)(v66 + 40);
                v69 = *(_DWORD *)(v67 + 100);
              }
              if ( (v69 & 8) != 0 && !*(_DWORD *)(v67 + 96) && IsPointerInputMessage(*(_DWORD *)(v67 + 24)) )
                FreePointerMessageParams(v67);
              Win32FreeToPagedLookasideList(QEntryLookaside, v67);
              *(_QWORD *)(*v52 + 80LL) = 0LL;
              xxxProcessEventMessage(a1, (__int64)&v335);
              v9 = v310;
            }
            else
            {
              if ( *(_QWORD *)(*((_QWORD *)&v341 + 1) + 424LL) == *v52 )
              {
                LockExchangeW32Thread(*((_QWORD *)&v341 + 1), &v376);
                *(_QWORD *)(*(_QWORD *)(v386 + 424) + 80LL) = 0LL;
                v358 = v65;
                goto LABEL_780;
              }
              CleanEventMessage(*(struct tagQMSG **)(*v52 + 80LL));
              DelQEntry((_QWORD *)(*v52 + 24LL), *(_QWORD **)(*v52 + 80LL));
              v9 = v310;
            }
            goto LABEL_29;
          }
          if ( a7 == 0x2000 )
            goto LABEL_714;
          v71 = DWORD2(v336);
          v309 = DWORD2(v336);
          v313 = DWORD2(v336);
          if ( DWORD2(v336) > 0x20A )
          {
            switch ( DWORD2(v336) )
            {
              case 0x20E:
                goto LABEL_356;
              case 0x238:
                goto LABEL_428;
              case 0x240:
LABEL_423:
                if ( !v54 )
                  goto LABEL_363;
                v152 = *(char **)(v54 + 40);
                if ( v152[20] < 0 )
                  goto LABEL_363;
                if ( v152[19] < 0 )
                  goto LABEL_363;
                v153 = v152[31];
                if ( (v153 & 8) != 0 || (v153 & 0x10) == 0 )
                  goto LABEL_363;
LABEL_428:
                v316 = *((_QWORD *)&v337 + 1);
                MouseKeyFlags = v337;
                if ( !v54 )
                  goto LABEL_363;
                if ( CheckCrossThreadInput((struct tagWND *const)v54, v323, &v322, &v308, a8) )
                  goto LABEL_780;
                if ( v322 )
                  goto LABEL_363;
                if ( !a4 && a5 == -1 )
                  goto LABEL_439;
                if ( a4 <= a5 )
                {
                  if ( v71 < a4 || v71 > a5 )
                    goto LABEL_714;
                }
                else if ( v71 >= a5 && v71 <= a4 )
                {
                  v39 = v308;
                  goto LABEL_229;
                }
LABEL_439:
                if ( (unsigned int)CheckPwndFilter(v54, a3) )
                {
                  v129 = v308 == 0;
                  goto LABEL_441;
                }
                goto LABEL_714;
              case 0x245:
              case 0x246:
              case 0x247:
              case 0x249:
              case 0x24A:
              case 0x251:
              case 0x252:
              case 0x253:
                v39 = v308;
                v146 = v318;
                goto LABEL_704;
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
                i = a5;
                if ( !a4 && a5 == -1 )
                  goto LABEL_343;
                if ( a4 <= a5 )
                {
                  if ( DWORD2(v336) < a4 || DWORD2(v336) > a5 )
                    goto LABEL_780;
                }
                else if ( DWORD2(v336) >= a5 && DWORD2(v336) <= a4 )
                {
                  goto LABEL_780;
                }
LABEL_343:
                if ( (unsigned int)IsInsideMenuLoop(a1) )
                  goto LABEL_363;
                v39 = v308;
                if ( v308 )
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v335, 1u);
                if ( !v54 )
                {
                  v63 = *(_QWORD *)(*v325 + 112LL);
                  ThreadDesktopWindow = v63;
                }
                v316 = *((_QWORD *)&v337 + 1);
                MouseKeyFlags = v337;
                v130 = WORD1(v337);
                v131 = (unsigned __int16)v337;
                v132 = InteractiveControlManager::Instance();
                v72 = 0LL;
                v379 = 0LL;
                v366 = 0LL;
                if ( (int)InteractiveControlManager::FindDevice(v132, v131, 0LL, &v379, 0LL) >= 0
                  && v379
                  && (unsigned int)InteractiveControlDevice::GetInputReport(v379, v130, &v366) )
                {
                  *((_DWORD *)v366 + 6) = 1;
                  v133 = 1;
                }
                else
                {
                  v133 = 2;
                }
                v134 = v133 - 1;
                if ( !v134 )
                  goto LABEL_742;
                if ( v134 == 1 )
                  goto LABEL_780;
                v75 = v309;
                goto LABEL_365;
              default:
LABEL_445:
                while ( 2 )
                {
                  v154 = v328;
                  v317.x = SWORD4(v337);
                  v317.y = SWORD5(v337);
                  v314 = 1;
                  if ( (BYTE4(v341) & 0x20) == 0 )
                    goto LABEL_448;
                  if ( !v63 )
                    goto LABEL_451;
                  if ( (((unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v63 + 40) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v63 + 16) + 416LL) + 280LL) >> 8)) & 0x1FF) != 0 )
                  {
LABEL_448:
                    if ( v63 && (unsigned int)IsCompositionInputWindowForHitTest((struct tagWND *)v63) )
                      v155 = 1;
                    else
LABEL_451:
                      v155 = 0;
                    v326 = v155;
                    v156 = *(struct tagWND **)(*v52 + 104LL);
                    if ( v156 )
                    {
                      v63 = *(_QWORD *)(*v52 + 104LL);
                      ThreadDesktopWindow = v63;
                      if ( v155 )
                      {
                        if ( !(unsigned int)IsCompositionInputWindowForHitTest(v156) )
                        {
                          DWORD1(v341) &= ~0x2000u;
                          if ( v323 )
                          {
                            if ( (unsigned int)IsMouseInPointerActive(a1) )
                              *(_DWORD *)(v167 + 100) &= ~0x2000u;
                          }
                        }
                      }
                    }
                    else
                    {
                      if ( !v155 )
                      {
                        v63 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 448LL) + 8LL) + 24LL);
                        v368 = *(_QWORD *)(a1 + 408);
                        *(_QWORD *)(a1 + 408) = &v368;
                        v369 = v63;
                        if ( v63 )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)(v63 + 8));
                          v309 = v313;
                        }
                      }
                      if ( (unsigned int)IsThreadDesktopComposed(a1) )
                      {
                        v396 = DWORD2(v336);
                        v397 = v337;
                        v398 = &v314;
                        v158 = 1;
                        if ( v157 )
                          v158 = 9;
                        v399 = v158;
                        v400 = 0;
                        v401 = (char *)&v340 + 8;
                        v402 = 0;
                        v403 = 0LL;
                        v161 = xxxDCEWindowHitTestIndirect((struct tagWND *)v63);
                        if ( v161 && v402 )
                        {
                          *((_QWORD *)&v337 + 1) = *((_QWORD *)&v397 + 1);
                          DWORD1(v338) = SWORD4(v397);
                          v159 = *((_QWORD *)&v397 + 1) >> 16;
                          v160 = (unsigned int)SWORD5(v397);
                          DWORD2(v338) = SWORD5(v397);
                          v317 = *(struct tagPOINT *)((char *)&v338 + 4);
                        }
                      }
                      else
                      {
                        v161 = xxxWindowHitTest(v63);
                      }
                      if ( !v326 )
                        ThreadUnlock1(v160, v159, v162);
                      LOBYTE(v159) = 1;
                      v63 = HMValidateHandleNoSecure(v161, v159);
                      ThreadDesktopWindow = v63;
                      if ( !v63 )
                      {
                        v63 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL) + 24LL);
                        ThreadDesktopWindow = v63;
                        if ( !v63 )
                        {
                          v63 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiRit + 448LL) + 8LL) + 24LL);
                          ThreadDesktopWindow = v63;
                        }
                      }
                      if ( !*(_QWORD *)(a1 + 600)
                        && (unsigned int)IsThreadMiPEnabled(a1)
                        && (v163 = *(_QWORD *)(*v52 + 440LL)) != 0
                        && (v164 = ValidateHwnd(v163)) != 0
                        && ((v165 = *(_QWORD *)(v164 + 16), v166 = *v52, *(_QWORD *)(v165 + 424) == *v52)
                         || *(_QWORD *)(v165 + 416) == *(_QWORD *)(a1 + 416)) )
                      {
                        v63 = v164;
                        ThreadDesktopWindow = v164;
                        v314 = 1;
                        *(_DWORD *)(v166 + 148) = 0;
                      }
                      else
                      {
                        *(_DWORD *)(*(_QWORD *)(v394 + 424) + 148LL) = v314 != 1;
                      }
                    }
                    if ( v63 == *(_QWORD *)(*v52 + 104LL) )
                    {
                      v168 = PtiMouseFromQ(*(_QWORD *)(*(_QWORD *)(v63 + 16) + 424LL));
                      if ( (((unsigned __int16)(v169 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(v168 + 416)
                                                                                          + 280LL) >> 8)) & 0x1FF) != 0
                        || (unsigned int)IsOleDragDropCaptureWindow((struct tagWND *)v63) )
                      {
                        v317 = (struct tagPOINT)v340;
                        PhysicalToLogicalInPlacePointWithParent(v63, &v317, (char *)&v340 + 8);
                        v316 = (LOWORD(v317.y) << 16) | LOWORD(v317.x);
                        *(struct tagPOINT *)((char *)&v338 + 4) = v317;
                      }
                    }
                  }
                  ThreadLockExchange(v63, &v355);
                  if ( CheckCrossThreadInput((struct tagWND *const)v63, v346, &v322, &v308, a8) )
                    goto LABEL_780;
                  v170 = v322;
                  if ( v322 )
                  {
                    v171 = *(_QWORD *)(v63 + 16);
                    if ( *(_QWORD *)(v171 + 424) != *v52 )
                    {
                      zzzSetCursor(gasyscur[1]);
                      goto LABEL_363;
                    }
                    if ( !v154 )
                      LockExchangeW32Thread(*(_QWORD *)(v63 + 16), &v360);
                    v172 = v171;
                    if ( v154 )
                      v172 = v154;
                    v328 = v172;
                  }
                  else if ( (WORD2(v341) & 0x1000) != 0 )
                  {
                    v179 = *(_QWORD *)(*(_QWORD *)(v63 + 16) + 416LL);
                    v180 = *(_QWORD *)(v179 + 872);
                    if ( gbEnforceUIPI )
                    {
                      if ( (unsigned int)v342 <= (unsigned int)v180
                        && ((_DWORD)v342 != (_DWORD)v180
                         || DWORD1(v342) != HIDWORD(v180) && DWORD1(v342) != -1 && HIDWORD(v180) != -1) )
                      {
                        v75 = v309;
                        EtwTraceUIPIMsgError(0LL, v179, v309, v337, *((_QWORD *)&v337 + 1));
                        zzzSetCursor(gasyscur[1]);
                        v39 = v308;
                        goto LABEL_365;
                      }
                    }
                  }
                  v173 = v317;
                  v174 = v317;
                  v175 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v63 + 16) + 424LL) + 148LL);
                  if ( v175 && (v176 = v175 - 2) != 0 )
                  {
                    if ( v176 != 1 )
                      goto LABEL_514;
                    v177 = *(_QWORD *)(v63 + 40);
                    if ( (*(_BYTE *)(v177 + 26) & 0x40) != 0 )
                      v317.x = *(_DWORD *)(v177 + 96) - v317.x;
                    else
                      v317.x -= *(_DWORD *)(v177 + 88);
                    v178 = *(_DWORD *)(*(_QWORD *)(v63 + 40) + 92LL);
                  }
                  else
                  {
                    v181 = *(_QWORD *)(v63 + 40);
                    if ( (*(_BYTE *)(v181 + 26) & 0x40) != 0 )
                      v317.x = *(_DWORD *)(v181 + 112) - v317.x;
                    else
                      v317.x -= *(_DWORD *)(v181 + 104);
                    v178 = *(_DWORD *)(*(_QWORD *)(v63 + 40) + 108LL);
                  }
                  v317.y -= v178;
                  v173 = v317;
LABEL_514:
                  if ( v170 || *v52 != gpqCursor )
                  {
                    v75 = v309;
                    goto LABEL_551;
                  }
                  v182 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 184LL) != v63;
                  v183 = v314;
                  if ( v314 == 5
                    && (v184 = *(_QWORD *)(v63 + 144)) != 0
                    && (*(_BYTE *)(*(_QWORD *)(v63 + 40) + 16LL) & 1) != 0 )
                  {
                    v185 = MNItemHitTest(*(_QWORD *)(v63 + 144), v63);
                    if ( v185 < 0 )
                      goto LABEL_526;
                    v186 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v184 + 88) + 96LL * v185) + 96LL);
                    if ( v186 <= 6 )
                    {
                      if ( v186 >= 5 )
                      {
                        v189 = ((unsigned __int16)v185 << 16) | 0x44;
                        goto LABEL_541;
                      }
                      v187 = v186 - 1;
                      if ( !v187 )
                      {
                        v189 = ((unsigned __int16)v185 << 16) | 0x41;
                        goto LABEL_541;
                      }
                      v188 = v187 - 1;
                      if ( !v188 )
                      {
                        v189 = ((unsigned __int16)v185 << 16) | 0x42;
                        goto LABEL_541;
                      }
                      if ( v188 == 1 )
                        goto LABEL_525;
LABEL_532:
                      v189 = ((unsigned __int16)v185 << 16) | 0x45;
                      goto LABEL_541;
                    }
                    if ( v186 == 7 )
                    {
LABEL_525:
                      v183 = 67;
LABEL_526:
                      v189 = v183 | ((unsigned __int16)v185 << 16);
                      goto LABEL_541;
                    }
                    if ( v186 != -1LL )
                      goto LABEL_532;
                    v189 = ((unsigned __int16)v185 << 16) | 0xFFFE;
                  }
                  else if ( v314 == 7 && (*(_BYTE *)(*(_QWORD *)(v63 + 40) + 16LL) & 2) != 0 )
                  {
                    v189 = (unsigned __int16)HitTestScrollBar((struct tagWND *)v63, 1, v173) | 0x10000;
                  }
                  else if ( v314 == 6 && (*(_BYTE *)(*(_QWORD *)(v63 + 40) + 16LL) & 4) != 0 )
                  {
                    v189 = (unsigned __int16)HitTestScrollBar((struct tagWND *)v63, 0, v173);
                  }
                  else
                  {
                    v189 = v314;
                  }
LABEL_541:
                  v75 = v309;
                  if ( v309 != 512 || v182 || *(_DWORD *)(*(_QWORD *)(a1 + 448) + 192LL) != v189 )
                    xxxTrackMouseMove((struct tagWND *)v63);
                  if ( !v182 )
                  {
                    v190 = *(_QWORD *)(a1 + 448);
                    if ( (*(_DWORD *)(v190 + 48) & 0x40) != 0
                      && (v75 != 512
                       || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v190 + 196, v174)) )
                    {
                      ResetMouseHover((struct tagDESKTOP *)v190, v174);
                    }
                  }
LABEL_551:
                  if ( !(unsigned int)CheckPwndFilter(v63, a3) )
                    goto LABEL_714;
                  v191 = 0;
                  v333 = 0;
                  switch ( v75 )
                  {
                    case 0x201u:
                      v192 = IsMessageInputSourceTouch(&v335);
                      v193 = *(_QWORD *)(v395 + 424);
                      v194 = *(_DWORD *)(v193 + 388);
                      if ( v192 )
                        v195 = v194 | 0x800000;
                      else
                        v195 = v194 & 0xFF7FFFFF;
                      *(_DWORD *)(v193 + 388) = v195;
                      v196 = IsMessageInputSourcePen(&v335);
                      v197 = *(_QWORD *)(v381 + 424);
                      v198 = *(_DWORD *)(v197 + 388);
                      if ( v196 )
                        v199 = v198 | 0x1000000;
                      else
                        v199 = v198 & 0xFEFFFFFF;
                      *(_DWORD *)(v197 + 388) = v199;
                      goto LABEL_560;
                    case 0x202u:
                    case 0x205u:
                    case 0x208u:
                    case 0x20Cu:
                      v200 = v325;
                      goto LABEL_573;
                    case 0x204u:
                    case 0x207u:
                    case 0x20Bu:
LABEL_560:
                      v200 = v325;
                      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v63 + 112) + 8LL) + 8LL) & 8) != 0
                        || *(_DWORD *)(*v325 + 148LL) == 1
                        || (v201 = *(_QWORD *)(a1 + 600)) != 0 && (*(_DWORD *)(v201 + 8) & 1) != 0 )
                      {
                        v191 = 1;
                        v333 = 1;
                        v202 = *v325;
                        if ( (unsigned int)v338 <= *(_DWORD *)(*v325 + 160LL)
                          && !gbClientDoubleClickSupport
                          && *(_QWORD *)v63 == *(_QWORD *)(v202 + 168)
                          && v75 == *(_DWORD *)(v202 + 152)
                          && (v75 != 523 || WORD1(v337) == *(_WORD *)(v202 + 156)) )
                        {
                          v203 = *(_DWORD *)(gpsi + 2040LL) / 2;
                          v204 = *(_DWORD *)(v202 + 176);
                          v380[0] = v204 - v203;
                          v205 = *(_DWORD *)(gpsi + 2044LL);
                          v206 = *(_DWORD *)(v202 + 180);
                          v380[1] = v206 - v205 / 2;
                          v380[2] = v203 + v204;
                          v380[3] = v206 + v205 / 2;
                          if ( (unsigned int)PtInRect(v380, *(_QWORD *)((char *)&v338 + 4)) )
                          {
                            v75 += 2;
                            v309 = v75;
                            v313 = v75;
                            v191 = 2;
                            v333 = 2;
                          }
                        }
                      }
LABEL_573:
                      v207 = *(_DWORD *)(*v200 + 388LL);
                      if ( (v207 & 8) != 0 )
                        *(_DWORD *)(*v200 + 388LL) = v207 | 4;
                      if ( v75 - 514 <= 0xA )
                      {
                        v208 = 1097;
                        if ( _bittest(&v208, v75 - 514) )
                        {
                          if ( *(_DWORD *)(*v200 + 160LL) && ((DWORD2(v342) - 4) & 0xFFFFFFFB) == 0 )
                          {
                            if ( DWORD2(v342) == 4 )
                            {
                              TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(0x12Cu, 0xB4u, 5u, 1);
                            }
                            else if ( gPenMonitor || (unsigned int)LoadPointerDevicePenSettings() )
                            {
                              TouchTimeFromCPLValue = *((_DWORD *)off_1C031C040 + 11);
                              if ( TouchTimeFromCPLValue == -1 )
                                TouchTimeFromCPLValue = *((_DWORD *)off_1C031C040 + 10);
                            }
                            else
                            {
                              TouchTimeFromCPLValue = gdtDblClk;
                            }
                            *(_DWORD *)(*v200 + 160LL) = v344 + TouchTimeFromCPLValue;
                          }
                        }
                      }
                      break;
                    default:
                      break;
                  }
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v63 + 16) + 424LL) + 148LL) == 1 )
                  {
                    v75 -= 352;
                    v309 = v75;
                    v313 = v75;
                    MouseKeyFlags = v314;
                  }
                  v210 = v323;
                  if ( !(unsigned int)MiPCheckMsgFilter(v323, v75, a4, a5) )
                    goto LABEL_714;
                  if ( v170 )
                    goto LABEL_780;
                  if ( v75 - 512 <= 0xE && (*(_DWORD *)(a1 + 480) & 0x8000) != 0 )
                    goto LABEL_714;
                  v211 = *(_DWORD *)(a1 + 480);
                  if ( (v211 & 0x100000) != 0 )
                  {
                    *(_DWORD *)(a1 + 480) = v211 & 0xFFEFFFFF;
                    xxxWindowEvent(0x800Bu, 0LL, -9, 0, 1);
                  }
                  v350 = *(_QWORD *)((char *)&v338 + 4);
                  v351 = *(_QWORD *)v63;
                  LODWORD(v352) = v314;
                  v353 = *((_QWORD *)&v339 + 1);
                  LODWORD(v354) = v337;
                  v39 = v308;
                  if ( v308 )
                  {
                    if ( v75 != 512 && v75 != 160 )
                    {
                      v324 = 1;
                      if ( (unsigned int)xxxCallCtfHook(7, 0, v75, (__int64)&v350) )
                        goto LABEL_365;
                    }
                  }
                  if ( ((*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_DWORD *)(a1 + 672)) & 0x100) != 0 )
                  {
                    v324 = 1;
                    if ( (unsigned int)xxxCallMouseHook(v75, &v350, v39) )
                      goto LABEL_365;
                  }
                  if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
                    goto LABEL_605;
                  v212 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), i) + 472);
                  v321 = 0;
                  v321 = *(_QWORD *)(v212 + 248) != 0LL;
                  v39 = v308;
                  if ( v321 )
                  {
                    v75 = v313;
                    v309 = v313;
                    if ( xxxClientCallLocalMouseHooks(v313, &v350, (unsigned int)v308) )
                      goto LABEL_365;
                    v63 = ThreadDesktopWindow;
LABEL_605:
                    v213 = v309;
                  }
                  else
                  {
                    v63 = ThreadDesktopWindow;
                    v213 = v313;
                    v309 = v313;
                  }
                  if ( (*(_DWORD *)(a1 + 1200) & 0x2000) == 0 && ((v314 + 2) & 0xFFFFFFFD) == 0 )
                  {
                    v214 = 0LL;
                    if ( v326 )
                    {
                      CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner((const struct tagWND *)v63);
                      v214 = (__int64)CompositionInputWindowUIOwner;
                      if ( CompositionInputWindowUIOwner )
                      {
                        v216 = 0;
                        if ( (unsigned int)CoreWindowProp::IsComponent(CompositionInputWindowUIOwner) && v213 == 161 )
                          v216 = *(_QWORD *)(*(_QWORD *)(v214 + 16) + 424LL) == gpqForeground;
                        TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(v214);
                        CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow);
                        v214 = (__int64)CompositeAppFrameWindowOrSelf;
                        if ( v216 )
                        {
                          v219 = *((_QWORD *)CompositeAppFrameWindowOrSelf + 2);
                          if ( *(_QWORD *)(v219 + 424) != gpqForeground )
                            *(_DWORD *)(v219 + 480) |= 0x20u;
                        }
                        v368 = *(_QWORD *)(a1 + 408);
                        *(_QWORD *)(a1 + 408) = &v368;
                        v369 = (__int64)CompositeAppFrameWindowOrSelf;
                        if ( CompositeAppFrameWindowOrSelf )
                        {
                          _InterlockedIncrement((volatile signed __int32 *)CompositeAppFrameWindowOrSelf + 2);
                          v39 = v308;
                          v63 = ThreadDesktopWindow;
                          v309 = v313;
                        }
                        xxxSendMessage((ULONG_PTR)CompositeAppFrameWindowOrSelf);
                        ThreadUnlock1(v221, v220, v222);
                      }
                    }
                    if ( !v214 )
                      xxxSendMessage(v63);
                    if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 424) + 80LL) == v323
                      && v323
                      && (unsigned int)IsMouseInPointerActive(a1)
                      && (*(_DWORD *)(v223 + 100) & 0x800) != 0
                      && (unsigned int)IsGenuineMouseInput((const struct tagINPUT_MESSAGE_SOURCE *)(v223 + 120)) )
                    {
                      v225 = IsMiPMouseMessage(*(_DWORD *)(v224 + 24));
                      v75 = v309;
                      if ( v225 )
                      {
                        GeneratePointerMessageFromMouse((struct tagQMSG *)v456, v309, v226, (struct tagWND *)v63, v39);
                        SetMiPPromotion(*(_QWORD *)(v63 + 16), v457);
                      }
                      goto LABEL_365;
                    }
                    goto LABEL_364;
                  }
                  if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 424) + 80LL) != v210 )
                    goto LABEL_780;
                  memset(v434, 0, sizeof(v434));
                  v405 = v434[0];
                  v424 = v434[0];
                  v406 = v434[1];
                  v425 = v434[1];
                  v407 = v434[2];
                  v426 = v434[2];
                  v408 = v434[3];
                  v427 = v434[3];
                  v409 = v434[4];
                  v428 = v434[4];
                  v404 = v434[5];
                  v429 = v434[5];
                  v227 = 0;
                  v435 = v335;
                  v436 = v336;
                  v437 = v337;
                  v438 = v338;
                  v439 = v339;
                  v440 = v340;
                  v441 = v341;
                  v442 = v342;
                  v443 = v343;
                  v444 = v344;
                  v228 = v323;
                  if ( v323 && (unsigned int)IsMouseInPointerActive(a1) )
                  {
                    v229 = v213;
                    DWORD2(v436) = v213;
                    *(_QWORD *)&v437 = MouseKeyFlags;
                    if ( (*((_DWORD *)v228 + 25) & 0x800) != 0 )
                    {
                      v230 = *(_QWORD *)(a1 + 1248);
                      if ( v230 && (*(_DWORD *)v230 & 1) != 0 )
                      {
                        v405 = *(_OWORD *)(v230 + 24);
                        v424 = v405;
                        v406 = *(_OWORD *)(v230 + 40);
                        v425 = v406;
                        v407 = *(_OWORD *)(v230 + 56);
                        v426 = v407;
                        v408 = *(_OWORD *)(v230 + 72);
                        v427 = v408;
                        v409 = *(_OWORD *)(v230 + 88);
                        v428 = v409;
                        v404 = *(_OWORD *)(v230 + 104);
                        v429 = v404;
                        v227 = 1;
                      }
                      if ( GeneratePointerMessageFromMouse(
                             (struct tagQMSG *)&v445,
                             v213,
                             v228,
                             (struct tagWND *)v63,
                             v39) )
                      {
                        v335 = v445;
                        v336 = v446;
                        v337 = v447;
                        v338 = v448;
                        v339 = v449;
                        v340 = v450;
                        v341 = v451;
                        v342 = v452;
                        v343 = v453;
                        v344 = v454;
                        v318 = 1;
                        v327 = 1;
                        if ( DWORD2(v446) == 582 )
                        {
                          *(_QWORD *)(*(_QWORD *)(a1 + 424) + 440LL) = *(_QWORD *)v63;
                        }
                        else if ( ((DWORD2(v446) - 579) & 0xFFFFFFFB) == 0 )
                        {
                          *(_QWORD *)(*(_QWORD *)(a1 + 424) + 440LL) = 0LL;
                        }
                      }
                      v228 = v323;
                      if ( !v39 )
                      {
LABEL_681:
                        v146 = v318;
                        break;
                      }
                      *((_DWORD *)v323 + 25) &= ~0x800u;
                    }
                    else
                    {
                      if ( !v39 )
                        goto LABEL_681;
                      if ( IsMiPMouseMessage(*((_DWORD *)v228 + 6)) )
                      {
                        if ( (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v228 + 120)) )
                        {
                          v231 = *(_DWORD **)(a1 + 1248);
                          if ( v231 )
                          {
                            if ( (*v231 & 2) == 0 && (*v231 & 4) == 0 )
                              goto LABEL_404;
                          }
                        }
                        v232 = *(_DWORD **)(a1 + 1248);
                        if ( v232 )
                          *v232 &= ~2u;
                      }
                    }
                  }
                  else
                  {
                    v229 = DWORD2(v436);
                  }
                  if ( !v39 )
                    goto LABEL_681;
                  if ( (v229 == 512 || v229 == 160)
                    && *(_QWORD *)v63 != gMiPTracking
                    && (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v228 + 120)) )
                  {
                    LOBYTE(v233) = 1;
                    v235 = HMValidateHandleNoSecure(v234, v233);
                    v236 = v235;
                    if ( v235
                      && (unsigned int)IsMouseInPointerActive(*(_QWORD *)(v235 + 16))
                      && (GetMiPWindowFlags((struct tagWND *)v236) & 1) == 0 )
                    {
                      v238 = *(_QWORD *)(v236 + 16);
                      if ( v238 == a1 )
                      {
                        v239 = *(_QWORD *)(a1 + 1248);
                        v416 = *(_OWORD *)(v239 + 24);
                        v417 = *(_OWORD *)(v239 + 40);
                        v418 = *(_OWORD *)(v239 + 56);
                        v419 = *(_OWORD *)(v239 + 72);
                        v420 = *(_OWORD *)(v239 + 88);
                        v421 = *(_OWORD *)(v239 + 104);
                        if ( v227 )
                        {
                          *(_OWORD *)(v239 + 24) = v405;
                          *(_OWORD *)(v239 + 40) = v406;
                          *(_OWORD *)(v239 + 56) = v407;
                          *(_OWORD *)(v239 + 72) = v408;
                          *(_OWORD *)(v239 + 88) = v409;
                          *(_OWORD *)(v239 + 104) = v404;
                          v239 = *(_QWORD *)(v383 + 1248);
                        }
                        v430 = (HWND)(((*(_DWORD *)(v239 + 36) & 0xE1F7u) << 16) | 1LL);
                        v431 = 0LL;
                        v432 = 0LL;
                        v433 = 0LL;
                        v240 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v237);
                        v423[0] = *(_QWORD *)(v240 + 408);
                        *(_QWORD *)(v240 + 408) = v423;
                        v423[1] = v236;
                        _InterlockedIncrement((volatile signed __int32 *)(v236 + 8));
                        FindTimer(v236, 65523, 2, 1, 0LL);
                        _InterlockedIncrement(&glSendMessage);
                        xxxSendTransformableMessageTimeout((__int64 *)v236, 0x24Au, v430, 0LL, 0, 0, 0LL, 1, 0);
                        ThreadUnlock1(v242, v241, v243);
                        v39 = v308;
                        v63 = ThreadDesktopWindow;
                        v213 = v313;
                        v309 = v313;
                        if ( v227 )
                        {
                          v244 = *(_QWORD *)(a1 + 1248);
                          *(_OWORD *)(v244 + 24) = v416;
                          *(_OWORD *)(v244 + 40) = v417;
                          *(_OWORD *)(v244 + 56) = v418;
                          *(_OWORD *)(v244 + 72) = v419;
                          *(_OWORD *)(v244 + 88) = v420;
                          *(_OWORD *)(v244 + 104) = v421;
                        }
                      }
                      else
                      {
                        PostEventMessageEx(
                          (struct tagTHREADINFO *)v238,
                          *(_QWORD *)(v238 + 424),
                          0x15u,
                          v236,
                          0,
                          0LL,
                          0LL,
                          0LL);
                      }
                    }
                    v245 = v318;
                    if ( v318 )
                      gMiPTracking = *(_QWORD *)v63;
                    else
                      gMiPTracking = 0LL;
                  }
                  else
                  {
                    v245 = v318;
                  }
                  if ( !v245 )
                  {
                    v246 = v191 - 1;
                    if ( v246 )
                    {
                      if ( v246 == 1 )
                        *(_DWORD *)(*(_QWORD *)(a1 + 424) + 160LL) = 0;
                    }
                    else
                    {
                      *(_DWORD *)(*(_QWORD *)(a1 + 424) + 152LL) = DWORD2(v336);
                      *(_WORD *)(*(_QWORD *)(a1 + 424) + 156LL) = WORD1(v337);
                      *(_DWORD *)(*(_QWORD *)(a1 + 424) + 160LL) = gdtDblClk + v338;
                      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 168LL) = *(_QWORD *)v63;
                      *(_QWORD *)(*(_QWORD *)(a1 + 424) + 176LL) = *(_QWORD *)((char *)&v338 + 4);
                    }
                  }
                  v247 = (const struct tagQMSG *)&v435;
                  v146 = v318;
                  if ( !v318 )
                    v247 = (const struct tagQMSG *)&v335;
                  v248 = xxxMouseActivate((struct tagTHREADINFO *)a1, (struct tagWND *)v63, v247, v314) - 1;
                  if ( !v248 )
                    goto LABEL_364;
                  if ( v248 == 1 )
                  {
                    v52 = v325;
                    continue;
                  }
                  break;
                }
                if ( v39 )
                {
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v335, 1u);
                  if ( v324 )
                  {
                    if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_BYTE *)(a1 + 672)) & 0x40) != 0 )
                      xxxCallHook(6, v213, (__int64)&v350, 5);
                  }
                }
                v324 = 0;
                v316 = (LOWORD(v317.y) << 16) | LOWORD(v317.x);
                if ( v213 >= 0x200 )
                  MouseKeyFlags = (unsigned int)GetMouseKeyFlags(*(_QWORD *)(a1 + 424));
                if ( (v213 - 171 <= 2 || v213 - 523 <= 2) && !v146 )
                  MouseKeyFlags |= v337;
                v249 = *(_QWORD *)(a1 + 600);
                if ( v314 == 5
                  && v39
                  && v249
                  && (*(_DWORD *)(v249 + 8) & 0x100) != 0
                  && *(_QWORD *)v249
                  && (**(_DWORD **)v249 & 1) != 0 )
                {
                  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                    (MenuStateOwnerLockxxxUnlock *)&v367,
                    *(struct tagMENUSTATE **)(a1 + 600));
                  if ( (unsigned int)xxxCallHandleMenuMessages(v250, v63, v213, MouseKeyFlags, v316) )
                  {
                    v9 = v310;
                    if ( !v367 )
                      goto LABEL_30;
                    xxxUnlockMenuStateInternal(v367, 0);
                    *(_QWORD *)(*(_QWORD *)(a1 + 424) + 80LL) = 0LL;
                    i = v312;
                    goto LABEL_32;
                  }
                  if ( v367 )
                    xxxUnlockMenuStateInternal(v367, 0);
                }
                if ( !v146 )
                  goto LABEL_422;
                break;
            }
            goto LABEL_704;
          }
          if ( DWORD2(v336) == 522 )
            break;
          i = 0x1C0000000uLL;
          switch ( DWORD2(v336) )
          {
            case 0x23:
              v72 = 0LL;
              MouseKeyFlags = 0LL;
              v316 = *((_QWORD *)&v337 + 1);
              if ( !v54 || (v73 = *(_QWORD *)(v54 + 16), v73 == a1) )
              {
                if ( (unsigned int)MiPCheckMsgFilter(v323, DWORD2(v336), a4, a5) )
                {
                  if ( v308 )
                    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v335, 1u);
                  goto LABEL_742;
                }
                goto LABEL_780;
              }
              if ( *(_QWORD *)(v73 + 424) == *v52 )
              {
                if ( !v328 )
                {
                  v74 = *(_QWORD *)(v54 + 16);
                  LockExchangeW32Thread(v73, &v360);
                  goto LABEL_781;
                }
LABEL_780:
                v74 = v328;
LABEL_781:
                v280 = 0LL;
                *(_QWORD *)(*(_QWORD *)(a1 + 424) + 72LL) = 0LL;
                *(_QWORD *)(*(_QWORD *)(a1 + 424) + 64LL) = 0LL;
                **(_DWORD **)(a1 + 440) &= ~1u;
                if ( v331 )
                {
                  SetWakeBit(v331, 0x4001u);
                  *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) &= 0xBFFEu;
                }
                else if ( !v74 && !v358 && !v349 && !v357 )
                {
                  *(_WORD *)(*(_QWORD *)(a1 + 440) + 8LL) = 0;
                  i = 31751LL;
                  v281 = *(_QWORD *)(a1 + 424);
                  if ( !*(_DWORD *)(v281 + 40) )
                  {
                    v280 = gptiCurrent;
                    if ( !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 56LL) )
                    {
                      if ( (*(_BYTE *)(v281 + 388) & 0x20) != 0 )
                        i = 31749LL;
                      LOWORD(i) = ~(_WORD)i;
                      *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) &= i;
                    }
                  }
LABEL_803:
                  v282 = KeGetCurrentThread();
                  v283 = 0LL;
                  v284 = 0LL;
                  if ( !(unsigned int)IsThreadCrossSessionAttached(v280, i) )
                  {
                    v286 = (__int64 *)PsGetThreadWin32Thread(v282);
                    if ( v286 )
                      v284 = *v286;
                  }
                  *(_QWORD *)(v284 + 16) = v370;
                  v287 = v371;
                  if ( v371 )
                    v372();
                  v288 = KeGetCurrentThread();
                  v289 = 0LL;
                  if ( !(unsigned int)IsThreadCrossSessionAttached(v287, v285) )
                  {
                    v291 = (__int64 *)PsGetThreadWin32Thread(v288);
                    if ( v291 )
                      v289 = *v291;
                  }
                  *(_QWORD *)(v289 + 16) = v373;
                  v292 = v374;
                  if ( v374 )
                    v375();
                  v293 = KeGetCurrentThread();
                  v294 = 0LL;
                  if ( !(unsigned int)IsThreadCrossSessionAttached(v292, v290) )
                  {
                    v296 = (__int64 *)PsGetThreadWin32Thread(v293);
                    if ( v296 )
                      v294 = *v296;
                  }
                  *(_QWORD *)(v294 + 16) = v376;
                  v297 = v377;
                  if ( v377 )
                    v378();
                  v298 = KeGetCurrentThread();
                  v299 = 0LL;
                  if ( !(unsigned int)IsThreadCrossSessionAttached(v297, v295) )
                  {
                    v301 = (__int64 *)PsGetThreadWin32Thread(v298);
                    if ( v301 )
                      v299 = *v301;
                  }
                  *(_QWORD *)(v299 + 16) = v360;
                  v302 = v361;
                  if ( v361 )
                    v362();
                  v303 = KeGetCurrentThread();
                  if ( !(unsigned int)IsThreadCrossSessionAttached(v302, v300) )
                  {
                    v306 = (__int64 *)PsGetThreadWin32Thread(v303);
                    if ( v306 )
                      v283 = *v306;
                  }
                  *(_QWORD *)(v283 + 16) = v363;
                  v307 = v364;
                  if ( v364 )
                    v365();
                  ThreadUnlock1(v307, v304, v305);
                  return 0LL;
                }
                if ( v74 )
                {
                  SetWakeBit(v74, 0x4006u);
                  *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) &= 0xBFF9u;
                }
                if ( v349 )
                {
                  SetWakeBit(v349, 0x4400u);
                  *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) &= 0xBBFFu;
                }
                if ( v357 )
                {
                  SetWakeBit(v357, 0x5000u);
                  *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) &= 0xAFFFu;
                }
                if ( v358 )
                {
                  SetWakeBit(v358, 0x2040u);
                  *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) &= ~0x2000u;
                }
                else
                {
                  v280 = gptiCurrent;
                  if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 56LL) )
                  {
                    i = 23559LL;
                    *(_WORD *)(*(_QWORD *)(a1 + 440) + 8LL) |= *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) & 0x5C07;
                    v280 = 41976LL;
                    *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) &= 0xA3F8u;
                    *(_WORD *)(*(_QWORD *)(a1 + 440) + 4LL) &= 0xA3F8u;
                  }
                }
                goto LABEL_803;
              }
              v39 = v308;
              v75 = v309;
              goto LABEL_365;
            case 0xFE:
              goto LABEL_428;
            case 0xFF:
              v316 = *((_QWORD *)&v337 + 1);
              MouseKeyFlags = v337;
              v63 = 0LL;
              ThreadDesktopWindow = 0LL;
              v121 = 0LL;
              v122 = 0LL;
              if ( *((_QWORD *)&v337 + 1) )
              {
                v123 = HMValidateHandle(*((__int64 *)&v337 + 1), 18);
                v121 = 0LL;
                if ( v123 )
                {
                  v63 = *(_QWORD *)(v123 + 24);
                  ThreadDesktopWindow = v63;
                  v121 = v63;
                  v122 = v63;
                }
              }
              if ( !v121 )
              {
                v124 = *v52;
                v63 = *(_QWORD *)(*v52 + 112LL);
                ThreadDesktopWindow = v63;
                v122 = v63;
                if ( !v63 )
                {
                  v63 = *(_QWORD *)(v124 + 120);
                  ThreadDesktopWindow = v63;
                  v122 = v63;
                  if ( !v63 )
                    goto LABEL_363;
                }
              }
              ThreadLockExchangeAlways(v63, &v355);
              if ( CheckCrossThreadInput((struct tagWND *const)v63, v323, &v322, &v308, a8) )
                goto LABEL_780;
              v125 = v322;
              if ( !v322 )
                goto LABEL_323;
              v126 = v122 + 16;
              if ( *(_QWORD *)(*(_QWORD *)v126 + 424LL) != *v52 )
                goto LABEL_363;
              if ( (unsigned int)IsInsideMenuLoop(a1) )
              {
                v127 = *(_QWORD *)(**(_QWORD **)(a1 + 600) + 8LL);
              }
              else
              {
                v128 = *(_QWORD *)(a1 + 664);
                if ( !v128 )
                  goto LABEL_321;
                v127 = *(_QWORD *)(v128 + 16);
              }
              if ( v127 )
              {
                v63 = v127;
                ThreadDesktopWindow = v127;
                v126 = v127 + 16;
                v125 = *(_QWORD *)(v127 + 16) != v390;
                v322 = v125;
                ThreadLockExchangeAlways(v127, &v355);
              }
LABEL_321:
              if ( !v349 )
              {
                v349 = *(_QWORD *)v126;
                LockExchangeW32Thread(v349, &v373);
              }
LABEL_323:
              if ( !a4 && a5 == -1 )
                goto LABEL_331;
              if ( a4 <= a5 )
              {
                if ( v71 < a4 || v71 > a5 )
                  goto LABEL_714;
              }
              else if ( v71 >= a5 && v71 <= a4 )
              {
                v39 = v308;
                goto LABEL_229;
              }
LABEL_331:
              if ( (unsigned int)CheckPwndFilter(v63, a3) )
              {
                if ( v125 )
                  goto LABEL_780;
                v129 = v308 == 0;
LABEL_441:
                if ( v129 )
                  goto LABEL_422;
                xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v335, 1u);
                v72 = 0LL;
                goto LABEL_742;
              }
              goto LABEL_714;
            case 0x100:
            case 0x104:
              v332 = 1;
              if ( (*(_DWORD *)(a1 + 480) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
                goto LABEL_780;
              v76 = v337;
              v77 = (unsigned __int8)v337;
              MouseKeyFlags = (unsigned __int8)v337;
              v39 = v308;
              if ( v308 && (DWORD1(v341) & 0x20000) != 0 )
                goto LABEL_180;
              v78 = v325;
              if ( (unsigned __int8)v337 != 18LL )
              {
                *(_DWORD *)(*v325 + 388LL) &= 0xFFFFFFF3;
                v76 = v337;
              }
              v79 = *(_BYTE *)(*v78 + 232LL);
              v80 = v79 & 0x10;
              if ( v77 != 44 )
                goto LABEL_168;
              if ( (*(_BYTE *)(*v78 + 232LL) & 0x10) == 0 )
              {
                if ( (*(_DWORD *)(a1 + 868) & 0x20) != 0 )
                  goto LABEL_168;
LABEL_160:
                xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v335, 1u);
                if ( v80 || (DWORD2(v337) & 0xFF0000) == 0x10000LL )
                {
                  v81 = *(struct tagWND **)(*v78 + 120LL);
                  v82 = v81 == 0LL;
                  if ( !v81 )
                  {
LABEL_166:
                    v9 = v310;
                    if ( v82 )
                      goto LABEL_30;
                    v83 = HIDWORD(v342) != 1;
                    v368 = *(_QWORD *)(a1 + 408);
                    *(_QWORD *)(a1 + 408) = &v368;
                    v369 = (__int64)v81;
                    _InterlockedIncrement((volatile signed __int32 *)v81 + 2);
                    xxxSnapWindow(v81, v83);
                    ThreadUnlock1(v85, v84, v86);
                    goto LABEL_29;
                  }
                  v81 = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(v81);
                }
                else
                {
                  v81 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL) + 24LL);
                }
                v82 = v81 == 0LL;
                goto LABEL_166;
              }
              if ( (*(_DWORD *)(a1 + 868) & 0x10) == 0 )
                goto LABEL_160;
LABEL_168:
              if ( gcHotKey && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
              {
                v87 = v77 | 0x400;
                if ( (v79 & 0x10) == 0 )
                  v87 = v77;
                v88 = v87 | 0x200;
                if ( (v79 & 4) == 0 )
                  v88 = v87;
                v89 = v88;
                LODWORD(v89) = v88 | 0x100;
                if ( (v79 & 1) == 0 )
                  v89 = v88;
                v90 = (_QWORD *)HotKeyToWindow(v89);
                if ( v90 )
                {
                  if ( *(_QWORD *)(a1 + 448) == *(_QWORD *)(v90[2] + 448LL) )
                  {
                    PostTransformableMessage(*(_QWORD *)(v91 + 120), 274, 61776, *v90, 0);
                    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v335, 1u);
                    v9 = v310;
                    *(_QWORD *)(*(_QWORD *)(a1 + 424) + 80LL) = 0LL;
                    i = v312;
                    goto LABEL_32;
                  }
                }
              }
LABEL_180:
              if ( v77 == 231 )
              {
                *(_WORD *)(a1 + 866) = WORD1(v76);
                v76 = 231LL;
              }
LABEL_183:
              v92 = (unsigned __int8)v76;
              if ( (unsigned __int8)v76 == 231LL )
                v76 = 231LL;
              *(_QWORD *)&v337 = v76;
              if ( v39 && (DWORD1(v341) & 0x20000) != 0 || !gbGraveKeyToggle )
              {
                v94 = v325;
              }
              else
              {
                AppImeCompatFlags = GetAppImeCompatFlags(0LL);
                v94 = v325;
                if ( (AppImeCompatFlags & 0x800000) == 0 && BYTE10(v337) == 41 )
                {
                  if ( v39 )
                  {
                    v95 = *v325;
                    if ( (*(_BYTE *)(*v325 + 232LL) & 0x15) == 0
                      && (*(_BYTE *)(v95 + 250) & 0x40) == 0
                      && (*(_BYTE *)(v95 + 251) & 1) == 0 )
                    {
                      v96 = *(_QWORD **)(v95 + 112);
                      v97 = v96;
                      if ( !v96 )
                      {
                        v96 = *(_QWORD **)(v95 + 120);
                        v97 = v96;
                      }
                      if ( !v97 || v96[2] == a1 )
                      {
                        xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v335, 1u);
                        v9 = v310;
                        if ( v332 || !v97 )
                          goto LABEL_30;
                        v410 = *v96;
                        v411 = 80;
                        v412 = 0LL;
                        v413 = 0LL;
                        v414 = 0LL;
                        v415 = 0LL;
                        xxxCallCtfHook(3, 0, 1LL, (__int64)&v410);
                        *(_QWORD *)(*(_QWORD *)(a1 + 424) + 80LL) = 0LL;
                        i = v312;
                        goto LABEL_32;
                      }
                    }
                  }
                }
              }
              if ( v92 == 121 )
              {
                v71 |= 4u;
                v309 = v71;
                v313 = v71;
              }
              if ( (*(_BYTE *)(*v94 + 232LL) & 4) != 0 && v92 == 27 )
              {
                v71 |= 4u;
                v309 = v71;
                v313 = v71;
              }
              if ( (*(_DWORD *)(a1 + 480) & 8) == 0 )
                *((_QWORD *)&v337 + 1) &= ~0x2000000uLL;
LABEL_210:
              MouseKeyFlags = (unsigned __int8)v337;
              v98 = (KeyboardInputTelemetry **)v325;
              v99 = *v325;
              v63 = *(_QWORD *)(*v325 + 112LL);
              ThreadDesktopWindow = v63;
              v100 = v63;
              if ( !v63 )
              {
                v63 = *(_QWORD *)(v99 + 120);
                v100 = v63;
                ThreadDesktopWindow = v63;
                if ( !v63 )
                  goto LABEL_364;
                if ( v71 - 256 <= 3 )
                {
                  v71 += 4;
                  v309 = v71;
                  v313 = v71;
                }
              }
              ThreadLockExchangeAlways(v63, &v355);
              v101 = (__int64 *)(v100 + 16);
              v102 = *v101;
              v103 = *v101 != v387;
              v322 = v103;
              if ( v102 != v388 )
              {
                if ( *(KeyboardInputTelemetry **)(v102 + 424) != *v98 )
                  goto LABEL_364;
                if ( (unsigned int)IsInsideMenuLoop(a1) )
                {
                  v105 = *(_QWORD *)(**(_QWORD **)(a1 + 600) + 8LL);
LABEL_220:
                  if ( v105 )
                  {
                    v63 = v105;
                    ThreadDesktopWindow = v105;
                    v101 = (__int64 *)(v105 + 16);
                    v103 = v104;
                    LOBYTE(v103) = *(_QWORD *)(v105 + 16) != v389;
                    v322 = v103;
                    ThreadLockExchangeAlways(v105, &v355);
                  }
                }
                else
                {
                  v106 = *(_QWORD *)(a1 + 664);
                  if ( v106 )
                  {
                    v105 = *(_QWORD *)(v106 + 16);
                    goto LABEL_220;
                  }
                }
                if ( !v331 )
                {
                  v331 = *v101;
                  v347 = v331;
                  LockExchangeW32Thread(v331, &v363);
                }
              }
              if ( a4 || a5 != -1 )
              {
                if ( a4 <= a5 )
                {
                  i = v312;
                  if ( v71 < a4 || v71 > a5 )
                  {
LABEL_31:
                    v9 = v310;
                    goto LABEL_32;
                  }
                }
                else if ( v71 >= a5 && v71 <= a4 )
                {
                  goto LABEL_229;
                }
              }
              v107 = CheckPwndFilter(v63, a3);
              i = v312;
              if ( !v107 )
                goto LABEL_31;
              if ( v103 )
                goto LABEL_780;
              if ( v39 )
              {
                if ( (DWORD1(v341) & 0x20000) != 0 )
                  goto LABEL_252;
                if ( !(unsigned int)IsInsideMenuLoop(a1) )
                {
                  if ( MouseKeyFlags == 93 && v71 == 257 )
                    PostTransformableMessage(v63, 123, *(_QWORD *)v63, -1, 0);
                  if ( MouseKeyFlags == 112 && v71 == 256 )
                    PostMessage(v63, 77LL, 0LL, 0LL);
                }
              }
              if ( MouseKeyFlags == 16 )
              {
                v108 = BYTE11(v337) & 1 | 0xA0;
                if ( !v332
                  && ((unsigned __int8)(1 << (2 * ((v108 ^ 1) & 3))) & *((_BYTE *)*v98
                                                                       + ((unsigned __int64)(v108 ^ 1u) >> 2)
                                                                       + 228)) != 0
                  && (*(_DWORD *)(a1 + 480) & 8) == 0 )
                {
                  *(_QWORD *)&v337 = v108;
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v335, 1u);
                  v9 = v310;
                  *(_QWORD *)(*(_QWORD *)(a1 + 424) + 80LL) = 0LL;
                  i = v312;
                  goto LABEL_32;
                }
              }
              v348 = *((unsigned __int8 *)*v98 + ((unsigned __int64)(unsigned __int8)MouseKeyFlags >> 2) + 228) & (1 << (2 * (MouseKeyFlags & 3)));
              if ( !v348 )
              {
LABEL_252:
                v109 = v323;
                goto LABEL_253;
              }
              v109 = v323;
              if ( !v39 )
                goto LABEL_259;
              if ( (unsigned __int64)v323 > 1 )
                *((_QWORD *)v323 + 5) |= 0x40000000uLL;
LABEL_253:
              if ( v39 )
              {
                if ( (DWORD1(v341) & 0x20000) != 0
                  || (unsigned __int64)v109 <= 1
                  || (*(_DWORD *)(a1 + 1200) & 0x8000000) == 0 )
                {
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v335, 1u);
                  v110 = v330;
                }
                else
                {
                  v110 = xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v335, 0);
                  v330 = v110;
                }
                goto LABEL_260;
              }
LABEL_259:
              v110 = v330;
LABEL_260:
              v316 = *((_QWORD *)&v337 + 1);
              v111 = v337;
              MouseKeyFlags = v337;
              if ( v348 )
                v316 = *((_QWORD *)&v337 + 1) | 0x40000000LL;
              if ( v71 == 257 || v71 == 261 )
                v316 |= 0x80000000uLL;
              v112 = *v98;
              if ( (*((_BYTE *)*v98 + 232) & 0x10) != 0 )
                v316 |= 0x20000000uLL;
              v113 = *(_QWORD *)(a1 + 600);
              if ( v113 && (*(_DWORD *)(v113 + 8) & 1) != 0 )
                v316 |= 0x10000000uLL;
              if ( (*((_DWORD *)v112 + 97) & 0x4000) != 0 )
                v316 |= 0x8000000uLL;
              if ( (v359 || gpImeHotKeyListHeader) && (DWORD1(v341) & 0x20000) == 0 )
              {
                if ( !v39 )
                  goto LABEL_297;
                if ( (!v113 || (*(_DWORD *)(v113 + 8) & 1) == 0) && (*(_DWORD *)(a1 + 480) & 0x2000000) == 0 )
                {
                  if ( (_QWORD)v337 == 231LL )
                    v111 = (*(unsigned __int16 *)(a1 + 866) << 16) | 0xE7;
                  *(_QWORD *)(a1 + 1208) = *((_QWORD *)&v342 + 1);
                  v334 = xxxImmProcessKey((_DWORD)v112, v63, v71, v111, v316);
                  if ( (v334 & 0x11) != 0 )
                  {
                    if ( v110 )
                      FreeQEntry((unsigned int *)v110);
                    v330 = 0LL;
                    goto LABEL_285;
                  }
                }
              }
              if ( !v39 )
              {
LABEL_297:
                v72 = 0LL;
                goto LABEL_298;
              }
              v329 = 1;
              v72 = 0LL;
              v114 = 0;
              if ( (DWORD1(v341) & 0x20000) != 0 )
                goto LABEL_295;
              v115 = *v98;
              v116 = *((_QWORD *)*v98 + 51);
              *((_QWORD *)v115 + 51) = *((_QWORD *)&v339 + 1);
              KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
                v115,
                *(_DWORD *)(*(_QWORD *)a1 + 1600LL));
              v117 = xxxCallCtfHook(2, v334 & 2, MouseKeyFlags, v316);
              v114 = v117;
              v118 = *v98;
              *((_QWORD *)*v98 + 51) = v116;
              v119 = (unsigned int *)v330;
              if ( !v330 )
                goto LABEL_294;
              if ( v117 != 2
                || (*(_DWORD *)(a1 + 1200) & 0x10000000) != 0
                || !AllocQEntryEx((KeyboardInputTelemetry *)((char *)*v98 + 24), v330, 1) )
              {
                FreeQEntry(v119);
                v330 = 0LL;
LABEL_294:
                KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
                  v118,
                  *(_DWORD *)(*(_QWORD *)a1 + 1600LL),
                  ((DWORD2(v336) - 257) & 0xFFFFFFFB) == 0);
LABEL_295:
                if ( !v114 )
                {
LABEL_298:
                  if ( ((*(_BYTE *)(a1 + 672) | *(_BYTE *)(**(_QWORD **)(a1 + 456) + 16LL)) & 8) == 0 )
                    goto LABEL_304;
                  v329 = 1;
                  v120 = 3;
                  if ( v39 )
                    v120 = 0;
                  if ( !(unsigned int)xxxCallHook(v120, MouseKeyFlags, v316, 2) )
                  {
LABEL_304:
                    if ( v329
                      && v39
                      && ((*(_BYTE *)(a1 + 672) | *(_BYTE *)(**(_QWORD **)(a1 + 456) + 16LL)) & 0x40) != 0 )
                    {
                      xxxCallHook(7, MouseKeyFlags, v316, 5);
                    }
                    goto LABEL_742;
                  }
                }
LABEL_285:
                v75 = v309;
                goto LABEL_365;
              }
              *((_QWORD *)*v98 + 10) = *((_QWORD *)*v98 + 3);
              DeferSysPeekMsg((struct tagTHREADINFO *)a1, 1);
              v9 = 1;
              v310 = 1;
              v330 = 0LL;
              i = v312;
              break;
            case 0x101:
            case 0x105:
              v39 = v308;
              v76 = v337;
              goto LABEL_183;
            case 0x102:
              v39 = v308;
              goto LABEL_210;
            case 0x119:
            case 0x11B:
              goto LABEL_423;
            default:
              goto LABEL_445;
          }
        }
LABEL_356:
        if ( (*(_DWORD *)(a1 + 480) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
          goto LABEL_780;
        if ( (DWORD1(v341) & 0x100000) != 0 )
        {
          v63 = *(_QWORD *)(*v52 + 112LL);
          ThreadDesktopWindow = v63;
        }
        else if ( v54 && (unsigned int)IsCompositionInputWindow((const struct tagWND *)v54) )
        {
          if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled((const struct tagWND *)v54) )
            goto LABEL_363;
        }
        else if ( !(unsigned int)IsInsideMenuLoop(a1) )
        {
          ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
          v136 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v135);
          v422[0] = *(_QWORD *)(v136 + 408);
          *(_QWORD *)(v136 + 408) = v422;
          v137 = (struct tagWND *)ThreadDesktopWindow;
          v422[1] = ThreadDesktopWindow;
          if ( ThreadDesktopWindow )
          {
            _InterlockedIncrement((volatile signed __int32 *)(ThreadDesktopWindow + 8));
            v137 = (struct tagWND *)ThreadDesktopWindow;
          }
          v138 = xxxDCEWindowHitTest(v137, v340, (struct tagPOINT)&v314, 1);
          LOBYTE(v139) = 1;
          v63 = HMValidateHandleNoSecure(v138, v139);
          ThreadDesktopWindow = v63;
          ThreadUnlock1(v141, v140, v142);
          v71 = v313;
          v309 = v313;
        }
        if ( !v63 || (unsigned int)IsInsideMenuLoop(a1) )
        {
LABEL_363:
          v39 = v308;
          goto LABEL_364;
        }
        ThreadLockExchangeAlways(v63, &v355);
        v143 = *(_QWORD *)(v63 + 16);
        v322 = v143 != v391;
        if ( v143 != v392 )
        {
          if ( *(_QWORD *)(v143 + 424) != *v52 )
            goto LABEL_363;
          if ( !v331 )
          {
            v331 = v143;
            v347 = v143;
            LockExchangeW32Thread(v143, &v363);
          }
        }
        v144 = v323;
        if ( (unsigned int)MiPCheckMsgFilter(v323, v71, a4, a5) )
        {
          if ( (unsigned int)CheckPwndFilter(v63, a3) )
            break;
        }
LABEL_714:
        v39 = v308;
LABEL_229:
        v9 = v310;
        i = v312;
      }
      if ( v143 != v393 )
        goto LABEL_780;
      if ( !v144 || !(unsigned int)IsMouseInPointerActive(a1) )
      {
        v39 = v308;
        goto LABEL_408;
      }
      v145 = *((_DWORD *)v144 + 25);
      if ( (v145 & 0x800) == 0 )
        break;
      if ( !*(_QWORD *)(v63 + 264) )
        *((_DWORD *)v144 + 25) = v145 & 0xFFFFDFFF;
      v39 = v308;
      if ( !GeneratePointerMessageFromMouse((struct tagQMSG *)v455, v71, v144, (struct tagWND *)v63, v308) )
      {
        if ( v39 )
        {
          *((_DWORD *)v144 + 25) &= ~0x800u;
          goto LABEL_408;
        }
        goto LABEL_410;
      }
      v335 = v455[0];
      v336 = v455[1];
      v337 = v455[2];
      v338 = v455[3];
      v339 = v455[4];
      v340 = v455[5];
      v341 = v455[6];
      v342 = v455[7];
      v343 = v455[8];
      v344 = v455[9];
      v146 = 1;
      v318 = 1;
      v327 = 1;
      if ( v39 )
        *((_DWORD *)v144 + 25) &= ~0x800u;
LABEL_704:
      if ( ((DWORD2(v342) - 2) & 0xFFFFFFCF) == 0 && DWORD2(v342) != 50 )
      {
        v251 = DWORD2(v336);
        v313 = DWORD2(v336);
        v316 = *((_QWORD *)&v337 + 1);
        MouseKeyFlags = v337;
        v72 = 0LL;
LABEL_720:
        if ( v39 )
        {
          if ( (unsigned int)IsMouseInPointerActive(a1) && v146 )
          {
            v259 = 0LL;
            if ( v63 )
              v259 = *(_QWORD *)v63;
            *(_QWORD *)(*(_QWORD *)(a1 + 1248) + 48LL) = v259;
            if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1248) + 36LL) & 0x400000) != 0
              && !(unsigned int)IsCompositionInputWindow((const struct tagWND *)v63) )
            {
              *(_DWORD *)(*(_QWORD *)(a1 + 1248) + 36LL) &= ~0x400000u;
            }
            MiPWindowFlags = GetMiPWindowFlags((struct tagWND *)v63);
            SetMiPWindowFlags((struct tagWND *)v63, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
            if ( ((DWORD2(v336) - 578) & 0xFFFFFFFB) != 0 )
            {
              if ( ((DWORD2(v336) - 579) & 0xFFFFFFFB) == 0 )
                **(_DWORD **)(a1 + 1248) &= ~8u;
            }
            else
            {
              v261 = 0;
              if ( DWORD2(v336) == 578 )
                v261 = 8;
              **(_DWORD **)(a1 + 1248) = v261 | **(_DWORD **)(a1 + 1248) & 0xFFFFFFF7;
            }
          }
          else
          {
            xxxSkipSysMsgEx(v258, (struct tagQMSG *)&v335, 1u);
          }
        }
        if ( CTouchProcessor::IsPointerMessageTouchpad(
               gpTouchProcessor,
               (struct tagTHREADINFO *)a1,
               *((unsigned __int64 *)&v337 + 1),
               v146) )
        {
          if ( !v39 && !(unsigned int)IsPTPAllowedOnThread((struct tagTHREADINFO *)a1, DWORD2(v336), v337) )
            xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v335, 1u);
          v262 = v316;
          if ( v251 == 595 )
            v262 = -1LL;
          v316 = v262;
        }
        goto LABEL_742;
      }
      v252 = v346;
      EtwTraceBeginPointerMessageRetrieve(v346, (unsigned __int16)v337, DWORD2(v336));
      v72 = 0LL;
      v253 = xxxRetrievePointerInputMessage(
               a1,
               a3,
               a4,
               a5,
               1,
               0,
               &v308,
               v252,
               (__int64)&ThreadDesktopWindow,
               (__int64)&v313,
               (__int64)&MouseKeyFlags,
               (__int64)&v316,
               &v322,
               a8);
      EtwTraceEndPointerMessageRetrieve(v252, (unsigned __int16)v337, DWORD2(v336));
      v63 = ThreadDesktopWindow;
      if ( ThreadDesktopWindow )
        ThreadLockExchange(ThreadDesktopWindow, &v355);
      v255 = v253 - 1;
      if ( !v255 )
      {
        v39 = v308;
        v251 = v313;
        goto LABEL_720;
      }
      v256 = v255 - 1;
      if ( !v256 )
      {
        if ( v322 )
        {
          v357 = *(_QWORD *)(v63 + 16);
          LockExchangeW32Thread(v357, &v370);
        }
        goto LABEL_780;
      }
      v257 = v256 - 1;
      if ( v257 )
      {
        if ( v257 == 1 )
        {
          v39 = v308;
          goto LABEL_229;
        }
      }
      else
      {
        xxxDefPointerProc(v254, DWORD2(v336), v337, *((_QWORD *)&v337 + 1));
      }
      v39 = v308;
      v75 = v313;
LABEL_365:
      xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v335, 1u);
      if ( v324 )
      {
        if ( ((*(_BYTE *)(a1 + 672) | *(_BYTE *)(**(_QWORD **)(a1 + 456) + 16LL)) & 0x40) != 0 )
          xxxCallHook(6, v75, (__int64)&v350, 5);
        v324 = 0;
      }
      if ( v329 )
      {
        if ( ((*(_BYTE *)(a1 + 672) | *(_BYTE *)(**(_QWORD **)(a1 + 456) + 16LL)) & 0x40) != 0 )
          xxxCallHook(7, MouseKeyFlags, v316, 5);
        v329 = 0;
      }
      v9 = v310;
      i = v312;
      if ( v39 )
        *(_QWORD *)(*(_QWORD *)(a1 + 424) + 80LL) = 0LL;
    }
    v39 = v308;
    if ( !v308 )
      goto LABEL_410;
    if ( !IsMiPMouseMessage(*((_DWORD *)v144 + 6)) )
      goto LABEL_408;
    if ( !(unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)v144 + 120)) )
      break;
    v147 = *(_DWORD **)(a1 + 1248);
    if ( !v147 || (*v147 & 2) != 0 || (*v147 & 4) != 0 )
      break;
LABEL_404:
    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v335, 1u);
    v9 = v310;
    *(_QWORD *)(*(_QWORD *)(a1 + 424) + 80LL) = 0LL;
  }
  v148 = *(_DWORD **)(a1 + 1248);
  if ( v148 )
    *v148 &= ~2u;
LABEL_408:
  if ( v39 )
    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v335, 1u);
LABEL_410:
  v149 = GetMouseKeyFlags(*v325);
  MouseKeyFlags = v337 | v149;
  v317.x = SWORD4(v337);
  v317.y = SWORD5(v337);
  PhysicalToLogicalDPIPointWithHitTest(&v317, &v317, 0LL, v63);
  v316 = (LOWORD(v317.y) << 16) | LOWORD(v317.x);
  *(struct tagPOINT *)((char *)&v338 + 4) = v317;
  v350 = (__int64)v317;
  v351 = *(_QWORD *)v63;
  LODWORD(v352) = 0;
  v353 = *((_QWORD *)&v339 + 1);
  LODWORD(v354) = v337;
  if ( v39 )
  {
    v324 = 1;
    if ( (unsigned int)xxxCallCtfHook(7, 0, v71, (__int64)&v350) )
      goto LABEL_364;
  }
  if ( ((*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_DWORD *)(a1 + 672)) & 0x100) != 0 )
  {
    v324 = 1;
    if ( (unsigned int)xxxCallMouseHook(v71, &v350, v39) )
      goto LABEL_364;
  }
  if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
    goto LABEL_418;
  v151 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v150) + 472);
  v320 = 0;
  v320 = *(_QWORD *)(v151 + 248) != 0LL;
  v39 = v308;
  v71 = v313;
  if ( v320 )
  {
    v309 = v313;
    if ( xxxClientCallLocalMouseHooks(v313, &v350, (unsigned int)v308) )
    {
LABEL_364:
      v75 = v309;
      goto LABEL_365;
    }
  }
  v63 = ThreadDesktopWindow;
LABEL_418:
  if ( v324
    && v39
    && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 456) + 16LL) | *(_BYTE *)(a1 + 672)) & 0x40) != 0 )
  {
    xxxCallHook(6, v71, (__int64)&v350, 5);
  }
LABEL_422:
  v72 = 0LL;
LABEL_742:
  if ( *(_QWORD *)(a1 + 748) != *(_QWORD *)((char *)&v338 + 4) )
    *(_DWORD *)(a1 + 480) |= 0x100000u;
  v263 = v346;
  if ( (unsigned __int64)v346 > 1 && (BYTE4(v341) & 0x20) != 0 )
  {
    if ( *((_DWORD *)v346 + 6) == 512 )
    {
      v264 = 0LL;
      if ( v63 )
        v264 = *(_QWORD *)v63;
      *((_QWORD *)v346 + 2) = v264;
      *((_DWORD *)v263 + 25) |= 0x400u;
    }
    *((_QWORD *)v263 + 8) = v316;
  }
  *(_QWORD *)(a1 + 748) = *(_QWORD *)((char *)&v338 + 4);
  *(_DWORD *)(a1 + 756) = *(_DWORD *)(*(_QWORD *)(v63 + 40) + 288LL);
  *(_QWORD *)(a1 + 760) = v340;
  *(_DWORD *)(a1 + 560) = v338;
  *(_QWORD *)(*(_QWORD *)(a1 + 424) + 408LL) = *((_QWORD *)&v339 + 1);
  *(_QWORD *)(*(_QWORD *)(a1 + 424) + 72LL) = 1LL;
  *(_QWORD *)(a1 + 568) = 1LL;
  *(_QWORD *)(a1 + 1208) = *((_QWORD *)&v342 + 1);
  *(_DWORD *)(a1 + 1256) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v265 = *(_DWORD *)(v384 + 1200);
  if ( *(_DWORD *)(a1 + 1212) == 1 )
    v266 = v265 | 0x20000;
  else
    v266 = v265 & 0xFFFDFFFF;
  *(_DWORD *)(v384 + 1200) = v266;
  **(_DWORD **)(a1 + 440) &= ~8u;
  **(_QWORD **)(a1 + 472) &= 0x7FFFFFFFuLL;
  v267 = v318;
  if ( v308 )
  {
    v268 = *(unsigned __int64 **)(v385 + 472);
    v269 = *v268;
    if ( (BYTE4(v341) & 1) != 0 )
      v270 = v269 | 0x1000;
    else
      v270 = v269 & 0xFFFFFFFFFFFFEFFFuLL;
    *v268 = v270;
  }
  v271 = v313;
  TransferWakeBit(a1, v313);
  v272 = 31751;
  v273 = *(_QWORD *)(a1 + 424);
  if ( !*(_DWORD *)(v273 + 40) && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 56LL) )
  {
    if ( (*(_BYTE *)(v273 + 388) & 0x20) != 0 )
      v272 = 31749;
    *(_WORD *)(*(_QWORD *)(a1 + 440) + 6LL) &= ~v272;
  }
  if ( v308 )
  {
    if ( v267 )
    {
      v274 = *(_DWORD **)(a1 + 1248);
      if ( v274 )
      {
        if ( (*v274 & 1) != 0 && (*v274 & 4) != 0 )
          SetMiPWakeBit((struct tagTHREADINFO *)a1);
      }
    }
  }
  if ( ThreadDesktopWindow )
    v72 = *(_QWORD *)ThreadDesktopWindow;
  *(_QWORD *)a2 = v72;
  *(_DWORD *)(a2 + 8) = v271;
  v275 = MouseKeyFlags;
  if ( (v334 & 2) != 0 )
    v275 = 229LL;
  *(_QWORD *)(a2 + 16) = v275;
  *(_QWORD *)(a2 + 24) = v316;
  *(_DWORD *)(a2 + 32) = v338;
  *(_QWORD *)(a2 + 36) = *(_QWORD *)((char *)&v338 + 4);
  if ( v308 )
  {
    EtwTraceInputProcessDelay(a1);
    *(_DWORD *)(*(_QWORD *)(a1 + 424) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v276 = *(_DWORD *)(a2 + 8);
    if ( v276 == 256 )
    {
      *(_DWORD *)(a1 + 1312) |= 1u;
      *(_QWORD *)(a1 + 1296) = *(_QWORD *)(a1 + 1208);
      *(_DWORD *)(a1 + 1288) = *(unsigned __int16 *)(a2 + 26);
      *(_DWORD *)(a1 + 1292) = *(_DWORD *)(a2 + 16);
      *(_QWORD *)(a1 + 1304) = *((_QWORD *)&v343 + 1);
    }
    else if ( ((v276 - 257) & 0xFFFFFFFB) == 0 )
    {
      *(_DWORD *)(a1 + 1312) &= ~1u;
    }
  }
  EtwTraceRetrieveInputMessage(a2, (unsigned int)v308);
  PopAndFreeW32ThreadLock(&v370);
  PopAndFreeW32ThreadLock(&v373);
  PopAndFreeW32ThreadLock(&v376);
  PopAndFreeW32ThreadLock(&v360);
  PopAndFreeW32ThreadLock(&v363);
  ThreadUnlock1(v278, v277, v279);
  return 1LL;
}
