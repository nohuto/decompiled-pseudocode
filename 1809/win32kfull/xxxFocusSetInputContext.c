/*
 * XREFs of xxxFocusSetInputContext @ 0x1C00CE6AC
 * Callers:
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 *     ?xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z @ 0x1C00CCDB0 (-xxxDeactivate@@YAXPEAUtagTHREADINFO@@KW4DeactivateOption@@@Z.c)
 *     _anonymous_namespace_::xxxSendFocusMessages @ 0x1C00CE3B4 (_anonymous_namespace_--xxxSendFocusMessages.c)
 *     ?CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z @ 0x1C01CD1C8 (-CancelInputState@@YAXPEAUtagTHREADINFO@@K@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z @ 0x1C00CC87C (-QueueNotifyTransformableMessage@@YAXPEAUtagWND@@I_K_JHH@Z.c)
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
  _QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF

  result = a1[14];
  v6 = a2;
  v7 = *(_QWORD *)(result + 8);
  if ( (*(_BYTE *)(v7 + 10) & 1) == 0 )
  {
    result = *(unsigned __int16 *)(gpsi + 898LL);
    if ( *(_WORD *)v7 != (_WORD)result )
    {
      result = a1[2];
      v8 = *(_QWORD *)(result + 784);
      if ( v8 )
      {
        result = *(unsigned int *)(result + 488);
        if ( (result & 1) == 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
          v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v12;
          v12[1] = v8;
          _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
          if ( a3 )
            QueueNotifyTransformableMessage((struct tagWND *)v8, 0x287u, 24LL - (v6 != 0), *a1, 0, 0);
          else
            xxxSendMessage(v8);
          return ThreadUnlock1(v11, v10);
        }
      }
    }
  }
  return result;
}
