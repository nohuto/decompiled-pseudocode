/*
 * XREFs of xxxMenuWindowProc @ 0x1C0226F00
 * Callers:
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E5450 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00146C4 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 *     MNIsUAHMenu @ 0x1C0028E30 (MNIsUAHMenu.c)
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C003795C (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxDefWindowProc @ 0x1C0054BB0 (xxxDefWindowProc.c)
 *     GreGetLayout @ 0x1C0069560 (GreGetLayout.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     FindTimer @ 0x1C007A674 (FindTimer.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00E0868 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C00EFC04 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     GreSetWindowOrg @ 0x1C00F043C (GreSetWindowOrg.c)
 *     xxxPlayEventSound @ 0x1C01037C0 (xxxPlayEventSound.c)
 *     xxxValidateRect @ 0x1C01063F4 (xxxValidateRect.c)
 *     xxxSendUAHMenuMessage @ 0x1C0128BAC (xxxSendUAHMenuMessage.c)
 *     xxxMenuDraw @ 0x1C01294A0 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C012A0B0 (xxxMNCompute.c)
 *     MNGetpItemIndex @ 0x1C012A92C (MNGetpItemIndex.c)
 *     GetDPIMetrics @ 0x1C012C10C (GetDPIMetrics.c)
 *     GetAppCompatFlags2 @ 0x1C012DD40 (GetAppCompatFlags2.c)
 *     xxxDWP_DoNCActivate @ 0x1C012EEEC (xxxDWP_DoNCActivate.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C0133A90 (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C013A314 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C013A73C (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0165234 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     xxxValidateClassAndSize @ 0x1C0165268 (xxxValidateClassAndSize.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E1360 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01E85C8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     zzzShowFade @ 0x1C01E9CE8 (zzzShowFade.c)
 *     zzzStartFade @ 0x1C01E9D50 (zzzStartFade.c)
 *     _SetTimer @ 0x1C01EBF84 (_SetTimer.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0210128 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocPopup @ 0x1C0210288 (MNAllocPopup.c)
 *     MNCreateAnimationBitmap @ 0x1C0210310 (MNCreateAnimationBitmap.c)
 *     xxxMNEndMenuState @ 0x1C0210700 (xxxMNEndMenuState.c)
 *     xxxUserModeCallback @ 0x1C021FB04 (xxxUserModeCallback.c)
 *     xxxEndMenuLoop @ 0x1C021FD50 (xxxEndMenuLoop.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C022135C (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0221584 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C0221720 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C022177C (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C0221930 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0221A34 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C0221E38 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0221FC4 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     IsMFMWFPWindow @ 0x1C0222630 (IsMFMWFPWindow.c)
 *     LockPopupMenu @ 0x1C02226BC (LockPopupMenu.c)
 *     MNCheckButtonDownState @ 0x1C022279C (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1C02227EC (MNGetpItem.c)
 *     xxxCallHandleMenuMessages @ 0x1C0222BB0 (xxxCallHandleMenuMessages.c)
 *     xxxMNButtonDown @ 0x1C0222CDC (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C0222DDC (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C0223248 (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C02236C0 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C0223C50 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C0223FC0 (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0224DD8 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C02267B8 (xxxMNSetCapture.c)
 *     MNFindNextValidItem @ 0x1C02482EC (MNFindNextValidItem.c)
 *     MNAnimate @ 0x1C0249908 (MNAnimate.c)
 *     MNDrawEdge @ 0x1C0249D34 (MNDrawEdge.c)
 *     MNEraseBackground @ 0x1C0249E18 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0249F5C (xxxMNDrawFullNC.c)
 *     FindBestPos @ 0x1C024BF34 (FindBestPos.c)
 */

