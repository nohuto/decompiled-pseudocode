/*
 * XREFs of xxxMenuWindowProc @ 0x1C020F6B0
 * Callers:
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01D0770 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?IsWindowActivateable@@YA_NPEBUtagWND@@@Z @ 0x1C000B8FC (-IsWindowActivateable@@YA_NPEBUtagWND@@@Z.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C001CBC8 (safe_cast_fnid_to_PMENUWND.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C0022754 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     IsPointerParentNotify @ 0x1C002E548 (IsPointerParentNotify.c)
 *     IsPointerInputMessageWithState @ 0x1C002E56C (IsPointerInputMessageWithState.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C0041730 (-NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     MNGetpItemIndex @ 0x1C006AA14 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C006AEB0 (MNIsUAHMenu.c)
 *     xxxShowWindowEx @ 0x1C006B634 (xxxShowWindowEx.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C007A7CC (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     GreGetLayout @ 0x1C007BE5C (GreGetLayout.c)
 *     xxxSendUAHMenuMessage @ 0x1C00A7340 (xxxSendUAHMenuMessage.c)
 *     xxxDWP_DoNCActivate @ 0x1C00A7B84 (xxxDWP_DoNCActivate.c)
 *     xxxMenuDraw @ 0x1C00AA7E0 (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C00AB240 (xxxMNCompute.c)
 *     GetDPIMetrics @ 0x1C00AB99C (GetDPIMetrics.c)
 *     GetAppCompatFlags2 @ 0x1C00AC380 (GetAppCompatFlags2.c)
 *     xxxDefWindowProc @ 0x1C00B4F70 (xxxDefWindowProc.c)
 *     xxxValidateRect @ 0x1C00C71EC (xxxValidateRect.c)
 *     ?xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z @ 0x1C00D77CC (-xxxSetForegroundWindowWithOptions@@YAHPEAUtagWND@@HK@Z.c)
 *     ?xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateStrategy@@W4WindowActivateReason@@@Z @ 0x1C00D83CC (-xxxActivateWindowWithOptions@@YA_NPEAUtagWND@@W4ActivateWindowKind@@W4ComputeWindowToActivateSt.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     FindTimer @ 0x1C00EB348 (FindTimer.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FBDF8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     GreSetWindowOrg @ 0x1C010CD44 (GreSetWindowOrg.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010CEAC (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxPlayEventSound @ 0x1C011E550 (xxxPlayEventSound.c)
 *     zzzStartFade @ 0x1C0152A68 (zzzStartFade.c)
 *     zzzShowFade @ 0x1C0152B40 (zzzShowFade.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C0155FC8 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     xxxValidateClassAndSize @ 0x1C015D924 (xxxValidateClassAndSize.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01CCFA0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     _SetTimer @ 0x1C01D6914 (_SetTimer.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01DC1F8 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01F99A0 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocPopup @ 0x1C01F9B2C (MNAllocPopup.c)
 *     MNCreateAnimationBitmap @ 0x1C01F9BAC (MNCreateAnimationBitmap.c)
 *     xxxMNEndMenuState @ 0x1C01F9F80 (xxxMNEndMenuState.c)
 *     xxxUserModeCallback @ 0x1C0208688 (xxxUserModeCallback.c)
 *     xxxEndMenuLoop @ 0x1C02088E0 (xxxEndMenuLoop.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0209DFC (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C020A024 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C020A1C0 (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C020A21C (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C020A3D0 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C020A4AC (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C020A874 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020A9E0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     IsMFMWFPWindow @ 0x1C020B04C (IsMFMWFPWindow.c)
 *     LockPopupMenu @ 0x1C020B0D8 (LockPopupMenu.c)
 *     MNCheckButtonDownState @ 0x1C020B1B4 (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1C020B204 (MNGetpItem.c)
 *     xxxCallHandleMenuMessages @ 0x1C020B5C0 (xxxCallHandleMenuMessages.c)
 *     xxxMNButtonDown @ 0x1C020B6E8 (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C020B7E8 (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C020B900 (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C020BCC8 (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C020C100 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C020C670 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C020C99C (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C020CD34 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C020D738 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C020E8F4 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C020F000 (xxxMNSetCapture.c)
 *     MNFindNextValidItem @ 0x1C022FE34 (MNFindNextValidItem.c)
 *     MNAnimate @ 0x1C0231404 (MNAnimate.c)
 *     MNDrawEdge @ 0x1C0231834 (MNDrawEdge.c)
 *     MNEraseBackground @ 0x1C0231918 (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C0231A54 (xxxMNDrawFullNC.c)
 *     FindBestPos @ 0x1C02339F8 (FindBestPos.c)
 */

