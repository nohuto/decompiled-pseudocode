/*
 * XREFs of xxxNotifyShellTrackedWindowPosChanged @ 0x1C01A59E4
 * Callers:
 *     ?xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z @ 0x1C0065C9C (-xxxShowWindowViaMinMax@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z @ 0x1C0073BD0 (-xxxNotifyShellPositioningChanged@@YAXPEAUtagWND@@QEAUtagCVR@@@Z.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 *     xxxEndSetWindowArrangement @ 0x1C01C6954 (xxxEndSetWindowArrangement.c)
 *     xxxSetWindowShowState @ 0x1C01FA8B4 (xxxSetWindowShowState.c)
 * Callees:
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021CE4 (IsWindowSubjectToShellWindowBehavior.c)
 *     ?xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@@Z @ 0x1C01A492C (-xxxNotifyShellWindowPosChangedCommon@@YAXPEAUtagWND@@HHW4SHELL_WINDOWMANAGEMENT_NOTIFY_MSG_ID@@.c)
 */

__int64 __fastcall xxxNotifyShellTrackedWindowPosChanged(_QWORD *a1, int a2, __int64 a3)
{
  __int64 result; // rax

  result = IsWindowSubjectToShellWindowBehavior((__int64)a1, 16LL, a3);
  if ( (_DWORD)result )
    return xxxNotifyShellWindowPosChangedCommon(a1, a2, 0, 0);
  return result;
}
