/*
 * XREFs of ndisSriovInterfaceDereference @ 0x1C0071A40
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 */

void __fastcall ndisSriovInterfaceDereference(__int64 a1)
{
  ndisDereferenceMiniport(a1, 0x44u);
}
