/*
 * XREFs of xxxSysCommand @ 0x1C00DF300
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01E69FC (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     ?xxxSetForegroundWindow@@YAHPEAUtagWND@@H@Z @ 0x1C0009FEC (-xxxSetForegroundWindow@@YAHPEAUtagWND@@H@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0022768 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetWindowPos @ 0x1C0071C80 (xxxSetWindowPos.c)
 *     IsWindowDestroyed @ 0x1C007C730 (IsWindowDestroyed.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C00B0710 (xxxMakeWindowForegroundWithState.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C00CCD4C (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     _PostThreadMessage @ 0x1C00D49B0 (_PostThreadMessage.c)
 *     _PostMessage @ 0x1C00DC980 (_PostMessage.c)
 *     _GetMessagePos @ 0x1C00E0550 (_GetMessagePos.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0102A84 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _GetKeyState @ 0x1C0107788 (_GetKeyState.c)
 *     GetThreadDesktopWindow @ 0x1C0109EB8 (GetThreadDesktopWindow.c)
 *     xxxShowWindow @ 0x1C011E440 (xxxShowWindow.c)
 *     xxxPlayEventSound @ 0x1C011E550 (xxxPlayEventSound.c)
 *     ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0156E9C (-DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     xxxIsDragging @ 0x1C0157238 (xxxIsDragging.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C015D880 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01CCFA0 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01DFA50 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01F99A0 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C01F9F80 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C01FA6E4 (xxxMNStartMenuState.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01FB15C (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C01FB304 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01FB330 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     StartScreenSaver @ 0x1C01FB440 (StartScreenSaver.c)
 *     xxxMNLoop @ 0x1C0209440 (xxxMNLoop.c)
 *     xxxSBTrackInit @ 0x1C0229BD0 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1C0230040 (xxxMNKeyFilter.c)
 */

void __fastcall xxxSysCommand(struct tagWND *a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  unsigned int v4; // r14d
  __int64 v5; // r15
  unsigned int v6; // esi
  __int64 v8; // rdx
  ULONG_PTR v9; // rcx
  unsigned int v10; // esi
  unsigned int v11; // esi
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // esi
  unsigned int v16; // esi
  unsigned int v17; // esi
  int v18; // esi
  unsigned int v19; // ecx
  int MessagePos; // eax
  char v21; // cl
  unsigned int v22; // edx
  __int64 v23; // rcx
  int *v24; // rcx
  struct tagMENUSTATE *v25; // rax
  struct tagMENUSTATE *v26; // rbx
  _DWORD **v27; // rdx
  __int64 v28; // rdx
  struct tagMENUSTATE *v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rbx
  __int64 v33; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct tagWND *v38; // rax
  unsigned __int64 v39; // r8
  struct tagWND *v40; // rcx
  unsigned int v41; // edx
  __int64 v42; // r9
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // rsi
  char v46; // cl
  struct tagMENUSTATE *v47; // rax
  struct tagMENUSTATE *v48; // rsi
  _DWORD **v49; // rdx
  __int64 ThreadDesktopWindow; // rbx
  __int64 v51; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  struct tagMENUSTATE *v56; // [rsp+50h] [rbp-69h] BYREF
  int v57; // [rsp+58h] [rbp-61h] BYREF
  struct tagMENUSTATE *v58; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v59[2]; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v60[2]; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v61[3]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v62[3]; // [rsp+A0h] [rbp-19h] BYREF
  int v63; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v64; // [rsp+C0h] [rbp+7h]
  int v65; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v66; // [rsp+D0h] [rbp+17h]

  v3 = *((_QWORD *)a1 + 2);
  v4 = a2 & 0xF;
  v5 = a3;
  v6 = a2 - v4;
  if ( a3 == 0x10000 )
    v5 = 0LL;
  if ( (*(_QWORD *)(*(_QWORD *)(v3 + 432) + 104LL) || (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 8) != 0)
    && a1 != (struct tagWND *)gspwndFullScreen
    && (((v6 - 61744) & 0xFFFFFFAF) != 0 || v6 == 61824)
    || (((unsigned __int8)*(_DWORD *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(8, v6, (unsigned int)v5, 5)
    || (unsigned int)IsWindowDestroyed((__int64)a1) )
  {
    return;
  }
  if ( v6 <= 0xF090 )
  {
    if ( v6 != 61584 )
    {
      v10 = v6 - 61440;
      if ( v10 )
      {
        v11 = v10 - 16;
        if ( v11 )
        {
          v12 = v11 - 16;
          if ( v12 )
          {
            v13 = v12 - 16;
            if ( v13 )
            {
              v14 = v13 - 16;
              if ( v14 && (v15 = v14 - 16) != 0 )
              {
                v16 = v15 - 16;
                if ( v16 )
                {
                  v17 = v16 - 16;
                  if ( !v17 || v17 == 16 )
                  {
                    GetKeyState(16LL);
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
            v18 = 3;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 1) != 0 )
              return;
            v19 = 12;
          }
          else
          {
            v18 = 6;
            if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) != 0 )
              return;
            v19 = 11;
          }
LABEL_100:
          xxxPlayEventSound(v19);
          xxxShowWindow(a1, v18 | gdwPUDFlags & 0x10000u);
          return;
        }
        MessagePos = GetMessagePos();
        LODWORD(v56) = (__int16)MessagePos;
        HIDWORD(v56) = SHIWORD(MessagePos);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x20) == 0
          && v4
          && (!word_1C03172D0 || qword_1C03172D8 != v3)
          && !(unsigned int)xxxIsDragging(a1, v56) )
        {
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 3);
          v21 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
          if ( (v21 & 0x20) != 0 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(
              (__int64 *)a1,
              0x112u,
              0xF100uLL,
              (v21 & 0x40) != 0 ? 45LL : 32LL,
              0,
              0,
              0LL,
              1,
              0);
          }
          goto LABEL_48;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand(a1, 61456) )
        {
          v22 = 10 - (v4 != 0);
LABEL_45:
          DelegateMoveSizeToShell(a1, v22);
          goto LABEL_48;
        }
        v23 = *((_QWORD *)a1 + 5);
        if ( (*(_BYTE *)(v23 + 30) & 4) != 0
          && (*(_BYTE *)(v23 + 31) & 1) != 0
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
          v22 = v4;
          goto LABEL_45;
        }
        GetMessagePos();
      }
      xxxMoveSize(a1);
      goto LABEL_48;
    }
    goto LABEL_66;
  }
  switch ( v6 )
  {
    case 0xF100u:
      v47 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, 61696LL, v5);
      v48 = v47;
      if ( !v47 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v58, v47);
      **v49 |= 0x80000000;
      if ( (struct tagWND *)gspwndFullScreen == a1 )
      {
        ThreadDesktopWindow = GetThreadDesktopWindow(0LL);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51);
        v62[0] = *(_QWORD *)(ThreadWin32Thread + 416);
        *(_QWORD *)(ThreadWin32Thread + 416) = v62;
        v62[1] = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          _InterlockedIncrement((volatile signed __int32 *)(ThreadDesktopWindow + 8));
        xxxMakeWindowForegroundWithState(ThreadDesktopWindow, 2);
        ThreadUnlock1(v54, v53);
      }
      *((_DWORD *)v48 + 2) |= 0x20u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v60);
      xxxMNKeyFilter(v60, v48, (unsigned int)v5);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v60, v55);
      if ( (*((_DWORD *)v48 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v48);
      v29 = v58;
LABEL_109:
      if ( v29 )
        xxxUnlockMenuStateInternal(v29, 0);
      return;
    case 0xF120u:
      v18 = 9;
      v46 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
      if ( (v46 & 0x20) != 0 || (v46 & 1) == 0 )
      {
        v19 = 9;
      }
      else
      {
        MoveWithArrangementAllowed(a1);
        v19 = 10;
      }
      goto LABEL_100;
    case 0xF130u:
      if ( (*(_DWORD *)(gpsi + 2120LL) & 8) == 0
        || (v43 = **(_QWORD **)(gptiCurrent + 464LL),
            v44 = *(_DWORD *)(gptiCurrent + 680LL),
            (((unsigned __int16)v44 | (unsigned __int16)*(_DWORD *)(v43 + 16)) & 0x800) == 0)
        && !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
      {
        if ( gptiTasklist )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, gptiTasklist, 0);
          PostThreadMessage(gptiTasklist, 0x112u, 61744LL, 0LL);
        }
        return;
      }
      if ( (((unsigned __int16)v44 | (unsigned __int16)*(_DWORD *)(v43 + 16)) & 0x800) != 0 )
        xxxCallHook(7, *(_QWORD *)a1, 0LL, 10);
      v45 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL);
      if ( !v45 )
        return;
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v45 + 16), 0);
      if ( v5 == 0xFFFFFFFFLL )
        v42 = -1LL;
      else
        v42 = *(_QWORD *)a1;
      v39 = 7LL;
      v40 = (struct tagWND *)v45;
      v41 = *(_DWORD *)(gpsi + 928LL);
