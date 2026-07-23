/*
 * XREFs of PopWnfUserAwayPredictionCallback @ 0x14086A230
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140566370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140566690 (PopAcquirePolicyLock.c)
 *     ExQueryWnfStateData @ 0x1406C9520 (ExQueryWnfStateData.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x140878A2C (PopUpdateSmartUserPresencePredictions.c)
 */

__int64 __fastcall PopWnfUserAwayPredictionCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-18h] BYREF
  __int64 v4; // [rsp+28h] [rbp-10h] BYREF
  int v5; // [rsp+58h] [rbp+20h] BYREF

  v3 = 8;
  v1 = ExQueryWnfStateData(a1, &v5, &v4, &v3);
  if ( v1 >= 0 )
  {
    if ( v3 >= 8 )
    {
      PopAcquirePolicyLock();
      PopUpdateSmartUserPresencePredictions(v4, 3LL);
      PopReleasePolicyLock();
    }
    else
    {
      return 0;
    }
  }
  return (unsigned int)v1;
}
