/*
 * XREFs of xxxSendTransformableMessage @ 0x1C00EE8A0
 * Callers:
 *     ?xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x1C0139FCC (-xxxDCEWindowHitTest2Internal@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagDCE_WINDOW_HIT_TEST_A.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 */

__int64 __fastcall xxxSendTransformableMessage(__int64 *a1, unsigned int a2, HWND a3, __int64 a4, int a5)
{
  _InterlockedIncrement(&glSendMessage);
  return xxxSendTransformableMessageTimeout(a1, a2, a3, a4, 0, 0, 0LL, 1, a5);
}
