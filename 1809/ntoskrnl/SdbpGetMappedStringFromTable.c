/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x1407217AC
 * Callers:
 *     SdbGetStringTagPtr @ 0x140721730 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x14067CE28 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x140680C80 (AslLogCallPrintf.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1407217FC (SdbpGetStringTableItemFromStringRef.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
