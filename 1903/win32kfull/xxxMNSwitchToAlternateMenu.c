/*
 * XREFs of xxxMNSwitchToAlternateMenu @ 0x1C0227184
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C0220464 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C0223788 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C02248B0 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0225318 (xxxMNMouseMove.c)
 *     xxxMNKeyFilter @ 0x1C0248C4C (xxxMNKeyFilter.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     xxxWindowEvent @ 0x1C00AC2F0 (xxxWindowEvent.c)
 *     xxxMNSelectItem @ 0x1C0226564 (xxxMNSelectItem.c)
 */

__int64 __fastcall xxxMNSwitchToAlternateMenu(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // r8
  __int64 v7; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int128 v17; // [rsp+38h] [rbp-29h]
  __int128 v18; // [rsp+48h] [rbp-19h]
  __int128 v19; // [rsp+58h] [rbp-9h]
  __int128 v20; // [rsp+68h] [rbp+7h] BYREF
  __int128 v21; // [rsp+78h] [rbp+17h] BYREF
  __int128 v22; // [rsp+88h] [rbp+27h] BYREF
  __int64 v23; // [rsp+98h] [rbp+37h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+3Fh]
  __int64 v25; // [rsp+A8h] [rbp+47h]
  __int64 v26; // [rsp+C8h] [rbp+67h] BYREF

  v26 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v6 = (_DWORD *)**a1;
  if ( (*v6 & 1) == 0 || !*(_QWORD *)(**a1 + 48) || (*(_DWORD *)**a1 & 0x8000) != 0 || !a2 )
    return 0LL;
  v7 = *(_QWORD *)(**a1 + 8);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)v6, a4);
  v23 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v23;
  v24 = v7;
  if ( v7 )
    HMLockObject(v7);
  xxxMNSelectItem(a1, a2, -1);
  v11 = **a1;
  if ( !*(_QWORD *)(v11 + 48) )
  {
    ThreadUnlock1(v11, v9, v10);
    return 0LL;
  }
  *(_QWORD *)&v17 = &v26;
  *((_QWORD *)&v17 + 1) = *(_QWORD *)(**a1 + 48);
  v20 = v17;
  HMAssignmentLock(&v20);
  *(_QWORD *)&v18 = **a1 + 48;
  *((_QWORD *)&v18 + 1) = *(_QWORD *)(**a1 + 40);
  v21 = v18;
  HMAssignmentLock(&v21);
  *(_QWORD *)&v19 = **a1 + 40;
  *((_QWORD *)&v19 + 1) = v26;
  v22 = v19;
  HMAssignmentLock(&v22);
  HMAssignmentUnlock(&v26);
  if ( !*(_QWORD *)(**a1 + 8) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 160LL) )
    {
      v13 = 0;
      if ( *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 160LL) == *(_QWORD *)(**a1 + 40) )
        v13 = 2;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 8) & 0xFFFFFFFD | v13;
    }
    else
    {
      *(_DWORD *)(a2 + 8) ^= (*(_DWORD *)(a2 + 8) ^ (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 40LL) >> 6)) & 2;
    }
  }
  else
  {
    *(_DWORD *)(a2 + 8) &= ~2u;
  }
  *(_DWORD *)**a1 ^= (*(_DWORD *)**a1 ^ (2 * *(_DWORD *)(a2 + 8))) & 4;
  xxxWindowEvent(5u, *(struct tagWND **)(**a1 + 8), ~(*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0LL, 0);
  xxxWindowEvent(4u, *(struct tagWND **)(**a1 + 8), (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0LL, 0);
  ThreadUnlock1(v15, v14, v16);
  return 1LL;
}
