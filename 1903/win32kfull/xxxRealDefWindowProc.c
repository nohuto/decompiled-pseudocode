/*
 * XREFs of xxxRealDefWindowProc @ 0x1C0060288
 * Callers:
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C0060110 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x1C00B3E60 (xxxDefWindowProc.c)
 * Callees:
 *     xxxDWP_ProcessVirtKey @ 0x1C000AC00 (xxxDWP_ProcessVirtKey.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C000C370 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     xxxGetSysMenu @ 0x1C000C4CC (xxxGetSysMenu.c)
 *     xxxDWP_DoNCActivate @ 0x1C000C8BC (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C000CB10 (xxxDrawCaptionBar.c)
 *     xxxInternalGetMessage @ 0x1C000E4C4 (xxxInternalGetMessage.c)
 *     ?xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z @ 0x1C001152C (-xxxForceForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@W4SetForegroundBehaviors@@@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0013B80 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     PostIAMShellHookMessageEx @ 0x1C0015240 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     xxxRedrawTitle @ 0x1C0017BF0 (xxxRedrawTitle.c)
 *     PostShellHookMessages @ 0x1C0017CBC (PostShellHookMessages.c)
 *     PostShellHookMessagesEx @ 0x1C0017CD4 (PostShellHookMessagesEx.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxReleaseCapture @ 0x1C001C460 (xxxReleaseCapture.c)
 *     xxxSendNotifyMessage @ 0x1C001CE70 (xxxSendNotifyMessage.c)
 *     xxxSetCapture @ 0x1C001D4EC (xxxSetCapture.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C0020520 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C0020584 (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C002062C (TextCopy.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     DefSetText @ 0x1C0022B3C (DefSetText.c)
 *     _IsDescendant @ 0x1C00247A4 (_IsDescendant.c)
 *     xxxDrawWindowFrame @ 0x1C0028040 (xxxDrawWindowFrame.c)
 *     xxxShowWindow @ 0x1C002CA38 (xxxShowWindow.c)
 *     GreSetTextColor @ 0x1C002D630 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C002D740 (GreSetBkColor.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C002E54C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0060CE8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetMouseKeyFlags @ 0x1C0083C88 (GetMouseKeyFlags.c)
 *     xxxGetTitleBarInfoEx @ 0x1C008616C (xxxGetTitleBarInfoEx.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C0087D64 (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C0087ED0 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00880CC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0088D5C (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C008A4E0 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C008AB44 (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     GetNonChildAncestor @ 0x1C008C668 (GetNonChildAncestor.c)
 *     _SetMenuDefaultItem @ 0x1C008F994 (_SetMenuDefaultItem.c)
 *     xxxDWP_UpdateUIState @ 0x1C00915B4 (xxxDWP_UpdateUIState.c)
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     xxxCalcClientRect @ 0x1C0092864 (xxxCalcClientRect.c)
 *     DWP_SetHotKey @ 0x1C0094294 (DWP_SetHotKey.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     ??9?$RedirectedFieldatomClassName@G@tagCLS@@QEBAEAEBG@Z @ 0x1C00959C8 (--9-$RedirectedFieldatomClassName@G@tagCLS@@QEBAEAEBG@Z.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     _InitPwSB @ 0x1C00AA8C4 (_InitPwSB.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     xxxInternalDoSyncPaint @ 0x1C00AFE00 (xxxInternalDoSyncPaint.c)
 *     xxxLoadUserApiHook @ 0x1C00B4030 (xxxLoadUserApiHook.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B5D3C (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     ??9?$SharedPointerBase@G@@QEBAEH@Z @ 0x1C00BF09C (--9-$SharedPointerBase@G@@QEBAEH@Z.c)
 *     xxxSendTransformableMessage @ 0x1C00C3130 (xxxSendTransformableMessage.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C00C82C4 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     _GetTopLevelWindow @ 0x1C00C8D90 (_GetTopLevelWindow.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 *     BuildHwndList @ 0x1C00CC820 (BuildHwndList.c)
 *     FreeHwndList @ 0x1C00CC9E0 (FreeHwndList.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     _GetProcessWindowStation @ 0x1C00DD4C0 (_GetProcessWindowStation.c)
 *     WCSToMBEx @ 0x1C00F1CB0 (WCSToMBEx.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C00F8A94 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     MNClearCachedPopupSizes @ 0x1C00FC7E0 (MNClearCachedPopupSizes.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C01023E0 (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C0103F04 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     xxxAdjustSize @ 0x1C0109AFC (xxxAdjustSize.c)
 *     GetThreadDesktopWindow @ 0x1C010B1CC (GetThreadDesktopWindow.c)
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     IsInsideUserApiHook @ 0x1C011C0AC (IsInsideUserApiHook.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ @ 0x1C011EAB0 (--B-$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0123E8C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxDWP_EraseBkgnd @ 0x1C0124A68 (xxxDWP_EraseBkgnd.c)
 *     DWP_GetIcon @ 0x1C0124BD0 (DWP_GetIcon.c)
 *     xxxClientShutdown @ 0x1C0126ED4 (xxxClientShutdown.c)
 *     FindNCHit @ 0x1C012D5D8 (FindNCHit.c)
 *     xxxSendMinRectMessages @ 0x1C012E7D4 (xxxSendMinRectMessages.c)
 *     xxxHandleWindowPosChanged @ 0x1C0133EFC (xxxHandleWindowPosChanged.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C01373E0 (xxxDrawMenuBarUnderlines.c)
 *     xxxSysCommand @ 0x1C0137980 (xxxSysCommand.c)
 *     ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C013DEC0 (-DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z.c)
 *     ??9?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0140390 (--9-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ @ 0x1C0140A70 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ.c)
 *     xxxMessageBeep @ 0x1C015AAA0 (xxxMessageBeep.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01D6108 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     xxxSleepThread @ 0x1C01D70CC (xxxSleepThread.c)
 *     xxxSimulateShiftF10 @ 0x1C01DAFD0 (xxxSimulateShiftF10.c)
 *     _FreeTouchInputInfo @ 0x1C01DF6A0 (_FreeTouchInputInfo.c)
 *     SfnCOPYGLOBALDATA @ 0x1C02152C0 (SfnCOPYGLOBALDATA.c)
 *     InImmersiveApplicationBand @ 0x1C0240630 (InImmersiveApplicationBand.c)
 *     xxxDefPointerProc @ 0x1C024064C (xxxDefPointerProc.c)
 *     DWP_GetHotKey @ 0x1C02408DC (DWP_GetHotKey.c)
 *     xxxDoScrollMenu @ 0x1C0242160 (xxxDoScrollMenu.c)
 *     xxxSendHelpMessage @ 0x1C024888C (xxxSendHelpMessage.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 *     GetContextHelpId @ 0x1C025CEF8 (GetContextHelpId.c)
 */

