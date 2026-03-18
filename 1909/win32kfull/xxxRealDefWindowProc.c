/*
 * XREFs of xxxRealDefWindowProc @ 0x1C00A9FB8
 * Callers:
 *     xxxDefWindowProc @ 0x1C0054BB0 (xxxDefWindowProc.c)
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00A9E40 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxDWP_ProcessVirtKey @ 0x1C000ABF0 (xxxDWP_ProcessVirtKey.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C000B1B0 (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000BC54 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxInternalGetMessage @ 0x1C000DC44 (xxxInternalGetMessage.c)
 *     GetMouseKeyFlags @ 0x1C00117BC (GetMouseKeyFlags.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00126E4 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0012850 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C0012A4C (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     xxxGetTitleBarInfoEx @ 0x1C0016514 (xxxGetTitleBarInfoEx.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C0016B88 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxRedrawTitle @ 0x1C0017A40 (xxxRedrawTitle.c)
 *     PostShellHookMessages @ 0x1C0017B0C (PostShellHookMessages.c)
 *     PostShellHookMessagesEx @ 0x1C0017B24 (PostShellHookMessagesEx.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0018E64 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     GetNonChildAncestor @ 0x1C001ACF8 (GetNonChildAncestor.c)
 *     xxxReleaseCapture @ 0x1C001D160 (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x1C001D290 (xxxSetCapture.c)
 *     xxxSendNotifyMessage @ 0x1C001FA80 (xxxSendNotifyMessage.c)
 *     xxxShowWindow @ 0x1C00225BC (xxxShowWindow.c)
 *     GreSetTextColor @ 0x1C0022D4C (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0022E5C (GreSetBkColor.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0023C6C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0027760 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C0027DC4 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     DefSetText @ 0x1C0028FAC (DefSetText.c)
 *     _IsDescendant @ 0x1C002AC14 (_IsDescendant.c)
 *     xxxDrawWindowFrame @ 0x1C002E4B0 (xxxDrawWindowFrame.c)
 *     xxxCalcClientRect @ 0x1C003358C (xxxCalcClientRect.c)
 *     DWP_SetHotKey @ 0x1C0034FC4 (DWP_SetHotKey.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     ??9?$RedirectedFieldatomClassName@G@tagCLS@@QEBAEAEBG@Z @ 0x1C0036700 (--9-$RedirectedFieldatomClassName@G@tagCLS@@QEBAEAEBG@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _InitPwSB @ 0x1C004B6A4 (_InitPwSB.c)
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     xxxInternalDoSyncPaint @ 0x1C0050C60 (xxxInternalDoSyncPaint.c)
 *     xxxLoadUserApiHook @ 0x1C0054D80 (xxxLoadUserApiHook.c)
 *     IsInsideUserApiHook @ 0x1C0054E30 (IsInsideUserApiHook.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C0056AEC (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ??9?$SharedPointerBase@G@@QEBAEH@Z @ 0x1C006077C (--9-$SharedPointerBase@G@@QEBAEH@Z.c)
 *     xxxSendTransformableMessage @ 0x1C00647FC (xxxSendTransformableMessage.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0069994 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     BuildHwndList @ 0x1C006DEF0 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C006E0B0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     _GetProcessWindowStation @ 0x1C007D1B0 (_GetProcessWindowStation.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C00AAA18 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     WCSToMBEx @ 0x1C00D1DA0 (WCSToMBEx.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00DE040 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00DE0A4 (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C00DE14C (TextCopy.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00E0014 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00E0C84 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxAdjustSize @ 0x1C00E409C (xxxAdjustSize.c)
 *     GetThreadDesktopWindow @ 0x1C00E576C (GetThreadDesktopWindow.c)
 *     _GetKeyState @ 0x1C00EBC40 (_GetKeyState.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00EFFE8 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ @ 0x1C00F9690 (--B-$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C00FE7BC (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     DWP_GetIcon @ 0x1C0101300 (DWP_GetIcon.c)
 *     xxxClientShutdown @ 0x1C01026EC (xxxClientShutdown.c)
 *     FindNCHit @ 0x1C0108614 (FindNCHit.c)
 *     xxxSendMinRectMessages @ 0x1C0109A64 (xxxSendMinRectMessages.c)
 *     xxxHandleWindowPosChanged @ 0x1C010E9FC (xxxHandleWindowPosChanged.c)
 *     MNClearCachedPopupSizes @ 0x1C010FBC8 (MNClearCachedPopupSizes.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C0111460 (xxxDrawMenuBarUnderlines.c)
 *     xxxSysCommand @ 0x1C0111880 (xxxSysCommand.c)
 *     ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C0117EF0 (-DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z.c)
 *     ??9?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C011A8A0 (--9-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ @ 0x1C011B14C (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ.c)
 *     xxxGetSysMenu @ 0x1C0128BFC (xxxGetSysMenu.c)
 *     xxxDWP_EraseBkgnd @ 0x1C0128CB0 (xxxDWP_EraseBkgnd.c)
 *     xxxDWP_UpdateUIState @ 0x1C012C39C (xxxDWP_UpdateUIState.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 *     _SetMenuDefaultItem @ 0x1C012E394 (_SetMenuDefaultItem.c)
 *     xxxDWP_DoNCActivate @ 0x1C012EEEC (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C012F140 (xxxDrawCaptionBar.c)
 *     PostIAMShellHookMessageEx @ 0x1C01311C0 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01326E0 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxMessageBeep @ 0x1C015BA50 (xxxMessageBeep.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D5F78 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxSleepThread @ 0x1C01D6F4C (xxxSleepThread.c)
 *     xxxSimulateShiftF10 @ 0x1C01DAE50 (xxxSimulateShiftF10.c)
 *     _FreeTouchInputInfo @ 0x1C01DF520 (_FreeTouchInputInfo.c)
 *     SfnCOPYGLOBALDATA @ 0x1C0214D80 (SfnCOPYGLOBALDATA.c)
 *     InImmersiveApplicationBand @ 0x1C0240010 (InImmersiveApplicationBand.c)
 *     xxxDefPointerProc @ 0x1C024002C (xxxDefPointerProc.c)
 *     DWP_GetHotKey @ 0x1C02402BC (DWP_GetHotKey.c)
 *     xxxDoScrollMenu @ 0x1C0241B40 (xxxDoScrollMenu.c)
 *     xxxSendHelpMessage @ 0x1C024814C (xxxSendHelpMessage.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 *     GetContextHelpId @ 0x1C025C7C8 (GetContextHelpId.c)
 */

