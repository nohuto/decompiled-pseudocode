/*
 * XREFs of xxxSendSizeMessage @ 0x1C00E98E8
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 *     xxxShowWindowEx @ 0x1C0075774 (xxxShowWindowEx.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     _GetClientRect @ 0x1C00E9968 (_GetClientRect.c)
 */

__int64 __fastcall xxxSendSizeMessage(__int64 *BugCheckParameter2, unsigned int a2)
{
  _WORD v5[12]; // [rsp+50h] [rbp-18h] BYREF

  GetClientRect(BugCheckParameter2, v5);
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(
           BugCheckParameter2,
           5u,
           (HWND)a2,
           (unsigned __int16)(v5[4] - v5[0]) | ((unsigned __int16)(v5[6] - v5[2]) << 16),
           0,
           0,
           0LL,
           1,
           0);
}
