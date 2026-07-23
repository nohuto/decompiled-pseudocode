/*
 * XREFs of PopEsWnfSubscriptionBgActivityPolicyCallback @ 0x140878B60
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ExQueryWnfStateData @ 0x1406C9520 (ExQueryWnfStateData.c)
 *     PopEsQueueStateEvaluation @ 0x14071B760 (PopEsQueueStateEvaluation.c)
 */

__int64 __fastcall PopEsWnfSubscriptionBgActivityPolicyCallback(__int64 a1)
{
  char v1; // di
  int v3; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v4[5]; // [rsp+24h] [rbp-14h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v4[0] = 4;
  if ( (int)ExQueryWnfStateData(a1, &v5, &v3, v4) >= 0 && v3 <= 2 )
  {
    v1 = 0;
    PopAcquireRwLockExclusive((ULONG_PTR)&PopEsLock);
    if ( PopEsBgActivityLimited )
    {
      if ( !v3 )
      {
        v1 = 1;
        PopEsBgActivityLimited = 0;
      }
    }
    else if ( v3 == 1 )
    {
      v1 = 1;
      PopEsBgActivityLimited = 1;
    }
    PopReleaseRwLock((ULONG_PTR)&PopEsLock);
    if ( v1 )
      PopEsQueueStateEvaluation(0);
  }
  return 0LL;
}
