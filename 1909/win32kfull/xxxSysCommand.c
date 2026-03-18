/*
 * XREFs of xxxSysCommand @ 0x1C0111880
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C01FC060 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     _PostThreadMessage @ 0x1C000E5C8 (_PostThreadMessage.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C001B8F4 (xxxMakeWindowForegroundWithState.c)
 *     xxxShowWindow @ 0x1C00225BC (xxxShowWindow.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0038E70 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1C0044F60 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     IsWindowDestroyed @ 0x1C008D594 (IsWindowDestroyed.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     GetThreadDesktopWindow @ 0x1C00E576C (GetThreadDesktopWindow.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00EB5EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     _GetKeyState @ 0x1C00EBC40 (_GetKeyState.c)
 *     _GetMessagePos @ 0x1C00F1E60 (_GetMessagePos.c)
 *     xxxPlayEventSound @ 0x1C01037C0 (xxxPlayEventSound.c)
 *     _PostMessage @ 0x1C01312B0 (_PostMessage.c)
 *     ?xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegroundBehaviors@@W4SetForegroundffects@@@Z @ 0x1C0133E20 (-xxxSetForegroundWindowWithOptions@@YA_NPEAUtagWND@@W4ForegroundChangeAllowPolicy@@W4SetForegrou.c)
 *     ?xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z @ 0x1C0136CA8 (-xxxDeliverRestoreFocusMessage@@YAXPEAUtagWND@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01E1360 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     xxxOldNextWindow @ 0x1C01F5898 (xxxOldNextWindow.c)
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 *     ?xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z @ 0x1C0210128 (-xxxUnlockMenuStateInternal@@YAHPEAUtagMENUSTATE@@H@Z.c)
 *     xxxMNEndMenuState @ 0x1C0210700 (xxxMNEndMenuState.c)
 *     xxxMNStartMenuState @ 0x1C0210DE4 (xxxMNStartMenuState.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C0211A10 (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0211D24 (-DragOperationFromMaximizedAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z @ 0x1C0211D50 (-MoveWithArrangementAllowed@@YA_NPEAUtagWND@@@Z.c)
 *     ?ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z @ 0x1C0211D7C (-ShouldApplyShellWindowingBehaviorToSysCommand@@YAHPEAUtagWND@@H@Z.c)
 *     StartScreenSaver @ 0x1C0211EA0 (StartScreenSaver.c)
 *     xxxMNLoop @ 0x1C0220940 (xxxMNLoop.c)
 *     xxxSBTrackInit @ 0x1C0242078 (xxxSBTrackInit.c)
 *     xxxIsDragging @ 0x1C02479D8 (xxxIsDragging.c)
 *     xxxHelpLoop @ 0x1C0247C58 (xxxHelpLoop.c)
 *     xxxMNKeyFilter @ 0x1C024850C (xxxMNKeyFilter.c)
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
  __int64 *v28; // rcx
  struct tagMENUSTATE *v29; // rax
  struct tagMENUSTATE *v30; // rbx
  __int64 *v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // r8
  struct tagMENUSTATE *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rbx
  __int64 v39; // rax
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  struct tagWND *v45; // rax
  __int64 v46; // r8
  struct tagWND *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rcx
  int v50; // eax
  __int64 v51; // rsi
  char v52; // cl
  struct tagMENUSTATE *v53; // rax
  struct tagMENUSTATE *v54; // rsi
  _DWORD **v55; // rdx
  __int64 ThreadDesktopWindow; // rbx
  __int64 v57; // rdx
  __int64 v58; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // r8
  struct tagMENUSTATE *v66; // [rsp+50h] [rbp-69h] BYREF
  int v67; // [rsp+58h] [rbp-61h] BYREF
  struct tagMENUSTATE *v68; // [rsp+60h] [rbp-59h] BYREF
  __int64 v69; // [rsp+68h] [rbp-51h] BYREF
  __int64 v70; // [rsp+70h] [rbp-49h]
  __int64 v71; // [rsp+78h] [rbp-41h]
  __int64 v72; // [rsp+80h] [rbp-39h] BYREF
  __int64 v73; // [rsp+88h] [rbp-31h]
  __int64 v74; // [rsp+90h] [rbp-29h]
  _QWORD v75[2]; // [rsp+98h] [rbp-21h] BYREF
  _QWORD v76[2]; // [rsp+A8h] [rbp-11h] BYREF
  __int64 v77; // [rsp+B8h] [rbp-1h] BYREF
  __int64 v78; // [rsp+C0h] [rbp+7h]
  _QWORD v79[2]; // [rsp+C8h] [rbp+Fh] BYREF

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
LABEL_97:
          xxxPlayEventSound(v20);
          xxxShowWindow(a1);
          return;
        }
        MessagePos = GetMessagePos(v9, 61440LL, v10);
        LODWORD(v66) = (__int16)MessagePos;
        HIDWORD(v66) = SHIWORD(MessagePos);
        if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 233LL) & 0x20) == 0
          && v4
          && (!word_1C032A2F0 || qword_1C032A2F8 != v3)
          && !(unsigned int)xxxIsDragging(a1, v66) )
        {
          xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 3);
          v22 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
          if ( (v22 & 0x20) != 0 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout(
              (__int64 *)a1,
              0x112u,
              0xF100uLL,
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
        GetMessagePos(v26, v25, v27);
      }
      xxxMoveSize(a1);
      goto LABEL_48;
    }
    goto LABEL_66;
  }
  switch ( v6 )
  {
    case 0xF100u:
      v53 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, 61696LL, v5);
      v54 = v53;
      if ( !v53 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v68, v53);
      **v55 |= 0x80000000;
      if ( (struct tagWND *)gspwndFullScreen == a1 )
      {
        v72 = 0LL;
        v73 = 0LL;
        v74 = 0LL;
        ThreadDesktopWindow = GetThreadDesktopWindow(0LL, (int)v55);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v57, v58);
        v72 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v72;
        v73 = ThreadDesktopWindow;
        if ( ThreadDesktopWindow )
          HMLockObject(ThreadDesktopWindow);
        xxxMakeWindowForegroundWithState(ThreadDesktopWindow, 2);
        ThreadUnlock1(v61, v60, v62);
      }
      v63 = *(_QWORD *)v54;
      *((_DWORD *)v54 + 2) |= 0x20u;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v76, v63);
      xxxMNKeyFilter(v76, v54, (unsigned int)v5);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v76, v64, v65);
      if ( (*((_DWORD *)v54 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v54);
      v34 = v68;
LABEL_106:
      if ( v34 )
        xxxUnlockMenuStateInternal(v34, 0);
      return;
    case 0xF120u:
      v52 = *(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL);
      if ( (v52 & 0x20) != 0 || (v52 & 1) == 0 )
      {
        v20 = 9LL;
      }
      else
      {
        MoveWithArrangementAllowed(a1);
        v20 = 10LL;
      }
      goto LABEL_97;
    case 0xF130u:
      if ( (*(_DWORD *)(gpsi + 2120LL) & 8) == 0
        || (v49 = **(_QWORD **)(gptiCurrent + 456LL),
            v50 = *(_DWORD *)(gptiCurrent + 672LL),
            (((unsigned __int16)v50 | (unsigned __int16)*(_DWORD *)(v49 + 16)) & 0x800) == 0)
        && !*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL) )
      {
        if ( gptiTasklist )
        {
          CInputGlobals::SetPtiLastWoken(gpInputGlobals, gptiTasklist, 0);
          PostThreadMessage(gptiTasklist, 0x112u, 61744LL, 0LL);
        }
        return;
      }
      if ( (((unsigned __int16)v50 | (unsigned __int16)*(_DWORD *)(v49 + 16)) & 0x800) != 0 )
        xxxCallHook(7, *(_QWORD *)a1, 0LL, 10);
      v51 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 192LL);
      if ( !v51 )
        return;
      CInputGlobals::SetPtiLastWoken(gpInputGlobals, *(struct tagTHREADINFO **)(v51 + 16), 0);
      v46 = 7LL;
      v47 = (struct tagWND *)v51;
      v48 = *(unsigned int *)(gpsi + 928LL);
LABEL_82:
      PostMessage(v47, v48, v46);
      return;
    case 0xF140u:
      LOBYTE(v8) = 1;
      v45 = (struct tagWND *)HMValidateHandleNoSecure(ghwndSwitch, v8, v10);
      if ( !v45 || a1 == v45 )
      {
        StartScreenSaver(0LL);
        return;
      }
      v46 = 61760LL;
      v47 = v45;
      v48 = 274LL;
      goto LABEL_82;
    case 0xF150u:
      v35 = ValidateHwnd(v5);
      v38 = v35;
      if ( v35 )
      {
        v69 = 0LL;
        v70 = 0LL;
        v71 = 0LL;
        v39 = *(_QWORD *)(v35 + 200);
        CurrentThread = KeGetCurrentThread();
        if ( !v39 )
          v39 = v38;
        if ( v39 )
          v38 = v39;
        v41 = W32GetThreadWin32Thread((__int64)CurrentThread, v36, v37);
        v69 = *(_QWORD *)(v41 + 408);
        *(_QWORD *)(v41 + 408) = &v69;
        v70 = v38;
        HMLockObject(v38);
        xxxSetForegroundWindowWithOptions(v38, 2LL, 0LL);
        if ( (*(_BYTE *)(*(_QWORD *)(v38 + 40) + 31LL) & 0x20) != 0 )
          PostMessage(v38, 274LL, 61728LL);
        ThreadUnlock1(v43, v42, v44);
      }
      break;
    case 0xF160u:
LABEL_66:
      if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) != gpqForeground )
        return;
      v29 = (struct tagMENUSTATE *)xxxMNStartMenuState(a1, v6, v5);
      v30 = v29;
      if ( !v29 )
        return;
      MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock((MenuStateOwnerLockxxxUnlock *)&v66, v29);
      *(_DWORD *)*v31 |= 0x80000000;
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v75, *v31);
      xxxMNLoop(v75, v30, v5, v6 == 61792);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v75, v32, v33);
      if ( (*((_DWORD *)v30 + 2) & 0x100) == 0 )
        xxxMNEndMenuState(v30);
      v34 = v66;
      goto LABEL_106;
    case 0xF170u:
      if ( v5 == -1 )
      {
        v79[0] = 4LL;
        v28 = v79;
        v79[1] = 3LL;
      }
      else
      {
        if ( v5 != 2 )
          return;
        v77 = 5LL;
        if ( (unsigned int)PowerIsDisplayIdleExpired(0LL, &v67) )
          v78 = v67;
        else
          v78 = (unsigned int)PowerIsDisplayIdleExpired(5000LL, 0LL) != 0 ? 17LL : 3LL;
        v28 = &v77;
      }
      QueuePowerRequest(v28, 0LL);
      break;
    case 0xF180u:
      xxxHelpLoop(a1);
      break;
  }
}