__int64 __fastcall xxxMenuWindowProc(struct tagWND *a1, unsigned int a2, HDC a3, __int64 a4)
{
  HDC i; // rsi
  __int64 v9; // rdx
  HDC FadeInternal; // r8
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdx
  _QWORD *v14; // r10
  unsigned __int64 v15; // rcx
  __int64 v16; // r12
  __int64 ThreadWin32Thread; // rax
  __int64 v18; // r9
  int v19; // eax
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 **v24; // rcx
  int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r8d
  int v29; // ecx
  bool v30; // al
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  int v34; // esi
  unsigned int v35; // ebx
  struct tagWND *TopWindow; // rax
  unsigned int v37; // eax
  __int64 *v38; // rsi
  struct tagWND **v39; // rax
  unsigned int v40; // r10d
  struct tagWND **v41; // rbx
  struct tagWND *v42; // r15
  struct tagWND *v43; // r14
  __int64 v44; // r15
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rax
  struct tagWND *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  bool v53; // zf
  unsigned int v54; // edx
  unsigned int v55; // r8d
  unsigned int v56; // ecx
  int v57; // eax
  int v58; // eax
  __int64 v59; // rbx
  __int64 v60; // rax
  void *v61; // rax
  bool v62; // zf
  __int64 v63; // rax
  int v64; // r12d
  HDC v65; // rdx
  __int64 v66; // r8
  struct tagWND *v67; // rcx
  __int64 DCEx; // rbx
  __int64 v69; // rdi
  int v70; // ebx
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int ValidItem; // eax
  __int64 v76; // rbx
  __int64 v77; // rcx
  _QWORD *v78; // rbx
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // r8
  struct tagMONITOR *v88; // rax
  int v89; // ebx
  __int64 v90; // r13
  int v91; // esi
  __int64 v92; // rdx
  __int64 v93; // r8
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // r9
  int v97; // r15d
  __int64 v98; // rax
  int v99; // edx
  int BestPos; // eax
  __int64 v101; // rcx
  __int64 v102; // rax
  __int64 v103; // rax
  struct _LARGE_STRING **v104; // r14
  __int64 v105; // rbx
  __int64 v106; // rax
  struct _LARGE_STRING *v107; // r9
  unsigned __int64 v108; // r8
  __int64 *v109; // rcx
  __int64 v110; // rax
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // rcx
  int v115; // eax
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  unsigned int v120; // r12d
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // r8
  __int64 DPIMetrics; // rax
  int v125; // [rsp+58h] [rbp-B0h]
  __int64 v126[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct tagMENUWND *v127; // [rsp+70h] [rbp-98h]
  unsigned __int64 v128; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v129; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v130; // [rsp+84h] [rbp-84h] BYREF
  __int64 v131; // [rsp+88h] [rbp-80h] BYREF
  __int64 v132; // [rsp+90h] [rbp-78h]
  __int64 v133; // [rsp+98h] [rbp-70h]
  __int64 v134; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v135; // [rsp+A8h] [rbp-60h] BYREF
  struct tagMENUSTATE *v136; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v137; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v138; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v139; // [rsp+D0h] [rbp-38h]
  __int64 v140; // [rsp+D8h] [rbp-30h]
  __int64 v141; // [rsp+E0h] [rbp-28h] BYREF
  struct tagWND *v142; // [rsp+E8h] [rbp-20h]
  __int64 v143; // [rsp+F0h] [rbp-18h]
  __int64 v144; // [rsp+F8h] [rbp-10h] BYREF
  struct tagWND *v145; // [rsp+100h] [rbp-8h]
  __int64 v146; // [rsp+108h] [rbp+0h]
  __int64 v147; // [rsp+110h] [rbp+8h] BYREF
  __int64 v148; // [rsp+118h] [rbp+10h]
  __int64 v149; // [rsp+120h] [rbp+18h]
  __int128 v150; // [rsp+128h] [rbp+20h]
  __int64 *v151[3]; // [rsp+138h] [rbp+30h] BYREF
  _QWORD v152[3]; // [rsp+150h] [rbp+48h] BYREF
  __int64 *v153[3]; // [rsp+168h] [rbp+60h] BYREF
  __int64 *v154[3]; // [rsp+180h] [rbp+78h] BYREF
  __int128 v155; // [rsp+198h] [rbp+90h] BYREF
  int **v156[2]; // [rsp+1A8h] [rbp+A0h] BYREF

  SmartObjStackRefBase<tagPOPUPMENU>::Init(v126, 0LL);
  v138 = 0LL;
  i = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  v131 = 0LL;
  v132 = 0LL;
  v133 = 0LL;
  v125 = 0;
  v128 = 0LL;
  if ( !(unsigned int)xxxValidateClassAndSize((__int64)a1, a2, (unsigned __int64)a3, (HICON)a4, 668, 129, &v134) )
  {
    v11 = v134;
    goto LABEL_290;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    v11 = xxxSendTransformableMessageTimeout(
            (__int64 *)a1,
            a2,
            (unsigned __int64)a3,
            (struct _LARGE_STRING *)a4,
            0,
            0,
            0LL,
            1u,
            1);
    goto LABEL_290;
  }
  v12 = *((_QWORD *)a1 + 35);
  v127 = (struct tagMENUWND *)v12;
  v13 = *(_QWORD *)(v12 + 8);
  *(_QWORD *)v12 = a1;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v126, v13);
  if ( *(_QWORD *)v126[0] )
  {
    for ( i = *(HDC *)(*(_QWORD *)(*(_QWORD *)v12 + 16LL) + 600LL); i; i = (HDC)*((_QWORD *)i + 6) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v12 + 8) + 64LL) )
        break;
    }
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
    (MenuStateOwnerLockxxxUnlock *)&v136,
    (struct tagMENUSTATE *)i);
  v15 = v126[0];
  if ( *(_QWORD **)v126[0] == v14 )
  {
    v16 = (__int64)v14;
  }
  else
  {
    v15 = *(_QWORD *)v126[0];
    v16 = *(_QWORD *)(*(_QWORD *)v126[0] + 40LL);
  }
  v11 = 1LL;
  if ( i && v16 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, (__int64)FadeInternal);
    v138 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v138;
    v139 = v16;
    HMLockObject(v16);
    v14 = 0LL;
    v18 = 1LL;
    v125 = 1;
    if ( !*(_QWORD *)(*(_QWORD *)v126[0] + 64LL)
      || (FadeInternal = *(HDC *)v126[0],
          v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v127 + 16LL) + 600LL),
          v19 = 1,
          *(_QWORD *)v9 == *(_QWORD *)(*(_QWORD *)v126[0] + 64LL)) )
    {
      v19 = 0;
    }
    v15 = *((unsigned int *)i + 2);
    if ( (v15 & 0x100) != 0 && (v15 & 0x200) == 0 )
    {
      if ( v19 )
      {
        if ( a2 - 512 <= 0xE || a2 - 256 <= 9 || a2 - 160 <= 0xD )
          goto LABEL_285;
      }
      else
      {
        v20 = xxxCallHandleMenuMessages((__int64)i, (__int64 *)a1, a2, (__int64)a3, a4);
        v14 = 0LL;
        if ( v20 )
        {
LABEL_171:
          ThreadUnlock1(v15, v9, FadeInternal);
LABEL_270:
          v14 = 0LL;
          goto LABEL_193;
        }
        v18 = 1LL;
      }
    }
    goto LABEL_26;
  }
  switch ( a2 )
  {
    case 0x1E0u:
      if ( *(_QWORD **)v126[0] == v14 )
        goto LABEL_193;
      break;
    case 0x81u:
      break;
    case 0x70u:
      v18 = (unsigned int)v14;
LABEL_26:
      v9 = (__int64)v127;
      goto LABEL_27;
    default:
      goto LABEL_286;
  }
  v9 = (__int64)v127;
  v15 = *(_QWORD *)(*(_QWORD *)v127 + 40LL);
  if ( *(char *)(v15 + 19) < (char)v14 )
    goto LABEL_193;
  v18 = (unsigned int)v14;