__int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, unsigned int a2, HWND a3, unsigned __int64 a4)
{
  unsigned __int64 v8; // rdx
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
  _DWORD *v25; // rax
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
  __int64 v40; // r9
  __int64 v41; // rsi
  __int64 v42; // rdi
  unsigned int v43; // esi
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
  ULONG v66; // ecx
  ULONG v67; // ecx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  int v69; // eax
  __int64 v70; // rdx
  int v71; // esi
  __int64 v72; // r8
  __int64 v73; // r9
  struct _LARGE_UNICODE_STRING *v74; // rax
  _WORD *v75; // rax
  char v76; // cl
  char v77; // cl
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  int ContextHelpId; // eax
  unsigned int v84; // esi
  unsigned int v85; // esi
  unsigned int v86; // esi
  __int64 v87; // rbx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  __int64 v93; // rax
  __int64 v94; // r14
  _QWORD *v95; // rsi
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // r8
  struct tagWND *v101; // rbx
  __int64 v102; // rax
  __int64 v103; // r8
  __int64 v104; // rdx
  struct tagWND *v105; // rcx
  __int64 v106; // rcx
  __int64 ProcessWindowStation; // rax
  char v108; // bl
  int v109; // esi
  __int64 v110; // rbx
  __int64 v111; // rax
  __int64 v112; // r8
  int v113; // edx
  unsigned int v114; // ebx
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax
  int v117; // r9d
  int v118; // edx
  int v119; // r8d
  int v120; // ecx
  __int64 v121; // rax
  __int16 v122; // bx
  int NCHit; // ecx
  unsigned int v124; // esi
  int v125; // ecx
  int v126; // r9d
  unsigned int v127; // esi
  const struct tagWND *v128; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rsi
  __int64 v130; // rbx
  __int64 v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // r8
  __int64 v135; // r8
  int v136; // edx
  __int64 NonChildAncestor; // rbx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // r8
  unsigned int v141; // esi
  unsigned int v142; // esi
  unsigned int v143; // esi
  int v144; // eax
  int v145; // eax
  __int64 v146; // rbx
  __int64 v147; // rax
  __int64 v148; // rdx
  __int64 v149; // rcx
  __int64 v150; // r8
  __int64 v151; // rbx
  __int64 v152; // rax
  __int64 v153; // rdx
  __int64 v154; // r8
  __int64 v155; // rbx
  struct tagPROCESSINFO *v156; // rax
  int v157; // esi
  unsigned __int8 v158; // al
  __int64 v159; // rcx
  __int16 v160; // ax
  __int64 v161; // rbx
  __int64 v162; // rax
  __int64 v163; // rdx
  __int64 v164; // rdi
  unsigned int v165; // ebx
  __int64 v166; // rcx
  unsigned __int16 v167; // ax
  __int64 v168; // rbx
  int v169; // eax
  unsigned __int16 v170; // bx
  unsigned int v171; // ebx
  __int64 v172; // rbx
  __int64 v173; // rax
  __int64 SysMenu; // rax
  __int64 v175; // rax
  __int64 v176; // rax
  __int64 v177; // rbx
  __int64 v178; // rax
  __int64 v179; // rbx
  __int64 ThreadWin32Thread; // rax
  int v181; // ebx
  __int64 v182; // rcx
  __int64 v183; // rcx
  struct tagPROCESSINFO *v184; // [rsp+40h] [rbp-178h]
  ULONG BytesInMultiByteString[2]; // [rsp+48h] [rbp-170h] BYREF
  unsigned __int64 v186; // [rsp+50h] [rbp-168h] BYREF
  _QWORD v187[3]; // [rsp+58h] [rbp-160h] BYREF
  __int64 v188; // [rsp+70h] [rbp-148h] BYREF
  __int64 v189; // [rsp+78h] [rbp-140h]
  __int64 v190; // [rsp+80h] [rbp-138h]
  struct tagWND *v191; // [rsp+88h] [rbp-130h] BYREF
  __int64 v192; // [rsp+90h] [rbp-128h] BYREF
  __int64 v193; // [rsp+98h] [rbp-120h]
  __int64 v194; // [rsp+A0h] [rbp-118h]
  __int64 v195; // [rsp+A8h] [rbp-110h] BYREF
  struct tagWND *v196; // [rsp+B0h] [rbp-108h]
  __int64 v197; // [rsp+B8h] [rbp-100h]
  __int64 v198; // [rsp+C0h] [rbp-F8h] BYREF
  struct tagPROCESSINFO *v199; // [rsp+C8h] [rbp-F0h]
  __int64 v200; // [rsp+D0h] [rbp-E8h]
  __int64 v201; // [rsp+D8h] [rbp-E0h] BYREF
  __int64 v202; // [rsp+E0h] [rbp-D8h]
  __int64 v203; // [rsp+E8h] [rbp-D0h]
  __int64 v204; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v205; // [rsp+F8h] [rbp-C0h]
  __int64 v206; // [rsp+100h] [rbp-B8h]
  _QWORD v207[2]; // [rsp+108h] [rbp-B0h] BYREF
  _QWORD v208[3]; // [rsp+118h] [rbp-A0h] BYREF
  _DWORD v209[12]; // [rsp+130h] [rbp-88h] BYREF
  int v210; // [rsp+160h] [rbp-58h] BYREF
  __int128 v211; // [rsp+164h] [rbp-54h] BYREF

  v191 = a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v187);
  v188 = 0LL;
  v189 = 0LL;
  v190 = 0LL;
  v192 = 0LL;
  v193 = 0LL;
  v194 = 0LL;
  if ( a1 == (struct tagWND *)-1LL )
    goto LABEL_13;
  if ( a2 > 0x400 )
  {
    v42 = 0LL;
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
                    && !xxxSetForegroundWindowWithOptions((__int64)a1, 2u, 0, 0) )
                  {
                    goto LABEL_13;
                  }
                  v204 = 0LL;
                  v205 = 0LL;
                  v206 = 0LL;
                  v8 = *((_QWORD *)a1 + 5);
                  goto LABEL_429;
                }
              }
            }
            updated = xxxDefPointerProc(a1, a2, a3, 0LL);
