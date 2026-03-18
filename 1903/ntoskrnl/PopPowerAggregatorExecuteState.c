/*
 * XREFs of PopPowerAggregatorExecuteState @ 0x1408B2A8C
 * Callers:
 *     PopPowerAggregatorWorker @ 0x1408B2E60 (PopPowerAggregatorWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopDiagSnapAggregatorState @ 0x1408AD1F8 (PopDiagSnapAggregatorState.c)
 *     PopDiagTracePowerAggregatorSessionBegin @ 0x1408B04B4 (PopDiagTracePowerAggregatorSessionBegin.c)
 *     PopDiagTracePowerAggregatorSessionEnd @ 0x1408B05B8 (PopDiagTracePowerAggregatorSessionEnd.c)
 *     PopPowerAggregatorEvaluateAggressiveStandbyActions @ 0x1408B2948 (PopPowerAggregatorEvaluateAggressiveStandbyActions.c)
 *     PopNetCheckOpportunisticDs @ 0x1408B3EA4 (PopNetCheckOpportunisticDs.c)
 */

__int64 __fastcall PopPowerAggregatorExecuteState(_DWORD *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // r8d
  unsigned int v8; // ebx
  int v9; // edi
  unsigned int v10; // r14d
  unsigned int *v11; // rdi
  int v12; // ecx
  __int64 v14; // [rsp+40h] [rbp+20h] BYREF

  v14 = 0LL;
  PopAcquirePolicyLock();
  v6 = HIDWORD(v14);
  if ( byte_140443B0D )
  {
    v6 = HIDWORD(v14) | 1u;
    HIDWORD(v14) |= 1u;
  }
  LODWORD(v14) = dword_140443B1C;
  if ( dword_140443B18 )
  {
    v6 = (unsigned int)v6 | 2;
    HIDWORD(v14) = v6;
  }
  if ( (unsigned __int8)PopNetCheckOpportunisticDs(v5, v4, v6) )
  {
    v7 |= 4u;
    HIDWORD(v14) = v7;
  }
  v8 = 8;
  if ( (v7 & 2) == 0 || (v7 & 4) != 0 )
    HIDWORD(v14) = v7 | 8;
  PopReleasePolicyLock();
  v9 = 0;
  v10 = a1[1];
  if ( !*a1 )
  {
LABEL_15:
    v8 = 1;
    if ( v9 < 0 )
      goto LABEL_31;
    goto LABEL_16;
  }
  if ( *a1 == 1 )
  {
    v12 = 2;
    if ( (v14 & 0x800000000LL) != 0 )
    {
      v12 = 4;
      if ( (v14 & 0x100000000LL) == 0 && (_DWORD)v14 == 1 )
        v12 = 6;
    }
    v8 = v12 + 1;
    if ( a1[3] != 2 )
      v8 = v12;
  }
  else if ( *a1 != 2 )
  {
    if ( *a1 != 3 )
    {
      v9 = -1073741823;
      goto LABEL_15;
    }
    v8 = 1;
  }
LABEL_16:
  PopDiagTracePowerAggregatorSessionBegin(a2, v10, v8, (__int64)&v14);
  if ( v8 != 1 )
    PopDiagSnapAggregatorState(a1[2], v8);
  v11 = (unsigned int *)((char *)&PopPowerAggregatorActionContexts + 16 * v8);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( DWORD1(xmmword_1404391AC) == v8 )
  {
    PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
    v9 = 0;
  }
  else
  {
    ++PopPowerAggregatorContext;
    DWORD1(xmmword_1404391AC) = v8;
    LODWORD(xmmword_1404391AC) = v10;
    PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
    if ( qword_14046BDF0 )
      qword_14046BDF0(*v11);
    PopPowerAggregatorEvaluateAggressiveStandbyActions(v8, (__int64)&v14);
    v9 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))v11 + 1))(v8, v10, &v14);
  }
LABEL_31:
  PopDiagTracePowerAggregatorSessionEnd(a2, v9);
  return (unsigned int)v9;
}
