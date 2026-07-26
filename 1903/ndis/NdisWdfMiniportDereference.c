/*
 * XREFs of NdisWdfMiniportDereference @ 0x1C009EDA0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 */

void __fastcall NdisWdfMiniportDereference(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    NT_ASSERT("(((miniport)->Flags & (0x00000080)) != 0)");
  ndisDereferenceMiniport(a1, 0x6Du);
}
