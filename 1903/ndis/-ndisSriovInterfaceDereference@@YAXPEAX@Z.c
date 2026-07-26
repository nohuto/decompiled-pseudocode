/*
 * XREFs of ?ndisSriovInterfaceDereference@@YAXPEAX@Z @ 0x1C00B0F10
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 */

void __fastcall ndisSriovInterfaceDereference(__int64 a1)
{
  ndisDereferenceMiniport(a1, 0x44u);
}
