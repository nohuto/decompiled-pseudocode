/*
 * XREFs of xxxDW_SendDestroyMessages @ 0x1C0071D1C
 * Callers:
 *     xxxDestroyWindow @ 0x1C00711E0 (xxxDestroyWindow.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0071D1C (xxxDW_SendDestroyMessages.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSendMessage @ 0x1C003F318 (xxxSendMessage.c)
 *     xxxDW_SendDestroyMessages @ 0x1C0071D1C (xxxDW_SendDestroyMessages.c)
 *     xxxCheckFocus @ 0x1C0071E7C (xxxCheckFocus.c)
 *     xxxDisownClipboard @ 0x1C00B5724 (xxxDisownClipboard.c)
 */

__int64 __fastcall xxxDW_SendDestroyMessages(ULONG_PTR a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD v17[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v18[4]; // [rsp+38h] [rbp-20h] BYREF

  ((void (*)(void))xxxCheckFocus)();
  v3 = *(_QWORD *)(PsGetCurrentProcessWin32Process(v2) + 664);
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
    xxxSendMessage(a1);
    *(_BYTE *)(*(_QWORD *)(a1 + 40) + 234LL) &= ~4u;
  }
  xxxSendMessage(a1);
  v5 = *(_QWORD *)(a1 + 88);
  if ( v5 )
  {
    do
    {
      v7 = *(_QWORD *)(v5 + 64);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
      v17[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v17;
      v17[1] = v7;
      if ( v7 )
        _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9);
      v18[0] = *(_QWORD *)(v10 + 408);
      *(_QWORD *)(v10 + 408) = v18;
      v18[1] = v5;
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
      xxxDW_SendDestroyMessages(v5);
      ThreadUnlock1(v12, v11, v13);
      v5 = v7;
    }
    while ( ThreadUnlock1(v15, v14, v16) && v7 );
  }
  return xxxCheckFocus(a1);
}
