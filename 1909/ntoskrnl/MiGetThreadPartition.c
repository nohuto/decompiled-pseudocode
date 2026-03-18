/*
 * XREFs of MiGetThreadPartition @ 0x14013E08C
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     MiResolveMemoryEvent @ 0x1406F1E80 (MiResolveMemoryEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140465E88 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1454LL));
}
