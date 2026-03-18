/*
 * XREFs of ?xxxNotifyIAMWindowManagementEvent@@YAHQEBU_SHELL_WINDOWMANAGEMENT_NOTIFY_INFO@@@Z @ 0x1C00602A4
 * Callers:
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C005F010 (xxxSetForegroundThreadWithWindowHint.c)
 *     xxxNotifyShellWindowBorderExitIfEntered @ 0x1C005FFF8 (xxxNotifyShellWindowBorderExitIfEntered.c)
 *     xxxNotifyShellTrackedWindowTrackingInfo @ 0x1C0062C7C (xxxNotifyShellTrackedWindowTrackingInfo.c)
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1C00EA104 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 *     ?TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z @ 0x1C00EA2F8 (-TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01A492C (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 *     xxxNotifyShellWindowBorderEnter @ 0x1C01A5A24 (xxxNotifyShellWindowBorderEnter.c)
 *     ?WindowArrangementHotKeyCallback@@YAX_K_J@Z @ 0x1C01C20F0 (-WindowArrangementHotKeyCallback@@YAX_K_J@Z.c)
 *     ?xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01C416C (-xxxReportMoveSizeCompletionToShell@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 *     xxxEndSetWindowArrangement @ 0x1C01C6954 (xxxEndSetWindowArrangement.c)
 *     ?DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z @ 0x1C01D64DC (-DelegateMoveSizeToShell@@YAXPEAUtagWND@@I@Z.c)
 *     ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C01FCF40 (-NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIE.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxSendMessageCallback @ 0x1C0060F68 (xxxSendMessageCallback.c)
 *     IsThreadHung @ 0x1C00612F0 (IsThreadHung.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01A47F4 (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall xxxNotifyIAMWindowManagementEvent(const struct _SHELL_WINDOWMANAGEMENT_NOTIFY_INFO *const a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v11[4]; // [rsp+50h] [rbp-28h] BYREF
  char v12; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
  v3 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 288) )
    {
      v4 = *(_QWORD *)(v3 + 328);
      if ( v4 )
      {
        if ( (unsigned int)IsThreadHung(*(_QWORD *)(v4 + 16), 0LL) )
        {
          SeverWindowManagementConnectionToShell((struct tagDESKTOP *)v3);
        }
        else
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5);
          v11[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v11;
          v11[1] = v4;
          _InterlockedAdd((volatile signed __int32 *)(v4 + 8), 1u);
          v2 = xxxSendMessageCallback((struct tagWND *)v4, 0x342u, 0LL, (__int64)a1, 0LL, 1LL, 0, 1, 1);
          ThreadUnlock1(v8, v7, v9);
        }
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
  return v2;
}
