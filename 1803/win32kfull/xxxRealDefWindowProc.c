/*
 * XREFs of xxxRealDefWindowProc @ 0x1C00246A8
 * Callers:
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0024530 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x1C006CD90 (xxxDefWindowProc.c)
 * Callees:
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C00052E4 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C0006BE0 (MNClearCachedPopupSizes.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000AF90 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxInternalGetMessage @ 0x1C000DD88 (xxxInternalGetMessage.c)
 *     GreSetTextColor @ 0x1C00133D4 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0013448 (GreSetBkColor.c)
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0021D64 (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     xxxAdjustSize @ 0x1C002219C (xxxAdjustSize.c)
 *     xxxCalcClientRect @ 0x1C0022534 (xxxCalcClientRect.c)
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C00262C8 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00262F8 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxInternalDoSyncPaint @ 0x1C0029330 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C002A0E0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C002A170 (BuildHwndList.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     DefSetText @ 0x1C002FFEC (DefSetText.c)
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C003547C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C00355D0 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     _InitPwSB @ 0x1C0038CEC (_InitPwSB.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxLoadUserApiHook @ 0x1C003B220 (xxxLoadUserApiHook.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxSleepThread2 @ 0x1C0046670 (xxxSleepThread2.c)
 *     WCSToMBEx @ 0x1C0053808 (WCSToMBEx.c)
 *     xxxGetTitleBarInfoEx @ 0x1C0056FA4 (xxxGetTitleBarInfoEx.c)
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     xxxSetFocus @ 0x1C005E8B0 (xxxSetFocus.c)
 *     xxxReleaseCapture @ 0x1C0060450 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C0060550 (xxxSetCapture.c)
 *     xxxSendNotifyMessage @ 0x1C0060D20 (xxxSendNotifyMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00620C0 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0062398 (MSGSQMAddMessage.c)
 *     GetMouseKeyFlags @ 0x1C006343C (GetMouseKeyFlags.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C006C084 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C006D9B0 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     xxxRedrawTitle @ 0x1C006E8C0 (xxxRedrawTitle.c)
 *     PostShellHookMessagesEx @ 0x1C006E9A8 (PostShellHookMessagesEx.c)
 *     GetNonChildAncestor @ 0x1C0070A34 (GetNonChildAncestor.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     DWP_SetHotKey @ 0x1C0071F20 (DWP_SetHotKey.c)
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C0071FBC (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 *     xxxDrawWindowFrame @ 0x1C0075134 (xxxDrawWindowFrame.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 *     _IsDescendant @ 0x1C00765A8 (_IsDescendant.c)
 *     _GetProcessWindowStation @ 0x1C00B81E0 (_GetProcessWindowStation.c)
 *     xxxGetSysMenu @ 0x1C00C2390 (xxxGetSysMenu.c)
 *     _SetMenuDefaultItem @ 0x1C00C2978 (_SetMenuDefaultItem.c)
 *     xxxDWP_DoNCActivate @ 0x1C00C2AA8 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00C2CE4 (xxxDrawCaptionBar.c)
 *     xxxDWP_UpdateUIState @ 0x1C00C32A4 (xxxDWP_UpdateUIState.c)
 *     GetAppCompatFlags2 @ 0x1C00C3A80 (GetAppCompatFlags2.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00DDD48 (DesktopVerifyHeapLargeUnicodeString.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00E22F4 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     xxxSendSizeMessage @ 0x1C00E98E8 (xxxSendSizeMessage.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     GetThreadDesktopWindow @ 0x1C00F06E0 (GetThreadDesktopWindow.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F2780 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxSysCommand @ 0x1C00F50F8 (xxxSysCommand.c)
 *     xxxDWP_EraseBkgnd @ 0x1C00FEB18 (xxxDWP_EraseBkgnd.c)
 *     DWP_GetIcon @ 0x1C00FEC28 (DWP_GetIcon.c)
 *     xxxClientShutdown @ 0x1C00FEEE8 (xxxClientShutdown.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00FF48C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0100340 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C01009C8 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     FindNCHit @ 0x1C01013E8 (FindNCHit.c)
 *     xxxSendMinRectMessages @ 0x1C0102848 (xxxSendMinRectMessages.c)
 *     ?GetFocusDirection@CoreWindowProp@@SA?AW4FOCUSDIRECTION@@PEBUtagWND@@@Z @ 0x1C01057C8 (-GetFocusDirection@CoreWindowProp@@SA-AW4FOCUSDIRECTION@@PEBUtagWND@@@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0110730 (xxxDrawMenuBarUnderlines.c)
 *     xxxMessageBeep @ 0x1C01339F0 (xxxMessageBeep.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0138F34 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     xxxSimulateShiftF10 @ 0x1C01A5D68 (xxxSimulateShiftF10.c)
 *     _FreeTouchInputInfo @ 0x1C01A9250 (_FreeTouchInputInfo.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01D8B90 (SfnCOPYGLOBALDATA.c)
 *     xxxDWP_ProcessVirtKey @ 0x1C01FF8B0 (xxxDWP_ProcessVirtKey.c)
 *     xxxDefPointerProc @ 0x1C01FF9A4 (xxxDefPointerProc.c)
 *     xxxDoScrollMenu @ 0x1C0200C74 (xxxDoScrollMenu.c)
 *     xxxSendHelpMessage @ 0x1C0206B18 (xxxSendHelpMessage.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 *     ClientFrame @ 0x1C022B850 (ClientFrame.c)
 *     TextCopy @ 0x1C022BAB8 (TextCopy.c)
 *     GetContextHelpId @ 0x1C022E134 (GetContextHelpId.c)
 */

