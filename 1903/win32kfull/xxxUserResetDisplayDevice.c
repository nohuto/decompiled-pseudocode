/*
 * XREFs of xxxUserResetDisplayDevice @ 0x1C0160850
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00E1850 (xxxUpdatePerUserSystemParameters.c)
 *     PowerOnGdi @ 0x1C0160710 (PowerOnGdi.c)
 * Callees:
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00456D0 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     SetPointer @ 0x1C0082DE0 (SetPointer.c)
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxUserResetDisplayDevice()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  __int64 v11; // [rsp+30h] [rbp-18h]

  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    EtwTracexxxUserResetDisplayDeviceBegin(0xFFFFFFFFLL);
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    gpqCursor = 0LL;
    zzzInternalSetCursorPos(*(_DWORD *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 2, 1);
    SetPointer(1LL);
    v1 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
    v9 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v9;
    v10 = v1;
    if ( v1 )
      HMLockObject(v1);
    xxxRedrawWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 0LL, 0LL, 645LL);
    ThreadUnlock1(v7, v6, v8);
    return EtwTracexxxUserResetDisplayDeviceEnd(0xFFFFFFFFLL);
  }
  return result;
}
