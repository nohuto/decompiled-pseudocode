/*
 * XREFs of PopFxEmergencyWorker @ 0x14078C950
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x140012880 (KeSetActualBasePriorityThread.c)
 *     PopFxProcessWorkPool @ 0x1405B1E30 (PopFxProcessWorkPool.c)
 */

NTSTATUS __fastcall PopFxEmergencyWorker(unsigned __int64 a1)
{
  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 16LL);
  return PopFxProcessWorkPool(a1, 0xFFFFFFFF);
}
