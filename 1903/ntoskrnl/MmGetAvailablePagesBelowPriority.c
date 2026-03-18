/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x14009A034
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14066A190 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1400DAF6C (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD *)(qword_140466188 + 8LL
                                       * *(unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[69]),
           a1);
}
