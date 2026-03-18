/*
 * XREFs of IoRegisterPriorityCallback @ 0x14018A1E0
 * Callers:
 *     <none>
 * Callees:
 *     ExInitializePushLock @ 0x140082420 (ExInitializePushLock.c)
 *     ExCompareExchangeCallBack @ 0x14018A28C (ExCompareExchangeCallBack.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlpSysVolFree @ 0x1406E51F0 (RtlpSysVolFree.c)
 */

__int64 __fastcall IoRegisterPriorityCallback(KSPIN_LOCK a1, KSPIN_LOCK a2)
{
  KSPIN_LOCK *PoolWithTag; // rbx
  __int64 v5; // rsi

  if ( (*(_DWORD *)(a1 + 16) & 0x200) != 0 )
    return 3221227288LL;
  PoolWithTag = (KSPIN_LOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x62436F49u);
  if ( !PoolWithTag )
    return 3221225626LL;
  PoolWithTag[2] = (KSPIN_LOCK)PoolWithTag;
  PoolWithTag[1] = (KSPIN_LOCK)IopBoostThreadCallback;
  PoolWithTag[4] = a1;
  PoolWithTag[3] = a2;
  ExInitializePushLock(PoolWithTag);
  v5 = 0LL;
  do
  {
    if ( (unsigned __int8)ExCompareExchangeCallBack(
                            (char *)&IopUpdatePriorityCallbackRoutine + 8 * v5,
                            PoolWithTag,
                            0LL) )
    {
      _InterlockedIncrement(&IopUpdatePriorityCallbackRoutineCount);
      *(_DWORD *)(a1 + 16) |= 0x200u;
      return 0LL;
    }
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 < 8 );
  RtlpSysVolFree(PoolWithTag);
  return 3221225485LL;
}
