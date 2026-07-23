/*
 * XREFs of PsAllocSiloContextSlot @ 0x140729A00
 * Callers:
 *     <none>
 * Callees:
 *     PspStorageAllocSlot @ 0x140729B28 (PspStorageAllocSlot.c)
 */

__int64 __fastcall PsAllocSiloContextSlot(__int64 a1, __int64 a2)
{
  return PspStorageAllocSlot(a2);
}
