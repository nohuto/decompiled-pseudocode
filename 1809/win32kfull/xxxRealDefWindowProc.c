/*
 * XREFs of xxxRealDefWindowProc @ 0x1C0066C18
 * Callers:
 *     ?xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C00676B0 (-xxxWrapRealDefWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x1C00B4F70 (xxxDefWindowProc.c)
 * Callees:
 *     xxxDWP_ProcessVirtKey @ 0x1C0008640 (xxxDWP_ProcessVirtKey.c)
 *     ?xxxSetForegroundWindow@@YAHPEAUtagWND@@H@Z @ 0x1C0009FEC (-xxxSetForegroundWindow@@YAHPEAUtagWND@@H@Z.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C000A004 (xxxDrawMenuBarUnderlines.c)
 *     ?GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C000B638 (-GetHost@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     GetNonChildAncestor @ 0x1C000CE08 (GetNonChildAncestor.c)
 *     SetOrClrWF @ 0x1C000DA60 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0018330 (xxxWindowEvent.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ??9?$RedirectedFieldatomClassName@G@tagCLS@@QEBAEAEBG@Z @ 0x1C001C64C (--9-$RedirectedFieldatomClassName@G@tagCLS@@QEBAEAEBG@Z.c)
 *     _InitPwSB @ 0x1C002150C (_InitPwSB.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     xxxSendTransformableMessage @ 0x1C004104C (xxxSendTransformableMessage.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     _IsDescendant @ 0x1C0043A2C (_IsDescendant.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x1C0067628 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxCalcClientRect @ 0x1C0068CE0 (xxxCalcClientRect.c)
 *     xxxAdjustSize @ 0x1C0069CEC (xxxAdjustSize.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C0069EDC (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     DefSetText @ 0x1C006A46C (DefSetText.c)
 *     GreSetTextColor @ 0x1C006DDEC (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C006DE74 (GreSetBkColor.c)
 *     xxxInternalDoSyncPaint @ 0x1C0070780 (xxxInternalDoSyncPaint.c)
 *     FreeHwndList @ 0x1C0070D10 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0070DA0 (BuildHwndList.c)
 *     _GetTopLevelWindow @ 0x1C0071310 (_GetTopLevelWindow.c)
 *     ?GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z @ 0x1C0071958 (-GetTopLevelHostForComponent@CoreWindowProp@@SAPEAUtagWND@@PEBU2@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C007219C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072410 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxDrawWindowFrame @ 0x1C0078D80 (xxxDrawWindowFrame.c)
 *     xxxGetSysMenu @ 0x1C00A60E8 (xxxGetSysMenu.c)
 *     _SetMenuDefaultItem @ 0x1C00A6910 (_SetMenuDefaultItem.c)
 *     xxxDWP_DoNCActivate @ 0x1C00A7B84 (xxxDWP_DoNCActivate.c)
 *     xxxDrawCaptionBar @ 0x1C00A7DE8 (xxxDrawCaptionBar.c)
 *     xxxDWP_UpdateUIState @ 0x1C00ABB00 (xxxDWP_UpdateUIState.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 *     xxxRedrawTitle @ 0x1C00B3850 (xxxRedrawTitle.c)
 *     PostShellHookMessages @ 0x1C00B3920 (PostShellHookMessages.c)
 *     PostShellHookMessagesEx @ 0x1C00B3938 (PostShellHookMessagesEx.c)
 *     ?xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z @ 0x1C00B3CA0 (-xxxDWP_SetIcon@@YAPEAUHICON__@@PEAUtagWND@@_KPEAU1@@Z.c)
 *     xxxLoadUserApiHook @ 0x1C00B5140 (xxxLoadUserApiHook.c)
 *     IsInsideUserApiHook @ 0x1C00B51F0 (IsInsideUserApiHook.c)
 *     ?xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z @ 0x1C00B689C (-xxxDWP_SetRedraw@@YAXPEAUtagWND@@H@Z.c)
 *     xxxGetTitleBarInfoEx @ 0x1C00B9EE0 (xxxGetTitleBarInfoEx.c)
 *     xxxInternalGetMessage @ 0x1C00BC3F0 (xxxInternalGetMessage.c)
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00BC7F0 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CE0A8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C00D08BC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C00D0A28 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00D0C18 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     xxxReleaseCapture @ 0x1C00D0F20 (xxxReleaseCapture.c)
 *     xxxSendNotifyMessage @ 0x1C00D14F0 (xxxSendNotifyMessage.c)
 *     xxxSetCapture @ 0x1C00D1A24 (xxxSetCapture.c)
 *     PostIAMShellHookMessageEx @ 0x1C00DC890 (PostIAMShellHookMessageEx.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     GetMouseKeyFlags @ 0x1C00DE6A4 (GetMouseKeyFlags.c)
 *     xxxSysCommand @ 0x1C00DF300 (xxxSysCommand.c)
 *     _GetProcessWindowStation @ 0x1C00EEB20 (_GetProcessWindowStation.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C00F7040 (CheckAccessForIntegrityLevelEx.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C00F9CCC (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00F9D28 (DesktopVerifyHeapLargeUnicodeString.c)
 *     TextCopy @ 0x1C00F9DD0 (TextCopy.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00FD7BC (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C00FE500 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     _GetKeyState @ 0x1C0107788 (_GetKeyState.c)
 *     GetThreadDesktopWindow @ 0x1C0109EB8 (GetThreadDesktopWindow.c)
 *     DWP_SetHotKey @ 0x1C010AE1C (DWP_SetHotKey.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C010C920 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C01105A0 (--B-$HmgLockResultBase@VMETA@@@@QEBA_NXZ.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ @ 0x1C0117C80 (--B-$SmartObjStackRef@UtagMENU@@@@QEBAPEAUtagMENU@@XZ.c)
 *     xxxDWP_EraseBkgnd @ 0x1C011CD88 (xxxDWP_EraseBkgnd.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C011D04C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     DWP_GetIcon @ 0x1C011D514 (DWP_GetIcon.c)
 *     xxxClientShutdown @ 0x1C011E060 (xxxClientShutdown.c)
 *     xxxShowWindow @ 0x1C011E440 (xxxShowWindow.c)
 *     FindNCHit @ 0x1C0123470 (FindNCHit.c)
 *     xxxSendMinRectMessages @ 0x1C01240B0 (xxxSendMinRectMessages.c)
 *     xxxHandleWindowPosChanged @ 0x1C0126564 (xxxHandleWindowPosChanged.c)
 *     MNClearCachedPopupSizes @ 0x1C01297A0 (MNClearCachedPopupSizes.c)
 *     WCSToMBEx @ 0x1C012D480 (WCSToMBEx.c)
 *     ?DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z @ 0x1C01304D8 (-DWP_DrawItem@@YAXPEAUtagDRAWITEMSTRUCT@@@Z.c)
 *     ??9?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0135490 (--9-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ @ 0x1C0135D54 (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_KXZ.c)
 *     xxxMessageBeep @ 0x1C0154B50 (xxxMessageBeep.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     ?GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z @ 0x1C01C2E20 (-GetCompositionInputWindowUIOwner@@YAPEAUtagWND@@PEBU1@@Z.c)
 *     ?xxxSetForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C01C31A0 (-xxxSetForegroundWindowNoRestoreFocus@@YA_NPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     xxxSleepThread @ 0x1C01C3D7C (xxxSleepThread.c)
 *     xxxSimulateShiftF10 @ 0x1C01C7BC0 (xxxSimulateShiftF10.c)
 *     _FreeTouchInputInfo @ 0x1C01CB7C0 (_FreeTouchInputInfo.c)
 *     SfnCOPYGLOBALDATA @ 0x1C01FDD60 (SfnCOPYGLOBALDATA.c)
 *     InImmersiveApplicationBand @ 0x1C02281D0 (InImmersiveApplicationBand.c)
 *     xxxDefPointerProc @ 0x1C0228294 (xxxDefPointerProc.c)
 *     DWP_GetHotKey @ 0x1C0228510 (DWP_GetHotKey.c)
 *     xxxDoScrollMenu @ 0x1C02296AC (xxxDoScrollMenu.c)
 *     xxxSendHelpMessage @ 0x1C022FC9C (xxxSendHelpMessage.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 *     GetContextHelpId @ 0x1C02440A4 (GetContextHelpId.c)
 */

