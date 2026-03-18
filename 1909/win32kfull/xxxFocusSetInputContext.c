/*
 * XREFs of xxxFocusSetInputContext @ 0x1C0132D68
 * Callers:
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C0132A44 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C01354CC (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01E1588 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C0011538 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall xxxFocusSetInputContext(__int64 *a1, int a2, __int64 a3)
{
  int v4; // ebp
  __int64 result; // rax
  __int64 v7; // rdx
  struct tagWND *v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  struct tagWND *v14; // [rsp+38h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-18h]

  v13 = 0LL;
  v4 = a3;
  v14 = 0LL;
  v15 = 0LL;
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
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, a3);
          v13 = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = &v13;
          v14 = v8;
          HMLockObject(v8);
          if ( v4 )
            QueueNotifyTransformableMessage(v8, 0x287u, 24LL - (a2 != 0), *a1, 0, 0);
          else
            xxxSendMessage((ULONG_PTR)v8);
          return ThreadUnlock1(v11, v10, v12);
        }
      }
    }
  }
  return result;
}
