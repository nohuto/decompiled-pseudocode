/*
 * XREFs of PopPowerAggregatorWorker @ 0x140877170
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     PopDiagTracePowerAggregatorCompletionEvent @ 0x1408748C4 (PopDiagTracePowerAggregatorCompletionEvent.c)
 *     PopDiagTracePowerAggregatorSessionBegin @ 0x140874BCC (PopDiagTracePowerAggregatorSessionBegin.c)
 *     PopDiagTracePowerAggregatorSessionEnd @ 0x140874CE0 (PopDiagTracePowerAggregatorSessionEnd.c)
 *     PopPowerAggregatorMapRequest @ 0x140876ED8 (PopPowerAggregatorMapRequest.c)
 *     PopPowerAggregatorSelectRequest @ 0x140876F34 (PopPowerAggregatorSelectRequest.c)
 *     PopPowerAggregatorValidateAction @ 0x1408770C8 (PopPowerAggregatorValidateAction.c)
 *     PopNetCheckOpportunisticDs @ 0x140877E34 (PopNetCheckOpportunisticDs.c)
 */

void PopPowerAggregatorWorker()
{
  int v0; // eax
  unsigned int v1; // ebx
  __int64 v2; // rdi
  int v3; // ebx
  unsigned int v4; // [rsp+20h] [rbp-40h] BYREF
  __int64 v5; // [rsp+28h] [rbp-38h] BYREF
  _DWORD v6[2]; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+38h] [rbp-28h]
  int v8[4]; // [rsp+40h] [rbp-20h] BYREF

  v7 = 0;
  PopAcquirePolicyLock();
  v6[0] = (unsigned __int8)byte_1404191CD;
  v6[1] = dword_1404191DC;
  if ( !dword_1404191D8 || (LOBYTE(v7) = 0, (unsigned __int8)PopNetCheckOpportunisticDs()) )
    LOBYTE(v7) = 1;
  PopReleasePolicyLock();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v5 = PopPowerAggregatorWork;
  LODWORD(PopPowerAggregatorWork) = PopPowerAggregatorWork + 1;
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorRequestQueueLock);
  if ( dword_140411908 )
  {
    PopPowerAggregatorSelectRequest((int *)&v5, (__int64)v8);
    PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorRequestQueueLock);
    v0 = PopPowerAggregatorMapRequest((__int64)&v5, v8);
    v4 = v0;
    if ( v0 != HIDWORD(PopPowerAggregatorWork) )
    {
      if ( v0 )
      {
        PopDiagTracePowerAggregatorSessionBegin(v5, (__int64)v8, v0, v6);
        if ( !(unsigned int)PopPowerAggregatorValidateAction((int *)&v5, (int *)&v4) )
        {
          v1 = v4;
          if ( v4 )
          {
            v2 = 3LL * (int)v4;
            dword_1404119E8 = v8[2];
            HIDWORD(PopPowerAggregatorWork) = v4;
            if ( (unsigned int)(v8[0] - 2) <= 1 )
            {
              _InterlockedExchange(&PopPowerAggregatorLatestModernStandbyIntent, v8[0]);
              v1 = v4;
            }
            if ( qword_1404410A0 )
              qword_1404410A0(*((unsigned int *)&PopPowerAggregatorActionContexts + 6 * (int)v4));
            v3 = (*((__int64 (__fastcall **)(__int64 *, _QWORD))&PopPowerAggregatorActionContexts + v2 + 1))(&v5, v1);
            PopDiagTracePowerAggregatorCompletionEvent(v5, v3);
            PopDiagTracePowerAggregatorSessionEnd(v5, v3);
          }
        }
      }
    }
  }
  else
  {
    PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorRequestQueueLock);
  }
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorRequestQueueLock);
  if ( dword_140411908 )
    ExQueueWorkItem(&PopPowerAggregatorWorkItem, DelayedWorkQueue);
  else
    PopPowerAggregatorRequestQueue[0] = 0;
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorRequestQueueLock);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