__int64 __fastcall xxxRealDefWindowProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rdx
  unsigned int v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v15; // esi
  unsigned int v16; // esi
  unsigned int v17; // esi
  int HotKey; // eax
  __int64 v19; // r15
  unsigned int v20; // esi
  unsigned int v21; // esi
  unsigned int v22; // esi
  _DWORD *v23; // rax
  _BYTE *v24; // rcx
  __int64 v25; // rdx
  int TitleBarInfo; // eax
  unsigned __int64 v27; // rbx
  unsigned int v28; // esi
  unsigned int v29; // esi
  __int64 v30; // rax
  __int64 v31; // rbx
  BOOL v32; // edi
  unsigned int v33; // esi
  unsigned int v34; // esi
  unsigned int v35; // esi
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  unsigned int v40; // esi
  __int64 updated; // rax
  __int64 Icon; // rax
  unsigned int v43; // esi
  unsigned int v44; // esi
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // esi
  unsigned int v50; // esi
  unsigned int v51; // esi
  int v52; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  int v55; // ecx
  unsigned int v56; // esi
  unsigned int v57; // esi
  unsigned __int64 v58; // r13
  __int64 v59; // rax
  int v60; // ecx
  HDC DCEx; // rbx
  ULONG v62; // ecx
  ULONG v63; // ecx
  struct _LARGE_UNICODE_STRING *StrName; // rax
  unsigned int v65; // r8d
  _QWORD *v66; // rsi
  int v67; // eax
  tagWND::ProtectedLargeUnicodeStringWNDstrName *v68; // rcx
  int v69; // eax
  __int64 v70; // rdx
  int v71; // ebx
  struct _LARGE_UNICODE_STRING *v72; // rax
  _WORD *v73; // rcx
  char v74; // cl
  ULONG_PTR v75; // rbx
  __int64 v76; // rax
  __int64 v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  int ContextHelpId; // eax
  unsigned int v81; // esi
  unsigned int v82; // esi
  unsigned int v83; // esi
  ULONG_PTR v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // rax
  __int64 v90; // r14
  unsigned __int64 *v91; // rsi
  unsigned __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rcx
  ULONG_PTR v96; // rbx
  __int64 v97; // rdx
  __int64 v98; // rax
  ULONG_PTR v99; // rcx
  __int64 v100; // rcx
  __int64 ProcessWindowStation; // rax
  __int64 v102; // rbx
  __int64 v103; // rdx
  char v104; // bl
  int v105; // esi
  __int64 v106; // rbx
  __int64 v107; // rax
  unsigned __int64 v108; // r8
  unsigned int v109; // edx
  unsigned int v110; // ebx
  struct tagWND *Host; // rax
  __int64 TopLevelWindow; // rax
  __int64 v113; // r9
  __int64 v114; // rdx
  __int64 v115; // r8
  struct tagWND *v116; // rcx
  __int64 v117; // rax
  __int16 v118; // bx
  int NCHit; // ecx
  __int64 v120; // rcx
  __int64 v121; // r8
  __int64 v122; // r9
  int v123; // esi
  unsigned int v124; // eax
  __int64 v125; // r9
  unsigned int v126; // esi
  const struct tagWND *v127; // rcx
  struct tagWND *CompositionInputWindowUIOwner; // rsi
  __int64 v129; // rbx
  __int64 v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  unsigned __int64 v133; // r8
  unsigned int v134; // edx
  __int64 NonChildAncestor; // rbx
  __int64 v136; // rdx
  __int64 v137; // rcx
  unsigned int v138; // esi
  unsigned int v139; // esi
  unsigned int v140; // esi
  __int16 v141; // r10
  int v142; // eax
  int v143; // eax
  int v144; // r9d
  __int64 v145; // rbx
  __int64 v146; // rax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r8
  __int64 v150; // rsi
  struct tagPROCESSINFO *v151; // rax
  ULONG v152; // ebx
  __int64 v153; // rdi
  unsigned int v154; // ebx
  __int64 v155; // rcx
  unsigned __int16 v156; // dx
  int v157; // eax
  unsigned int v158; // ebx
  __int64 v159; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rbx
  __int64 v164; // rdx
  __int64 v165; // rax
  __int64 v166; // rbx
  __int64 v167; // rax
  int v168; // ebx
  __int64 v169; // rcx
  __int64 v170; // rcx
  struct tagPROCESSINFO *v171; // [rsp+40h] [rbp-178h]
  struct tagPROCESSINFO *v172; // [rsp+40h] [rbp-178h]
  struct tagPROCESSINFO *v173; // [rsp+40h] [rbp-178h]
  ULONG BytesInMultiByteString[2]; // [rsp+48h] [rbp-170h] BYREF
  unsigned __int64 v175; // [rsp+50h] [rbp-168h] BYREF
  _QWORD v176[3]; // [rsp+58h] [rbp-160h] BYREF
  __int64 v177; // [rsp+70h] [rbp-148h] BYREF
  __int64 v178; // [rsp+78h] [rbp-140h]
  __int64 v179; // [rsp+88h] [rbp-130h] BYREF
  ULONG_PTR v180; // [rsp+90h] [rbp-128h]
  _QWORD v181[3]; // [rsp+A8h] [rbp-110h] BYREF
  _QWORD v182[3]; // [rsp+C0h] [rbp-F8h] BYREF
  _QWORD v183[3]; // [rsp+D8h] [rbp-E0h] BYREF
  _QWORD v184[3]; // [rsp+F0h] [rbp-C8h] BYREF
  _DWORD v185[12]; // [rsp+108h] [rbp-B0h] BYREF
  char v186[16]; // [rsp+138h] [rbp-80h] BYREF
  char v187[16]; // [rsp+148h] [rbp-70h] BYREF
  __int64 v188; // [rsp+158h] [rbp-60h] BYREF
  __int64 v189; // [rsp+160h] [rbp-58h]
  int v190; // [rsp+168h] [rbp-50h]

  v175 = (unsigned __int64)a1;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v176);
  if ( a1 == (struct tagWND *)-1LL )
    goto LABEL_13;
  if ( a2 > 0x400 )
  {
    v39 = 0LL;
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
                    || *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground
                    && !(unsigned int)xxxSetForegroundWindow(a1, 0) )
                  {
                    goto LABEL_13;
                  }
                  goto LABEL_423;
                }
              }
            }
            updated = xxxDefPointerProc(a1, a2, a3, 0LL);
