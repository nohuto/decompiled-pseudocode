/*
 * XREFs of TppAdjustRunningThreadGoal @ 0x180110414
 * Callers:
 *     TpPostTask @ 0x1800159A0 (TpPostTask.c)
 *     TppWorkerFindTask @ 0x180015BF4 (TppWorkerFindTask.c)
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 *     TppGetCurrentThreadNumaNode @ 0x18002E53C (TppGetCurrentThreadNumaNode.c)
 *     TpStartAsyncIoOperation @ 0x180031190 (TpStartAsyncIoOperation.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     TppPoolUpdateNodeRelation @ 0x180030CB0 (TppPoolUpdateNodeRelation.c)
 *     NtSetInformationWorkerFactory @ 0x1800A35F0 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TppAdjustRunningThreadGoal(__int64 a1)
{
  unsigned int v1; // edi
  int v3; // eax
  __int16 v4; // r8
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  bool v7; // cf
  int v8; // edi
  void *v9; // rcx
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v11; // [rsp+38h] [rbp+10h]

  v1 = MEMORY[0x7FFE03C0];
  RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
  v3 = *(_DWORD *)(a1 + 424);
  if ( v1 != v3 )
  {
    *(_DWORD *)(a1 + 424) = v1;
    v4 = v1 - v3;
    _m_prefetchw((const void *)(a1 + 8));
    v5 = *(_QWORD *)(a1 + 8);
    v11 = v5;
    do
    {
      LODWORD(v11) = v5 ^ (unsigned __int16)(v5 ^ (v5 + v4));
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v11, v5);
      v11 = v5;
    }
    while ( v6 != v5 );
    v7 = v1 < 4;
    v8 = v1 + 1;
    if ( v7 )
      v8 = 4;
    v9 = *(void **)(a1 + 56);
    WorkerFactoryInformation = v8;
    NtSetInformationWorkerFactory(v9, WorkerFactoryAdjustThreadGoal, &WorkerFactoryInformation, 4u);
    TppPoolUpdateNodeRelation(a1);
  }
  RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 72));
}
