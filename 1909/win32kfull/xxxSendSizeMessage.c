/*
 * XREFs of xxxSendSizeMessage @ 0x1C0011098
 * Callers:
 *     xxxShowWindowEx @ 0x1C002372C (xxxShowWindowEx.c)
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxHandleWindowPosChanged @ 0x1C010E9FC (xxxHandleWindowPosChanged.c)
 * Callees:
 *     _GetClientRect @ 0x1C0011124 (_GetClientRect.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00407C0 (xxxSendTransformableMessageTimeout.c)
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