LABEL_75:
            v27 = updated;
            goto LABEL_45;
          }
          TitleBarInfo = xxxDWPPrint(a1, (HDC)a3, a4);
        }
        else
        {
          v49 = a2 - 793;
          if ( !v49 )
          {
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            {
              if ( a1 != (struct tagWND *)GetDesktopWindow((__int64)a1)
                && (((*(_DWORD *)(gptiCurrent + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x800) == 0
                 || !(unsigned int)xxxCallHook(12, a3, a4, 10)) )
              {
                v168 = (*(_DWORD *)(gptiCurrent + 1208LL) >> 11) & 1;
                v175 = *(_QWORD *)(gptiCurrent + 1216LL);
                if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x40000) != 0
                  && *(struct tagWND **)(gptiCurrent + 1368LL) == a1
                  || (unsigned int)CoreWindowProp::IsComponent(a1) )
                {
                  v169 = *(_QWORD *)(gptiCurrent + 512LL);
                  if ( v169 )
                  {
                    v170 = *(_QWORD *)(v169 + 32);
                    if ( v170 )
                    {
                      if ( (*(_DWORD *)(v170 + 1208) & 0x800) != 0 )
                      {
                        v168 = 1;
                        v175 = *(_QWORD *)(v170 + 1216);
                      }
                    }
                  }
                }
                PostShellHookMessagesEx(
                  0xCuLL,
                  a4,
                  (struct tagINPUT_MESSAGE_SOURCE *)((unsigned __int64)&v175 & -(__int64)(v168 != 0)));
              }
              goto LABEL_13;
            }
            goto LABEL_435;
          }
          v50 = v49 - 2;
          if ( v50 )
          {
            v51 = v50 - 36;
            if ( v51 )
            {
              if ( v51 == 10 && a3 )
              {
                v53 = *((_QWORD *)a1 + 10);
                v54 = v53 ? *(_QWORD *)(v53 + 16) : 0LL;
                if ( v54 && *(struct tagWND **)(v54 + 1376) == a1 )
                  xxxSetFocus(a1);
              }
              goto LABEL_13;
            }
            TitleBarInfo = xxxGetTitleBarInfoEx(a1, (struct tagTITLEBARINFO *)a4);
          }
          else
          {
            if ( !(unsigned int)IsInsideUserApiHook() || (*(_DWORD *)(gptiCurrent + 488LL) & 1) != 0 )
              goto LABEL_13;
            TitleBarInfo = xxxLoadUserApiHook();
          }
        }
LABEL_44:
        v27 = TitleBarInfo;
