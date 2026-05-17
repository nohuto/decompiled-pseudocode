/*
 * XREFs of TppAdjustRunningThreadGoalWithLock @ 0x18010EC4C
 * Callers:
 *     TppGetCurrentThreadNumaNode @ 0x180031620 (TppGetCurrentThreadNumaNode.c)
 *     TpPostTask @ 0x1800318A8 (TpPostTask.c)
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     TppWorkPost @ 0x180038510 (TppWorkPost.c)
 *     TpStartAsyncIoOperation @ 0x180062A70 (TpStartAsyncIoOperation.c)
 *     TpSetPoolThreadCpuSets @ 0x18010EBA0 (TpSetPoolThreadCpuSets.c)
 * Callees:
 *     TppPoolUpdateNodeRelation @ 0x1800634C0 (TppPoolUpdateNodeRelation.c)
 *     NtSetInformationWorkerFactory @ 0x1800A01A0 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TppAdjustRunningThreadGoalWithLock(unsigned int *a1)
{
  unsigned int v2; // r8d
  __int64 result; // rax
  __int16 v4; // r9
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  signed __int64 v7; // [rsp+38h] [rbp+10h]

  if ( !a1 || (v2 = a1[110]) == 0 )
    v2 = MEMORY[0x7FFE03C0];
  result = a1[106];
  if ( v2 != (_DWORD)result )
  {
    a1[106] = v2;
    v4 = v2 - result;
    _m_prefetchw(a1 + 2);
    v5 = *((_QWORD *)a1 + 1);
    v7 = v5;
    do
    {
      LODWORD(v7) = (unsigned __int16)(v7 ^ (v7 + v4)) ^ (unsigned int)v7;
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)a1 + 1, v7, v5);
      v7 = v5;
    }
    while ( v6 != v5 );
    NtSetInformationWorkerFactory();
    return TppPoolUpdateNodeRelation((__int64)a1);
  }
  return result;
}