LABEL_27:
  if ( a2 > 0x1E1 )
  {
    if ( a2 <= 0x2A3 )
    {
      if ( a2 == 675 )
      {
        *((_DWORD *)i + 2) ^= ((unsigned __int16)*((_DWORD *)i + 2) ^ (unsigned __int16)~(unsigned __int16)(*((_DWORD *)i + 2) >> 1)) & 0x4000;
        **(_DWORD **)v126[0] &= ~0x100000u;
        MNSetTimerToAutoDismiss((struct tagMENUSTATE *)i, a1);
        v9 = *(_QWORD *)v126[0];
        v15 = *(_QWORD *)(*(_QWORD *)i + 56LL);
        if ( *(_QWORD *)(*(_QWORD *)v126[0] + 16LL) == v15 )
          xxxMNSelectItem((__int64 **)v126, (__int64)i, -1);
        goto LABEL_303;
      }
      if ( a2 <= 0x1ED )
      {
        switch ( a2 )
        {
          case 0x1EDu:
            v15 = *(unsigned int *)(*(_QWORD *)(v16 + 40) + 44LL);
            if ( (unsigned __int64)a3 < v15 || (unsigned __int64)a3 >= 0xFFFFFFFC )
              xxxMNButtonDown((__int64 **)v126, (__int64)i, (unsigned int)a3, 1);
            goto LABEL_303;
          case 0x1E2u:
            if ( *(_QWORD **)(*(_QWORD *)v126[0] + 8LL) != v14 )
            {
              v81 = *(_QWORD *)(*(_QWORD *)v126[0] + 8LL);
              v82 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, (__int64)FadeInternal);
              v131 = *(_QWORD *)(v82 + 408);
              *(_QWORD *)(v82 + 408) = &v131;
              v132 = v81;
              HMLockObject(v81);
              SmartObjStackRefBase<tagMENU>::Init(v153, v16);
              v153[2] = 0LL;
              xxxMNCompute(v153, *(_QWORD *)(*(_QWORD *)v126[0] + 8LL), (__int64)a1, 0, 0, 0, 0LL);
              SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v153, v83, v84);
              ThreadUnlock1(v86, v85, v87);
            }
            v88 = _MonitorFromWindowInternal(a1, 1, 0);
            v89 = *(_DWORD *)(v16 + 64);
            v90 = (__int64)v88;
            SmartObjStackRefBase<tagMENU>::Init(v154, v16);
            v154[2] = 0LL;
            v91 = MNCheckScroll((__int64 **)v126, v154, v90);
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v154, v92, v93);
            if ( a3 )
            {
              v95 = 0LL;
              v96 = 0LL;
              v97 = (8 * (_BYTE)a3) & 0x20 | 0x214;
              if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
              {
                v137 = 0uLL;
                SmartObjStackRefBase<tagPOPUPMENU>::Init(v156, *(_QWORD *)v126[0]);
                MNGetPopupBoundsRect(v156, v90, &v137, 1);
                v98 = *((_QWORD *)a1 + 5);
                v99 = *(_DWORD *)(v98 + 92);
                LODWORD(v127) = *(_DWORD *)(v98 + 88);
                HIDWORD(v127) = v99;
                BestPos = FindBestPos((int)v127, v99, v89, v91, (__int64)&v137, 0, (__int64)v126, v90, (__int64)v127);
                v95 = (unsigned int)(__int16)BestPos;
                v96 = (unsigned int)SHIWORD(BestPos);
              }
              else
              {
                v97 |= 2u;
              }
              xxxSetWindowPos(a1, 0LL, v95, v96, v89 + 6, v91 + 6, v97);
            }
            if ( v125 )
              ThreadUnlock1(v94, v9, FadeInternal);
            v11 = (unsigned __int16)v89 | ((unsigned __int16)v91 << 16);
            goto LABEL_288;
          case 0x1E3u:
            v11 = xxxMNOpenHierarchy((__int64 **)v126, (__int64)i);
            v80 = 0LL;
            if ( v125 )
            {
              ThreadUnlock1(v79, v9, FadeInternal);
              v80 = 0LL;
            }
            if ( v11 == -1 || !v11 )
              goto LABEL_287;
            break;
          case 0x1E4u:
LABEL_161:
            xxxMNCloseHierarchy(*(_QWORD *)v126[0], (__int64)i);
            goto LABEL_303;
          case 0x1E5u:
            v15 = *(unsigned int *)(*(_QWORD *)(v16 + 40) + 44LL);
            if ( (unsigned __int64)a3 < v15 || (unsigned __int64)a3 >= 0xFFFFFFFC )
            {
              v78 = (_QWORD *)xxxMNSelectItem((__int64 **)v126, (__int64)i, (int)a3);
              if ( v78 )
              {
                if ( v125 )
                  ThreadUnlock1(v15, v9, FadeInternal);
                v11 = *(unsigned __int16 *)(*v78 + 4LL) | (unsigned __int64)(v78[2] != 0LL ? 0x10 : 0);
                goto LABEL_288;
              }
            }
            goto LABEL_303;
          case 0x1E6u:
            xxxMNCancel((__int64)i, (unsigned int)a3, (unsigned __int16)a4, 0LL);
            goto LABEL_303;
          case 0x1E7u:
            ValidItem = MNFindNextValidItem(v16, 0xFFFFFFFFLL, 1LL, 1LL);
            v76 = (int)ValidItem;
            _InterlockedAdd(&glSendMessage, 1u);
            xxxSendTransformableMessageTimeout((__int64 *)a1, 0x1E5u, ValidItem, 0LL, 0, 0, 0LL, 1u, 1);
            if ( v125 )
              ThreadUnlock1(v77, v9, FadeInternal);
            v11 = v76;
            goto LABEL_288;
          case 0x1EBu:
            v11 = xxxMNFindWindowFromPoint((__int64 **)v126, a3, a4);
            if ( v125 )
              ThreadUnlock1(v73, v72, v74);
            if ( !IsMFMWFPWindow(v11) )
              goto LABEL_288;
            if ( !v11 )
              goto LABEL_193;
            break;
          case 0x1ECu:
            xxxPlayEventSound(5LL);
            xxxShowWindowEx(a1, BYTE1(*((_DWORD *)i + 2)) & 1 | 4, 0);
            goto LABEL_303;
          default:
            goto LABEL_284;
        }
        v11 = *(_QWORD *)v11;
        goto LABEL_288;
      }
      switch ( a2 )
      {
        case 0x1EEu:
          xxxMNMouseMove((__int64 **)v126, (__int64)i, a4);
          goto LABEL_303;
        case 0x1EFu:
          v15 = *(unsigned int *)(*(_QWORD *)(v16 + 40) + 44LL);
          if ( (unsigned __int64)a3 < v15 || (unsigned __int64)a3 >= 0xFFFFFFFC )
            xxxMNButtonUp(v126, (__int64)i, (int)a3);
          goto LABEL_303;
        case 0x1F0u:
          if ( (_DWORD)v18 )
            ThreadUnlock1(v15, v9, FadeInternal);
          v11 = (unsigned __int16)MNSetTimerToOpenHierarchy((__int64)v126);
          goto LABEL_288;
        case 0x1F1u:
          xxxMNDoubleClick((__int64)i, (__int64)v126, (int)a3);
          goto LABEL_303;
        case 0x1F2u:
          xxxActivateWindowWithOptions(*(_QWORD *)(*(_QWORD *)v126[0] + 16LL), 0LL, 0LL, 1);
          goto LABEL_303;
      }
      if ( a2 != 499 )
      {
        if ( a2 != 500 )
          goto LABEL_284;
        if ( (_DWORD)v18 )
        {
          ThreadUnlock1(v15, v9, FadeInternal);
          v14 = 0LL;
        }
        v64 = (int)v14;
        if ( (*((_DWORD *)i + 2) & 0x80u) == 0 )
          goto LABEL_193;
        if ( *(_QWORD **)(*(_QWORD *)v126[0] + 8LL) == v14 )
          goto LABEL_193;
        if ( !IsMFMWFPWindow(*((_QWORD *)i + 8)) )
          goto LABEL_193;
        v102 = safe_cast_fnid_to_PMENUWND(v101);
        if ( !v102 )
          goto LABEL_193;
        v103 = *(_QWORD *)(v102 + 8);
        if ( !v103 )
          goto LABEL_193;
        v104 = *(struct _LARGE_STRING ***)(v103 + 40);
        if ( ((_DWORD)i[2] & 0x100) == 0 )
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 396LL) &= ~0x100000u;
        ++*((_DWORD *)i + 10);
        v105 = *(_QWORD *)(*(_QWORD *)v126[0] + 8LL);
        v106 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, (__int64)FadeInternal);
        v131 = *(_QWORD *)(v106 + 408);
        *(_QWORD *)(v106 + 408) = &v131;
        v132 = v105;
        HMLockObject(v105);
        *((_DWORD *)i + 2) |= 0x8000u;
        v107 = 0LL;
        if ( v104 )
          v107 = *v104;
        v108 = *((unsigned int *)i + 18);
        v109 = *(__int64 **)(*(_QWORD *)v126[0] + 8LL);
        _InterlockedAdd(&glSendMessage, 1u);
        v110 = xxxSendTransformableMessageTimeout(v109, 0x123u, v108, v107, 0, 0, 0LL, 1u, 1);
        v114 = *((unsigned int *)i + 2);
        LODWORD(v114) = v114 & 0xFFFF7FFF;
        *((_DWORD *)i + 2) = v114;
        if ( v110 != 1 )
        {
          *((_DWORD *)i + 2) = v114 | 0x2000;
          MNCheckButtonDownState((__int64)i, v111, v112, v113);
          if ( ((_DWORD)i[2] & 0x100) == 0 )
            xxxMNSetCapture((__int64 **)v126, (__int64)i);
          ThreadUnlock1(v117, v116, v118);
          xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1);
          goto LABEL_270;
        }
        ThreadUnlock1(v114, v111, v112);
        v115 = xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1);
        v14 = 0LL;
        if ( v115 )
          goto LABEL_193;
        goto LABEL_167;
      }
