/*
 * XREFs of ndisInitializeStackTraces @ 0x1C00D1F4C
 * Callers:
 *     DriverEntry @ 0x1C0127870 (DriverEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN ndisInitializeStackTraces()
{
  BOOLEAN result; // al
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+30h] [rbp+8h] BYREF

  HashTable = &::HashTable;
  KeInitializeSpinLock(&ndisStackTraces);
  byte_1C00A017B = 4;
  dword_1C00A01A8 = 0;
  unk_1C00A0179 = 0;
  result = RtlCreateHashTable(&HashTable, 0, 0);
  byte_1C00A0178 = result;
  return result;
}