__int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rcx
  unsigned int v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v15; // esi
  unsigned int v16; // esi
  unsigned int v17; // esi
  int v18; // eax
  __int64 v19; // rsi
  unsigned int v20; // esi
  unsigned int v21; // esi
  unsigned int v22; // esi
  unsigned int v23; // esi
  unsigned int v24; // esi
  unsigned int v25; // esi
  int v26; // eax
  __int64 v27; // r15
  _DWORD *v28; // rax
  _BYTE *v29; // rdx
  int TitleBarInfo; // eax
  unsigned __int64 v31; // rbx
  unsigned int v32; // esi
  unsigned int v33; // esi
  __int64 v34; // rbx
  BOOL v35; // edi
  unsigned int v36; // esi
  __int64 v37; // rdi
  __int64 v38; // rdx
  HICON updated; // rax
  unsigned int v40; // esi
  unsigned int v41; // esi
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // eax
  unsigned int v48; // esi
  unsigned int v49; // esi
  unsigned int v50; // esi
  int v51; // eax
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // ecx
  HDC DCEx; // rbx
  unsigned int v56; // esi
  unsigned int v57; // esi
  ULONG v58; // ecx
  ULONG v59; // ecx
  __int64 v60; // rdx
  unsigned int v61; // r8d
  _QWORD *v62; // rsi
  int v63; // eax
  int v64; // eax
  int v65; // ebx
  __int64 v66; // rcx
  _WORD *v67; // rcx
  __int64 v68; // rdx
  char v69; // cl
  ULONG_PTR v70; // rbx
  __int64 v71; // rax
  __int64 v72; // rbx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rax
  int v77; // eax
  struct tagHOTKEYSTRUCT **v78; // rax
  int v79; // edi
  int ContextHelpId; // eax
  unsigned int v81; // esi
  unsigned int v82; // esi
  unsigned int v83; // esi
  ULONG_PTR v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // r14
  _QWORD *v93; // rsi
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // r8
  ULONG_PTR v99; // rbx
  __int64 v100; // rax
  __int64 v101; // r8
  __int64 v102; // rdx
  ULONG_PTR v103; // rcx
  __int64 v104; // rcx
  __int64 ProcessWindowStation; // rax
  __int64 v106; // rbx
  char v107; // bl
  int v108; // r9d
  __int64 v109; // rdx
  unsigned int v110; // esi
  int v111; // r9d
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax
  __int64 v114; // r9
  __int64 v115; // r8
  struct tagWND *v116; // rcx
  __int64 v117; // rax
  __int16 v118; // bx
  int NCHit; // ecx
  __int64 v120; // rdx
  __int64 v121; // rcx
  __int64 v122; // r8
  int v123; // edx
  unsigned int v124; // esi
  _QWORD *v125; // r8
  const struct tagWND *v126; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rsi
  __int64 v128; // rbx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  ULONG_PTR NonChildAncestor; // rbx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  unsigned __int64 v137; // r12
  __int64 v138; // rax
  int v139; // ecx
  unsigned int v140; // esi
  unsigned int v141; // esi
  unsigned int v142; // esi
  __int64 v143; // r10
  unsigned __int64 v144; // r8
  __int16 v145; // r8
  int v146; // eax
  int v147; // eax
  int v148; // r9d
  __int64 v149; // rbx
  __int64 v150; // rax
  __int64 v151; // rdx
  __int64 v152; // rcx
  __int64 v153; // r8
  __int64 v154; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v156; // rdx
  __int64 v157; // r8
  __int64 v158; // rbx
  struct tagPROCESSINFO *v159; // rax
  unsigned int v160; // ecx
  int v161; // r8d
  unsigned __int64 v162; // rdx
  unsigned __int64 v163; // rdx
  __int64 v165; // rbx
  unsigned int v166; // ebx
  __int64 v167; // rdi
  int v168; // eax
  unsigned __int16 v169; // bx
  unsigned int v170; // ebx
  __int64 v171; // rbx
  __int64 v172; // rax
  ULONG_PTR v173; // rcx
  __int64 SysMenu; // rax
  __int64 v175; // rcx
  __int64 v176; // rcx
  __int64 v177; // rsi
  __int64 v178; // rax
  unsigned int v179; // ecx
  int v180; // ebx
  __int64 v181; // rcx
  __int64 v182; // rcx
  struct tagPROCESSINFO *v183; // [rsp+50h] [rbp-178h]
  struct tagPROCESSINFO *v184; // [rsp+50h] [rbp-178h]
  struct tagPROCESSINFO *v185; // [rsp+50h] [rbp-178h]
  unsigned __int64 v186; // [rsp+58h] [rbp-170h] BYREF
  _QWORD v187[2]; // [rsp+60h] [rbp-168h] BYREF
  __int64 v188; // [rsp+70h] [rbp-158h]
  ULONG BytesInMultiByteString; // [rsp+78h] [rbp-150h] BYREF
  __int64 v190; // [rsp+80h] [rbp-148h] BYREF
  __int64 v191; // [rsp+88h] [rbp-140h]
  __int64 v192; // [rsp+98h] [rbp-130h] BYREF
  ULONG_PTR v193; // [rsp+A0h] [rbp-128h]
  int v194; // [rsp+B0h] [rbp-118h] BYREF
  int v195; // [rsp+B4h] [rbp-114h]
  __int64 v196; // [rsp+B8h] [rbp-110h]
  _DWORD v197[2]; // [rsp+C0h] [rbp-108h] BYREF
  __int64 v198; // [rsp+C8h] [rbp-100h]
  _QWORD v199[3]; // [rsp+D8h] [rbp-F0h] BYREF
  _QWORD v200[3]; // [rsp+F0h] [rbp-D8h] BYREF
  _QWORD v201[3]; // [rsp+108h] [rbp-C0h] BYREF
  _QWORD v202[3]; // [rsp+120h] [rbp-A8h] BYREF
  _DWORD v203[12]; // [rsp+138h] [rbp-90h] BYREF
  __int64 v204; // [rsp+168h] [rbp-60h] BYREF
  __int64 v205; // [rsp+170h] [rbp-58h]
  int v206; // [rsp+178h] [rbp-50h]

  v186 = (unsigned __int64)a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v187);
  if ( a1 == (struct tagWND *)-1LL )
    goto LABEL_13;
  if ( a2 > 0x400 )
  {
    v37 = 0LL;
    goto LABEL_68;
  }
  if ( a2 > 0xA3 )
  {
    if ( a2 > 0x136 )
    {
      if ( a2 > 0x240 )
      {
        if ( a2 <= 0x317 )
        {
          if ( a2 != 791 )
          {
            if ( a2 <= 0x243 )
              goto LABEL_451;
            if ( a2 <= 0x244 )
              goto LABEL_13;
            if ( a2 <= 0x247 )
              goto LABEL_451;
            if ( a2 <= 0x24D )
              goto LABEL_13;
            if ( a2 <= 0x24F )
            {
LABEL_451:
              updated = (HICON)xxxDefPointerProc(v8, a2, a3, 0LL);
              goto LABEL_77;
            }
            if ( a2 != 787
              || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0
              || *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gpqForeground && !(unsigned int)xxxSetForegroundWindow(a1) )
            {
              goto LABEL_13;
            }
            goto LABEL_436;
          }
          TitleBarInfo = xxxDWPPrint(a1, (HDC)a3, a4);
          goto LABEL_54;
        }
        v48 = a2 - 793;
        if ( v48 )
        {
          v49 = v48 - 2;
          if ( v49 )
          {
            v50 = v49 - 36;
            if ( v50 )
            {
              if ( v50 == 10 && a3 )
              {
                v52 = *((_QWORD *)a1 + 10);
                v53 = v52 ? *(_QWORD *)(v52 + 16) : 0LL;
                if ( v53 && *(struct tagWND **)(v53 + 1384) == a1 )
                {
                  CoreWindowProp::GetFocusDirection(a1);
                  xxxSetFocus(a1);
                }
              }
              goto LABEL_13;
            }
            TitleBarInfo = xxxGetTitleBarInfoEx(a1, (struct tagTITLEBARINFO *)a4);
          }
          else
          {
            if ( gihmodUserApiHook < 0 || (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
              goto LABEL_13;
            TitleBarInfo = xxxLoadUserApiHook();
          }
          goto LABEL_54;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
        {
          if ( a1 != (struct tagWND *)GetDesktopWindow(a1)
            && (((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) == 0
             || !(unsigned int)xxxCallHook(12, (unsigned __int64)a3, a4, 10)) )
          {
            v179 = *(_DWORD *)(gptiCurrent + 1200LL);
            v180 = (v179 >> 11) & 1;
            v186 = *(_QWORD *)(gptiCurrent + 1208LL);
            if ( (v179 & 0x40000) != 0 && *(struct tagWND **)(gptiCurrent + 1376LL) == a1
              || (unsigned int)CoreWindowProp::IsComponent(a1) )
            {
              v181 = *(_QWORD *)(gptiCurrent + 504LL);
              if ( v181 )
              {
                v182 = *(_QWORD *)(v181 + 32);
                if ( v182 )
                {
                  if ( (*(_DWORD *)(v182 + 1200) & 0x800) != 0 )
                  {
                    v180 = 1;
                    v186 = *(_QWORD *)(v182 + 1208);
                  }
                }
              }
            }
            PostShellHookMessagesEx(
              0xCuLL,
              a4,
              (struct tagINPUT_MESSAGE_SOURCE *)((unsigned __int64)&v186 & -(__int64)(v180 != 0)));
          }
          goto LABEL_13;
        }
        v154 = *((_QWORD *)a1 + 10);
        ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
        v156 = 793LL;
        goto LABEL_455;
      }
      if ( a2 == 576 )
      {
        if ( *(_QWORD *)(gptiCurrent + 1056LL) == a4 )
          *(_QWORD *)(gptiCurrent + 1056LL) = 0LL;
        FreeTouchInputInfo(a4, 1LL);
        goto LABEL_13;
      }
      if ( a2 > 0x20C )
      {
        if ( a2 != 526 )
        {
          if ( a2 <= 0x217 )
            goto LABEL_13;
          if ( a2 > 0x219 )
          {
            if ( a2 == 554 )
            {
              SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v187);
              return 1162627398LL;
            }
            else
            {
              if ( a2 != 555 )
                goto LABEL_13;
              v170 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL);
              SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v187);
              return ((unsigned __int64)v170 >> 4) & 1;
            }
          }
          goto LABEL_427;
        }
      }
      else
      {
        switch ( a2 )
        {
          case 0x20Cu:
            goto LABEL_276;
          case 0x137u:
            if ( *(_WORD *)(gpsi + 6996LL) < 8u
              || (v168 = *(_DWORD *)(gpsi + 4648LL), v168 != *(_DWORD *)(gpsi + 4568LL))
              || v168 == *(_DWORD *)(gpsi + 4588LL) )
            {
              GreSetBkColor((HDC)a3, *(_DWORD *)(gpsi + 4648LL));
              GreSetTextColor((HDC)a3, *(_DWORD *)(gpsi + 4628LL));
              v27 = *(_QWORD *)(gpsi + 4944LL);
              goto LABEL_40;
            }
            v165 = 20LL;
            goto LABEL_414;
          case 0x138u:
            goto LABEL_406;
          case 0x205u:
            goto LABEL_405;
        }
        if ( a2 != 522 )
          goto LABEL_13;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
        goto LABEL_13;
LABEL_429:
      v171 = *((_QWORD *)a1 + 10);
      v172 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v190 = *(_QWORD *)(v172 + 408);
      *(_QWORD *)(v172 + 408) = &v190;
      v191 = v171;
      _InterlockedAdd((volatile signed __int32 *)(v171 + 8), 1u);
      v173 = *((_QWORD *)a1 + 10);
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout(v173, 0, 0, 0LL, 1, 1);
      goto LABEL_114;
    }
    if ( a2 == 310 )
      goto LABEL_406;
    v38 = 274LL;
    if ( a2 > 0x112 )
    {
      if ( a2 <= 0x128 )
      {
        if ( a2 == 296 )
        {
          updated = (HICON)xxxDWP_UpdateUIState(a1, a3, a4);
          goto LABEL_77;
        }
        v140 = a2 - 281;
        if ( v140 )
        {
          v141 = v140 - 1;
          if ( v141 )
          {
            v142 = v141 - 2;
            if ( !v142 )
              goto LABEL_189;
            if ( v142 != 11 )
              goto LABEL_13;
            LOWORD(v143) = (_WORD)a3;
            v186 = (unsigned __int16)a3;
            v144 = (unsigned __int64)a3 >> 16;
            v184 = (struct tagPROCESSINFO *)((unsigned __int64)a3 >> 16);
            v37 = 0LL;
            if ( (WORD1(a3) & 0xFFF8) != 0 || (unsigned __int16)a3 > 3u || a4 )
              goto LABEL_13;
            if ( (_WORD)a3 == 3 )
            {
              v145 = 0;
              LOWORD(v184) = 0;
              if ( (*gpsi & 0x80u) != 0 || (v146 = *(_DWORD *)(gpsi + 7004LL), (v146 & 0x20) != 0) || v146 >= 0 )
              {
LABEL_363:
                if ( v145 )
                {
                  if ( (v145 & 1) != 0 )
                    v148 = ((_WORD)v143 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 7);
                  else
                    v148 = 0;
                  if ( (v145 & 2) != 0 )
                    v148 |= ((_WORD)v143 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 6) & 1;
                  if ( (v145 & 4) != 0 )
                    v148 |= ((_WORD)v143 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 2) & 1;
                  if ( !v148 )
                    goto LABEL_13;
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                  {
                    v149 = *((_QWORD *)a1 + 10);
                    v150 = W32GetThreadWin32Thread(KeGetCurrentThread());
                    v190 = *(_QWORD *)(v150 + 408);
                    *(_QWORD *)(v150 + 408) = &v190;
                    v191 = v149;
                    _InterlockedAdd((volatile signed __int32 *)(v149 + 8), 1u);
                    v37 = xxxSendMessage(*((_QWORD *)a1 + 10), 295LL, (unsigned __int64)a3, 0LL);
                    ThreadUnlock1(v152, v151, v153);
                  }
                  else
                  {
                    v37 = xxxSendMessage(a1, 296LL, (unsigned __int64)a3, 0LL);
                  }
                }
                goto LABEL_68;
              }
              if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
              {
                v143 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
                v145 = 3;
                a3 = (HWND)(v143 | 0x30000);
                goto LABEL_363;
              }
LABEL_366:
              LOWORD(v143) = v186;
              v145 = (__int16)v184;
              goto LABEL_363;
            }
            if ( (*gpsi & 0x80u) == 0 )
            {
              v147 = *(_DWORD *)(gpsi + 7004LL);
              if ( (v147 & 0x20) == 0 && v147 < 0 )
              {
                if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
                  goto LABEL_366;
                LOWORD(v144) = WORD1(a3);
                LOWORD(v143) = v186;
              }
            }
            v145 = v144 & 0xFFFC;
            goto LABEL_363;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_189;
          v154 = *((_QWORD *)a1 + 10);
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v156 = 282LL;
        }
        else
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_189;
          v157 = *((_QWORD *)a1 + 10);
          v158 = *(_QWORD *)(*(_QWORD *)(v157 + 16) + 416LL);
          v159 = *(struct tagPROCESSINFO **)(gptiCurrent + 416LL);
          v185 = v159;
          if ( (struct tagPROCESSINFO *)v158 != v159
            && !(unsigned int)IsMessageAllowedAcrossILByReceiver(
                                v159,
                                (struct tagPROCESSINFO *)v158,
                                (struct tagWND *)v157,
                                0x119u,
                                (unsigned __int64)a3,
                                a4,
                                1) )
          {
            if ( *(_QWORD *)v158 == gpepCSRSS )
            {
              v160 = 0x2000;
              v161 = 0;
            }
            else
            {
              v160 = *(_DWORD *)(v158 + 872);
              v161 = *(_DWORD *)(v158 + 876);
            }
            v162 = *((_QWORD *)v185 + 109);
            if ( gbEnforceUIPI )
            {
              if ( (unsigned int)v162 <= v160 )
              {
                if ( (_DWORD)v162 != v160
                  || (v163 = HIDWORD(v162), (_DWORD)v163 != v161) && (_DWORD)v163 != -1 && v161 != -1 )
                {
                  EtwTraceUIPIMsgError(v185, v158, 281LL, a3, a4);
                  UserSetLastError(5LL);
                  MSGSQMAddMessage(v185, (struct tagPROCESSINFO *)v158, a4, 1, 0);
                  goto LABEL_189;
                }
              }
            }
            MSGSQMAddMessage(v185, (struct tagPROCESSINFO *)v158, a4, 1, gbEnforceUIPI != 0 ? 5 : 1);
          }
          v154 = *((_QWORD *)a1 + 10);
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v156 = 281LL;
        }
LABEL_455:
        v190 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v190;
        v191 = v154;
        _InterlockedAdd((volatile signed __int32 *)(v154 + 8), 1u);
        v86 = xxxSendMessage(*((_QWORD *)a1 + 10), v156, (unsigned __int64)a3, a4);
        goto LABEL_456;
      }
      if ( a2 == 297 )
      {
        v166 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL);
        SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v187);
        return ((v166 & 0x40 | ((unsigned __int64)v166 >> 2)) >> 5) | v166 & 4;
      }
      if ( a2 != 306 )
      {
        if ( a2 <= 0x132 )
          goto LABEL_13;
        if ( a2 > 0x134 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
        {
          v165 = 15LL;
LABEL_414:
          v167 = 4640LL;
          goto LABEL_415;
        }
LABEL_408:
        v165 = 5LL;
        goto LABEL_409;
      }
LABEL_406:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
      {
        v165 = 15LL;
LABEL_409:
        v167 = 4600LL;
LABEL_415:
        GreSetBkColor((HDC)a3, *(_DWORD *)(gpsi + 4 * v165 + 4568));
        GreSetTextColor((HDC)a3, *(_DWORD *)(v167 + gpsi));
        v27 = *(_QWORD *)(gpsi + 8 * v165 + 4696);
        goto LABEL_40;
      }
      goto LABEL_408;
    }
    if ( a2 == 274 )
    {
      xxxSysCommand((ULONG_PTR)a1);
      goto LABEL_13;
    }
    if ( a2 <= 0x101 )
    {
      if ( a2 == 257 )
        goto LABEL_92;
      if ( a2 != 164 )
      {
        if ( a2 != 172 )
        {
          if ( a2 == 174 )
          {
            DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
            xxxDrawCaptionBar((ULONG_PTR)a1, DCEx);
            _ReleaseDC(DCEx);
            goto LABEL_13;
          }
          if ( a2 == 175 )
          {
            xxxDrawWindowFrame(a1, a3, (unsigned int)a4);
            goto LABEL_13;
          }
          if ( a2 != 256 )
            goto LABEL_13;
          if ( a3 == (HWND)27 )
          {
            if ( !(unsigned int)CoreWindowProp::IsComponent(a1) )
              goto LABEL_13;
            Host = CoreWindowProp::GetHost(a1);
            if ( !Host )
              goto LABEL_13;
            TopLevelWindow = GetTopLevelWindow(Host);
            if ( !TopLevelWindow )
              goto LABEL_13;
            v114 = a4;
            v38 = 256LL;
            v115 = 27LL;
            v116 = (struct tagWND *)TopLevelWindow;
            goto LABEL_304;
          }
          if ( a3 != (HWND)121 )
            goto LABEL_13;
          v117 = *(_QWORD *)(gptiCurrent + 424LL);
          goto LABEL_341;
        }
LABEL_276:
        v118 = 0;
        if ( WORD1(a3) == 1 )
        {
          v118 = 1;
        }
        else if ( WORD1(a3) == 2 )
        {
          v118 = 2;
          goto LABEL_419;
        }
        if ( !v118 )
          goto LABEL_13;
LABEL_419:
        v169 = v118 | 0x8000;
        if ( a2 != 524 )
          LOWORD(a3) = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 424LL));
        xxxSendMessage(a1, 793LL, *(_QWORD *)a1, (unsigned __int16)a3 | (unsigned __int64)(v169 << 16));
        goto LABEL_13;
      }
      memset(v203, 0, sizeof(v203));
      NCHit = FindNCHit(a1, (unsigned int)a4);
      if ( (unsigned int)(NCHit - 6) <= 1 )
      {
        if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL), a1) )
          goto LABEL_13;
      }
      else if ( (unsigned int)(NCHit - 2) > 1 || a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL) )
      {
        goto LABEL_13;
      }
      xxxSetCapture(a1);
      while ( !(unsigned int)xxxInternalGetMessage((int)v203, 0, 512, 526, 1, 0) || v203[2] != 517 )
      {
        if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL)
          || !(unsigned int)xxxSleepThread2(6u, 0, 1, 0, 0LL) )
        {
          goto LABEL_13;
        }
      }
      xxxReleaseCapture(v121, v120, v122);
      v123 = FindNCHit(a1, LOWORD(v203[9]) | (LOWORD(v203[10]) << 16));
      if ( ((v123 - 2) & 0xFFFFFFFA) != 0 )
        goto LABEL_13;
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 0x20) != 0 )
      {
        if ( v123 == 2 )
          goto LABEL_436;
        if ( v123 == 3 )
        {
LABEL_264:
          v110 = 61536;
LABEL_437:
          SysMenu = xxxGetSysMenu(a1);
          v188 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=(v187, SysMenu);
          if ( (unsigned __int8)SmartObjStackRef<tagMENU>::operator==(v187) )
            goto LABEL_13;
          if ( gihmodUserApiHook >= 0 )
          {
            v175 = v188;
            if ( !v188 )
              v175 = *(_QWORD *)v187[0];
            MNClearCachedPopupSizes(v175);
          }
          v176 = v188;
          if ( !v188 )
            v176 = *(_QWORD *)v187[0];
          SetMenuDefaultItem(v176, v110, 0LL);
          PostShellHookMessagesEx(9uLL, *(_QWORD *)a1, 0LL);
          v177 = v188;
          if ( !v188 )
            v177 = *(_QWORD *)v187[0];
          v178 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v202[0] = *(_QWORD *)(v178 + 408);
          *(_QWORD *)(v178 + 408) = v202;
          v202[1] = v177;
          _InterlockedAdd((volatile signed __int32 *)(v177 + 8), 1u);
          if ( a4 == 0xFFFFFFFF )
          {
            v45 = gpsi;
            if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
            {
              v205 = 0LL;
              v206 = 0;
              v204 = 20LL;
              if ( (unsigned int)xxxSendMinRectMessages(a1, (char *)&v204 + 4) )
                xxxTrackPopupMenuEx(v187, 576LL, HIDWORD(v204), (unsigned int)v205, a1, &v204);
            }
          }
          else
          {
            xxxTrackPopupMenuEx(v187, 514LL, (unsigned int)(__int16)a4, (unsigned int)SWORD1(a4), a1, 0LL);
          }
          goto LABEL_114;
        }
      }
