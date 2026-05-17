/*
 * XREFs of sub_1800318A8 @ 0x1800318A8
 * Callers:
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 *     sub_180032F0C @ 0x180032F0C (sub_180032F0C.c)
 *     sub_180079F40 @ 0x180079F40 (sub_180079F40.c)
 * Callees:
 *     sub_180031A38 @ 0x180031A38 (sub_180031A38.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     ZwReleaseWorkerFactoryWorker @ 0x18009F3F0 (ZwReleaseWorkerFactoryWorker.c)
 *     sub_18010EB1C @ 0x18010EB1C (sub_18010EB1C.c)
 */

signed __int64 __fastcall sub_1800318A8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  int v6; // r10d
  __int64 *v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rsi
  __int64 **v10; // rax
  int v11; // eax
  __int64 v12; // r8
  __int64 *ThreadPoolData; // rax
  __int64 v14; // rax
  signed __int64 result; // rax
  __int64 v16; // rdx
  signed __int64 v17; // rtt
  signed __int64 v18; // [rsp+30h] [rbp+8h]

  v4 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
      v4 = qword_180166458;
    else
      v4 = qword_180166470;
  }
  sub_180031A38(v4, *(unsigned int *)(a1 + 8));
  v7 = (__int64 *)(a1 + 16);
  v9 = *(_QWORD *)(v4 + 8LL * v6 + 16) + 24 * v8;
  RtlAcquireSRWLockExclusive(v9 + 16);
  v10 = *(__int64 ***)(v9 + 8);
  if ( *v10 != (__int64 *)v9 )
    __fastfail(3u);
  *v7 = v9;
  v7[1] = (__int64)v10;
  *v10 = v7;
  *(_QWORD *)(v9 + 8) = v7;
  RtlReleaseSRWLockExclusive(v9 + 16);
  if ( !v4 || (v11 = *(_DWORD *)(v4 + 440)) == 0 )
    v11 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v4 + 424) != v11 )
  {
    RtlAcquireSRWLockExclusive(v4 + 72);
    sub_18010EB1C(v4);
    RtlReleaseSRWLockExclusive(v4 + 72);
  }
  v12 = 0LL;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v14 = *ThreadPoolData;
    if ( *(_QWORD *)(v14 + 48) == v4 && *(_DWORD *)(v14 + 128) == 3 )
    {
      *(_DWORD *)(v14 + 128) = 4;
      v12 = 1LL;
    }
  }
  _m_prefetchw((const void *)(v4 + 8));
  result = *(_QWORD *)(v4 + 8);
  LODWORD(v18) = result;
  do
  {
    if ( (v18 & 0xFFFF0000) != 0 || (_DWORD)v12 )
    {
      v16 = 0LL;
    }
    else
    {
      LODWORD(v18) = (unsigned __int16)v18 | ((v18 & 0xFFFF0000) + 0x10000);
      v16 = 1LL;
    }
    v17 = result;
    HIDWORD(v18) = HIDWORD(result) + 1;
    result = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8), v18, result);
    LODWORD(v18) = result;
  }
  while ( v17 != result );
  if ( (_DWORD)v16 )
    return ZwReleaseWorkerFactoryWorker(*(_QWORD *)(v4 + 56), v16, v12, 4294901760LL);
  return result;
}
