/*
 * XREFs of _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00D0D34
 * Callers:
 *     ?xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z @ 0x1C00CE80C (-xxxSetForegroundThreadWithWindowHint@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@@Z.c)
 *     ?TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z @ 0x1C01242A8 (-TrackedWindowTrackingInfo@NotifyShell@@YAXPEAUtagWND@@QEBUtagMINMAXINFO@@@Z.c)
 *     _anonymous_namespace_::NotifyShellSimplePayload @ 0x1C0157414 (_anonymous_namespace_--NotifyShellSimplePayload.c)
 *     _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C0221E98 (_anonymous_namespace_--NotifyShellWindowPosChangedCommon.c)
 *     ?NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIED@@@Z @ 0x1C02259A4 (-NotifyTemplateApplied@CWindowGroupManager@@QEAAXPEBUtagWND@@AEBUtagGROUP_WINDOW_TEMPLATE_APPLIE.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     IsThreadHung @ 0x1C00D0CAC (IsThreadHung.c)
 *     xxxSendMessageCallback @ 0x1C00D1744 (xxxSendMessageCallback.c)
 *     _anonymous_namespace_::SeverWindowManagementConnectionToShell @ 0x1C0221F70 (_anonymous_namespace_--SeverWindowManagementConnectionToShell.c)
 */

__int64 anonymous_namespace_::NotifyIAMWindowManagementEvent()
{
  unsigned int v0; // ebx
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD v8[4]; // [rsp+50h] [rbp-28h] BYREF
  char v9; // [rsp+88h] [rbp+10h] BYREF

  v0 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  v1 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 288) )
    {
      v2 = *(_QWORD *)(v1 + 328);
      if ( v2 )
      {
        if ( (unsigned int)IsThreadHung(*(_QWORD **)(v2 + 16), 0) )
        {
          anonymous_namespace_::SeverWindowManagementConnectionToShell(v1);
        }
        else
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
          v8[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v8;
          v8[1] = v2;
          _InterlockedAdd((volatile signed __int32 *)(v2 + 8), 1u);
          v0 = xxxSendMessageCallback((struct tagWND *)v2, 0x342u, 0LL, 1LL, 0, 1, 1);
          ThreadUnlock1(v6, v5);
        }
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  return v0;
}
