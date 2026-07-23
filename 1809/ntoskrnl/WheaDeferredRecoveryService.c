/*
 * XREFs of WheaDeferredRecoveryService @ 0x140320EB0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 */

__int64 WheaDeferredRecoveryService()
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange(&WheaPendingDrsInterrupt, 0);
  if ( (_DWORD)result == 1 )
    return KiInsertQueueDpc((ULONG_PTR)&WheapDispatchPtr.Dpc.DeferredRoutine, 0LL, 0LL, 0LL, 0);
  return result;
}
