/*
 * XREFs of ndisSriovInterfaceReference @ 0x1C0071A60
 * Callers:
 *     ndisPnPQuerySriovInterface @ 0x1C00FB1C0 (ndisPnPQuerySriovInterface.c)
 * Callees:
 *     ndisReferenceMiniportNoCheck @ 0x1C00151C8 (ndisReferenceMiniportNoCheck.c)
 */

void __fastcall ndisSriovInterfaceReference(__int64 a1)
{
  ndisReferenceMiniportNoCheck(a1, 0x44u);
}