LABEL_45:
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v176, v8);
        return v27;
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
          if ( a2 > 0x219 )
          {
            if ( a2 == 554 )
            {
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v176, 524LL);
              return 1162627398LL;
            }
            else
            {
              if ( a2 != 555 )
                goto LABEL_13;
              v158 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 24LL);
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v176, 524LL);
              return ((unsigned __int64)v158 >> 4) & 1;
            }
          }
          goto LABEL_413;
        }
      }
      else
      {
        switch ( a2 )
        {
          case 0x20Cu:
            goto LABEL_274;
          case 0x137u:
            if ( *(_WORD *)(gpsi + 6996LL) < 8u
              || (v157 = *(_DWORD *)(gpsi + 4648LL), v157 != *(_DWORD *)(gpsi + 4568LL))
              || v157 == *(_DWORD *)(gpsi + 4588LL) )
            {
              GreSetBkColor((HDC)a3);
              GreSetTextColor((HDC)a3);
              v19 = *(_QWORD *)(gpsi + 4944LL);
              goto LABEL_23;
            }
            v153 = 4856LL;
            goto LABEL_401;
          case 0x138u:
            goto LABEL_394;
          case 0x205u:
            v155 = *((_QWORD *)a1 + 5);
            v156 = *(_WORD *)(v155 + 108) + WORD1(a4);
            if ( (*(_BYTE *)(v155 + 26) & 0x40) != 0 )
              v125 = ((unsigned __int64)v156 << 16) | (unsigned __int16)(*(_WORD *)(v155 + 112) - a4);
            else
              v125 = (v156 << 16) | (unsigned __int16)(a4 + *(_WORD *)(v155 + 104));
LABEL_392:
            v133 = *(_QWORD *)a1;
            v134 = 123;
            goto LABEL_393;
        }
        if ( a2 != 522 )
          goto LABEL_13;
      }
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
        goto LABEL_13;
      v159 = *((_QWORD *)a1 + 10);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), 524LL);
      v177 = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = &v177;
      v178 = v159;
      _InterlockedAdd((volatile signed __int32 *)(v159 + 8), 1u);
      v108 = a3;
      v109 = a2;
      goto LABEL_416;
    }
    if ( a2 == 310 )
      goto LABEL_394;
    if ( a2 > 0x112 )
    {
      if ( a2 <= 0x128 )
      {
        if ( a2 == 296 )
        {
          updated = xxxDWP_UpdateUIState(a1, a3, a4);
          goto LABEL_75;
        }
        v8 = 281LL;
        v138 = a2 - 281;
        if ( v138 )
        {
          v139 = v138 - 1;
          if ( v139 )
          {
            v140 = v139 - 2;
            if ( !v140 )
              goto LABEL_192;
            if ( v140 != 11 )
              goto LABEL_13;
            v141 = a3;
            v175 = (unsigned __int16)a3;
            v8 = a3 >> 16;
            v172 = (struct tagPROCESSINFO *)(a3 >> 16);
            v39 = 0LL;
            if ( (a3 & 0xFFF80000) != 0 || (unsigned __int16)a3 > 3u || a4 )
              goto LABEL_13;
            if ( (_WORD)a3 == 3 )
            {
              v8 = 0LL;
              v172 = 0LL;
              if ( (*gpsi & 0x80u) != 0 || (v142 = *(_DWORD *)(gpsi + 7004LL), (v142 & 0x20) != 0) || v142 >= 0 )
              {
LABEL_354:
                if ( (_WORD)v8 )
                {
                  if ( (v8 & 1) != 0 )
                    v144 = (v141 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 7);
                  else
                    v144 = 0;
                  if ( (v8 & 2) != 0 )
                    v144 |= (v141 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 6) & 1;
                  if ( (v8 & 4) != 0 )
                    v144 |= (v141 == 1) ^ (*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL) >> 2) & 1;
                  if ( !v144 )
                    goto LABEL_13;
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                  {
                    v145 = *((_QWORD *)a1 + 10);
                    v146 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
                    v177 = *(_QWORD *)(v146 + 416);
                    *(_QWORD *)(v146 + 416) = &v177;
                    v178 = v145;
                    _InterlockedAdd((volatile signed __int32 *)(v145 + 8), 1u);
                    v39 = xxxSendMessage(*((_QWORD *)a1 + 10));
                    ThreadUnlock1(v148, v147);
                  }
                  else
                  {
                    v39 = xxxSendMessage((ULONG_PTR)a1);
                  }
                }
                goto LABEL_64;
              }
              if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
              {
                v141 = ((*gpsi & 0x40) != 0) + 1;
                v8 = 3LL;
                goto LABEL_354;
              }
LABEL_357:
              v141 = v175;
              v8 = (__int64)v172;
              goto LABEL_354;
            }
            if ( (*gpsi & 0x80u) == 0 )
            {
              v143 = *(_DWORD *)(gpsi + 7004LL);
              if ( (v143 & 0x20) == 0 && v143 < 0 )
              {
                if ( (GetAppCompatFlags2(1024LL) & 2) == 0 )
                  goto LABEL_357;
                v8 = a3 >> 16;
                v141 = v175;
              }
            }
            LOWORD(v8) = v8 & 0xFFFC;
            goto LABEL_354;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_192;
        }
        else
        {
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) != 0x40 )
            goto LABEL_192;
          v149 = *((_QWORD *)a1 + 10);
          v150 = *(_QWORD *)(*(_QWORD *)(v149 + 16) + 424LL);
          v151 = *(struct tagPROCESSINFO **)(gptiCurrent + 424LL);
          v173 = v151;
          if ( (struct tagPROCESSINFO *)v150 != v151 )
          {
            v152 = IsMessageAllowedAcrossILByReceiver(
                     v151,
                     (struct tagPROCESSINFO *)v150,
                     (struct tagWND *)v149,
                     0x119u,
                     a3,
                     a4,
                     1);
            if ( !v152 )
            {
              v152 = IsMessageAlwaysAllowedAcrossIL(0x119u);
              BytesInMultiByteString[0] = v152;
              if ( v152 )
              {
                MSGSQMAddMessage(v173, (struct tagPROCESSINFO *)v150, a4, 1, 2);
                v152 = BytesInMultiByteString[0];
              }
            }
            if ( !v152 )
            {
              if ( *(_QWORD *)v150 == gpepCSRSS )
              {
                *(_QWORD *)BytesInMultiByteString = 0x2000LL;
              }
              else
              {
                BytesInMultiByteString[0] = *(_DWORD *)(v150 + 880);
                BytesInMultiByteString[1] = *(_DWORD *)(v150 + 884);
              }
              if ( !(unsigned int)CheckAccessForIntegrityLevelEx(
                                    *((_QWORD *)v173 + 110),
                                    *(_QWORD *)BytesInMultiByteString,
                                    0LL) )
              {
                EtwTraceUIPIMsgError(v173, v150, 281LL, a3, a4);
                UserSetLastError(5LL);
                MSGSQMAddMessage(v173, (struct tagPROCESSINFO *)v150, a4, 1, 0);
                goto LABEL_192;
              }
              MSGSQMAddMessage(v173, (struct tagPROCESSINFO *)v150, a4, 1, gbEnforceUIPI != 0 ? 5 : 1);
            }
          }
        }
