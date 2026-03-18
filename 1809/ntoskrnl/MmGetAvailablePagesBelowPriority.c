/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x140137D64
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x140666580 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x140030FC4 (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD **)(qword_14043A748
                      + 8LL * *((unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].SecureState.Flags + 3)),
           a1);
}
