/*
 * XREFs of xxxWindowEvent @ 0x1C0018330
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C000C2E4 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0017DF0 (zzzUpdateCursorImage.c)
 *     NtUserNotifyWinEvent @ 0x1C00182A0 (NtUserNotifyWinEvent.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C003839C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C0041894 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     xxxCalcClientRect @ 0x1C0068CE0 (xxxCalcClientRect.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     zzzInternalShowCaret @ 0x1C0073D24 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C0073DD4 (zzzInternalHideCaret.c)
 *     zzzUpdateLayeredWindow @ 0x1C0077B50 (zzzUpdateLayeredWindow.c)
 *     xxxSetScrollBar @ 0x1C00784FC (xxxSetScrollBar.c)
 *     ?xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z @ 0x1C0078BA4 (-xxxEnableWndSBArrows@@YAHPEAUtagWND@@II@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00A8724 (xxxSystemParametersInfoWorker.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z @ 0x1C00B3174 (-xxxSetConsoleCaretInfo@@YAHPEAU_CONSOLE_CARET_INFO@@@Z.c)
 *     xxxMinMaximizeEx @ 0x1C00B7604 (xxxMinMaximizeEx.c)
 *     xxxDCETrackCaptionButton @ 0x1C00BAAFC (xxxDCETrackCaptionButton.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00CE3B4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C00CECE8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     zzzInputFocusLostWindowEvent @ 0x1C00CEF40 (zzzInputFocusLostWindowEvent.c)
 *     zzzInputFocusReceivedWindowEvent @ 0x1C00CEFB0 (zzzInputFocusReceivedWindowEvent.c)
 *     xxxCapture @ 0x1C00D1D64 (xxxCapture.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 *     zzzSetCaretPos @ 0x1C00DD820 (zzzSetCaretPos.c)
 *     xxxCreateCaret @ 0x1C00DDB70 (xxxCreateCaret.c)
 *     zzzInternalDestroyCaret @ 0x1C00DDCEC (zzzInternalDestroyCaret.c)
 *     xxxCancelCoolSwitch @ 0x1C0124534 (xxxCancelCoolSwitch.c)
 *     ?xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z @ 0x1C01DE44C (-xxxMoveSwitchWndHilite@@YAPEAUHWND__@@PEAUtagWND@@PEAUtagSwitchWndInfo@@H@Z.c)
 *     ?xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z @ 0x1C01DECD4 (-xxxShowSwitchWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E2B8C (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01E33CC (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 *     xxxMNStartMenu @ 0x1C01FA218 (xxxMNStartMenu.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@I_J@Z @ 0x1C020A770 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@AEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITE.c)
 *     xxxMNCancel @ 0x1C020B900 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C020C100 (xxxMNCloseHierarchy.c)
 *     xxxMNOpenHierarchy @ 0x1C020DA04 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C020E8F4 (xxxMNSelectItem.c)
 *     xxxMNSwitchToAlternateMenu @ 0x1C020F408 (xxxMNSwitchToAlternateMenu.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0228A8C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z @ 0x1C0228C4C (-xxxEnableSBCtlArrows@@YAHPEAUtagWND@@I@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1C022900C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02291FC (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C02298D0 (xxxEndScroll.c)
 *     xxxSBWndProc @ 0x1C022A0D0 (xxxSBWndProc.c)
 *     xxxTrackCaptionButton @ 0x1C022B4B4 (xxxTrackCaptionButton.c)
 *     xxxDragObject @ 0x1C022F198 (xxxDragObject.c)
 *     xxxHelpLoop @ 0x1C022F7F8 (xxxHelpLoop.c)
 *     xxxSendMenuSelect @ 0x1C0233710 (xxxSendMenuSelect.c)
 *     xxxTrackPopupMenuEx @ 0x1C0233EE8 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C00044FC (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     xxxProcessTSFEvent @ 0x1C0004750 (xxxProcessTSFEvent.c)
 *     CategoryMaskFromEvent @ 0x1C0018B08 (CategoryMaskFromEvent.c)
 *     ?CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z @ 0x1C0018F64 (-CreateNotify@@YAPEAUtagNOTIFY@@PEAUtagEVENTHOOK@@KPEAUtagWND@@JJPEAUtagTHREADINFO@@KE@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1C00190F0 (xxxProcessNotifyWinEvent.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0037100 (PopAndFreeW32ThreadLock.c)
 *     ?DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C012B9DC (-DoGlobalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     IsThreadCrossSessionAttached @ 0x1C015BC14 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02C1D60 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall xxxWindowEvent(unsigned int a1, __int64 a2, int a3, int a4, unsigned int a5)
{
  __int64 v6; // r14
  int v9; // r10d
  unsigned int v10; // r15d
  int v11; // ebp
  int v12; // r12d
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *ThreadWin32Thread; // rax
  struct _KTHREAD *v15; // rbx
  __int64 *v16; // rax
  unsigned int DLT; // eax
  __int64 v18; // rcx
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 v21; // rcx
  tagObjLock *v22; // rbx
  struct tagWND *v23; // rbx
  unsigned int v24; // r13d
  HANDLE ThreadId; // rax
  struct _KTHREAD *v26; // rcx
  struct _KTHREAD *v27; // rsi
  __int64 v28; // rbx
  __int64 *v29; // rax
  struct tagWND *v30; // rbp
  __int64 v31; // rcx
  int v32; // r15d
  int v33; // edx
  __int64 v34; // rbx
  HANDLE v35; // rax
  int v36; // eax
  __int64 v37; // rdx
  struct tagNOTIFY *Notify; // rax
  int v39; // ecx
  struct _KTHREAD *v40; // rbx
  __int64 *v41; // rax
  unsigned int v42; // eax
  unsigned int v43; // [rsp+20h] [rbp-D8h]
  unsigned int v44; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v45; // [rsp+40h] [rbp-B8h]
  __int64 v46; // [rsp+48h] [rbp-B0h]
  __int64 v47; // [rsp+50h] [rbp-A8h]
  tagObjLock *v48; // [rsp+58h] [rbp-A0h]
  tagObjLock *DomainLockRef; // [rsp+60h] [rbp-98h]
  __int64 v50; // [rsp+68h] [rbp-90h] BYREF
  __int64 v51; // [rsp+70h] [rbp-88h]
  void (*v52)(void); // [rsp+78h] [rbp-80h]
  HANDLE v53; // [rsp+80h] [rbp-78h]
  HANDLE ThreadProcessId; // [rsp+88h] [rbp-70h]
  __int64 v55; // [rsp+90h] [rbp-68h]
  tagObjLock *v56; // [rsp+98h] [rbp-60h]
  _QWORD v57[11]; // [rsp+A0h] [rbp-58h] BYREF
  struct tagWND *v58; // [rsp+108h] [rbp+10h]

  v58 = (struct tagWND *)a2;
  v6 = 0LL;
  v47 = 0LL;
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
  if ( a1 - 16392 <= 0x3FFC || a1 - 32783 <= 0x7FFF7F00 )
    goto LABEL_42;
  if ( a1 == 32779 )
  {
    v9 = 64;
  }
  else
  {
    if ( a1 - 8 <= 0x3FF8 )
      goto LABEL_42;
    if ( a1 <= 0x7FFFFF12 )
    {
      if ( a1 < 0x7FFFFF10 )
      {
        if ( a1 > 0x800A )
        {
          if ( a1 == 32780 )
          {
            v9 = 8;
            goto LABEL_43;
          }
          if ( a1 == 32782 )
          {
            v9 = 16;
            goto LABEL_43;
          }
        }
        else
        {
          if ( a1 == 32778 )
          {
            v9 = 32;
            goto LABEL_43;
          }
          if ( a1 >= 4 )
          {
            if ( a1 <= 7 )
            {
              v9 = 1;
              goto LABEL_43;
            }
            if ( a1 > 0x4000 )
            {
              if ( a1 <= 0x4007 )
                goto LABEL_43;
              if ( a1 == 32773 )
              {
                v9 = 4;
                goto LABEL_43;
              }
            }
          }
        }
        goto LABEL_42;
      }
      goto LABEL_70;
    }
    if ( a1 <= 0x80000003 )
    {
      if ( a1 < 0x80000000 && a1 != 2147483424 && a1 != 2147483440 )
        goto LABEL_42;
LABEL_70:
      v9 = 256;
      goto LABEL_43;
    }
    if ( a1 > 0x80000005 )
    {
      if ( a1 <= 0x80000007 )
        goto LABEL_70;
LABEL_42:
      v9 = 0x8000;
      goto LABEL_43;
    }
    v9 = 512;
  }
LABEL_43:
  if ( (v9 & *(_DWORD *)(gpsi + 1892LL)) != 0 || v10 || v12 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *ThreadWin32Thread )
        {
          v15 = KeGetCurrentThread();
          v46 = 0LL;
          if ( !(unsigned int)IsThreadCrossSessionAttached() )
          {
            v16 = (__int64 *)PsGetThreadWin32Thread(v15);
            if ( v16 )
            {
              v6 = *v16;
              v46 = *v16;
            }
          }
          v56 = (tagObjLock *)(v6 + 392);
          DLT = DLT_THREADINFO::getDLT();
          DomainLockRef = (tagObjLock *)GetDomainLockRef(DLT);
          if ( v6 + 392 == gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
          v19 = DLT_THREADINFO::getDLT();
          ptiSetDomainLockBit(v19);
          tagObjLock::LockShared(DomainLockRef);
          tagObjLock::LockExclusive((tagObjLock *)(v6 + 392));
          v20 = DLT_WINEVENT::getDLT();
          v22 = (tagObjLock *)GetDomainLockRef(v20);
          v48 = v22;
          if ( v22 == (tagObjLock *)gDomainDummyLock )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v21);
          tagObjLock::LockExclusive(v22);
          if ( (a5 & 0x11) == 0x11 || !a2 || *(char *)(*(_QWORD *)(a2 + 40) + 19LL) >= 0 )
          {
            v23 = v58;
            v24 = a5 | 2;
            if ( (*(_DWORD *)(v6 + 488) & 0x10000001) == 0 )
              v24 = a5;
            if ( (v24 & 1) != 0 && v58 )
            {
              v6 = *((_QWORD *)v58 + 2);
              v23 = 0LL;
              if ( (v24 & 0x10) == 0 )
                v23 = (struct tagWND *)a2;
              v58 = v23;
            }
            ThreadId = PsGetThreadId(*(PETHREAD *)v6);
            v26 = *(struct _KTHREAD **)v6;
            v53 = ThreadId;
            v55 = *(_QWORD *)(v6 + 424);
            ThreadProcessId = PsGetThreadProcessId(v26);
            if ( (v24 & 0x20) != 0 )
              LODWORD(v45) = _InterlockedIncrement(&gcWinEvents);
            else
              v45 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
            v57[0] = *(_QWORD *)(v46 + 416);
            *(_QWORD *)(v46 + 416) = v57;
            v57[1] = v23;
            if ( v23 )
              _InterlockedIncrement((volatile signed __int32 *)v23 + 2);
            v27 = KeGetCurrentThread();
            v28 = 0LL;
            if ( !(unsigned int)IsThreadCrossSessionAttached() )
            {
              v29 = (__int64 *)PsGetThreadWin32Thread(v27);
              if ( v29 )
                v28 = *v29;
            }
            v50 = *(_QWORD *)(v28 + 16);
            *(_QWORD *)(v28 + 16) = &v50;
            v52 = (void (*)(void))DereferenceW32Thread;
            v51 = v6;
            ObfReferenceObject(*(PVOID *)v6);
            _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
            if ( (v24 & 2) == 0 )
              PsGetCurrentThreadId();
            if ( v12 && (*(_DWORD *)(*(_QWORD *)(v6 + 424) + 820LL) & 0x1000000) != 0 )
            {
              v44 = v11;
              v30 = v58;
              xxxDoLocalTSFWork(a1, v58, a3, a4, v24, v44, (struct tagTHREADINFO *)v6, v45);
            }
            else
            {
              v30 = v58;
            }
            if ( v10 )
              DoGlobalTSFWork(a1, v30, a3, a4, v43, v10, (struct tagTHREADINFO *)v6, v45);
            if ( ((unsigned int)CategoryMaskFromEvent(a1) & *(_DWORD *)(gpsi + 1892LL)) != 0 )
            {
              v31 = gpWinEventHooks;
              if ( gpWinEventHooks )
              {
                v32 = (int)v53;
                do
                {
                  v33 = *(_DWORD *)(v31 + 40);
                  v34 = *(_QWORD *)(v31 + 24);
                  if ( (v33 & 1) == 0 && *(_DWORD *)(v31 + 32) <= a1 && a1 <= *(_DWORD *)(v31 + 36) )
                  {
                    v35 = *(HANDLE *)(v31 + 48);
                    if ( (!v35 || v35 == ThreadProcessId)
                      && ((v33 & 4) == 0 || v55 != *(_QWORD *)(*(_QWORD *)(v31 + 16) + 424LL)) )
                    {
                      v36 = *(_DWORD *)(v31 + 56);
                      if ( (!v36 || v36 == v32) && ((v33 & 2) == 0 || v6 != *(_QWORD *)(v31 + 16)) )
                      {
                        v37 = *(_QWORD *)(*(_QWORD *)(v31 + 16) + 456LL);
                        if ( v37 == *(_QWORD *)(v46 + 456)
                          || a1 == 32
                          || v37 == *(_QWORD *)(v6 + 456) && a1 + 2147483646 <= 1 )
                        {
                          if ( (*(_BYTE *)(*((_DWORD *)&gSharedInfo + 4)
                                         * (unsigned int)(unsigned __int16)*(_DWORD *)v31
                                         + *((_QWORD *)&gSharedInfo + 1)
                                         + 25LL) & 1) != 0 )
                            break;
                          Notify = CreateNotify(
                                     (struct tagEVENTHOOK *)v31,
                                     a1,
                                     v30,
                                     a3,
                                     a4,
                                     (struct tagTHREADINFO *)v6,
                                     v45,
                                     0);
                          if ( !Notify )
                            break;
                          v39 = *((_DWORD *)Notify + 14) | v24;
                          *((_DWORD *)Notify + 14) = v39;
                          if ( (v39 & 4) != 0 )
                          {
                            v39 &= ~2u;
                            *((_DWORD *)Notify + 14) = v39;
                          }
                          if ( (v39 & 2) == 0 )
                            v34 = xxxProcessNotifyWinEvent((__int64)Notify);
                        }
                      }
                    }
                  }
                  v31 = v34;
                }
                while ( v34 );
              }
              v40 = KeGetCurrentThread();
              if ( !(unsigned int)IsThreadCrossSessionAttached() )
              {
                v41 = (__int64 *)PsGetThreadWin32Thread(v40);
                if ( v41 )
                  v47 = *v41;
              }
              *(_QWORD *)(v47 + 16) = v50;
              if ( v51 )
                v52();
            }
            else
            {
              PopAndFreeW32ThreadLock(&v50);
            }
            ThreadUnlock1();
            v22 = v48;
          }
          tagObjLock::UnLock(v22);
          v42 = DLT_THREADINFO::getDLT();
          ptiUnSetDomainLockBit(v42);
          tagObjLock::UnLock(v56);
          tagObjLock::UnLock(DomainLockRef);
        }
      }
    }
  }
}