__int64 __fastcall xxxMenuWindowProc(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  __int64 v8; // rsi
  int v9; // ecx
  int v10; // r8d
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdx
  HDC i; // r14
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  __int64 v20; // r13
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 **v28; // rcx
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // r8d
  struct tagWND *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  struct tagWND *v36; // r14
  unsigned int v37; // ebx
  __int64 TopWindow; // rax
  unsigned int v39; // eax
  __int64 *v40; // r12
  ULONG_PTR *v41; // rax
  ULONG_PTR *v42; // rbx
  ULONG_PTR v43; // r14
  ULONG_PTR v44; // r15
  __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  unsigned int v51; // edx
  unsigned int v52; // r8d
  unsigned int v53; // ecx
  int v54; // eax
  int v55; // eax
  __int64 v56; // rbx
  __int64 v57; // rax
  char v58; // dl
  void *v59; // rax
  bool v60; // zf
  __int64 v61; // rax
  int v62; // r13d
  unsigned __int64 v63; // rdx
  __int64 v64; // r8
  struct tagWND *v65; // rcx
  __int64 DCEx; // rbx
  __int64 v67; // rdi
  int v68; // ebx
  __int64 v69; // rbx
  unsigned __int64 v70; // rbx
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 ValidItem; // rbx
  __int64 v74; // rdx
  __int64 v75; // rcx
  _QWORD *v76; // rbx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rbx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 v83; // rcx
  struct tagMENUWND *v84; // rax
  int v85; // ebx
  __int64 v86; // r14
  int v87; // r14d
  __int64 v88; // rdx
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  int v93; // r12d
  struct tagMENUWND *v94; // rdi
  __int64 v95; // rax
  int v96; // edx
  int BestPos; // eax
  __int64 v98; // rcx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rbx
  __int64 v102; // rax
  __int64 v103; // rax
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // rcx
  unsigned __int64 v111; // rbx
  unsigned int v112; // r13d
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 DPIMetrics; // rax
  int v116; // [rsp+28h] [rbp-E0h]
  int v117; // [rsp+58h] [rbp-B0h]
  __int64 v118[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct tagMENUWND *v119; // [rsp+70h] [rbp-98h]
  unsigned __int64 v120; // [rsp+78h] [rbp-90h]
  unsigned __int64 v121; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v122; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v123; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v124; // [rsp+90h] [rbp-78h] BYREF
  __int64 v125; // [rsp+98h] [rbp-70h]
  __int128 v126; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v127; // [rsp+B8h] [rbp-50h] BYREF
  struct tagMENUSTATE *v128; // [rsp+C0h] [rbp-48h] BYREF
  __int64 *v129[3]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v130[3]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *v131[3]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v132[3]; // [rsp+110h] [rbp+8h] BYREF
  __int128 v133; // [rsp+128h] [rbp+20h] BYREF
  int **v134[2]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v135; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v136[3]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v137[3]; // [rsp+170h] [rbp+68h] BYREF
  _QWORD v138[3]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v139[3]; // [rsp+1A0h] [rbp+98h] BYREF

  v120 = a4;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v118, 0LL);
  v8 = 0LL;
  v117 = 0;
  if ( !(unsigned int)xxxValidateClassAndSize(a1, a2, a3, a4, 668, 129, &v127) )
  {
    v8 = v127;
LABEL_13:
    v13 = v8;
    goto LABEL_297;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    v10 = IsPointerInputMessageWithState();
    if ( !v10 && !IsPointerParentNotify(v9, a3) )
      goto LABEL_12;
    if ( v10 )
    {
      LOWORD(v12) = a3;
    }
    else
    {
      if ( !IsPointerParentNotify(a2, a3) )
      {
LABEL_11:
        if ( !GetThreadPointerData((struct _LIST_ENTRY *)(v11 + 1080), v12, 0LL, 0LL) )
          goto LABEL_13;
LABEL_12:
        v8 = xxxSendMessage((ULONG_PTR)a1);
        goto LABEL_13;
      }
      v12 = a3 >> 16;
    }
    if ( (_WORD)v12 == 1 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v14 = *((_QWORD *)a1 + 33);
  v119 = (struct tagMENUWND *)v14;
  v15 = *(_QWORD *)(v14 + 8);
  *(_QWORD *)v14 = a1;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v118, v15);
  if ( *(_QWORD *)v118[0] )
  {
    for ( i = *(HDC *)(*(_QWORD *)(*(_QWORD *)v14 + 16LL) + 608LL); i; i = (HDC)*((_QWORD *)i + 6) )
    {
      if ( *(_QWORD *)i == *(_QWORD *)(*(_QWORD *)(v14 + 8) + 64LL) )
        break;
    }
  }
  else
  {
    i = 0LL;
  }
  MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
    (MenuStateOwnerLockxxxUnlock *)&v128,
    (struct tagMENUSTATE *)i);
  v19 = v118[0];
  if ( *(_QWORD *)v118[0] )
  {
    v19 = *(_QWORD *)v118[0];
    v20 = *(_QWORD *)(*(_QWORD *)v118[0] + 40LL);
  }
  else
  {
    v20 = 0LL;
  }
  v13 = 1LL;
  if ( i && v20 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17);
    v136[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v136;
    v136[1] = v20;
    _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
    v23 = 1LL;
    v117 = 1;
    if ( !*(_QWORD *)(*(_QWORD *)v118[0] + 64LL)
      || (v18 = *(_QWORD *)v118[0],
          v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v119 + 16LL) + 608LL),
          v24 = 1,
          *(_QWORD *)v22 == *(_QWORD *)(*(_QWORD *)v118[0] + 64LL)) )
    {
      v24 = 0;
    }
    v19 = *((unsigned int *)i + 2);
    if ( (v19 & 0x100) != 0 && (v19 & 0x200) == 0 )
    {
      if ( v24 )
      {
        if ( a2 - 512 <= 0xE || a2 - 256 <= 9 || a2 - 160 <= 0xD )
          goto LABEL_293;
      }
      else
      {
        if ( (unsigned int)xxxCallHandleMenuMessages((__int64)i, a1, a2, a3, v120) )
        {
LABEL_311:
          ThreadUnlock1(v19, v22);
          goto LABEL_312;
        }
        v23 = 1LL;
      }
    }
    goto LABEL_37;
  }
  switch ( a2 )
  {
    case 0x1E0u:
      if ( !*(_QWORD *)v118[0] )
        goto LABEL_312;
      break;
    case 0x81u:
      break;
    case 0x70u:
      v23 = 0LL;
LABEL_37:
      v22 = (__int64)v119;
      goto LABEL_38;
    default:
      goto LABEL_294;
  }
  v22 = (__int64)v119;
  v19 = *(_QWORD *)(*(_QWORD *)v119 + 40LL);
  if ( *(char *)(v19 + 19) < 0 )
    goto LABEL_312;
  v23 = 0LL;
