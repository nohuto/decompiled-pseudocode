/*
 * XREFs of TpPostTask @ 0x1800318A8
 * Callers:
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 *     TppWorkCallbackPrologRelease @ 0x180032F0C (TppWorkCallbackPrologRelease.c)
 *     TppDirectExecuteCallback @ 0x18007A5E0 (TppDirectExecuteCallback.c)
 * Callees:
 *     TppUpdatePoolNodeStatus @ 0x180031A38 (TppUpdatePoolNodeStatus.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     NtReleaseWorkerFactoryWorker @ 0x18009FBA0 (NtReleaseWorkerFactoryWorker.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18010EC4C (TppAdjustRunningThreadGoalWithLock.c)
 */

int __fastcall TpPostTask(__int64 a1, _RTL_SRWLOCK *a2, __int64 a3, __int64 a4)
{
  _RTL_SRWLOCK *v4; // rdi
  int v6; // r10d
  _RTL_SRWLOCK **v7; // rbx
  __int64 v8; // r9
  _RTL_SRWLOCK *v9; // rsi
  _RTL_SRWLOCK **Value; // rax
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
      v4 = (_RTL_SRWLOCK *)TppPoolpSerializedPool;
    else
      v4 = (_RTL_SRWLOCK *)TppPoolpGlobalPool;
  }
  TppUpdatePoolNodeStatus(v4, *(unsigned int *)(a1 + 8));
  v7 = (_RTL_SRWLOCK **)(a1 + 16);
  v9 = (_RTL_SRWLOCK *)(v4[v6 + 2].Value + 24 * v8);
  RtlAcquireSRWLockExclusive(v9 + 2);
  Value = (_RTL_SRWLOCK **)v9[1].Value;
  if ( *Value != v9 )
    __fastfail(3u);
  *v7 = v9;
  v7[1] = (_RTL_SRWLOCK *)Value;
  *Value = (_RTL_SRWLOCK *)v7;
  v9[1].Value = (unsigned __int64)v7;
  RtlReleaseSRWLockExclusive(v9 + 2);
  if ( !v4 || (v11 = (int)v4[55].0) == 0 )
    v11 = MEMORY[0x7FFE03C0];
  if ( v4[53].0 != v11 )
  {
    RtlAcquireSRWLockExclusive(v4 + 9);
    TppAdjustRunningThreadGoalWithLock(v4);
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
  v15 = v4[1].Value;
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
    LODWORD(v15) = NtReleaseWorkerFactoryWorker(v4[7].Ptr);
  return v15;
}
