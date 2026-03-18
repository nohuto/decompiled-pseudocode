/*
 * XREFs of CreateInputContext @ 0x1C00FFCE0
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C00AD260 (xxxCreateDefaultImeWindow.c)
 *     NtUserCreateInputContext @ 0x1C01570E0 (NtUserCreateInputContext.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall CreateInputContext(__int64 a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rsi
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _QWORD v14[5]; // [rsp+30h] [rbp-28h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v4 = ThreadWin32Thread;
  if ( (*(_DWORD *)(ThreadWin32Thread + 488) & 0x2000000) != 0 )
    return 0LL;
  v5 = gpsi;
  if ( (*gpsi & 4) == 0 )
    return 0LL;
  v6 = 0LL;
  if ( a1 )
  {
    if ( !*(_QWORD *)(ThreadWin32Thread + 792) )
      return 0LL;
  }
  v7 = *(_QWORD *)(ThreadWin32Thread + 456);
  if ( !v7 )
    return 0LL;
  LOBYTE(v5) = 17;
  v8 = (_QWORD *)HMAllocObject(ThreadWin32Thread, v7, v5, 72LL);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = v4 + 792;
  if ( a1 )
  {
    v12 = *(_QWORD *)(*(_QWORD *)v10 + 56LL);
    if ( v12 )
      v6 = *(_QWORD *)(v12 + 48);
    *(_QWORD *)(v8[5] + 16LL) = v6;
    v8[7] = v12;
    v13 = *(_QWORD *)v10;
    *(_QWORD *)(*(_QWORD *)(v13 + 40) + 16LL) = v8[6];
    *(_QWORD *)(v13 + 56) = v8;
  }
  else
  {
    v14[0] = v4 + 792;
    v14[1] = v8;
    HMAssignmentLock(v14);
    *(_QWORD *)(*(_QWORD *)(v4 + 480) + 256LL) = v9[6];
    *(_QWORD *)(v9[5] + 16LL) = 0LL;
    v9[7] = 0LL;
  }
  *(_QWORD *)(v9[5] + 24LL) = a1;
  return v9;
}