LABEL_435:
        v166 = *((_QWORD *)a1 + 10);
        v167 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
        v177 = *(_QWORD *)(v167 + 416);
        *(_QWORD *)(v167 + 416) = &v177;
        v178 = v166;
        _InterlockedAdd((volatile signed __int32 *)(v166 + 8), 1u);
        v86 = xxxSendMessage(*((_QWORD *)a1 + 10));
        goto LABEL_436;
      }
      if ( a2 == 297 )
      {
        v154 = *(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 27LL);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v176, v8);
        return ((v154 & 0x40 | ((unsigned __int64)v154 >> 2)) >> 5) | v154 & 4;
      }
      if ( a2 != 306 )
      {
        if ( a2 <= 0x132 )
          goto LABEL_13;
        if ( a2 > 0x134 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
        {
          v153 = 4816LL;
LABEL_401:
          GreSetBkColor((HDC)a3);
          GreSetTextColor((HDC)a3);
          v19 = *(_QWORD *)(v153 + gpsi);
          goto LABEL_23;
        }
        goto LABEL_396;
      }
LABEL_394:
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) != 0 )
      {
        v153 = 4816LL;
        goto LABEL_401;
      }
LABEL_396:
      v153 = 4736LL;
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
        goto LABEL_92;
      if ( a2 == 164 )
      {
        memset(v185, 0, sizeof(v185));
        NCHit = FindNCHit(a1, (unsigned int)a4);
        if ( (unsigned int)(NCHit - 6) <= 1 )
        {
          if ( !(unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL), (__int64)a1) )
            goto LABEL_13;
        }
        else if ( (unsigned int)(NCHit - 2) > 1 || a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
        {
          goto LABEL_13;
        }
        xxxSetCapture(a1);
        while ( !(unsigned int)xxxInternalGetMessage((unsigned int)v185, 0, 512, 526, 1, 0) || v185[2] != 517 )
        {
          if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 104LL)
            || !(unsigned int)xxxSleepThread(6LL, 0LL, 1LL, 0LL) )
          {
            goto LABEL_13;
          }
        }
        xxxReleaseCapture(v120, v8, v121, v122);
        v123 = LOWORD(v185[9]) | (LOWORD(v185[10]) << 16);
        v124 = FindNCHit(a1, (unsigned int)v123);
        v8 = v124;
        if ( ((v124 - 2) & 0xFFFFFFFA) != 0 )
          goto LABEL_13;
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 0x20) != 0 )
        {
          if ( v124 == 2 )
            goto LABEL_423;
          if ( v124 == 3 )
          {
LABEL_261:
            v110 = 61536;
LABEL_424:
            xxxGetSysMenu(a1);
            v176[2] = 0LL;
            SmartObjStackRefBase<tagMENU>::operator=(v176);
            if ( !(unsigned __int8)SmartObjStackRef<tagMENU>::operator!=(v176, 0LL) )
              goto LABEL_13;
            if ( (unsigned int)IsInsideUserApiHook() )
            {
              v161 = SmartObjStackRef<tagMENU>::operator tagMENU *(v176);
              MNClearCachedPopupSizes(v161);
            }
            v162 = SmartObjStackRef<tagMENU>::operator tagMENU *(v176);
            SetMenuDefaultItem(v162, v110, 0LL);
            PostShellHookMessages(9LL, *(_QWORD *)a1);
            v163 = SmartObjStackRef<tagMENU>::operator unsigned __int64(v176);
            v165 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v164);
            v184[0] = *(_QWORD *)(v165 + 416);
            *(_QWORD *)(v165 + 416) = v184;
            v184[1] = v163;
            _InterlockedAdd((volatile signed __int32 *)(v163 + 8), 1u);
            if ( a4 == 0xFFFFFFFF )
            {
              v48 = gpsi;
              if ( (*(_DWORD *)(gpsi + 2120LL) & 8) != 0 )
              {
                v189 = 0LL;
                v190 = 0;
                v188 = 20LL;
                if ( (unsigned int)xxxSendMinRectMessages(a1, (char *)&v188 + 4) )
                  xxxTrackPopupMenuEx(v176, 576LL, HIDWORD(v188), (unsigned int)v189, a1, &v188);
              }
            }
            else
            {
              xxxTrackPopupMenuEx(v176, 514LL, (unsigned int)(__int16)a4, (unsigned int)SWORD1(a4), a1, 0LL);
            }
            goto LABEL_114;
          }
        }
        v125 = v123;
        goto LABEL_392;
      }
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
        if ( a3 == 27 )
        {
          if ( !(unsigned int)CoreWindowProp::IsComponent(a1) )
            goto LABEL_13;
          Host = CoreWindowProp::GetHost(a1);
          if ( !Host )
            goto LABEL_13;
          TopLevelWindow = GetTopLevelWindow(Host);
          if ( !TopLevelWindow )
            goto LABEL_13;
          v113 = a4;
          v114 = 256LL;
          v115 = 27LL;
          v116 = (struct tagWND *)TopLevelWindow;
          goto LABEL_302;
        }
        if ( a3 != 121 )
          goto LABEL_13;
        v117 = *(_QWORD *)(gptiCurrent + 432LL);
        goto LABEL_332;
      }
      v8 = 524LL;
LABEL_274:
      v118 = 0;
      if ( WORD1(a3) == 1 )
      {
        v118 = 1;
      }
      else if ( WORD1(a3) == 2 )
      {
        goto LABEL_405;
      }
      if ( !v118 )
        goto LABEL_13;
