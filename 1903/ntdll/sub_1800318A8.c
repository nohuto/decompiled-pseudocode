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

int __fastcall sub_1800318A8(__int64 a1, _RTL_SRWLOCK *a2, __int64 a3, __int64 a4)
{
  _RTL_SRWLOCK *v4; // rdi
  int v6; // r10d
  _RTL_SRWLOCK **v7; // rbx
  __int64 v8; // r9
  _RTL_SRWLOCK *v9; // rsi
  _RTL_SRWLOCK **Ptr; // rax
  int v11; // eax
  int v12; // r8d
  __int64 *ThreadPoolData; // rax
  __int64 v14; // rax
  signed __int64 v15; // rax
  int v16; // edx
  signed __int64 v17; // rtt
  signed __int64 v19; // [rsp+30h] [rbp+8h]

  v4 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 56) & 2) != 0 )
      v4 = (_RTL_SRWLOCK *)qword_180166458;
    else
      v4 = (_RTL_SRWLOCK *)qword_180166470;
  }
  sub_180031A38(v4, *(unsigned int *)(a1 + 8));
  v7 = (_RTL_SRWLOCK **)(a1 + 16);
  v9 = (_RTL_SRWLOCK *)((char *)v4[v6 + 2].Ptr + 24 * v8);
  RtlAcquireSRWLockExclusive(v9 + 2);
  Ptr = (_RTL_SRWLOCK **)v9[1].Ptr;
  if ( *Ptr != v9 )
    __fastfail(3u);
  *v7 = v9;
  v7[1] = (_RTL_SRWLOCK *)Ptr;
  *Ptr = (_RTL_SRWLOCK *)v7;
  v9[1].Ptr = v7;
  RtlReleaseSRWLockExclusive(v9 + 2);
  if ( !v4 || (v11 = (int)v4[55].Ptr) == 0 )
    v11 = MEMORY[0x7FFE03C0];
  if ( LODWORD(v4[53].Ptr) != v11 )
  {
    RtlAcquireSRWLockExclusive(v4 + 9);
    sub_18010EB1C(v4);
    RtlReleaseSRWLockExclusive(v4 + 9);
  }
  v12 = 0;
  ThreadPoolData = (__int64 *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v14 = *ThreadPoolData;
    if ( *(_RTL_SRWLOCK **)(v14 + 48) == v4 && *(_DWORD *)(v14 + 128) == 3 )
    {
      *(_DWORD *)(v14 + 128) = 4;
      v12 = 1;
    }
  }
  _m_prefetchw(&v4[1]);
  v15 = (signed __int64)v4[1].Ptr;
  LODWORD(v19) = v15;
  do
  {
    if ( (v19 & 0xFFFF0000) != 0 || v12 )
    {
      v16 = 0;
    }
    else
    {
      LODWORD(v19) = (unsigned __int16)v19 | ((v19 & 0xFFFF0000) + 0x10000);
      v16 = 1;
    }
    v17 = v15;
    HIDWORD(v19) = HIDWORD(v15) + 1;
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)&v4[1], v19, v15);
    LODWORD(v19) = v15;
  }
  while ( v17 != v15 );
  if ( v16 )
    LODWORD(v15) = ZwReleaseWorkerFactoryWorker(v4[7].Ptr);
  return v15;
}
