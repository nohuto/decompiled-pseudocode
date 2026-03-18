/*
 * XREFs of xxxSendSizeMessage @ 0x1C0091C40
 * Callers:
 *     xxxShowWindowEx @ 0x1C002E00C (xxxShowWindowEx.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     xxxHandleWindowPosChanged @ 0x1C0133EFC (xxxHandleWindowPosChanged.c)
 * Callees:
 *     _GetClientRect @ 0x1C0091CCC (_GetClientRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C009F9F0 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendSizeMessage(ULONG_PTR BugCheckParameter2)
{
  _QWORD v3[3]; // [rsp+50h] [rbp-18h] BYREF

  v3[0] = 0LL;
  v3[1] = 0LL;
  GetClientRect(BugCheckParameter2, v3);
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(BugCheckParameter2, 0, 0, 0LL, 1, 0);
}