LABEL_405:
      if ( a2 != 524 )
        GetMouseKeyFlags(*(_QWORD *)(gptiCurrent + 432LL));
      xxxSendMessage((ULONG_PTR)a1);
      goto LABEL_13;
    }
    v56 = a2 - 260;
    if ( !v56 )
    {
      v58 = a4 >> 16;
      if ( (v58 & 0x2000) != 0 )
      {
        if ( (v58 & 0x4000) == 0 )
        {
          v59 = *(_QWORD *)(gptiCurrent + 432LL);
          if ( a3 != 18 || (v60 = *(_DWORD *)(v59 + 388), (v60 & 8) != 0) )
          {
            *(_DWORD *)(v59 + 388) &= 0xFFFFFFF3;
          }
          else
          {
            *(_DWORD *)(v59 + 388) = v60 | 8;
            xxxDrawMenuBarUnderlines((__int64)a1, 1);
          }
        }
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x10u;
        xxxDWP_ProcessVirtKey((struct tagTHREADINFO *)(unsigned int)a3);
        goto LABEL_13;
      }
      if ( a3 != 121 )
        goto LABEL_13;
      v117 = *(_QWORD *)(gptiCurrent + 432LL);
LABEL_332:
      *(_DWORD *)(v117 + 388) |= 0x10u;
      if ( (GetKeyState(16LL) & 0x8000u) == 0LL || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 21LL) & 2) == 0 )
        goto LABEL_13;
      v125 = -1LL;
      goto LABEL_392;
    }
    v57 = v56 - 1;
    if ( !v57 )
    {
LABEL_92:
      if ( a3 == 18
        && (v55 = *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL), (v55 & 0x80u) == 0)
        && (v55 & 0xC) == 8
        || a3 == 121 && (*(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) & 0x10) != 0 )
      {
        NonChildAncestor = GetNonChildAncestor((__int64)a1);
        if ( gspwndFullScreen != NonChildAncestor )
        {
          v179 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v179;
          v180 = NonChildAncestor;
          if ( NonChildAncestor )
            _InterlockedAdd((volatile signed __int32 *)(NonChildAncestor + 8), 1u);
          if ( a3 == 121 )
            xxxDrawMenuBarUnderlines((__int64)a1, 1);
          xxxSendTransformableMessage((__int64 *)NonChildAncestor, 0x112u, 0xF100uLL, 0LL, 0);
          ThreadUnlock1(v137, v136);
        }
      }
      if ( a3 == 18 )
      {
        *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x80u;
        xxxDrawMenuBarUnderlines((__int64)a1, 0);
      }
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= 0xFFFFFFE3;
      goto LABEL_13;
    }
    v126 = v57 - 1;
    if ( v126 )
    {
      if ( v126 != 3 )
        goto LABEL_13;
      if ( a3 == 0xFFFF )
        goto LABEL_192;
      v113 = a4;
      v115 = a3;
      v114 = 258LL;
    }
    else
    {
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= 0xFFFFFFF3;
      if ( a3 != 13 || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
      {
        if ( (a4 & 0x20000000) == 0 || !a3 )
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
          v100 = *((_QWORD *)a1 + 10);
          v177 = *(_QWORD *)(gptiCurrent + 416LL);
          *(_QWORD *)(gptiCurrent + 416LL) = &v177;
          v178 = v100;
          _InterlockedAdd((volatile signed __int32 *)(v100 + 8), 1u);
          v99 = *((_QWORD *)a1 + 10);
          goto LABEL_248;
        }
        if ( *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) && (unsigned int)InImmersiveApplicationBand() )
        {
          PostIAMShellHookMessageEx(
            *(_QWORD *)(gptiCurrent + 456LL),
            33LL,
            **(_QWORD **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL));
          goto LABEL_13;
        }
        v127 = *(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL);
        if ( !v127 || !(unsigned int)IsCompositionInputWindow(v127) )
        {
LABEL_320:
          v125 = (unsigned int)a3;
          v133 = 61696LL;
          v134 = 274;
LABEL_393:
          xxxSendTransformableMessage((__int64 *)a1, v134, v133, v125, 0);
          goto LABEL_13;
        }
        CompositionInputWindowUIOwner = GetCompositionInputWindowUIOwner(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL)
                                                                                                 + 120LL));
        if ( (unsigned int)CoreWindowProp::IsComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)) )
          CompositionInputWindowUIOwner = CoreWindowProp::GetTopLevelHostForComponent(*(const struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL));
        if ( !CompositionInputWindowUIOwner )
          goto LABEL_13;
        v129 = GetTopLevelWindow(CompositionInputWindowUIOwner);
        if ( !v129 )
          goto LABEL_13;
        v130 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
        v183[0] = *(_QWORD *)(v130 + 416);
        *(_QWORD *)(v130 + 416) = v183;
        v183[1] = v129;
        _InterlockedAdd((volatile signed __int32 *)(v129 + 8), 1u);
        xxxSetForegroundWindowNoRestoreFocus((struct tagWND *)v129, gptiCurrent, 0);
        if ( !ThreadUnlock1(v132, v131) )
          goto LABEL_13;
        v114 = 274LL;
        v113 = 32LL;
        v115 = 61696LL;
        v116 = (struct tagWND *)v129;
LABEL_302:
        PostMessage(v116, v114, v115, v113);
        goto LABEL_13;
      }
      v113 = 0LL;
      v115 = 61728LL;
      v114 = 274LL;
    }
    v116 = a1;
    goto LABEL_302;
  }
  if ( a2 >= 0xA1 )
  {
    xxxDWP_NCMouse((ULONG_PTR)a1, a2, a3, a4);
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
          v15 = a2 - 25;
          if ( v15 )
          {
            v16 = v15 - 6;
            if ( !v16 )
            {
              xxxDWP_DoCancelMode(a1);
              goto LABEL_13;
            }
            v17 = v16 - 1;
            if ( v17 )
            {
              if ( v17 != 1 )
                goto LABEL_13;
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
                v75 = *((_QWORD *)a1 + 10);
              else
                v75 = 0LL;
              if ( v75 )
              {
                v76 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
                v179 = *(_QWORD *)(v76 + 416);
                *(_QWORD *)(v76 + 416) = &v179;
                v180 = v75;
                _InterlockedAdd((volatile signed __int32 *)(v75 + 8), 1u);
                v77 = xxxSendMessage(v75);
                ThreadUnlock1(v79, v78);
                if ( v77 )
                {
                  v19 = v77;
                  goto LABEL_23;
                }
              }
              if ( (_WORD)a4 != 2 || (Icon = 3LL, WORD1(a4) != 513) )
                Icon = 1LL;
              goto LABEL_79;
            }
            HotKey = xxxDWP_SetCursor(a1, (HWND)a3, (__int16)a4, WORD1(a4));
LABEL_22:
            v19 = HotKey;
LABEL_23:
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v176, v8);
            return v19;
          }
          goto LABEL_396;
        }
