/*
 * XREFs of xxxWindowEvent @ 0x1C00AC2F0
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000D010 (xxxDCETrackCaptionButton.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0013EE4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00147C0 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0014830 (zzzInputFocusReceivedWindowEvent.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00167A8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C001ACD4 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001BBFC (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxCapture @ 0x1C001E090 (xxxCapture.c)
 *     xxxSetScrollBar @ 0x1C002778C (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C0027E64 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C0028DD8 (zzzUpdateLayeredWindow.c)
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     xxxMinMaximizeEx @ 0x1C00841D4 (xxxMinMaximizeEx.c)
 *     xxxCreateCaret @ 0x1C0086A94 (xxxCreateCaret.c)
 *     zzzSetCaretPos @ 0x1C00889E0 (zzzSetCaretPos.c)
 *     zzzInternalDestroyCaret @ 0x1C0088BEC (zzzInternalDestroyCaret.c)
 *     zzzInternalShowCaret @ 0x1C008B40C (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C008B4BC (zzzInternalHideCaret.c)
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxCalcClientRect @ 0x1C0092864 (xxxCalcClientRect.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     zzzUpdateCursorImage @ 0x1C00ABDB0 (zzzUpdateCursorImage.c)
 *     NtUserNotifyWinEvent @ 0x1C00AC260 (NtUserNotifyWinEvent.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00BA614 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00C94C4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00CD9E0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxCancelCoolSwitch @ 0x1C0130034 (xxxCancelCoolSwitch.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150CA4 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0150F68 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F435C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4BD0 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxMoveSize @ 0x1C0201CF0 (xxxMoveSize.c)
 *     xxxMNStartMenu @ 0x1C0210ED8 (xxxMNStartMenu.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0222274 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x1C0223434 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0223C00 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C0225610 (xxxMNOpenHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C02264E4 (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C0226CF8 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0227184 (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C024150C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C02416F0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0241AB8 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241CA8 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C024239C (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0242BA0 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C02444F0 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C0247A14 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0248398 (xxxHelpLoop.c)
 *     xxxSendMenuSelect @ 0x1C024C394 (xxxSendMenuSelect.c)
 *     xxxTrackPopupMenuEx @ 0x1C024CB78 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C0006CA8 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     xxxProcessTSFEvent @ 0x1C0007018 (xxxProcessTSFEvent.c)
 *     CategoryMaskFromEvent @ 0x1C00ACB88 (CategoryMaskFromEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00AD898 (xxxProcessNotifyWinEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D0DF0 (PopAndFreeW32ThreadLock.c)
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C0137714 (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C01637A4 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxWindowEvent(unsigned int a1, struct tagWND *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v8; // rdx
  unsigned int v9; // r15d
  int v10; // r14d
  int v11; // r12d
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  struct _KTHREAD *v18; // rbx
  __int64 *v19; // rax
  unsigned int DLT; // eax
  __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rcx
  tagDomLock *v25; // rbx
  struct tagWND *v26; // rbx
  int v27; // edx
  HANDLE ThreadId; // rax
  struct _KTHREAD *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  struct _KTHREAD *v35; // rdi
  __int64 v36; // rbx
  __int64 *v37; // rax
  char v38; // dl
  int v39; // r14d
  int v40; // eax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 **v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdi
  __int64 v49; // r14
  HANDLE v50; // rax
  int v51; // eax
  __int64 *v52; // rbx
  __int128 v53; // xmm0
  __int64 v54; // rax
  int v55; // eax
  struct _KTHREAD *v56; // rbx
  __int64 *v57; // rax
  unsigned int v58; // eax
  unsigned int v59; // [rsp+20h] [rbp-B1h]
  unsigned int v60; // [rsp+28h] [rbp-A9h]
  unsigned int v61; // [rsp+40h] [rbp-91h]
  __int64 v62; // [rsp+48h] [rbp-89h]
  __int64 v63; // [rsp+50h] [rbp-81h] BYREF
  __int64 v64; // [rsp+58h] [rbp-79h]
  void (*v65)(void); // [rsp+60h] [rbp-71h]
  __int64 v66; // [rsp+68h] [rbp-69h]
  tagDomLock *v67; // [rsp+70h] [rbp-61h]
  tagDomLock *DomainLockRef; // [rsp+78h] [rbp-59h]
  HANDLE ThreadProcessId; // [rsp+80h] [rbp-51h]
  __int64 v70; // [rsp+88h] [rbp-49h]
  HANDLE v71; // [rsp+90h] [rbp-41h]
  tagObjLock *v72; // [rsp+98h] [rbp-39h]
  __int64 v73; // [rsp+A0h] [rbp-31h] BYREF
  struct tagWND *v74; // [rsp+A8h] [rbp-29h]
  __int64 v75; // [rsp+B0h] [rbp-21h]
  __int128 v76; // [rsp+C0h] [rbp-11h]
  __int128 v77; // [rsp+D0h] [rbp-1h] BYREF
  unsigned int v78; // [rsp+130h] [rbp+5Fh]
  struct tagWND *v79; // [rsp+138h] [rbp+67h]
  int v80; // [rsp+140h] [rbp+6Fh]
  int v81; // [rsp+148h] [rbp+77h]

  v81 = a4;
  v80 = a3;
  v79 = a2;
  v5 = 0LL;
  v73 = 0LL;
  v74 = 0LL;
  v75 = 0LL;
  v63 = 0LL;
  v8 = 2LL;
  v64 = 0LL;
  v65 = 0LL;
  v66 = 0LL;
  if ( a1 < 0x7FFFFF10 )
    goto LABEL_6;
  if ( a1 == 2147483408 )
  {
    v9 = 1;
    goto LABEL_11;
  }
  if ( a1 - 2147483409 > 1 )
LABEL_6:
    v9 = 0;
  else
    v9 = 2;
  if ( a1 < 0x7FFFFF00 )
  {
LABEL_17:
    v10 = 0;
    v11 = 0;
    goto LABEL_18;
  }
  if ( a1 > 0x80000003 )
  {
    if ( a1 <= 0x80000005 )
    {
      v10 = 4096;
      v11 = 1;
      goto LABEL_18;
    }
    goto LABEL_17;
  }
  if ( a1 >= 0x80000002 )
  {
    v10 = 512;
    v11 = 1;
    goto LABEL_18;
  }
  if ( a1 <= 0x7FFFFF01 )
  {
    v10 = 1024;
    v11 = 1;
    goto LABEL_18;
  }
LABEL_11:
  if ( a1 + 0x80000000 > 1 )
    goto LABEL_17;
  v10 = 256;
  v11 = 1;
LABEL_18:
  if ( a1 - 16392 <= 0x3FFC )
    goto LABEL_30;
  if ( a1 == 32780 )
  {
    v8 = 8LL;
    goto LABEL_31;
  }
  if ( a1 == 32779 )
  {
    v8 = 64LL;
    goto LABEL_31;
  }
  if ( a1 - 32783 <= 0x7FFF7F00 || a1 - 8 <= 0x3FF8 )
    goto LABEL_30;
  if ( a1 > 0x7FFFFF12 )
  {
    if ( a1 <= 0x80000003 )
    {
      if ( a1 < 0x80000000 && a1 != 2147483424 && a1 != 2147483440 )
        goto LABEL_30;
LABEL_69:
      v8 = 256LL;
      goto LABEL_31;
    }
    if ( a1 <= 0x80000005 )
    {
      v8 = 512LL;
      goto LABEL_31;
    }
    if ( a1 <= 0x80000007 )
      goto LABEL_69;
LABEL_30:
    v8 = 0x8000LL;
    goto LABEL_31;
  }
  if ( a1 >= 0x7FFFFF10 )
    goto LABEL_69;
  if ( a1 > 0x8005 )
  {
    if ( a1 == 32778 )
    {
      v8 = 32LL;
      goto LABEL_31;
    }
    if ( a1 == 32782 )
    {
      v8 = 16LL;
      goto LABEL_31;
    }
    goto LABEL_30;
  }
  if ( a1 == 32773 )
  {
    v8 = 4LL;
    goto LABEL_31;
  }
  if ( a1 < 4 )
    goto LABEL_30;
  if ( a1 > 7 )
  {
    if ( a1 - 16385 <= 6 )
      goto LABEL_31;
    goto LABEL_30;
  }
  v8 = 1LL;
LABEL_31:
  if ( ((unsigned int)v8 & *(_DWORD *)(gpsi + 1892LL)) != 0 || v9 || v11 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached(gpsi, v8, a3, a4) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *ThreadWin32Thread )
        {
          v18 = KeGetCurrentThread();
          v62 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14, v16, v17) )
          {
            v19 = (__int64 *)PsGetThreadWin32Thread(v18);
            if ( v19 )
            {
              v5 = *v19;
              v62 = *v19;
            }
          }
          v72 = (tagObjLock *)(v5 + 384);
          DLT = DLT_THREADINFO::getDLT();
          DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
          if ( v5 + 384 == gObjDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
          v22 = DLT_THREADINFO::getDLT();
          ptiSetDomainLockBit(v22);
          tagDomLock::LockShared(DomainLockRef);
          tagObjLock::LockExclusive((tagObjLock *)(v5 + 384));
          v23 = DLT_WINEVENT::getDLT();
          v25 = (tagDomLock *)GetDomainLockRef(v23);
          v67 = v25;
          if ( v25 == (tagDomLock *)gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24);
          tagDomLock::LockExclusive(v25);
          if ( (a5 & 0x11) == 0x11 || !v79 || *(char *)(*((_QWORD *)v79 + 5) + 19LL) >= 0 )
          {
            v26 = v79;
            v27 = a5 | 2;
            if ( (*(_DWORD *)(v5 + 480) & 0x10000001) == 0 )
              v27 = a5;
            v78 = v27;
            if ( (v27 & 1) != 0 && v79 )
            {
              v5 = *((_QWORD *)v79 + 2);
              v26 = 0LL;
              if ( (v27 & 0x10) == 0 )
                v26 = a2;
              v79 = v26;
            }
            ThreadId = PsGetThreadId(*(PETHREAD *)v5);
            v29 = *(struct _KTHREAD **)v5;
            v71 = ThreadId;
            v70 = *(_QWORD *)(v5 + 416);
            ThreadProcessId = PsGetThreadProcessId(v29);
            if ( (v78 & 0x20) != 0 )
              LODWORD(v33) = _InterlockedIncrement(&gcWinEvents);
            else
              v33 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v61 = v33;
            v34 = v62;
            v73 = *(_QWORD *)(v62 + 408);
            *(_QWORD *)(v62 + 408) = &v73;
            v74 = v26;
            if ( v26 )
              HMLockObject(v26);
            v35 = KeGetCurrentThread();
            v36 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v34, v30, v31, v32) )
            {
              v37 = (__int64 *)PsGetThreadWin32Thread(v35);
              if ( v37 )
                v36 = *v37;
            }
            v63 = *(_QWORD *)(v36 + 16);
            *(_QWORD *)(v36 + 16) = &v63;
            v65 = (void (*)(void))DereferenceW32Thread;
            v64 = v5;
            ObfReferenceObject(*(PVOID *)v5);
            _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
            v38 = v78;
            if ( (v78 & 2) == 0 )
            {
              PsGetCurrentThreadId();
              v38 = v78;
            }
            if ( v11 && (*(_DWORD *)(*(_QWORD *)(v5 + 416) + 812LL) & 0x2000000) != 0 )
            {
              v60 = v10;
              v39 = v80;
              xxxDoLocalTSFWork(a1, v79, v80, v81, v38, v60, (struct tagTHREADINFO *)v5, v61);
            }
            else
            {
              v39 = v80;
            }
            if ( v9 )
              DoGlobalTSFWork(a1, v79, v39, v81, v59, v9, (struct tagTHREADINFO *)v5, v61);
            v40 = CategoryMaskFromEvent(a1);
            v43 = (__int64 **)gpsi;
            v44 = gpsi;
            if ( (v40 & *(_DWORD *)(gpsi + 1892LL)) != 0 )
            {
              v48 = gpWinEventHooks;
              if ( gpWinEventHooks )
              {
                do
                {
                  v43 = (__int64 **)*(unsigned int *)(v48 + 40);
                  v49 = *(_QWORD *)(v48 + 24);
                  if ( ((unsigned __int8)v43 & 1) == 0 && *(_DWORD *)(v48 + 32) <= a1 && a1 <= *(_DWORD *)(v48 + 36) )
                  {
                    v50 = *(HANDLE *)(v48 + 48);
                    if ( !v50 || v50 == ThreadProcessId )
                    {
                      if ( ((unsigned __int8)v43 & 4) == 0
                        || (v44 = v70, v70 != *(_QWORD *)(*(_QWORD *)(v48 + 16) + 416LL)) )
                      {
                        v51 = *(_DWORD *)(v48 + 56);
                        if ( (!v51 || v51 == (_DWORD)v71)
                          && (((unsigned __int8)v43 & 2) == 0 || v5 != *(_QWORD *)(v48 + 16)) )
                        {
                          v43 = *(__int64 ***)(*(_QWORD *)(v48 + 16) + 448LL);
                          if ( v43 == *(__int64 ***)(v62 + 448)
                            || a1 == 32
                            || v43 == *(__int64 ***)(v5 + 448) && a1 + 2147483646 <= 1 )
                          {
                            if ( (*(_BYTE *)(_HMPheFromObject(v48) + 25) & 1) != 0 )
                              break;
                            if ( dword_1C032C208 )
                            {
                              v52 = (__int64 *)Win32AllocPool(72LL, 2037281621LL);
                              if ( !v52 )
                                break;
                            }
                            else
                            {
                              dword_1C032C208 = 1;
                              v52 = &qword_1C032DDF0;
                            }
                            *((_QWORD *)&v76 + 1) = v48;
                            *(_QWORD *)&v76 = v52 + 2;
                            v53 = v76;
                            v52[2] = 0LL;
                            v77 = v53;
                            HMAssignmentLock(&v77);
                            v54 = 0LL;
                            if ( v79 )
                              v54 = *(_QWORD *)v79;
                            v52[4] = v54;
                            *((_DWORD *)v52 + 10) = v80;
                            *((_DWORD *)v52 + 11) = v81;
                            *((_DWORD *)v52 + 7) = a1;
                            *((_DWORD *)v52 + 12) = (unsigned int)PsGetThreadId(*(PETHREAD *)v5);
                            *((_DWORD *)v52 + 13) = v61;
                            *((_DWORD *)v52 + 14) = 0;
                            *((_DWORD *)v52 + 6) = 0;
                            *((_DWORD *)v52 + 14) = ~(unsigned __int8)(*(_DWORD *)(v48 + 40) >> 1) & 4;
                            v52[1] = (__int64)v52;
                            *v52 = (__int64)v52;
                            v52[8] = 0LL;
                            if ( (*(_DWORD *)(v48 + 40) & 8) != 0
                              && a1 + 2147483646 <= 3
                              && *(_QWORD *)(v48 + 16) != gptiCurrent )
                            {
                              *((_DWORD *)v52 + 14) |= 4u;
                            }
                            v43 = (__int64 **)gPendingNotifiesList[1];
                            if ( *v43 != (__int64 *)gPendingNotifiesList[0] )
                              __fastfail(3u);
                            *v52 = gPendingNotifiesList[0];
                            v52[1] = (__int64)v43;
                            *v43 = v52;
                            gPendingNotifiesList[1] = v52;
                            *((_DWORD *)v52 + 14) |= v78;
                            v55 = *((_DWORD *)v52 + 14);
                            if ( (v55 & 4) != 0 )
                            {
                              v55 &= ~2u;
                              *((_DWORD *)v52 + 14) = v55;
                            }
                            if ( (v55 & 2) == 0 )
                              v49 = xxxProcessNotifyWinEvent((__int64)v52);
                          }
                        }
                      }
                    }
                  }
                  v48 = v49;
                }
                while ( v49 );
              }
              v56 = KeGetCurrentThread();
              if ( !(unsigned int)IsThreadCrossSessionAttached(v43, v44, v41, v42) )
              {
                v57 = (__int64 *)PsGetThreadWin32Thread(v56);
                if ( v57 )
                  v66 = *v57;
              }
              *(_QWORD *)(v66 + 16) = v63;
              v46 = v64;
              if ( v64 )
                v65();
            }
            else
            {
              PopAndFreeW32ThreadLock(&v63);
            }
            ThreadUnlock1(v46, v45, v47);
            v25 = v67;
          }
          tagDomLock::UnLockExclusive(v25);
          v58 = DLT_THREADINFO::getDLT();
          ptiUnSetDomainLockBit(v58);
          tagObjLock::UnLockExclusive(v72);
          tagDomLock::UnLockShared(DomainLockRef);
        }
      }
    }
  }
}
