/*
 * XREFs of MiGetThreadPartition @ 0x14013DB60
 * Callers:
 *     NtSetSystemInformation @ 0x140663DF0 (NtSetSystemInformation.c)
 *     MiResolveMemoryEvent @ 0x1406D1E30 (MiResolveMemoryEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_14043A748 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1454LL));
}
