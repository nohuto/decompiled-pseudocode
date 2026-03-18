/*
 * XREFs of xxxWindowEvent @ 0x1C004D110
 * Callers:
 *     xxxDCETrackCaptionButton @ 0x1C000C488 (xxxDCETrackCaptionButton.c)
 *     xxxMinMaximizeEx @ 0x1C00132A4 (xxxMinMaximizeEx.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C0017CC4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     xxxCapture @ 0x1C001DF20 (xxxCapture.c)
 *     zzzInternalShowCaret @ 0x1C002868C (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C002873C (zzzInternalHideCaret.c)
 *     xxxSetScrollBar @ 0x1C002DBFC (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C002E2D4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C002F248 (zzzUpdateLayeredWindow.c)
 *     xxxCalcClientRect @ 0x1C003358C (xxxCalcClientRect.c)
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     zzzUpdateCursorImage @ 0x1C004CBD0 (zzzUpdateCursorImage.c)
 *     NtUserNotifyWinEvent @ 0x1C004D080 (NtUserNotifyWinEvent.c)
 *     xxxSystemParametersInfoWorker @ 0x1C005BCF4 (xxxSystemParametersInfoWorker.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C006AB94 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F0B0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 *     zzzSetCaretPos @ 0x1C00E9CE0 (zzzSetCaretPos.c)
 *     xxxCreateCaret @ 0x1C00F5EF4 (xxxCreateCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C00F6070 (zzzInternalDestroyCaret.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C00FF03C (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     xxxCancelCoolSwitch @ 0x1C010ABE4 (xxxCancelCoolSwitch.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C012FB18 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0132A44 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C0133320 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C0133390 (zzzInputFocusReceivedWindowEvent.c)
 *     xxxSwitchDesktop @ 0x1C0137CE8 (xxxSwitchDesktop.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151A64 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0151D28 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01F41DC (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01F4A50 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 *     xxxMNStartMenu @ 0x1C0210998 (xxxMNStartMenu.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C0221D34 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x1C0222EF4 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C02236C0 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C02250D0 (xxxMNOpenHierarchy.c)
 *     xxxMNReleaseCapture @ 0x1C0225FA4 (xxxMNReleaseCapture.c)
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 *     xxxMNSetCapture @ 0x1C02267B8 (xxxMNSetCapture.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C0226C44 (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0240EEC (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C02410D0 (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C0241498 (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241688 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0241D7C (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C0242580 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C0243DB0 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C02472D4 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C0247C58 (xxxHelpLoop.c)
 *     xxxSendMenuSelect @ 0x1C024BC54 (xxxSendMenuSelect.c)
 *     xxxTrackPopupMenuEx @ 0x1C024C438 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C0006CA8 (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     xxxProcessTSFEvent @ 0x1C0007018 (xxxProcessTSFEvent.c)
 *     CategoryMaskFromEvent @ 0x1C004D9A8 (CategoryMaskFromEvent.c)
 *     xxxProcessNotifyWinEvent @ 0x1C004E6B8 (xxxProcessNotifyWinEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00724C0 (PopAndFreeW32ThreadLock.c)
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C01115FC (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C0164774 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxWindowEvent(unsigned int a1, struct tagWND *a2, __int64 a3, int a4, int a5)
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
  struct _KTHREAD *v17; // rbx
  __int64 *v18; // rax
  unsigned int DLT; // eax
  __int64 v20; // rcx
  unsigned int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rcx
  tagDomLock *v24; // rbx
  struct tagWND *v25; // rbx
  int v26; // edx
  HANDLE ThreadId; // rax
  struct _KTHREAD *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // r8
  unsigned __int64 v31; // rcx
  __int64 v32; // rcx
  struct _KTHREAD *v33; // rdi
  __int64 v34; // rbx
  __int64 *v35; // rax
  char v36; // dl
  int v37; // r14d
  int v38; // eax
  __int64 v39; // r8
  __int64 **v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // rdi
  __int64 v46; // r14
  HANDLE v47; // rax
  int v48; // eax
  __int64 *v49; // rbx
  __int128 v50; // xmm0
  __int64 v51; // rax
  int v52; // eax
  struct _KTHREAD *v53; // rbx
  __int64 *v54; // rax
  unsigned int v55; // eax
  unsigned int v56; // [rsp+20h] [rbp-B1h]
  unsigned int v57; // [rsp+28h] [rbp-A9h]
  unsigned int v58; // [rsp+40h] [rbp-91h]
  __int64 v59; // [rsp+48h] [rbp-89h]
  __int64 v60; // [rsp+50h] [rbp-81h] BYREF
  __int64 v61; // [rsp+58h] [rbp-79h]
  void (*v62)(void); // [rsp+60h] [rbp-71h]
  __int64 v63; // [rsp+68h] [rbp-69h]
  tagDomLock *v64; // [rsp+70h] [rbp-61h]
  tagDomLock *DomainLockRef; // [rsp+78h] [rbp-59h]
  HANDLE ThreadProcessId; // [rsp+80h] [rbp-51h]
  __int64 v67; // [rsp+88h] [rbp-49h]
  HANDLE v68; // [rsp+90h] [rbp-41h]
  tagObjLock *v69; // [rsp+98h] [rbp-39h]
  __int64 v70; // [rsp+A0h] [rbp-31h] BYREF
  struct tagWND *v71; // [rsp+A8h] [rbp-29h]
  __int64 v72; // [rsp+B0h] [rbp-21h]
  __int128 v73; // [rsp+C0h] [rbp-11h]
  __int128 v74; // [rsp+D0h] [rbp-1h] BYREF
  unsigned int v75; // [rsp+130h] [rbp+5Fh]
  struct tagWND *v76; // [rsp+138h] [rbp+67h]
  int v77; // [rsp+140h] [rbp+6Fh]

  v77 = a3;
  v76 = a2;
  v5 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  v60 = 0LL;
  v8 = 2LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
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
    if ( !(unsigned int)IsThreadCrossSessionAttached(gpsi, v8, a3) )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *ThreadWin32Thread )
        {
          v17 = KeGetCurrentThread();
          v59 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached(v15, v14, v16) )
          {
            v18 = (__int64 *)PsGetThreadWin32Thread(v17);
            if ( v18 )
            {
              v5 = *v18;
              v59 = *v18;
            }
          }
          v69 = (tagObjLock *)(v5 + 384);
          DLT = DLT_THREADINFO::getDLT();
          DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
          if ( v5 + 384 == gObjDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
          v21 = DLT_THREADINFO::getDLT();
          ptiSetDomainLockBit(v21);
          tagDomLock::LockShared(DomainLockRef);
          tagObjLock::LockExclusive((tagObjLock *)(v5 + 384));
          v22 = DLT_WINEVENT::getDLT();
          v24 = (tagDomLock *)GetDomainLockRef(v22);
          v64 = v24;
          if ( v24 == (tagDomLock *)gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v23);
          tagDomLock::LockExclusive(v24);
          if ( (a5 & 0x11) == 0x11 || !v76 || *(char *)(*((_QWORD *)v76 + 5) + 19LL) >= 0 )
          {
            v25 = v76;
            v26 = a5 | 2;
            if ( (*(_DWORD *)(v5 + 480) & 0x10000001) == 0 )
              v26 = a5;
            v75 = v26;
            if ( (v26 & 1) != 0 && v76 )
            {
              v5 = *((_QWORD *)v76 + 2);
              v25 = 0LL;
              if ( (v26 & 0x10) == 0 )
                v25 = a2;
              v76 = v25;
            }
            ThreadId = PsGetThreadId(*(PETHREAD *)v5);
            v28 = *(struct _KTHREAD **)v5;
            v68 = ThreadId;
            v67 = *(_QWORD *)(v5 + 416);
            ThreadProcessId = PsGetThreadProcessId(v28);
            if ( (v75 & 0x20) != 0 )
              LODWORD(v31) = _InterlockedIncrement(&gcWinEvents);
            else
              v31 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v58 = v31;
            v32 = v59;
            v70 = *(_QWORD *)(v59 + 408);
            *(_QWORD *)(v59 + 408) = &v70;
            v71 = v25;
            if ( v25 )
              HMLockObject(v25);
            v33 = KeGetCurrentThread();
            v34 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached(v32, v29, v30) )
            {
              v35 = (__int64 *)PsGetThreadWin32Thread(v33);
              if ( v35 )
                v34 = *v35;
            }
            v60 = *(_QWORD *)(v34 + 16);
            *(_QWORD *)(v34 + 16) = &v60;
            v62 = (void (*)(void))DereferenceW32Thread;
            v61 = v5;
            ObfReferenceObject(*(PVOID *)v5);
            _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
            v36 = v75;
            if ( (v75 & 2) == 0 )
            {
              PsGetCurrentThreadId();
              v36 = v75;
            }
            if ( v11 && (*(_DWORD *)(*(_QWORD *)(v5 + 416) + 812LL) & 0x2000000) != 0 )
            {
              v57 = v10;
              v37 = v77;
              xxxDoLocalTSFWork(a1, v76, v77, a4, v36, v57, (struct tagTHREADINFO *)v5, v58);
            }
            else
            {
              v37 = v77;
            }
            if ( v9 )
              DoGlobalTSFWork(a1, v76, v37, a4, v56, v9, (struct tagTHREADINFO *)v5, v58);
            v38 = CategoryMaskFromEvent(a1);
            v40 = (__int64 **)gpsi;
            v41 = gpsi;
            if ( (v38 & *(_DWORD *)(gpsi + 1892LL)) != 0 )
            {
              v45 = gpWinEventHooks;
              if ( gpWinEventHooks )
              {
                do
                {
                  v40 = (__int64 **)*(unsigned int *)(v45 + 40);
                  v46 = *(_QWORD *)(v45 + 24);
                  if ( ((unsigned __int8)v40 & 1) == 0 && *(_DWORD *)(v45 + 32) <= a1 && a1 <= *(_DWORD *)(v45 + 36) )
                  {
                    v47 = *(HANDLE *)(v45 + 48);
                    if ( !v47 || v47 == ThreadProcessId )
                    {
                      if ( ((unsigned __int8)v40 & 4) == 0
                        || (v41 = v67, v67 != *(_QWORD *)(*(_QWORD *)(v45 + 16) + 416LL)) )
                      {
                        v48 = *(_DWORD *)(v45 + 56);
                        if ( (!v48 || v48 == (_DWORD)v68)
                          && (((unsigned __int8)v40 & 2) == 0 || v5 != *(_QWORD *)(v45 + 16)) )
                        {
                          v40 = *(__int64 ***)(*(_QWORD *)(v45 + 16) + 448LL);
                          if ( v40 == *(__int64 ***)(v59 + 448)
                            || a1 == 32
                            || v40 == *(__int64 ***)(v5 + 448) && a1 + 2147483646 <= 1 )
                          {
                            if ( (*(_BYTE *)(_HMPheFromObject(v45) + 25) & 1) != 0 )
                              break;
                            if ( dword_1C032A200 )
                            {
                              v49 = (__int64 *)Win32AllocPool(72LL, 2037281621LL);
                              if ( !v49 )
                                break;
                            }
                            else
                            {
                              dword_1C032A200 = 1;
                              v49 = &qword_1C032BDE0;
                            }
                            *((_QWORD *)&v73 + 1) = v45;
                            *(_QWORD *)&v73 = v49 + 2;
                            v50 = v73;
                            v49[2] = 0LL;
                            v74 = v50;
                            HMAssignmentLock(&v74);
                            v51 = 0LL;
                            if ( v76 )
                              v51 = *(_QWORD *)v76;
                            v49[4] = v51;
                            *((_DWORD *)v49 + 10) = v77;
                            *((_DWORD *)v49 + 11) = a4;
                            *((_DWORD *)v49 + 7) = a1;
                            *((_DWORD *)v49 + 12) = (unsigned int)PsGetThreadId(*(PETHREAD *)v5);
                            *((_DWORD *)v49 + 13) = v58;
                            *((_DWORD *)v49 + 14) = 0;
                            *((_DWORD *)v49 + 6) = 0;
                            *((_DWORD *)v49 + 14) = ~(unsigned __int8)(*(_DWORD *)(v45 + 40) >> 1) & 4;
                            v49[1] = (__int64)v49;
                            *v49 = (__int64)v49;
                            v49[8] = 0LL;
                            if ( (*(_DWORD *)(v45 + 40) & 8) != 0
                              && a1 + 2147483646 <= 3
                              && *(_QWORD *)(v45 + 16) != gptiCurrent )
                            {
                              *((_DWORD *)v49 + 14) |= 4u;
                            }
                            v40 = (__int64 **)gPendingNotifiesList[1];
                            if ( *v40 != (__int64 *)gPendingNotifiesList[0] )
                              __fastfail(3u);
                            *v49 = gPendingNotifiesList[0];
                            v49[1] = (__int64)v40;
                            *v40 = v49;
                            gPendingNotifiesList[1] = v49;
                            *((_DWORD *)v49 + 14) |= v75;
                            v52 = *((_DWORD *)v49 + 14);
                            if ( (v52 & 4) != 0 )
                            {
                              v52 &= ~2u;
                              *((_DWORD *)v49 + 14) = v52;
                            }
                            if ( (v52 & 2) == 0 )
                              v46 = xxxProcessNotifyWinEvent((__int64)v49);
                          }
                        }
                      }
                    }
                  }
                  v45 = v46;
                }
                while ( v46 );
              }
              v53 = KeGetCurrentThread();
              if ( !(unsigned int)IsThreadCrossSessionAttached(v40, v41, v39) )
              {
                v54 = (__int64 *)PsGetThreadWin32Thread(v53);
                if ( v54 )
                  v63 = *v54;
              }
              *(_QWORD *)(v63 + 16) = v60;
              v43 = v61;
              if ( v61 )
                v62();
            }
            else
            {
              PopAndFreeW32ThreadLock(&v60);
            }
            ThreadUnlock1(v43, v42, v44);
            v24 = v64;
          }
          tagDomLock::UnLockExclusive(v24);
          v55 = DLT_THREADINFO::getDLT();
          ptiUnSetDomainLockBit(v55);
          tagObjLock::UnLockExclusive(v69);
          tagDomLock::UnLockShared(DomainLockRef);
        }
      }
    }
  }
}
