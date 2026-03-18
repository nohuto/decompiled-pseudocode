/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x1C0099FC8
 * Callers:
 *     xxxDestroyWindow @ 0x1C0094E90 (xxxDestroyWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0099FC8 (xxxDW_SendDestroyMessages.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0099FC8 (xxxDW_SendDestroyMessages.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C009A170 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C009BAB0 (xxxSendMessage.c)
 *     xxxDisownClipboard @ 0x1C0125564 (xxxDisownClipboard.c)
 */

void __fastcall xxxDW_SendDestroyMessages(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // [rsp+20h] [rbp-30h] BYREF
  __int64 v22; // [rsp+28h] [rbp-28h]
  __int64 v23; // [rsp+30h] [rbp-20h]
  __int64 v24; // [rsp+38h] [rbp-18h] BYREF
  __int64 v25; // [rsp+40h] [rbp-10h]
  __int64 v26; // [rsp+48h] [rbp-8h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
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
  v8 = *(_QWORD *)(a1 + 112);
  if ( v8 )
  {
    do
    {
      v9 = *(_QWORD *)(v8 + 88);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
      v21 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v21;
      v22 = v9;
      if ( v9 )
        HMLockObject(v9);
      v14 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13);
      v24 = *(_QWORD *)(v14 + 408);
      *(_QWORD *)(v14 + 408) = &v24;
      v25 = v8;
      HMLockObject(v8);
      xxxDW_SendDestroyMessages(v8);
      ThreadUnlock1(v16, v15, v17);
      v8 = v9;
    }
    while ( ThreadUnlock1(v19, v18, v20) && v9 );
  }
  xxxMoveFocusAway((const struct tagWND *)a1);
}