LABEL_405:
      _InterlockedAdd(&glSendMessage, 1u);
      xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0, 0, 0LL, 1, 0);
      goto LABEL_13;
    }
    v56 = a2 - 260;
    if ( !v56 )
    {
      v137 = a4 >> 16;
      if ( (v137 & 0x2000) != 0 )
      {
        if ( (v137 & 0x4000) == 0 )
        {
          v138 = *(_QWORD *)(gptiCurrent + 424LL);
          if ( a3 != (HWND)18 || (v139 = *(_DWORD *)(v138 + 388), (v139 & 8) != 0) )
          {
            *(_DWORD *)(v138 + 388) &= 0xFFFFFFF3;
          }
          else
          {
            *(_DWORD *)(v138 + 388) = v139 | 8;
            xxxDrawMenuBarUnderlines(a1, 1LL);
          }
        }
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= ~0x10u;
        xxxDWP_ProcessVirtKey((unsigned int)a3);
        goto LABEL_13;
      }
      if ( a3 != (HWND)121 )
        goto LABEL_13;
      v117 = *(_QWORD *)(gptiCurrent + 424LL);
LABEL_341:
      *(_DWORD *)(v117 + 388) |= 0x10u;
      if ( (GetKeyState(16LL) & 0x8000u) == 0LL || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
        goto LABEL_13;
      goto LABEL_405;
    }
    v57 = v56 - 1;
    if ( !v57 )
    {
LABEL_92:
      if ( a3 == (HWND)18
        && (v54 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL), (v54 & 0x80u) == 0)
        && (v54 & 0xC) == 8
        || a3 == (HWND)121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) & 0x10) != 0 )
      {
        NonChildAncestor = GetNonChildAncestor(a1);
        if ( gspwndFullScreen != NonChildAncestor )
        {
          v192 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v192;
          v193 = NonChildAncestor;
          if ( NonChildAncestor )
            _InterlockedAdd((volatile signed __int32 *)(NonChildAncestor + 8), 1u);
          if ( a3 == (HWND)121 )
            xxxDrawMenuBarUnderlines(a1, 1LL);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(NonChildAncestor, 0, 0, 0LL, 1, 0);
          ThreadUnlock1(v135, v134, v136);
        }
      }
      if ( a3 == (HWND)18 )
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= ~0x80u;
        xxxDrawMenuBarUnderlines(a1, 0LL);
      }
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= 0xFFFFFFE3;
      goto LABEL_13;
    }
    v124 = v57 - 1;
    if ( v124 )
    {
      if ( v124 != 3 )
        goto LABEL_13;
      if ( a3 == (HWND)0xFFFF )
        goto LABEL_189;
      v114 = a4;
      v115 = (__int64)a3;
      v38 = 258LL;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= 0xFFFFFFF3;
      if ( a3 != (HWND)13 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      {
        if ( (a4 & 0x20000000) == 0 || !a3 )
        {
          if ( a3 != (HWND)27 )
            xxxMessageBeep(0LL);
          goto LABEL_13;
        }
        if ( a3 == (HWND)9 || a3 == (HWND)27 )
          goto LABEL_13;
        if ( a3 != (HWND)32 )
          goto LABEL_405;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        {
          v104 = *((_QWORD *)a1 + 10);
          v190 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v190;
          v191 = v104;
          _InterlockedAdd((volatile signed __int32 *)(v104 + 8), 1u);
          v102 = 262LL;
          v101 = 32LL;
          v103 = *((_QWORD *)a1 + 10);
          goto LABEL_252;
        }
        v125 = *(_QWORD **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
        if ( v125 && (unsigned int)(*(_DWORD *)(v125[5] + 236LL) - 8) <= 3 )
        {
          PostIAMShellHookMessageEx(*(_QWORD *)(gptiCurrent + 448LL), 33LL, *v125);
          goto LABEL_13;
        }
        v126 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
        if ( !v126 || !(unsigned int)IsCompositionInputWindow(v126) )
          goto LABEL_405;
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL)
                                                                                                 + 120LL));
        if ( (unsigned int)CoreWindowProp::IsComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL)) )
          CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL));
        if ( !CompositionInputWindowUIOwner )
          goto LABEL_13;
        v128 = GetTopLevelWindow(CompositionInputWindowUIOwner);
        if ( !v128 )
          goto LABEL_13;
        v129 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v201[0] = *(_QWORD *)(v129 + 408);
        *(_QWORD *)(v129 + 408) = v201;
        v201[1] = v128;
        _InterlockedAdd((volatile signed __int32 *)(v128 + 8), 1u);
        xxxSetForegroundWindow2((struct tagWND *)v128);
        if ( !ThreadUnlock1(v131, v130, v132) )
          goto LABEL_13;
        v38 = 274LL;
        v114 = 32LL;
        v115 = 61696LL;
        v116 = (struct tagWND *)v128;