LABEL_38:
  if ( a2 <= 0x1E1 )
  {
    if ( a2 == 481 )
    {
      if ( (_DWORD)v23 )
        v20 = ThreadUnlock1(v19, v22);
      if ( v20 )
      {
        v13 = *(_QWORD *)v20;
        goto LABEL_295;
      }
      goto LABEL_312;
    }
    if ( a2 <= 0x81 )
    {
      if ( a2 == 129 )
      {
        if ( *(_QWORD *)(v22 + 8) || *(_QWORD *)(v22 + 16) )
        {
          v60 = (_DWORD)v23 == 0;
          goto LABEL_310;
        }
        v59 = MNAllocPopup(1);
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v118, (__int64)v59);
        if ( *(_QWORD *)v118[0] )
        {
          *((_QWORD *)v119 + 1) = *(_QWORD *)v118[0];
          **(_DWORD **)v118[0] |= 0x40000000u;
          *(_DWORD *)(*(_QWORD *)v118[0] + 80LL) = -1;
          *((_QWORD *)&v126 + 1) = a1;
          *(_QWORD *)&v126 = *(_QWORD *)v118[0] + 16LL;
          v133 = v126;
          HMAssignmentLock(&v133);
LABEL_318:
          if ( v117 )
            ThreadUnlock1(v26, v25);
          goto LABEL_295;
        }
        goto LABEL_309;
      }
      if ( a2 <= 0x18 )
      {
        switch ( a2 )
        {
          case 0x18u:
            if ( !a3 )
              xxxMNCancel((__int64)i, 0, 0, 0LL);
            goto LABEL_292;
          case 3u:
          case 5u:
            v19 = *(_QWORD *)v118[0];
            if ( !*(_QWORD *)(*(_QWORD *)v118[0] + 24LL) )
              goto LABEL_309;
            v40 = (__int64 *)MNGetpItem((__int64)v118, *(_DWORD *)(*(_QWORD *)v118[0] + 84LL));
            v41 = (ULONG_PTR *)safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v118[0] + 24LL));
            v42 = v41;
            if ( !v40 )
              goto LABEL_309;
            if ( !v41 )
              goto LABEL_309;
            v43 = v41[1];
            if ( !v43 )
              goto LABEL_309;
            v44 = *v41;
            if ( !*v41 )
              goto LABEL_309;
            v45 = *(_QWORD *)(v43 + 40);
            v123 = 0;
            v122 = 0;
            v46 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
            v138[0] = *(_QWORD *)(v46 + 416);
            *(_QWORD *)(v46 + 416) = v138;
            v138[1] = v44;
            _InterlockedAdd((volatile signed __int32 *)(v44 + 8), 1u);
            v48 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v47);
            v139[0] = *(_QWORD *)(v48 + 416);
            *(_QWORD *)(v48 + 416) = v139;
            v139[1] = v45;
            _InterlockedAdd((volatile signed __int32 *)(v45 + 8), 1u);
            if ( !*(_DWORD *)(v45 + 64) )
              xxxSendMessage(*v42);
            if ( *(_QWORD *)(*(_QWORD *)v118[0] + 40LL)
              && (unsigned int)MNGetpItemIndex(*(_QWORD *)(*(_QWORD *)v118[0] + 40LL), (__int64)v40) != -1 )
            {
              xxxMNPositionHierarchy(
                (__int64 **)v118,
                v40,
                *(_DWORD *)(v45 + 64) + 6,
                *(_DWORD *)(v45 + 68) + 6,
                (int *)&v123,
                (LONG *)&v122,
                0LL);
            }
            xxxSetWindowPos((struct tagWND *)*v42, 0LL, v123, v122, 0, 0, 1029);
            ThreadUnlock1(v50, v49);
            break;
          case 6u:
            v29 = *((_DWORD *)i + 2);
            if ( (v29 & 0x100) != 0 )
            {
              if ( (_WORD)a3 )
                goto LABEL_292;
              if ( (v29 & 0x200) != 0 )
                goto LABEL_292;
              if ( (**(_DWORD **)i & 0x80000) != 0 )
                goto LABEL_292;
              LOBYTE(v22) = 1;
              v120 = HMValidateHandleNoSecure(v120, v22);
              v30 = safe_cast_fnid_to_PMENUWND(v120);
              if ( !v19 )
                goto LABEL_292;
              if ( v30 )
              {
                v31 = *(_QWORD *)(v30 + 8);
                if ( v31 )
                {
                  if ( *(_QWORD *)i == *(_QWORD *)(v31 + 64) )
                    goto LABEL_292;
                }
              }
              v32 = *((_DWORD *)i + 2);
              if ( (v32 & 0x10000) != 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
              {
                *((_DWORD *)i + 2) = v32 & 0xFFFEFFFF;
                PostMessage(a1, 0x1F2u, 0LL, 0LL);
                goto LABEL_292;
              }
LABEL_72:
              v33 = a1;
LABEL_73:
              PostMessage(v33, 0x1F3u, 0LL, 0LL);
              goto LABEL_309;
            }
            if ( !(_WORD)a3 )
              goto LABEL_309;
            if ( *(_WORD *)(gptiCurrent + 632LL) >= 0x500u )
              goto LABEL_72;
            if ( gpqForegroundPrev
              && IsWindowActivateable(*(const struct tagWND **)(gpqForegroundPrev + 128LL))
              && (v22 = *(_QWORD *)(gpqForegroundPrev + 128LL),
                  v19 = *(_WORD *)(*(_QWORD *)(v22 + 40) + 42LL) & 0x2FFF,
                  (_DWORD)v19 != 668) )
            {
LABEL_79:
              a1 = (struct tagWND *)v22;
            }
            else
            {
              v36 = a1;
              v37 = 0;
              do
              {
                TopWindow = FindNextTopWindow::NextTopWindow((__int64)a1, 0LL, 0);
                a1 = (struct tagWND *)TopWindow;
                if ( !TopWindow )
                  break;
                if ( IsWindowActivateable(*(const struct tagWND **)(TopWindow + 184)) )
                {
                  v22 = *((_QWORD *)a1 + 23);
                  v19 = *(_WORD *)(*(_QWORD *)(v22 + 40) + 42LL) & 0x2FFF;
                  if ( (_DWORD)v19 != 668 )
                    goto LABEL_79;
                }
                v39 = v37++;
              }
              while ( v39 < 0xFF );
              if ( v37 )
              {
                v33 = v36;
                goto LABEL_73;
              }
            }
            if ( !a1 )
              goto LABEL_309;
            v34 = gptiCurrent;
            v137[0] = *(_QWORD *)(gptiCurrent + 416LL);
            *(_QWORD *)(gptiCurrent + 416LL) = v137;
            v137[1] = a1;
            _InterlockedAdd((volatile signed __int32 *)a1 + 2, 1u);
            v35 = *(_QWORD *)(gptiCurrent + 432LL);
            if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == v35 )
            {
              xxxActivateWindowWithOptions((__int64)a1, 0LL, 0LL, 1);
            }
            else if ( gpqForeground == v35 )
            {
              xxxSetForegroundWindowWithOptions((LARGE_INTEGER *)a1, 0, 0);
            }
            break;
          case 0xFu:
            SmartObjStackRefBase<tagMENU>::Init(v129, v20);
            v129[2] = 0LL;
            xxxHandleMenuPainting(a1, v129);
            v28 = v129;