LABEL_74:
            v29 = updated;
            goto LABEL_45;
          }
          TitleBarInfo = xxxDWPPrint(a1, (HDC)a3, a4);
        }
        else
        {
          v53 = a2 - 793;
          if ( !v53 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            {
              if ( a1 != (struct tagWND *)GetDesktopWindow(a1)
                && (((*(_DWORD *)(gptiCurrent + 672LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x800) == 0
                 || !(unsigned int)xxxCallHook(12, (unsigned __int64)a3, a4, 10)) )
              {
                v181 = (*(_DWORD *)(gptiCurrent + 1224LL) >> 11) & 1;
                v191 = *(struct tagWND **)(gptiCurrent + 1240LL);
                if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) != 0
                  && *(struct tagWND **)(gptiCurrent + 1392LL) == a1
                  || (unsigned int)CoreWindowProp::IsComponent(a1) )
                {
                  v182 = *(_QWORD *)(gptiCurrent + 504LL);
                  if ( v182 )
                  {
                    v183 = *(_QWORD *)(v182 + 32);
                    if ( v183 )
                    {
                      if ( (*(_DWORD *)(v183 + 1224) & 0x800) != 0 )
                      {
                        v181 = 1;
                        v191 = *(struct tagWND **)(v183 + 1240);
                      }
                    }
                  }
                }
                PostShellHookMessagesEx(
                  0xCu,
                  a4,
                  (struct tagINPUT_MESSAGE_SOURCE *)((unsigned __int64)&v191 & -(__int64)(v181 != 0)));
              }
              goto LABEL_13;
            }
            v179 = *((_QWORD *)a1 + 13);
            ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
            v188 = *(_QWORD *)(ThreadWin32Thread + 408);
            *(_QWORD *)(ThreadWin32Thread + 408) = &v188;
            v189 = v179;
            HMLockObject(v179);
            v153 = 793LL;
            goto LABEL_442;
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
                  xxxSetFocus(a1, v8, v9);
              }
              goto LABEL_13;
            }
            TitleBarInfo = xxxGetTitleBarInfoEx(a1, (struct tagTITLEBARINFO *)a4);
          }
          else
          {
            if ( !(unsigned int)IsInsideUserApiHook() || (*(_DWORD *)(gptiCurrent + 480LL) & 1) != 0 )
              goto LABEL_13;
            TitleBarInfo = xxxLoadUserApiHook();
          }
        }
LABEL_44:
        v29 = TitleBarInfo;