LABEL_76:
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
          v19 = -1LL;
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
    if ( a2 == 24 )
    {
      if ( !(_WORD)a4 )
        goto LABEL_13;
      v8 = *((_QWORD *)a1 + 5);
      if ( (((*(_BYTE *)(v8 + 31) & 0xC0) + 0x80) & 0xBF) != 0 && !*((_QWORD *)a1 + 12) )
        goto LABEL_13;
      v74 = *(_BYTE *)(v8 + 31) & 0x10;
      if ( a3 )
      {
        if ( v74 || (*(_BYTE *)(v8 + 17) & 0x40) == 0 )
          goto LABEL_13;
      }
      else if ( !v74 )
      {
        goto LABEL_13;
      }
      SetOrClrWF(0, (__int64)a1, 0x140u, 1);
      if ( !a3 )
        SetOrClrWF(1, (__int64)a1, 0x140u, 1);
      xxxShowWindow(a1, gdwPUDFlags & 0x10000 | (a3 != 0 ? 4 : 0));
      goto LABEL_13;
    }
    if ( a2 == 15 )
      goto LABEL_76;
    if ( a2 <= 0xF )
    {
      v33 = a2 - 6;
      if ( !v33 )
      {
        if ( a3 )
          xxxSetFocus(a1);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 234LL) & 0x40) == 0 )
          goto LABEL_13;
        v45 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1376LL);
        if ( !v45 )
          goto LABEL_13;
        v46 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
        v181[0] = *(_QWORD *)(v46 + 416);
        *(_QWORD *)(v46 + 416) = v181;
        v181[1] = v45;
        _InterlockedAdd((volatile signed __int32 *)(v45 + 8), 1u);
        xxxSendNotifyMessage(v45, 841LL, a3, 0LL, 0);
        goto LABEL_114;
      }
      v34 = v33 - 5;
      if ( !v34 )
      {
        xxxDWP_SetRedraw(a1, a3 != 0);
        goto LABEL_13;
      }
      v35 = v34 - 1;
      if ( v35 )
      {
        v43 = v35 - 1;
        if ( v43 )
        {
          if ( v43 != 1 )
            goto LABEL_13;
          v62 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
          if ( v62 )
          {
            if ( a4 )
            {
              RtlUnicodeToMultiByteSize(BytesInMultiByteString, *((PCWCH *)a1 + 21), v62);
              v63 = BytesInMultiByteString[0];
            }
            else
            {
              v63 = v62 >> 1;
              BytesInMultiByteString[0] = v63;
            }
            v19 = v63;
            goto LABEL_23;
          }
          goto LABEL_192;
        }
        if ( !a3 )
        {
LABEL_192:
          v19 = 0LL;
          goto LABEL_23;
        }
        if ( (unsigned __int8)HmgLockResultBase<META>::operator bool((char *)a1 + 168, 0LL) )
        {
          StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                      (struct tagWND *)((char *)a1 + 168),
                      (struct _LARGE_UNICODE_STRING *)&v186);
          DesktopVerifyHeapLargeUnicodeString(*((_QWORD *)a1 + 3), StrName);
        }
        v65 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL);
        v66 = (_QWORD *)(a4 + 8);
        v67 = *(_DWORD *)(a4 + 4);
        if ( !v65 )
        {
          v73 = (_WORD *)*v66;
          if ( v67 >= 0 )
            *v73 = 0;
          else
            *(_BYTE *)v73 = 0;
          goto LABEL_192;
        }
        v68 = (struct tagWND *)((char *)a1 + 168);
        if ( v67 >= 0 )
        {
          v72 = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(v68, (struct _LARGE_UNICODE_STRING *)&v187);
          v71 = TextCopy(v72, *v66, (unsigned int)a3);
          v69 = 2 * v71;
        }
        else
        {
          v69 = WCSToMBEx(0LL, *(_QWORD *)v68, v65 >> 1, a4 + 8, (v67 & 0x7FFFFFFFu) - 1, 0);
          v71 = v69;
          *(_BYTE *)(v69 + *v66) = 0;
        }
        *(_DWORD *)a4 = v69;
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v176, v70);
        return v71;
      }
      else
      {
        v36 = DefSetText(a1, a4);
        v38 = v36;
        if ( v36 )
        {
          xxxRedrawTitle(a1, 8LL);
          xxxWindowEvent(0x800Cu, (__int64)a1, 0, 0, 0);
        }
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v176, v37);
        return v38;
      }
    }
    if ( a2 == 16 )
    {
      xxxDestroyWindow((volatile signed __int32 *)a1);
      goto LABEL_13;
    }
    if ( a2 != 17 && a2 != 19 )
    {
      if ( a2 != 20 )
        goto LABEL_13;
      goto LABEL_84;
    }
LABEL_413:
    v19 = 1LL;
    goto LABEL_23;
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
              xxxCalcClientRect(a1, a4, 0LL);
              goto LABEL_13;
            }
            v28 = v13 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( !v29 )
              {
                SetOrClrWF(1, (__int64)a1, 0x180u, 1);
                v30 = _GetDCEx(a1, a3, 328833LL);
                v31 = v30;
                v32 = 0;
                if ( v30 )
                {
                  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) != 0 )
                    v32 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == gpqForeground;
                  xxxDrawWindowFrame(a1, v30, v32);
                  _ReleaseDC(v31);
                }
                SetOrClrWF(0, (__int64)a1, 0x180u, 1);
                goto LABEL_13;
              }
              v40 = v29 - 1;
              if ( v40 )
              {
                if ( v40 == 2 )
                {
                  SetOrClrWF(0, (__int64)a1, 0x280u, 1);
                  xxxInternalDoSyncPaint(a1, (unsigned int)a3);
                }
                goto LABEL_13;
              }
              xxxDWP_DoNCActivate(a1, (_WORD)a3 != 0, a4);
              goto LABEL_63;
            }
            v52 = FindNCHit(a1, (unsigned int)a4);
