/*
 * XREFs of xxxSysCommand @ 0x1C0137980
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC310 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C000F6C8 (_PostThreadMessage.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C00114C8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     _PostMessage @ 0x1C0015330 (_PostMessage.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0018C90 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B1CC (xxxMakeWindowForegroundWithState.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021844 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxShowWindow @ 0x1C002CA38 (xxxShowWindow.c)
 *     IsWindowDestroyed @ 0x1C0048AD4 (IsWindowDestroyed.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C00A4180 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     GetThreadDesktopWindow @ 0x1C010B1CC (GetThreadDesktopWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C011022C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _GetKeyState @ 0x1C0110D00 (_GetKeyState.c)
 *     _GetMessagePos @ 0x1C0117EA0 (_GetMessagePos.c)
 *     xxxPlayEventSound @ 0x1C0128710 (xxxPlayEventSound.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E14E0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01F5A18 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0210668 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C0210C40 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C0211324 (xxxMNStartMenuState.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0211F50 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212264 (-DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0212290 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C02122BC (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     StartScreenSaver @ 0x1C02123E0 (StartScreenSaver.c)
 *     xxxMNLoop @ 0x1C0220E80 (xxxMNLoop.c)
 *     xxxSBTrackInit @ 0x1C0242698 (xxxSBTrackInit.c)
 *     xxxIsDragging @ 0x1C0248118 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C0248398 (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1C0248C4C (xxxMNKeyFilter.c)
 */