LABEL_45:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v187, v8, v9, v10);
        return v29;
      }
      if ( a2 == 576 )
      {
        if ( *(_QWORD *)(gptiCurrent + 1064LL) == a4 )
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
          v171 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL);
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v187, 524LL, v9, v10);
          return ((unsigned __int64)v171 >> 4) & 1;
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
              || (v169 = *(_DWORD *)(gpsi + 4648LL), v169 != *(_DWORD *)(gpsi + 4568LL))
              || v169 == *(_DWORD *)(gpsi + 4588LL) )
            {
              GreSetBkColor((HDC)a3, *(_DWORD *)(gpsi + 4648LL));
              GreSetTextColor((HDC)a3, *(_DWORD *)(gpsi + 4628LL));
              v21 = *(_QWORD *)(gpsi + 4944LL);
              goto LABEL_23;
            }
            v163 = 4648LL;
            v164 = 4856LL;
            goto LABEL_406;
          case 0x138u:
            goto LABEL_399;
          case 0x205u:
            v166 = *((_QWORD *)a1 + 5);
            v167 = *(_WORD *)(v166 + 108) + WORD1(a4);
            if ( (*(_BYTE *)(v166 + 26) & 0x40) != 0 )
              v126 = (unsigned __int16)(*(_WORD *)(v166 + 112) - a4) | (v167 << 16);
            else
              v126 = (unsigned __int16)(a4 + *(_WORD *)(v166 + 104)) | (v167 << 16);
LABEL_397:
            v135 = *(_QWORD *)a1;
            v136 = 123;
            goto LABEL_398;
        }
        if ( a2 != 522 )
          goto LABEL_13;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
        goto LABEL_13;
      v172 = *((_QWORD *)a1 + 13);
      v173 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v188 = *(_QWORD *)(v173 + 408);
      *(_QWORD *)(v173 + 408) = &v188;
      v189 = v172;
      HMLockObject(v172);
      LODWORD(v112) = (_DWORD)a3;
      v113 = a2;
      goto LABEL_421;
    }
    if ( a2 == 310 )
      goto LABEL_399;
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
        v141 = a2 - 281;
        if ( v141 )
        {
          v142 = v141 - 1;
          if ( v142 )
          {
            v143 = v142 - 2;
            if ( !v143 )
              goto LABEL_191;
            if ( v143 != 11 )
              goto LABEL_13;
            v10 = (unsigned __int16)a3;
            v8 = (unsigned __int64)a3 >> 16;
            v186 = (unsigned __int64)a3 >> 16;
            v42 = 0LL;
            if ( (WORD1(a3) & 0xFFF8) != 0 || (unsigned __int16)a3 > 3u || a4 )
              goto LABEL_13;
            if ( (_WORD)a3 == 3 )
            {
              v8 = 0LL;
              v186 = 0LL;
              v9 = gpsi;
              if ( (*gpsi & 0x80u) != 0 || (v144 = *(_DWORD *)(gpsi + 7004LL), (v144 & 0x20) != 0) || v144 >= 0 )
              {
LABEL_354:
                if ( (_WORD)v8 )
                {
                  if ( (v8 & 1) != 0 )
                    v9 = ((_WORD)v10 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 7);
                  else
                    v9 = 0LL;
                  if ( (v8 & 2) != 0 )
                    v9 = ((_WORD)v10 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 6) & 1 | (unsigned int)v9;
                  if ( (v8 & 4) != 0 )
                    v9 = ((_WORD)v10 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 2) & 1 | (unsigned int)v9;
                  if ( !(_DWORD)v9 )
                    goto LABEL_13;
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                  {
                    v146 = *((_QWORD *)a1 + 13);
                    v147 = W32GetThreadWin32Thread(KeGetCurrentThread());
                    v188 = *(_QWORD *)(v147 + 408);
                    *(_QWORD *)(v147 + 408) = &v188;
                    v189 = v146;
                    HMLockObject(v146);
                    v42 = xxxSendMessage(*((_QWORD *)a1 + 13), 295LL, a3, 0LL);
                    ThreadUnlock1(v149, v148, v150);
                  }
                  else
                  {
                    v42 = xxxSendMessage(a1, 296LL, a3, 0LL);
                  }
                }
                goto LABEL_64;
              }
              if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
              {
                v10 = (unsigned __int16)(((*gpsi & 0x40) != 0) + 1);
                v8 = 3LL;
                a3 = (HWND)(v10 | 0x30000);
                goto LABEL_354;
              }
LABEL_357:
              v10 = (unsigned __int16)a3;
              v8 = v186;
              goto LABEL_354;
            }
            if ( (*gpsi & 0x80u) == 0 )
            {
              v145 = *(_DWORD *)(gpsi + 7004LL);
              if ( (v145 & 0x20) == 0 && v145 < 0 )
              {
                if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
                  goto LABEL_357;
                v8 = v186;
                v10 = (unsigned __int16)a3;
              }
            }
            LOWORD(v8) = v8 & 0xFFFC;
            goto LABEL_354;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_191;
          v151 = *((_QWORD *)a1 + 13);
          v152 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v188 = *(_QWORD *)(v152 + 408);
          *(_QWORD *)(v152 + 408) = &v188;
          v189 = v151;
          HMLockObject(v151);
          v153 = 282LL;
        }
        else
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_191;
          v154 = *((_QWORD *)a1 + 13);
          v155 = *(_QWORD *)(*(_QWORD *)(v154 + 16) + 416LL);
          v156 = *(struct tagPROCESSINFO **)(gptiCurrent + 416LL);
          *(_QWORD *)BytesInMultiByteString = v156;
          if ( (struct tagPROCESSINFO *)v155 != v156 )
          {
            v157 = IsMessageAllowedAcrossILByReceiver(
                     v156,
                     (struct tagPROCESSINFO *)v155,
                     (struct tagWND *)v154,
                     0x119u,
                     (unsigned __int64)a3,
                     a4,
                     1);
            if ( !v157 )
            {
              v157 = IsMessageAlwaysAllowedAcrossIL(0x119u);
              if ( v157 )
                MSGSQMAddMessage(
                  *(struct tagPROCESSINFO **)BytesInMultiByteString,
                  (struct tagPROCESSINFO *)v155,
                  a4,
                  1,
                  2);
            }
            if ( !v157 )
            {
              v186 = *(_QWORD *)v155 == gpepCSRSS ? 0x2000LL : *(_QWORD *)(v155 + 872);
              v158 = CheckAccess(*(_QWORD *)BytesInMultiByteString + 872LL, &v186);
              v157 = v158;
              if ( v158 )
              {
                if ( (unsigned __int8)Enforced(v159) )
                  v160 = 5;
                else
                  v160 = 1;
                MSGSQMAddMessage(
                  *(struct tagPROCESSINFO **)BytesInMultiByteString,
                  (struct tagPROCESSINFO *)v155,
                  a4,
                  1,
                  v160);
              }
            }
            if ( !v157 )
            {
              EtwTraceUIPIMsgError(*(_QWORD *)BytesInMultiByteString, v155, 281LL, a3, a4);
              UserSetLastError(5LL);
              MSGSQMAddMessage(
                *(struct tagPROCESSINFO **)BytesInMultiByteString,
                (struct tagPROCESSINFO *)v155,
                a4,
                1,
                0);
              goto LABEL_191;
            }
          }
          v161 = *((_QWORD *)a1 + 13);
          v162 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v188 = *(_QWORD *)(v162 + 408);
          *(_QWORD *)(v162 + 408) = &v188;
          v189 = v161;
          HMLockObject(v161);
          v153 = 281LL;
        }