__int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, HICON a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // esi
  unsigned int v17; // esi
  unsigned int v18; // esi
  unsigned int v19; // esi
  int HotKey; // eax
  __int64 v21; // r15
  unsigned int v22; // esi
  unsigned int v23; // esi
  unsigned int v24; // esi
  HICON v25; // rax
  _BYTE *v26; // rcx
  __int64 v27; // rdx
  int TitleBarInfo; // eax
  unsigned __int64 v29; // rbx
  unsigned int v30; // esi
  unsigned int v31; // esi
  HDC v32; // rbx
  __int16 v33; // di
  unsigned int v34; // esi
  unsigned int v35; // esi
  unsigned int v36; // esi
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rsi
  __int64 v41; // rdi
  unsigned int v42; // esi
  _BOOL8 v43; // r8
  __int64 updated; // rax
  __int64 Icon; // rax
  unsigned int v46; // esi
  unsigned int v47; // esi
  struct tagWND *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  unsigned int v53; // esi
  unsigned int v54; // esi
  unsigned int v55; // esi
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // rax
  int v59; // ecx
  HDC DCEx; // rbx
  unsigned int v61; // esi
  unsigned int v62; // esi
  unsigned __int64 v63; // r12
  __int64 v64; // rax
  int v65; // ecx
  __int64 v66; // r9
  ULONG v67; // ecx
  ULONG v68; // ecx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  int v70; // eax
  __int64 v71; // rdx
  int v72; // esi
  __int64 v73; // r8
  struct _LARGE_UNICODE_STRING *v74; // rax
  _WORD *v75; // rax
  char v76; // cl
  char v77; // cl
  ULONG_PTR v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  int ContextHelpId; // eax
  unsigned int v84; // esi
  unsigned int v85; // esi
  unsigned int v86; // esi
  __int64 *v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rax
  struct tagBWL *v94; // r14
  unsigned __int64 *v95; // rsi
  unsigned __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  struct tagWND *v101; // rbx
  __int64 v102; // rax
  ULONG_PTR v103; // rcx
  __int64 v104; // rcx
  __int64 ProcessWindowStation; // rax
  __int64 v106; // r9
  char v107; // bl
  int v108; // esi
  __int64 v109; // rbx
  __int64 v110; // rax
  unsigned __int64 v111; // r8
  unsigned int v112; // edx
  unsigned int v113; // ebx
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax
  __int64 v116; // rdx
  __int64 v117; // r8
  struct tagWND *v118; // rcx
  __int64 v119; // rax
  __int16 v120; // bx
  int NCHit; // ecx
  int v122; // esi
  int v123; // ecx
  __int64 v124; // r9
  unsigned int v125; // esi
  const struct tagWND *v126; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rsi
  __int64 v128; // rbx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  unsigned __int64 v133; // r8
  unsigned int v134; // edx
  __int64 *NonChildAncestor; // rbx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // r8
  unsigned int v139; // esi
  unsigned int v140; // esi
  unsigned int v141; // esi
  __int16 v142; // r9
  int v143; // eax
  int v144; // eax
  __int64 v145; // rbx
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // r8
  __int64 v151; // rbx
  struct tagPROCESSINFO *v152; // rax
  int v153; // esi
  unsigned __int8 v154; // al
  __int64 v155; // rcx
  __int16 v156; // ax
  __int64 v157; // rdx
  __int64 v158; // r8
  __int64 v159; // r9
  __int64 v160; // rbx
  __int64 v161; // rax
  __int64 v162; // rdx
  __int64 v163; // rdi
  unsigned int v164; // ebx
  __int64 v165; // rcx
  unsigned __int16 v166; // ax
  __int64 v167; // rbx
  int v168; // eax
  unsigned int v169; // ebx
  __int64 v170; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rbx
  __int64 v175; // rax
  __int64 v176; // rbx
  __int64 v177; // rax
  int v178; // ebx
  __int64 v179; // rcx
  __int64 v180; // rcx
  struct tagPROCESSINFO *v181; // [rsp+40h] [rbp-178h]
  ULONG BytesInMultiByteString[2]; // [rsp+48h] [rbp-170h] BYREF
  __int64 v183; // [rsp+50h] [rbp-168h] BYREF
  _QWORD v184[3]; // [rsp+58h] [rbp-160h] BYREF
  __int64 v185; // [rsp+70h] [rbp-148h] BYREF
  __int64 v186; // [rsp+78h] [rbp-140h]
  __int64 v187; // [rsp+80h] [rbp-138h]
  struct tagWND *v188; // [rsp+88h] [rbp-130h] BYREF
  __int64 v189; // [rsp+90h] [rbp-128h] BYREF
  ULONG_PTR v190; // [rsp+98h] [rbp-120h]
  __int64 v191; // [rsp+A0h] [rbp-118h]
  __int64 v192; // [rsp+A8h] [rbp-110h] BYREF
  struct tagWND *v193; // [rsp+B0h] [rbp-108h]
  __int64 v194; // [rsp+B8h] [rbp-100h]
  __int64 v195; // [rsp+C0h] [rbp-F8h] BYREF
  struct tagPROCESSINFO *v196; // [rsp+C8h] [rbp-F0h]
  __int64 v197; // [rsp+D0h] [rbp-E8h]
  __int64 v198; // [rsp+D8h] [rbp-E0h] BYREF
  __int64 v199; // [rsp+E0h] [rbp-D8h]
  __int64 v200; // [rsp+E8h] [rbp-D0h]
  __int64 v201; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v202; // [rsp+F8h] [rbp-C0h]
  __int64 v203; // [rsp+100h] [rbp-B8h]
  _QWORD v204[2]; // [rsp+108h] [rbp-B0h] BYREF
  _QWORD v205[3]; // [rsp+118h] [rbp-A0h] BYREF
  _DWORD v206[12]; // [rsp+130h] [rbp-88h] BYREF
  int v207; // [rsp+160h] [rbp-58h] BYREF
  __int128 v208; // [rsp+164h] [rbp-54h] BYREF

  v188 = a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v184);
  v185 = 0LL;
  v186 = 0LL;
  v187 = 0LL;
  v189 = 0LL;
  v190 = 0LL;
  v191 = 0LL;
  if ( a1 == (struct tagWND *)-1LL )
    goto LABEL_13;
  if ( a2 > 0x400 )
  {
    v41 = 0LL;
    goto LABEL_64;
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
            if ( a2 > 0x243 )
            {
              if ( a2 <= 0x244 )
                goto LABEL_13;
              if ( a2 > 0x247 )
              {
                if ( a2 <= 0x24D )
                  goto LABEL_13;
                if ( a2 > 0x24F )
                {
                  if ( a2 != 787
                    || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0
                    || *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gpqForeground
                    && !(unsigned __int8)xxxSetForegroundWindowWithOptions(a1, 2LL, 0LL) )
                  {
                    goto LABEL_13;
                  }
                  v201 = 0LL;
                  v202 = 0LL;
                  v203 = 0LL;
                  v8 = *((_QWORD *)a1 + 5);
                  goto LABEL_428;
                }
              }
            }
            updated = xxxDefPointerProc(a1, a2, a3, 0LL);
LABEL_74:
            v29 = updated;
            goto LABEL_45;
          }
          TitleBarInfo = xxxDWPPrint(a1, (HDC)a3, (__int64)a4);
        }
        else
        {
          v53 = a2 - 793;
          if ( !v53 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            {
              if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
                && (((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) == 0
                 || !(unsigned int)xxxCallHook(12, a3, (__int64)a4, 10)) )
              {
                v178 = (*(_DWORD *)(gptiCurrent + 1224LL) >> 11) & 1;
                v188 = *(struct tagWND **)(gptiCurrent + 1240LL);
                if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) != 0
                  && *(struct tagWND **)(gptiCurrent + 1392LL) == a1
                  || (unsigned int)CoreWindowProp::IsComponent(a1) )
                {
                  v179 = *(_QWORD *)(gptiCurrent + 504LL);
                  if ( v179 )
                  {
                    v180 = *(_QWORD *)(v179 + 32);
                    if ( v180 )
                    {
                      if ( (*(_DWORD *)(v180 + 1224) & 0x800) != 0 )
                      {
                        v178 = 1;
                        v188 = *(struct tagWND **)(v180 + 1240);
                      }
                    }
                  }
                }
                PostShellHookMessagesEx(
                  0xCu,
                  (__int64)a4,
                  (struct tagINPUT_MESSAGE_SOURCE *)((unsigned __int64)&v188 & -(__int64)(v178 != 0)));
              }
              goto LABEL_13;
            }
            goto LABEL_440;
          }
          v54 = v53 - 2;
          if ( v54 )
          {
            v55 = v54 - 36;
            if ( v55 )
            {
              if ( v55 == 10 && a3 )
              {
                v57 = *((_QWORD *)a1 + 13);
                v58 = v57 ? *(_QWORD *)(v57 + 16) : 0LL;
                if ( v58 && *(struct tagWND **)(v58 + 1400) == a1 )
                  xxxSetFocus(a1);
              }
              goto LABEL_13;
            }
            TitleBarInfo = xxxGetTitleBarInfoEx(a1, (struct tagTITLEBARINFO *)a4);
          }
          else
          {
            if ( !IsInsideUserApiHook() || (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
              goto LABEL_13;
            TitleBarInfo = xxxLoadUserApiHook(gptiCurrent, v8, v9, v66);
          }
        }
LABEL_44:
        v29 = TitleBarInfo;
LABEL_45:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v184, v8, v9);
        return v29;
      }
      if ( a2 == 576 )
      {
        if ( *(HICON *)(gptiCurrent + 1064LL) == a4 )
          *(_QWORD *)(gptiCurrent + 1064LL) = 0LL;
        FreeTouchInputInfo(a4, 1LL);
        goto LABEL_13;
      }
      v8 = 524LL;
      if ( a2 > 0x20C )
      {
        if ( a2 != 526 )
        {
          if ( a2 <= 0x217 )
            goto LABEL_13;
          if ( a2 <= 0x219 )
            goto LABEL_252;
          if ( a2 == 554 )
          {
            v21 = 1162627398LL;
            goto LABEL_23;
          }
          if ( a2 != 555 )
            goto LABEL_13;
          v169 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL);
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v184, 524LL, v9);
          return ((unsigned __int64)v169 >> 4) & 1;
        }
      }
      else
      {
        switch ( a2 )
        {
          case 0x20Cu:
            goto LABEL_275;
          case 0x137u:
            if ( *(_WORD *)(gpsi + 6996LL) < 8u
              || (v168 = *(_DWORD *)(gpsi + 4648LL), v168 != *(_DWORD *)(gpsi + 4568LL))
              || v168 == *(_DWORD *)(gpsi + 4588LL) )
            {
              GreSetBkColor((HDC)a3, *(_DWORD *)(gpsi + 4648LL));
              GreSetTextColor((HDC)a3, *(_DWORD *)(gpsi + 4628LL));
              v21 = *(_QWORD *)(gpsi + 4944LL);
              goto LABEL_23;
            }
            v162 = 4648LL;
            v163 = 4856LL;
            goto LABEL_405;
          case 0x138u:
            goto LABEL_398;
          case 0x205u:
            v165 = *((_QWORD *)a1 + 5);
            v166 = *(_WORD *)(v165 + 108) + WORD1(a4);
            if ( (*(_BYTE *)(v165 + 26) & 0x40) != 0 )
              v124 = (unsigned __int16)(*(_WORD *)(v165 + 112) - (_WORD)a4) | ((unsigned __int64)v166 << 16);
            else
              v124 = (unsigned __int16)((_WORD)a4 + *(_WORD *)(v165 + 104)) | (v166 << 16);
LABEL_396:
            v133 = *(_QWORD *)a1;
            v134 = 123;
            goto LABEL_397;
        }
        if ( a2 != 522 )
          goto LABEL_13;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
        goto LABEL_13;
      v170 = *((_QWORD *)a1 + 13);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v185 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v185;
      v186 = v170;
      HMLockObject(v170);
      v111 = a3;
      v112 = a2;
      goto LABEL_420;
    }
    if ( a2 == 310 )
      goto LABEL_398;
    if ( a2 > 0x112 )
    {
      if ( a2 <= 0x128 )
      {
        if ( a2 == 296 )
        {
          updated = xxxDWP_UpdateUIState(a1, a3, a4);
          goto LABEL_74;
        }
        v8 = 281LL;
        v139 = a2 - 281;
        if ( !v139 )
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_191;
          v150 = *((_QWORD *)a1 + 13);
          v151 = *(_QWORD *)(*(_QWORD *)(v150 + 16) + 416LL);
          v152 = *(struct tagPROCESSINFO **)(gptiCurrent + 416LL);
          *(_QWORD *)BytesInMultiByteString = v152;
          if ( (struct tagPROCESSINFO *)v151 != v152 )
          {
            v153 = IsMessageAllowedAcrossILByReceiver(
                     v152,
                     (void *const **)v151,
                     (struct tagWND *)v150,
                     0x119u,
                     a3,
                     (__int64)a4,
                     1);
            if ( !v153 )
            {
              v153 = IsMessageAlwaysAllowedAcrossIL(0x119u);
              if ( v153 )
                MSGSQMAddMessage(
                  *(struct tagPROCESSINFO **)BytesInMultiByteString,
                  (struct tagPROCESSINFO *)v151,
                  0x119u,
                  a3,
                  (unsigned __int64)a4,
                  1,
                  2);
            }
            if ( !v153 )
            {
              v183 = *(_QWORD *)v151 == gpepCSRSS ? 0x2000LL : *(_QWORD *)(v151 + 872);
              v154 = CheckAccess(*(_QWORD *)BytesInMultiByteString + 872LL, &v183);
              v153 = v154;
              if ( v154 )
              {
                if ( (unsigned __int8)Enforced(v155) )
                  v156 = 5;
                else
                  v156 = 1;
                MSGSQMAddMessage(
                  *(struct tagPROCESSINFO **)BytesInMultiByteString,
                  (struct tagPROCESSINFO *)v151,
                  0x119u,
                  a3,
                  (unsigned __int64)a4,
                  1,
                  v156);
              }
            }
            if ( !v153 )
            {
              EtwTraceUIPIMsgError(*(_QWORD *)BytesInMultiByteString, v151, 281LL, a3, a4);
              UserSetLastError(5LL, v157, v158, v159);
              MSGSQMAddMessage(
                *(struct tagPROCESSINFO **)BytesInMultiByteString,
                (struct tagPROCESSINFO *)v151,
                0x119u,
                a3,
                (unsigned __int64)a4,
                1,
                0);
              goto LABEL_191;
            }
          }
          v160 = *((_QWORD *)a1 + 13);
          v161 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v185 = *(_QWORD *)(v161 + 408);
          *(_QWORD *)(v161 + 408) = &v185;
          v186 = v160;
          HMLockObject(v160);
LABEL_441:
          v89 = xxxSendMessage(*((_QWORD *)a1 + 13));
          goto LABEL_442;
        }
        v140 = v139 - 1;
        if ( v140 )
        {
          v141 = v140 - 2;
          if ( !v141 )
            goto LABEL_191;
          if ( v141 != 11 )
            goto LABEL_13;
          v142 = a3;
          v8 = a3 >> 16;
          v183 = a3 >> 16;
          v41 = 0LL;
          if ( (a3 & 0xFFF80000) != 0 || (unsigned __int16)a3 > 3u || a4 )
            goto LABEL_13;
          if ( (_WORD)a3 == 3 )
          {
            v8 = 0LL;
            v183 = 0LL;
            v9 = gpsi;
            if ( (*gpsi & 0x80u) != 0 || (v143 = *(_DWORD *)(gpsi + 7004LL), (v143 & 0x20) != 0) || v143 >= 0 )
            {
LABEL_354:
              if ( (_WORD)v8 )
              {
                if ( (v8 & 1) != 0 )
                  v9 = (v142 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 7);
                else
                  v9 = 0LL;
                if ( (v8 & 2) != 0 )
                  v9 = (v142 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 6) & 1 | (unsigned int)v9;
                if ( (v8 & 4) != 0 )
                  v9 = (v142 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 2) & 1 | (unsigned int)v9;
                if ( !(_DWORD)v9 )
                  goto LABEL_13;
                if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                {
                  v145 = *((_QWORD *)a1 + 13);
                  v146 = W32GetThreadWin32Thread(KeGetCurrentThread());
                  v185 = *(_QWORD *)(v146 + 408);
                  *(_QWORD *)(v146 + 408) = &v185;
                  v186 = v145;
                  HMLockObject(v145);
                  v41 = xxxSendMessage(*((_QWORD *)a1 + 13));
                  ThreadUnlock1(v148, v147, v149);
                }
                else
                {
                  v41 = xxxSendMessage((ULONG_PTR)a1);
                }
              }
              goto LABEL_64;
            }
            if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
            {
              v142 = ((*gpsi & 0x40) != 0) + 1;
              v8 = 3LL;
              goto LABEL_354;
            }
LABEL_357:
            v142 = a3;
            v8 = v183;
            goto LABEL_354;
          }
          if ( (*gpsi & 0x80u) == 0 )
          {
            v144 = *(_DWORD *)(gpsi + 7004LL);
            if ( (v144 & 0x20) == 0 && v144 < 0 )
            {
              if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
                goto LABEL_357;
              v8 = v183;
              v142 = a3;
            }
          }
          LOWORD(v8) = v8 & 0xFFFC;
          goto LABEL_354;
        }
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
          goto LABEL_191;
LABEL_440:
        v176 = *((_QWORD *)a1 + 13);
        v177 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v185 = *(_QWORD *)(v177 + 408);
        *(_QWORD *)(v177 + 408) = &v185;
        v186 = v176;
        HMLockObject(v176);
        goto LABEL_441;
      }
      if ( a2 == 297 )
      {
        v164 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v184, v8, v9);
        return ((v164 & 0x40 | ((unsigned __int64)v164 >> 2)) >> 5) | v164 & 4;
      }
      if ( a2 != 306 )
      {
        if ( a2 <= 0x132 )
          goto LABEL_13;
        if ( a2 > 0x134 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
        {
          v162 = 4628LL;
          v163 = 4816LL;
LABEL_405:
          v167 = 4640LL;
          goto LABEL_406;
        }
LABEL_400:
        v162 = 4588LL;
        v167 = 4600LL;
        v163 = 4736LL;
        goto LABEL_406;
      }
LABEL_398:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
      {
        v162 = 4628LL;
        v167 = 4600LL;
        v163 = 4816LL;
LABEL_406:
        GreSetBkColor((HDC)a3, *(_DWORD *)(gpsi + v162));
        GreSetTextColor((HDC)a3, *(_DWORD *)(gpsi + v167));
        v21 = *(_QWORD *)(v163 + gpsi);
        goto LABEL_23;
      }
      goto LABEL_400;
    }
    if ( a2 == 274 )
    {
      xxxSysCommand(a1);
      goto LABEL_13;
    }
    if ( a2 <= 0x101 )
    {
      if ( a2 == 257 )
        goto LABEL_91;
      if ( a2 == 164 )
      {
        memset(v206, 0, sizeof(v206));
        NCHit = FindNCHit(a1, (unsigned int)a4);
        if ( (unsigned int)(NCHit - 6) <= 1 )
        {
          if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL), (__int64)a1) )
            goto LABEL_13;
        }
        else if ( (unsigned int)(NCHit - 2) > 1 || a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL) )
        {
          goto LABEL_13;
        }
        xxxSetCapture((__int64)a1);
        while ( !(unsigned int)xxxInternalGetMessage((int)v206, 0, 512, 526, 1, 0) || v206[2] != 517 )
        {
          if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL)
            || !(unsigned int)xxxSleepThread(6LL, 0LL, 1LL, 0LL) )
          {
            goto LABEL_13;
          }
        }
        xxxReleaseCapture();
        v122 = LOWORD(v206[9]) | (LOWORD(v206[10]) << 16);
        v123 = FindNCHit(a1, (unsigned int)v122);
        if ( ((v123 - 2) & 0xFFFFFFFA) != 0 )
          goto LABEL_13;
        v8 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v8 + 234) & 0x20) != 0 )
        {
          if ( v123 == 2 )
            goto LABEL_428;
          if ( v123 == 3 )
          {
LABEL_262:
            v113 = 61536;
LABEL_429:
            xxxGetSysMenu(a1);
            v184[2] = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=(v184);
            if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator!=(v184, 0LL) )
              goto LABEL_13;
            if ( IsInsideUserApiHook() )
            {
              v172 = SmartObjStackRef<tagMENU>::operator tagMENU *(v184);
              MNClearCachedPopupSizes(v172);
            }
            v173 = SmartObjStackRef<tagMENU>::operator tagMENU *(v184);
            SetMenuDefaultItem(v173, v113, 0LL);
            PostShellHookMessages(9uLL, *(_QWORD *)a1);
            v174 = SmartObjStackRef<tagMENU>::operator unsigned __int64(v184);
            v175 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v201 = *(_QWORD *)(v175 + 408);
            *(_QWORD *)(v175 + 408) = &v201;
            v202 = v174;
            HMLockObject(v174);
            if ( a4 == (HICON)0xFFFFFFFFLL )
            {
              v51 = gpsi;
              if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
              {
                v208 = 0LL;
                v207 = 20;
                if ( (unsigned int)xxxSendMinRectMessages(a1, &v208) )
                  xxxTrackPopupMenuEx(v184, 576LL, (unsigned int)v208, DWORD1(v208), a1, &v207);
              }
            }
            else
            {
              xxxTrackPopupMenuEx(v184, 514LL, (unsigned int)(__int16)a4, (unsigned int)SWORD1(a4), a1, 0LL);
            }
            goto LABEL_113;
          }
        }
        v124 = v122;
        goto LABEL_396;
      }
      if ( a2 != 172 )
      {
        if ( a2 == 174 )
        {
          DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
          xxxDrawCaptionBar(a1, DCEx);
          _ReleaseDC(DCEx);
          goto LABEL_13;
        }
        if ( a2 == 175 )
        {
          xxxDrawWindowFrame(a1, (HDC)a3, (__int16)a4);
          goto LABEL_13;
        }
        if ( a2 != 256 )
          goto LABEL_13;
        if ( a3 == 27 )
        {
          if ( !(unsigned int)CoreWindowProp::IsComponent(a1) )
            goto LABEL_13;
          Host = CoreWindowProp::GetHost(a1);
          if ( !Host )
            goto LABEL_13;
          TopLevelWindow = GetTopLevelWindow((__int64)Host);
          if ( !TopLevelWindow )
            goto LABEL_13;
          v116 = 256LL;
          v117 = 27LL;
          v118 = (struct tagWND *)TopLevelWindow;
          goto LABEL_302;
        }
        if ( a3 != 121 )
          goto LABEL_13;
        v119 = *(_QWORD *)(gptiCurrent + 424LL);
        goto LABEL_332;
      }
      v8 = 524LL;