void __fastcall xxxSysCommand(struct tagWND *a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v4; // r14d
  __int64 v5; // r15
  unsigned int v6; // esi
  __int64 v8; // rdx
  ULONG_PTR v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // esi
  unsigned int v16; // esi
  unsigned int v17; // esi
  unsigned int v18; // esi
  unsigned int v19; // esi
  __int64 v20; // rcx
  int MessagePos; // eax
  char v22; // cl
  unsigned int v23; // edx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 *v29; // rcx
  struct tagMENUSTATE *v30; // rax
  struct tagMENUSTATE *v31; // rbx
  __int64 *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  struct tagMENUSTATE *v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rbx
  __int64 v42; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  struct tagWND *v48; // rax
  int v49; // r8d
  int v50; // ecx
  int v51; // edx
  __int64 v52; // r9
  __int64 v53; // rcx
  int v54; // eax
  __int64 v55; // rsi
  char v56; // cl
  struct tagMENUSTATE *v57; // rax
  struct tagMENUSTATE *v58; // rsi
  _DWORD **v59; // rdx
  __int64 ThreadDesktopWindow; // rbx
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  struct tagMENUSTATE *v72; // [rsp+50h] [rbp-69h] BYREF
  int v73; // [rsp+58h] [rbp-61h] BYREF
  struct tagMENUSTATE *v74; // [rsp+60h] [rbp-59h] BYREF
  __int64 v75; // [rsp+68h] [rbp-51h] BYREF
  __int64 v76; // [rsp+70h] [rbp-49h]
  __int64 v77; // [rsp+78h] [rbp-41h]
  __int64 v78; // [rsp+80h] [rbp-39h] BYREF
  __int64 v79; // [rsp+88h] [rbp-31h]
  __int64 v80; // [rsp+90h] [rbp-29h]
  _QWORD v81[2]; // [rsp+98h] [rbp-21h] BYREF
  _QWORD v82[2]; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v83; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v84; // [rsp+C0h] [rbp+7h]
  _QWORD v85[2]; // [rsp+C8h] [rbp+Fh] BYREF

  v3 = *((_QWORD *)a1 + 2);
  v4 = a2 & 0xF;
  v5 = a3;
  v6 = a2 - v4;
  if ( a3 == 0x10000 )
    v5 = 0LL;
  if ( (*(_QWORD *)(*(_QWORD *)(v3 + 424) + 112LL) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0)
    && a1 != (struct tagWND *)gspwndFullScreen
    && (((v6 - 61744) & 0xFFFFFFAF) != 0 || v6 == 61824)
    || (((unsigned __int8)*(_DWORD *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(8, v6, (unsigned int)v5, 5)
    || (unsigned int)IsWindowDestroyed((__int64)a1) )
  {
    return;
  }
  if ( v6 <= 0xF090 )
  {
    if ( v6 != 61584 )
    {
      v12 = v6 - 61440;
      if ( v12 )
      {
        v13 = v12 - 16;
        if ( v13 )
        {
          v14 = v13 - 16;
          if ( v14 )
          {
            v15 = v14 - 16;
            if ( v15 )
            {
              v16 = v15 - 16;
              if ( v16 && (v17 = v16 - 16) != 0 )
              {
                v18 = v17 - 16;
                if ( v18 )
                {
                  v19 = v18 - 16;
                  if ( !v19 || v19 == 16 )
                  {
                    GetKeyState(0x10u, 61440LL, v10, v11);
                    xxxSBTrackInit(a1, v5);
                  }
                }
                else
                {
                  xxxSendMessage(v9);
                }
              }
              else
              {
                xxxOldNextWindow((unsigned int)v5);
              }
              return;
            }
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
              return;
            v20 = 12LL;
          }
          else
          {
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
              return;
            v20 = 11LL;
          }
LABEL_100:
          xxxPlayEventSound(v20);
          xxxShowWindow(a1);
          return;
        }
        MessagePos = GetMessagePos(v9, 61440LL, v10, v11);
        LODWORD(v72) = (__int16)MessagePos;
        HIDWORD(v72) = SHIWORD(MessagePos);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x20) == 0
          && v4
          && (!word_1C032C300 || qword_1C032C308 != v3)
          && !(unsigned int)xxxIsDragging(a1, v72) )
        {
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 3);
          v22 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
          if ( (v22 & 0x20) != 0 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(
              (__int64 *)a1,
              0x112u,
              (HWND)0xF100,
              (struct _LARGE_STRING *)((v22 & 0x40) != 0 ? 45LL : 32LL),
              0,
              0,
              0LL,
              1u,
              0);
          }
          goto LABEL_48;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61456) )
        {
          v23 = 10 - (v4 != 0);
LABEL_45:
          DelegateMoveSizeToShell(a1, v23);
          goto LABEL_48;
        }
        v24 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v24 + 30) & 4) != 0
          && (*(_BYTE *)(v24 + 31) & 1) != 0
          && !DragOperationFromMaximizedAllowed(a1) )
        {
          goto LABEL_48;
        }
      }
      else
      {
        if ( v4 > 0xA )
        {
LABEL_48:
          xxxDeliverRestoreFocusMessage(a1);
          return;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61440) )
        {
          v23 = v4;
          goto LABEL_45;
        }
        GetMessagePos(v26, v25, v27, v28);
      }
      xxxMoveSize(a1);
      goto LABEL_48;
    }
    goto LABEL_66;
  }
  switch ( v6 )
  {
    case 0xF100u:
      v57 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, 61696LL, v5);
      v58 = v57;
      if ( !v57 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v74, v57);
      **v59 |= 0x80000000;
      if ( (struct tagWND *)gspwndFullScreen == a1 )
      {
        v78 = 0LL;
        v79 = 0LL;
        v80 = 0LL;
        ThreadDesktopWindow = GetThreadDesktopWindow(0LL, (int)v59);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v61, v62, v63);
        v78 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v78;
        v79 = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          HMLockObject(ThreadDesktopWindow);
        xxxMakeWindowForegroundWithState(ThreadDesktopWindow, 2);
        ThreadUnlock1(v66, v65, v67);
      }
      v68 = *(_QWORD *)v58;
      *((_DWORD *)v58 + 2) |= 0x20u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v82, v68);
      xxxMNKeyFilter(v82, v58, (unsigned int)v5);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v82, v69, v70, v71);
      if ( (*((_DWORD *)v58 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v58);
      v36 = v74;
LABEL_109:
      if ( v36 )
        xxxUnlockMenuStateInternal(v36, 0);
      return;
    case 0xF120u:
      v56 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
      if ( (v56 & 0x20) != 0 || (v56 & 1) == 0 )
      {
        v20 = 9LL;
      }
      else
      {
        MoveWithArrangementAllowed(a1);
        v20 = 10LL;
      }
      goto LABEL_100;
    case 0xF130u:
      if ( (*(_DWORD *)(gpsi + 2120LL) & 8) == 0
        || (v53 = **(_QWORD **)(gptiCurrent + 456LL),
            v54 = *(_DWORD *)(gptiCurrent + 672LL),
            (((unsigned __int16)v54 | (unsigned __int16)*(_DWORD *)(v53 + 16)) & 0x800) == 0)
        && !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
      {
        if ( gptiTasklist )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, gptiTasklist, 0);
          PostThreadMessage(gptiTasklist, 0x112u, 61744LL, 0LL);
        }
        return;
      }
      if ( (((unsigned __int16)v54 | (unsigned __int16)*(_DWORD *)(v53 + 16)) & 0x800) != 0 )
        xxxCallHook(7, *(_QWORD *)a1, 0LL, 10);
      v55 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL);
      if ( !v55 )
        return;
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v55 + 16), 0);
      if ( v5 == 0xFFFFFFFFLL )
        LODWORD(v52) = -1;
      else
        v52 = *(_QWORD *)a1;
      v49 = 7;
      v50 = v55;
      v51 = *(_DWORD *)(gpsi + 928LL);
