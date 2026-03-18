/*
 * XREFs of xxxFocusSetInputContext @ 0x1C005EEB8
 * Callers:
 *     xxxDeactivate @ 0x1C0057EE8 (xxxDeactivate.c)
 *     xxxSendFocusMessages @ 0x1C005EBC0 (xxxSendFocusMessages.c)
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01AA8A0 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00634B4 (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
 */

__int64 __fastcall xxxFocusSetInputContext(__int64 *a1, __int64 a2, int a3)
{
  __int64 result; // rax
  int v6; // edi
  __int64 v7; // rcx
  ULONG_PTR v8; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v13[5]; // [rsp+30h] [rbp-28h] BYREF

  result = a1[14];
  v6 = a2;
  v7 = *(_QWORD *)(result + 8);
  if ( (*(_BYTE *)(v7 + 10) & 1) == 0 )
  {
    result = *(unsigned __int16 *)(gpsi + 898LL);
    if ( *(_WORD *)v7 != (_WORD)result )
    {
      result = a1[2];
      v8 = *(_QWORD *)(result + 768);
      if ( v8 )
      {
        result = *(unsigned int *)(result + 480);
        if ( (result & 1) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
          v13[0] = *(_QWORD *)(ThreadWin32Thread + 408);
          *(_QWORD *)(ThreadWin32Thread + 408) = v13;
          v13[1] = v8;
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
          if ( a3 )
            QueueNotifyTransformableMessage((struct tagWND *)v8, 0x287u, 24LL - (v6 != 0), *a1, 0, 0);
          else
            xxxSendMessage(v8);
          return ThreadUnlock1(v11, v10, v12);
        }
      }
    }
  }
  return result;
}
