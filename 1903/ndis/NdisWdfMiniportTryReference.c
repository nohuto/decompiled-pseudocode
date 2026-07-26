/*
 * XREFs of NdisWdfMiniportTryReference @ 0x1C009EE60
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 */

__int64 __fastcall NdisWdfMiniportTryReference(__int64 a1)
{
  if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 )
    NT_ASSERT("(((miniport)->Flags & (0x00000080)) != 0)");
  return ndisReferenceMiniport(a1);
}