LABEL_304:
        PostMessage(v116, v38, v115, v114);
        goto LABEL_13;
      }
      v114 = 0LL;
      v115 = 61728LL;
    }
    v116 = a1;
    goto LABEL_304;
  }
  if ( a2 >= 0xA1 )
  {
    xxxDWP_NCMouse(a1, a2, (unsigned int)a3);
    goto LABEL_13;
  }
  if ( a2 <= 0x33 )
  {
    if ( a2 == 51 )
    {
      v78 = HotKeyHelper(a1);
      v79 = 0;
      if ( *v78 )
        v79 = *((_DWORD *)*v78 + 2);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v187);
      return v79;
    }
    if ( a2 <= 0x18 )
    {
      if ( a2 == 24 )
      {
        if ( !(_WORD)a4 )
          goto LABEL_13;
        v68 = *((_QWORD *)a1 + 5);
        if ( (((*(_BYTE *)(v68 + 31) & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)a1 + 12) )
          goto LABEL_13;
        v69 = *(_BYTE *)(v68 + 31) & 0x10;
        if ( a3 )
        {
          if ( v69 || (*(_BYTE *)(v68 + 17) & 0x40) == 0 )
            goto LABEL_13;
        }
        else if ( !v69 )
        {
          goto LABEL_13;
        }
        SetOrClrWF(0LL, a1, 320LL, 1LL);
        if ( !a3 )
          SetOrClrWF(1LL, a1, 320LL, 1LL);
        xxxShowWindowEx(a1);
        goto LABEL_13;
      }
      if ( a2 <= 0xF )
      {
        if ( a2 != 15 )
        {
          v15 = a2 - 6;
          if ( !v15 )
          {
            if ( a3 )
            {
              CoreWindowProp::GetFocusDirection(a1);
              xxxSetFocus(a1);
            }
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 0x40) == 0 )
              goto LABEL_13;
            v42 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1384LL);
            if ( !v42 )
              goto LABEL_13;
            v43 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v199[0] = *(_QWORD *)(v43 + 408);
            *(_QWORD *)(v43 + 408) = v199;
            v199[1] = v42;
            _InterlockedAdd((volatile signed __int32 *)(v42 + 8), 1u);
            xxxSendNotifyMessage(v42, 841LL, a3, 0LL, 0);
            goto LABEL_114;
          }
          v16 = v15 - 5;
          if ( !v16 )
          {
            xxxDWP_SetRedraw(a1, a3 != 0LL);
            goto LABEL_13;
          }
          v17 = v16 - 1;
          if ( !v17 )
          {
            v18 = DefSetText(a1, a4);
            v19 = v18;
            if ( v18 )
            {
              xxxRedrawTitle(a1, 8LL);
              xxxWindowEvent(0x800Cu, (__int64)a1, 0, 0, 0);
            }
            SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v187);
            return v19;
          }
          v40 = v17 - 1;
          if ( v40 )
          {
            if ( v40 != 1 )
              goto LABEL_13;
            v58 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
            if ( v58 )
            {
              if ( a4 )
              {
                RtlUnicodeToMultiByteSize(&BytesInMultiByteString, *((PCWCH *)a1 + 21), v58);
                v59 = BytesInMultiByteString;
              }
              else
              {
                v59 = v58 >> 1;
                BytesInMultiByteString = v59;
              }
              v27 = v59;
              goto LABEL_40;
            }
          }
          else if ( a3 )
          {
            if ( *((_QWORD *)a1 + 21) )
            {
              v196 = *((_QWORD *)a1 + 21);
              v60 = *((_QWORD *)a1 + 5);
              v194 = *(_DWORD *)(v60 + 184);
              v195 ^= (v195 ^ *(_DWORD *)(v60 + 188)) & 0x7FFFFFFF;
              v195 = *(_DWORD *)(v60 + 188) ^ (v195 ^ *(_DWORD *)(v60 + 188)) & 0x7FFFFFFF;
              DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), &v194);
            }
            v61 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
            v62 = (_QWORD *)(a4 + 8);
            v63 = *(_DWORD *)(a4 + 4);
            if ( v61 )
            {
              if ( v63 >= 0 )
              {
                v198 = *((_QWORD *)a1 + 21);
                v66 = *((_QWORD *)a1 + 5);
                v197[0] = *(_DWORD *)(v66 + 184);
                v197[1] = *(_DWORD *)(v66 + 188);
                v65 = TextCopy(v197, *v62, (unsigned int)a3);
                v64 = 2 * v65;
              }
              else
              {
                v64 = WCSToMBEx(0LL, *((_QWORD *)a1 + 21), v61 >> 1, a4 + 8, (v63 & 0x7FFFFFFFu) - 1);
                v65 = v64;
                *(_BYTE *)(v64 + *v62) = 0;
              }
              *(_DWORD *)a4 = v64;
              SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v187);
              return v65;
            }
            v67 = (_WORD *)*v62;
            if ( v63 >= 0 )
              *v67 = 0;
            else
              *(_BYTE *)v67 = 0;
          }
