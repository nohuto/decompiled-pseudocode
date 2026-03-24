/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x14072178C
 * Callers:
 *     SdbGetStringTagPtr @ 0x140721710 (SdbGetStringTagPtr.c)
 * Callees:
 *     SdbpGetMappedTagData @ 0x14067CE08 (SdbpGetMappedTagData.c)
 *     AslLogCallPrintf @ 0x140680C60 (AslLogCallPrintf.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x1407217DC (SdbpGetStringTableItemFromStringRef.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
