/*
 * XREFs of ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0032740 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@W4ISOD_INPUTROUTING@@@Z @ 0x1C0003C0C (-DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@W4ISOD_INPUTROUTING@@@Z.c)
 *     xxxCallCtfHook @ 0x1C00167C8 (xxxCallCtfHook.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxDCEWindowHitTestIndirect @ 0x1C002B5A0 (xxxDCEWindowHitTestIndirect.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     ?IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C002E5D4 (-IsCompositeAppOrSelfDisabled@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     LockW32Thread @ 0x1C0037060 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     ?xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C0037170 (-xxxGetNextSysMsg@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 *     ClearWakeBit @ 0x1C00372BC (ClearWakeBit.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?ShouldDeferMessage@@YA_NW4ISOD_INPUTROUTING@@I@Z @ 0x1C00373EC (-ShouldDeferMessage@@YA_NW4ISOD_INPUTROUTING@@I@Z.c)
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     LockExchangeW32Thread @ 0x1C003753C (LockExchangeW32Thread.c)
 *     xxxProcessEventMessage @ 0x1C0037588 (xxxProcessEventMessage.c)
 *     DelQEntry @ 0x1C0038198 (DelQEntry.c)
 *     IsHiddenByInputService @ 0x1C00386F0 (IsHiddenByInputService.c)
 *     xxxSendTransformableMessage @ 0x1C004104C (xxxSendTransformableMessage.c)
 *     IsThreadDesktopComposed @ 0x1C0043B10 (IsThreadDesktopComposed.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxDCEWindowHitTest @ 0x1C0069DCC (xxxDCEWindowHitTest.c)
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C006B3D8 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     ?GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C006F324 (-GetCompositeAppFrameWindowOrSelf@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C007219C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072410 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsIndependentInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072608 (-IsIndependentInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z @ 0x1C0072648 (-xxxMouseActivate@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@PEBUtagQMSG@@H@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxTrackMouseMove @ 0x1C00AE034 (xxxTrackMouseMove.c)
 *     ?SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z @ 0x1C00AE764 (-SecondaryHitTest@Mouse@InputTraceLogging@@SAXPEBUtagQMSG@@AEBUtagPOINT@@PEAUtagWND@@@Z.c)
 *     ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B15F8 (-xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z.c)
 *     xxxCallMouseHook @ 0x1C00B90F0 (xxxCallMouseHook.c)
 *     ?CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z @ 0x1C00CF08C (-CheckProcessForeground@@YAJPEAUtagTHREADINFO@@@Z.c)
 *     _PostTransformableMessage @ 0x1C00D03E8 (_PostTransformableMessage.c)
 *     PtiMouseFromQ @ 0x1C00D2160 (PtiMouseFromQ.c)
 *     ?IsMiPMouseMessage@@YAHI@Z @ 0x1C00D46D4 (-IsMiPMouseMessage@@YAHI@Z.c)
 *     ?ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z @ 0x1C00D4768 (-ScanSysQueue@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@PEBUtagMSG@@PEBUtagTHREADINFO@@_N@Z.c)
 *     ?IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1C00D4868 (-IsGenuineMouseInput@@YAHPEBUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     PostEventMessageEx @ 0x1C00D4C3C (PostEventMessageEx.c)
 *     IsMouseInPointerActive @ 0x1C00D5CEC (IsMouseInPointerActive.c)
 *     ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C00DC65C (-ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     GetMouseKeyFlags @ 0x1C00DE6A4 (GetMouseKeyFlags.c)
 *     xxxWindowHitTest @ 0x1C00DEE34 (xxxWindowHitTest.c)
 *     ThreadLockExchangeAlways @ 0x1C00DF0E4 (ThreadLockExchangeAlways.c)
 *     ThreadLockExchange @ 0x1C00DF110 (ThreadLockExchange.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C00F7040 (CheckAccessForIntegrityLevelEx.c)
 *     ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00FF6FC (-AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z.c)
 *     xxxImmProcessKey @ 0x1C01042F4 (xxxImmProcessKey.c)
 *     GetAppImeCompatFlags @ 0x1C01045C4 (GetAppImeCompatFlags.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C0107208 (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C01081C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     GetThreadDesktopWindow @ 0x1C0109EB8 (GetThreadDesktopWindow.c)
 *     TransferWakeBit @ 0x1C010C064 (TransferWakeBit.c)
 *     ?MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z @ 0x1C010D890 (-MiPCheckMsgFilter@@YAHPEAUtagQMSG@@III@Z.c)
 *     FindNCHitEx @ 0x1C010E214 (FindNCHitEx.c)
 *     ?EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z @ 0x1C010F9B8 (-EndKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI_N@Z.c)
 *     CheckPwndFilter @ 0x1C0111038 (CheckPwndFilter.c)
 *     ?IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z @ 0x1C0118E74 (-IsCompositionInputWindowForHitTest@@YAHPEAUtagWND@@@Z.c)
 *     IsMenuStarted @ 0x1C011BAD8 (IsMenuStarted.c)
 *     ?IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z @ 0x1C011C4C4 (-IsOleDragDropCaptureWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z @ 0x1C011CC14 (-BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@QEAAXI@Z.c)
 *     FreeQEntry @ 0x1C011D664 (FreeQEntry.c)
 *     PhysicalToLogicalDPIPointWithHitTest @ 0x1C011E6C8 (PhysicalToLogicalDPIPointWithHitTest.c)
 *     IsInsideMenuLoop @ 0x1C0120900 (IsInsideMenuLoop.c)
 *     xxxSnapWindow @ 0x1C0155AF4 (xxxSnapWindow.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     IsStatelessPointerInputMessage @ 0x1C01B9778 (IsStatelessPointerInputMessage.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01C2E20 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01CCFA0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01CD000 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     ?GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z @ 0x1C01CD5A8 (-GeneratePointerMessageFromMouse@@YAHPEAUtagQMSG@@I0PEAUtagWND@@H@Z.c)
 *     ?GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z @ 0x1C01CD8AC (-GetMiPWindowFlags@@YA_KPEAUtagWND@@@Z.c)
 *     ?RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@@Z @ 0x1C01CE634 (-RetrieveMessage@Pointer@InputTraceLogging@@SAXPEBUtagQMSG@@_NW4tagINPUTMESSAGE_RETRIEVE_RETVAL@.c)
 *     ?SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01CE7A8 (-SetMiPWakeBit@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z @ 0x1C01CE7D4 (-SetMiPWindowFlags@@YAXPEAUtagWND@@_K@Z.c)
 *     SetMiPPromotion @ 0x1C01CF1E0 (SetMiPPromotion.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1C01D26B8 (PhysicalToLogicalInPlacePointWithParent.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01DB884 (xxxRetrievePointerInputMessage.c)
 *     ?IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z @ 0x1C01DC25C (-IsPTPAllowedOnThread@@YAHPEAUtagTHREADINFO@@I_K@Z.c)
 *     ?HasTransform@InputTransform@@YAHPEAUtagWND@@@Z @ 0x1C01E0654 (-HasTransform@InputTransform@@YAHPEAUtagWND@@@Z.c)
 *     ?GetTouchTimeFromCPLValue@@YAKKKKH@Z @ 0x1C01F6290 (-GetTouchTimeFromCPLValue@@YAKKKKH@Z.c)
 *     GetPenDoubleClickTime @ 0x1C01F6800 (GetPenDoubleClickTime.c)
 *     xxxClientCallLocalMouseHooks @ 0x1C0206918 (xxxClientCallLocalMouseHooks.c)
 *     xxxCallHandleMenuMessages @ 0x1C020B5C0 (xxxCallHandleMenuMessages.c)
 *     ?xxxRetrieveInteractiveControlInputMessage@@YA?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1C0226300 (-xxxRetrieveInteractiveControlInputMessage@@YA-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 *     xxxDefPointerProc @ 0x1C0228294 (xxxDefPointerProc.c)
 *     HotKeyToWindow @ 0x1C0228534 (HotKeyToWindow.c)
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
  __int64 v10; // rsi
  int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // ecx
  unsigned int v15; // ecx
  __int64 v16; // rbx
  __int64 v17; // rdx
  char v18; // r15
  int v19; // r13d
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct tagQMSG *NextSysMsg; // r14
  int v23; // eax
  __int64 v24; // rdx
  struct tagWND *v25; // r15
  __int64 i; // rbx
  bool v27; // zf
  __int64 v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v34; // rdx
  int v35; // r12d
  __int64 v36; // rax
  struct tagWND *v37; // rcx
  __int64 v38; // rdx
  HWND v39; // rbx
  struct tagWND *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  struct tagWND *v44; // r9
  struct tagPOINT v45; // rbx
  int v46; // eax
  __int64 v47; // rcx
  int v48; // ecx
  BOOL v49; // r15d
  int v50; // eax
  unsigned int v51; // edx
  __int64 v52; // rcx
  int v53; // eax
  int v54; // r12d
  unsigned int v55; // edx
  __int64 v56; // rcx
  int v57; // eax
  __int64 v58; // r8
  __int64 v59; // rdx
  int v60; // r15d
  __int64 v61; // rax
  __int64 v62; // rdx
  int v63; // r12d
  const struct tagQMSG *v64; // r8
  __int64 v65; // rbx
  __int64 v66; // r12
  unsigned int v67; // edx
  unsigned __int64 *v68; // rcx
  unsigned __int64 v69; // rax
  unsigned __int64 v70; // rax
  int v71; // ecx
  struct tagMSG *v72; // rbx
  unsigned __int64 v73; // rax
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  __int64 v78; // rax
  struct tagWND *v79; // rcx
  __int64 v80; // rcx
  struct tagQMSG *v81; // rbx
  __int64 v82; // rdx
  int v83; // r9d
  int v84; // ebx
  __int64 v85; // rcx
  __int64 v86; // r15
  int v87; // eax
  struct tagQMSG *v88; // r15
  int v89; // eax
  __int64 v90; // rcx
  _DWORD *v91; // rax
  int v92; // eax
  unsigned int v93; // ebx
  unsigned __int64 v94; // rdx
  char v95; // r8
  int v96; // ebx
  __int64 v97; // rax
  char v98; // al
  __int64 v99; // rdx
  int v100; // ecx
  unsigned int v101; // ecx
  __int64 v102; // r9
  __int64 v103; // rcx
  int v104; // eax
  int v105; // ecx
  int v106; // r15d
  struct tagWND *v107; // rcx
  __int64 v108; // rax
  int v109; // ecx
  __int64 v110; // rcx
  __int64 v111; // rax
  __int64 v112; // rbx
  __int64 v113; // rcx
  __int64 v114; // rbx
  char v115; // al
  const struct tagWND *v116; // rbx
  __int64 v117; // rcx
  __int64 v118; // rcx
  struct tagWND *CompositeAppFrameWindowOrSelf; // rcx
  bool v120; // zf
  _BOOL8 v121; // rdx
  __int64 v122; // rdx
  __int64 v123; // rcx
  int v124; // eax
  __int64 v125; // rcx
  unsigned int v126; // ecx
  unsigned int v127; // edx
  __int64 v128; // rcx
  _QWORD *v129; // rax
  __int64 v130; // rcx
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  int v135; // eax
  __int64 v136; // rax
  __int64 v137; // rcx
  __int64 v138; // rcx
  int v139; // eax
  __int64 v140; // rcx
  __int64 v141; // rcx
  struct tagWND *v142; // rdx
  __int64 v143; // rcx
  unsigned __int64 MiPWindowFlags; // rax
  __int64 ThreadDesktopWindow; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v147; // rbx
  struct tagWND *v148; // rax
  __int64 v149; // rdx
  __int64 v150; // rcx
  _DWORD *v151; // rax
  _DWORD *v152; // rax
  unsigned int MouseKeyFlags; // eax
  __int64 v154; // rdx
  __int64 v155; // r8
  int v156; // ebx
  __int64 v157; // rcx
  __int64 v158; // rcx
  char *v159; // rax
  char v160; // cl
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // r8
  __int64 v165; // rcx
  __int64 v166; // rax
  unsigned int TouchTimeFromCPLValue; // eax
  const struct tagWND *CompositionInputWindowUIOwner; // rax
  bool v169; // r15
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rdx
  __int64 v174; // rcx
  int v175; // eax
  __int64 v176; // rcx
  __int64 v177; // rcx
  _DWORD *v178; // rax
  struct tagTHREADINFO *v179; // rcx
  __int64 v180; // rcx
  __int64 v181; // rax
  __int64 v182; // rdx
  __int64 v183; // rcx
  __int64 v184; // rax
  __int64 v185; // rax
  int v186; // ebx
  __int64 v187; // rbx
  struct tagWND *v188; // rcx
  int v189; // ebx
  int v190; // ebx
  int v191; // ebx
  int v192; // edx
  int v193; // eax
  __int64 v194; // rcx
  __int64 v195; // rax
  _DWORD *v196; // rax
  unsigned int v197; // [rsp+70h] [rbp-858h] BYREF
  int v198; // [rsp+74h] [rbp-854h] BYREF
  struct tagWND *v199; // [rsp+78h] [rbp-850h] BYREF
  char v200; // [rsp+80h] [rbp-848h]
  __int64 v201; // [rsp+88h] [rbp-840h]
  int v202; // [rsp+90h] [rbp-838h] BYREF
  unsigned __int64 v203; // [rsp+98h] [rbp-830h] BYREF
  struct tagPOINT v204; // [rsp+A0h] [rbp-828h] BYREF
  __int64 v205; // [rsp+A8h] [rbp-820h] BYREF
  unsigned int v206; // [rsp+B0h] [rbp-818h]
  int v207; // [rsp+B4h] [rbp-814h] BYREF
  __int64 v208; // [rsp+B8h] [rbp-810h]
  int v209; // [rsp+C0h] [rbp-808h]
  bool v210; // [rsp+C4h] [rbp-804h]
  bool v211; // [rsp+C5h] [rbp-803h]
  unsigned int v212; // [rsp+C8h] [rbp-800h]
  __int64 v213; // [rsp+D0h] [rbp-7F8h]
  int v214; // [rsp+D8h] [rbp-7F0h]
  int v215; // [rsp+DCh] [rbp-7ECh]
  struct tagQMSG *v216; // [rsp+E0h] [rbp-7E8h]
  int v217[2]; // [rsp+E8h] [rbp-7E0h]
  __int64 v218; // [rsp+F0h] [rbp-7D8h]
  int v219; // [rsp+F8h] [rbp-7D0h]
  int v220; // [rsp+FCh] [rbp-7CCh]
  int v221; // [rsp+100h] [rbp-7C8h]
  struct tagQMSG **v222; // [rsp+108h] [rbp-7C0h]
  __int128 v223; // [rsp+110h] [rbp-7B8h] BYREF
  __int128 v224; // [rsp+120h] [rbp-7A8h]
  __int128 v225; // [rsp+130h] [rbp-798h]
  __int128 v226; // [rsp+140h] [rbp-788h]
  __int128 v227; // [rsp+150h] [rbp-778h]
  __int128 v228; // [rsp+160h] [rbp-768h] BYREF
  __int128 v229; // [rsp+170h] [rbp-758h]
  __int128 v230; // [rsp+180h] [rbp-748h]
  __int128 v231; // [rsp+190h] [rbp-738h]
  __int128 v232; // [rsp+1A0h] [rbp-728h]
  __int64 v233; // [rsp+1B0h] [rbp-718h]
  int v234; // [rsp+1C0h] [rbp-708h]
  unsigned int v235; // [rsp+1C8h] [rbp-700h]
  __int64 v236; // [rsp+1D0h] [rbp-6F8h]
  __int64 v237; // [rsp+1D8h] [rbp-6F0h]
  __int64 v238; // [rsp+1E0h] [rbp-6E8h]
  __int64 v239; // [rsp+1E8h] [rbp-6E0h]
  __int64 v240[5]; // [rsp+1F0h] [rbp-6D8h] BYREF
  __int64 v241; // [rsp+218h] [rbp-6B0h] BYREF
  struct tagWND *v242; // [rsp+220h] [rbp-6A8h]
  int v243; // [rsp+238h] [rbp-690h]
  struct tagMSG *v244; // [rsp+248h] [rbp-680h]
  __int64 v245; // [rsp+250h] [rbp-678h]
  __int64 v246; // [rsp+258h] [rbp-670h]
  __int128 v247; // [rsp+260h] [rbp-668h]
  __int64 v248; // [rsp+270h] [rbp-658h]
  __int64 v249; // [rsp+278h] [rbp-650h]
  __int64 v250; // [rsp+280h] [rbp-648h] BYREF
  struct tagWND *v251; // [rsp+288h] [rbp-640h]
  _BYTE v252[16]; // [rsp+298h] [rbp-630h] BYREF
  __int64 v253; // [rsp+2A8h] [rbp-620h]
  int v254; // [rsp+2C0h] [rbp-608h] BYREF
  __int128 v255; // [rsp+2C8h] [rbp-600h]
  int *v256; // [rsp+2D8h] [rbp-5F0h]
  int v257; // [rsp+2E0h] [rbp-5E8h]
  int v258; // [rsp+2E4h] [rbp-5E4h]
  char *v259; // [rsp+2E8h] [rbp-5E0h]
  int v260; // [rsp+2F0h] [rbp-5D8h]
  __int64 v261; // [rsp+2F8h] [rbp-5D0h]
  _BYTE v262[24]; // [rsp+300h] [rbp-5C8h] BYREF
  _BYTE v263[24]; // [rsp+318h] [rbp-5B0h] BYREF
  __int128 v264; // [rsp+330h] [rbp-598h]
  __int128 v265; // [rsp+340h] [rbp-588h]
  __int128 v266; // [rsp+350h] [rbp-578h]
  __int128 v267; // [rsp+360h] [rbp-568h]
  __int128 v268; // [rsp+370h] [rbp-558h]
  _BYTE v269[24]; // [rsp+380h] [rbp-548h] BYREF
  _BYTE v270[24]; // [rsp+398h] [rbp-530h] BYREF
  _BYTE v271[24]; // [rsp+3B0h] [rbp-518h] BYREF
  __int64 v272; // [rsp+3C8h] [rbp-500h]
  int v273; // [rsp+3D0h] [rbp-4F8h]
  __int64 v274; // [rsp+3D8h] [rbp-4F0h]
  __int64 v275; // [rsp+3E0h] [rbp-4E8h]
  __int64 v276; // [rsp+3E8h] [rbp-4E0h]
  __int64 v277; // [rsp+3F0h] [rbp-4D8h]
  _OWORD v278[6]; // [rsp+400h] [rbp-4C8h] BYREF
  __int128 v279; // [rsp+460h] [rbp-468h]
  __int128 v280; // [rsp+470h] [rbp-458h]
  __int128 v281; // [rsp+480h] [rbp-448h]
  _QWORD v282[3]; // [rsp+4A8h] [rbp-420h] BYREF
  _QWORD v283[3]; // [rsp+4C0h] [rbp-408h] BYREF
  __int128 v284; // [rsp+4D8h] [rbp-3F0h]
  __int128 v285; // [rsp+4F8h] [rbp-3D0h]
  __int128 v286; // [rsp+508h] [rbp-3C0h]
  __int64 v287; // [rsp+518h] [rbp-3B0h] BYREF
  int v288; // [rsp+520h] [rbp-3A8h]
  _OWORD v289[8]; // [rsp+528h] [rbp-3A0h] BYREF
  __int128 v290; // [rsp+5B0h] [rbp-318h] BYREF
  __int128 v291; // [rsp+5C0h] [rbp-308h]
  __int128 v292; // [rsp+5D0h] [rbp-2F8h]
  __int128 v293; // [rsp+5E0h] [rbp-2E8h]
  __int128 v294; // [rsp+5F0h] [rbp-2D8h]
  __int128 v295; // [rsp+600h] [rbp-2C8h]
  __int128 v296; // [rsp+610h] [rbp-2B8h]
  __int128 v297; // [rsp+620h] [rbp-2A8h]
  __int128 v298; // [rsp+630h] [rbp-298h]
  __int128 v299; // [rsp+640h] [rbp-288h]
  __int64 v300; // [rsp+650h] [rbp-278h]
  __int128 v301; // [rsp+660h] [rbp-268h] BYREF
  __int128 v302; // [rsp+670h] [rbp-258h]
  __int128 v303; // [rsp+680h] [rbp-248h]
  __int128 v304; // [rsp+690h] [rbp-238h]
  __int128 v305; // [rsp+6A0h] [rbp-228h]
  __int128 v306; // [rsp+6B0h] [rbp-218h]
  __int128 v307; // [rsp+6C0h] [rbp-208h]
  __int128 v308; // [rsp+6D0h] [rbp-1F8h]
  __int128 v309; // [rsp+6E0h] [rbp-1E8h]
  __int128 v310; // [rsp+6F0h] [rbp-1D8h]
  __int64 v311; // [rsp+700h] [rbp-1C8h]
  _OWORD v312[10]; // [rsp+710h] [rbp-1B8h] BYREF
  __int64 v313; // [rsp+7B0h] [rbp-118h]
  char v314[24]; // [rsp+7C0h] [rbp-108h] BYREF
  unsigned int v315; // [rsp+7D8h] [rbp-F0h]
  _DWORD v316[4]; // [rsp+870h] [rbp-58h] BYREF

  v212 = a4;
  *(_QWORD *)v217 = a3;
  v238 = a1;
  v248 = a1;
  v253 = a1;
  v237 = a1;
  v213 = a1;
  v244 = a2;
  v249 = a3;
  v235 = a4;
  v222 = a8;
  v10 = 0LL;
  v205 = 0LL;
  memset(v240, 0, sizeof(v240));
  v234 = 0;
  v11 = a6 & 1;
  v198 = v11;
  memset(v278, 0, sizeof(v278));
  v206 = 0;
  v200 = 0;
  v216 = 0LL;
  *a8 = 0LL;
  if ( a7 == 0x2000 && *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) )
  {
    EtwTraceInputQueueLockedPeekRecursion();
    return 0LL;
  }
  v219 = 0;
  v209 = 0;
  v215 = 0;
  v12 = *(_QWORD *)(a1 + 432);
  if ( !*(_QWORD *)(v12 + 64) )
  {
    *(_QWORD *)(v12 + 64) = a1;
    **(_DWORD **)(a1 + 448) |= 1u;
    v11 = v198;
  }
  if ( (a7 & 0x1C07) != 0 )
  {
    v13 = *(_QWORD *)(a1 + 432);
    v14 = *(_DWORD *)(v13 + 388);
    if ( v11 )
      v15 = v14 & 0xFFFFFBFF;
    else
      v15 = v14 | 0x400;
    *(_DWORD *)(v13 + 388) = v15;
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 432) + 64LL) != a1 )
  {
    EtwTraceInputQueueLocked();
    return 2LL;
  }
  v208 = 0LL;
  v218 = 0LL;
  v236 = 0LL;
  v246 = 0LL;
  v16 = 0LL;
  v201 = 0LL;
  v239 = 0LL;
  v245 = 0LL;
  LockW32Thread(0LL, v262);
  LockW32Thread(0LL, v263);
  LockW32Thread(0LL, v271);
  LockW32Thread(0LL, v270);
  LockW32Thread(0LL, v269);
  v199 = 0LL;
  v241 = *(_QWORD *)(a1 + 416);
  *(_QWORD *)(a1 + 416) = &v241;
  v242 = 0LL;
LABEL_10:
  *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) = 0LL;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
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
                      while ( 1 )
                      {
LABEL_11:
                        v243 = (**(_DWORD **)(a1 + 480) >> 9) & 1;
                        v17 = *(_QWORD *)(a1 + 432);
                        if ( !*(_QWORD *)(v17 + 80) )
                        {
                          v206 = 0;
                          v18 = 0;
LABEL_13:
                          v200 = v18;
                          goto LABEL_14;
                        }
                        v18 = v200;
                        if ( !v200 && ((v206 - 1) & 0xFFFFFFFD) == 0 )
                        {
                          v18 = 1;
                          goto LABEL_13;
                        }
LABEL_14:
                        v19 = 0;
                        v214 = 0;
                        v203 = 0LL;
                        v221 = 0;
                        NextSysMsg = xxxGetNextSysMsg(
                                       (struct tagTHREADINFO *)a1,
                                       *(struct tagQMSG **)(v17 + 80),
                                       (struct tagQMSG *)&v223);
                        *(_QWORD *)&v247 = NextSysMsg;
                        *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) = NextSysMsg;
                        if ( (unsigned __int64)NextSysMsg <= 1 )
                          goto LABEL_23;
                        v23 = DWORD1(v229);
                        if ( (BYTE4(v229) & 0x20) != 0 )
                        {
                          *v222 = NextSysMsg;
                          *((_DWORD *)NextSysMsg + 25) |= 0x100u;
                          v21 = 0LL;
                          v198 = 0;
                          v23 = DWORD1(v229);
                        }
                        else
                        {
                          v21 = (unsigned int)v198;
                        }
                        if ( (v23 & 0x10000) == 0 )
                          break;
                        v124 = v206;
                        if ( *((_QWORD *)&v229 + 1) == a1 )
                          v124 = 1;
                        v206 = v124;
                        v200 = 1;
                      }
                      if ( (v23 & 0x80000) == 0 )
                        break;
                      if ( *((_QWORD *)&v229 + 1) == a1 )
                        v206 = 3;
                    }
                    if ( (_DWORD)v229 != 4 || !v18 )
                      break;
                    DeferSysPeekMsg(a1, 3);
                  }
                  if ( (v23 & 0x20000) == 0 )
                    break;
                  if ( *((_QWORD *)&v229 + 1) == a1 )
                    v206 = 2;
                }
                if ( !(_DWORD)v21 || !(unsigned __int8)ShouldDeferMessage(v206, DWORD2(v224)) )
                  break;
                DeferSysPeekMsg(a1, 3);
                v206 = 3;
              }
LABEL_23:
              if ( !*(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) )
              {
                if ( a7 == 0x2000 )
                  ClearWakeBit(a1, 0x2000LL, 0LL);
                goto LABEL_37;
              }
              ThreadUnlock1(v21, v20);
              LOBYTE(v24) = 1;
              v25 = (struct tagWND *)HMValidateHandleNoSecure(v224, v24);
              v199 = v25;
              v241 = *(_QWORD *)(a1 + 416);
              *(_QWORD *)(a1 + 416) = &v241;
              v242 = v25;
              if ( v25 )
              {
                _InterlockedIncrement((volatile signed __int32 *)v25 + 2);
                v25 = v199;
              }
              if ( !(_DWORD)v229 )
                break;
              if ( (_DWORD)v229 != 4
                || *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) == *(_QWORD *)(*(_QWORD *)(a1 + 432) + 24LL) )
              {
                if ( (_DWORD)v229 != 9 || DWORD2(v224) != 96 )
                  goto LABEL_33;
                for ( i = *((_QWORD *)&v223 + 1); ; i = *(_QWORD *)(i + 8) )
                {
                  v27 = i == 0;
                  if ( !i )
                    break;
                  if ( !(unsigned int)IsHiddenByInputService(i) )
                  {
                    v27 = i == 0;
                    break;
                  }
                }
                v16 = v201;
                if ( v27 )
                {
LABEL_33:
                  v28 = *((_QWORD *)&v229 + 1);
                  if ( !*((_QWORD *)&v229 + 1) || *((_QWORD *)&v229 + 1) == a1 )
                  {
                    EtwTraceRetrieveQueueEventMessage(*(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL));
                    DelQEntry(*(_QWORD *)(a1 + 432) + 24LL, *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL), 1LL);
                    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) = 0LL;
                    xxxProcessEventMessage(a1, &v223);
                  }
                  else
                  {
                    v29 = *(_QWORD *)(a1 + 432);
                    if ( *(_QWORD *)(*((_QWORD *)&v229 + 1) + 432LL) == v29 )
                    {
                      LockExchangeW32Thread(*((_QWORD *)&v229 + 1), v271);
                      *(_QWORD *)(*(_QWORD *)(v253 + 432) + 80LL) = 0LL;
                      v246 = v28;
LABEL_37:
                      v30 = v208;
                      goto LABEL_38;
                    }
                    CleanEventMessage(*(struct tagQMSG **)(v29 + 80));
                    DelQEntry(*(_QWORD *)(a1 + 432) + 24LL, *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL), 1LL);
                  }
LABEL_55:
                  v16 = v201;
                  goto LABEL_10;
                }
              }
            }
          }
          while ( a7 == 0x2000 );
          v34 = DWORD2(v224);
          v197 = DWORD2(v224);
          if ( DWORD2(v224) >= 0x11C && DWORD2(v224) < 0x20A )
            break;
          if ( DWORD2(v224) > 0x20A )
          {
            switch ( DWORD2(v224) )
            {
              case 0x20E:
                goto LABEL_519;
              case 0x238:
                goto LABEL_346;
              case 0x240:
LABEL_593:
                if ( !v25 )
                  goto LABEL_381;
                v159 = (char *)*((_QWORD *)v25 + 5);
                if ( v159[20] < 0 )
                  goto LABEL_381;
                if ( v159[19] < 0 )
                  goto LABEL_381;
                v160 = v159[31];
                if ( (v160 & 8) != 0 || (v160 & 0x10) == 0 )
                  goto LABEL_381;
LABEL_346:
                v205 = *((_QWORD *)&v225 + 1);
                v203 = v225;
                if ( !v25 )
                  goto LABEL_381;
                if ( CheckCrossThreadInput(v25, NextSysMsg, &v202, &v198, v222) )
                  goto LABEL_37;
                if ( v202 )
                  goto LABEL_381;
                if ( !v212 && a5 == -1 )
                  goto LABEL_351;
                if ( v212 <= a5 )
                {
                  if ( v197 < v212 || v197 > a5 )
                    goto LABEL_11;
                }
                else if ( v197 >= a5 && v197 <= v212 )
                {
                  goto LABEL_11;
                }
LABEL_351:
                if ( (unsigned int)CheckPwndFilter(v199, *(_QWORD *)v217) )
                {
                  if ( v198 )
LABEL_353:
                    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v223, 1);
LABEL_354:
                  v66 = v213;
                  goto LABEL_153;
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
                v66 = v213;
                goto LABEL_542;
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
                if ( !v212 && a5 == -1 )
                  goto LABEL_511;
                if ( v212 <= a5 )
                {
                  if ( DWORD2(v224) < v212 || DWORD2(v224) > a5 )
                    goto LABEL_37;
                }
                else if ( DWORD2(v224) >= a5 && DWORD2(v224) <= v212 )
                {
                  goto LABEL_37;
                }
LABEL_511:
                if ( (unsigned int)IsInsideMenuLoop(a1) )
                  goto LABEL_381;
                if ( v198 )
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v223, 1);
                if ( !v199 )
                  v199 = *(struct tagWND **)(*(_QWORD *)(a1 + 432) + 112LL);
                v205 = *((_QWORD *)&v225 + 1);
                v203 = v225;
                v139 = xxxRetrieveInteractiveControlInputMessage((unsigned __int16)v225, WORD1(v225)) - 1;
                if ( !v139 )
                  goto LABEL_354;
                if ( v139 == 1 )
                  goto LABEL_714;
                goto LABEL_381;
              default:
                goto LABEL_71;
            }
          }
          else if ( DWORD2(v224) == 522 )
          {
LABEL_519:
            if ( (*(_DWORD *)(a1 + 488) & 0x400) != 0 )
            {
              if ( (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
                goto LABEL_37;
              v25 = v199;
            }
            if ( (DWORD1(v229) & 0x400000) != 0 )
            {
              v199 = *(struct tagWND **)(*(_QWORD *)(a1 + 432) + 112LL);
            }
            else if ( v25 && (unsigned int)IsCompositionInputWindow(v25) )
            {
              if ( (unsigned int)CoreWindowProp::IsCompositeAppOrSelfDisabled(v199) )
                goto LABEL_381;
            }
            else if ( !(unsigned int)IsInsideMenuLoop(a1) )
            {
              ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
              v199 = (struct tagWND *)ThreadDesktopWindow;
              ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
              v282[0] = *(_QWORD *)(ThreadWin32Thread + 416);
              *(_QWORD *)(ThreadWin32Thread + 416) = v282;
              v282[1] = ThreadDesktopWindow;
              if ( ThreadDesktopWindow )
                _InterlockedIncrement((volatile signed __int32 *)(ThreadDesktopWindow + 8));
              v147 = xxxDCEWindowHitTest((_DWORD)v199, 512, v225, DWORD2(v225), v228, (__int64)&v207, 1);
              v199 = (struct tagWND *)HMValidateHandleNoSecure(v147, 1LL);
              v148 = (struct tagWND *)HMValidateHandleNoSecure(v147, 1LL);
              InputTraceLogging::Mouse::SecondaryHitTest(
                (const struct tagQMSG *)&v223,
                (const struct tagPOINT *)&v228,
                v148);
              ThreadUnlock1(v150, v149);
              v16 = v201;
            }
            if ( !v199 || (unsigned int)IsInsideMenuLoop(a1) )
              goto LABEL_381;
            ThreadLockExchangeAlways(v199, &v241);
            v140 = *((_QWORD *)v199 + 2);
            v66 = v213;
            v202 = v140 != v213;
            if ( v140 != v238 )
            {
              v141 = *((_QWORD *)v199 + 2);
              if ( *(_QWORD *)(v141 + 432) != *(_QWORD *)(a1 + 432) )
                goto LABEL_381;
              if ( !v218 )
              {
                v218 = *((_QWORD *)v199 + 2);
                v236 = v141;
                LockExchangeW32Thread(v141, v262);
              }
            }
            if ( (unsigned int)MiPCheckMsgFilter(NextSysMsg, v197, v212, a5)
              && (unsigned int)CheckPwndFilter(v199, *(_QWORD *)v217) )
            {
              if ( v202 )
                goto LABEL_714;
              if ( !NextSysMsg || !(unsigned int)IsMouseInPointerActive(a1, NextSysMsg) )
                goto LABEL_575;
              if ( (*((_DWORD *)NextSysMsg + 25) & 0x800) != 0 )
              {
                if ( !(unsigned int)InputTransform::HasTransform(v199, v142) )
                  *((_DWORD *)NextSysMsg + 25) &= ~0x2000u;
                if ( GeneratePointerMessageFromMouse((struct tagQMSG *)v312, v197, NextSysMsg, v199, v198) )
                {
                  v223 = v312[0];
                  v224 = v312[1];
                  v225 = v312[2];
                  v226 = v312[3];
                  v227 = v312[4];
                  v228 = v312[5];
                  v229 = v312[6];
                  v230 = v312[7];
                  v231 = v312[8];
                  v232 = v312[9];
                  v233 = v313;
                  v19 = 1;
                  v214 = 1;
                  if ( v198 )
                    *((_DWORD *)NextSysMsg + 25) &= ~0x800u;
                  goto LABEL_541;
                }
                if ( v198 )
                {
                  *((_DWORD *)NextSysMsg + 25) &= ~0x800u;
                  goto LABEL_575;
                }
                goto LABEL_577;
              }
              if ( !v198 )
                goto LABEL_577;
              if ( !(unsigned int)IsMiPMouseMessage(*((_DWORD *)NextSysMsg + 6)) )
                goto LABEL_575;
              if ( !(unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)NextSysMsg + 120))
                || (v151 = *(_DWORD **)(a1 + 1256)) == 0LL
                || (*v151 & 2) != 0
                || (*v151 & 4) != 0 )
              {
                v152 = *(_DWORD **)(a1 + 1256);
                if ( v152 )
                  *v152 &= ~2u;
LABEL_575:
                if ( v198 )
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v223, 1);
LABEL_577:
                MouseKeyFlags = GetMouseKeyFlags(*(_QWORD *)(a1 + 432));
                v203 = v225 | MouseKeyFlags;
                v205 = *((_QWORD *)&v225 + 1);
                v204.x = SWORD4(v225);
                v204.y = SWORD5(v225);
                PhysicalToLogicalDPIPointWithHitTest(&v204, &v204, 0LL, v199);
                v205 = (LOWORD(v204.y) << 16) | LOWORD(v204.x);
                *(struct tagPOINT *)((char *)&v226 + 4) = v204;
                v240[0] = (__int64)v204;
                if ( v199 )
                  v240[1] = *(_QWORD *)v199;
                else
                  v240[1] = 0LL;
                LODWORD(v240[2]) = 0;
                v240[3] = *((_QWORD *)&v227 + 1);
                LODWORD(v240[4]) = v225;
                v155 = (unsigned int)v198;
                if ( v198 )
                {
                  v156 = 1;
                  v209 = 1;
                  if ( (unsigned int)xxxCallCtfHook(7, 0, v197, (__int64)v240) )
                    goto LABEL_381;
                  v155 = (unsigned int)v198;
                }
                else
                {
                  v156 = v209;
                }
                v157 = (unsigned int)(*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_DWORD *)(a1 + 680));
                if ( ((*(_WORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_WORD *)(a1 + 680)) & 0x100) != 0 )
                {
                  v156 = 1;
                  v209 = 1;
                  if ( (unsigned int)xxxCallMouseHook(v197, v240, v155) )
                    goto LABEL_381;
                }
                if ( (unsigned int)PsGetWin32KFilterSet(v157, v154, v155) == 5 )
                {
                  v158 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480);
                  v210 = 0;
                  v210 = *(_QWORD *)(v158 + 248) != 0LL;
                  if ( v210 )
                  {
                    if ( xxxClientCallLocalMouseHooks(v197, v240, (unsigned int)v198) )
                      goto LABEL_381;
                  }
                }
                if ( v156
                  && v198
                  && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_BYTE *)(a1 + 680)) & 0x40) != 0 )
                {
                  xxxCallHook(6, v197, (__int64)v240, 5);
                }
LABEL_153:
                if ( *(_QWORD *)(a1 + 764) != *(_QWORD *)((char *)&v226 + 4) )
                  *(_DWORD *)(a1 + 488) |= 0x100000u;
                if ( (unsigned __int64)NextSysMsg > 1 && (BYTE4(v229) & 0x20) != 0 )
                {
                  if ( *((_DWORD *)NextSysMsg + 6) == 512 )
                  {
                    if ( v199 )
                      v195 = *(_QWORD *)v199;
                    else
                      v195 = 0LL;
                    *((_QWORD *)NextSysMsg + 2) = v195;
                    *((_DWORD *)NextSysMsg + 25) |= 0x400u;
                  }
                  *((_QWORD *)NextSysMsg + 8) = v205;
                }
                *(_QWORD *)(a1 + 764) = *(_QWORD *)((char *)&v226 + 4);
                *(_DWORD *)(a1 + 772) = *(_DWORD *)(*((_QWORD *)v199 + 5) + 288LL);
                *(_QWORD *)(a1 + 776) = v228;
                *(_DWORD *)(a1 + 568) = v226;
                *(_QWORD *)(*(_QWORD *)(a1 + 432) + 408LL) = *((_QWORD *)&v227 + 1);
                *(_QWORD *)(*(_QWORD *)(a1 + 432) + 72LL) = 1LL;
                *(_QWORD *)(a1 + 576) = 1LL;
                *(_QWORD *)(a1 + 1216) = *((_QWORD *)&v230 + 1);
                *(_DWORD *)(a1 + 1264) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                v67 = *(_DWORD *)(v66 + 1208) | 0x20000;
                if ( *(_DWORD *)(a1 + 1220) != 1 )
                  v67 = *(_DWORD *)(v66 + 1208) & 0xFFFDFFFF;
                *(_DWORD *)(v66 + 1208) = v67;
                **(_DWORD **)(a1 + 448) &= ~8u;
                **(_QWORD **)(a1 + 480) &= 0x7FFFFFFFuLL;
                if ( v198 )
                {
                  v68 = *(unsigned __int64 **)(v66 + 480);
                  v69 = *v68;
                  if ( (BYTE4(v229) & 1) != 0 )
                    v70 = v69 | 0x1000;
                  else
                    v70 = v69 & 0xFFFFFFFFFFFFEFFFuLL;
                  *v68 = v70;
                }
                TransferWakeBit(a1, v197);
                ClearWakeBit(a1, 31751LL, 1LL);
                v71 = v198;
                if ( v198 )
                {
                  if ( v19 )
                  {
                    v196 = *(_DWORD **)(a1 + 1256);
                    if ( v196 )
                    {
                      if ( (*v196 & 1) != 0 && (*v196 & 4) != 0 )
                      {
                        SetMiPWakeBit((struct tagTHREADINFO *)a1);
                        v71 = v198;
                      }
                    }
                  }
                }
                if ( v199 )
                  v10 = *(_QWORD *)v199;
                v72 = v244;
                *(_QWORD *)v244 = v10;
                *((_DWORD *)v72 + 2) = v197;
                if ( (v221 & 2) != 0 )
                  v73 = 229LL;
                else
                  v73 = v203;
                *((_QWORD *)v72 + 2) = v73;
                *((_QWORD *)v72 + 3) = v205;
                *((_DWORD *)v72 + 8) = v226;
                *(_QWORD *)((char *)v72 + 36) = *(_QWORD *)((char *)&v226 + 4);
                InputTraceLogging::Delivery::ScanSysQueue(
                  (const struct tagQMSG *)&v223,
                  v72,
                  (const struct tagTHREADINFO *)a1,
                  v71 != 0);
                if ( v198 )
                {
                  EtwTraceInputProcessDelay(a1);
                  *(_DWORD *)(*(_QWORD *)(a1 + 432) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                              * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
                  v74 = *((_DWORD *)v72 + 2);
                  if ( v74 == 256 )
                  {
                    *(_DWORD *)(a1 + 1320) |= 1u;
                    *(_QWORD *)(a1 + 1304) = *(_QWORD *)(a1 + 1216);
                    *(_DWORD *)(a1 + 1296) = *((unsigned __int16 *)v72 + 13);
                    *(_DWORD *)(a1 + 1300) = *((_DWORD *)v72 + 4);
                    *(_QWORD *)(a1 + 1312) = v232;
                  }
                  else if ( ((v74 - 257) & 0xFFFFFFFB) == 0 )
                  {
                    *(_DWORD *)(a1 + 1320) &= ~1u;
                  }
                }
                EtwTraceRetrieveInputMessage(v72, (unsigned int)v198);
                PopAndFreeW32ThreadLock(v269);
                PopAndFreeW32ThreadLock(v270);
                PopAndFreeW32ThreadLock(v271);
                PopAndFreeW32ThreadLock(v263);
                PopAndFreeW32ThreadLock(v262);
                ThreadUnlock1(v76, v75);
                return 1LL;
              }
              xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v223, 1);
              goto LABEL_10;
            }
          }
          else
          {
            switch ( DWORD2(v224) )
            {
              case 0x23:
                v203 = 0LL;
                v205 = *((_QWORD *)&v225 + 1);
                if ( v25 )
                {
                  v125 = *((_QWORD *)v25 + 2);
                  if ( v125 != a1 )
                  {
                    if ( *(_QWORD *)(v125 + 432) == *(_QWORD *)(a1 + 432) )
                    {
                      v30 = v208;
                      if ( !v208 )
                      {
                        v30 = *((_QWORD *)v25 + 2);
                        LockExchangeW32Thread(v125, v263);
                      }
                      goto LABEL_38;
                    }
                    goto LABEL_381;
                  }
                }
                if ( !(unsigned int)MiPCheckMsgFilter(NextSysMsg, DWORD2(v224), v212, a5) )
                  goto LABEL_37;
                if ( v198 )
                  goto LABEL_353;
                goto LABEL_354;
              case 0xFE:
                goto LABEL_346;
              case 0xFF:
                v205 = *((_QWORD *)&v225 + 1);
                v203 = v225;
                v107 = 0LL;
                v199 = 0LL;
                if ( *((_QWORD *)&v225 + 1) )
                {
                  LOBYTE(v34) = 18;
                  v108 = HMValidateHandle(*((_QWORD *)&v225 + 1), v34);
                  if ( v108 )
                  {
                    v107 = *(struct tagWND **)(v108 + 24);
                    v199 = v107;
                  }
                  else
                  {
                    v107 = v199;
                  }
                }
                if ( !v107 )
                {
                  v136 = *(_QWORD *)(a1 + 432);
                  v107 = *(struct tagWND **)(v136 + 112);
                  v199 = v107;
                  if ( !v107 )
                  {
                    v107 = *(struct tagWND **)(v136 + 120);
                    v199 = v107;
                    if ( !v107 )
                      goto LABEL_381;
                  }
                }
                ThreadLockExchangeAlways(v107, &v241);
                if ( CheckCrossThreadInput(v199, NextSysMsg, &v202, &v198, v222) )
                  goto LABEL_37;
                if ( !v202 )
                {
                  v66 = v213;
                  goto LABEL_314;
                }
                if ( *(_QWORD *)(*((_QWORD *)v199 + 2) + 432LL) != *(_QWORD *)(a1 + 432) )
                  goto LABEL_381;
                if ( (unsigned int)IsInsideMenuLoop(a1) )
                {
                  v137 = *(_QWORD *)(**(_QWORD **)(a1 + 608) + 8LL);
                }
                else
                {
                  v138 = *(_QWORD *)(a1 + 672);
                  if ( !v138 )
                  {
                    v66 = v213;
                    goto LABEL_493;
                  }
                  v137 = *(_QWORD *)(v138 + 16);
                }
                v66 = v213;
                if ( v137 )
                {
                  v199 = (struct tagWND *)v137;
                  v202 = *(_QWORD *)(v137 + 16) != v213;
                  ThreadLockExchangeAlways(v137, &v241);
                }
LABEL_493:
                if ( !v16 )
                {
                  v16 = *((_QWORD *)v199 + 2);
                  v201 = v16;
                  v239 = v16;
                  LockExchangeW32Thread(v16, v270);
                }
LABEL_314:
                if ( !v212 && a5 == -1 )
                  goto LABEL_316;
                if ( v212 <= a5 )
                {
                  if ( v197 < v212 || v197 > a5 )
                    goto LABEL_11;
                }
                else if ( v197 >= a5 && v197 <= v212 )
                {
                  goto LABEL_11;
                }
LABEL_316:
                if ( (unsigned int)CheckPwndFilter(v199, *(_QWORD *)v217) )
                {
                  if ( v202 )
                    goto LABEL_714;
                  if ( v198 )
                    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v223, 1);
                  goto LABEL_153;
                }
                goto LABEL_11;
              case 0x100:
              case 0x104:
                v219 = 1;
                if ( (*(_DWORD *)(a1 + 488) & 0x400) != 0 && (int)CheckProcessForeground((struct tagTHREADINFO *)a1) < 0 )
                {
                  v16 = v201;
LABEL_394:
                  v30 = v208;
                  goto LABEL_39;
                }
                v94 = (unsigned __int8)v225;
                v203 = (unsigned __int8)v225;
                if ( v198 && (DWORD1(v229) & 0x40000) != 0 )
                  goto LABEL_277;
                if ( (unsigned __int8)v225 != 18LL )
                {
                  *(_DWORD *)(*(_QWORD *)(a1 + 432) + 388LL) &= 0xFFFFFFF3;
                  v94 = v203;
                }
                v95 = *(_BYTE *)(*(_QWORD *)(a1 + 432) + 232LL);
                v96 = v95 & 0x10;
                if ( v94 != 44 )
                  goto LABEL_275;
                if ( (v95 & 0x10) != 0 )
                {
                  if ( (*(_DWORD *)(a1 + 876) & 0x10) != 0 )
                    goto LABEL_275;
LABEL_408:
                  xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v223, 1);
                  if ( v96 || (DWORD2(v225) & 0xFF0000) == 0x10000LL )
                  {
                    CompositeAppFrameWindowOrSelf = *(struct tagWND **)(*(_QWORD *)(a1 + 432) + 120LL);
                    v120 = CompositeAppFrameWindowOrSelf == 0LL;
                    if ( !CompositeAppFrameWindowOrSelf )
                    {
LABEL_412:
                      v16 = v201;
                      if ( !v120 )
                      {
                        v121 = HIDWORD(v230) != 1;
                        v250 = *(_QWORD *)(a1 + 416);
                        *(_QWORD *)(a1 + 416) = &v250;
                        v251 = CompositeAppFrameWindowOrSelf;
                        _InterlockedIncrement((volatile signed __int32 *)CompositeAppFrameWindowOrSelf + 2);
                        xxxSnapWindow(CompositeAppFrameWindowOrSelf, v121);
                        ThreadUnlock1(v123, v122);
                      }
                      goto LABEL_10;
                    }
                    CompositeAppFrameWindowOrSelf = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(CompositeAppFrameWindowOrSelf);
                  }
                  else
                  {
                    CompositeAppFrameWindowOrSelf = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL) + 24LL);
                  }
                  v120 = CompositeAppFrameWindowOrSelf == 0LL;
                  goto LABEL_412;
                }
                if ( (*(_DWORD *)(a1 + 876) & 0x20) == 0 )
                  goto LABEL_408;
LABEL_275:
                if ( gcHotKey && (!gfEnableHexNumpad || (gfInNumpadHexInput & 2) == 0) )
                {
                  v126 = v94 | 0x400;
                  if ( (v95 & 0x10) == 0 )
                    v126 = v94;
                  v127 = v126 | 0x200;
                  if ( (v95 & 4) == 0 )
                    v127 = v126;
                  v128 = v127;
                  LODWORD(v128) = v127 | 0x100;
                  if ( (v95 & 1) == 0 )
                    v128 = v127;
                  v129 = (_QWORD *)HotKeyToWindow(v128);
                  if ( v129 && *(_QWORD *)(a1 + 456) == *(_QWORD *)(v129[2] + 456LL) )
                  {
                    PostTransformableMessage(*(_QWORD *)(*(_QWORD *)(a1 + 432) + 120LL), 274, 61776, *v129, 0);
LABEL_674:
                    xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v223, 1);
                    goto LABEL_55;
                  }
                  v94 = v203;
                }
                v16 = v201;
LABEL_277:
                if ( v94 == 231 )
                {
                  *(_WORD *)(a1 + 874) = WORD1(v225);
                  *(_QWORD *)&v225 = 231LL;
                }
LABEL_186:
                v77 = (unsigned __int8)v225;
                v203 = (unsigned __int8)v225;
                if ( (unsigned __int8)v225 == 231LL )
                  *(_QWORD *)&v225 = 231LL;
                if ( (!v198 || (DWORD1(v229) & 0x40000) == 0) && gbGraveKeyToggle )
                {
                  if ( (GetAppImeCompatFlags(0LL) & 0x800000) == 0 && BYTE10(v225) == 41 )
                  {
                    if ( v198 )
                    {
                      v130 = *(_QWORD *)(a1 + 432);
                      if ( (*(_BYTE *)(v130 + 232) & 0x15) == 0
                        && (*(_BYTE *)(v130 + 250) & 0x40) == 0
                        && (*(_BYTE *)(v130 + 251) & 1) == 0 )
                      {
                        v131 = *(_QWORD *)(v130 + 112);
                        v199 = (struct tagWND *)v131;
                        v132 = v131;
                        if ( !v131 )
                        {
                          v131 = *(_QWORD *)(v130 + 120);
                          v199 = (struct tagWND *)v131;
                          v132 = v131;
                        }
                        if ( !v132 || *(_QWORD *)(v131 + 16) == a1 )
                        {
                          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v223, 1);
                          if ( !v219 && v199 )
                          {
                            v287 = *(_QWORD *)v199;
                            v288 = 80;
                            memset(v289, 0, 0x20uLL);
                            xxxCallCtfHook(3, 0, 1LL, (__int64)&v287);
                          }
                          goto LABEL_10;
                        }
                      }
                    }
                  }
                  v77 = v203;
                }
                if ( v77 == 121 )
                  v197 |= 4u;
                if ( (*(_BYTE *)(*(_QWORD *)(a1 + 432) + 232LL) & 4) != 0 && v77 == 27 )
                  v197 |= 4u;
                if ( (*(_DWORD *)(a1 + 488) & 8) == 0 )
                  *((_QWORD *)&v225 + 1) &= ~0x2000000uLL;
LABEL_196:
                v203 = (unsigned __int8)v225;
                v78 = *(_QWORD *)(a1 + 432);
                v79 = *(struct tagWND **)(v78 + 112);
                v199 = v79;
                if ( !*(_QWORD *)(v78 + 112) )
                {
                  v79 = *(struct tagWND **)(v78 + 120);
                  v199 = v79;
                  if ( !v79 )
                    goto LABEL_381;
                  if ( v197 - 256 <= 3 )
                    v197 += 4;
                }
                ThreadLockExchangeAlways(v79, &v241);
                v80 = *((_QWORD *)v199 + 2);
                v66 = v213;
                v202 = v80 != v213;
                if ( v80 == v238 )
                  goto LABEL_198;
                if ( *(_QWORD *)(*((_QWORD *)v199 + 2) + 432LL) != *(_QWORD *)(a1 + 432) )
                  goto LABEL_381;
                if ( (unsigned int)IsInsideMenuLoop(a1) )
                {
                  v133 = *(_QWORD *)(**(_QWORD **)(a1 + 608) + 8LL);
                  goto LABEL_459;
                }
                v118 = *(_QWORD *)(a1 + 672);
                if ( v118 )
                {
                  v133 = *(_QWORD *)(v118 + 16);
LABEL_459:
                  if ( v133 )
                  {
                    v199 = (struct tagWND *)v133;
                    v202 = *(_QWORD *)(v133 + 16) != v66;
                    ThreadLockExchangeAlways(v133, &v241);
                  }
                }
                if ( !v218 )
                {
                  v218 = *((_QWORD *)v199 + 2);
                  v236 = v218;
                  LockExchangeW32Thread(v218, v262);
                }
LABEL_198:
                if ( !v212 && a5 == -1 )
                  goto LABEL_200;
                if ( v212 > a5 )
                {
                  if ( v197 < a5 || v197 > v212 )
                    goto LABEL_200;
                }
                else if ( v197 >= v212 && v197 <= a5 )
                {
LABEL_200:
                  if ( (unsigned int)CheckPwndFilter(v199, *(_QWORD *)v217) )
                  {
                    if ( v202 )
                      goto LABEL_37;
                    if ( v198 )
                    {
                      if ( (DWORD1(v229) & 0x40000) != 0 )
                        goto LABEL_212;
                      if ( !(unsigned int)IsInsideMenuLoop(a1) )
                      {
                        if ( v203 == 93 && v197 == 257 )
                        {
                          LODWORD(v134) = 0;
                          if ( v199 )
                            v134 = *(_QWORD *)v199;
                          PostTransformableMessage((_DWORD)v199, 123, v134, -1, 0);
                        }
                        if ( v203 == 112 && v197 == 256 )
                          PostMessage(v199, 77LL, 0LL, 0LL);
                      }
                    }
                    if ( v203 == 16 )
                    {
                      v114 = DWORD2(v225) & 0x1000000;
                      if ( !v219 )
                      {
                        v115 = 1;
                        if ( (DWORD2(v225) & 0x1000000) == 0 )
                          v115 = 4;
                        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 432) + 268LL) & (unsigned __int8)v115) != 0 )
                        {
                          v135 = IsDesktopApp(*(_QWORD *)(a1 + 424));
                          if ( v135 && (*(_DWORD *)(a1 + 488) & 8) == 0 )
                          {
                            *(_QWORD *)&v225 = (v114 != 0) + 160LL;
                            goto LABEL_674;
                          }
                        }
                      }
                    }
                    v234 = *(unsigned __int8 *)(((unsigned __int64)(unsigned __int8)v203 >> 2)
                                              + *(_QWORD *)(a1 + 432)
                                              + 228) & (1 << (2 * (v203 & 3)));
                    if ( v234 )
                    {
                      if ( !v198 )
                        goto LABEL_282;
                      if ( (unsigned __int64)NextSysMsg > 1 )
                        *((_QWORD *)NextSysMsg + 5) |= 0x40000000uLL;
                    }
LABEL_212:
                    if ( v198 )
                    {
                      if ( (DWORD1(v229) & 0x40000) == 0
                        && (unsigned __int64)NextSysMsg > 1
                        && (*(_DWORD *)(a1 + 1208) & 0x8000000) != 0 )
                      {
                        v81 = xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v223, 0);
                        v216 = v81;
                        goto LABEL_217;
                      }
                      xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v223, 1);
                    }
LABEL_282:
                    v81 = v216;
LABEL_217:
                    v82 = *((_QWORD *)&v225 + 1);
                    v205 = *((_QWORD *)&v225 + 1);
                    v203 = v225;
                    if ( v234 )
                    {
                      v82 = *((_QWORD *)&v225 + 1) | 0x40000000LL;
                      v205 = *((_QWORD *)&v225 + 1) | 0x40000000LL;
                    }
                    if ( v197 == 257 || v197 == 261 )
                    {
                      v82 |= 0x80000000uLL;
                      v205 = v82;
                    }
                    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 432) + 232LL) & 0x10) != 0 )
                      v205 = v82 | 0x20000000;
                    if ( (unsigned int)IsMenuStarted(a1) )
                      v205 |= 0x10000000uLL;
                    if ( (*(_DWORD *)(*(_QWORD *)(a1 + 432) + 388LL) & 0x4000) != 0 )
                      v205 |= 0x8000000uLL;
                    if ( (v243 || gpImeHotKeyListHeader) && (DWORD1(v229) & 0x40000) == 0 )
                    {
                      if ( !v198 )
                        goto LABEL_245;
                      if ( !(unsigned int)IsMenuStarted(a1) && (*(_DWORD *)(a1 + 488) & 0x2000000) == 0 && v199 )
                      {
                        v83 = v203;
                        if ( v203 == 231 )
                          v83 = (*(unsigned __int16 *)(a1 + 874) << 16) | 0xE7;
                        *(_QWORD *)(a1 + 1216) = *((_QWORD *)&v230 + 1);
                        v221 = xxxImmProcessKey(*(_QWORD *)(a1 + 432), (_DWORD)v199, v197, v83, v205);
                        if ( (v221 & 0x11) != 0 )
                        {
                          if ( v81 )
                            FreeQEntry(v81);
                          v216 = 0LL;
                          goto LABEL_381;
                        }
                      }
                    }
                    if ( !v198 )
                    {
LABEL_245:
                      if ( (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_BYTE *)(a1 + 680)) & 8) != 0 )
                      {
                        v215 = 1;
                        v109 = 3;
                        if ( v198 )
                          v109 = 0;
                        if ( (unsigned int)xxxCallHook(v109, v203, v205, 2) )
                          goto LABEL_381;
                      }
                      if ( v215
                        && v198
                        && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_BYTE *)(a1 + 680)) & 0x40) != 0 )
                      {
                        xxxCallHook(7, v203, v205, 5);
                      }
                      goto LABEL_153;
                    }
                    v215 = 1;
                    v84 = 0;
                    if ( (DWORD1(v229) & 0x40000) != 0 )
                      goto LABEL_244;
                    v85 = *(_QWORD *)(a1 + 432);
                    v86 = *(_QWORD *)(v85 + 408);
                    *(_QWORD *)(v85 + 408) = *((_QWORD *)&v227 + 1);
                    if ( (v221 & 2) != 0 )
                      v84 = 2;
                    *(_QWORD *)(a1 + 1216) = *((_QWORD *)&v230 + 1);
                    KeyboardInputTelemetry::BeginKeyboardEventProcessingByInputService(
                      (KeyboardInputTelemetry *)&gKeyboardInputTelemetry,
                      *(_DWORD *)(*(_QWORD *)a1 + 1600LL));
                    v87 = xxxCallCtfHook(2, v84, v203, v205);
                    v84 = v87;
                    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 408LL) = v86;
                    v88 = v216;
                    if ( !v216 )
                      goto LABEL_243;
                    if ( (unsigned int)(v87 - 2) > 1
                      || (*(_DWORD *)(a1 + 1208) & 0x10000000) != 0
                      || !AllocQEntryEx((struct tagMLIST *)(*(_QWORD *)(a1 + 432) + 24LL), v216, 1) )
                    {
                      FreeQEntry(v88);
                      v216 = 0LL;
LABEL_243:
                      KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
                        (KeyboardInputTelemetry *)&gKeyboardInputTelemetry,
                        *(_DWORD *)(*(_QWORD *)a1 + 1600LL),
                        ((DWORD2(v224) - 257) & 0xFFFFFFFB) == 0);
LABEL_244:
                      if ( !v84 )
                        goto LABEL_245;
                      goto LABEL_381;
                    }
                    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 80LL) = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 24LL);
                    if ( v84 == 2 )
                    {
                      v106 = 1;
                      v206 = 1;
                    }
                    else if ( v84 == 3 )
                    {
                      v106 = 2;
                      v206 = 2;
                    }
                    else
                    {
                      v106 = v206;
                    }
                    DeferSysPeekMsg(a1, v106);
                    v216 = 0LL;
                    v16 = v201;
                  }
                }
                break;
              case 0x101:
              case 0x105:
                goto LABEL_186;
              case 0x102:
                goto LABEL_196;
              case 0x119:
              case 0x11B:
                goto LABEL_593;
              default:
                goto LABEL_71;
            }
          }
        }
LABEL_71:
        v204.x = SWORD4(v225);
        v204.y = SWORD5(v225);
        v207 = 1;
        if ( (BYTE4(v229) & 0x20) != 0 )
        {
          if ( !v25 )
            goto LABEL_73;
          if ( (((unsigned __int16)(*(_DWORD *)(*((_QWORD *)v25 + 5) + 288LL) >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 424LL) + 280LL) >> 8)) & 0x1FF) == 0 )
            goto LABEL_92;
        }
        if ( !v25 || (v89 = IsCompositionInputWindowForHitTest(v25), v25 = v199, !v89) )
        {
LABEL_73:
          v35 = 0;
          goto LABEL_74;
        }
        v35 = 1;
LABEL_74:
        v36 = *(_QWORD *)(a1 + 432);
        v37 = *(struct tagWND **)(v36 + 104);
        if ( !v37 )
        {
          if ( !v35 )
          {
            v25 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
            v250 = *(_QWORD *)(a1 + 416);
            *(_QWORD *)(a1 + 416) = &v250;
            v251 = v25;
            if ( v25 )
              _InterlockedIncrement((volatile signed __int32 *)v25 + 2);
          }
          if ( (unsigned int)IsThreadDesktopComposed(a1) )
          {
            v254 = DWORD2(v224);
            v255 = v225;
            v256 = &v207;
            if ( v35 )
              v257 = 9;
            else
              v257 = 1;
            v258 = 0;
            v259 = (char *)&v228 + 8;
            v260 = 0;
            v261 = 0LL;
            v39 = xxxDCEWindowHitTestIndirect(v25, (struct tagPOINT)v228, (__int64)&v254);
            if ( v39 && v260 )
            {
              *((_QWORD *)&v225 + 1) = *((_QWORD *)&v255 + 1);
              DWORD1(v226) = SWORD4(v255);
              v38 = *((_QWORD *)&v255 + 1) >> 16;
              DWORD2(v226) = SWORD5(v255);
              v204 = *(struct tagPOINT *)((char *)&v226 + 4);
            }
          }
          else
          {
            v39 = (HWND)xxxWindowHitTest((ULONG_PTR)v25);
          }
          LOBYTE(v38) = 1;
          v40 = (struct tagWND *)HMValidateHandleNoSecure(v39, v38);
          InputTraceLogging::Mouse::SecondaryHitTest((const struct tagQMSG *)&v223, &v204, v40);
          if ( !v35 )
            ThreadUnlock1(v42, v41);
          LOBYTE(v41) = 1;
          v199 = (struct tagWND *)HMValidateHandleNoSecure(v39, v41);
          if ( !v199 )
          {
            v199 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(a1 + 456) + 8LL) + 24LL);
            if ( !v199 )
              v199 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiRit + 456LL) + 8LL) + 24LL);
          }
          if ( (unsigned int)IsMouseInPointerActive(a1, 0LL)
            && (v90 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 440LL)) != 0
            && (v161 = ValidateHwnd(v90),
                v161
             && ((v162 = *(_QWORD *)(v161 + 16), v163 = *(_QWORD *)(a1 + 432), *(_QWORD *)(v162 + 432) == v163)
              || *(_QWORD *)(v162 + 424) == *(_QWORD *)(a1 + 424))) )
          {
            v199 = (struct tagWND *)v161;
            v207 = 1;
            *(_DWORD *)(v163 + 148) = 0;
          }
          else
          {
            v43 = *(_QWORD *)(v213 + 432);
            *(_DWORD *)(v43 + 148) = v207 != 1;
          }
LABEL_90:
          v25 = v199;
          goto LABEL_91;
        }
        v25 = *(struct tagWND **)(v36 + 104);
        v199 = v25;
        if ( v35 )
        {
          if ( !(unsigned int)IsCompositionInputWindowForHitTest(v37) )
          {
            DWORD1(v229) &= ~0x2000u;
            if ( NextSysMsg )
            {
              if ( (unsigned int)IsMouseInPointerActive(a1, NextSysMsg) )
                *((_DWORD *)NextSysMsg + 25) &= ~0x2000u;
            }
          }
          goto LABEL_90;
        }
LABEL_91:
        if ( v25 == *(struct tagWND **)(*(_QWORD *)(a1 + 432) + 104LL) )
        {
          v93 = *(_DWORD *)(*((_QWORD *)v25 + 5) + 288LL);
          if ( (((unsigned __int16)(v93 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(PtiMouseFromQ(*(_QWORD *)(*((_QWORD *)v25 + 2) + 432LL))
                                                                                         + 424)
                                                                             + 280LL) >> 8)) & 0x1FF) != 0
            || (unsigned int)IsOleDragDropCaptureWindow(v199) )
          {
            v204 = (struct tagPOINT)v228;
            PhysicalToLogicalInPlacePointWithParent(v199, &v204, (char *)&v228 + 8);
            v205 = (LOWORD(v204.y) << 16) | LOWORD(v204.x);
            *(struct tagPOINT *)((char *)&v226 + 4) = v204;
          }
          v25 = v199;
        }
LABEL_92:
        ThreadLockExchange(v25, &v241);
        if ( CheckCrossThreadInput(v199, NextSysMsg, &v202, &v198, v222) )
          goto LABEL_37;
        if ( !v202 )
        {
          if ( (WORD2(v229) & 0x1000) != 0
            && !(unsigned int)CheckAccessForIntegrityLevelEx(
                                v230,
                                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v199 + 2) + 424LL) + 880LL),
                                0LL) )
          {
            EtwTraceUIPIMsgError(0LL, *(_QWORD *)(*((_QWORD *)v199 + 2) + 424LL), v197, v225, *((_QWORD *)&v225 + 1));
LABEL_386:
            zzzSetCursor((struct tagCURSOR *)gasyscur[1]);
            goto LABEL_381;
          }
          goto LABEL_95;
        }
        v44 = v199;
        v117 = *((_QWORD *)v199 + 2);
        if ( *(_QWORD *)(v117 + 432) != *(_QWORD *)(a1 + 432) )
          goto LABEL_386;
        if ( !v208 )
        {
          v208 = *((_QWORD *)v199 + 2);
          LockExchangeW32Thread(v117, v263);
LABEL_95:
          v44 = v199;
        }
        v45 = v204;
        v46 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v44 + 2) + 432LL) + 148LL);
        if ( !v46 || (v92 = v46 - 2) == 0 )
        {
          v47 = *((_QWORD *)v44 + 5);
          if ( (*(_BYTE *)(v47 + 26) & 0x40) != 0 )
            v204.x = *(_DWORD *)(v47 + 112) - v204.x;
          else
            v204.x -= *(_DWORD *)(v47 + 104);
          v48 = *(_DWORD *)(*((_QWORD *)v44 + 5) + 108LL);
          goto LABEL_100;
        }
        if ( v92 == 1 )
        {
          v165 = *((_QWORD *)v44 + 5);
          if ( (*(_BYTE *)(v165 + 26) & 0x40) != 0 )
            v204.x = *(_DWORD *)(v165 + 96) - v204.x;
          else
            v204.x -= *(_DWORD *)(v165 + 88);
          v48 = *(_DWORD *)(*((_QWORD *)v44 + 5) + 92LL);
LABEL_100:
          v204.y -= v48;
        }
        if ( !v202 && *(_QWORD *)(a1 + 432) == gpqCursor )
        {
          v49 = *(_QWORD *)(*(_QWORD *)(a1 + 456) + 184LL) != (_QWORD)v44;
          v50 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))FindNCHitEx)(v44, (unsigned int)v207, v204);
          v51 = v197;
          if ( v197 != 512 || v49 || *(_DWORD *)(*(_QWORD *)(a1 + 456) + 192LL) != v50 )
          {
            xxxTrackMouseMove(v199);
            v51 = v197;
          }
          if ( !v49 )
          {
            v52 = *(_QWORD *)(a1 + 456);
            if ( (*(_DWORD *)(v52 + 48) & 0x40) != 0
              && (v51 != 512 || !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)(v52 + 196, v45)) )
            {
              ResetMouseHover(*(struct tagDESKTOP **)(a1 + 456), v45);
            }
          }
          v44 = v199;
        }
        v53 = CheckPwndFilter(v44, *(_QWORD *)v217);
        v16 = v201;
        if ( v53 )
        {
          v54 = 0;
          v220 = 0;
          v55 = v197;
          if ( v197 >= 0x201 )
          {
            switch ( v197 )
            {
              case 0x201u:
                v27 = (unsigned __int8)IsMessageInputSourceTouch(&v223) == 0;
                v97 = *(_QWORD *)(a1 + 432);
                if ( v27 )
                  *(_DWORD *)(v97 + 388) &= ~0x800000u;
                else
                  *(_DWORD *)(v97 + 388) |= 0x800000u;
                v98 = IsMessageInputSourcePen(&v223);
                v99 = *(_QWORD *)(v213 + 432);
                v100 = *(_DWORD *)(v99 + 388);
                if ( v98 )
                  v101 = v100 | 0x1000000;
                else
                  v101 = v100 & 0xFEFFFFFF;
                *(_DWORD *)(v99 + 388) = v101;
                v55 = v197;
                goto LABEL_291;
              case 0x202u:
              case 0x205u:
              case 0x208u:
              case 0x20Cu:
                goto LABEL_293;
              case 0x204u:
              case 0x207u:
              case 0x20Bu:
LABEL_291:
                if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v199 + 14) + 8LL) + 8LL) & 8) != 0
                  || *(_DWORD *)(*(_QWORD *)(a1 + 432) + 148LL) == 1 )
                {
                  goto LABEL_292;
                }
                if ( !(unsigned int)IsMenuStarted(a1) )
                  goto LABEL_341;
                v55 = v197;
LABEL_292:
                v54 = 1;
                v220 = 1;
                v102 = *(_QWORD *)(a1 + 432);
                if ( (unsigned int)v226 <= *(_DWORD *)(v102 + 160) && !gbClientDoubleClickSupport )
                {
                  v166 = v199 ? *(_QWORD *)v199 : 0LL;
                  if ( v166 == *(_QWORD *)(v102 + 168)
                    && v55 == *(_DWORD *)(v102 + 152)
                    && (v55 != 523 || WORD1(v225) == *(_WORD *)(v102 + 156)) )
                  {
                    v316[0] = *(_DWORD *)(v102 + 176) - *(_DWORD *)(gpsi + 2040LL) / 2;
                    v316[1] = *(_DWORD *)(v102 + 180) - *(_DWORD *)(gpsi + 2044LL) / 2;
                    v316[2] = *(_DWORD *)(v102 + 176) + *(_DWORD *)(gpsi + 2040LL) / 2;
                    v316[3] = *(_DWORD *)(v102 + 180) + *(_DWORD *)(gpsi + 2044LL) / 2;
                    if ( (unsigned int)PtInRect(v316, *(_QWORD *)((char *)&v226 + 4)) )
                    {
                      v55 = v197 + 2;
                      v197 += 2;
                      v54 = 2;
                      v220 = 2;
                    }
                    else
                    {
LABEL_341:
                      v55 = v197;
                    }
                  }
                }
LABEL_293:
                v103 = *(_QWORD *)(a1 + 432);
                v104 = *(_DWORD *)(v103 + 388);
                if ( (v104 & 8) != 0 )
                {
                  *(_DWORD *)(v103 + 388) = v104 | 4;
                  v55 = v197;
                }
                if ( v55 - 514 <= 0xA )
                {
                  v105 = 1097;
                  if ( _bittest(&v105, v55 - 514) )
                  {
                    if ( *(_DWORD *)(*(_QWORD *)(a1 + 432) + 160LL) && ((DWORD2(v230) - 4) & 0xFFFFFFFB) == 0 )
                    {
                      if ( DWORD2(v230) == 4 )
                        TouchTimeFromCPLValue = GetTouchTimeFromCPLValue(0x12Cu, 0xB4u, 5u, 1);
                      else
                        TouchTimeFromCPLValue = GetPenDoubleClickTime();
                      *(_DWORD *)(*(_QWORD *)(a1 + 432) + 160LL) = DWORD2(v232) + TouchTimeFromCPLValue;
                      v55 = v197;
                    }
                  }
                }
                break;
              default:
                break;
            }
          }
          if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v199 + 2) + 432LL) + 148LL) == 1 )
          {
            v55 -= 352;
            v197 = v55;
            v203 = (unsigned int)v207;
          }
          if ( (unsigned int)MiPCheckMsgFilter(NextSysMsg, v55, v212, a5) )
          {
            if ( v202 )
              goto LABEL_394;
            v56 = v197;
            if ( v197 - 512 > 0xE || (*(_DWORD *)(a1 + 488) & 0x8000) == 0 )
              break;
          }
        }
      }
      v57 = *(_DWORD *)(a1 + 488);
      if ( (v57 & 0x100000) != 0 )
      {
        *(_DWORD *)(a1 + 488) = v57 & 0xFFEFFFFF;
        xxxWindowEvent(0x800Bu, 0LL, -9, 0, 1u);
        v56 = v197;
      }
      v240[0] = *(_QWORD *)((char *)&v226 + 4);
      v240[1] = v199 ? *(_QWORD *)v199 : 0LL;
      LODWORD(v240[2]) = v207;
      v240[3] = *((_QWORD *)&v227 + 1);
      LODWORD(v240[4]) = v225;
      v58 = (unsigned int)v198;
      if ( !v198 || (_DWORD)v56 == 512 || (_DWORD)v56 == 160 )
        break;
      v209 = 1;
      if ( !(unsigned int)xxxCallCtfHook(7, 0, (unsigned int)v56, (__int64)v240) )
      {
        v58 = (unsigned int)v198;
        v56 = v197;
        break;
      }
LABEL_381:
      xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v223, 1);
      if ( v209 )
      {
        if ( ((*(_BYTE *)(a1 + 680) | *(_BYTE *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x40) != 0 )
          xxxCallHook(6, v197, (__int64)v240, 5);
        v209 = 0;
      }
      if ( v215 )
      {
        if ( ((*(_BYTE *)(a1 + 680) | *(_BYTE *)(**(_QWORD **)(a1 + 464) + 16LL)) & 0x40) != 0 )
          xxxCallHook(7, v203, v205, 5);
        v215 = 0;
      }
      v16 = v201;
      if ( v198 )
        goto LABEL_10;
    }
    v59 = (unsigned int)(*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_DWORD *)(a1 + 680));
    if ( ((*(_WORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_WORD *)(a1 + 680)) & 0x100) != 0 )
    {
      v209 = 1;
      if ( (unsigned int)xxxCallMouseHook(v56, v240, v58) )
        goto LABEL_381;
    }
    if ( (unsigned int)PsGetWin32KFilterSet(v56, v59, v58) == 5 )
    {
      v110 = *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 480);
      v211 = 0;
      v211 = *(_QWORD *)(v110 + 248) != 0LL;
      if ( v211 )
      {
        if ( xxxClientCallLocalMouseHooks(v197, v240, (unsigned int)v198) )
          goto LABEL_381;
      }
    }
    if ( (*(_DWORD *)(a1 + 1208) & 0x2000) == 0 && (v207 == -2 || !v207) )
    {
      v116 = 0LL;
      if ( (unsigned int)IsIndependentInputWindow(v199) )
      {
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(v199);
        v116 = CompositionInputWindowUIOwner;
        if ( CompositionInputWindowUIOwner )
        {
          v169 = 0;
          if ( (unsigned int)CoreWindowProp::IsComponent(CompositionInputWindowUIOwner) && v197 == 161 )
            v169 = *(_QWORD *)(*((_QWORD *)v116 + 2) + 432LL) == gpqForeground;
          TopLevelWindow = (const struct tagWND *)GetTopLevelWindow(v116);
          v171 = CoreWindowProp::GetCompositeAppFrameWindowOrSelf(TopLevelWindow);
          v116 = v171;
          if ( v169 )
          {
            v172 = *((_QWORD *)v171 + 2);
            if ( *(_QWORD *)(v172 + 432) != gpqForeground )
              *(_DWORD *)(v172 + 488) |= 0x20u;
          }
          v250 = *(_QWORD *)(a1 + 416);
          *(_QWORD *)(a1 + 416) = &v250;
          v251 = v171;
          if ( v171 )
            _InterlockedIncrement((volatile signed __int32 *)v171 + 2);
          xxxSendMessage((ULONG_PTR)v171);
          ThreadUnlock1(v174, v173);
        }
      }
      if ( !v116 )
        xxxSendMessage((ULONG_PTR)v199);
      if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 432) + 80LL) == NextSysMsg )
      {
        if ( NextSysMsg )
        {
          if ( (unsigned int)IsMouseInPointerActive(a1, NextSysMsg) )
          {
            if ( (*((_DWORD *)NextSysMsg + 25) & 0x800) != 0 )
            {
              v175 = IsGenuineMouseInput((struct tagQMSG *)((char *)NextSysMsg + 120));
              if ( v175 && (unsigned int)IsMiPMouseMessage(*((_DWORD *)NextSysMsg + 6)) )
              {
                GeneratePointerMessageFromMouse((struct tagQMSG *)v314, v197, NextSysMsg, v199, v198);
                SetMiPPromotion(*((_QWORD *)v199 + 2), v315);
              }
            }
          }
        }
      }
      goto LABEL_381;
    }
    if ( *(struct tagQMSG **)(*(_QWORD *)(a1 + 432) + 80LL) != NextSysMsg )
      goto LABEL_714;
    memset(&v289[2], 0, 0x60uLL);
    v247 = v289[2];
    v278[0] = v289[2];
    v268 = v289[3];
    v278[1] = v289[3];
    v264 = v289[4];
    v278[2] = v289[4];
    v265 = v289[5];
    v278[3] = v289[5];
    v266 = v289[6];
    v278[4] = v289[6];
    v267 = v289[7];
    v278[5] = v289[7];
    v60 = 0;
    v290 = v223;
    v291 = v224;
    v292 = v225;
    v293 = v226;
    v294 = v227;
    v295 = v228;
    v296 = v229;
    v297 = v230;
    v298 = v231;
    v299 = v232;
    v300 = v233;
    if ( !NextSysMsg || !(unsigned int)IsMouseInPointerActive(a1, NextSysMsg) )
      goto LABEL_131;
    DWORD2(v291) = v197;
    *(_QWORD *)&v292 = v203;
    if ( (*((_DWORD *)NextSysMsg + 25) & 0x800) != 0 )
    {
      v176 = *(_QWORD *)(a1 + 1256);
      if ( v176 && (*(_DWORD *)v176 & 1) != 0 )
      {
        v247 = *(_OWORD *)(v176 + 24);
        v278[0] = v247;
        v268 = *(_OWORD *)(v176 + 40);
        v278[1] = v268;
        v264 = *(_OWORD *)(v176 + 56);
        v278[2] = v264;
        v265 = *(_OWORD *)(v176 + 72);
        v278[3] = v265;
        v266 = *(_OWORD *)(v176 + 88);
        v278[4] = v266;
        v267 = *(_OWORD *)(v176 + 104);
        v278[5] = v267;
        v60 = 1;
      }
      if ( GeneratePointerMessageFromMouse((struct tagQMSG *)&v301, v197, NextSysMsg, v199, v198) )
      {
        v223 = v301;
        v224 = v302;
        v225 = v303;
        v226 = v304;
        v227 = v305;
        v228 = v306;
        v229 = v307;
        v230 = v308;
        v231 = v309;
        v232 = v310;
        v233 = v311;
        v19 = 1;
        v214 = 1;
        if ( DWORD2(v302) == 582 )
        {
          v177 = 0LL;
          if ( v199 )
            v177 = *(_QWORD *)v199;
          *(_QWORD *)(*(_QWORD *)(a1 + 432) + 440LL) = v177;
        }
        else if ( ((DWORD2(v302) - 579) & 0xFFFFFFFB) == 0 )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 432) + 440LL) = 0LL;
        }
      }
      if ( v198 )
      {
        *((_DWORD *)NextSysMsg + 25) &= ~0x800u;
        goto LABEL_131;
      }
    }
    else if ( v198 )
    {
      if ( (unsigned int)IsMiPMouseMessage(*((_DWORD *)NextSysMsg + 6)) )
      {
        if ( (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)NextSysMsg + 120)) )
        {
          v178 = *(_DWORD **)(a1 + 1256);
          if ( v178 )
          {
            if ( (*v178 & 2) == 0 && (*v178 & 4) == 0 )
              goto LABEL_674;
          }
        }
        v91 = *(_DWORD **)(a1 + 1256);
        if ( v91 )
          *v91 &= ~2u;
      }
LABEL_131:
      if ( v198 )
      {
        if ( DWORD2(v291) == 512 || DWORD2(v291) == 160 )
        {
          v61 = v199 ? *(_QWORD *)v199 : 0LL;
          if ( v61 != gMiPTracking && (unsigned int)IsGenuineMouseInput((struct tagQMSG *)((char *)NextSysMsg + 120)) )
          {
            LOBYTE(v62) = 1;
            v111 = HMValidateHandleNoSecure(gMiPTracking, v62);
            v112 = v111;
            if ( v111
              && (unsigned int)IsMouseInPointerActive(*(_QWORD *)(v111 + 16), 0LL)
              && (GetMiPWindowFlags((struct tagWND *)v112) & 1) == 0 )
            {
              v179 = *(struct tagTHREADINFO **)(v112 + 16);
              if ( v179 == (struct tagTHREADINFO *)a1 )
              {
                v180 = *(_QWORD *)(a1 + 1256);
                v285 = *(_OWORD *)(v180 + 24);
                v286 = *(_OWORD *)(v180 + 40);
                v279 = *(_OWORD *)(v180 + 56);
                v280 = *(_OWORD *)(v180 + 72);
                v281 = *(_OWORD *)(v180 + 88);
                v284 = *(_OWORD *)(v180 + 104);
                if ( v60 )
                {
                  *(_OWORD *)(v180 + 24) = v247;
                  *(_OWORD *)(v180 + 40) = v268;
                  *(_OWORD *)(v180 + 56) = v264;
                  *(_OWORD *)(v180 + 72) = v265;
                  *(_OWORD *)(v180 + 88) = v266;
                  *(_OWORD *)(v180 + 104) = v267;
                  v180 = *(_QWORD *)(a1 + 1256);
                }
                v272 = *(_QWORD *)v112;
                v273 = 586;
                v274 = ((*(_DWORD *)(v180 + 36) & 0xFFFFE1F7) << 16) | 1LL;
                v275 = 0LL;
                v276 = 0LL;
                v277 = 0LL;
                v181 = W32GetThreadWin32Thread(KeGetCurrentThread());
                v283[0] = *(_QWORD *)(v181 + 416);
                *(_QWORD *)(v181 + 416) = v283;
                v283[1] = v112;
                _InterlockedIncrement((volatile signed __int32 *)(v112 + 8));
                FindTimer(v112, 65523, 2, 1, 0LL);
                xxxSendTransformableMessage(v112, 586, v274, 0, 0);
                ThreadUnlock1(v183, v182);
                if ( v60 )
                {
                  v184 = *(_QWORD *)(a1 + 1256);
                  *(_OWORD *)(v184 + 24) = v285;
                  *(_OWORD *)(v184 + 40) = v286;
                  *(_OWORD *)(v184 + 56) = v279;
                  *(_OWORD *)(v184 + 72) = v280;
                  *(_OWORD *)(v184 + 88) = v281;
                  *(_OWORD *)(v184 + 104) = v284;
                }
              }
              else
              {
                PostEventMessageEx(v179, 0, 0LL, 0LL, 0LL);
              }
            }
            if ( v19 )
            {
              if ( v199 )
                v185 = *(_QWORD *)v199;
              else
                v185 = 0LL;
              gMiPTracking = v185;
            }
            else
            {
              gMiPTracking = 0LL;
            }
          }
        }
        if ( !v19 )
        {
          v63 = v54 - 1;
          if ( v63 )
          {
            if ( v63 == 1 )
              *(_DWORD *)(*(_QWORD *)(a1 + 432) + 160LL) = 0;
          }
          else
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 432) + 152LL) = DWORD2(v224);
            *(_WORD *)(*(_QWORD *)(a1 + 432) + 156LL) = WORD1(v225);
            *(_DWORD *)(*(_QWORD *)(a1 + 432) + 160LL) = gdtDblClk + v226;
            if ( v199 )
              v113 = *(_QWORD *)v199;
            else
              v113 = 0LL;
            *(_QWORD *)(*(_QWORD *)(a1 + 432) + 168LL) = v113;
            *(_QWORD *)(*(_QWORD *)(a1 + 432) + 176LL) = *(_QWORD *)((char *)&v226 + 4);
          }
        }
        v64 = (const struct tagQMSG *)&v223;
        if ( v19 )
          v64 = (const struct tagQMSG *)&v290;
        if ( xxxMouseActivate((struct tagTHREADINFO *)a1, v199, v64, v207) == 1 )
          goto LABEL_381;
        if ( v198 )
          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v223, 1);
      }
    }
    if ( v209
      && v198
      && (((unsigned __int8)*(_DWORD *)(**(_QWORD **)(a1 + 464) + 16LL) | *(_BYTE *)(a1 + 680)) & 0x40) != 0 )
    {
      xxxCallHook(6, v197, (__int64)v240, 5);
    }
    v209 = 0;
    v205 = (LOWORD(v204.y) << 16) | LOWORD(v204.x);
    if ( v197 >= 0x200 )
      v203 = (unsigned int)GetMouseKeyFlags(*(_QWORD *)(a1 + 432));
    if ( (v197 - 171 <= 2 || v197 - 523 <= 2) && !v19 )
      v203 |= v225;
    v65 = *(_QWORD *)(a1 + 608);
    if ( v207 == 5 )
    {
      if ( v198 )
      {
        if ( v65 )
        {
          if ( (*(_DWORD *)(v65 + 8) & 0x100) != 0 )
          {
            if ( *(_QWORD *)v65 )
            {
              if ( (**(_DWORD **)v65 & 1) != 0 )
              {
                MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
                  (MenuStateOwnerLockxxxUnlock *)v252,
                  *(struct tagMENUSTATE **)(a1 + 608));
                v186 = xxxCallHandleMenuMessages(v65, (_DWORD)v199, v197, v203, v205);
                MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)v252);
                if ( v186 )
                  goto LABEL_55;
              }
            }
          }
        }
      }
    }
    v66 = v213;
    if ( !v19 )
      goto LABEL_153;
LABEL_541:
    LODWORD(v34) = DWORD2(v224);
LABEL_542:
    if ( ((DWORD2(v230) - 2) & 0xFFFFFFCF) == 0 && DWORD2(v230) != 50 )
    {
      v197 = v34;
      v205 = *((_QWORD *)&v225 + 1);
      v203 = v225;
LABEL_545:
      if ( v198 )
      {
        if ( (unsigned int)IsMouseInPointerActive(a1, 0LL) && v19 )
        {
          v143 = 0LL;
          if ( v199 )
            v143 = *(_QWORD *)v199;
          *(_QWORD *)(*(_QWORD *)(a1 + 1256) + 48LL) = v143;
          if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1256) + 36LL) & 0x400000) != 0
            && !(unsigned int)IsCompositionInputWindow(v199) )
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 1256) + 36LL) &= ~0x400000u;
          }
          MiPWindowFlags = GetMiPWindowFlags(v199);
          SetMiPWindowFlags(v199, MiPWindowFlags & 0xFFFFFFFFFFFFFFFEuLL);
          if ( ((DWORD2(v224) - 578) & 0xFFFFFFFB) != 0 )
          {
            if ( ((DWORD2(v224) - 579) & 0xFFFFFFFB) == 0 )
              **(_DWORD **)(a1 + 1256) &= ~8u;
          }
          else
          {
            v192 = 0;
            if ( DWORD2(v224) == 578 )
              v192 = 8;
            **(_DWORD **)(a1 + 1256) = v192 | **(_DWORD **)(a1 + 1256) & 0xFFFFFFF7;
          }
        }
        else
        {
          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v223, 1);
        }
      }
      if ( CTouchProcessor::IsPointerMessageTouchpad(
             gpTouchProcessor,
             (struct tagTHREADINFO *)a1,
             *((unsigned __int64 *)&v225 + 1),
             v19) )
      {
        if ( !v198 && !(unsigned int)IsPTPAllowedOnThread((struct tagTHREADINFO *)a1, DWORD2(v224), v225) )
          xxxSkipSysMsgEx((struct tagTHREADINFO *)a1, (struct tagQMSG *)&v223, 1);
        v193 = IsStatelessPointerInputMessage(v197);
        v194 = v205;
        if ( v193 )
          v194 = -1LL;
        v205 = v194;
      }
      goto LABEL_153;
    }
    EtwTraceBeginPointerMessageRetrieve(NextSysMsg, (unsigned __int16)v225, (unsigned int)v34);
    v187 = (unsigned int)xxxRetrievePointerInputMessage(
                           a1,
                           v217[0],
                           v212,
                           a5,
                           1,
                           0,
                           &v198,
                           NextSysMsg,
                           (__int64)&v199,
                           (__int64)&v197,
                           (__int64)&v203,
                           (__int64)&v205,
                           &v202,
                           v222);
    InputTraceLogging::Pointer::RetrieveMessage(NextSysMsg, 0LL, v187);
    EtwTraceEndPointerMessageRetrieve(NextSysMsg, (unsigned __int16)v225, DWORD2(v224));
    v188 = v199;
    if ( v199 )
    {
      ThreadLockExchange(v199, &v241);
      v188 = v199;
    }
    v189 = v187 - 1;
    if ( !v189 )
      goto LABEL_545;
    v190 = v189 - 1;
    if ( !v190 )
      break;
    v191 = v190 - 1;
    if ( !v191 )
    {
      xxxDefPointerProc(v188, DWORD2(v224), v225, *((_QWORD *)&v225 + 1));
      goto LABEL_381;
    }
    v27 = v191 == 1;
    v16 = v201;
    if ( !v27 )
      goto LABEL_381;
  }
  if ( v202 )
  {
    v245 = *((_QWORD *)v188 + 2);
    LockExchangeW32Thread(v245, v269);
  }
LABEL_714:
  v30 = v208;
LABEL_38:
  v16 = v201;
LABEL_39:
  *(_QWORD *)(*(_QWORD *)(a1 + 432) + 72LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)(a1 + 432) + 64LL) = 0LL;
  **(_DWORD **)(a1 + 448) &= ~1u;
  if ( v218 )
  {
    SetWakeBit(v218, 16385LL);
    ClearWakeBit(a1, 16385LL, 0LL);
  }
  else if ( !v30 && !v246 && !v16 && !v245 )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 448) + 8LL) = 0;
    ClearWakeBit(a1, 31751LL, 1LL);
    goto LABEL_50;
  }
  if ( v30 )
  {
    SetWakeBit(v30, 16390LL);
    ClearWakeBit(a1, 16390LL, 0LL);
  }
  if ( v16 )
  {
    SetWakeBit(v16, 17408LL);
    ClearWakeBit(a1, 17408LL, 0LL);
  }
  if ( v245 )
  {
    SetWakeBit(v245, 20480LL);
    ClearWakeBit(a1, 20480LL, 0LL);
  }
  if ( v246 )
  {
    SetWakeBit(v246, 8256LL);
    ClearWakeBit(a1, 0x2000LL, 0LL);
  }
  else if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 56LL) )
  {
    *(_WORD *)(*(_QWORD *)(a1 + 448) + 8LL) |= *(_WORD *)(*(_QWORD *)(a1 + 448) + 6LL) & 0x5C07;
    ClearWakeBit(a1, 23559LL, 0LL);
    *(_WORD *)(*(_QWORD *)(a1 + 448) + 4LL) &= 0xA3F8u;
  }
LABEL_50:
  PopAndFreeW32ThreadLock(v269);
  PopAndFreeW32ThreadLock(v270);
  PopAndFreeW32ThreadLock(v271);
  PopAndFreeW32ThreadLock(v263);
  PopAndFreeW32ThreadLock(v262);
  ThreadUnlock1(v32, v31);
  return 0LL;
}
