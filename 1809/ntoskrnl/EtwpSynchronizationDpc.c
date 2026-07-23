/*
 * XREFs of EtwpSynchronizationDpc @ 0x14013A690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall EtwpSynchronizationDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3)
{
  _InterlockedDecrement(a3);
}
