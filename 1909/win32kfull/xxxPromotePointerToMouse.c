/*
 * XREFs of xxxPromotePointerToMouse @ 0x1C01F13A8
 * Callers:
 *     NtUserPromotePointer @ 0x1C0232C70 (NtUserPromotePointer.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C023E8E0 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 *     xxxDefPointerProc @ 0x1C024002C (xxxDefPointerProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F1D1C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

int __fastcall xxxPromotePointerToMouse(unsigned __int16 a1, unsigned int a2)
{
  unsigned __int64 ThreadPointerData; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  HWND *v8; // [rsp+20h] [rbp-18h]

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL), a1, 0LL, 0LL, v8);
  if ( ThreadPointerData )
    return CTouchProcessor::PromotePointerDataToMouse(gpTouchProcessor, ThreadPointerData, a2);
  UserSetLastError(87LL, v4, v5, v6);
  return 0;
}
