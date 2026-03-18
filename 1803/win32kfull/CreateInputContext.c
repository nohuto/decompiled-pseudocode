/*
 * XREFs of CreateInputContext @ 0x1C00E91A0
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C005BB1C (xxxCreateDefaultImeWindow.c)
 *     NtUserCreateInputContext @ 0x1C0135FC0 (NtUserCreateInputContext.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall CreateInputContext(__int64 a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int128 v11; // [rsp+20h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  v4 = ThreadWin32Thread;
  if ( (*(_DWORD *)(ThreadWin32Thread + 480) & 0x2000000) != 0 )
    return 0LL;
  v5 = gpsi;
  if ( (*gpsi & 4) == 0 || a1 && !*(_QWORD *)(ThreadWin32Thread + 776) )
    return 0LL;
  v6 = *(_QWORD *)(ThreadWin32Thread + 448);
  if ( !v6 )
    return 0LL;
  LOBYTE(v5) = 17;
  v7 = HMAllocObject(ThreadWin32Thread, v6, v5, 72LL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  v9 = v4 + 776;
  if ( a1 )
  {
    *(_QWORD *)(v7 + 56) = *(_QWORD *)(*(_QWORD *)v9 + 56LL);
    *(_QWORD *)(*(_QWORD *)v9 + 56LL) = v7;
  }
  else
  {
    *((_QWORD *)&v11 + 1) = v7;
    *(_QWORD *)&v11 = v9;
    v12 = v11;
    HMAssignmentLock(&v12);
    *(_QWORD *)(v8 + 56) = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)(v8 + 40) + 16LL) = a1;
  return v8;
}