LABEL_275:
      v120 = 0;
      if ( WORD1(a3) == 1 )
      {
        v120 = 1;
      }
      else if ( WORD1(a3) == 2 )
      {
        goto LABEL_410;
      }
      if ( !v120 )
        goto LABEL_13;
LABEL_410:
      if ( a2 != 524 )
        GetMouseKeyFlags(*(unsigned __int8 **)(gptiCurrent + 424LL));
      xxxSendMessage((ULONG_PTR)a1);
      goto LABEL_13;
    }
    v61 = a2 - 260;
    if ( !v61 )
    {
      v63 = (unsigned __int64)a4 >> 16;
      if ( (v63 & 0x2000) != 0 )
      {
        if ( (v63 & 0x4000) == 0 )
        {
          v64 = *(_QWORD *)(gptiCurrent + 424LL);
          if ( a3 != 18 || (v65 = *(_DWORD *)(v64 + 396), (v65 & 8) != 0) )
          {
            *(_DWORD *)(v64 + 396) &= 0xFFFFFFF3;
          }
          else
          {
            *(_DWORD *)(v64 + 396) = v65 | 8;
            xxxDrawMenuBarUnderlines(a1, 1LL);
          }
        }
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= ~0x10u;
        xxxDWP_ProcessVirtKey((struct tagTHREADINFO *)(unsigned int)a3);
        goto LABEL_13;
      }
      if ( a3 != 121 )
        goto LABEL_13;
      v119 = *(_QWORD *)(gptiCurrent + 424LL);
LABEL_332:
      *(_DWORD *)(v119 + 396) |= 0x10u;
      if ( (GetKeyState(16LL) & 0x8000u) == 0LL || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
        goto LABEL_13;
      v124 = -1LL;
      goto LABEL_396;
    }
    v62 = v61 - 1;
    if ( !v62 )
    {
LABEL_91:
      if ( a3 == 18
        && (v59 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL), (v59 & 0x80u) == 0)
        && (v59 & 0xC) == 8
        || a3 == 121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) & 0x10) != 0 )
      {
        NonChildAncestor = (__int64 *)GetNonChildAncestor((__int64)a1);
        if ( (__int64 *)gspwndFullScreen != NonChildAncestor )
        {
          v189 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v189;
          v190 = (ULONG_PTR)NonChildAncestor;
          if ( NonChildAncestor )
            HMLockObject(NonChildAncestor);
          if ( a3 == 121 )
            xxxDrawMenuBarUnderlines(a1, 1LL);
          xxxSendTransformableMessage(NonChildAncestor, 0x112u, 0xF100uLL, 0LL, 0);
          ThreadUnlock1(v137, v136, v138);
        }
      }
      if ( a3 == 18 )
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= ~0x80u;
        xxxDrawMenuBarUnderlines(a1, 0LL);
      }
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= 0xFFFFFFE3;
      goto LABEL_13;
    }
    v125 = v62 - 1;
    if ( v125 )
    {
      if ( v125 != 3 )
        goto LABEL_13;
      if ( a3 == 0xFFFF )
        goto LABEL_191;
      v117 = a3;
      v116 = 258LL;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= 0xFFFFFFF3;
      if ( a3 != 13 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      {
        if ( (WORD1(a4) & 0x2000) == 0 || !a3 )
        {
          if ( a3 != 27 )
            xxxMessageBeep(0LL);
          goto LABEL_13;
        }
        if ( a3 == 9 || a3 == 27 )
          goto LABEL_13;
        if ( a3 != 32 )
          goto LABEL_320;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        {
          v104 = *((_QWORD *)a1 + 13);
          v185 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v185;
          v186 = v104;
          HMLockObject(v104);
          v103 = *((_QWORD *)a1 + 13);
          goto LABEL_248;
        }
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL) && (unsigned int)InImmersiveApplicationBand() )
        {
          PostIAMShellHookMessageEx(
            *(_QWORD *)(gptiCurrent + 448LL),
            33LL,
            **(_QWORD **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL));
          goto LABEL_13;
        }
        v126 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
        if ( !v126 || !(unsigned int)IsCompositionInputWindow(v126) )
        {
LABEL_320:
          v124 = (unsigned int)a3;
          v133 = 61696LL;
          v134 = 274;
LABEL_397:
          xxxSendTransformableMessage((__int64 *)a1, v134, v133, (struct _LARGE_STRING *)v124, 0);
          goto LABEL_13;
        }
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL)
                                                                                                 + 128LL));
        if ( (unsigned int)CoreWindowProp::IsComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL)) )
          CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL));
        if ( !CompositionInputWindowUIOwner )
          goto LABEL_13;
        v128 = GetTopLevelWindow((__int64)CompositionInputWindowUIOwner);
        if ( !v128 )
          goto LABEL_13;
        v198 = 0LL;
        v199 = 0LL;
        v200 = 0LL;
        v129 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v198 = *(_QWORD *)(v129 + 408);
        *(_QWORD *)(v129 + 408) = &v198;
        v199 = v128;
        HMLockObject(v128);
        xxxForceForegroundWindowNoRestoreFocus(v128, 0);
        if ( !ThreadUnlock1(v131, v130, v132) )
          goto LABEL_13;
        v117 = 61696LL;
        v116 = 274LL;
        v118 = (struct tagWND *)v128;