LABEL_60:
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v28, v27);
            goto LABEL_309;
          default:
            if ( a2 == 20 && *(_QWORD *)(*(_QWORD *)(v20 + 40) + 24LL) )
            {
              MNEraseBackground(
                (HDC)a3,
                *(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL),
                *(_DWORD *)(*((_QWORD *)a1 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 108LL));
              goto LABEL_318;
            }
LABEL_292:
            if ( v117 )
LABEL_293:
              ThreadUnlock1(v19, v22);
LABEL_294:
            v13 = xxxDefWindowProc(a1, a2, a3, v120);
            goto LABEL_295;
        }
LABEL_147:
        ThreadUnlock1(v34, v35);
        goto LABEL_309;
      }
      switch ( a2 )
      {
        case 0x1Cu:
          if ( ((_DWORD)i[2] & 0x100) == 0 || a1 != *(struct tagWND **)(*(_QWORD *)i + 56LL) )
            goto LABEL_309;
          if ( a3 )
          {
            PostMessage(a1, 0x1F2u, 0LL, 0LL);
            v22 = *(_QWORD *)(gptiCurrent + 432LL) - gpqForeground;
            *((_DWORD *)i + 2) = (_DWORD)i[2] & 0xFFFEFFFF | (*(_QWORD *)(gptiCurrent + 432LL) != gpqForeground
                                                            ? 0x10000
                                                            : 0);
          }
          v19 = *(_QWORD *)v118[0];
          if ( !*(_QWORD *)(*(_QWORD *)v118[0] + 8LL) )
            goto LABEL_309;
          v56 = *(_QWORD *)(*(_QWORD *)v118[0] + 8LL);
          v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
          v124 = *(_QWORD *)(v57 + 416);
          *(_QWORD *)(v57 + 416) = &v124;
          v125 = v56;
          _InterlockedAdd((volatile signed __int32 *)(v56 + 8), 1u);
          if ( !a3 || (v58 = 1, ((_DWORD)i[2] & 0x10000) != 0) )
            v58 = 2;
          xxxDWP_DoNCActivate(*(_QWORD *)(*(_QWORD *)v118[0] + 8LL), v58, 1LL);
          goto LABEL_147;
        case 0x46u:
          if ( (*(_DWORD *)(v120 + 32) & 0x40) == 0 )
            goto LABEL_292;
          if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000002) == 0x80000002
            && (**(_DWORD **)v118[0] & 0x8000000) != 0
            && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 1
            && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 3
            && !CInputGlobals::WasLastInputJournalling(gpInputGlobals)
            && (GetAppCompatFlags2(1024LL, v22) & 1) == 0 )
          {
            v51 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL);
            *((_DWORD *)i + 29) = v51;
            v52 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
            *((_DWORD *)i + 30) = v52;
            if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
            {
              if ( !(unsigned int)MNCreateAnimationBitmap(i, v51, v52) )
                break;
              *((_QWORD *)i + 12) = _GetDCEx(a1, 1LL, 65665LL);
              v53 = (**(_DWORD **)v118[0] >> 4) & 0xF80000 | (_DWORD)i[2] & 0xFF07FFFF;
              v54 = 0;
              *((_DWORD *)i + 2) = v53;
              if ( (v53 & 0x180000) == 0 )
                v54 = *((_DWORD *)i + 29);
              *((_DWORD *)i + 27) = v54;
              v55 = 0;
              if ( (v53 & 0x600000) == 0 )
                v55 = *((_DWORD *)i + 30);
              *((_DWORD *)i + 28) = v55;
            }
            else if ( !CreateFadeInternal(a1, 0LL, 175LL, 17, 0) )
            {
              break;
            }
            *(_DWORD *)(*(_QWORD *)(v20 + 40) + 40LL) |= 8u;
            xxxSendMessage((ULONG_PTR)a1);
            *(_DWORD *)(*(_QWORD *)(v20 + 40) + 40LL) &= ~8u;
            v19 = gfade[12];
            if ( (v19 & 0x10) != 0 )
              zzzShowFade();
            goto LABEL_292;
          }
          break;
        case 0x47u:
          if ( (*(_DWORD *)(v120 + 32) & 0x40) == 0 )
            goto LABEL_292;
          v19 = *(_QWORD *)v118[0];
          if ( (**(_DWORD **)v118[0] & 0x8000000) == 0 )
            goto LABEL_292;
          if ( (gfade[12] & 0x10) != 0 )
          {
            zzzStartFade();
          }
          else
          {
            *((_DWORD *)i + 26) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            SetTimer((unsigned __int64)a1, 65531LL, 0xAu, 0LL, 0);
          }
          break;
        case 0x70u:
          if ( i && ((_DWORD)i[2] & 0x400) != 0 )
          {
            *(_QWORD *)&v126 = *(_QWORD *)a1;
            xxxUserModeCallback(101LL, (__int64)&v126, 8LL, v23, v116);
          }
          xxxMNDestroyHandler(v119);
          goto LABEL_309;
        default:
          goto LABEL_292;
      }
      v19 = *(_QWORD *)v118[0];
      **(_DWORD **)v118[0] &= ~0x8000000u;
      goto LABEL_292;
    }
    v22 = 131LL;
    switch ( a2 )
    {
      case 0x83u:
        v70 = v120;
        xxxDefWindowProc(a1, 0x83u, a3, v120);
        if ( (*(_DWORD *)(v20 + 124) & 3) != 0 )
        {
          v19 = *(unsigned int *)(GetDPIMetrics(v19, v22) + 28);
          *(_DWORD *)(v70 + 4) += v19;
          *(_DWORD *)(v70 + 12) -= v19;
        }
        goto LABEL_309;
      case 0x84u:
        if ( ((_DWORD)i[2] & 0x100) == 0 )
          goto LABEL_292;
        LODWORD(v121) = (__int16)v120;
        HIDWORD(v121) = SWORD1(v120);
        if ( (_DWORD)v23 )
          ThreadUnlock1(v120 >> 16, 131LL);
        if ( PtInRect((_DWORD *)(*((_QWORD *)a1 + 5) + 88LL), v121) )
          goto LABEL_295;
        goto LABEL_312;
      case 0x85u:
        if ( (**(_DWORD **)v118[0] & 0x8000000) != 0 )
        {
          xxxValidateRect(a1);
        }
        else
        {
          if ( (*(_DWORD *)(v20 + 124) & 3) != 0 )
          {
            if ( (unsigned int)MNIsUAHMenu(v20) )
            {
              v63 = 0LL;
              v64 = 65537LL;
              v65 = *(struct tagWND **)(*(_QWORD *)v118[0] + 16LL);
            }
            else
            {
              v64 = 328833LL;
              v63 = a3;
              v65 = a1;
            }
            DCEx = _GetDCEx(v65, v63, v64);
            xxxMNDrawFullNC(a1);
          }
          else
          {
            if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
            {
              v13 = xxxDefWindowProc(a1, 0x85u, a3, v120);
              if ( (unsigned int)MNIsUAHMenu(v20) )
              {
                v26 = *(_QWORD *)v118[0];
                if ( *(_QWORD *)(*(_QWORD *)v118[0] + 16LL) )
                {
                  v69 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v118[0] + 16LL), 0LL, 65537LL);
                  xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v118[0] + 16LL));
                  _ReleaseDC(v69);
                }
              }
              goto LABEL_318;
            }
            if ( (unsigned int)MNIsUAHMenu(v20) )
            {
              v67 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v118[0] + 16LL), 0LL, 65537LL);
              v68 = xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v118[0] + 16LL));
              _ReleaseDC(v67);
              if ( v68 )
                goto LABEL_309;
            }
            DCEx = _GetDCEx(a1, a3, 328833LL);
            MNDrawEdge(v20, DCEx, *((_QWORD *)a1 + 5) + 88LL, 0LL);
          }
          _ReleaseDC(DCEx);
        }
