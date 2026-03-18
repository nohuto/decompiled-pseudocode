/*
 * XREFs of _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C0133430
 * Callers:
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C01090CC (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C0132EE8 (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C0137270 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C023A01C (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 *     ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C023D82C (-NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIE.c)
 * Callees:
 *     xxxSendMessageCallback @ 0x1C001FD04 (xxxSendMessageCallback.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     IsThreadHung @ 0x1C013354C (IsThreadHung.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C023A0F4 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyIAMWindowManagementEvent(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h]
  char v15; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
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
          anonymous_namespace_::SeverWindowManagementConnectionToShell(v3);
        }
        else
        {
          v12 = 0LL;
          v13 = 0LL;
          v14 = 0LL;
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6);
          v12 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
          v13 = v4;
          HMLockObject(v4);
          v2 = xxxSendMessageCallback((struct tagWND *)v4, 0x342u, 0LL, a1, 0LL, 1LL, 0, 1, 1);
          ThreadUnlock1(v9, v8, v10);
        }
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
  return v2;
}
