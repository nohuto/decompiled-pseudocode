/*
 * XREFs of xxxSysCommand @ 0x1C00F50F8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01C2254 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C001B5D0 (_PostThreadMessage.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0021B08 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0021BC8 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C005AD04 (xxxMakeWindowForegroundWithState.c)
 *     _PostMessage @ 0x1C006DAA0 (_PostMessage.c)
 *     xxxSetForegroundWindow @ 0x1C006E2C4 (xxxSetForegroundWindow.c)
 *     xxxShowWindow @ 0x1C0073948 (xxxShowWindow.c)
 *     IsWindowDestroyed @ 0x1C00C47A8 (IsWindowDestroyed.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     GetThreadDesktopWindow @ 0x1C00F06E0 (GetThreadDesktopWindow.c)
 *     _GetMessagePos @ 0x1C00F5880 (_GetMessagePos.c)
 *     xxxPlayEventSound @ 0x1C00FF4F0 (xxxPlayEventSound.c)
 *     DragOperationFromMaximizedAllowed @ 0x1C0135B58 (DragOperationFromMaximizedAllowed.c)
 *     xxxIsDragging @ 0x1C0135D78 (xxxIsDragging.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C013B040 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01AA854 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01BCDF8 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C01D4E34 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C01D5390 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C01D5AC4 (xxxMNStartMenuState.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01D64DC (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C01D6690 (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     MoveWithArrangementAllowed @ 0x1C01D6744 (MoveWithArrangementAllowed.c)
 *     StartScreenSaver @ 0x1C01D67B0 (StartScreenSaver.c)
 *     xxxMNLoop @ 0x1C01E3580 (xxxMNLoop.c)
 *     xxxSBTrackInit @ 0x1C020117C (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1C0206688 (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1C0206EB8 (xxxMNKeyFilter.c)
 */

void __fastcall xxxSysCommand(__int64 BugCheckParameter2, int a2, __int64 a3)
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
  unsigned int v18; // ecx
  int MessagePos; // eax
  char v20; // cl
  unsigned int v21; // edx
  __int64 v22; // rcx
  int *v23; // rcx
  struct tagMENUSTATE *v24; // rax
  struct tagMENUSTATE *v25; // rbx
  __int64 *v26; // rdx
  __int64 v27; // rdx
  struct tagMENUSTATE *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
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
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rdx
  struct tagMENUSTATE *v58; // [rsp+50h] [rbp-69h] BYREF
  int v59; // [rsp+58h] [rbp-61h] BYREF
  struct tagMENUSTATE *v60; // [rsp+60h] [rbp-59h] BYREF
  _QWORD v61[2]; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v62[2]; // [rsp+78h] [rbp-41h] BYREF
  _QWORD v63[3]; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v64[3]; // [rsp+A0h] [rbp-19h] BYREF
  int v65; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v66; // [rsp+C0h] [rbp+7h]
  int v67; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v68; // [rsp+D0h] [rbp+17h]

  v3 = *(_QWORD *)(BugCheckParameter2 + 16);
  v4 = a2 & 0xF;
  v5 = a3;
  v6 = a2 - v4;
  if ( a3 == 0x10000 )
    v5 = 0LL;
  if ( (*(_QWORD *)(*(_QWORD *)(v3 + 424) + 104LL) || (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL) & 8) != 0)
    && BugCheckParameter2 != gspwndFullScreen
    && (((v6 - 61744) & 0xFFFFFFAF) != 0 || v6 == 61824)
    || (((unsigned __int8)*(_DWORD *)(gptiCurrent + 672LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 456LL) + 16LL)) & 0x40) != 0
    && (unsigned int)xxxCallHook(8, v6, (unsigned int)v5, 5)
    || (unsigned int)IsWindowDestroyed(BugCheckParameter2) )
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
                    GetKeyState(0x10u, 61440LL);
                    xxxSBTrackInit((struct tagWND *)BugCheckParameter2, v5);
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
            if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL) & 1) != 0 )
              return;
            v18 = 12;
          }
          else
          {
            if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL) & 0x20) != 0 )
              return;
            v18 = 11;
          }
