/*
 * XREFs of xxxMenuWindowProc @ 0x1C0227440
 * Callers:
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E55D0 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxDWP_DoNCActivate @ 0x1C000C8BC (xxxDWP_DoNCActivate.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00182B4 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxMNCompute @ 0x1C00218EC (xxxMNCompute.c)
 *     MNGetpItemIndex @ 0x1C0022308 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C00229C0 (MNIsUAHMenu.c)
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     GetDPIMetrics @ 0x1C00912E8 (GetDPIMetrics.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0091D38 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GetAppCompatFlags2 @ 0x1C0092010 (GetAppCompatFlags2.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C0096C2C (safe_cast_fnid_to_PMENUWND.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     xxxDefWindowProc @ 0x1C00B3E60 (xxxDefWindowProc.c)
 *     GreGetLayout @ 0x1C00C7E90 (GreGetLayout.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     FindTimer @ 0x1C00DA984 (FindTimer.c)
 *     GreSetWindowOrg @ 0x1C00F8EE8 (GreSetWindowOrg.c)
 *     xxxSendUAHMenuMessage @ 0x1C00F934C (xxxSendUAHMenuMessage.c)
 *     xxxMenuDraw @ 0x1C00F9420 (xxxMenuDraw.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C0101044 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C010146C (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C0106608 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C01154C4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C0128710 (xxxPlayEventSound.c)
 *     xxxValidateRect @ 0x1C012B424 (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0164264 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E14E0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E8748 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     zzzShowFade @ 0x1C01E9E68 (zzzShowFade.c)
 *     zzzStartFade @ 0x1C01E9ED0 (zzzStartFade.c)
 *     _SetTimer @ 0x1C01EC104 (_SetTimer.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0210668 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocPopup @ 0x1C02107C8 (MNAllocPopup.c)
 *     MNCreateAnimationBitmap @ 0x1C0210850 (MNCreateAnimationBitmap.c)
 *     xxxMNEndMenuState @ 0x1C0210C40 (xxxMNEndMenuState.c)
 *     xxxUserModeCallback @ 0x1C0220044 (xxxUserModeCallback.c)
 *     xxxEndMenuLoop @ 0x1C0220290 (xxxEndMenuLoop.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C022189C (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0221AC4 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0221C60 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0221CBC (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0221E70 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0221F74 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0222378 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0222504 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     IsMFMWFPWindow @ 0x1C0222B70 (IsMFMWFPWindow.c)
 *     LockPopupMenu @ 0x1C0222BFC (LockPopupMenu.c)
 *     MNCheckButtonDownState @ 0x1C0222CDC (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1C0222D2C (MNGetpItem.c)
 *     xxxCallHandleMenuMessages @ 0x1C02230F0 (xxxCallHandleMenuMessages.c)
 *     xxxMNButtonDown @ 0x1C022321C (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C022331C (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0223788 (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C0223C00 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0224190 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0224500 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0225318 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C0226CF8 (xxxMNSetCapture.c)
 *     MNFindNextValidItem @ 0x1C0248A2C (MNFindNextValidItem.c)
 *     MNAnimate @ 0x1C024A048 (MNAnimate.c)
 *     MNDrawEdge @ 0x1C024A474 (MNDrawEdge.c)
 *     MNEraseBackground @ 0x1C024A558 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C024A69C (xxxMNDrawFullNC.c)
 *     FindBestPos @ 0x1C024C674 (FindBestPos.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxMenuWindowProc(struct tagWND *a1, unsigned int a2, HDC a3, __int64 a4)
{
  __int64 FadeInternal; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int16 v12; // ax
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // r13d
  struct tagMENUWND *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 i; // r14
  __int64 v25; // r13
  __int64 ThreadWin32Thread; // rax
  int v27; // eax
  int v28; // ecx
  unsigned __int64 v29; // rcx
  int v30; // ecx
  int v31; // ecx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 **v36; // rcx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r8d
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rcx
  int v45; // r14d
  unsigned int v46; // ebx
  struct tagWND *TopWindow; // rax
  unsigned int v48; // eax
  __int64 *v49; // r14
  struct tagWND **v50; // rax
  struct tagWND **v51; // rbx
  struct tagWND *v52; // r13
  struct tagWND *v53; // r15
  __int64 v54; // r13
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rax
  struct tagWND *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned int v65; // edx
  unsigned int v66; // r8d
  unsigned int v67; // ecx
  int v68; // eax
  int v69; // eax
  __int64 v70; // rbx
  __int64 v71; // rax
  char v72; // dl
  void *v73; // rax
  bool v74; // zf
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  __int64 v80; // rax
  int v81; // r13d
  HDC v82; // rdx
  __int64 v83; // r8
  struct tagWND *v84; // rcx
  __int64 DCEx; // rbx
  __int64 v86; // rdi
  int v87; // ebx
  __int64 v88; // rbx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  unsigned int ValidItem; // eax
  __int64 v93; // rbx
  __int64 v94; // rcx
  _QWORD *v95; // rbx
  __int64 v96; // rcx
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // r8
  __int64 v101; // r9
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  struct tagMENUWND *v105; // rax
  int v106; // ebx
  __int64 v107; // r14
  int v108; // r14d
  __int64 v109; // rdx
  __int64 v110; // r8
  __int64 v111; // r9
  __int64 v112; // rcx
  __int64 v113; // r8
  __int64 v114; // r9
  int v115; // r12d
  struct tagMENUWND *v116; // rdi
  __int64 v117; // rax
  int v118; // edx
  int BestPos; // eax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int64 v122; // rax
  struct _LARGE_STRING **v123; // r15
  __int64 v124; // rbx
  __int64 v125; // rax
  struct _LARGE_STRING *v126; // r9
  HWND v127; // r8
  __int64 *v128; // rcx
  __int64 v129; // rax
  __int64 v130; // rdx
  __int64 v131; // r8
  __int64 v132; // r9
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // r8
  __int64 v137; // r9
  unsigned int v139; // r13d
  __int64 DPIMetrics; // rax
  int v141; // [rsp+58h] [rbp-B0h]
  __int64 v142[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v143[2]; // [rsp+70h] [rbp-98h]
  struct tagMENUWND *v144; // [rsp+78h] [rbp-90h]
  unsigned __int64 v145; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v146; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v147; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v148; // [rsp+90h] [rbp-78h] BYREF
  __int64 v149; // [rsp+98h] [rbp-70h]
  __int64 v150; // [rsp+A0h] [rbp-68h]
  __int64 v151; // [rsp+A8h] [rbp-60h] BYREF
  struct tagMENUSTATE *v152; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v153; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v154; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v155; // [rsp+D0h] [rbp-38h]
  __int64 v156; // [rsp+D8h] [rbp-30h]
  __int64 v157; // [rsp+E0h] [rbp-28h] BYREF
  struct tagWND *v158; // [rsp+E8h] [rbp-20h]
  __int64 v159; // [rsp+F0h] [rbp-18h]
  __int64 v160; // [rsp+F8h] [rbp-10h] BYREF
  struct tagWND *v161; // [rsp+100h] [rbp-8h]
  __int64 v162; // [rsp+108h] [rbp+0h]
  __int64 v163; // [rsp+110h] [rbp+8h] BYREF
  __int64 v164; // [rsp+118h] [rbp+10h]
  __int64 v165; // [rsp+120h] [rbp+18h]
  __int128 v166; // [rsp+128h] [rbp+20h]
  __int64 *v167[3]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v168[3]; // [rsp+150h] [rbp+48h] BYREF
  __int64 *v169[3]; // [rsp+168h] [rbp+60h] BYREF
  __int64 *v170[3]; // [rsp+180h] [rbp+78h] BYREF
  __int128 v171; // [rsp+198h] [rbp+90h] BYREF
  int **v172[2]; // [rsp+1A8h] [rbp+A0h] BYREF

  v143[0] = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v142, 0LL);
  v10 = *((_QWORD *)a1 + 5);
  v11 = 0LL;
  v154 = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  v148 = 0LL;
  v149 = 0LL;
  v150 = 0LL;
  v145 = 0LL;
  v141 = 0;
  if ( (*(_DWORD *)(v10 + 232) & 0x800) != 0 )
    goto LABEL_28;
  v12 = *(_WORD *)(v10 + 42);
  v13 = 1LL;
  if ( v12 != 668 )
  {
    if ( v12 )
    {
LABEL_28:
      v13 = v11;
      goto LABEL_315;
    }
    if ( a2 != 129 )
    {
      v14 = xxxDefWindowProc(a1, a2, (HWND)a3, a4);
LABEL_27:
      v11 = v14;
      goto LABEL_28;
    }
    FadeInternal = *(unsigned int *)(v10 + 252);
    v9 = *(unsigned __int16 *)(gpsi + 332LL);
    if ( (int)FadeInternal + 320 >= (unsigned int)v9 )
    {
      v20 = *((_QWORD *)a1 + 35);
      if ( v20 )
      {
        v21 = 0LL;
        if ( (_DWORD)FadeInternal )
        {
          while ( !*(_BYTE *)((unsigned int)v21 + v20) )
          {
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 >= (unsigned int)FadeInternal )
              goto LABEL_23;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
          v10 = *((_QWORD *)a1 + 5);
        }
LABEL_23:
        memset(*((void **)a1 + 35), 0, *(unsigned int *)(v10 + 252));
      }
    }
    else
    {
      if ( *(_DWORD *)(v10 + 200) + (int)FadeInternal + 320 < (unsigned int)v9 )
        goto LABEL_28;
      v15 = v9 - 320;
      v16 = (struct tagMENUWND *)Win32AllocPoolZInit((unsigned int)(v9 - 320), 1937208149LL);
      v144 = v16;
      if ( !v16 )
        goto LABEL_28;
      v17 = *((_QWORD *)a1 + 35);
      if ( v17 )
      {
        v18 = 0LL;
        v19 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL);
        if ( v19 )
        {
          while ( !*(_BYTE *)((unsigned int)v18 + v17) )
          {
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= v19 )
              goto LABEL_15;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
        }
LABEL_15:
        Win32FreePool(*((_QWORD *)a1 + 35));
        v16 = v144;
      }
      *((_QWORD *)a1 + 35) = v16;
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL) = v15;
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) = 668;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    v14 = xxxSendTransformableMessageTimeout((__int64 *)a1, a2, (HWND)a3, (struct _LARGE_STRING *)a4, 0, 0, 0LL, 1u, 1);
    goto LABEL_27;
  }
  v22 = *((_QWORD *)a1 + 35);
  v144 = (struct tagMENUWND *)v22;
  v23 = *(_QWORD *)(v22 + 8);
  *(_QWORD *)v22 = a1;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v142, v23);
  if ( *(_QWORD *)v142[0] )
  {
    for ( i = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22 + 16LL) + 600LL); i; i = *(_QWORD *)(i + 48) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v22 + 8) + 64LL) )
        break;
    }
  }
  else
  {
    i = 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
    (MenuStateOwnerLockxxxUnlock *)&v152,
    (struct tagMENUSTATE *)i);
  if ( *(_QWORD *)v142[0] )
    v25 = *(_QWORD *)(*(_QWORD *)v142[0] + 40LL);
  else
    v25 = 0LL;
  FadeInternal = 256LL;
  if ( i && v25 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, 256LL, v9);
    v154 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v154;
    v155 = v25;
    HMLockObject(v25);
    v9 = 1LL;
    v141 = 1;
    if ( !*(_QWORD *)(*(_QWORD *)v142[0] + 64LL)
      || (v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v144 + 16LL) + 600LL),
          v27 = 1,
          *(_QWORD *)v10 == *(_QWORD *)(*(_QWORD *)v142[0] + 64LL)) )
    {
      v27 = 0;
    }
    v28 = *(_DWORD *)(i + 8);
    FadeInternal = 256LL;
    if ( (v28 & 0x100) == 0 || (v28 & 0x200) != 0 )
    {
      v29 = v143[0];
    }
    else if ( v27 )
    {
      v29 = v143[0];
      if ( v143[0] - 512 <= 0xE || v143[0] - 256 <= 9 || v143[0] - 160 <= 0xD )
        goto LABEL_311;
    }
    else
    {
      if ( (unsigned int)xxxCallHandleMenuMessages(i, (__int64 *)a1, v143[0], (__int64)a3, a4) )
      {
LABEL_329:
        ThreadUnlock1(v29, v10, FadeInternal);
        goto LABEL_330;
      }
      v29 = v143[0];
      v9 = 1LL;
      FadeInternal = 256LL;
    }
    goto LABEL_60;
  }
  v29 = v143[0];
  switch ( v143[0] )
  {
    case 0x1E0u:
      if ( !*(_QWORD *)v142[0] )
        goto LABEL_330;
      break;
    case 0x81u:
      break;
    case 0x70u:
      v9 = 0LL;
LABEL_60:
      v10 = (__int64)v144;
      goto LABEL_61;
    default:
      goto LABEL_312;
  }
  v10 = (__int64)v144;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)v144 + 40LL) + 19LL) < 0 )
    goto LABEL_330;
  v29 = v143[0];
  v9 = 0LL;
LABEL_61:
  if ( (unsigned int)v29 <= 0x1E1 )
  {
    if ( (_DWORD)v29 == 481 )
    {
      if ( (_DWORD)v9 )
        v25 = ThreadUnlock1(v29, v10, 256LL);
      if ( v25 )
      {
        v13 = *(_QWORD *)v25;
        goto LABEL_313;
      }
      goto LABEL_330;
    }
    if ( (unsigned int)v29 <= 0x81 )
    {
      if ( (_DWORD)v29 == 129 )
      {
        if ( *(_QWORD *)(v10 + 8) || *(_QWORD *)(v10 + 16) )
        {
          v74 = (_DWORD)v9 == 0;
          goto LABEL_328;
        }
        v73 = MNAllocPopup(1, (void *)v10);
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v142, (__int64)v73);
        if ( *(_QWORD *)v142[0] )
        {
          *((_QWORD *)v144 + 1) = *(_QWORD *)v142[0];
          **(_DWORD **)v142[0] |= 0x40000000u;
          *(_DWORD *)(*(_QWORD *)v142[0] + 80LL) = -1;
          *((_QWORD *)&v166 + 1) = a1;
          *(_QWORD *)&v166 = *(_QWORD *)v142[0] + 16LL;
          v171 = v166;
          HMAssignmentLock(&v171);
LABEL_336:
          if ( v141 )
            ThreadUnlock1(v32, v10, FadeInternal);
          goto LABEL_313;
        }
        goto LABEL_327;
      }
      if ( (unsigned int)v29 <= 0x18 )
      {
        if ( (_DWORD)v29 == 24 )
        {
          if ( !a3 )
            xxxMNCancel(i, 0, 0, 0LL);
          goto LABEL_310;
        }
        v30 = v29 - 3;
        if ( v30 && (v31 = v30 - 2) != 0 )
        {
          v29 = (unsigned int)(v31 - 1);
          if ( (_DWORD)v29 )
          {
            v29 = (unsigned int)(v29 - 9);
            if ( (_DWORD)v29 )
            {
              if ( (_DWORD)v29 == 5 && *(_QWORD *)(*(_QWORD *)(v25 + 40) + 24LL) )
              {
                MNEraseBackground(
                  a3,
                  *(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL),
                  *(_DWORD *)(*((_QWORD *)a1 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 108LL));
                goto LABEL_336;
              }
LABEL_310:
              if ( v141 )
LABEL_311:
                ThreadUnlock1(v29, v10, FadeInternal);
LABEL_312:
              v13 = xxxDefWindowProc(a1, v143[0], (HWND)a3, a4);
              goto LABEL_313;
            }
            SmartObjStackRefBase<tagMENU>::Init(v167, v25);
            v167[2] = 0LL;
            xxxHandleMenuPainting(a1, v167);
            v36 = v167;
LABEL_76:
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v36, v33, v34, v35);
            goto LABEL_327;
          }
          v37 = *(_DWORD *)(i + 8);
          if ( (v37 & 0x100) != 0 )
          {
            if ( (_WORD)a3 )
              goto LABEL_310;
            if ( (v37 & 0x200) != 0 )
              goto LABEL_310;
            if ( (**(_DWORD **)i & 0x80000) != 0 )
              goto LABEL_310;
            LOBYTE(v10) = 1;
            a4 = HMValidateHandleNoSecure(a4, v10, 256LL, v9);
            v38 = safe_cast_fnid_to_PMENUWND(a4);
            if ( !v29 )
              goto LABEL_310;
            if ( v38 )
            {
              v39 = *(_QWORD *)(v38 + 8);
              if ( v39 )
              {
                if ( *(_QWORD *)i == *(_QWORD *)(v39 + 64) )
                  goto LABEL_310;
              }
            }
            v40 = *(_DWORD *)(i + 8);
            if ( (v40 & 0x10000) != 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
            {
              *(_DWORD *)(i + 8) = v40 & 0xFFFEFFFF;
              PostMessage((int)a1, 498, 0, 0);
              goto LABEL_310;
            }
LABEL_88:
            v41 = (int)a1;
LABEL_89:
            PostMessage(v41, 499, 0, 0);
            goto LABEL_327;
          }
          if ( !(_WORD)a3 )
            goto LABEL_327;
          v157 = 0LL;
          v158 = 0LL;
          v159 = 0LL;
          if ( *(_WORD *)(gptiCurrent + 624LL) >= 0x500u )
            goto LABEL_88;
          if ( gpqForegroundPrev
            && IsWindowActivateable(*(const struct tagWND **)(gpqForegroundPrev + 136LL))
            && (v10 = *(_QWORD *)(gpqForegroundPrev + 136LL),
                v29 = *(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) & 0x3FFF,
                (_DWORD)v29 != 668) )
          {
LABEL_95:
            a1 = (struct tagWND *)v10;
          }
          else
          {
            v45 = (int)a1;
            v46 = 0;
            do
            {
              TopWindow = (struct tagWND *)FindNextTopWindow::NextTopWindow((__int64)a1, 0LL, 0);
              a1 = TopWindow;
              if ( !TopWindow )
                break;
              if ( IsWindowActivateable(*((const struct tagWND **)TopWindow + 25)) )
              {
                v10 = *((_QWORD *)a1 + 25);
                v29 = *(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) & 0x3FFF;
                if ( (_DWORD)v29 != 668 )
                  goto LABEL_95;
              }
              v48 = v46++;
            }
            while ( v48 < 0xFF );
            if ( v46 )
            {
              v41 = v45;
              goto LABEL_89;
            }
          }
          if ( !a1 )
            goto LABEL_327;
          v157 = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = &v157;
          v158 = a1;
          HMLockObject(a1);
          v44 = *(_QWORD *)(gptiCurrent + 424LL);
          if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == v44 )
          {
            xxxActivateWindowWithOptions((__int64)a1, 0LL, 0LL, 1);
          }
          else if ( gpqForeground == v44 )
          {
            xxxSetForegroundWindowWithOptions((__int64)a1, 2u, 0, 0);
          }
        }
        else
        {
          v29 = *(_QWORD *)v142[0];
          if ( !*(_QWORD *)(*(_QWORD *)v142[0] + 24LL) )
            goto LABEL_327;
          v49 = (__int64 *)MNGetpItem((__int64)v142, *(_DWORD *)(*(_QWORD *)v142[0] + 84LL));
          v50 = (struct tagWND **)safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v142[0] + 24LL));
          v51 = v50;
          if ( !v49 )
            goto LABEL_327;
          if ( !v50 )
            goto LABEL_327;
          v52 = v50[1];
          if ( !v52 )
            goto LABEL_327;
          v53 = *v50;
          if ( !*v50 )
            goto LABEL_327;
          v54 = *((_QWORD *)v52 + 5);
          v163 = 0LL;
          v164 = 0LL;
          v165 = 0LL;
          v160 = 0LL;
          v161 = 0LL;
          v162 = 0LL;
          v147 = 0;
          v146 = 0;
          v55 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, FadeInternal, v9);
          v160 = *(_QWORD *)(v55 + 408);
          *(_QWORD *)(v55 + 408) = &v160;
          v161 = v53;
          HMLockObject(v53);
          v59 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56, v57, v58);
          v163 = *(_QWORD *)(v59 + 408);
          *(_QWORD *)(v59 + 408) = &v163;
          v164 = v54;
          HMLockObject(v54);
          if ( !*(_DWORD *)(v54 + 64) )
          {
            v60 = *v51;
            _InterlockedAdd(&glSendMessage, 1u);
            xxxSendTransformableMessageTimeout((__int64 *)v60, 0x1E2u, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
          }
          if ( *(_QWORD *)(*(_QWORD *)v142[0] + 40LL)
            && (unsigned int)MNGetpItemIndex(*(_QWORD *)(*(_QWORD *)v142[0] + 40LL), (__int64)v49) != -1 )
          {
            xxxMNPositionHierarchy(
              (__int64 **)v142,
              v49,
              *(_DWORD *)(v54 + 64) + 6,
              *(_DWORD *)(v54 + 68) + 6,
              (int *)&v147,
              (LONG *)&v146,
              0LL);
          }
          xxxSetWindowPos(*v51, 0LL, v147, v146, 0, 0, 1029);
          ThreadUnlock1(v62, v61, v63);
        }
LABEL_163:
        ThreadUnlock1(v44, v42, v43);
        goto LABEL_327;
      }
      v29 = (unsigned int)(v29 - 28);
      if ( !(_DWORD)v29 )
      {
        if ( (*(_DWORD *)(i + 8) & 0x100) == 0 || a1 != *(struct tagWND **)(*(_QWORD *)i + 56LL) )
          goto LABEL_327;
        if ( a3 )
        {
          PostMessage((int)a1, 498, 0, 0);
          v10 = *(_QWORD *)(gptiCurrent + 424LL) - gpqForeground;
          *(_DWORD *)(i + 8) = *(_DWORD *)(i + 8) & 0xFFFEFFFF | (*(_QWORD *)(gptiCurrent + 424LL) != gpqForeground
                                                                ? 0x10000
                                                                : 0);
        }
        v29 = *(_QWORD *)v142[0];
        if ( !*(_QWORD *)(*(_QWORD *)v142[0] + 8LL) )
          goto LABEL_327;
        v70 = *(_QWORD *)(*(_QWORD *)v142[0] + 8LL);
        v71 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, FadeInternal, v9);
        v148 = *(_QWORD *)(v71 + 408);
        *(_QWORD *)(v71 + 408) = &v148;
        v149 = v70;
        HMLockObject(v70);
        if ( !a3 || (v72 = 1, (*(_DWORD *)(i + 8) & 0x10000) != 0) )
          v72 = 2;
        xxxDWP_DoNCActivate(*(struct tagWND **)(*(_QWORD *)v142[0] + 8LL), v72, 1LL);
        goto LABEL_163;
      }
      v29 = (unsigned int)(v29 - 42);
      if ( (_DWORD)v29 )
      {
        v29 = (unsigned int)(v29 - 1);
        if ( (_DWORD)v29 )
        {
          if ( (_DWORD)v29 != 41 )
            goto LABEL_310;
          if ( i && (*(_DWORD *)(i + 8) & 0x400) != 0 )
          {
            v151 = *(_QWORD *)a1;
            xxxUserModeCallback(0x65u, (__int64)&v151, 8u, v9);
          }
          xxxMNDestroyHandler(v144);
          goto LABEL_327;
        }
        if ( (*(_DWORD *)(a4 + 32) & 0x40) == 0 )
          goto LABEL_310;
        v29 = *(_QWORD *)v142[0];
        if ( (**(_DWORD **)v142[0] & 0x8000000) == 0 )
          goto LABEL_310;
        if ( (gfade[12] & 0x10) != 0 )
        {
          zzzStartFade();
        }
        else
        {
          *(_DWORD *)(i + 104) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          SetTimer((unsigned __int64)a1, 65531LL, 0xAu, 0LL, 0);
        }
      }
      else
      {
        if ( (*(_DWORD *)(a4 + 32) & 0x40) == 0 )
          goto LABEL_310;
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000002) == 0x80000002
          && (**(_DWORD **)v142[0] & 0x8000000) != 0
          && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 1
          && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 3
          && !CInputGlobals::WasLastInputJournalling(gpInputGlobals)
          && (GetAppCompatFlags2(1024LL, v10, FadeInternal, v64) & 1) == 0 )
        {
          v65 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL);
          *(_DWORD *)(i + 116) = v65;
          v66 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
          *(_DWORD *)(i + 120) = v66;
          if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
          {
            if ( !(unsigned int)MNCreateAnimationBitmap(i, v65, v66) )
              goto LABEL_133;
            *(_QWORD *)(i + 96) = _GetDCEx(a1, 1LL, 65665LL);
            v67 = (**(_DWORD **)v142[0] >> 4) & 0xF80000 | *(_DWORD *)(i + 8) & 0xFF07FFFF;
            v68 = 0;
            *(_DWORD *)(i + 8) = v67;
            if ( (v67 & 0x180000) == 0 )
              v68 = *(_DWORD *)(i + 116);
            *(_DWORD *)(i + 108) = v68;
            v69 = 0;
            if ( (v67 & 0x600000) == 0 )
              v69 = *(_DWORD *)(i + 120);
            FadeInternal = *(_QWORD *)(i + 136);
            *(_DWORD *)(i + 112) = v69;
          }
          else
          {
            FadeInternal = (__int64)CreateFadeInternal(a1, 0LL, 175, 17, 0);
            if ( !FadeInternal )
              goto LABEL_133;
          }
          *(_DWORD *)(*(_QWORD *)(v25 + 40) + 40LL) |= 8u;
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(
            (__int64 *)a1,
            0x317u,
            (HWND)FadeInternal,
            (struct _LARGE_STRING *)0xE,
            0,
            0,
            0LL,
            1u,
            1);
          *(_DWORD *)(*(_QWORD *)(v25 + 40) + 40LL) &= ~8u;
          v29 = gfade[12];
          if ( (v29 & 0x10) != 0 )
            zzzShowFade();
          goto LABEL_310;
        }
      }
LABEL_133:
      v29 = *(_QWORD *)v142[0];
      **(_DWORD **)v142[0] &= ~0x8000000u;
      goto LABEL_310;
    }
    v10 = 131LL;
    switch ( (_DWORD)v29 )
    {
      case 0x83:
        xxxDefWindowProc(a1, 0x83u, (HWND)a3, a4);
        if ( (*(_DWORD *)(v25 + 124) & 3) != 0 )
        {
          v29 = *(unsigned int *)(GetDPIMetrics() + 28);
          *(_DWORD *)(a4 + 4) += v29;
          *(_DWORD *)(a4 + 12) -= v29;
        }
        goto LABEL_327;
      case 0x84:
        if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
          goto LABEL_310;
        LODWORD(v145) = (__int16)a4;
        HIDWORD(v145) = SWORD1(a4);
        if ( (_DWORD)v9 )
          ThreadUnlock1(v29, 131LL, 256LL);
        if ( PtInRect((_DWORD *)(*((_QWORD *)a1 + 5) + 88LL), v145) )
          goto LABEL_313;
        goto LABEL_330;
      case 0x85:
        if ( (**(_DWORD **)v142[0] & 0x8000000) != 0 )
        {
          xxxValidateRect(a1, 0LL);
        }
        else
        {
          if ( (*(_DWORD *)(v25 + 124) & 3) != 0 )
          {
            if ( (unsigned int)MNIsUAHMenu(v25) )
            {
              v82 = 0LL;
              v83 = 65537LL;
              v84 = *(struct tagWND **)(*(_QWORD *)v142[0] + 16LL);
            }
            else
            {
              v83 = 328833LL;
              v82 = a3;
              v84 = a1;
            }
            DCEx = _GetDCEx(v84, v82, v83);
            xxxMNDrawFullNC(a1);
          }
          else
          {
            if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
            {
              v13 = xxxDefWindowProc(a1, 0x85u, (HWND)a3, a4);
              if ( (unsigned int)MNIsUAHMenu(v25) )
              {
                v32 = *(_QWORD *)v142[0];
                if ( *(_QWORD *)(*(_QWORD *)v142[0] + 16LL) )
                {
                  v88 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v142[0] + 16LL), 0LL, 65537LL);
                  xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v142[0] + 16LL));
                  _ReleaseDC(v88);
                }
              }
              goto LABEL_336;
            }
            if ( (unsigned int)MNIsUAHMenu(v25) )
            {
              v86 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v142[0] + 16LL), 0LL, 65537LL);
              v87 = xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v142[0] + 16LL));
              _ReleaseDC(v86);
              if ( v87 )
                goto LABEL_327;
            }
            DCEx = _GetDCEx(a1, a3, 328833LL);
            MNDrawEdge(v25, DCEx, *((_QWORD *)a1 + 5) + 88LL, 0LL);
          }
          _ReleaseDC(DCEx);
        }
LABEL_327:
        v74 = v141 == 0;
        goto LABEL_328;
    }
    v75 = v29 - 256;
    if ( (_DWORD)v29 != 256 )
    {
      v29 = 2LL;
      v76 = v75 - 2;
      if ( !v76 )
        goto LABEL_199;
      v77 = v76 - 2;
      if ( v77 )
      {
        v78 = v77 - 2;
        if ( v78 )
        {
          v79 = v78 - 13;
          if ( v79 )
          {
            if ( v79 != 205 )
              goto LABEL_310;
            if ( !a3 )
              goto LABEL_327;
            v80 = ValidateHmenu(a3);
            if ( !v80 )
              goto LABEL_327;
            SmartObjStackRefBase<tagMENU>::Init(v168, v80);
            v168[2] = 0LL;
            LockPopupMenu((__int64)v142, (__int64 *)(*(_QWORD *)v142[0] + 40LL), (__int64)v168);
            v36 = (__int64 **)v168;
            goto LABEL_76;
          }
          v10 = 65529LL;
          if ( a3 != (HDC)65529 )
          {
            if ( a3 == (HDC)65531 )
            {
              if ( *(_QWORD *)(i + 96) )
                MNAnimate(i, 1LL);
              goto LABEL_327;
            }
            if ( a3 == (HDC)65534 )
            {
              **(_DWORD **)v142[0] &= ~0x80u;
              xxxMNOpenHierarchy((__int64 **)v142, i);
              goto LABEL_327;
            }
            if ( a3 != (HDC)0xFFFF )
            {
              if ( (unsigned __int64)(a3 - 0x3FFFFFFF) <= 1 )
              {
                if ( (*(_DWORD *)(i + 8) & 8) != 0 )
                  xxxMNDoScroll((__int64)v142, (unsigned int)a3, 0);
                else
                  FindTimer((__int64)a1, (unsigned int)a3, 0, 1, 0LL);
              }
              goto LABEL_327;
            }
            **(_DWORD **)v142[0] &= ~0x80u;
            goto LABEL_190;
          }
          FindTimer((__int64)a1, 65529LL, 0, 1, 0LL);
          if ( (*(_DWORD *)(i + 8) & 0x1000) == 0 )
            goto LABEL_327;
          goto LABEL_195;
        }
LABEL_199:
        xxxMNChar((__int64 **)v142, i, (unsigned int)a3);
        goto LABEL_327;
      }
    }
    xxxMNKeyDown((__int64 **)v142, i, (unsigned int)a3);
    goto LABEL_327;
  }
  if ( (unsigned int)v29 > 0x2A3 )
  {
    v29 = (unsigned int)(v29 - 791);
    if ( (_DWORD)v29 )
    {
      if ( (_DWORD)v29 != 1 )
        goto LABEL_310;
      xxxMenuDraw(a3, v25, (ULONG_PTR)a1);
    }
    else
    {
      if ( (a4 & 2) == 0 || (*(_DWORD *)(v25 + 124) & 3) == 0 )
      {
        v13 = xxxDefWindowProc(a1, 0x317u, (HWND)a3, a4);
        if ( !(unsigned int)MNIsUAHMenu(v25)
          || !*(_QWORD *)(*(_QWORD *)v142[0] + 16LL)
          || !(unsigned int)xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v142[0] + 16LL)) )
        {
          v32 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
          if ( (_DWORD)v32 == -2147352576 )
            MNDrawEdge(v25, a3, *((_QWORD *)a1 + 5) + 88LL, 0LL);
        }
        goto LABEL_336;
      }
      if ( a3 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 && (GreGetLayout(a3) & 1) == 0 )
      {
        v139 = GreSetLayout(
                 a3,
                 (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL)),
                 1LL);
      }
      else
      {
        LODWORD(v13) = 0;
        v139 = 0;
      }
      xxxMNDrawFullNC(a1);
      if ( (_DWORD)v13 )
        GreSetLayout(
          a3,
          (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL)),
          v139);
      GreGetDCPoint(a3, 8LL, &v145);
      DPIMetrics = GetDPIMetrics();
      GreSetWindowOrg(a3, v145 - 3, HIDWORD(v145) - *(_DWORD *)(DPIMetrics + 28) - 3);
      xxxDefWindowProc(a1, 0x317u, (HWND)a3, a4 & 0xFFFFFFFFFFFFFFFDuLL);
      GreSetWindowOrg(a3, v145, SHIDWORD(v145));
    }
    goto LABEL_327;
  }
  if ( (_DWORD)v29 == 675 )
  {
    *(_DWORD *)(i + 8) ^= ((unsigned __int16)*(_DWORD *)(i + 8) ^ (unsigned __int16)~(unsigned __int16)(*(_DWORD *)(i + 8) >> 1)) & 0x4000;
    **(_DWORD **)v142[0] &= ~0x100000u;
    MNSetTimerToAutoDismiss((struct tagMENUSTATE *)i, a1);
    v10 = *(_QWORD *)v142[0];
    v29 = *(_QWORD *)(*(_QWORD *)i + 56LL);
    if ( *(_QWORD *)(*(_QWORD *)v142[0] + 16LL) == v29 )
      xxxMNSelectItem((__int64 **)v142, i, -1);
    goto LABEL_327;
  }
  if ( (unsigned int)v29 <= 0x1ED )
  {
    switch ( (_DWORD)v29 )
    {
      case 0x1ED:
        v29 = *(unsigned int *)(*(_QWORD *)(v25 + 40) + 44LL);
        if ( (unsigned __int64)a3 < v29 || (unsigned __int64)a3 >= 0xFFFFFFFC )
          xxxMNButtonDown((__int64 **)v142, i, (unsigned int)a3, 1LL);
        goto LABEL_327;
      case 0x1E2:
        if ( *(_QWORD *)(*(_QWORD *)v142[0] + 8LL) )
        {
          v97 = *(_QWORD *)(*(_QWORD *)v142[0] + 8LL);
          v98 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, 256LL, v9);
          v148 = *(_QWORD *)(v98 + 408);
          *(_QWORD *)(v98 + 408) = &v148;
          v149 = v97;
          HMLockObject(v97);
          SmartObjStackRefBase<tagMENU>::Init(v169, v25);
          v169[2] = 0LL;
          xxxMNCompute(v169, *(_QWORD *)(*(_QWORD *)v142[0] + 8LL), (__int64)a1, 0, 0, 0, 0LL);
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v169, v99, v100, v101);
          ThreadUnlock1(v103, v102, v104);
        }
        v105 = _MonitorFromWindowInternal(a1, 1, 0);
        v106 = *(_DWORD *)(v25 + 64);
        v144 = v105;
        v107 = (__int64)v105;
        SmartObjStackRefBase<tagMENU>::Init(v170, v25);
        v170[2] = 0LL;
        v108 = MNCheckScroll((__int64 **)v142, v170, v107);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v170, v109, v110, v111);
        if ( a3 )
        {
          v113 = 0LL;
          v114 = 0LL;
          v115 = (8 * (_BYTE)a3) & 0x20 | 0x214;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
          {
            v153 = 0uLL;
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v172, *(_QWORD *)v142[0]);
            v116 = v144;
            MNGetPopupBoundsRect(v172, (__int64)v144, &v153, 1);
            v117 = *((_QWORD *)a1 + 5);
            v118 = *(_DWORD *)(v117 + 92);
            LODWORD(v144) = *(_DWORD *)(v117 + 88);
            HIDWORD(v144) = v118;
            BestPos = FindBestPos(
                        (int)v144,
                        v118,
                        v106,
                        v108,
                        (__int64)&v153,
                        0,
                        (__int64)v142,
                        (__int64)v116,
                        (__int64)v144);
            v113 = (unsigned int)(__int16)BestPos;
            v114 = (unsigned int)SHIWORD(BestPos);
          }
          else
          {
            v115 |= 2u;
          }
          xxxSetWindowPos(a1, 0LL, v113, v114, v106 + 6, v108 + 6, v115);
        }
        if ( v141 )
          ThreadUnlock1(v112, v10, FadeInternal);
        v13 = (unsigned __int16)v106 | ((unsigned __int16)v108 << 16);
        goto LABEL_313;
      case 0x1E3:
        v13 = xxxMNOpenHierarchy((__int64 **)v142, i);
        if ( v141 )
          ThreadUnlock1(v96, v10, FadeInternal);
        if ( v13 == -1 )
          goto LABEL_330;
        break;
      case 0x1E4:
LABEL_190:
        xxxMNCloseHierarchy(*(_QWORD *)v142[0], i);
        goto LABEL_327;
      case 0x1E5:
        v29 = *(unsigned int *)(*(_QWORD *)(v25 + 40) + 44LL);
        if ( (unsigned __int64)a3 < v29 || (unsigned __int64)a3 >= 0xFFFFFFFC )
        {
          v95 = (_QWORD *)xxxMNSelectItem((__int64 **)v142, i, (int)a3);
          if ( v95 )
          {
            if ( v141 )
              ThreadUnlock1(v29, v10, FadeInternal);
            v13 = *(unsigned __int16 *)(*v95 + 4LL) | (unsigned __int64)(v95[2] != 0LL ? 0x10 : 0);
            goto LABEL_313;
          }
        }
        goto LABEL_327;
      case 0x1E6:
        xxxMNCancel(i, (unsigned int)a3, (unsigned __int16)a4, 0LL);
        goto LABEL_327;
      case 0x1E7:
        ValidItem = MNFindNextValidItem(v25, 0xFFFFFFFFLL, 1LL, 1LL);
        v93 = (int)ValidItem;
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout((__int64 *)a1, 0x1E5u, (HWND)ValidItem, 0LL, 0, 0, 0LL, 1u, 1);
        if ( v141 )
          ThreadUnlock1(v94, v10, FadeInternal);
        v13 = v93;
        goto LABEL_313;
      case 0x1EB:
        v13 = xxxMNFindWindowFromPoint((__int64 **)v142, a3, a4, v9);
        if ( v141 )
          ThreadUnlock1(v90, v89, v91);
        if ( !IsMFMWFPWindow(v13) )
          goto LABEL_313;
        break;
      case 0x1EC:
        xxxPlayEventSound(5LL);
        xxxShowWindowEx(a1, BYTE1(*(_DWORD *)(i + 8)) & 1 | 4, 0);
        goto LABEL_327;
      default:
        goto LABEL_310;
    }
    if ( v13 )
    {
      v13 = *(_QWORD *)v13;
      goto LABEL_313;
    }
    goto LABEL_330;
  }
  switch ( (_DWORD)v29 )
  {
    case 0x1EE:
      xxxMNMouseMove((__int64 **)v142, i, a4);
      goto LABEL_327;
    case 0x1EF:
      v29 = *(unsigned int *)(*(_QWORD *)(v25 + 40) + 44LL);
      if ( (unsigned __int64)a3 < v29 || (unsigned __int64)a3 >= 0xFFFFFFFC )
        xxxMNButtonUp(v142, i, (int)a3);
      goto LABEL_327;
    case 0x1F0:
      if ( (_DWORD)v9 )
        ThreadUnlock1(v29, v10, 256LL);
      v13 = (unsigned __int16)MNSetTimerToOpenHierarchy((__int64)v142);
      goto LABEL_313;
    case 0x1F1:
      xxxMNDoubleClick(i, (__int64)v142, (int)a3);
      goto LABEL_327;
    case 0x1F2:
      xxxActivateWindowWithOptions(*(_QWORD *)(*(_QWORD *)v142[0] + 16LL), 0LL, 0LL, 1);
      goto LABEL_327;
  }
  if ( (_DWORD)v29 != 499 )
  {
    if ( (_DWORD)v29 != 500 )
      goto LABEL_310;
    if ( (_DWORD)v9 )
      ThreadUnlock1(v29, v10, 256LL);
    v81 = 0;
    if ( (*(_DWORD *)(i + 8) & 0x80u) == 0 )
      goto LABEL_330;
    if ( !*(_QWORD *)(*(_QWORD *)v142[0] + 8LL) )
      goto LABEL_330;
    if ( !IsMFMWFPWindow(*(_QWORD *)(i + 64)) )
      goto LABEL_330;
    v121 = safe_cast_fnid_to_PMENUWND(v120);
    if ( !v121 )
      goto LABEL_330;
    v122 = *(_QWORD *)(v121 + 8);
    if ( !v122 )
      goto LABEL_330;
    v123 = *(struct _LARGE_STRING ***)(v122 + 40);
    if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= ~0x100000u;
    ++*(_DWORD *)(i + 40);
    v124 = *(_QWORD *)(*(_QWORD *)v142[0] + 8LL);
    v125 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, FadeInternal, v9);
    v148 = *(_QWORD *)(v125 + 408);
    *(_QWORD *)(v125 + 408) = &v148;
    v149 = v124;
    HMLockObject(v124);
    *(_DWORD *)(i + 8) |= 0x8000u;
    v126 = 0LL;
    if ( v123 )
      v126 = *v123;
    v127 = (HWND)*(unsigned int *)(i + 72);
    v128 = *(__int64 **)(*(_QWORD *)v142[0] + 8LL);
    _InterlockedAdd(&glSendMessage, 1u);
    v129 = xxxSendTransformableMessageTimeout(v128, 0x123u, v127, v126, 0, 0, 0LL, 1u, 1);
    v133 = *(unsigned int *)(i + 8);
    LODWORD(v133) = v133 & 0xFFFF7FFF;
    *(_DWORD *)(i + 8) = v133;
    if ( v129 != 1 )
    {
      *(_DWORD *)(i + 8) = v133 | 0x2000;
      MNCheckButtonDownState(i, v130, v131, v132);
      if ( (*(_DWORD *)(i + 8) & 0x100) == 0 )
        xxxMNSetCapture((__int64 **)v142, i, v136, v137);
      ThreadUnlock1(v135, v134, v136);
      xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1);
      goto LABEL_330;
    }
    ThreadUnlock1(v133, v130, v131);
    if ( (unsigned int)xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1) )
      goto LABEL_330;
    goto LABEL_196;
  }
LABEL_195:
  v81 = v141;
LABEL_196:
  xxxEndMenuLoop(i, *(_QWORD *)i);
  if ( (*(_DWORD *)(i + 8) & 0x100) != 0 )
    xxxMNEndMenuState(i);
  v74 = v81 == 0;
LABEL_328:
  if ( !v74 )
    goto LABEL_329;
LABEL_330:
  v13 = 0LL;
LABEL_313:
  if ( v152 )
    xxxUnlockMenuStateInternal(v152, 0);
LABEL_315:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v142, v10, FadeInternal, v9);
  return v13;
}
