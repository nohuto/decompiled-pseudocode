/*
 * XREFs of xxxMenuWindowProc @ 0x1C01E96E0
 * Callers:
 *     ?xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01AD6E0 (-xxxWrapMenuWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     xxxSendUAHMenuMessage @ 0x1C000D12C (xxxSendUAHMenuMessage.c)
 *     xxxMenuDraw @ 0x1C00103BC (xxxMenuDraw.c)
 *     xxxMNCompute @ 0x1C0013858 (xxxMNCompute.c)
 *     MNIsUAHMenu @ 0x1C002177C (MNIsUAHMenu.c)
 *     MNGetpItemIndex @ 0x1C00217A4 (MNGetpItemIndex.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C0021B98 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ @ 0x1C00262E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@XZ.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00263B8 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     GreGetLayout @ 0x1C002D278 (GreGetLayout.c)
 *     NextTopWindow @ 0x1C002DCFC (NextTopWindow.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     GetDPIMetrics @ 0x1C0065818 (GetDPIMetrics.c)
 *     FBadWindow @ 0x1C006BF08 (FBadWindow.c)
 *     xxxDefWindowProc @ 0x1C006CD90 (xxxDefWindowProc.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C0072A9C (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 *     FindTimer @ 0x1C00BA330 (FindTimer.c)
 *     xxxDWP_DoNCActivate @ 0x1C00C2AA8 (xxxDWP_DoNCActivate.c)
 *     GetAppCompatFlags2 @ 0x1C00C3A80 (GetAppCompatFlags2.c)
 *     GreSetWindowOrg @ 0x1C00F2B74 (GreSetWindowOrg.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x1C00F4D38 (safe_cast_fnid_to_PMENUWND.c)
 *     xxxPlayEventSound @ 0x1C00FF4F0 (xxxPlayEventSound.c)
 *     xxxValidateRect @ 0x1C01031D0 (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01AA854 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ?CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z @ 0x1C01B0B28 (-CreateFadeInternal@@YAPEAUHDC__@@PEAUtagWND@@PEAUtagRECT@@KKK@Z.c)
 *     zzzShowFade @ 0x1C01B2084 (zzzShowFade.c)
 *     zzzStartFade @ 0x1C01B20EC (zzzStartFade.c)
 *     _SetTimer @ 0x1C01B40A4 (_SetTimer.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01D4E34 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     MNAllocPopup @ 0x1C01D4F78 (MNAllocPopup.c)
 *     MNCreateAnimationBitmap @ 0x1C01D4FF8 (MNCreateAnimationBitmap.c)
 *     xxxMNEndMenuState @ 0x1C01D5390 (xxxMNEndMenuState.c)
 *     xxxUserModeCallback @ 0x1C01E2838 (xxxUserModeCallback.c)
 *     xxxEndMenuLoop @ 0x1C01E2A70 (xxxEndMenuLoop.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C01E3F2C (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C01E4154 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z @ 0x1C01E42DC (-MNSetTimerToAutoDismiss@@YAXPEAUtagMENUSTATE@@PEAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C01E4338 (-MNSetTimerToOpenHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01E44E4 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C01E45B8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x1C01E4978 (-xxxMNDoScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C01E4AE0 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     IsMFMWFPWindow @ 0x1C01E5130 (IsMFMWFPWindow.c)
 *     LockPopupMenu @ 0x1C01E51B4 (LockPopupMenu.c)
 *     MNCheckButtonDownState @ 0x1C01E5288 (MNCheckButtonDownState.c)
 *     MNGetpItem @ 0x1C01E52D8 (MNGetpItem.c)
 *     xxxCallHandleMenuMessages @ 0x1C01E5680 (xxxCallHandleMenuMessages.c)
 *     xxxMNButtonDown @ 0x1C01E57A4 (xxxMNButtonDown.c)
 *     xxxMNButtonUp @ 0x1C01E58A4 (xxxMNButtonUp.c)
 *     xxxMNCancel @ 0x1C01E59BC (xxxMNCancel.c)
 *     xxxMNChar @ 0x1C01E5D78 (xxxMNChar.c)
 *     xxxMNCloseHierarchy @ 0x1C01E61D0 (xxxMNCloseHierarchy.c)
 *     xxxMNDoubleClick @ 0x1C01E6710 (xxxMNDoubleClick.c)
 *     xxxMNFindWindowFromPoint @ 0x1C01E6A2C (xxxMNFindWindowFromPoint.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C01E7844 (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C01E9068 (xxxMNSetCapture.c)
 *     MNFindNextValidItem @ 0x1C0206CB0 (MNFindNextValidItem.c)
 *     MNAnimate @ 0x1C02081FC (MNAnimate.c)
 *     MNDrawEdge @ 0x1C0208608 (MNDrawEdge.c)
 *     MNEraseBackground @ 0x1C02086EC (MNEraseBackground.c)
 *     xxxMNDrawFullNC @ 0x1C020881C (xxxMNDrawFullNC.c)
 *     FindBestPos @ 0x1C020A72C (FindBestPos.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxMenuWindowProc(struct tagWND *a1, unsigned int a2, HWND a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int16 v10; // ax
  __int64 v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  unsigned int v15; // r13d
  struct tagMENUWND *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r13
  __int64 v23; // rdx
  HDC i; // r14
  __int64 v25; // r13
  __int64 FadeInternal; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // r9
  int v29; // eax
  int v30; // ecx
  unsigned __int64 v31; // rcx
  int v32; // ecx
  int v33; // ecx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 **v37; // rcx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // r8d
  struct tagWND *v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rdx
  struct tagWND *v45; // r14
  unsigned int v46; // ebx
  struct tagWND *TopWindow; // rax
  unsigned int v48; // eax
  __int64 v49; // r12
  struct tagWND **v50; // rax
  struct tagWND **v51; // rbx
  struct tagWND *v52; // r14
  struct tagWND *v53; // r15
  __int64 v54; // r14
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  struct tagWND *v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  unsigned int v62; // edx
  unsigned int v63; // r8d
  unsigned int v64; // ecx
  int v65; // eax
  int v66; // eax
  __int64 v67; // rbx
  __int64 v68; // rax
  char v69; // dl
  void *v70; // rax
  bool v71; // zf
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  __int64 v77; // rax
  int v78; // r13d
  HWND v79; // rdx
  __int64 v80; // r8
  struct tagWND *v81; // rcx
  __int64 DCEx; // rbx
  __int64 v83; // rdi
  int v84; // ebx
  __int64 v85; // rbx
  __int64 DPIMetrics; // rax
  __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  unsigned int ValidItem; // eax
  __int64 v91; // rbx
  __int64 v92; // rcx
  __int64 v93; // r8
  _QWORD *v94; // rbx
  __int64 v95; // rcx
  __int64 v96; // r8
  __int64 v97; // rbx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // r8
  struct tagMENUWND *v103; // rax
  int v104; // ebx
  __int64 v105; // r14
  int v106; // r14d
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r8
  __int64 v111; // r9
  int v112; // r12d
  struct tagMENUWND *v113; // rdi
  __int64 v114; // rax
  int v115; // edx
  int BestPos; // eax
  __int64 v117; // rcx
  __int64 v118; // rax
  __int64 v119; // rax
  __int64 *v120; // r15
  __int64 v121; // rbx
  __int64 v122; // rax
  __int64 v123; // r9
  HWND v124; // r8
  __int64 *v125; // rcx
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // rcx
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // r8
  unsigned int v134; // r13d
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rax
  int v138; // [rsp+28h] [rbp-E0h]
  int v139; // [rsp+58h] [rbp-B0h]
  __int64 v140[2]; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v141[2]; // [rsp+70h] [rbp-98h]
  struct tagMENUWND *v142; // [rsp+78h] [rbp-90h]
  unsigned __int64 v143; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v144; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v145; // [rsp+8Ch] [rbp-7Ch] BYREF
  __int64 v146; // [rsp+90h] [rbp-78h] BYREF
  __int64 v147; // [rsp+98h] [rbp-70h]
  __int64 v148; // [rsp+A8h] [rbp-60h] BYREF
  struct tagMENUSTATE *v149; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v150; // [rsp+B8h] [rbp-50h]
  __int64 *v151[3]; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD v152[3]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 *v153[3]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 *v154[3]; // [rsp+110h] [rbp+8h] BYREF
  __int128 v155; // [rsp+128h] [rbp+20h] BYREF
  int **v156[2]; // [rsp+138h] [rbp+30h] BYREF
  __int128 v157; // [rsp+148h] [rbp+40h] BYREF
  _QWORD v158[3]; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v159[3]; // [rsp+170h] [rbp+68h] BYREF
  _QWORD v160[3]; // [rsp+188h] [rbp+80h] BYREF
  _QWORD v161[3]; // [rsp+1A0h] [rbp+98h] BYREF

  v141[0] = a2;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v140, 0LL);
  v8 = *((_QWORD *)a1 + 5);
  v9 = 0LL;
  v139 = 0;
  if ( (*(_DWORD *)(v8 + 232) & 0x800) != 0 )
    goto LABEL_28;
  v10 = *(_WORD *)(v8 + 42);
  v11 = 1LL;
  if ( v10 != 668 )
  {
    if ( v10 )
    {
LABEL_28:
      v11 = v9;
      goto LABEL_315;
    }
    if ( a2 != 129 )
    {
      v12 = xxxDefWindowProc(a1, a2, (__int64)a3, a4);
LABEL_27:
      v9 = v12;
      goto LABEL_28;
    }
    v13 = *(_DWORD *)(v8 + 252);
    v14 = *(unsigned __int16 *)(gpsi + 332LL);
    if ( v13 + 312 >= v14 )
    {
      v20 = *((_QWORD *)a1 + 34);
      if ( v20 )
      {
        v21 = 0LL;
        if ( v13 )
        {
          while ( !*(_BYTE *)((unsigned int)v21 + v20) )
          {
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 >= v13 )
              goto LABEL_23;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
        }
LABEL_23:
        memset(*((void **)a1 + 34), 0, *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL));
      }
    }
    else
    {
      if ( *(_DWORD *)(v8 + 200) + v13 + 312 < v14 )
        goto LABEL_28;
      v15 = v14 - 312;
      v16 = (struct tagMENUWND *)Win32AllocPoolZInit(v14 - 312, 1937208149LL);
      v142 = v16;
      if ( !v16 )
        goto LABEL_28;
      v17 = *((_QWORD *)a1 + 34);
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
        Win32FreePool(*((_QWORD *)a1 + 34));
        v16 = v142;
      }
      *((_QWORD *)a1 + 34) = v16;
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL) = v15;
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) = 668;
  }
  if ( *((_QWORD *)a1 + 2) != gptiCurrent )
  {
    _InterlockedAdd(&glSendMessage, 1u);
    v12 = xxxSendTransformableMessageTimeout((__int64 *)a1, a2, a3, a4, 0, 0, 0LL, 1, 1);
    goto LABEL_27;
  }
  v22 = *((_QWORD *)a1 + 34);
  v142 = (struct tagMENUWND *)v22;
  v23 = *(_QWORD *)(v22 + 8);
  *(_QWORD *)v22 = a1;
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v140, v23);
  if ( *(_QWORD *)v140[0] )
  {
    for ( i = *(HDC *)(*(_QWORD *)(*(_QWORD *)v22 + 16LL) + 600LL); i; i = (HDC)*((_QWORD *)i + 6) )
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
    (MenuStateOwnerLockxxxUnlock *)&v149,
    (struct tagMENUSTATE *)i);
  if ( *(_QWORD *)v140[0] )
    v25 = *(_QWORD *)(*(_QWORD *)v140[0] + 40LL);
  else
    v25 = 0LL;
  FadeInternal = 256LL;
  if ( i && v25 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
    v158[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v158;
    v158[1] = v25;
    _InterlockedAdd((volatile signed __int32 *)(v25 + 8), 1u);
    v28 = 1LL;
    v139 = 1;
    if ( !*(_QWORD *)(*(_QWORD *)v140[0] + 64LL)
      || (v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v142 + 16LL) + 600LL),
          v29 = 1,
          *(_QWORD *)v8 == *(_QWORD *)(*(_QWORD *)v140[0] + 64LL)) )
    {
      v29 = 0;
    }
    v30 = *((_DWORD *)i + 2);
    FadeInternal = 256LL;
    if ( (v30 & 0x100) == 0 || (v30 & 0x200) != 0 )
    {
      v31 = v141[0];
    }
    else if ( v29 )
    {
      v31 = v141[0];
      if ( v141[0] - 512 <= 0xE || v141[0] - 256 <= 9 || v141[0] - 160 <= 0xD )
        goto LABEL_311;
    }
    else
    {
      if ( (unsigned int)xxxCallHandleMenuMessages((__int64)i, a1, v141[0], (__int64)a3, a4) )
      {
LABEL_329:
        ThreadUnlock1(v31, v8, FadeInternal);
        goto LABEL_330;
      }
      v31 = v141[0];
      v28 = 1LL;
      FadeInternal = 256LL;
    }
    goto LABEL_60;
  }
  v31 = v141[0];
  switch ( v141[0] )
  {
    case 0x1E0u:
      if ( !*(_QWORD *)v140[0] )
        goto LABEL_330;
      break;
    case 0x81u:
      break;
    case 0x70u:
      v28 = 0LL;
LABEL_60:
      v8 = (__int64)v142;
      goto LABEL_61;
    default:
      goto LABEL_312;
  }
  v8 = (__int64)v142;
  if ( *(char *)(*(_QWORD *)(*(_QWORD *)v142 + 40LL) + 19LL) < 0 )
    goto LABEL_330;
  v31 = v141[0];
  v28 = 0LL;
LABEL_61:
  if ( (unsigned int)v31 <= 0x1E1 )
  {
    if ( (_DWORD)v31 == 481 )
    {
      if ( (_DWORD)v28 )
        v25 = ThreadUnlock1(v31, v8, 256LL);
      if ( v25 )
      {
        v11 = *(_QWORD *)v25;
        goto LABEL_313;
      }
      goto LABEL_330;
    }
    if ( (unsigned int)v31 <= 0x81 )
    {
      if ( (_DWORD)v31 == 129 )
      {
        if ( *(_QWORD *)(v8 + 8) || *(_QWORD *)(v8 + 16) )
        {
          v71 = (_DWORD)v28 == 0;
          goto LABEL_328;
        }
        v70 = MNAllocPopup(1);
        SmartObjStackRefBase<tagPOPUPMENU>::operator=(v140, (__int64)v70);
        if ( *(_QWORD *)v140[0] )
        {
          *((_QWORD *)v142 + 1) = *(_QWORD *)v140[0];
          **(_DWORD **)v140[0] |= 0x40000000u;
          *(_DWORD *)(*(_QWORD *)v140[0] + 80LL) = -1;
          *((_QWORD *)&v150 + 1) = a1;
          *(_QWORD *)&v150 = *(_QWORD *)v140[0] + 16LL;
          v155 = v150;
          HMAssignmentLock(&v155);
LABEL_336:
          if ( v139 )
            ThreadUnlock1(v34, v8, v35);
          goto LABEL_313;
        }
        goto LABEL_327;
      }
      if ( (unsigned int)v31 <= 0x18 )
      {
        if ( (_DWORD)v31 == 24 )
        {
          if ( !a3 )
            xxxMNCancel((__int64)i, 0, 0, 0LL);
          goto LABEL_310;
        }
        v32 = v31 - 3;
        if ( v32 && (v33 = v32 - 2) != 0 )
        {
          v31 = (unsigned int)(v33 - 1);
          if ( (_DWORD)v31 )
          {
            v31 = (unsigned int)(v31 - 9);
            if ( (_DWORD)v31 )
            {
              if ( (_DWORD)v31 == 5 && *(_QWORD *)(*(_QWORD *)(v25 + 40) + 24LL) )
              {
                MNEraseBackground(
                  (HDC)a3,
                  *(_DWORD *)(*((_QWORD *)a1 + 5) + 112LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 104LL),
                  *(_DWORD *)(*((_QWORD *)a1 + 5) + 116LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 108LL));
                goto LABEL_336;
              }
LABEL_310:
              if ( v139 )
LABEL_311:
                ThreadUnlock1(v31, v8, FadeInternal);
LABEL_312:
              v11 = xxxDefWindowProc(a1, v141[0], (__int64)a3, a4);
              goto LABEL_313;
            }
            SmartObjStackRefBase<tagMENU>::Init(v151, v25);
            v151[2] = 0LL;
            xxxHandleMenuPainting(a1, v151);
            v37 = v151;
LABEL_76:
            SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v37, v36);
            goto LABEL_327;
          }
          v38 = *((_DWORD *)i + 2);
          if ( (v38 & 0x100) != 0 )
          {
            if ( (_WORD)a3 )
              goto LABEL_310;
            if ( (v38 & 0x200) != 0 )
              goto LABEL_310;
            if ( (**(_DWORD **)i & 0x80000) != 0 )
              goto LABEL_310;
            LOBYTE(v8) = 1;
            a4 = HMValidateHandleNoSecure(a4, v8);
            v39 = safe_cast_fnid_to_PMENUWND(a4);
            if ( !v31 )
              goto LABEL_310;
            if ( v39 )
            {
              v40 = *(_QWORD *)(v39 + 8);
              if ( v40 )
              {
                if ( *(_QWORD *)i == *(_QWORD *)(v40 + 64) )
                  goto LABEL_310;
              }
            }
            v41 = *((_DWORD *)i + 2);
            if ( (v41 & 0x10000) != 0 && gpqForeground == *(_QWORD *)(gptiCurrent + 424LL) )
            {
              *((_DWORD *)i + 2) = v41 & 0xFFFEFFFF;
              PostMessage(a1, 0x1F2u, 0LL, 0LL);
              goto LABEL_310;
            }
LABEL_88:
            v42 = a1;
LABEL_89:
            PostMessage(v42, 0x1F3u, 0LL, 0LL);
            goto LABEL_327;
          }
          if ( !(_WORD)a3 )
            goto LABEL_327;
          if ( *(_WORD *)(gptiCurrent + 624LL) >= 0x500u )
            goto LABEL_88;
          if ( !gpqForegroundPrev
            || (unsigned int)FBadWindow(*(_QWORD *)(gpqForegroundPrev + 128LL))
            || (v8 = *(_QWORD *)(gpqForegroundPrev + 128LL),
                v31 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x3FFF,
                (_DWORD)v31 == 668) )
          {
            v45 = a1;
            v46 = 0;
            do
            {
              TopWindow = NextTopWindow(gptiCurrent, (__int64)a1, 0LL, 0);
              a1 = TopWindow;
              if ( !TopWindow )
                break;
              if ( !(unsigned int)FBadWindow(*((_QWORD *)TopWindow + 23)) )
              {
                v8 = *((_QWORD *)a1 + 23);
                v31 = *(_WORD *)(*(_QWORD *)(v8 + 40) + 42LL) & 0x3FFF;
                if ( (_DWORD)v31 != 668 )
                  goto LABEL_95;
              }
              v48 = v46++;
            }
            while ( v48 < 0xFF );
            if ( v46 )
            {
              v42 = v45;
              goto LABEL_89;
            }
          }
          else
          {
LABEL_95:
            a1 = (struct tagWND *)v8;
          }
          if ( !a1 )
            goto LABEL_327;
          v43 = gptiCurrent;
          v159[0] = *(_QWORD *)(gptiCurrent + 408LL);
          *(_QWORD *)(gptiCurrent + 408LL) = v159;
          v159[1] = a1;
          _InterlockedAdd((volatile signed __int32 *)a1 + 2, 1u);
          v44 = *(_QWORD *)(gptiCurrent + 424LL);
          if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == v44 )
          {
            xxxActivateThisWindow(a1, 0, 2, 0);
          }
          else if ( gpqForeground == v44 )
          {
            xxxSetForegroundWindow(a1, 0);
          }
        }
        else
        {
          v31 = *(_QWORD *)v140[0];
          if ( !*(_QWORD *)(*(_QWORD *)v140[0] + 24LL) )
            goto LABEL_327;
          v49 = MNGetpItem((__int64)v140, *(_DWORD *)(*(_QWORD *)v140[0] + 84LL));
          v50 = (struct tagWND **)safe_cast_fnid_to_PMENUWND(*(_QWORD *)(*(_QWORD *)v140[0] + 24LL));
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
          v145 = 0;
          v144 = 0;
          v55 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
          v160[0] = *(_QWORD *)(v55 + 408);
          *(_QWORD *)(v55 + 408) = v160;
          v160[1] = v53;
          _InterlockedAdd((volatile signed __int32 *)v53 + 2, 1u);
          v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v56);
          v161[0] = *(_QWORD *)(v57 + 408);
          *(_QWORD *)(v57 + 408) = v161;
          v161[1] = v54;
          _InterlockedAdd((volatile signed __int32 *)(v54 + 8), 1u);
          if ( !*(_DWORD *)(v54 + 64) )
          {
            v58 = *v51;
            _InterlockedAdd(&glSendMessage, 1u);
            xxxSendTransformableMessageTimeout((__int64 *)v58, 0x1E2u, 0LL, 0LL, 0, 0, 0LL, 1, 1);
          }
          if ( *(_QWORD *)(*(_QWORD *)v140[0] + 40LL)
            && (unsigned int)MNGetpItemIndex(*(_QWORD *)(*(_QWORD *)v140[0] + 40LL), v49) != -1 )
          {
            xxxMNPositionHierarchy(
              (__int64 **)v140,
              v49,
              *(_DWORD *)(v54 + 64) + 6,
              *(_DWORD *)(v54 + 68) + 6,
              (int *)&v145,
              (LONG *)&v144,
              0LL);
          }
          xxxSetWindowPos(*v51, 0LL, v145, v144, 0, 0, 1029);
          ThreadUnlock1(v60, v59, v61);
        }
LABEL_163:
        ThreadUnlock1(v43, v44, FadeInternal);
        goto LABEL_327;
      }
      v31 = (unsigned int)(v31 - 28);
      if ( !(_DWORD)v31 )
      {
        if ( ((_DWORD)i[2] & 0x100) == 0 || a1 != *(struct tagWND **)(*(_QWORD *)i + 56LL) )
          goto LABEL_327;
        if ( a3 )
        {
          PostMessage(a1, 0x1F2u, 0LL, 0LL);
          v8 = *(_QWORD *)(gptiCurrent + 424LL) - gpqForeground;
          *((_DWORD *)i + 2) = (_DWORD)i[2] & 0xFFFEFFFF | (*(_QWORD *)(gptiCurrent + 424LL) != gpqForeground
                                                          ? 0x10000
                                                          : 0);
        }
        v31 = *(_QWORD *)v140[0];
        if ( !*(_QWORD *)(*(_QWORD *)v140[0] + 8LL) )
          goto LABEL_327;
        v67 = *(_QWORD *)(*(_QWORD *)v140[0] + 8LL);
        v68 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
        v146 = *(_QWORD *)(v68 + 408);
        *(_QWORD *)(v68 + 408) = &v146;
        v147 = v67;
        _InterlockedAdd((volatile signed __int32 *)(v67 + 8), 1u);
        if ( !a3 || (v69 = 1, ((_DWORD)i[2] & 0x10000) != 0) )
          v69 = 2;
        xxxDWP_DoNCActivate(*(_QWORD *)(*(_QWORD *)v140[0] + 8LL), v69, 1LL);
        goto LABEL_163;
      }
      v31 = (unsigned int)(v31 - 42);
      if ( (_DWORD)v31 )
      {
        v31 = (unsigned int)(v31 - 1);
        if ( (_DWORD)v31 )
        {
          if ( (_DWORD)v31 != 41 )
            goto LABEL_310;
          if ( i && ((_DWORD)i[2] & 0x400) != 0 )
          {
            v148 = *(_QWORD *)a1;
            xxxUserModeCallback(101LL, (__int64)&v148, 8LL, v28, v138);
          }
          xxxMNDestroyHandler(v142);
          goto LABEL_327;
        }
        if ( (*(_DWORD *)(a4 + 32) & 0x40) == 0 )
          goto LABEL_310;
        v31 = *(_QWORD *)v140[0];
        if ( (**(_DWORD **)v140[0] & 0x8000000) == 0 )
          goto LABEL_310;
        if ( (gfade[12] & 0x10) != 0 )
        {
          zzzStartFade();
        }
        else
        {
          *((_DWORD *)i + 26) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
          SetTimer((unsigned __int64)a1, 65531LL, 0xAu, 0LL, 0);
        }
      }
      else
      {
        if ( (*(_DWORD *)(a4 + 32) & 0x40) == 0 )
          goto LABEL_310;
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80000002) == 0x80000002
          && (**(_DWORD **)v140[0] & 0x8000000) != 0
          && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 1
          && (unsigned int)CInputGlobals::GetLastInputType(gpInputGlobals) != 3
          && !CInputGlobals::WasLastInputJournalling(gpInputGlobals)
          && (GetAppCompatFlags2(0x400u, v8) & 1) == 0 )
        {
          v62 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL);
          *((_DWORD *)i + 29) = v62;
          v63 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 100LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 92LL);
          *((_DWORD *)i + 30) = v63;
          if ( gbDisableAlpha || ((unsigned int)gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
          {
            if ( !(unsigned int)MNCreateAnimationBitmap(i, v62, v63) )
              goto LABEL_133;
            *((_QWORD *)i + 12) = _GetDCEx(a1, 1LL, 65665LL);
            v64 = (**(_DWORD **)v140[0] >> 4) & 0xF80000 | (_DWORD)i[2] & 0xFF07FFFF;
            v65 = 0;
            *((_DWORD *)i + 2) = v64;
            if ( (v64 & 0x180000) == 0 )
              v65 = *((_DWORD *)i + 29);
            *((_DWORD *)i + 27) = v65;
            v66 = 0;
            if ( (v64 & 0x600000) == 0 )
              v66 = *((_DWORD *)i + 30);
            FadeInternal = *((_QWORD *)i + 17);
            *((_DWORD *)i + 28) = v66;
          }
          else
          {
            FadeInternal = (__int64)CreateFadeInternal(a1, 0LL, 175, 17, 0);
            if ( !FadeInternal )
              goto LABEL_133;
          }
          *(_DWORD *)(*(_QWORD *)(v25 + 40) + 40LL) |= 8u;
          _InterlockedAdd(&glSendMessage, 1u);
          xxxSendTransformableMessageTimeout((__int64 *)a1, 0x317u, (HWND)FadeInternal, 14LL, 0, 0, 0LL, 1, 1);
          *(_DWORD *)(*(_QWORD *)(v25 + 40) + 40LL) &= ~8u;
          v31 = gfade[12];
          if ( (v31 & 0x10) != 0 )
            zzzShowFade();
          goto LABEL_310;
        }
      }
LABEL_133:
      v31 = *(_QWORD *)v140[0];
      **(_DWORD **)v140[0] &= ~0x8000000u;
      goto LABEL_310;
    }
    v8 = 131LL;
    switch ( (_DWORD)v31 )
    {
      case 0x83:
        xxxDefWindowProc(a1, 131LL, (__int64)a3, a4);
        if ( (*(_DWORD *)(v25 + 124) & 3) != 0 )
        {
          DPIMetrics = GetDPIMetrics(v31, v8);
          v31 = (unsigned int)-*(_DWORD *)(DPIMetrics + 28);
          *(_DWORD *)(a4 + 4) += *(_DWORD *)(DPIMetrics + 28);
          *(_DWORD *)(a4 + 12) += v31;
        }
        goto LABEL_327;
      case 0x84:
        if ( ((_DWORD)i[2] & 0x100) == 0 )
          goto LABEL_310;
        LODWORD(v143) = (__int16)a4;
        HIDWORD(v143) = SWORD1(a4);
        if ( (_DWORD)v28 )
          ThreadUnlock1(v31, 131LL, 256LL);
        if ( PtInRect((_DWORD *)(*((_QWORD *)a1 + 5) + 88LL), v143) )
          goto LABEL_313;
        goto LABEL_330;
      case 0x85:
        if ( (**(_DWORD **)v140[0] & 0x8000000) != 0 )
        {
          xxxValidateRect(a1, 0LL);
        }
        else
        {
          if ( (*(_DWORD *)(v25 + 124) & 3) != 0 )
          {
            if ( (unsigned int)MNIsUAHMenu(v25) )
            {
              v79 = 0LL;
              v80 = 65537LL;
              v81 = *(struct tagWND **)(*(_QWORD *)v140[0] + 16LL);
            }
            else
            {
              v80 = 328833LL;
              v79 = a3;
              v81 = a1;
            }
            DCEx = _GetDCEx(v81, v79, v80);
            xxxMNDrawFullNC(a1);
          }
          else
          {
            if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) != 0x80020000 )
            {
              v11 = xxxDefWindowProc(a1, 133LL, (__int64)a3, a4);
              if ( (unsigned int)MNIsUAHMenu(v25) )
              {
                v34 = *(_QWORD *)v140[0];
                if ( *(_QWORD *)(*(_QWORD *)v140[0] + 16LL) )
                {
                  v85 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v140[0] + 16LL), 0LL, 65537LL);
                  xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v140[0] + 16LL), 149LL, (_QWORD *)v25, v85);
                  _ReleaseDC(v85);
                }
              }
              goto LABEL_336;
            }
            if ( (unsigned int)MNIsUAHMenu(v25) )
            {
              v83 = _GetDCEx(*(_QWORD *)(*(_QWORD *)v140[0] + 16LL), 0LL, 65537LL);
              v84 = xxxSendUAHMenuMessage(*(_QWORD *)(*(_QWORD *)v140[0] + 16LL), 149LL, (_QWORD *)v25, v83);
              _ReleaseDC(v83);
              if ( v84 )
                goto LABEL_327;
            }
            DCEx = _GetDCEx(a1, a3, 328833LL);
            MNDrawEdge(v25, DCEx, *((_QWORD *)a1 + 5) + 88LL, 0LL);
          }
          _ReleaseDC(DCEx);
        }
LABEL_327:
        v71 = v139 == 0;
        goto LABEL_328;
    }
    v72 = v31 - 256;
    if ( (_DWORD)v31 != 256 )
    {
      v31 = 2LL;
      v73 = v72 - 2;
      if ( !v73 )
        goto LABEL_199;
      v74 = v73 - 2;
      if ( v74 )
      {
        v75 = v74 - 2;
        if ( v75 )
        {
          v76 = v75 - 13;
          if ( v76 )
          {
            if ( v76 != 205 )
              goto LABEL_310;
            if ( !a3 )
              goto LABEL_327;
            v77 = ValidateHmenu(a3);
            if ( !v77 )
              goto LABEL_327;
            SmartObjStackRefBase<tagMENU>::Init(v152, v77);
            v152[2] = 0LL;
            LockPopupMenu((__int64)v140, (__int64 *)(*(_QWORD *)v140[0] + 40LL), (__int64)v152);
            v37 = (__int64 **)v152;
            goto LABEL_76;
          }
          v8 = 65529LL;
          if ( a3 != (HWND)65529 )
          {
            if ( a3 == (HWND)65531 )
            {
              if ( *((_QWORD *)i + 12) )
                MNAnimate(i, 1LL);
              goto LABEL_327;
            }
            if ( a3 == (HWND)65534 )
            {
              **(_DWORD **)v140[0] &= ~0x80u;
              xxxMNOpenHierarchy((__int64 **)v140, (__int64)i);
              goto LABEL_327;
            }
            if ( a3 != (HWND)0xFFFF )
            {
              if ( (unsigned __int64)(a3 - 0x3FFFFFFF) <= 1 )
              {
                if ( ((_DWORD)i[2] & 8) != 0 )
                  xxxMNDoScroll((__int64)v140, (unsigned int)a3, 0);
                else
                  FindTimer((__int64)a1, (unsigned int)a3, 0, 1, 0LL);
              }
              goto LABEL_327;
            }
            **(_DWORD **)v140[0] &= ~0x80u;
            goto LABEL_190;
          }
          FindTimer((__int64)a1, 65529LL, 0, 1, 0LL);
          if ( ((_DWORD)i[2] & 0x1000) == 0 )
            goto LABEL_327;
          goto LABEL_195;
        }
LABEL_199:
        xxxMNChar((__int64 **)v140, (__int64)i, (unsigned int)a3);
        goto LABEL_327;
      }
    }
    xxxMNKeyDown((__int64 **)v140, (__int64)i, (unsigned int)a3);
    goto LABEL_327;
  }
  if ( (unsigned int)v31 > 0x2A3 )
  {
    v31 = (unsigned int)(v31 - 791);
    if ( (_DWORD)v31 )
    {
      if ( (_DWORD)v31 != 1 )
        goto LABEL_310;
      xxxMenuDraw((HDC)a3, v25, (__int64)a1);
    }
    else
    {
      if ( (a4 & 2) == 0 || (*(_DWORD *)(v25 + 124) & 3) == 0 )
      {
        v11 = xxxDefWindowProc(a1, 791LL, (__int64)a3, a4);
        if ( !(unsigned int)MNIsUAHMenu(v25)
          || !*(_QWORD *)(*(_QWORD *)v140[0] + 16LL)
          || !(unsigned int)xxxSendUAHMenuMessage(
                              *(_QWORD *)(*(_QWORD *)v140[0] + 16LL),
                              149LL,
                              (_QWORD *)v25,
                              (__int64)a3) )
        {
          v34 = (unsigned int)gpdwCPUserPreferencesMask & 0x80020000;
          if ( (_DWORD)v34 == -2147352576 )
            MNDrawEdge(v25, a3, *((_QWORD *)a1 + 5) + 88LL, 0LL);
        }
        goto LABEL_336;
      }
      if ( a3 && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 26LL) & 0x40) != 0 && (GreGetLayout((HDC)a3) & 1) == 0 )
      {
        v134 = GreSetLayout(
                 a3,
                 (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL)),
                 1LL);
      }
      else
      {
        LODWORD(v11) = 0;
        v134 = 0;
      }
      xxxMNDrawFullNC(a1);
      if ( (_DWORD)v11 )
        GreSetLayout(
          a3,
          (unsigned int)(*(_DWORD *)(*((_QWORD *)a1 + 5) + 96LL) - *(_DWORD *)(*((_QWORD *)a1 + 5) + 88LL)),
          v134);
      GreGetDCPoint(a3, 8LL, &v143);
      v137 = GetDPIMetrics(v136, v135);
      GreSetWindowOrg((HDC)a3, v143 - 3, HIDWORD(v143) - *(_DWORD *)(v137 + 28) - 3);
      xxxDefWindowProc(a1, 791LL, (__int64)a3, a4 & 0xFFFFFFFFFFFFFFFDuLL);
      GreSetWindowOrg((HDC)a3, v143, SHIDWORD(v143));
    }
    goto LABEL_327;
  }
  if ( (_DWORD)v31 == 675 )
  {
    *((_DWORD *)i + 2) ^= ((unsigned __int16)*((_DWORD *)i + 2) ^ (unsigned __int16)~(unsigned __int16)(*((_DWORD *)i + 2) >> 1)) & 0x4000;
    **(_DWORD **)v140[0] &= ~0x100000u;
    MNSetTimerToAutoDismiss((struct tagMENUSTATE *)i, a1);
    v8 = *(_QWORD *)v140[0];
    v31 = *(_QWORD *)(*(_QWORD *)i + 56LL);
    if ( *(_QWORD *)(*(_QWORD *)v140[0] + 16LL) == v31 )
      xxxMNSelectItem((__int64 **)v140, (__int64)i, -1);
    goto LABEL_327;
  }
  if ( (unsigned int)v31 <= 0x1ED )
  {
    switch ( (_DWORD)v31 )
    {
      case 0x1ED:
        v31 = *(unsigned int *)(*(_QWORD *)(v25 + 40) + 44LL);
        if ( (unsigned __int64)a3 < v31 || (unsigned __int64)a3 >= 0xFFFFFFFC )
          xxxMNButtonDown((__int64 **)v140, (__int64)i, (unsigned int)a3, 1);
        goto LABEL_327;
      case 0x1E2:
        if ( *(_QWORD *)(*(_QWORD *)v140[0] + 8LL) )
        {
          v97 = *(_QWORD *)(*(_QWORD *)v140[0] + 8LL);
          v98 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
          v146 = *(_QWORD *)(v98 + 408);
          *(_QWORD *)(v98 + 408) = &v146;
          v147 = v97;
          _InterlockedAdd((volatile signed __int32 *)(v97 + 8), 1u);
          SmartObjStackRefBase<tagMENU>::Init(v153, v25);
          v153[2] = 0LL;
          xxxMNCompute(v153, *(_QWORD *)(*(_QWORD *)v140[0] + 8LL), (__int64)a1, 0, 0, 0, 0LL);
          SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v153, v99);
          ThreadUnlock1(v101, v100, v102);
        }
        v103 = _MonitorFromWindowInternal(a1, 1LL, 0LL, v28);
        v104 = *(_DWORD *)(v25 + 64);
        v142 = v103;
        v105 = (__int64)v103;
        SmartObjStackRefBase<tagMENU>::Init(v154, v25);
        v154[2] = 0LL;
        v106 = MNCheckScroll((__int64 **)v140, v154, v105);
        SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v154, v107);
        if ( a3 )
        {
          v110 = 0LL;
          v111 = 0LL;
          v112 = (8 * (_BYTE)a3) & 0x20 | 0x214;
          if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x10) != 0 )
          {
            SmartObjStackRefBase<tagPOPUPMENU>::Init(v156, *(_QWORD *)v140[0]);
            v113 = v142;
            MNGetPopupBoundsRect(v156, (__int64)v142, &v157, 1);
            v114 = *((_QWORD *)a1 + 5);
            v115 = *(_DWORD *)(v114 + 92);
            LODWORD(v142) = *(_DWORD *)(v114 + 88);
            HIDWORD(v142) = v115;
            BestPos = FindBestPos(
                        (int)v142,
                        v115,
                        v104,
                        v106,
                        (__int64)&v157,
                        0,
                        (__int64)v140,
                        (__int64)v113,
                        (__int64)v142);
            v110 = (unsigned int)(__int16)BestPos;
            v111 = (unsigned int)SHIWORD(BestPos);
          }
          else
          {
            v112 |= 2u;
          }
          xxxSetWindowPos(a1, 0LL, v110, v111, v104 + 6, v106 + 6, v112);
        }
        if ( v139 )
          ThreadUnlock1(v108, v8, v109);
        v11 = (unsigned __int16)v104 | ((unsigned __int16)v106 << 16);
        goto LABEL_313;
      case 0x1E3:
        v11 = xxxMNOpenHierarchy((__int64 **)v140, (__int64)i);
        if ( v139 )
          ThreadUnlock1(v95, v8, v96);
        if ( v11 == -1 )
          goto LABEL_330;
        break;
      case 0x1E4:
LABEL_190:
        xxxMNCloseHierarchy(*(_QWORD *)v140[0], (__int64)i);
        goto LABEL_327;
      case 0x1E5:
        v31 = *(unsigned int *)(*(_QWORD *)(v25 + 40) + 44LL);
        if ( (unsigned __int64)a3 < v31 || (unsigned __int64)a3 >= 0xFFFFFFFC )
        {
          v94 = (_QWORD *)xxxMNSelectItem((__int64 **)v140, (__int64)i, (int)a3);
          if ( v94 )
          {
            if ( v139 )
              ThreadUnlock1(v31, v8, FadeInternal);
            v11 = *(unsigned __int16 *)(*v94 + 4LL) | (unsigned __int64)(v94[2] != 0LL ? 0x10 : 0);
            goto LABEL_313;
          }
        }
        goto LABEL_327;
      case 0x1E6:
        xxxMNCancel((__int64)i, (unsigned int)a3, (unsigned __int16)a4, 0LL);
        goto LABEL_327;
      case 0x1E7:
        ValidItem = MNFindNextValidItem(v25, 0xFFFFFFFFLL, 1LL, 1LL);
        v91 = (int)ValidItem;
        _InterlockedAdd(&glSendMessage, 1u);
        xxxSendTransformableMessageTimeout((__int64 *)a1, 0x1E5u, (HWND)ValidItem, 0LL, 0, 0, 0LL, 1, 1);
        if ( v139 )
          ThreadUnlock1(v92, v8, v93);
        v11 = v91;
        goto LABEL_313;
      case 0x1EB:
        v11 = xxxMNFindWindowFromPoint((__int64 **)v140, a3, a4);
        if ( v139 )
          ThreadUnlock1(v88, v87, v89);
        if ( !IsMFMWFPWindow(v11) )
          goto LABEL_313;
        break;
      case 0x1EC:
        xxxPlayEventSound(5LL, v8, 256LL, v28);
        xxxShowWindowEx(a1, (unsigned __int16)((_WORD)i[2] & 0x100 | 0x400) >> 8, 0);
        goto LABEL_327;
      default:
        goto LABEL_310;
    }
    if ( v11 )
    {
      v11 = *(_QWORD *)v11;
      goto LABEL_313;
    }
    goto LABEL_330;
  }
  switch ( (_DWORD)v31 )
  {
    case 0x1EE:
      xxxMNMouseMove((__int64 **)v140, (__int64)i, a4);
      goto LABEL_327;
    case 0x1EF:
      v31 = *(unsigned int *)(*(_QWORD *)(v25 + 40) + 44LL);
      if ( (unsigned __int64)a3 < v31 || (unsigned __int64)a3 >= 0xFFFFFFFC )
        xxxMNButtonUp(v140, (__int64)i, (int)a3, a4);
      goto LABEL_327;
    case 0x1F0:
      if ( (_DWORD)v28 )
        ThreadUnlock1(v31, v8, 256LL);
      v11 = (unsigned __int16)MNSetTimerToOpenHierarchy((__int64)v140);
      goto LABEL_313;
    case 0x1F1:
      xxxMNDoubleClick((__int64)i, (__int64)v140, (int)a3);
      goto LABEL_327;
    case 0x1F2:
      xxxActivateThisWindow(a1, 0, 0, 0);
      goto LABEL_327;
  }
  if ( (_DWORD)v31 != 499 )
  {
    if ( (_DWORD)v31 != 500 )
      goto LABEL_310;
    if ( (_DWORD)v28 )
      ThreadUnlock1(v31, v8, 256LL);
    v78 = 0;
    if ( (*((_DWORD *)i + 2) & 0x80u) == 0 )
      goto LABEL_330;
    if ( !*(_QWORD *)(*(_QWORD *)v140[0] + 8LL) )
      goto LABEL_330;
    if ( !IsMFMWFPWindow(*((_QWORD *)i + 8)) )
      goto LABEL_330;
    v118 = safe_cast_fnid_to_PMENUWND(v117);
    if ( !v118 )
      goto LABEL_330;
    v119 = *(_QWORD *)(v118 + 8);
    if ( !v119 )
      goto LABEL_330;
    v120 = *(__int64 **)(v119 + 40);
    if ( ((_DWORD)i[2] & 0x100) == 0 )
      *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 388LL) &= ~0x100000u;
    ++*((_DWORD *)i + 10);
    v121 = *(_QWORD *)(*(_QWORD *)v140[0] + 8LL);
    v122 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8);
    v146 = *(_QWORD *)(v122 + 408);
    *(_QWORD *)(v122 + 408) = &v146;
    v147 = v121;
    _InterlockedAdd((volatile signed __int32 *)(v121 + 8), 1u);
    *((_DWORD *)i + 2) |= 0x8000u;
    v123 = 0LL;
    if ( v120 )
      v123 = *v120;
    v124 = (HWND)*((unsigned int *)i + 18);
    v125 = *(__int64 **)(*(_QWORD *)v140[0] + 8LL);
    _InterlockedAdd(&glSendMessage, 1u);
    v126 = xxxSendTransformableMessageTimeout(v125, 0x123u, v124, v123, 0, 0, 0LL, 1, 1);
    v129 = *((unsigned int *)i + 2);
    LODWORD(v129) = v129 & 0xFFFF7FFF;
    *((_DWORD *)i + 2) = v129;
    if ( v126 != 1 )
    {
      *((_DWORD *)i + 2) = v129 | 0x2000;
      MNCheckButtonDownState((__int64)i, v127);
      if ( ((_DWORD)i[2] & 0x100) == 0 )
        xxxMNSetCapture((__int64)v140, (__int64)i);
      ThreadUnlock1(v131, v130, v132);
      xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1);
      goto LABEL_330;
    }
    ThreadUnlock1(v129, v127, v128);
    if ( (unsigned int)xxxUnlockMenuStateInternal((struct tagMENUSTATE *)i, 1) )
      goto LABEL_330;
    goto LABEL_196;
  }
LABEL_195:
  v78 = v139;
LABEL_196:
  xxxEndMenuLoop((__int64)i, *(_QWORD *)i);
  if ( ((_DWORD)i[2] & 0x100) != 0 )
    xxxMNEndMenuState((__int64)i);
  v71 = v78 == 0;
LABEL_328:
  if ( !v71 )
    goto LABEL_329;
LABEL_330:
  v11 = 0LL;
LABEL_313:
  if ( v149 )
    xxxUnlockMenuStateInternal(v149, 0);
LABEL_315:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v140, v8);
  return v11;
}
