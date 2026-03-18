/*
 * XREFs of xxxPromotePointerToMouse @ 0x1C01B8BB0
 * Callers:
 *     NtUserPromotePointer @ 0x1C01F3AB0 (NtUserPromotePointer.c)
 *     ?xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@KUtagPOINT@@@Z @ 0x1C01FE388 (-xxxRequestMoveSizeOperation@CMoveSizeRequest@@SA_NPEAUtagWND@@W4MOVESIZE_OPERATION@@KUtagPOINT@.c)
 *     xxxDefPointerProc @ 0x1C01FF9A4 (xxxDefPointerProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01B94E8 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

int __fastcall xxxPromotePointerToMouse(unsigned __int16 a1)
{
  unsigned __int64 ThreadPointerData; // rax
  __int64 v2; // rdx
  unsigned int v3; // r11d
  HWND *v5; // [rsp+20h] [rbp-18h]

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1072LL), a1, 0LL, 0LL, v5);
  if ( ThreadPointerData )
    return CTouchProcessor::PromotePointerDataToMouse(gpTouchProcessor, ThreadPointerData, v3);
  UserSetLastError(87LL, v2);
  return 0;
}
