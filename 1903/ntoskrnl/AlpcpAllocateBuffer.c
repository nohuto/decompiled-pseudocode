/*
 * XREFs of AlpcpAllocateBuffer @ 0x1406E6E70
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AlpcpAllocateBuffer(POOL_TYPE a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithTag(a1, a2, a3);
}