LABEL_166:
      v64 = v125;
LABEL_167:
      xxxEndMenuLoop((__int64)i, *(_QWORD *)i);
      if ( ((_DWORD)i[2] & 0x100) != 0 )
        xxxMNEndMenuState((__int64)i);
      v14 = 0LL;
      v53 = v64 == 0;
      goto LABEL_170;
    }
    if ( a2 != 791 )
    {
      if ( a2 != 792 )
        goto LABEL_284;
      xxxMenuDraw(a3, v16, (ULONG_PTR)a1);
      goto LABEL_303;
    }
    if ( (a4 & 2) == 0 || (*(_DWORD *)(v16 + 124) & 3) == 0 )
    {
      v11 = xxxDefWindowProc(a1, 791LL, (unsigned __int64)a3, (HICON)a4);
      if ( !(unsigned int)MNIsUAHMenu(v16)
        || !*(_QWORD *)(*(_QWORD *)v126[0] + 16LL)
        || !(unsigned int)xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v126[0] + 16LL)) )
      {
        v21 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
        if ( (_DWORD)v21 == -2147352576 )
          MNDrawEdge(v16, a3, *((_QWORD *)a1 + 5) + 88LL, 0LL);
      }
      goto LABEL_311;
    }
    if ( a3 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 )
    {
      if ( (GreGetLayout(a3) & 1) == 0 )
      {
        v120 = GreSetLayout(
                 a3,
                 (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL)),
                 1LL);
LABEL_300:
        xxxMNDrawFullNC(a1);
        if ( (_DWORD)v11 )
          GreSetLayout(
            a3,
            (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL)),
            v120);
        GreGetDCPoint(a3, 8LL, &v128);
        DPIMetrics = GetDPIMetrics(v122, v121, v123);
        GreSetWindowOrg(a3, v128 - 3, HIDWORD(v128) - *(_DWORD *)(DPIMetrics + 28) - 3);
        xxxDefWindowProc(a1, 791LL, (unsigned __int64)a3, (HICON)(a4 & 0xFFFFFFFFFFFFFFFDuLL));
        GreSetWindowOrg(a3, v128, SHIDWORD(v128));
        goto LABEL_303;
      }
      LODWORD(v14) = 0;
    }
    LODWORD(v11) = (_DWORD)v14;
    v120 = (unsigned int)v14;
    goto LABEL_300;
  }
  if ( a2 == 481 )
  {
    if ( (_DWORD)v18 )
    {
      v16 = ThreadUnlock1(v15, v9, FadeInternal);
      v14 = 0LL;
    }
    if ( v16 )
    {
      v11 = *(_QWORD *)v16;
      goto LABEL_288;
    }
    goto LABEL_193;
  }
  if ( a2 > 0x81 )
  {
    v9 = 131LL;
    switch ( a2 )
    {
      case 0x83u:
        xxxDefWindowProc(a1, 131LL, (unsigned __int64)a3, (HICON)a4);
        if ( (*(_DWORD *)(v16 + 124) & 3) != 0 )
        {
          v15 = *(unsigned int *)(GetDPIMetrics(v15, v9, (__int64)FadeInternal) + 28);
          *(_DWORD *)(a4 + 4) += v15;
          *(_DWORD *)(a4 + 12) -= v15;
        }
        goto LABEL_303;
      case 0x84u:
        if ( ((_DWORD)i[2] & 0x100) == 0 )
          goto LABEL_284;
        LODWORD(v128) = (__int16)a4;
        HIDWORD(v128) = SWORD1(a4);
        if ( (_DWORD)v18 )
          ThreadUnlock1(v15, 131LL, FadeInternal);
        if ( PtInRect((_DWORD *)(*((_QWORD *)a1 + 5) + 88LL), v128) )
          goto LABEL_288;
        goto LABEL_193;
      case 0x85u:
        if ( (**(_DWORD **)v126[0] & 0x8000000) != 0 )
        {
          xxxValidateRect(a1, 0LL);
          goto LABEL_303;
        }
        if ( (*(_DWORD *)(v16 + 124) & 3) != 0 )
        {
          if ( (unsigned int)MNIsUAHMenu(v16) )
          {
            v65 = 0LL;
            v66 = 65537LL;
            v67 = *(struct tagWND **)(*(_QWORD *)v126[0] + 16LL);
          }
          else
          {
            v66 = 328833LL;
            v65 = a3;
            v67 = a1;
          }
          DCEx = _GetDCEx(v67, v65, v66);
          xxxMNDrawFullNC(a1);
        }
        else
        {
          if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
          {
            v11 = xxxDefWindowProc(a1, 133LL, (unsigned __int64)a3, (HICON)a4);
            if ( (unsigned int)MNIsUAHMenu(v16) )
            {
              v21 = *(_QWORD *)v126[0];
              if ( *(_QWORD *)(*(_QWORD *)v126[0] + 16LL) )
              {
                v71 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v126[0] + 16LL), 0LL, 65537LL);
                xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v126[0] + 16LL));
                _ReleaseDC(v71);
              }
            }
            goto LABEL_311;
          }
          if ( (unsigned int)MNIsUAHMenu(v16) )
          {
            v69 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v126[0] + 16LL), 0LL, 65537LL);
            v70 = xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v126[0] + 16LL));
            _ReleaseDC(v69);
            if ( v70 )
              goto LABEL_303;
          }
          DCEx = _GetDCEx(a1, a3, 328833LL);
          MNDrawEdge(v16, DCEx, *((_QWORD *)a1 + 5) + 88LL, 0LL);
        }
        _ReleaseDC(DCEx);
        goto LABEL_303;
    }
    if ( a2 != 256 )
    {
      v15 = 2LL;
      if ( a2 == 258 )
        goto LABEL_172;
      if ( a2 != 260 )
      {
        if ( a2 != 262 )
        {
          if ( a2 != 275 )
          {
            if ( a2 != 480 )
              goto LABEL_284;
            if ( a3 )
            {
              v63 = ValidateHmenu(a3);
              if ( v63 )
              {
                SmartObjStackRefBase<tagMENU>::Init(v152, v63);
                v152[2] = 0LL;
                LockPopupMenu((__int64)v126, (__int64 *)(*(_QWORD *)v126[0] + 40LL), (__int64)v152);
                v24 = (__int64 **)v152;
                goto LABEL_49;
              }
            }
LABEL_303:
            if ( v125 )
              ThreadUnlock1(v15, v9, FadeInternal);
            v11 = 0LL;
            goto LABEL_288;
          }
          v9 = 65529LL;
          if ( a3 != (HDC)65529 )
          {
            if ( a3 == (HDC)65531 )
            {
              if ( *((_QWORD **)i + 12) != v14 )
                MNAnimate(i, 1LL);
              goto LABEL_303;
            }
            if ( a3 == (HDC)65534 )
            {
              **(_DWORD **)v126[0] &= ~0x80u;
              xxxMNOpenHierarchy((__int64 **)v126, (__int64)i);
              goto LABEL_303;
            }
            if ( a3 != (HDC)0xFFFF )
            {
              if ( (unsigned __int64)(a3 - 0x3FFFFFFF) <= 1 )
              {
                if ( ((_DWORD)i[2] & 8) != 0 )
                  xxxMNDoScroll((__int64)v126, (unsigned int)a3, 0);
                else
                  FindTimer((__int64)a1, (unsigned int)a3, 0, 1, v14);
              }
              goto LABEL_303;
            }
            **(_DWORD **)v126[0] &= ~0x80u;
            goto LABEL_161;
          }
          FindTimer((__int64)a1, 65529LL, 0, 1, v14);
          if ( ((_DWORD)i[2] & 0x1000) == 0 )
            goto LABEL_303;
          goto LABEL_166;
        }
LABEL_172:
        xxxMNChar((__int64 **)v126, (__int64)i, (unsigned int)a3);
        goto LABEL_303;
      }
    }
    xxxMNKeyDown((__int64 **)v126, (__int64)i, (unsigned int)a3);
    goto LABEL_303;
  }
  if ( a2 == 129 )
  {
    if ( *(_QWORD **)(v9 + 8) == v14 && *(_QWORD **)(v9 + 16) == v14 )
    {
      v61 = MNAllocPopup(1, (void *)v9);
      SmartObjStackRefBase<tagPOPUPMENU>::operator=(v126, (__int64)v61);
      v14 = 0LL;
      if ( *(_QWORD *)v126[0] )
      {
        *((_QWORD *)v127 + 1) = *(_QWORD *)v126[0];
        **(_DWORD **)v126[0] |= 0x40000000u;
        *(_DWORD *)(*(_QWORD *)v126[0] + 80LL) = -1;
        *((_QWORD *)&v150 + 1) = a1;
        *(_QWORD *)&v150 = *(_QWORD *)v126[0] + 16LL;
        v155 = v150;
        HMAssignmentLock(&v155);
        v62 = v125 == 0;
        goto LABEL_312;
      }
LABEL_102:
      v53 = v125 == 0;
      goto LABEL_170;
    }
    v53 = (_DWORD)v18 == 0;
LABEL_170:
    if ( !v53 )
      goto LABEL_171;
LABEL_193:
    v11 = (__int64)v14;
    goto LABEL_288;
  }
  if ( a2 > 0x18 )
  {
    switch ( a2 )
    {
      case 0x1Cu:
        if ( ((_DWORD)i[2] & 0x100) == 0 || a1 != *(struct tagWND **)(*(_QWORD *)i + 56LL) )
          goto LABEL_303;
        if ( a3 )
        {
          PostMessage((int)a1, 498, 0, 0);
          v9 = *(_QWORD *)(gptiCurrent + 424LL) - gpqForeground;
          *((_DWORD *)i + 2) = (_DWORD)i[2] & 0xFFFEFFFF | (*(_QWORD *)(gptiCurrent + 424LL) != gpqForeground
                                                          ? 0x10000
                                                          : 0);
          v14 = 0LL;
        }
        v15 = *(_QWORD *)v126[0];
        if ( *(_QWORD **)(*(_QWORD *)v126[0] + 8LL) == v14 )
          goto LABEL_303;
        v59 = *(_QWORD *)(*(_QWORD *)v126[0] + 8LL);
        v60 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, (__int64)FadeInternal);
        v131 = *(_QWORD *)(v60 + 408);
        *(_QWORD *)(v60 + 408) = &v131;
        v132 = v59;
        HMLockObject(v59);
        xxxDWP_DoNCActivate(*(struct tagWND **)(*(_QWORD *)v126[0] + 8LL));
        goto LABEL_134;
      case 0x46u:
        if ( (*(_DWORD *)(a4 + 32) & 0x40) == 0 )
          goto LABEL_284;
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000002) == 0x80000002
          && (**(_DWORD **)v126[0] & 0x8000000) != 0
          && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 1
          && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 3
          && !CInputGlobals::WasLastInputJournalling(gpInputGlobals)
          && (GetAppCompatFlags2(1024LL, v9) & 1) == 0 )
        {
          v54 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL);
          *((_DWORD *)i + 29) = v54;
          v55 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
          *((_DWORD *)i + 30) = v55;
          if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
          {
            if ( !(unsigned int)MNCreateAnimationBitmap(i, v54, v55) )
              break;
            *((_QWORD *)i + 12) = _GetDCEx(a1, 1LL, 65665LL);
            v56 = (**(_DWORD **)v126[0] >> 4) & 0xF80000 | (_DWORD)i[2] & 0xFF07FFFF;
            v57 = 0;
            *((_DWORD *)i + 2) = v56;
            if ( (v56 & 0x180000) == 0 )
              v57 = *((_DWORD *)i + 29);
            *((_DWORD *)i + 27) = v57;
            v58 = 0;
            if ( (v56 & 0x600000) == 0 )
              v58 = *((_DWORD *)i + 30);
            FadeInternal = (HDC)*((_QWORD *)i + 17);
            *((_DWORD *)i + 28) = v58;
          }
          else
          {
            FadeInternal = CreateFadeInternal(a1, 0LL, 175, 17, 0);
            if ( !FadeInternal )
              break;
          }
          *(_DWORD *)(*(_QWORD *)(v16 + 40) + 40LL) |= 8u;
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout(
            (__int64 *)a1,
            0x317u,
            (unsigned __int64)FadeInternal,
            (struct _LARGE_STRING *)0xE,
            0,
            0,
            0LL,
            1u,
            1);
          *(_DWORD *)(*(_QWORD *)(v16 + 40) + 40LL) &= ~8u;
          v15 = gfade[12];
          if ( (v15 & 0x10) != 0 )
            zzzShowFade();
          goto LABEL_284;
        }
        break;
      case 0x47u:
        if ( (*(_DWORD *)(a4 + 32) & 0x40) == 0 )
          goto LABEL_284;
        v15 = *(_QWORD *)v126[0];
        if ( (**(_DWORD **)v126[0] & 0x8000000) == 0 )
          goto LABEL_284;
        if ( (gfade[12] & 0x10) != 0 )
        {
          zzzStartFade();
        }
        else
        {
          *((_DWORD *)i + 26) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          SetTimer((unsigned __int64)a1, 65531LL, 0xAu, 0LL, (int)v14);
        }
        break;
      case 0x70u:
        if ( i && ((_DWORD)i[2] & 0x400) != 0 )
        {
          v135 = *(_QWORD *)a1;
          xxxUserModeCallback(0x65u, (__int64)&v135, 8u, v18);
        }
        xxxMNDestroyHandler(v127);
        v14 = 0LL;
        goto LABEL_102;
      default:
        goto LABEL_284;
    }
    v15 = *(_QWORD *)v126[0];
    **(_DWORD **)v126[0] &= ~0x8000000u;
    goto LABEL_284;
  }
  switch ( a2 )
  {
    case 0x18u:
      if ( !a3 )
        xxxMNCancel((__int64)i, 0, 0, 0LL);
      goto LABEL_284;
    case 3u:
    case 5u:
      v15 = *(_QWORD *)v126[0];
      if ( *(_QWORD **)(*(_QWORD *)v126[0] + 24LL) == v14 )
        goto LABEL_303;
      v38 = (__int64 *)MNGetpItem((__int64)v126, *(_DWORD *)(*(_QWORD *)v126[0] + 84LL));
      v39 = (struct tagWND **)safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v126[0] + 24LL));
      v41 = v39;
      if ( !v38 )
        goto LABEL_303;
      if ( !v39 )
        goto LABEL_303;
      v42 = v39[1];
      if ( !v42 )
        goto LABEL_303;
      v43 = *v39;
      if ( !*v39 )
        goto LABEL_303;
      v44 = *((_QWORD *)v42 + 5);
      v147 = 0LL;
      v148 = 0LL;
      v149 = 0LL;
      v144 = 0LL;
      v145 = 0LL;
      v146 = 0LL;
      v130 = v40;
      v129 = v40;
      v45 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, (__int64)FadeInternal);
      v144 = *(_QWORD *)(v45 + 408);
      *(_QWORD *)(v45 + 408) = &v144;
      v145 = v43;
      HMLockObject(v43);
      v48 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47);
      v147 = *(_QWORD *)(v48 + 408);
      *(_QWORD *)(v48 + 408) = &v147;
      v148 = v44;
      HMLockObject(v44);
      if ( !*(_DWORD *)(v44 + 64) )
      {
        v49 = *v41;
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout((__int64 *)v49, 0x1E2u, 0LL, 0LL, 0, 0, 0LL, 1u, 1);
      }
      if ( *(_QWORD *)(*(_QWORD *)v126[0] + 40LL)
        && (unsigned int)MNGetpItemIndex(*(_QWORD *)(*(_QWORD *)v126[0] + 40LL), (__int64)v38) != -1 )
      {
        xxxMNPositionHierarchy(
          (__int64 **)v126,
          v38,
          *(_DWORD *)(v44 + 64) + 6,
          *(_DWORD *)(v44 + 68) + 6,
          (int *)&v130,
          (LONG *)&v129,
          0LL);
      }
      xxxSetWindowPos(*v41, 0LL, v130, v129, 0, 0, 1029);
      ThreadUnlock1(v51, v50, v52);
      goto LABEL_134;
    case 6u:
      v25 = *((_DWORD *)i + 2);
      if ( (v25 & 0x100) != 0 )
      {
        if ( (_WORD)a3 )
          goto LABEL_284;
        if ( (v25 & 0x200) != 0 )
          goto LABEL_284;
        if ( (**(_DWORD **)i & 0x80000) != 0 )
          goto LABEL_284;
        LOBYTE(v9) = 1;
        a4 = HMValidateHandleNoSecure(a4, v9, (__int64)FadeInternal);
        v26 = safe_cast_fnid_to_PMENUWND(a4);
        if ( !v15 )
          goto LABEL_284;
        if ( v26 )
        {
          v27 = *(_QWORD *)(v26 + 8);
          if ( v27 )
          {
            if ( *(_QWORD *)i == *(_QWORD *)(v27 + 64) )
              goto LABEL_284;
          }
        }
        v28 = *((_DWORD *)i + 2);
        if ( (v28 & 0x10000) != 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
        {
          *((_DWORD *)i + 2) = v28 & 0xFFFEFFFF;
          PostMessage((int)a1, 498, 0, 0);
          goto LABEL_284;
        }
LABEL_61:
        v29 = (int)a1;
LABEL_62:
        PostMessage(v29, 499, 0, 0);
        goto LABEL_303;
      }
      if ( !(_WORD)a3 )
        goto LABEL_303;
      v141 = 0LL;
      v142 = 0LL;
      v143 = 0LL;
      if ( *(_WORD *)(gptiCurrent + 624LL) >= 0x500u )
        goto LABEL_61;
      if ( gpqForegroundPrev
        && (v30 = IsWindowActivateable(*(const struct tagWND **)(gpqForegroundPrev + 136LL)), LODWORD(v14) = 0, v30)
        && (v9 = *(_QWORD *)(gpqForegroundPrev + 136LL),
            v15 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFF,
            (_DWORD)v15 != 668) )
      {
LABEL_68:
        a1 = (struct tagWND *)v9;
      }
      else
      {
        v34 = (int)a1;
        v35 = (unsigned int)v14;
        do
        {
          TopWindow = (struct tagWND *)FindNextTopWindow::NextTopWindow((__int64)a1, 0LL, 0);
          a1 = TopWindow;
          if ( !TopWindow )
            break;
          if ( IsWindowActivateable(*((const struct tagWND **)TopWindow + 25)) )
          {
            v9 = *((_QWORD *)a1 + 25);
            v15 = *(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFF;
            if ( (_DWORD)v15 != 668 )
              goto LABEL_68;
          }
          v37 = v35++;
        }
        while ( v37 < 0xFF );
        if ( v35 )
        {
          v29 = v34;
          goto LABEL_62;
        }
      }
      if ( !a1 )
        goto LABEL_303;
      v141 = *(_QWORD *)(gptiCurrent + 408LL);
      *(_QWORD *)(gptiCurrent + 408LL) = &v141;
      v142 = a1;
      HMLockObject(a1);
      v33 = *(_QWORD *)(gptiCurrent + 424LL);
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == v33 )
      {
        xxxActivateWindowWithOptions((__int64)a1, 0LL, 0LL, 1);
      }
      else if ( gpqForeground == v33 )
      {
        xxxSetForegroundWindowWithOptions((__int64)a1, 2u, 0, 0);
      }
LABEL_134:
      ThreadUnlock1(v33, v31, v32);
      goto LABEL_303;
    case 0xFu:
      SmartObjStackRefBase<tagMENU>::Init(v151, v16);
      v151[2] = 0LL;
      xxxHandleMenuPainting(a1, v151);
      v24 = v151;
LABEL_49:
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v24, v22, v23);
      goto LABEL_303;
  }
  if ( a2 == 20 && *(_QWORD **)(*(_QWORD *)(v16 + 40) + 24LL) != v14 )
  {
    MNEraseBackground(
      a3,
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL),
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 108LL));
LABEL_311:
    v62 = v125 == 0;
LABEL_312:
    if ( !v62 )
      ThreadUnlock1(v21, v9, FadeInternal);
    goto LABEL_288;
  }
LABEL_284:
  if ( v125 )
LABEL_285:
    ThreadUnlock1(v15, v9, FadeInternal);
LABEL_286:
  v80 = xxxDefWindowProc(a1, a2, (unsigned __int64)a3, (HICON)a4);
LABEL_287:
  v11 = v80;
LABEL_288:
  if ( v136 )
    xxxUnlockMenuStateInternal(v136, 0);
LABEL_290:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v126, v9, (__int64)FadeInternal);
  return v11;
}