LABEL_189:
          v27 = 0LL;
          goto LABEL_40;
        }
LABEL_87:
        xxxDWP_Paint(a1);
        goto LABEL_13;
      }
      if ( a2 == 16 )
      {
        xxxDestroyWindow(a1);
        goto LABEL_13;
      }
      if ( a2 != 17 && a2 != 19 )
      {
        if ( a2 != 20 )
          goto LABEL_13;
        goto LABEL_85;
      }
LABEL_427:
      v27 = 1LL;
      goto LABEL_40;
    }
    if ( a2 <= 0x26 )
    {
      if ( a2 == 38 )
        goto LABEL_87;
      v23 = a2 - 25;
      if ( v23 )
      {
        v24 = v23 - 6;
        if ( !v24 )
        {
          xxxDWP_DoCancelMode(a1);
          goto LABEL_13;
        }
        v25 = v24 - 1;
        if ( v25 )
        {
          if ( v25 != 1 )
            goto LABEL_13;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
            v70 = *((_QWORD *)a1 + 10);
          else
            v70 = 0LL;
          if ( v70
            && (v71 = W32GetThreadWin32Thread(KeGetCurrentThread()),
                v192 = *(_QWORD *)(v71 + 408),
                *(_QWORD *)(v71 + 408) = &v192,
                v193 = v70,
                _InterlockedAdd((volatile signed __int32 *)(v70 + 8), 1u),
                v72 = xxxSendMessage(v70, 33LL, (unsigned __int64)a3, a4),
                ThreadUnlock1(v74, v73, v75),
                v72) )
          {
            v27 = v72;
          }
          else
          {
            if ( (_WORD)a4 != 2 || (v76 = 3LL, WORD1(a4) != 513) )
              v76 = 1LL;
            v27 = v76;
          }
          goto LABEL_40;
        }
        v26 = xxxDWP_SetCursor(a1, a3, (__int16)a4, WORD1(a4));
        goto LABEL_39;
      }
      goto LABEL_408;
    }
    if ( a2 == 43 )
    {
      if ( *(_DWORD *)a4 == 2 )
      {
        v77 = *(_DWORD *)(a4 + 12);
        if ( v77 == 4 || v77 == 1 && (*(_DWORD *)(a4 + 16) & 0x10) != 0 )
          ClientFrame(*(HDC *)(a4 + 32));
      }
      goto LABEL_13;
    }
    if ( a2 == 39 )
    {
LABEL_85:
      v26 = xxxDWP_EraseBkgnd(a1, a2, a3);
LABEL_39:
      v27 = v26;
LABEL_40:
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v187);
      return v27;
    }
    if ( a2 <= 0x2D )
      goto LABEL_13;
    if ( a2 <= 0x2F )
    {
      v27 = -1LL;
      goto LABEL_40;
    }
    if ( a2 != 50 )
      goto LABEL_13;
    TitleBarInfo = DWP_SetHotKey(a1);
