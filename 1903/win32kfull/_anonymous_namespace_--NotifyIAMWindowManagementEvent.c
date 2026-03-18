/*
 * XREFs of _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C0016D58
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0014388 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C012D954 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C012E190 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C023A63C (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 *     ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C023DE4C (-NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIE.c)
 * Callees:
 *     IsThreadHung @ 0x1C0016E74 (IsThreadHung.c)
 *     xxxSendMessageCallback @ 0x1C001D0F4 (xxxSendMessageCallback.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C023A714 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

__int64 anonymous_namespace_::NotifyIAMWindowManagementEvent()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v8; // [rsp+50h] [rbp-28h] BYREF
  __int64 v9; // [rsp+58h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp-18h]
  char v11; // [rsp+88h] [rbp+10h] BYREF

  v0 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
  v1 = *(_QWORD *)(gptiCurrent + 448LL);
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 288) )
    {
      v2 = *(_QWORD *)(v1 + 328);
      if ( v2 )
      {
        if ( (unsigned int)IsThreadHung(*(_QWORD *)(v2 + 16), 0LL) )
        {
          anonymous_namespace_::SeverWindowManagementConnectionToShell(v1);
        }
        else
        {
          v8 = 0LL;
          v9 = 0LL;
          v10 = 0LL;
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v8 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v8;
          v9 = v2;
          HMLockObject(v2);
          v0 = xxxSendMessageCallback((struct tagWND *)v2, 0x342u, 0LL, 1LL, 0, 1, 1);
          ThreadUnlock1(v5, v4, v6);
        }
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
  return v0;
}
