/*
 * XREFs of MiGetThreadPartition @ 0x14013DC60
 * Callers:
 *     NtSetSystemInformation @ 0x140664FB0 (NtSetSystemInformation.c)
 *     MiResolveMemoryEvent @ 0x1406D30D0 (MiResolveMemoryEvent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetThreadPartition(__int64 a1)
{
  return *(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 184) + 1454LL));
}
