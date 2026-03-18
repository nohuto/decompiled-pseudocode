/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x1C003AD98
 * Callers:
 *     xxxDestroyWindow @ 0x1C0035BC0 (xxxDestroyWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C003AD98 (xxxDW_SendDestroyMessages.c)
 * Callees:
 *     xxxDW_SendDestroyMessages @ 0x1C003AD98 (xxxDW_SendDestroyMessages.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C003AF40 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C003C880 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxDisownClipboard @ 0x1C00FF454 (xxxDisownClipboard.c)
 */

void __fastcall xxxDW_SendDestroyMessages(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+20h] [rbp-30h] BYREF
  __int64 v16; // [rsp+28h] [rbp-28h]
  __int64 v17; // [rsp+30h] [rbp-20h]
  __int64 v18; // [rsp+38h] [rbp-18h] BYREF
  __int64 v19; // [rsp+40h] [rbp-10h]
  __int64 v20; // [rsp+48h] [rbp-8h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  xxxMoveFocusAway((const struct tagWND *)a1);
  v4 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v3, v2) + 664);
  if ( v4 && a1 == *(_QWORD *)(v4 + 80) )
  {
    xxxDisownClipboard(a1);
  }
  else if ( grpWinStaList && a1 == *(_QWORD *)(grpWinStaList + 80LL) )
  {
    HMAssignmentUnlock(grpWinStaList + 80LL);
  }
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) & 4) != 0 )
  {
    xxxSendMessage(a1, 626LL, 0LL, 0LL);
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) &= ~4u;
  }
  xxxSendMessage(a1, 2LL, 0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 112);
  if ( v5 )
  {
    do
    {
      v6 = *(_QWORD *)(v5 + 88);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v15 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v15;
      v16 = v6;
      if ( v6 )
        HMLockObject(v6);
      v8 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v18 = *(_QWORD *)(v8 + 408);
      *(_QWORD *)(v8 + 408) = &v18;
      v19 = v5;
      HMLockObject(v5);
      xxxDW_SendDestroyMessages(v5);
      ThreadUnlock1(v10, v9, v11);
      v5 = v6;
    }
    while ( ThreadUnlock1(v13, v12, v14) && v6 );
  }
  xxxMoveFocusAway((const struct tagWND *)a1);
}
