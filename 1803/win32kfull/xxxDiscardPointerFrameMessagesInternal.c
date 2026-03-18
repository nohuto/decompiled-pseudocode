/*
 * XREFs of xxxDiscardPointerFrameMessagesInternal @ 0x1C01B8984
 * Callers:
 *     NtUserDiscardPointerFrameMessages @ 0x1C01ECC10 (NtUserDiscardPointerFrameMessages.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01B94E8 (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01B9C38 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 */

__int64 __fastcall xxxDiscardPointerFrameMessagesInternal(unsigned __int16 a1)
{
  unsigned __int64 ThreadPointerData; // rax
  __int64 v2; // rdx
  struct tagTHREADINFO *v3; // r11
  __int64 v4; // rcx
  HWND *v6; // [rsp+20h] [rbp-18h]
  int v7; // [rsp+48h] [rbp+10h] BYREF

  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1072LL), a1, 0LL, &v7, v6);
  if ( !ThreadPointerData )
    goto LABEL_2;
  if ( !v7 )
  {
    v4 = 5LL;
    goto LABEL_3;
  }
  if ( !(unsigned int)xxxDiscardPointerWindowFrameMessages(v3, ThreadPointerData) )
  {
LABEL_2:
    v4 = 87LL;
LABEL_3:
    UserSetLastError(v4, v2);
    return 0LL;
  }
  return 1LL;
}
