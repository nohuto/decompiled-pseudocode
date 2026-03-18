/*
 * XREFs of ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01CFDAC
 * Callers:
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01CF9E0 (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C002CE60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01CFB7C (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 */

void __fastcall xxxSendOpenStatusNotify(PRKPROCESS **a1, struct tagIMEUI *a2, struct tagWND *a3, int a4)
{
  _BOOL8 v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+50h] [rbp-28h] BYREF

  v5 = a4 != 0;
  if ( *(_DWORD *)(*((_QWORD *)a3 + 2) + 632LL) >= 0x400u && *(_QWORD *)(*((_QWORD *)a3 + 5) + 208LL) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
    v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v9;
    v9[1] = a3;
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((__int64 *)a3, 0x282u, v5 + 1, 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v8, v7);
  }
  else
  {
    xxxSendMessageToUI(a1, a2, (__int64)a3, v5 + 1);
  }
}