LABEL_309:
        v60 = v117 == 0;
        goto LABEL_310;
    }
    if ( a2 != 256 )
    {
      v22 = 2LL;
      if ( a2 == 258 )
        goto LABEL_183;
      if ( a2 != 260 )
      {
        if ( a2 != 262 )
        {
          if ( a2 != 275 )
          {
            if ( a2 != 480 )
              goto LABEL_292;
            if ( !a3 )
              goto LABEL_309;
            v61 = ValidateHmenu(a3);
            if ( !v61 )
              goto LABEL_309;
            SmartObjStackRefBase<tagMENU>::Init(v130, v61);
            v130[2] = 0LL;
            LockPopupMenu((__int64)v118, (__int64 *)(*(_QWORD *)v118[0] + 40LL), (__int64)v130);
            v28 = (__int64 **)v130;
            goto LABEL_60;
          }
          v22 = 65529LL;
          if ( a3 != 65529 )
          {
            if ( a3 == 65531 )
            {
              if ( *((_QWORD *)i + 12) )
                MNAnimate(i, 1LL);
              goto LABEL_309;
            }
            if ( a3 == 65534 )
            {
              **(_DWORD **)v118[0] &= ~0x80u;
              xxxMNOpenHierarchy((__int64 **)v118, (__int64)i);
              goto LABEL_309;
            }
            if ( a3 != 0xFFFF )
            {
              if ( a3 - 4294967292u <= 1 )
              {
                if ( ((_DWORD)i[2] & 8) != 0 )
                  xxxMNDoScroll((__int64)v118, a3, 0);
                else
                  FindTimer((__int64)a1, (unsigned int)a3, 0, 1, 0LL);
              }
              goto LABEL_309;
            }
            **(_DWORD **)v118[0] &= ~0x80u;
            goto LABEL_174;
          }
          FindTimer((__int64)a1, 65529LL, 0, 1, 0LL);
          if ( ((_DWORD)i[2] & 0x1000) == 0 )
            goto LABEL_309;
          goto LABEL_179;
        }
LABEL_183:
        xxxMNChar((__int64 **)v118, (__int64)i, a3);
        goto LABEL_309;
      }
    }
    xxxMNKeyDown((__int64 **)v118, (__int64)i, a3);
    goto LABEL_309;
  }
  if ( a2 > 0x2A3 )
  {
    if ( a2 == 791 )
    {
      v111 = v120;
      if ( (v120 & 2) == 0 || (*(_DWORD *)(v20 + 124) & 3) == 0 )
      {
        v13 = xxxDefWindowProc(a1, 0x317u, a3, v120);
        if ( !(unsigned int)MNIsUAHMenu(v20)
          || !*(_QWORD *)(*(_QWORD *)v118[0] + 16LL)
          || !(unsigned int)xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v118[0] + 16LL)) )
        {
          v26 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
          if ( (_DWORD)v26 == -2147352576 )
            MNDrawEdge(v20, a3, *((_QWORD *)a1 + 5) + 88LL, 0LL);
        }
        goto LABEL_318;
      }
      if ( a3 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 && (GreGetLayout((HDC)a3) & 1) == 0 )
      {
        v112 = GreSetLayout(
                 a3,
                 (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL)),
                 1LL);
      }
      else
      {
        LODWORD(v13) = 0;
        v112 = 0;
      }
      xxxMNDrawFullNC(a1);
      if ( (_DWORD)v13 )
        GreSetLayout(
          a3,
          (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL)),
          v112);
      GreGetDCPoint(a3, 8LL, &v121);
      DPIMetrics = GetDPIMetrics(v114, v113);
      GreSetWindowOrg((HDC)a3, v121 - 3, HIDWORD(v121) - *(_DWORD *)(DPIMetrics + 28) - 3);
      xxxDefWindowProc(a1, 0x317u, a3, v111 & 0xFFFFFFFFFFFFFFFDuLL);
      GreSetWindowOrg((HDC)a3, v121, SHIDWORD(v121));
    }
    else
    {
      if ( a2 != 792 )
        goto LABEL_292;
      xxxMenuDraw((HDC)a3, v20, (ULONG_PTR)a1);
    }
    goto LABEL_309;
  }
  if ( a2 == 675 )
  {
    *((_DWORD *)i + 2) ^= ((unsigned __int16)*((_DWORD *)i + 2) ^ (unsigned __int16)~(unsigned __int16)(*((_DWORD *)i + 2) >> 1)) & 0x4000;
    **(_DWORD **)v118[0] &= ~0x100000u;
    MNSetTimerToAutoDismiss((struct tagMENUSTATE *)i, a1);
    v22 = *(_QWORD *)v118[0];
    v19 = *(_QWORD *)(*(_QWORD *)i + 56LL);
    if ( *(_QWORD *)(*(_QWORD *)v118[0] + 16LL) == v19 )
      xxxMNSelectItem((__int64 **)v118, (__int64)i, -1);
    goto LABEL_309;
  }
  if ( a2 <= 0x1ED )
  {
    switch ( a2 )
    {
      case 0x1EDu:
        v19 = *(unsigned int *)(*(_QWORD *)(v20 + 40) + 44LL);
        if ( a3 < v19 || a3 >= 0xFFFFFFFC )
          xxxMNButtonDown((__int64 **)v118, (__int64)i, a3, 1);
        goto LABEL_309;
      case 0x1E2u:
        if ( *(_QWORD *)(*(_QWORD *)v118[0] + 8LL) )
        {
          v79 = *(_QWORD *)(*(_QWORD *)v118[0] + 8LL);
          v80 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22);
          v124 = *(_QWORD *)(v80 + 416);
          *(_QWORD *)(v80 + 416) = &v124;
          v125 = v79;
          _InterlockedAdd((volatile signed __int32 *)(v79 + 8), 1u);
          SmartObjStackRefBase<tagMENU>::Init(v131, v20);
          v131[2] = 0LL;
          xxxMNCompute(v131, *(_QWORD *)(*(_QWORD *)v118[0] + 8LL), (__int64)a1, 0, 0, 0, 0LL);
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v131, v81);
          ThreadUnlock1(v83, v82);
        }
        v84 = _MonitorFromWindowInternal(a1, 1, 0);
        v85 = *(_DWORD *)(v20 + 64);
        v119 = v84;
        v86 = (__int64)v84;
        SmartObjStackRefBase<tagMENU>::Init(v132, v20);
        v132[2] = 0LL;
        v87 = MNCheckScroll((__int64 **)v118, v132, v86);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v132, v88);
        if ( a3 )
        {
          v91 = 0LL;
          v92 = 0LL;
          v93 = (8 * (_BYTE)a3) & 0x20 | 0x214;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v134, *(_QWORD *)v118[0]);
            v94 = v119;
            MNGetPopupBoundsRect(v134, (__int64)v119, &v135, 1);
            v95 = *((_QWORD *)a1 + 5);
            v96 = *(_DWORD *)(v95 + 92);
            LODWORD(v119) = *(_DWORD *)(v95 + 88);
            HIDWORD(v119) = v96;
            BestPos = FindBestPos(
                        (int)v119,
                        v96,
                        v85,
                        v87,
                        (__int64)&v135,
                        0,
                        (__int64)v118,
                        (__int64)v94,
                        (__int64)v119);
            v91 = (unsigned int)(__int16)BestPos;
            v92 = (unsigned int)SHIWORD(BestPos);
          }
          else
          {
            v93 |= 2u;
          }
          xxxSetWindowPos(a1, 0LL, v91, v92, v85 + 6, v87 + 6, v93);
        }
        if ( v117 )
          ThreadUnlock1(v90, v89);
        v13 = (unsigned __int16)v85 | ((unsigned __int16)v87 << 16);
        goto LABEL_295;
      case 0x1E3u:
        v13 = xxxMNOpenHierarchy((__int64 **)v118, (__int64)i);
        if ( v117 )
          ThreadUnlock1(v78, v77);
        if ( v13 == -1 )
          goto LABEL_312;
        break;
      case 0x1E4u:
