/*
 * XREFs of KCBVirtualFlagSet @ 0x14027FF58
 * Callers:
 *     CmKeyBodyRemapToVirtual @ 0x14082BCB4 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082BF48 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     <none>
 */

bool __fastcall KCBVirtualFlagSet(__int64 a1)
{
  return (*(_BYTE *)(a1 + 184) & 0x20) == 0;
}
