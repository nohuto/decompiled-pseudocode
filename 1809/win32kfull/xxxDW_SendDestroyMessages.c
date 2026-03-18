/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x1C001B950
 * Callers:
 *     xxxDW_SendDestroyMessages @ 0x1C001B950 (xxxDW_SendDestroyMessages.c)
 *     xxxDestroyWindow @ 0x1C001BB70 (xxxDestroyWindow.c)
 * Callees:
 *     xxxDW_SendDestroyMessages @ 0x1C001B950 (xxxDW_SendDestroyMessages.c)
 *     ?xxxMoveFocusAway@@YAXPEBUtagWND@@@Z @ 0x1C001BAC0 (-xxxMoveFocusAway@@YAXPEBUtagWND@@@Z.c)
 *     xxxSendMessage @ 0x1C002CE20 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxDisownClipboard @ 0x1C00E021C (xxxDisownClipboard.c)
 */

void __fastcall xxxDW_SendDestroyMessages(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v12[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF

  xxxMoveFocusAway((const struct tagWND *)a1);
  v3 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v2) + 672);
  if ( v3 && a1 == *(_QWORD *)(v3 + 80) )
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
  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
  {
    do
    {
      v5 = *(_QWORD *)(v4 + 64);
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v12;
      v12[1] = v5;
      if ( v5 )
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      v7 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v13[0] = *(_QWORD *)(v7 + 416);
      *(_QWORD *)(v7 + 416) = v13;
      v13[1] = v4;
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      xxxDW_SendDestroyMessages(v4);
      ThreadUnlock1(v9, v8);
      v4 = v5;
    }
    while ( ThreadUnlock1(v11, v10) && v5 );
  }
  xxxMoveFocusAway((const struct tagWND *)a1);
}