LABEL_99:
          xxxPlayEventSound(v18);
          xxxShowWindow((struct tagWND *)BugCheckParameter2);
          return;
        }
        MessagePos = GetMessagePos();
        LODWORD(v58) = (__int16)MessagePos;
        HIDWORD(v58) = SHIWORD(MessagePos);
        if ( (*(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 233LL) & 0x20) == 0
          && v4
          && (!word_1C0326C20 || qword_1C0326C28 != v3)
          && !(unsigned int)xxxIsDragging(BugCheckParameter2, v58) )
        {
          xxxSetWindowPos((struct tagWND *)BugCheckParameter2, 0LL, 0LL, 0LL, 0, 0, 3);
          v20 = *(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL);
          if ( (v20 & 0x20) != 0 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(
              (__int64 *)BugCheckParameter2,
              0x112u,
              (HWND)0xF100,
              (v20 & 0x40) != 0 ? 45LL : 32LL,
              0,
              0,
              0LL,
              1,
              0);
          }
          return;
        }
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand((struct tagWND *)BugCheckParameter2, 61456) )
        {
          v21 = 10 - (v4 != 0);
LABEL_38:
          DelegateMoveSizeToShell((struct tagWND *)BugCheckParameter2, v21);
          return;
        }
        v22 = *(_QWORD *)(BugCheckParameter2 + 40);
        if ( (*(_BYTE *)(v22 + 30) & 4) != 0
          && (*(_BYTE *)(v22 + 31) & 1) != 0
          && !(unsigned int)DragOperationFromMaximizedAllowed(BugCheckParameter2) )
        {
          return;
        }
      }
      else
      {
        if ( v4 > 0xA )
          return;
        if ( (unsigned int)ShouldApplyShellWindowingBehaviorToSysCommand((struct tagWND *)BugCheckParameter2, 61440) )
        {
          v21 = v4;
          goto LABEL_38;
        }
        GetMessagePos();
      }
      xxxMoveSize((struct tagWND *)BugCheckParameter2);
      return;
    }
    goto LABEL_65;
  }
  switch ( v6 )
  {
    case 0xF100u:
      v47 = (struct tagMENUSTATE *)xxxMNStartMenuState(BugCheckParameter2, 61696LL, v5);
      v48 = v47;
      if ( !v47 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v60, v47);
      **v49 |= 0x80000000;
      if ( gspwndFullScreen == BugCheckParameter2 )
      {
        ThreadDesktopWindow = GetThreadDesktopWindow(0LL, (__int64)v49);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v51);
        v64[0] = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = v64;
        v64[1] = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          _InterlockedIncrement((volatile signed __int32 *)(ThreadDesktopWindow + 8));
        xxxMakeWindowForegroundWithState(ThreadDesktopWindow, 2);
        ThreadUnlock1(v54, v53, v55);
      }
      v56 = *(_QWORD *)v48;
      *((_DWORD *)v48 + 2) |= 0x20u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v62, v56);
      xxxMNKeyFilter(v62, v48, (unsigned int)v5);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v62, v57);
      if ( (*((_DWORD *)v48 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v48);
      v28 = v60;
LABEL_108:
      if ( v28 )
        xxxUnlockMenuStateInternal(v28, 0);
      return;
    case 0xF120u:
      v46 = *(_BYTE *)(*(_QWORD *)(BugCheckParameter2 + 40) + 31LL);
      if ( (v46 & 0x20) != 0 || (v46 & 1) == 0 )
      {
        v18 = 9;
      }
      else
      {
        MoveWithArrangementAllowed(BugCheckParameter2);
        v18 = 10;
      }
      goto LABEL_99;
    case 0xF130u:
      if ( (*(_DWORD *)(gpsi + 2120LL) & 8) == 0
        || (v43 = **(_QWORD **)(gptiCurrent + 456LL),
            v44 = *(_DWORD *)(gptiCurrent + 672LL),
            (((unsigned __int16)v44 | (unsigned __int16)*(_DWORD *)(v43 + 16)) & 0x800) == 0)
        && !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 8LL) + 192LL) )
      {
        if ( gptiTasklist )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, gptiTasklist, 0);
          PostThreadMessage(gptiTasklist, 0x112u, 61744LL, 0LL);
        }
        return;
      }
      if ( (((unsigned __int16)v44 | (unsigned __int16)*(_DWORD *)(v43 + 16)) & 0x800) != 0 )
        xxxCallHook(7, *(_QWORD *)BugCheckParameter2, 0LL, 10);
      v45 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 24) + 8LL) + 192LL);
      if ( !v45 )
        return;
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v45 + 16), 0);
      if ( v5 == 0xFFFFFFFFLL )
        v42 = -1LL;
      else
        v42 = *(_QWORD *)BugCheckParameter2;
      v39 = 7LL;
      v40 = (struct tagWND *)v45;
      v41 = *(_DWORD *)(gpsi + 928LL);
LABEL_81:
      PostMessage(v40, v41, v39, v42);
      return;
    case 0xF140u:
      LOBYTE(v8) = 1;
      v38 = HMValidateHandleNoSecure(ghwndSwitch, v8);
      if ( !v38 || BugCheckParameter2 == v38 )
      {
        StartScreenSaver(0LL);
        return;
      }
      v39 = 61760LL;
      v40 = (struct tagWND *)v38;
      v41 = 274;
      v42 = (*gpsi >> 9) & 1;
      goto LABEL_81;
    case 0xF150u:
      v29 = ValidateHwnd(v5);
      v31 = v29;
      if ( v29 )
      {
        v32 = *(_QWORD *)(v29 + 184);
        CurrentThread = KeGetCurrentThread();
        if ( !v32 )
          v32 = v31;
        if ( v32 )
          v31 = v32;
        v34 = W32GetThreadWin32Thread((__int64)CurrentThread, v30);
        v63[0] = *(_QWORD *)(v34 + 408);
        *(_QWORD *)(v34 + 408) = v63;
        v63[1] = v31;
        _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
        xxxSetForegroundWindow((struct tagWND *)v31, 0);
        if ( (*(_BYTE *)(*(_QWORD *)(v31 + 40) + 31LL) & 0x20) != 0 )
          PostMessage((struct tagWND *)v31, 0x112u, 0xF120uLL, 0LL);
        ThreadUnlock1(v36, v35, v37);
      }
      break;
    case 0xF160u:
LABEL_65:
      if ( *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 424LL) != gpqForeground )
        return;
      v24 = (struct tagMENUSTATE *)xxxMNStartMenuState(BugCheckParameter2, v6, v5);
      v25 = v24;
      if ( !v24 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v58, v24);
      *(_DWORD *)*v26 |= 0x80000000;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v61, *v26);
      xxxMNLoop(v61, v25, v5, v6 == 61792);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v61, v27);
      if ( (*((_DWORD *)v25 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v25);
      v28 = v58;
      goto LABEL_108;
    case 0xF170u:
      if ( v5 == -1 )
      {
        v67 = 4;
        v23 = &v67;
        v68 = 3LL;
      }
      else
      {
        if ( v5 != 2 )
          return;
        v65 = 5;
        if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v59) )
          v66 = v59;
        else
          v66 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
        v23 = &v65;
      }
      QueuePowerRequest(v23, 0LL);
      break;
    case 0xF180u:
      xxxHelpLoop(BugCheckParameter2);
      break;
  }
}