LABEL_174:
        xxxMNCloseHierarchy(*(_QWORD *)v118[0], (__int64)i);
        goto LABEL_309;
      case 0x1E5u:
        v19 = *(unsigned int *)(*(_QWORD *)(v20 + 40) + 44LL);
        if ( a3 < v19 || a3 >= 0xFFFFFFFC )
        {
          v76 = (_QWORD *)xxxMNSelectItem((__int64 **)v118, (__int64)i, a3);
          if ( v76 )
          {
            if ( v117 )
              ThreadUnlock1(v19, v22);
            v13 = *(unsigned __int16 *)(*v76 + 4LL) | (unsigned __int64)(v76[2] != 0LL ? 0x10 : 0);
            goto LABEL_295;
          }
        }
        goto LABEL_309;
      case 0x1E6u:
        xxxMNCancel((__int64)i, a3, (unsigned __int16)v120, 0LL);
        goto LABEL_309;
      case 0x1E7u:
        ValidItem = (int)MNFindNextValidItem(v20, 0xFFFFFFFFLL, 1LL, 1LL);
        xxxSendMessage((ULONG_PTR)a1);
        if ( v117 )
          ThreadUnlock1(v75, v74);
        v13 = ValidItem;
        goto LABEL_295;
      case 0x1EBu:
        v13 = xxxMNFindWindowFromPoint((__int64 **)v118, (_DWORD *)a3, v120);
        if ( v117 )
          ThreadUnlock1(v72, v71);
        if ( !IsMFMWFPWindow(v13) )
          goto LABEL_295;
        break;
      case 0x1ECu:
        xxxPlayEventSound(5LL, v22, v18, v23);
        xxxShowWindowEx((ULONG_PTR)a1, BYTE1(*((_DWORD *)i + 2)) & 1 | 4, 0);
        goto LABEL_309;
      default:
        goto LABEL_292;
    }
    if ( v13 )
    {
      v13 = *(_QWORD *)v13;
      goto LABEL_295;
    }
    goto LABEL_312;
  }
  switch ( a2 )
  {
    case 0x1EEu:
      xxxMNMouseMove((__int64 **)v118, (__int64)i, v120);
      goto LABEL_309;
    case 0x1EFu:
      v19 = *(unsigned int *)(*(_QWORD *)(v20 + 40) + 44LL);
      if ( a3 < v19 || a3 >= 0xFFFFFFFC )
        xxxMNButtonUp(v118, (__int64)i, a3, v120);
      goto LABEL_309;
    case 0x1F0u:
      if ( (_DWORD)v23 )
        ThreadUnlock1(v19, v22);
      v13 = (unsigned __int16)MNSetTimerToOpenHierarchy((__int64)v118);
      goto LABEL_295;
    case 0x1F1u:
      xxxMNDoubleClick((__int64)i, (__int64)v118, a3);
      goto LABEL_309;
    case 0x1F2u:
      xxxActivateWindowWithOptions(*(_QWORD *)(*(_QWORD *)v118[0] + 16LL), 0LL, 0LL, 1);
      goto LABEL_309;
  }
  if ( a2 != 499 )
  {
    if ( a2 != 500 )
      goto LABEL_292;
    if ( (_DWORD)v23 )
      ThreadUnlock1(v19, v22);
    v62 = 0;
    if ( (*((_DWORD *)i + 2) & 0x80u) == 0 )
      goto LABEL_312;
    if ( !*(_QWORD *)(*(_QWORD *)v118[0] + 8LL) )
      goto LABEL_312;
    if ( !IsMFMWFPWindow(*((_QWORD *)i + 8)) )
      goto LABEL_312;
    v99 = safe_cast_fnid_to_PMENUWND(v98);
    if ( !v99 || !*(_QWORD *)(v99 + 8) )
      goto LABEL_312;
    if ( ((_DWORD)i[2] & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 388LL) &= ~0x100000u;
    ++*((_DWORD *)i + 10);
    v101 = *(_QWORD *)(*(_QWORD *)v118[0] + 8LL);
    v102 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v100);
    v124 = *(_QWORD *)(v102 + 416);
    *(_QWORD *)(v102 + 416) = &v124;
    v125 = v101;
    _InterlockedAdd((volatile signed __int32 *)(v101 + 8), 1u);
    *((_DWORD *)i + 2) |= 0x8000u;
    v103 = xxxSendMessage(*(_QWORD *)(*(_QWORD *)v118[0] + 8LL));
    v107 = *((unsigned int *)i + 2);
    LODWORD(v107) = v107 & 0xFFFF7FFF;
    *((_DWORD *)i + 2) = v107;
    if ( v103 != 1 )
    {
      *((_DWORD *)i + 2) = v107 | 0x2000;
      MNCheckButtonDownState((__int64)i, v104, v105, v106);
      if ( ((_DWORD)i[2] & 0x100) == 0 )
        xxxMNSetCapture((__int64)v118, (__int64)i);
      ThreadUnlock1(v109, v108);
      xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1);
      goto LABEL_312;
    }
    ThreadUnlock1(v107, v104);
    if ( (unsigned int)xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1) )
      goto LABEL_312;
    goto LABEL_180;
  }
LABEL_179:
  v62 = v117;
LABEL_180:
  xxxEndMenuLoop((__int64)i, *(_QWORD *)i);
  if ( ((_DWORD)i[2] & 0x100) != 0 )
    xxxMNEndMenuState((__int64)i);
  v60 = v62 == 0;
LABEL_310:
  if ( !v60 )
    goto LABEL_311;
LABEL_312:
  v13 = 0LL;
LABEL_295:
  if ( v128 )
    xxxUnlockMenuStateInternal(v128, 0);
LABEL_297:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>((__int64)v118);
  return v13;
}
