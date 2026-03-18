/*
 * XREFs of CreateInputContext @ 0x1C00E3D10
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C001C00C (xxxCreateDefaultImeWindow.c)
 *     NtUserCreateInputContext @ 0x1C015E730 (NtUserCreateInputContext.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall CreateInputContext(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int128 v14; // [rsp+30h] [rbp-38h]
  __int128 v15; // [rsp+40h] [rbp-28h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  v5 = ThreadWin32Thread;
  if ( (*(_DWORD *)(ThreadWin32Thread + 480) & 0x2000000) != 0 )
    return 0LL;
  v6 = gpsi;
  if ( (*gpsi & 4) == 0 )
    return 0LL;
  v7 = ThreadWin32Thread + 784;
  if ( a1 )
  {
    if ( !*(_QWORD *)v7 )
      return 0LL;
  }
  v8 = *(_QWORD *)(ThreadWin32Thread + 448);
  if ( !v8 )
    return 0LL;
  LOBYTE(v6) = 17;
  v9 = (_QWORD *)HMAllocObject(ThreadWin32Thread, v8, v6);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  if ( a1 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)v7 + 56LL);
    if ( v12 )
      *(_QWORD *)(v9[5] + 16LL) = *(_QWORD *)(v12 + 48);
    else
      *(_QWORD *)(v9[5] + 16LL) = 0LL;
    v9[7] = v12;
    v13 = *(_QWORD *)v7;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 40LL) + 16LL) = v9[6];
    *(_QWORD *)(v13 + 56) = v9;
  }
  else
  {
    *(_QWORD *)&v14 = v7;
    *((_QWORD *)&v14 + 1) = v9;
    v15 = v14;
    HMAssignmentLock(&v15);
    *(_QWORD *)(*(_QWORD *)(v5 + 472) + 256LL) = v10[6];
    *(_QWORD *)(v10[5] + 16LL) = 0LL;
    v10[7] = 0LL;
  }
  *(_QWORD *)(v10[5] + 24LL) = a1;
  return v10;
}
