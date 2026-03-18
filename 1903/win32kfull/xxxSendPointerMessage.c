/*
 * XREFs of xxxSendPointerMessage @ 0x1C01F1B2C
 * Callers:
 *     NtUserfnPOINTERINPUT @ 0x1C0239420 (NtUserfnPOINTERINPUT.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxSendPointerMessageWorker @ 0x1C01F1BA8 (xxxSendPointerMessageWorker.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01F1E9C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall xxxSendPointerMessage(
        __int64 a1,
        __int64 a2,
        __int64 ThreadPointerData,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  int v7; // ebx
  int v8; // edi
  __int64 v9; // rcx
  HWND *v11; // [rsp+20h] [rbp-18h]

  v7 = a4;
  v8 = ThreadPointerData;
  if ( *(_QWORD *)(a1 + 1104) )
  {
    v9 = 5LL;
LABEL_3:
    UserSetLastError(v9, a2, ThreadPointerData, a4);
    return 0LL;
  }
  ThreadPointerData = GetThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 1080), a2, 0LL, 0LL, v11);
  if ( !ThreadPointerData )
  {
    v9 = 87LL;
    goto LABEL_3;
  }
  return xxxSendPointerMessageWorker(v8, v7, ThreadPointerData, a5, a6, a7);
}