LABEL_126:
            v39 = v52;
            goto LABEL_64;
          }
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 30LL) & 0x30) != 0 )
          {
            v39 = 0LL;
            if ( !InitPwSB((__int64)a1) )
              goto LABEL_64;
          }
          if ( a4 )
          {
            v23 = (_DWORD *)(a4 + 80);
            if ( !*((_QWORD *)a1 + 3) || a4 == -80LL || (v24 = *(_BYTE **)(a4 + 88)) == 0LL )
            {
              *(_DWORD *)(*((_QWORD *)a1 + 5) + 184LL) = 0;
LABEL_63:
              v39 = 1LL;
LABEL_64:
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v176, v8);
              return v39;
            }
            v25 = *(unsigned int *)(a4 + 84);
            if ( (int)v25 < 0 )
            {
              if ( *v23 && *v24 == 0xFF )
                goto LABEL_40;
            }
            else if ( *v23 >= 2u && *(_WORD *)v24 == 0xFFFF )
            {
LABEL_40:
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v176, v25);
              return 1LL;
            }
          }
          SetOrClrWF(1, (__int64)a1, 0x202u, 1);
          TitleBarInfo = DefSetText(a1, a4 + 80);
          goto LABEL_44;
        }
        Icon = (__int64)xxxDWP_SetIcon(a1, a3, (HICON)a4);
      }
      else
      {
        Icon = DWP_GetIcon(a1, (unsigned int)a3);
      }
      goto LABEL_79;
    }
    v105 = FindNCHit(a1, (unsigned int)a4);
    if ( (unsigned int)(v105 - 6) <= 1 )
    {
      if ( (unsigned int)IsDescendant(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL), (__int64)a1) )
        xxxDoScrollMenu(a1, 0LL, v105 - 6);
      goto LABEL_13;
    }
    v8 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v8 + 31) & 0xC0) == 0x40 )
    {
      v106 = *((_QWORD *)a1 + 10);
      v107 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
      v177 = *(_QWORD *)(v107 + 416);
      *(_QWORD *)(v107 + 416) = &v177;
      v178 = v106;
      _InterlockedAdd((volatile signed __int32 *)(v106 + 8), 1u);
      v108 = *(_QWORD *)a1;
      v109 = 123;
LABEL_416:
      xxxSendTransformableMessage(*((__int64 **)a1 + 10), v109, v108, a4, 1);
      goto LABEL_114;
    }
    if ( a1 != *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL) )
      goto LABEL_13;
    if ( v105 != 2 )
    {
      if ( v105 != 3 )
      {
        if ( a4 == -1LL && (*(_BYTE *)(v8 + 21) & 2) == 0 )
          xxxSimulateShiftF10();
        goto LABEL_13;
      }
      goto LABEL_261;
    }
LABEL_423:
    v110 = (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x21) != 0 ? 61728 : 61488;
    goto LABEL_424;
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
        v27 = ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)a1 + 5) + 16LL) >> 6) & 1;
        goto LABEL_45;
      }
      v21 = v20 - 6;
      if ( !v21 )
      {
        v52 = xxxClientShutdown(a1, a3);
        goto LABEL_126;
      }
      v22 = v21 - 11;
      if ( !v22 )
      {
        if ( (*(_DWORD *)(a4 + 32) & 0x100001) == 0 )
          xxxAdjustSize(a1);
        goto LABEL_13;
      }
      v44 = v22 - 1;
      if ( !v44 )
      {
        xxxHandleWindowPosChanged((ULONG_PTR)a1);
        goto LABEL_13;
      }
      if ( v44 == 2 )
      {
        Icon = SfnCOPYGLOBALDATA(0LL, 0LL, a3, a4, 0LL, 0LL, 0, 0LL);
LABEL_79:
        v19 = Icon;
        goto LABEL_23;
      }
LABEL_13:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v176, v8);
      return 0LL;
    }
    v81 = a2 - 79;
    if ( !v81 )
    {
      v102 = ValidateHwnd(a3);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v176, v103);
      return v102 != 0;
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
          v85 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
          v179 = *(_QWORD *)(v85 + 416);
          *(_QWORD *)(v85 + 416) = &v179;
          v180 = v84;
          _InterlockedAdd((volatile signed __int32 *)(v84 + 8), 1u);
          v86 = xxxSendTransformableMessage((__int64 *)v84, 0x53u, a3, a4, 1);
LABEL_436:
          v19 = v86;
          ThreadUnlock1(v88, v87);
          goto LABEL_23;
        }
      }
      else
      {
        v89 = BuildHwndList(*((struct tagWND **)a1 + 11));
        v90 = v89;
        if ( v89 )
        {
          v91 = (unsigned __int64 *)(v89 + 32);
          v92 = *(_QWORD *)(v89 + 32);
          if ( v92 != 1 )
          {
            do
            {
              LOBYTE(v8) = 1;
              v171 = (struct tagPROCESSINFO *)HMValidateHandleNoSecure(v92, v8);
              if ( v171 )
              {
                v93 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
                v182[0] = *(_QWORD *)(v93 + 416);
                *(_QWORD *)(v93 + 416) = v182;
                v182[1] = v171;
                _InterlockedAdd((volatile signed __int32 *)v171 + 2, 1u);
                xxxSendMessage((ULONG_PTR)v171);
                ThreadUnlock1(v95, v94);
              }
              v92 = *++v91;
            }
            while ( *v91 != 1 );
          }
          FreeHwndList(v90);
          goto LABEL_13;
        }
      }
      goto LABEL_192;
    }
    v96 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 112LL);
    if ( !v96
      || (struct tagWND *)v96 == a1
      || !tagCLS::RedirectedFieldatomClassName<unsigned short>::operator!=(
            *((_QWORD *)a1 + 14) + 24LL,
            (_WORD *)(gpsi + 904LL)) )
    {
      ProcessWindowStation = GetProcessWindowStation(0LL);
      if ( !xxxActivateKeyboardLayout(ProcessWindowStation, a4, 256LL, a1) )
        UserSetLastError(1457LL);
      goto LABEL_13;
    }
    v98 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v97);
    v179 = *(_QWORD *)(v98 + 416);
    *(_QWORD *)(v98 + 416) = &v179;
    v180 = v96;
    _InterlockedAdd((volatile signed __int32 *)(v96 + 8), 1u);
    v99 = v96;
LABEL_248:
    xxxSendMessage(v99);
LABEL_114:
    ThreadUnlock1(v48, v47);
    goto LABEL_13;
  }
  if ( a4 != 3 )
    goto LABEL_13;
  v104 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 19LL);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v176, v8);
  return 2LL - ((v104 & 0x20) != 0);
}