LABEL_442:
        v89 = xxxSendMessage(*((_QWORD *)a1 + 13), v153, a3, a4);
        goto LABEL_443;
      }
      if ( a2 == 297 )
      {
        v165 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v187, v8, v9, v10);
        return ((v165 & 0x40 | ((unsigned __int64)v165 >> 2)) >> 5) | v165 & 4;
      }
      if ( a2 != 306 )
      {
        if ( a2 <= 0x132 )
          goto LABEL_13;
        if ( a2 > 0x134 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
        {
          v163 = 4628LL;
          v164 = 4816LL;
LABEL_406:
          v168 = 4640LL;
          goto LABEL_407;
        }
LABEL_401:
        v163 = 4588LL;
        v168 = 4600LL;
        v164 = 4736LL;
        goto LABEL_407;
      }
LABEL_399:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
      {
        v163 = 4628LL;
        v168 = 4600LL;
        v164 = 4816LL;
LABEL_407:
        GreSetBkColor((HDC)a3, *(_DWORD *)(gpsi + v163));
        GreSetTextColor((HDC)a3, *(_DWORD *)(gpsi + v168));
        v21 = *(_QWORD *)(v164 + gpsi);
        goto LABEL_23;
      }
      goto LABEL_401;
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
        memset(v209, 0, sizeof(v209));
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
        while ( !(unsigned int)xxxInternalGetMessage((int)v209, 0, 512, 526, 1, 0) || v209[2] != 517 )
        {
          if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 112LL)
            || !(unsigned int)xxxSleepThread(6LL, 0LL, 1LL, 0LL) )
          {
            goto LABEL_13;
          }
        }
        xxxReleaseCapture();
        v124 = LOWORD(v209[9]) | (LOWORD(v209[10]) << 16);
        v125 = FindNCHit(a1, v124);
        if ( ((v125 - 2) & 0xFFFFFFFA) != 0 )
          goto LABEL_13;
        v8 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v8 + 234) & 0x20) != 0 )
        {
          if ( v125 == 2 )
            goto LABEL_429;
          if ( v125 == 3 )
          {
LABEL_262:
            v114 = 61536;
LABEL_430:
            SysMenu = xxxGetSysMenu(a1, 1);
            v187[2] = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=(v187, SysMenu);
            if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator!=(v187, 0LL) )
              goto LABEL_13;
            if ( (unsigned int)IsInsideUserApiHook() )
            {
              v175 = SmartObjStackRef<tagMENU>::operator tagMENU *(v187);
              MNClearCachedPopupSizes(v175);
            }
            v176 = SmartObjStackRef<tagMENU>::operator tagMENU *(v187);
            SetMenuDefaultItem(v176, v114, 0LL);
            PostShellHookMessages(9uLL, *(_QWORD *)a1);
            v177 = SmartObjStackRef<tagMENU>::operator unsigned __int64(v187);
            v178 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v204 = *(_QWORD *)(v178 + 408);
            *(_QWORD *)(v178 + 408) = &v204;
            v205 = v177;
            HMLockObject(v177);
            if ( a4 == 0xFFFFFFFF )
            {
              v51 = gpsi;
              if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
              {
                v211 = 0LL;
                v210 = 20;
                if ( (unsigned int)xxxSendMinRectMessages(a1, &v211) )
                  xxxTrackPopupMenuEx(v187, 576LL, (unsigned int)v211, DWORD1(v211), a1, &v210);
              }
            }
            else
            {
              xxxTrackPopupMenuEx(v187, 514LL, (unsigned int)(__int16)a4, (unsigned int)SWORD1(a4), a1, 0LL);
            }
            goto LABEL_113;
          }
        }
        v126 = v124;
        goto LABEL_397;
      }
      if ( a2 != 172 )
      {
        if ( a2 == 174 )
        {
          DCEx = (HDC)_GetDCEx(a1, 0LL, 65537LL);
          xxxDrawCaptionBar(a1, DCEx, (int)a3);
          _ReleaseDC(DCEx);
          goto LABEL_13;
        }
        if ( a2 == 175 )
        {
          xxxDrawWindowFrame(a1, (HDC)a3, a4);
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
          v117 = a4;
          v118 = 256;
          v119 = 27;
          v120 = TopLevelWindow;
          goto LABEL_302;
        }
        if ( a3 != (HWND)121 )
          goto LABEL_13;
        v121 = *(_QWORD *)(gptiCurrent + 424LL);
        goto LABEL_332;
      }
      v8 = 524LL;