LABEL_302:
        PostMessage(v118, v116, v117);
        goto LABEL_13;
      }
      v117 = 61728LL;
      v116 = 274LL;
    }
    v118 = a1;
    goto LABEL_302;
  }
  if ( a2 >= 0xA1 )
  {
    xxxDWP_NCMouse(a1, a2, a3);
    goto LABEL_13;
  }
  if ( a2 <= 0x33 )
  {
    if ( a2 == 51 )
    {
      HotKey = DWP_GetHotKey(a1);
      goto LABEL_22;
    }
    if ( a2 > 0x18 )
    {
      if ( a2 <= 0x26 )
      {
        if ( a2 != 38 )
        {
          v17 = a2 - 25;
          if ( v17 )
          {
            v18 = v17 - 6;
            if ( !v18 )
            {
              xxxDWP_DoCancelMode(a1);
              goto LABEL_13;
            }
            v19 = v18 - 1;
            if ( v19 )
            {
              if ( v19 != 1 )
                goto LABEL_13;
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                v78 = *((_QWORD *)a1 + 13);
              else
                v78 = 0LL;
              if ( v78 )
              {
                v79 = W32GetThreadWin32Thread(KeGetCurrentThread());
                v189 = *(_QWORD *)(v79 + 408);
                *(_QWORD *)(v79 + 408) = &v189;
                v190 = v78;
                HMLockObject(v78);
                v21 = xxxSendMessage(v78);
                ThreadUnlock1(v81, v80, v82);
                if ( v21 )
                  goto LABEL_23;
              }
              if ( (_WORD)a4 != 2 || (Icon = 3LL, WORD1(a4) != 513) )
                Icon = 1LL;
              goto LABEL_77;
            }
            HotKey = xxxDWP_SetCursor(a1, (HWND)a3, (unsigned int)(__int16)a4, WORD1(a4));
LABEL_22:
            v21 = HotKey;
LABEL_23:
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v184, v8, v9);
            return v21;
          }
          goto LABEL_400;
        }
LABEL_78:
        xxxDWP_Paint(a1);
        goto LABEL_13;
      }
      if ( a2 == 43 )
      {
        DWP_DrawItem((struct tagDRAWITEMSTRUCT *)a4);
        goto LABEL_13;
      }
      if ( a2 != 39 )
      {
        if ( a2 <= 0x2D )
          goto LABEL_13;
        if ( a2 <= 0x2F )
        {
          v21 = -1LL;
          goto LABEL_23;
        }
        if ( a2 != 50 )
          goto LABEL_13;
        HotKey = DWP_SetHotKey(a1, a3);
        goto LABEL_22;
      }
LABEL_84:
      HotKey = xxxDWP_EraseBkgnd(a1, a2, a3);
      goto LABEL_22;
    }
    if ( a2 != 24 )
    {
      if ( a2 == 15 )
        goto LABEL_78;
      if ( a2 <= 0xF )
      {
        v34 = a2 - 6;
        if ( !v34 )
        {
          if ( a3 )
            xxxSetFocus(a1);
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 0x40) == 0 )
            goto LABEL_13;
          v48 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1400LL);
          if ( !v48 )
            goto LABEL_13;
          v192 = 0LL;
          v193 = 0LL;
          v194 = 0LL;
          v49 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v192 = *(_QWORD *)(v49 + 408);
          *(_QWORD *)(v49 + 408) = &v192;
          v193 = v48;
          HMLockObject(v48);
          xxxSendNotifyMessage(v48, 0x349u, a3, 0LL, 0);
          goto LABEL_113;
        }
        v35 = v34 - 5;
        if ( !v35 )
        {
          xxxDWP_SetRedraw(a1, a3 != 0);
          goto LABEL_13;
        }
        v36 = v35 - 1;
        if ( v36 )
        {
          v46 = v36 - 1;
          if ( v46 )
          {
            if ( v46 != 1 )
              goto LABEL_13;
            v67 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
            if ( v67 )
            {
              if ( a4 )
              {
                RtlUnicodeToMultiByteSize(BytesInMultiByteString, *((PCWCH *)a1 + 23), v67);
                v68 = BytesInMultiByteString[0];
              }
              else
              {
                v68 = v67 >> 1;
                BytesInMultiByteString[0] = v68;
              }
              v21 = v68;
              goto LABEL_23;
            }
            goto LABEL_191;
          }
          if ( !a3 )
          {
LABEL_191:
            v21 = 0LL;
            goto LABEL_23;
          }
          if ( SharedPointerBase<unsigned short>::operator!=((_QWORD *)a1 + 23) )
          {
            v204[0] = 0LL;
            v204[1] = 0LL;
            StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                        (struct tagWND *)((char *)a1 + 184),
                        (struct _LARGE_UNICODE_STRING *)v204);
            DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), StrName);
          }
          v9 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 184LL);
          if ( !(_DWORD)v9 )
          {
            v75 = (_WORD *)*((_QWORD *)a4 + 1);
            if ( *((int *)a4 + 1) >= 0 )
              *v75 = 0;
            else
              *(_BYTE *)v75 = 0;
            goto LABEL_191;
          }
          v70 = *((_DWORD *)a4 + 1);
          if ( v70 >= 0 )
          {
            v205[0] = 0LL;
            v205[1] = 0LL;
            v74 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (struct tagWND *)((char *)a1 + 184),
                    (struct _LARGE_UNICODE_STRING *)v205);
            v72 = TextCopy(v74, *((_QWORD *)a4 + 1), (unsigned int)a3);
            *(_DWORD *)a4 = 2 * v72;
          }
          else
          {
            v72 = WCSToMBEx(0LL, *((_QWORD *)a1 + 23), (unsigned int)v9 >> 1, a4 + 2, (v70 & 0x7FFFFFFFu) - 1);
            *(_BYTE *)(v72 + *((_QWORD *)a4 + 1)) = 0;
            *(_DWORD *)a4 = v72;
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v184, v71, v73);
          return v72;
        }
        else
        {
          v37 = DefSetText(a1, (unsigned int *)a4);
          v40 = v37;
          if ( v37 )
          {
            xxxRedrawTitle(a1, 8u);
            xxxWindowEvent(0x800Cu, a1, 0LL, 0, 0);
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v184, v38, v39);
          return v40;
        }
      }
      if ( a2 == 16 )
      {
        xxxDestroyWindow((__int64 *)a1);
        goto LABEL_13;
      }
      if ( a2 == 17 || a2 == 19 )
        goto LABEL_252;
      if ( a2 != 20 )
        goto LABEL_13;
      goto LABEL_84;
    }
    if ( !(_WORD)a4 )
      goto LABEL_13;
    v8 = *((_QWORD *)a1 + 5);
    v76 = *(_BYTE *)(v8 + 31);
    if ( (((v76 & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)a1 + 15) )
      goto LABEL_13;
    if ( a3 )
    {
      v77 = v76 & 0x10;
    }
    else
    {
      v77 = v76 & 0x10;
      if ( v77 )
        goto LABEL_211;
    }
    if ( !a3 || v77 || (*(_BYTE *)(v8 + 17) & 0x40) == 0 )
      goto LABEL_13;
LABEL_211:
    SetOrClrWF(0, (__int64)a1, 0x140u, 1);
    if ( !a3 )
      SetOrClrWF(1, (__int64)a1, 0x140u, 1);
    xxxShowWindow(a1);
    goto LABEL_13;
  }
  if ( a2 > 0x55 )
  {
    v11 = a2 - 123;
    if ( v11 )
    {
      v12 = v11 - 4;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 2;
            if ( !v15 )
            {
              xxxCalcClientRect((__int64)a1, (__int128 *)a4, 0LL);
              goto LABEL_13;
            }
            v30 = v15 - 1;
            if ( v30 )
            {
              v31 = v30 - 1;
              if ( !v31 )
              {
                SetOrClrWF(1, (__int64)a1, 0x180u, 1);
                v32 = (HDC)_GetDCEx(a1, a3, 328833LL);
                v33 = 0;
                if ( v32 )
                {
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
                    v33 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == gpqForeground;
                  xxxDrawWindowFrame(a1, v32, v33);
                  _ReleaseDC(v32);
                }
                SetOrClrWF(0, (__int64)a1, 0x180u, 1);
                goto LABEL_13;
              }
              v42 = v31 - 1;
              if ( v42 )
              {
                if ( v42 == 2 )
                {
                  SetOrClrWF(0, (__int64)a1, 0x280u, 1);
                  xxxInternalDoSyncPaint((__int64)a1, a3, v43);
                }
                goto LABEL_13;
              }
              xxxDWP_DoNCActivate(a1);
              goto LABEL_63;
            }
            v56 = FindNCHit(a1, (unsigned int)a4);
LABEL_125:
            v41 = v56;
            goto LABEL_64;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0x30) != 0 )
          {
            v41 = 0LL;
            if ( !InitPwSB((__int64)a1) )
              goto LABEL_64;
          }
          if ( a4 )
          {
            v25 = a4 + 20;
            if ( !*((_QWORD *)a1 + 3) || a4 == (HICON)-80LL || (v26 = (_BYTE *)*((_QWORD *)a4 + 11)) == 0LL )
            {
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
LABEL_63:
              v41 = 1LL;
LABEL_64:
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v184, v8, v9);
              return v41;
            }
            v27 = *((unsigned int *)a4 + 21);
            if ( (int)v27 < 0 )
            {
              if ( *(_DWORD *)v25 && *v26 == 0xFF )
                goto LABEL_40;
            }
            else if ( *(_DWORD *)v25 >= 2u && *(_WORD *)v26 == 0xFFFF )
            {
LABEL_40:
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v184, v27, v9);
              return 1LL;
            }
          }
          SetOrClrWF(1, (__int64)a1, 0x202u, 1);
          TitleBarInfo = DefSetText(a1, (unsigned int *)a4 + 20);
          goto LABEL_44;
        }
        Icon = (__int64)xxxDWP_SetIcon(a1, a3, a4, v10);
      }
      else
      {
        Icon = DWP_GetIcon(a1, (unsigned int)a3);
      }
      goto LABEL_77;
    }
    v108 = FindNCHit(a1, (unsigned int)a4);
    if ( (unsigned int)(v108 - 6) <= 1 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL), (__int64)a1) )
        xxxDoScrollMenu(a1, 0LL, v108 - 6);
      goto LABEL_13;
    }
    v8 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v8 + 31) & 0xC0) == 0x40 )
    {
      v109 = *((_QWORD *)a1 + 13);
      v110 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v185 = *(_QWORD *)(v110 + 408);
      *(_QWORD *)(v110 + 408) = &v185;
      v186 = v109;
      HMLockObject(v109);
      v111 = *(_QWORD *)a1;
      v112 = 123;
LABEL_420:
      xxxSendTransformableMessage(*((__int64 **)a1 + 13), v112, v111, (struct _LARGE_STRING *)a4, 1);
      goto LABEL_113;
    }
    if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL) )
      goto LABEL_13;
    if ( v108 != 2 )
    {
      if ( v108 != 3 )
      {
        if ( a4 == (HICON)-1LL && (*(_BYTE *)(v8 + 21) & 2) == 0 )
          xxxSimulateShiftF10();
        goto LABEL_13;
      }
      goto LABEL_262;
    }