LABEL_54:
    v31 = TitleBarInfo;
LABEL_55:
    SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v187);
    return v31;
  }
  if ( a2 > 0x55 )
  {
    v9 = a2 - 123;
    if ( v9 )
    {
      v10 = v9 - 4;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 2;
            if ( !v13 )
            {
              xxxCalcClientRect(a1, (_DWORD *)a4, 0);
              goto LABEL_13;
            }
            v32 = v13 - 1;
            if ( v32 )
            {
              v33 = v32 - 1;
              if ( !v33 )
              {
                SetOrClrWF(1LL, a1, 384LL, 1LL);
                v34 = _GetDCEx(a1, a3, 328833LL);
                v35 = 0;
                if ( v34 )
                {
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
                    v35 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == gpqForeground;
                  xxxDrawWindowFrame(a1, v34, v35);
                  _ReleaseDC(v34);
                }
                SetOrClrWF(0LL, a1, 384LL, 1LL);
                goto LABEL_13;
              }
              v36 = v33 - 1;
              if ( v36 )
              {
                if ( v36 == 2 )
                {
                  SetOrClrWF(0LL, a1, 640LL, 1LL);
                  xxxInternalDoSyncPaint(a1, (unsigned int)a3);
                }
                goto LABEL_13;
              }
              xxxDWP_DoNCActivate(a1, (_WORD)a3 != 0, a4);
              goto LABEL_67;
            }
            v51 = FindNCHit(a1, (unsigned int)a4);
LABEL_129:
            v37 = v51;
            goto LABEL_68;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0x30) != 0 )
          {
            v37 = 0LL;
            if ( !InitPwSB(a1) )
              goto LABEL_68;
          }
          if ( a4 )
          {
            v28 = (_DWORD *)(a4 + 80);
            if ( !*((_QWORD *)a1 + 3) || a4 == -80LL || (v29 = *(_BYTE **)(a4 + 88)) == 0LL )
            {
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
LABEL_67:
              v37 = 1LL;
LABEL_68:
              SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v187);
              return v37;
            }
            if ( *(int *)(a4 + 84) >= 0 )
              goto LABEL_48;
            if ( *v28 && *v29 == 0xFF )
              goto LABEL_49;
            if ( *(int *)(a4 + 84) >= 0 )
            {
LABEL_48:
              if ( *v28 >= 2u && *(_WORD *)v29 == 0xFFFF )
              {
LABEL_49:
                SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v187);
                return 1LL;
              }
            }
          }
          SetOrClrWF(1LL, a1, 514LL, 1LL);
          TitleBarInfo = DefSetText(a1, a4 + 80);
          goto LABEL_54;
        }
        updated = xxxDWP_SetIcon(a1, (unsigned __int64)a3, (HICON)a4);
      }
      else
      {
        updated = (HICON)DWP_GetIcon(a1, (unsigned int)a3);
      }