LABEL_82:
      PostMessage(v40, v41, v39, v42);
      return;
    case 0xF140u:
      LOBYTE(v8) = 1;
      v38 = (struct tagWND *)HMValidateHandleNoSecure(ghwndSwitch, v8);
      if ( !v38 || a1 == v38 )
      {
        StartScreenSaver(0LL);
        return;
      }
      v39 = 61760LL;
      v40 = v38;
      v41 = 274;
      v42 = (*gpsi >> 9) & 1;
      goto LABEL_82;
    case 0xF150u:
      v30 = ValidateHwnd(v5);
      v32 = v30;
      if ( v30 )
      {
        v33 = *(_QWORD *)(v30 + 184);
        CurrentThread = KeGetCurrentThread();
        if ( !v33 )
          v33 = v32;
        if ( v33 )
          v32 = v33;
        v35 = W32GetThreadWin32Thread((__int64)CurrentThread, v31);
        v61[0] = *(_QWORD *)(v35 + 416);
        *(_QWORD *)(v35 + 416) = v61;
        v61[1] = v32;
        _InterlockedIncrement((volatile signed __int32 *)(v32 + 8));
        xxxSetForegroundWindow((struct tagWND *)v32, 0);
        if ( (*(_BYTE *)(*(_QWORD *)(v32 + 40) + 31LL) & 0x20) != 0 )
          PostMessage((struct tagWND *)v32, 0x112u, 0xF120uLL, 0LL);
        ThreadUnlock1(v37, v36);
      }
      break;
    case 0xF160u:
LABEL_66:
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) != gpqForeground )
        return;
      v25 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, v6, v5);
      v26 = v25;
      if ( !v25 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v56, v25);
      **v27 |= 0x80000000;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v59);
      xxxMNLoop(v59, v26, v5, v6 == 61792);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v59, v28);
      if ( (*((_DWORD *)v26 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v26);
      v29 = v56;
      goto LABEL_109;
    case 0xF170u:
      if ( v5 == -1 )
      {
        v65 = 4;
        v24 = &v65;
        v66 = 3LL;
      }
      else
      {
        if ( v5 != 2 )
          return;
        v63 = 5;
        if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v57) )
          v64 = v57;
        else
          v64 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
        v24 = &v63;
      }
      QueuePowerRequest(v24, 0LL);
      break;
    case 0xF180u:
      xxxHelpLoop(a1);
      break;
  }
}