LABEL_428:
    v113 = (*(_BYTE *)(v8 + 31) & 0x21) != 0 ? 61728 : 61488;
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
      v22 = a2 - 53;
      if ( !v22 )
      {
        v29 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
        goto LABEL_45;
      }
      v23 = v22 - 6;
      if ( !v23 )
      {
        v56 = xxxClientShutdown(a1, a3);
        goto LABEL_125;
      }
      v24 = v23 - 11;
      if ( !v24 )
      {
        if ( ((_DWORD)a4[8] & 0x100001) == 0 )
          xxxAdjustSize(a1);
        goto LABEL_13;
      }
      v47 = v24 - 1;
      if ( !v47 )
      {
        xxxHandleWindowPosChanged((ULONG_PTR)a1);
        goto LABEL_13;
      }
      if ( v47 == 2 )
      {
        Icon = SfnCOPYGLOBALDATA(0LL, 0LL, a3, a4, 0LL, 0LL, 0, 0LL);
LABEL_77:
        v21 = Icon;
        goto LABEL_23;
      }
LABEL_13:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v184, v8, v9);
      return 0LL;
    }
    v84 = a2 - 79;
    if ( v84 )
    {
      v85 = v84 - 1;
      if ( v85 )
      {
        v86 = v85 - 1;
        if ( v86 )
        {
          if ( v86 != 2 )
            goto LABEL_13;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
            v87 = (__int64 *)*((_QWORD *)a1 + 13);
          else
            v87 = (__int64 *)*((_QWORD *)a1 + 15);
          if ( v87 && v87 != (__int64 *)GetThreadDesktopWindow(0LL) )
          {
            v88 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v189 = *(_QWORD *)(v88 + 408);
            *(_QWORD *)(v88 + 408) = &v189;
            v190 = (ULONG_PTR)v87;
            HMLockObject(v87);
            v89 = xxxSendTransformableMessage(v87, 0x53u, a3, (struct _LARGE_STRING *)a4, 1);
LABEL_442:
            v21 = v89;
            ThreadUnlock1(v91, v90, v92);
            goto LABEL_23;
          }
        }
        else
        {
          v195 = 0LL;
          v196 = 0LL;
          v197 = 0LL;
          v93 = BuildHwndList(*((struct tagWND **)a1 + 14));
          v94 = (struct tagBWL *)v93;
          if ( v93 )
          {
            v95 = (unsigned __int64 *)(v93 + 32);
            v96 = *(_QWORD *)(v93 + 32);
            if ( v96 != 1 )
            {
              do
              {
                LOBYTE(v8) = 1;
                v181 = (struct tagPROCESSINFO *)HMValidateHandleNoSecure(v96, v8, v9);
                if ( v181 )
                {
                  v97 = W32GetThreadWin32Thread(KeGetCurrentThread());
                  v195 = *(_QWORD *)(v97 + 408);
                  *(_QWORD *)(v97 + 408) = &v195;
                  v196 = v181;
                  HMLockObject(v181);
                  xxxSendMessage((ULONG_PTR)v181);
                  ThreadUnlock1(v99, v98, v100);
                }
                v96 = *++v95;
              }
              while ( *v95 != 1 );
            }
            FreeHwndList(v94);
            goto LABEL_13;
          }
        }
        goto LABEL_191;
      }
      v101 = *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
      if ( !v101
        || v101 == a1
        || !tagCLS::RedirectedFieldatomClassName<unsigned short>::operator!=(
              *((_QWORD *)a1 + 17) + 24LL,
              (_WORD *)(gpsi + 904LL)) )
      {
        ProcessWindowStation = GetProcessWindowStation(0LL, v8);
        if ( !xxxActivateKeyboardLayout(ProcessWindowStation, a4, 256LL, a1) )
          UserSetLastError(1457LL, v8, v9, v106);
        goto LABEL_13;
      }
      v102 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v189 = *(_QWORD *)(v102 + 408);
      *(_QWORD *)(v102 + 408) = &v189;
      v190 = (ULONG_PTR)v101;
      HMLockObject(v101);
      v103 = (ULONG_PTR)v101;
LABEL_248:
      xxxSendMessage(v103);
LABEL_113:
      ThreadUnlock1(v51, v50, v52);
      goto LABEL_13;
    }
    if ( !ValidateHwnd(a3) )
      goto LABEL_191;
LABEL_252:
    v21 = 1LL;
    goto LABEL_23;
  }
  if ( a4 != (HICON)3 )
    goto LABEL_13;
  v107 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v184, v8, v9);
  return 2LL - ((v107 & 0x20) != 0);
}
