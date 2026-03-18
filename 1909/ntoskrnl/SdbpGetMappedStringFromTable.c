/*
 * XREFs of SdbpGetMappedStringFromTable @ 0x14074D384
 * Callers:
 *     SdbGetStringTagPtr @ 0x14074D308 (SdbGetStringTagPtr.c)
 * Callees:
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     SdbpGetMappedTagData @ 0x14070DD44 (SdbpGetMappedTagData.c)
 *     SdbpGetStringTableItemFromStringRef @ 0x14074D3D4 (SdbpGetStringTableItemFromStringRef.c)
 */

__int64 __fastcall SdbpGetMappedStringFromTable(void *a1)
{
  SdbpGetStringTableItemFromStringRef(a1);
  AslLogCallPrintf(1LL);
  return 0LL;
}
