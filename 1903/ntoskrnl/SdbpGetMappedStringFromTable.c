/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x14074C8F4
 * Callers:
 *     SdbGetStringTagPtr @ 0x14074C878 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x14070BF64 (SdbpGetMappedTagData.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14074C944 (SdbpGetStringTableItemFromStringRef.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
