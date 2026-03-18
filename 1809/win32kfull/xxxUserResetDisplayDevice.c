/*
 * XREFs of xxxUserResetDisplayDevice @ 0x1C0159020
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C00BD788 (xxxUpdatePerUserSystemParameters.c)
 *     PowerOnGdi @ 0x1C0158EF0 (PowerOnGdi.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C00A2BBC (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     SetPointer @ 0x1C00BD490 (SetPointer.c)
 *     xxxRedrawWindow @ 0x1C00C7520 (xxxRedrawWindow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 xxxUserResetDisplayDevice()
{
  __int64 result; // rax
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  result = grpdeskRitInput;
  if ( grpdeskRitInput )
  {
    EtwTracexxxUserResetDisplayDeviceBegin(0xFFFFFFFFLL);
    gpqCursor = 0LL;
    zzzInternalSetCursorPos(*(_DWORD *)(gpsi + 4960LL), *(_DWORD *)(gpsi + 4964LL), 2, 1);
    SetPointer(1);
    v1 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
    v6[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v6;
    v6[1] = v1;
    if ( v1 )
      _InterlockedIncrement((volatile signed __int32 *)(v1 + 8));
    xxxRedrawWindow(*(struct tagWND **)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL), 0LL, 0LL, 645);
    ThreadUnlock1(v5, v4);
    return EtwTracexxxUserResetDisplayDeviceEnd(0xFFFFFFFFLL);
  }
  return result;
}
