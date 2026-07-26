/*
 * XREFs of ndisInitializeStackTraces @ 0x1C010B8DC
 * Callers:
 *     DriverEntry @ 0x1C0144AD0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

BOOLEAN ndisInitializeStackTraces()
{
  BOOLEAN result; // al
  PRTL_DYNAMIC_HASH_TABLE HashTable; // [rsp+30h] [rbp+8h] BYREF

  HashTable = &::HashTable;
  KeInitializeSpinLock(&ndisStackTraces);
  byte_1C00E621B = 4;
  dword_1C00E6248 = 0;
  unk_1C00E6219 = 0;
  result = RtlCreateHashTable(&HashTable, 0, 0);
  byte_1C00E6218 = result;
  return result;
}
