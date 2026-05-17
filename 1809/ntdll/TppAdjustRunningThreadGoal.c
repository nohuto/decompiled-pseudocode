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
 *     NtSetInformationWorkerFactory @ 0x1800A35D0 (NtSetInformationWorkerFactory.c)
 */

signed __int64 __fastcall TppAdjustRunningThreadGoal(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  int v4; // edi
  int v6; // eax
  __int16 v7; // r8
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  signed __int64 v11; // [rsp+38h] [rbp+10h]

  v4 = MEMORY[0x7FFE03C0];
  RtlAcquireSRWLockExclusive(a1 + 72, a2, a3, a4);
  v6 = *(_DWORD *)(a1 + 424);
  if ( v4 != v6 )
  {
    *(_DWORD *)(a1 + 424) = v4;
    v7 = v4 - v6;
    _m_prefetchw((const void *)(a1 + 8));
    v8 = *(_QWORD *)(a1 + 8);
    HIDWORD(v11) = HIDWORD(v8);
    do
    {
      LODWORD(v11) = v8 ^ (unsigned __int16)(v8 ^ (v8 + v7));
      v9 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8), v11, v8);
      HIDWORD(v11) = HIDWORD(v8);
    }
    while ( v9 != v8 );
    NtSetInformationWorkerFactory();
    TppPoolUpdateNodeRelation(a1);
  }
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 72));
}
