/*
 * XREFs of xxxFocusSetInputContext @ 0x1C0014208
 * Callers:
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C0013280 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0013EE4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E1708 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00835BC (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 */

__int64 __fastcall xxxFocusSetInputContext(__int64 *a1, int a2, int a3)
{
  __int64 result; // rax
  __int64 v7; // rdx
  struct tagWND *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+30h] [rbp-28h] BYREF
  struct tagWND *v15; // [rsp+38h] [rbp-20h]
  __int64 v16; // [rsp+40h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  result = a1[17];
  v7 = *(_QWORD *)(result + 8);
  if ( (*(_BYTE *)(v7 + 10) & 1) == 0 )
  {
    result = *(unsigned __int16 *)(gpsi + 898LL);
    if ( *(_WORD *)v7 != (_WORD)result )
    {
      result = a1[2];
      v8 = *(struct tagWND **)(result + 776);
      if ( v8 )
      {
        result = *(unsigned int *)(result + 480);
        if ( (result & 1) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v14 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
          v15 = v8;
          HMLockObject(v8);
          v10 = *a1;
          if ( a3 )
            QueueNotifyTransformableMessage(v8, 0x287u, 24LL - (a2 != 0), v10, 0, 0);
          else
            xxxSendMessage(v8, 647LL, 24LL - (a2 != 0), v10);
          return ThreadUnlock1(v12, v11, v13);
        }
      }
    }
  }
  return result;
}
