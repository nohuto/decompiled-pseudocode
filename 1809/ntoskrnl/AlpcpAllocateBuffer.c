/*
 * XREFs of AlpcpAllocateBuffer @ 0x1406C61A0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall AlpcpAllocateBuffer(POOL_TYPE a1, SIZE_T a2, ULONG a3)
{
  return ExAllocatePoolWithTag(a1, a2, a3);
}
