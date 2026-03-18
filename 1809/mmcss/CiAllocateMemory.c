/*
 * XREFs of CiAllocateMemory @ 0x1C0001C00
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000B590 (CiTaskIndexCreate.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CiAllocateMemory(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag((POOL_TYPE)512, NumberOfBytes, 0x74727641u);
}
