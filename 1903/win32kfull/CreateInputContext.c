/*
 * XREFs of CreateInputContext @ 0x1C0109770
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C009020C (xxxCreateDefaultImeWindow.c)
 *     NtUserCreateInputContext @ 0x1C015D780 (NtUserCreateInputContext.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall CreateInputContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int128 v15; // [rsp+30h] [rbp-38h]
  __int128 v16; // [rsp+40h] [rbp-28h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v6 = ThreadWin32Thread;
  if ( (*(_DWORD *)(ThreadWin32Thread + 480) & 0x2000000) != 0 )
    return 0LL;
  v7 = gpsi;
  if ( (*gpsi & 4) == 0 )
    return 0LL;
  v8 = ThreadWin32Thread + 784;
  if ( a1 )
  {
    if ( !*(_QWORD *)v8 )
      return 0LL;
  }
  v9 = *(_QWORD *)(ThreadWin32Thread + 448);
  if ( !v9 )
    return 0LL;
  LOBYTE(v7) = 17;
  v10 = (_QWORD *)HMAllocObject(ThreadWin32Thread, v9, v7);
  v11 = v10;
  if ( !v10 )
    return 0LL;
  if ( a1 )
  {
    v13 = *(_QWORD *)(*(_QWORD *)v8 + 56LL);
    if ( v13 )
      *(_QWORD *)(v10[5] + 16LL) = *(_QWORD *)(v13 + 48);
    else
      *(_QWORD *)(v10[5] + 16LL) = 0LL;
    v10[7] = v13;
    v14 = *(_QWORD *)v8;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v8 + 40LL) + 16LL) = v10[6];
    *(_QWORD *)(v14 + 56) = v10;
  }
  else
  {
    *(_QWORD *)&v15 = v8;
    *((_QWORD *)&v15 + 1) = v10;
    v16 = v15;
    HMAssignmentLock(&v16);
    *(_QWORD *)(*(_QWORD *)(v6 + 472) + 256LL) = v11[6];
    *(_QWORD *)(v11[5] + 16LL) = 0LL;
    v11[7] = 0LL;
  }
  *(_QWORD *)(v11[5] + 24LL) = a1;
  return v11;
}
