/*
 * XREFs of xxxDiscardPointerFrameMessagesInternal @ 0x1C01DB5F0
 * Callers:
 *     NtUserDiscardPointerFrameMessages @ 0x1C0212F20 (NtUserDiscardPointerFrameMessages.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01DC1F8 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01DC95C (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall xxxDiscardPointerFrameMessagesInternal(unsigned __int16 a1)
{
  unsigned __int64 ThreadPointerData; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  HWND *v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+48h] [rbp+10h] BYREF

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1080LL), a1, 0LL, &v8, v7);
  if ( !ThreadPointerData )
  {
LABEL_6:
    v5 = 87LL;
    goto LABEL_7;
  }
  if ( v8 )
  {
    if ( (unsigned int)xxxDiscardPointerWindowFrameMessages(gptiCurrent, ThreadPointerData) )
      return 1LL;
    goto LABEL_6;
  }
  v5 = 5LL;
LABEL_7:
  UserSetLastError(v5, v2, v3, v4);
  return 0LL;
}
