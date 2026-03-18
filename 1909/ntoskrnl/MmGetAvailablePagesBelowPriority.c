/*
 * XREFs of MmGetAvailablePagesBelowPriority @ 0x140139F40
 * Callers:
 *     PfSnAsyncPrefetchWorker @ 0x14066EA90 (PfSnAsyncPrefetchWorker.c)
 * Callees:
 *     MiGetAvailablePagesBelowPriority @ 0x1400BADEC (MiGetAvailablePagesBelowPriority.c)
 */

__int64 __fastcall MmGetAvailablePagesBelowPriority(unsigned int a1)
{
  return MiGetAvailablePagesBelowPriority(
           *(_QWORD **)(qword_140465E88
                      + 8LL * *(unsigned __int16 *)&KeGetCurrentThread()->ApcState.Process[1].Spare2[69]),
           a1);
}