LABEL_82:
      PostMessage(v50, v51, v49, v52);
      return;
    case 0xF140u:
      LOBYTE(v8) = 1;
      v48 = (struct tagWND *)HMValidateHandleNoSecure(ghwndSwitch, v8, v10, v11);
      if ( !v48 || a1 == v48 )
      {
        StartScreenSaver(0LL);
        return;
      }
      v49 = 61760;
      v50 = (int)v48;
      v51 = 274;
      LODWORD(v52) = (*gpsi >> 9) & 1;
      goto LABEL_82;
    case 0xF150u:
      v37 = ValidateHwnd(v5);
      v41 = v37;
      if ( v37 )
      {
        v75 = 0LL;
        v76 = 0LL;
        v77 = 0LL;
        v42 = *(_QWORD *)(v37 + 200);
        CurrentThread = KeGetCurrentThread();
        if ( !v42 )
          v42 = v41;
        if ( v42 )
          v41 = v42;
        v44 = W32GetThreadWin32Thread((__int64)CurrentThread, v38, v39, v40);
        v75 = *(_QWORD *)(v44 + 408);
        *(_QWORD *)(v44 + 408) = &v75;
        v76 = v41;
        HMLockObject(v41);
        xxxSetForegroundWindowWithOptions(v41, 2u, 0, 0);
        if ( (*(_BYTE *)(*(_QWORD *)(v41 + 40) + 31LL) & 0x20) != 0 )
          PostMessage(v41, 274, 61728, 0);
        ThreadUnlock1(v46, v45, v47);
      }
      break;
    case 0xF160u:
LABEL_66:
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gpqForeground )
        return;
      v30 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, v6, v5);
      v31 = v30;
      if ( !v30 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v72, v30);
      *(_DWORD *)*v32 |= 0x80000000;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v81, *v32);
      xxxMNLoop(v81, v31, v5, v6 == 61792);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v81, v33, v34, v35);
      if ( (*((_DWORD *)v31 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v31);
      v36 = v72;
      goto LABEL_109;
    case 0xF170u:
      if ( v5 == -1 )
      {
        v85[0] = 4LL;
        v29 = v85;
        v85[1] = 3LL;
      }
      else
      {
        if ( v5 != 2 )
          return;
        v83 = 5LL;
        if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v73) )
          v84 = v73;
        else
          v84 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
        v29 = &v83;
      }
      QueuePowerRequest(v29, 0LL);
      break;
    case 0xF180u:
      xxxHelpLoop(a1);
      break;
  }
}
