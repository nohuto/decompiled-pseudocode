/*
 * XREFs of CiAllocateMemory @ 0x1C00026E0
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000ADC0 (CiTaskIndexCreate.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall CiAllocateMemory(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag((POOL_TYPE)512, NumberOfBytes, 0x74727641u);
}