LABEL_275:
      v122 = 0;
      if ( WORD1(a3) == 1 )
      {
        v122 = 1;
      }
      else if ( WORD1(a3) == 2 )
      {
        v122 = 2;
        goto LABEL_411;
      }
      if ( !v122 )
        goto LABEL_13;
LABEL_411:
      v170 = v122 | 0x8000;
      if ( a2 != 524 )
        LOWORD(a3) = GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 424LL));
      xxxSendMessage(a1, 793LL, *(_QWORD *)a1, (unsigned __int16)a3 | ((unsigned __int64)v170 << 16));
      goto LABEL_13;
    }
    v61 = a2 - 260;
    if ( !v61 )
    {
      v63 = a4 >> 16;
      if ( (v63 & 0x2000) != 0 )
      {
        if ( (v63 & 0x4000) == 0 )
        {
          v64 = *(_QWORD *)(gptiCurrent + 424LL);
          if ( a3 != (HWND)18 || (v65 = *(_DWORD *)(v64 + 396), (v65 & 8) != 0) )
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
      if ( a3 != (HWND)121 )
        goto LABEL_13;
      v121 = *(_QWORD *)(gptiCurrent + 424LL);
LABEL_332:
      *(_DWORD *)(v121 + 396) |= 0x10u;
      if ( (GetKeyState(16LL) & 0x8000u) == 0LL || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
        goto LABEL_13;
      v126 = -1;
      goto LABEL_397;
    }
    v62 = v61 - 1;
    if ( !v62 )
    {
LABEL_91:
      if ( a3 == (HWND)18
        && (v59 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL), (v59 & 0x80u) == 0)
        && (v59 & 0xC) == 8
        || a3 == (HWND)121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) & 0x10) != 0 )
      {
        NonChildAncestor = GetNonChildAncestor(a1);
        if ( gspwndFullScreen != NonChildAncestor )
        {
          v192 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v192;
          v193 = NonChildAncestor;
          if ( NonChildAncestor )
            HMLockObject(NonChildAncestor);
          if ( a3 == (HWND)121 )
            xxxDrawMenuBarUnderlines(a1, 1LL);
          xxxSendTransformableMessage(NonChildAncestor, 274, 61696, 0, 0);
          ThreadUnlock1(v139, v138, v140);
        }
      }
      if ( a3 == (HWND)18 )
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= ~0x80u;
        xxxDrawMenuBarUnderlines(a1, 0LL);
      }
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= 0xFFFFFFE3;
      goto LABEL_13;
    }
    v127 = v62 - 1;
    if ( v127 )
    {
      if ( v127 != 3 )
        goto LABEL_13;
      if ( a3 == (HWND)0xFFFF )
        goto LABEL_191;
      v117 = a4;
      v119 = (int)a3;
      v118 = 258;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= 0xFFFFFFF3;
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
          goto LABEL_320;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
        {
          v106 = *((_QWORD *)a1 + 13);
          v188 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v188;
          v189 = v106;
          HMLockObject(v106);
          v104 = 262LL;
          v103 = 32LL;
          v105 = (struct tagWND *)*((_QWORD *)a1 + 13);
          goto LABEL_248;
        }
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL) && (unsigned int)InImmersiveApplicationBand() )
        {
          PostIAMShellHookMessageEx(
            *(_QWORD *)(gptiCurrent + 448LL),
            0x21u,
            **(_QWORD **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL));
          goto LABEL_13;
        }
        v128 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL);
        if ( !v128 || !(unsigned int)IsCompositionInputWindow(v128) )
        {
LABEL_320:
          v126 = (int)a3;
          LODWORD(v135) = 61696;
          v136 = 274;
LABEL_398:
          xxxSendTransformableMessage((_DWORD)a1, v136, v135, v126, 0);
          goto LABEL_13;
        }
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL)
                                                                                                 + 128LL));
        if ( (unsigned int)CoreWindowProp::IsComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL)) )
          CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL));
        if ( !CompositionInputWindowUIOwner )
          goto LABEL_13;
        v130 = GetTopLevelWindow(CompositionInputWindowUIOwner);
        if ( !v130 )
          goto LABEL_13;
        v201 = 0LL;
        v202 = 0LL;
        v203 = 0LL;
        v131 = W32GetThreadWin32Thread(KeGetCurrentThread());
        v201 = *(_QWORD *)(v131 + 408);
        *(_QWORD *)(v131 + 408) = &v201;
        v202 = v130;
        HMLockObject(v130);
        xxxForceForegroundWindowNoRestoreFocus(v130, 0);
        if ( !ThreadUnlock1(v133, v132, v134) )
          goto LABEL_13;
        v117 = 32;
        v119 = 61696;
        v118 = 274;
        v120 = v130;
