/*
 * XREFs of NdisWdfGetGuidToOidMap @ 0x1C009EBC0
 * Callers:
 *     <none>
 * Callees:
 *     ndisWdfGetGuidToOidList @ 0x1C00A81E0 (ndisWdfGetGuidToOidList.c)
 */

__int64 __fastcall NdisWdfGetGuidToOidMap(unsigned int *a1)
{
  return ndisWdfGetGuidToOidList(a1);
}