LABEL_77:
      v31 = (unsigned __int64)updated;
      goto LABEL_55;
    }
    v108 = FindNCHit(a1, (unsigned int)a4);
    if ( (unsigned int)(v108 - 6) <= 1 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL), a1) )
        xxxDoScrollMenu(a1, 0LL, v111 - 6);
      goto LABEL_13;
    }
    v109 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v109 + 31) & 0xC0) != 0x40 )
    {
      if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL) )
        goto LABEL_13;
      if ( v108 != 2 )
      {
        if ( v108 != 3 )
        {
          if ( a4 == -1LL && (*(_BYTE *)(v109 + 21) & 2) == 0 )
            xxxSimulateShiftF10();
          goto LABEL_13;
        }
        goto LABEL_264;
      }
LABEL_436:
      v110 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) != 0 ? 61728 : 61488;
      goto LABEL_437;
    }
    goto LABEL_429;
  }
  if ( a2 != 85 )
  {
    if ( a2 <= 0x4D )
    {
      if ( a2 == 77 )
      {
        ContextHelpId = GetContextHelpId(a1);
        xxxSendHelpMessage((ULONG_PTR)a1, ContextHelpId);
        goto LABEL_13;
      }
      v20 = a2 - 53;
      if ( !v20 )
      {
        v31 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
        goto LABEL_55;
      }
      v21 = v20 - 6;
      if ( !v21 )
      {
        v51 = xxxClientShutdown(a1, a3);
        goto LABEL_129;
      }
      v22 = v21 - 11;
      if ( !v22 )
      {
        if ( (*(_DWORD *)(a4 + 32) & 0x100001) == 0 )
          xxxAdjustSize(a1, (int *)(a4 + 24), (int *)(a4 + 28));
        goto LABEL_13;
      }
      v41 = v22 - 1;
      if ( !v41 )
      {
        v47 = *(_DWORD *)(a4 + 32);
        if ( (v47 & 0x1000) == 0 )
        {
          GetDesktopWindow(a1);
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0, 0, 0LL, 1, 0);
          v47 = *(_DWORD *)(a4 + 32);
        }
        if ( (v47 & 0x8800) != 0x800 )
          xxxSendSizeMessage((ULONG_PTR)a1);
        goto LABEL_13;
      }
      if ( v41 == 2 )
      {
        updated = (HICON)SfnCOPYGLOBALDATA(0LL, 0LL, a3, a4, 0LL, 0LL, 0, 0LL);
        goto LABEL_77;
      }
LABEL_13:
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v187);
      return 0LL;
    }
    v81 = a2 - 79;
    if ( !v81 )
    {
      v106 = ValidateHwnd(a3);
      SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v187);
      return v106 != 0;
    }
    v82 = v81 - 1;
    if ( v82 )
    {
      v83 = v82 - 1;
      if ( v83 )
      {
        if ( v83 != 2 )
          goto LABEL_13;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
          v84 = *((_QWORD *)a1 + 10);
        else
          v84 = *((_QWORD *)a1 + 12);
        if ( v84 && v84 != GetThreadDesktopWindow(0LL) )
        {
          v85 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v192 = *(_QWORD *)(v85 + 408);
          *(_QWORD *)(v85 + 408) = &v192;
          v193 = v84;
          _InterlockedAdd((volatile signed __int32 *)(v84 + 8), 1u);
          _InterlockedAdd(&glSendMessage, 1u);
          v86 = xxxSendTransformableMessageTimeout(v84, 0, 0, 0LL, 1, 1);
LABEL_456:
          v27 = v86;
          ThreadUnlock1(v88, v87, v89);
          goto LABEL_40;
        }
      }
      else
      {
        v90 = BuildHwndList(*((_QWORD *)a1 + 11), 2LL, 0LL);
        v92 = v90;
        if ( v90 )
        {
          v93 = (_QWORD *)(v90 + 32);
          v94 = *(_QWORD *)(v90 + 32);
          if ( v94 != 1 )
          {
            do
            {
              LOBYTE(v91) = 1;
              v183 = (struct tagPROCESSINFO *)HMValidateHandleNoSecure(v94, v91);
              if ( v183 )
              {
                v95 = W32GetThreadWin32Thread(KeGetCurrentThread());
                v200[0] = *(_QWORD *)(v95 + 408);
                *(_QWORD *)(v95 + 408) = v200;
                v200[1] = v183;
                _InterlockedAdd((volatile signed __int32 *)v183 + 2, 1u);
                xxxSendMessage(v183, 81LL, (unsigned __int64)a3, a4);
                ThreadUnlock1(v97, v96, v98);
              }
              v94 = *++v93;
            }
            while ( *v93 != 1LL );
          }
          FreeHwndList(v92);
          goto LABEL_13;
        }
      }
      goto LABEL_189;
    }
    v99 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL);
    if ( !v99 || (struct tagWND *)v99 == a1 || **(_WORD **)(*((_QWORD *)a1 + 14) + 8LL) == *(_WORD *)(gpsi + 904LL) )
    {
      ProcessWindowStation = GetProcessWindowStation(0LL);
      if ( !xxxActivateKeyboardLayout(ProcessWindowStation, a4, 256LL, a1) )
        UserSetLastError(1457LL);
      goto LABEL_13;
    }
    v100 = W32GetThreadWin32Thread(KeGetCurrentThread());
    v192 = *(_QWORD *)(v100 + 408);
    *(_QWORD *)(v100 + 408) = &v192;
    v193 = v99;
    _InterlockedAdd((volatile signed __int32 *)(v99 + 8), 1u);
    v101 = (__int64)a3;
    v102 = 80LL;
    v103 = v99;
LABEL_252:
    xxxSendMessage(v103, v102, v101, a4);
LABEL_114:
    ThreadUnlock1(v45, v44, v46);
    goto LABEL_13;
  }
  if ( a4 != 3 )
    goto LABEL_13;
  v107 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL);
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v187);
  return 2LL - ((v107 & 0x20) != 0);
}
