/*
 * XREFs of MiGetThreadPartition @ 0x14013DB4C
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6DC0 (NtSetSystemInformation.c)
 *     MiResolveMemoryEvent @ 0x1406F03E0 (MiResolveMemoryEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1454LL));
}
