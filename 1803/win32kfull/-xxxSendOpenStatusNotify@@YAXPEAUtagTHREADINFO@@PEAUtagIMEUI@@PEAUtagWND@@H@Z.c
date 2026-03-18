/*
 * XREFs of ?xxxSendOpenStatusNotify@@YAXPEAUtagTHREADINFO@@PEAUtagIMEUI@@PEAUtagWND@@H@Z @ 0x1C01ACB64
 * Callers:
 *     ?xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z @ 0x1C01AC7CC (-xxxNotifyImeShowStatus@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     ?xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z @ 0x1C01AC954 (-xxxSendMessageToUI@@YA_JPEAUtagTHREADINFO@@PEAUtagIMEUI@@I_K_J@Z.c)
 */

void __fastcall xxxSendOpenStatusNotify(PRKPROCESS **a1, struct tagIMEUI *a2, struct tagWND *a3, int a4)
{
  _BOOL8 v5; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  _QWORD v10[5]; // [rsp+50h] [rbp-28h] BYREF

  v5 = a4 != 0;
  if ( *(_DWORD *)(*((_QWORD *)a3 + 2) + 624LL) >= 0x400u && *(_QWORD *)(*((_QWORD *)a3 + 5) + 208LL) )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v10;
    v10[1] = a3;
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout((__int64 *)a3, 0x282u, (HWND)(v5 + 1), 0LL, 0, 0, 0LL, 1, 1);
    ThreadUnlock1(v8, v7, v9);
  }
  else
  {
    xxxSendMessageToUI(a1, a2, (__int64)a3, (HWND)(v5 + 1));
  }
}
