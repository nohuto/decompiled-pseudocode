/*
 * XREFs of ?GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z @ 0x1C01DB060
 * Callers:
 *     ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01DAEE8 (-DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall GetPwndFromPointerMsgId(unsigned __int64 a1)
{
  HWND v2; // [rsp+58h] [rbp+10h] BYREF

  if ( CTouchProcessor::GetPointerMessageInfo(gpTouchProcessor, a1, 0, &v2, 0LL, 0LL, 0LL, 0LL) )
    return (struct tagWND *)ValidateHwnd(v2);
  else
    return 0LL;
}
