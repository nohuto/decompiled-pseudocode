/*
 * XREFs of xxxWindowEvent @ 0x1C001E870
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000B108 (xxxDCETrackCaptionButton.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C0010C3C (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C001E000 (zzzUpdateCursorImage.c)
 *     NtUserNotifyWinEvent @ 0x1C001E7F0 (NtUserNotifyWinEvent.c)
 *     xxxCalcClientRect @ 0x1C0022534 (xxxCalcClientRect.c)
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0026C8C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C002E6CC (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     zzzInternalShowCaret @ 0x1C003A940 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C003AA10 (zzzInternalHideCaret.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxActivateThisWindow @ 0x1C005BE64 (xxxActivateThisWindow.c)
 *     xxxSendFocusMessages @ 0x1C005EBC0 (xxxSendFocusMessages.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C005F53C (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C005FC1C (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C005FC8C (zzzInputFocusReceivedWindowEvent.c)
 *     xxxCapture @ 0x1C00605D8 (xxxCapture.c)
 *     zzzSetCaretPos @ 0x1C0063880 (zzzSetCaretPos.c)
 *     xxxCreateCaret @ 0x1C0063BA8 (xxxCreateCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C0063D14 (zzzInternalDestroyCaret.c)
 *     xxxMinMaximizeEx @ 0x1C0065CDC (xxxMinMaximizeEx.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00675F4 (xxxSystemParametersInfoWorker.c)
 *     zzzSetWindowCompositionCloak @ 0x1C006FAFC (zzzSetWindowCompositionCloak.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     zzzUpdateLayeredWindow @ 0x1C007CD40 (zzzUpdateLayeredWindow.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00C11FC (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxSetScrollBar @ 0x1C00D9304 (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C00D997C (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E711C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C00E73F0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C0104D04 (xxxCancelCoolSwitch.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01BB928 (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01BC110 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxMoveSize @ 0x1C01C7C58 (xxxMoveSize.c)
 *     xxxMNStartMenu @ 0x1C01D5620 (xxxMNStartMenu.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C01E4874 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x1C01E59BC (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C01E61D0 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C01E7B08 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C01E945C (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0200084 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0200224 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C02005C8 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02007D0 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0200E84 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0202AE0 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C0206058 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0206688 (xxxHelpLoop.c)
 *     xxxSendMenuSelect @ 0x1C020A438 (xxxSendMenuSelect.c)
 *     xxxTrackPopupMenuEx @ 0x1C020ABF4 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C00063FC (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     CategoryMaskFromEvent @ 0x1C001F0C4 (CategoryMaskFromEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C001F1B4 (xxxProcessNotifyWinEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C005D3C0 (PopAndFreeW32ThreadLock.c)
 *     xxxProcessTSFEvent @ 0x1C00D7064 (xxxProcessTSFEvent.c)
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C0106378 (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxWindowEvent(unsigned int a1, __int64 a2, int a3, int a4, int a5)
{
  __int64 v6; // r13
  int v9; // r10d
  unsigned int v10; // r14d
  int v11; // ebp
  int v12; // r15d
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct _KTHREAD *v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rcx
  tagObjLock *v20; // rbx
  unsigned int DLT; // eax
  __int64 v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rcx
  tagObjLock *v26; // rbx
  struct tagWND *v27; // rbx
  int v28; // edx
  __int64 v29; // r12
  __int64 v30; // rdi
  HANDLE ThreadId; // rax
  struct _KTHREAD *v32; // rcx
  __int64 v33; // rdx
  unsigned __int64 v34; // rcx
  struct _KTHREAD *v35; // rdi
  __int64 v36; // rbx
  __int64 *v37; // rax
  char v38; // dl
  unsigned int CurrentThreadId; // eax
  struct tagNOTIFY **v40; // rcx
  unsigned int v41; // ebx
  int v42; // edx
  int v43; // ebp
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // rdi
  __int64 v51; // rbp
  HANDLE v52; // rax
  int v53; // eax
  __int64 *v54; // rbx
  __int64 v55; // rax
  unsigned int v56; // eax
  char v57; // dl
  int v58; // eax
  struct _KTHREAD *v59; // rbx
  __int64 *v60; // rax
  unsigned int v61; // eax
  unsigned int v62; // [rsp+20h] [rbp-108h]
  unsigned int v63; // [rsp+28h] [rbp-100h]
  unsigned int v64; // [rsp+40h] [rbp-E8h]
  __int64 v65; // [rsp+48h] [rbp-E0h]
  tagObjLock *v66; // [rsp+50h] [rbp-D8h]
  tagObjLock *DomainLockRef; // [rsp+58h] [rbp-D0h]
  __int64 v68; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+68h] [rbp-C0h]
  void (*v70)(void); // [rsp+70h] [rbp-B8h]
  HANDLE ThreadProcessId; // [rsp+78h] [rbp-B0h]
  __int64 v72; // [rsp+80h] [rbp-A8h]
  HANDLE v73; // [rsp+88h] [rbp-A0h]
  tagObjLock *v74; // [rsp+90h] [rbp-98h]
  __int128 v75; // [rsp+A0h] [rbp-88h]
  __int128 v76; // [rsp+B0h] [rbp-78h] BYREF
  _QWORD v77[5]; // [rsp+C0h] [rbp-68h] BYREF
  unsigned int v78; // [rsp+130h] [rbp+8h]
  struct tagWND *v79; // [rsp+138h] [rbp+10h]

  v79 = (struct tagWND *)a2;
  v6 = 0LL;
  v9 = 2;
  if ( a1 < 0x7FFFFF10 )
    goto LABEL_6;
  if ( a1 == 2147483408 )
  {
    v10 = 1;
    goto LABEL_11;
  }
  if ( a1 - 2147483409 > 1 )
LABEL_6:
    v10 = 0;
  else
    v10 = 2;
  if ( a1 < 0x7FFFFF00 )
  {
LABEL_17:
    v11 = 0;
    v12 = 0;
    goto LABEL_18;
  }
  if ( a1 > 0x80000003 )
  {
    if ( a1 <= 0x80000005 )
    {
      v11 = 4096;
      v12 = 1;
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  if ( a1 >= 0x80000002 )
  {
    v11 = 512;
    v12 = 1;
    goto LABEL_18;
  }
  if ( a1 <= 0x7FFFFF01 )
  {
    v11 = 1024;
    v12 = 1;
    goto LABEL_18;
  }
LABEL_11:
  if ( a1 + 0x80000000 > 1 )
    goto LABEL_17;
  v11 = 256;
  v12 = 1;
LABEL_18:
  if ( a1 - 32783 <= 0x7FFF7F00 || a1 - 16392 <= 0x3FFC )
    goto LABEL_29;
  if ( a1 == 32780 )
  {
    v9 = 8;
    goto LABEL_30;
  }
  if ( a1 == 32779 )
  {
    v9 = 64;
    goto LABEL_30;
  }
  if ( a1 > 0x7FFFFF12 )
  {
    if ( a1 > 0x80000003 )
    {
      if ( a1 <= 0x80000005 )
      {
        v9 = 512;
        goto LABEL_30;
      }
      if ( a1 > 0x80000007 )
      {
LABEL_29:
        v9 = 0x8000;
        goto LABEL_30;
      }
    }
    else if ( a1 < 0x80000000 && a1 != 2147483424 && a1 != 2147483440 )
    {
      goto LABEL_29;
    }
LABEL_52:
    v9 = 256;
    goto LABEL_30;
  }
  if ( a1 >= 0x7FFFFF10 )
    goto LABEL_52;
  if ( a1 > 0x8005 )
  {
    if ( a1 == 32778 )
    {
      v9 = 32;
      goto LABEL_30;
    }
    if ( a1 == 32782 )
    {
      v9 = 16;
      goto LABEL_30;
    }
    goto LABEL_29;
  }
  if ( a1 == 32773 )
  {
    v9 = 4;
    goto LABEL_30;
  }
  if ( a1 < 4 )
    goto LABEL_29;
  if ( a1 > 7 )
  {
    if ( a1 - 16385 <= 6 )
      goto LABEL_30;
    goto LABEL_29;
  }
  v9 = 1;
LABEL_30:
  if ( (v9 & *(_DWORD *)(gpsi + 1892LL)) != 0 || v10 || v12 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(gpsi, 4LL) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *ThreadWin32Thread )
        {
          v17 = KeGetCurrentThread();
          v65 = 0LL;
          if ( (unsigned int)IsThreadCrossSessionAttached(v16, v15)
            || (v18 = (__int64 *)PsGetThreadWin32Thread(v17)) == 0LL )
          {
            v19 = 0LL;
          }
          else
          {
            v19 = *v18;
            v65 = *v18;
          }
          v20 = (tagObjLock *)(v19 + 384);
          v74 = (tagObjLock *)(v19 + 384);
          DLT = DLT_THREADINFO::getDLT();
          DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
          if ( v20 == (tagObjLock *)gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v22);
          v23 = DLT_THREADINFO::getDLT();
          ptiSetDomainLockBit(v23);
          tagObjLock::LockShared(DomainLockRef);
          tagObjLock::LockExclusive(v20);
          v24 = DLT_WINEVENT::getDLT();
          v26 = (tagObjLock *)GetDomainLockRef(v24);
          v66 = v26;
          if ( v26 == (tagObjLock *)gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v25);
          tagObjLock::LockExclusive(v26);
          if ( (a5 & 0x11) == 0x11 || !a2 || *(char *)(*(_QWORD *)(a2 + 40) + 19LL) >= 0 )
          {
            v27 = v79;
            v28 = a5 | 2;
            if ( (*(_DWORD *)(v65 + 480) & 0x10000001) == 0 )
              v28 = a5;
            v78 = v28;
            if ( (v28 & 1) != 0 && v79 )
            {
              v29 = *((_QWORD *)v79 + 2);
              v27 = 0LL;
              if ( (v28 & 0x10) == 0 )
                v27 = (struct tagWND *)a2;
              v30 = v65;
              v79 = v27;
            }
            else
            {
              v30 = v65;
              v29 = v65;
            }
            ThreadId = PsGetThreadId(*(PETHREAD *)v29);
            v32 = *(struct _KTHREAD **)v29;
            v73 = ThreadId;
            v72 = *(_QWORD *)(v29 + 416);
            ThreadProcessId = PsGetThreadProcessId(v32);
            if ( (v78 & 0x20) != 0 )
              v34 = (unsigned int)_InterlockedIncrement(&gcWinEvents);
            else
              v34 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v77[0] = *(_QWORD *)(v30 + 408);
            *(_QWORD *)(v30 + 408) = v77;
            v77[1] = v27;
            v64 = v34;
            if ( v27 )
              _InterlockedIncrement((volatile signed __int32 *)v27 + 2);
            v35 = KeGetCurrentThread();
            v36 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v34, v33) )
            {
              v37 = (__int64 *)PsGetThreadWin32Thread(v35);
              if ( v37 )
                v36 = *v37;
            }
            v68 = *(_QWORD *)(v36 + 16);
            *(_QWORD *)(v36 + 16) = &v68;
            v70 = (void (*)(void))DereferenceW32Thread;
            v69 = v29;
            ObfReferenceObject(*(PVOID *)v29);
            _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
            v38 = v78;
            if ( (v78 & 2) == 0 )
            {
              CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
              v40 = gpPendingNotifies;
              v41 = CurrentThreadId;
              while ( v40 )
              {
                v42 = *((_DWORD *)v40 + 12);
                if ( (v42 & 2) != 0 && *((_DWORD *)v40 + 10) == v41 )
                {
                  *((_DWORD *)v40 + 12) = v42 & 0xFFFFFFFD;
                  if ( *((_DWORD *)v40 + 4) )
                    xxxProcessTSFEvent((struct tagNOTIFY *)v40);
                  else
                    xxxProcessNotifyWinEvent((__int64)v40);
                  v40 = gpPendingNotifies;
                }
                else
                {
                  v40 = (struct tagNOTIFY **)*v40;
                }
              }
              v38 = v78;
            }
            if ( v12 && (*(_DWORD *)(*(_QWORD *)(v29 + 416) + 812LL) & 0x2000000) != 0 )
            {
              v63 = v11;
              v43 = a3;
              xxxDoLocalTSFWork(a1, v79, a3, a4, v38, v63, (struct tagTHREADINFO *)v29, v64);
            }
            else
            {
              v43 = a3;
            }
            if ( v10 )
              DoGlobalTSFWork(a1, v79, v43, a4, v62, v10, (struct tagTHREADINFO *)v29, v64);
            v44 = CategoryMaskFromEvent(a1);
            v45 = gpsi;
            v46 = gpsi;
            if ( (v44 & *(_DWORD *)(gpsi + 1892LL)) != 0 )
            {
              v50 = gpWinEventHooks;
              if ( gpWinEventHooks )
              {
                do
                {
                  v45 = *(unsigned int *)(v50 + 40);
                  v51 = *(_QWORD *)(v50 + 24);
                  if ( (v45 & 1) == 0 && *(_DWORD *)(v50 + 32) <= a1 && a1 <= *(_DWORD *)(v50 + 36) )
                  {
                    v52 = *(HANDLE *)(v50 + 48);
                    if ( !v52 || v52 == ThreadProcessId )
                    {
                      if ( (v45 & 4) == 0 || (v46 = v72, v72 != *(_QWORD *)(*(_QWORD *)(v50 + 16) + 416LL)) )
                      {
                        v53 = *(_DWORD *)(v50 + 56);
                        if ( (!v53 || v53 == (_DWORD)v73) && ((v45 & 2) == 0 || v29 != *(_QWORD *)(v50 + 16)) )
                        {
                          v45 = *(_QWORD *)(*(_QWORD *)(v50 + 16) + 448LL);
                          if ( v45 == *(_QWORD *)(v65 + 448)
                            || a1 == 32
                            || v45 == *(_QWORD *)(v29 + 448) && a1 + 2147483646 <= 1 )
                          {
                            v46 = gSharedInfo[0];
                            v45 = *(unsigned __int8 *)(LODWORD(gSharedInfo[2])
                                                     * (unsigned int)(unsigned __int16)*(_DWORD *)v50
                                                     + gSharedInfo[1]
                                                     + 25LL);
                            if ( (v45 & 1) != 0 )
                              break;
                            if ( dword_1C0326B30 )
                            {
                              v54 = (__int64 *)Win32AllocPool(64LL, 2037281621LL);
                              if ( !v54 )
                                break;
                            }
                            else
                            {
                              dword_1C0326B30 = 1;
                              v54 = &qword_1C032AC40;
                            }
                            *((_QWORD *)&v75 + 1) = v50;
                            v54[1] = 0LL;
                            *(_QWORD *)&v75 = v54 + 1;
                            v76 = v75;
                            HMAssignmentLock(&v76);
                            v55 = 0LL;
                            if ( v79 )
                              v55 = *(_QWORD *)v79;
                            v54[3] = v55;
                            *((_DWORD *)v54 + 8) = a3;
                            *((_DWORD *)v54 + 9) = a4;
                            *((_DWORD *)v54 + 5) = a1;
                            v56 = (unsigned int)PsGetThreadId(*(PETHREAD *)v29);
                            *((_DWORD *)v54 + 12) = 0;
                            *((_DWORD *)v54 + 10) = v56;
                            *((_DWORD *)v54 + 11) = v64;
                            *((_DWORD *)v54 + 4) = 0;
                            v57 = ~(unsigned __int8)(*(_DWORD *)(v50 + 40) >> 1);
                            *v54 = 0LL;
                            v46 = v57 & 4;
                            v54[7] = 0LL;
                            *((_DWORD *)v54 + 12) = v46;
                            if ( (*(_DWORD *)(v50 + 40) & 8) != 0 && a1 + 2147483646 <= 3 )
                            {
                              v45 = gptiCurrent;
                              if ( *(_QWORD *)(v50 + 16) != gptiCurrent )
                                v46 = 4LL;
                              *((_DWORD *)v54 + 12) = v46;
                            }
                            if ( gpPendingNotifies )
                              *(_QWORD *)gpLastPendingNotify = v54;
                            else
                              gpPendingNotifies = (struct tagNOTIFY **)v54;
                            *((_DWORD *)v54 + 12) |= v78;
                            v58 = *((_DWORD *)v54 + 12);
                            gpLastPendingNotify = (__int64)v54;
                            if ( (v58 & 4) != 0 )
                            {
                              v58 &= ~2u;
                              *((_DWORD *)v54 + 12) = v58;
                            }
                            if ( (v58 & 2) == 0 )
                              v51 = xxxProcessNotifyWinEvent((__int64)v54);
                          }
                        }
                      }
                    }
                  }
                  v50 = v51;
                }
                while ( v51 );
              }
              v59 = KeGetCurrentThread();
              if ( !(unsigned int)IsThreadCrossSessionAttached(v45, v46) )
              {
                v60 = (__int64 *)PsGetThreadWin32Thread(v59);
                if ( v60 )
                  v6 = *v60;
              }
              *(_QWORD *)(v6 + 16) = v68;
              v48 = v69;
              if ( v69 )
                v70();
            }
            else
            {
              PopAndFreeW32ThreadLock(&v68);
            }
            ThreadUnlock1(v48, v47, v49);
            v26 = v66;
          }
          tagObjLock::UnLock(v26);
          v61 = DLT_THREADINFO::getDLT();
          ptiUnSetDomainLockBit(v61);
          tagObjLock::UnLock(v74);
          tagObjLock::UnLock(DomainLockRef);
        }
      }
    }
  }
}