LABEL_302:
        PostMessage(v120, v118, v119, v117);
        goto LABEL_13;
      }
      v117 = 0;
      v119 = 61728;
      v118 = 274;
    }
    v120 = (int)a1;
    goto LABEL_302;
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
                v192 = *(_QWORD *)(v79 + 408);
                *(_QWORD *)(v79 + 408) = &v192;
                v193 = v78;
                HMLockObject(v78);
                v21 = xxxSendMessage(v78, 33LL, a3, a4);
                ThreadUnlock1(v81, v80, v82);
                if ( v21 )
                  goto LABEL_23;
              }
              if ( (_WORD)a4 != 2 || (Icon = 3LL, WORD1(a4) != 513) )
                Icon = 1LL;
              goto LABEL_77;
            }
            HotKey = xxxDWP_SetCursor(a1, a3, (__int16)a4, WORD1(a4));
LABEL_22:
            v21 = HotKey;
LABEL_23:
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v187, v8, v9, v10);
            return v21;
          }
          goto LABEL_401;
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
        HotKey = DWP_SetHotKey(a1);
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
            xxxSetFocus(a1, v8, v9);
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 0x40) == 0 )
            goto LABEL_13;
          v48 = *(struct tagWND **)(*((_QWORD *)a1 + 2) + 1400LL);
          if ( !v48 )
            goto LABEL_13;
          v195 = 0LL;
          v196 = 0LL;
          v197 = 0LL;
          v49 = W32GetThreadWin32Thread(KeGetCurrentThread());
          v195 = *(_QWORD *)(v49 + 408);
          *(_QWORD *)(v49 + 408) = &v195;
          v196 = v48;
          HMLockObject(v48);
          xxxSendNotifyMessage(v48, 0x349u, (unsigned __int64)a3, 0LL, 0);
          goto LABEL_113;
        }
        v35 = v34 - 5;
        if ( !v35 )
        {
          xxxDWP_SetRedraw(a1, a3 != 0LL);
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
            v66 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
            if ( v66 )
            {
              if ( a4 )
              {
                RtlUnicodeToMultiByteSize(BytesInMultiByteString, *((PCWCH *)a1 + 23), v66);
                v67 = BytesInMultiByteString[0];
              }
              else
              {
                v67 = v66 >> 1;
                BytesInMultiByteString[0] = v67;
              }
              v21 = v67;
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
          if ( (unsigned __int8)SharedPointerBase<unsigned short>::operator!=((char *)a1 + 184, 0LL) )
          {
            v207[0] = 0LL;
            v207[1] = 0LL;
            StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                        (struct tagWND *)((char *)a1 + 184),
                        (struct _LARGE_UNICODE_STRING *)v207);
            DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), (ULONG_PTR)StrName);
          }
          v9 = *(unsigned int *)(*((_QWORD *)a1 + 5) + 184LL);
          if ( !(_DWORD)v9 )
          {
            v75 = *(_WORD **)(a4 + 8);
            if ( *(int *)(a4 + 4) >= 0 )
              *v75 = 0;
            else
              *(_BYTE *)v75 = 0;
            goto LABEL_191;
          }
          v69 = *(_DWORD *)(a4 + 4);
          if ( v69 >= 0 )
          {
            v208[0] = 0LL;
            v208[1] = 0LL;
            v74 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                    (struct tagWND *)((char *)a1 + 184),
                    (struct _LARGE_UNICODE_STRING *)v208);
            v71 = TextCopy((__int64)v74, *(char **)(a4 + 8), (unsigned int)a3);
            *(_DWORD *)a4 = 2 * v71;
          }
          else
          {
            v71 = WCSToMBEx(0LL, *((_QWORD *)a1 + 23), (unsigned int)v9 >> 1, a4 + 8, (v69 & 0x7FFFFFFFu) - 1, 0);
            *(_BYTE *)(v71 + *(_QWORD *)(a4 + 8)) = 0;
            *(_DWORD *)a4 = v71;
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v187, v70, v72, v73);
          return v71;
        }
        else
        {
          v37 = DefSetText((__int64 *)a1, (unsigned int *)a4);
          v41 = v37;
          if ( v37 )
          {
            xxxRedrawTitle(a1, 8u);
            xxxWindowEvent(0x800Cu, 0);
          }
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v187, v38, v39, v40);
          return v41;
        }
      }
      if ( a2 == 16 )
      {
        xxxDestroyWindow(a1);
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
              xxxCalcClientRect(a1, a4, 0LL);
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
              v43 = v31 - 1;
              if ( v43 )
              {
                if ( v43 == 2 )
                {
                  SetOrClrWF(0, (__int64)a1, 0x280u, 1);
                  xxxInternalDoSyncPaint(a1, (unsigned int)a3);
                }
                goto LABEL_13;
              }
              xxxDWP_DoNCActivate(a1, (_WORD)a3 != 0, a4);
              goto LABEL_63;
            }
            v56 = FindNCHit(a1, (unsigned int)a4);
