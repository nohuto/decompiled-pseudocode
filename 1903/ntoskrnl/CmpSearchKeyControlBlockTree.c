/*
 * XREFs of CmpSearchKeyControlBlockTree @ 0x14082B5A0
 * Callers:
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082BF48 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082B5BC (CmpSearchKeyControlBlockTreeEx.c)
 */

__int64 __fastcall CmpSearchKeyControlBlockTree(__int64 a1)
{
  return CmpSearchKeyControlBlockTreeEx(a1);
}
