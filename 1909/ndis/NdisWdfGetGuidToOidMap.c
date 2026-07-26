/*
 * XREFs of NdisWdfGetGuidToOidMap @ 0x1C009ED90
 * Callers:
 *     <none>
 * Callees:
 *     ndisWdfGetGuidToOidList @ 0x1C00A83B0 (ndisWdfGetGuidToOidList.c)
 */

__int64 __fastcall NdisWdfGetGuidToOidMap(unsigned int *a1)
{
  return ndisWdfGetGuidToOidList(a1);
}