LABEL_125:
            v42 = v56;
            goto LABEL_64;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0x30) != 0 )
          {
            v42 = 0LL;
            if ( !InitPwSB(a1) )
              goto LABEL_64;
          }
          if ( a4 )
          {
            v25 = (_DWORD *)(a4 + 80);
            if ( !*((_QWORD *)a1 + 3) || a4 == -80LL || (v26 = *(_BYTE **)(a4 + 88)) == 0LL )
            {
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
LABEL_63:
              v42 = 1LL;
LABEL_64:
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v187, v8, v9, v10);
              return v42;
            }
            v27 = *(unsigned int *)(a4 + 84);
            if ( (int)v27 < 0 )
            {
              if ( *v25 && *v26 == 0xFF )
                goto LABEL_40;
            }
            else if ( *v25 >= 2u && *(_WORD *)v26 == 0xFFFF )
            {
LABEL_40:
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v187, v27, v9, v10);
              return 1LL;
            }
          }
          SetOrClrWF(1, (__int64)a1, 0x202u, 1);
          TitleBarInfo = DefSetText((__int64 *)a1, (unsigned int *)(a4 + 80));
          goto LABEL_44;
        }
        Icon = (__int64)xxxDWP_SetIcon(a1, (unsigned __int64)a3, (HICON)a4);
      }
      else
      {
        Icon = DWP_GetIcon(a1, (unsigned int)a3);
      }
      goto LABEL_77;
    }
    v109 = FindNCHit(a1, (unsigned int)a4);
    if ( (unsigned int)(v109 - 6) <= 1 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL), (__int64)a1) )
        xxxDoScrollMenu(a1, 0LL, v109 - 6);
      goto LABEL_13;
    }
    v8 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v8 + 31) & 0xC0) == 0x40 )
    {
      v110 = *((_QWORD *)a1 + 13);
      v111 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v188 = *(_QWORD *)(v111 + 408);
      *(_QWORD *)(v111 + 408) = &v188;
      v189 = v110;
      HMLockObject(v110);
      v112 = *(_QWORD *)a1;
      v113 = 123;
LABEL_421:
      xxxSendTransformableMessage(*((_QWORD *)a1 + 13), v113, v112, a4, 1);
      goto LABEL_113;
    }
    if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 128LL) )
      goto LABEL_13;
    if ( v109 != 2 )
    {
      if ( v109 != 3 )
      {
        if ( a4 == -1LL && (*(_BYTE *)(v8 + 21) & 2) == 0 )
          xxxSimulateShiftF10();
        goto LABEL_13;
      }
      goto LABEL_262;
    }
LABEL_429:
    v114 = (*(_BYTE *)(v8 + 31) & 0x21) != 0 ? 61728 : 61488;
    goto LABEL_430;
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
        if ( (*(_DWORD *)(a4 + 32) & 0x100001) == 0 )
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
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v187, v8, v9, v10);
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
            v87 = *((_QWORD *)a1 + 13);
          else
            v87 = *((_QWORD *)a1 + 15);
          if ( v87 && v87 != GetThreadDesktopWindow(0LL) )
          {
            v88 = W32GetThreadWin32Thread(KeGetCurrentThread());
            v192 = *(_QWORD *)(v88 + 408);
            *(_QWORD *)(v88 + 408) = &v192;
            v193 = v87;
            HMLockObject(v87);
            v89 = xxxSendTransformableMessage(v87, 83, (_DWORD)a3, a4, 1);
LABEL_443:
            v21 = v89;
            ThreadUnlock1(v91, v90, v92);
            goto LABEL_23;
          }
        }
        else
        {
          v198 = 0LL;
          v199 = 0LL;
          v200 = 0LL;
          v93 = BuildHwndList(*((struct tagWND **)a1 + 14));
          v94 = v93;
          if ( v93 )
          {
            v95 = (_QWORD *)(v93 + 32);
            v96 = *(_QWORD *)(v93 + 32);
            if ( v96 != 1 )
            {
              do
              {
                LOBYTE(v8) = 1;
                v184 = (struct tagPROCESSINFO *)HMValidateHandleNoSecure(v96, v8);
                if ( v184 )
                {
                  v97 = W32GetThreadWin32Thread(KeGetCurrentThread());
                  v198 = *(_QWORD *)(v97 + 408);
                  *(_QWORD *)(v97 + 408) = &v198;
                  v199 = v184;
                  HMLockObject(v184);
                  xxxSendMessage(v184, 81LL, a3, a4);
                  ThreadUnlock1(v99, v98, v100);
                }
                v96 = *++v95;
              }
              while ( *v95 != 1LL );
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
        || !(unsigned __int8)tagCLS::RedirectedFieldatomClassName<unsigned short>::operator!=(
                               *((_QWORD *)a1 + 17) + 24LL,
                               gpsi + 904LL) )
      {
        ProcessWindowStation = GetProcessWindowStation(0LL);
        if ( !xxxActivateKeyboardLayout(ProcessWindowStation, a4, 256LL, a1) )
          UserSetLastError(1457LL);
        goto LABEL_13;
      }
      v102 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v192 = *(_QWORD *)(v102 + 408);
      *(_QWORD *)(v102 + 408) = &v192;
      v193 = (__int64)v101;
      HMLockObject(v101);
      v103 = (__int64)a3;
      v104 = 80LL;
      v105 = v101;
LABEL_248:
      xxxSendMessage(v105, v104, v103, a4);
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
  if ( a4 != 3 )
    goto LABEL_13;
  v108 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v187, v8, v9, v10);
  return 2LL - ((v108 & 0x20) != 0);
}
