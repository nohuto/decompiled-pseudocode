/*
 * XREFs of xxxPromotePointerToMouse @ 0x1C01F1528
 * Callers:
 *     NtUserPromotePointer @ 0x1C0233290 (NtUserPromotePointer.c)
 *     ?xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z @ 0x1C023EF00 (-xxxValidateCapture@CMoveSizeRequest@@CA_NPEAUtagWND@@KPEAUtagPOINT@@@Z.c)
 *     xxxDefPointerProc @ 0x1C024064C (xxxDefPointerProc.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F1E9C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
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
