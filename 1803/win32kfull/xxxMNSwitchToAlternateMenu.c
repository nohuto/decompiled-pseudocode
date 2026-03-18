/*
 * XREFs of xxxMNSwitchToAlternateMenu @ 0x1C01E945C
 * Callers:
 *     xxxHandleMenuMessages @ 0x1C01E2BFC (xxxHandleMenuMessages.c)
 *     xxxMNChar @ 0x1C01E5D78 (xxxMNChar.c)
 *     xxxMNKeyDown @ 0x1C01E6E10 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C01E7844 (xxxMNMouseMove.c)
 *     xxxMNKeyFilter @ 0x1C0206EB8 (xxxMNKeyFilter.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C001E870 (xxxWindowEvent.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxMNSelectItem @ 0x1C01E8994 (xxxMNSelectItem.c)
 */

__int64 __fastcall xxxMNSwitchToAlternateMenu(__int64 **a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 *v10; // rax
  __int64 v11; // rax
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD v16[2]; // [rsp+38h] [rbp-19h] BYREF
  __int128 v17; // [rsp+48h] [rbp-9h]
  __int128 v18; // [rsp+58h] [rbp+7h]
  __int128 v19; // [rsp+68h] [rbp+17h] BYREF
  __int128 v20; // [rsp+78h] [rbp+27h] BYREF
  _QWORD v21[4]; // [rsp+88h] [rbp+37h] BYREF
  __int64 v22; // [rsp+B8h] [rbp+67h] BYREF

  v22 = 0LL;
  if ( (*(_DWORD *)**a1 & 1) == 0 || !*(_QWORD *)(**a1 + 48) || (*(_DWORD *)**a1 & 0x8000) != 0 || !a2 )
    return 0LL;
  v4 = *(_QWORD *)(**a1 + 8);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v21[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v21;
  v21[1] = v4;
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  xxxMNSelectItem(a1, a2, -1);
  v8 = **a1;
  if ( !*(_QWORD *)(v8 + 48) )
  {
    ThreadUnlock1(v8, v6, v7);
    return 0LL;
  }
  v10 = *a1;
  v16[0] = &v22;
  v16[1] = *(_QWORD *)(*v10 + 48);
  HMAssignmentLock(v16);
  v11 = *(_QWORD *)(**a1 + 40);
  *(_QWORD *)&v17 = **a1 + 48;
  *((_QWORD *)&v17 + 1) = v11;
  v19 = v17;
  HMAssignmentLock(&v19);
  *(_QWORD *)&v18 = **a1 + 40;
  *((_QWORD *)&v18 + 1) = v22;
  v20 = v18;
  HMAssignmentLock(&v20);
  HMAssignmentUnlock(&v22);
  if ( !*(_QWORD *)(**a1 + 8) || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 30LL) & 8) != 0 )
  {
    if ( *(_QWORD *)(**a1 + 8) && *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 136LL) )
    {
      v12 = 0;
      if ( *(_QWORD *)(*(_QWORD *)(**a1 + 8) + 136LL) == *(_QWORD *)(**a1 + 40) )
        v12 = 2;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 8) & 0xFFFFFFFD | v12;
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
  xxxWindowEvent(5u, *(_QWORD *)(**a1 + 8), ~(*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  xxxWindowEvent(4u, *(_QWORD *)(**a1 + 8), (*(_DWORD *)**a1 >> 1) | 0xFFFFFFFD, 0, 0);
  ThreadUnlock1(v14, v13, v15);
  return 1LL;
}
