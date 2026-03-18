/*
 * XREFs of xxxMNSwitchToAlternateMenu @ 0x1C0226C44
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C021FF24 (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C0223248 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C0224370 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C0224DD8 (xxxMNMouseMove.c)
 *     xxxMNKeyFilter @ 0x1C024850C (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C004D110 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxMNSelectItem @ 0x1C0226024 (xxxMNSelectItem.c)
 */

__int64 __fastcall xxxMNSwitchToAlternateMenu(__int64 **a1, __int64 a2)
{
  _DWORD *v4; // r8
  __int64 v5; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v15; // [rsp+38h] [rbp-29h]
  __int128 v16; // [rsp+48h] [rbp-19h]
  __int128 v17; // [rsp+58h] [rbp-9h]
  __int128 v18; // [rsp+68h] [rbp+7h] BYREF
  __int128 v19; // [rsp+78h] [rbp+17h] BYREF
  __int128 v20; // [rsp+88h] [rbp+27h] BYREF
  __int64 v21; // [rsp+98h] [rbp+37h] BYREF
  __int64 v22; // [rsp+A0h] [rbp+3Fh]
  __int64 v23; // [rsp+A8h] [rbp+47h]
  __int64 v24; // [rsp+C8h] [rbp+67h] BYREF

  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v4 = (_DWORD *)**a1;
  if ( (*v4 & 1) == 0 || !*(_QWORD *)(**a1 + 48) || (*(_DWORD *)**a1 & 0x8000) != 0 || !a2 )
    return 0LL;
  v5 = *(_QWORD *)(**a1 + 8);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, (__int64)v4);
  v21 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v21;
  v22 = v5;
  if ( v5 )
    HMLockObject(v5);
  xxxMNSelectItem(a1, a2, -1);
  v9 = **a1;
  if ( !*(_QWORD *)(v9 + 48) )
  {
    ThreadUnlock1(v9, v7, v8);
    return 0LL;
  }
  *(_QWORD *)&v15 = &v24;
  *((_QWORD *)&v15 + 1) = *(_QWORD *)(**a1 + 48);
  v18 = v15;
  HMAssignmentLock(&v18);
  *(_QWORD *)&v16 = **a1 + 48;
  *((_QWORD *)&v16 + 1) = *(_QWORD *)(**a1 + 40);
  v19 = v16;
  HMAssignmentLock(&v19);
  *(_QWORD *)&v17 = **a1 + 40;
  *((_QWORD *)&v17 + 1) = v24;
  v20 = v17;
  HMAssignmentLock(&v20);
  HMAssignmentUnlock(&v24);
  if ( !*(_QWORD *)(**a1 + 8) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 160LL) )
    {
      v11 = 0;
      if ( *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 160LL) == *(_QWORD *)(**a1 + 40) )
        v11 = 2;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 8) & 0xFFFFFFFD | v11;
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
  xxxWindowEvent(5u, *(struct tagWND **)(**a1 + 8), ~(*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  xxxWindowEvent(4u, *(struct tagWND **)(**a1 + 8), (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  ThreadUnlock1(v13, v12, v14);
  return 1LL;
}
