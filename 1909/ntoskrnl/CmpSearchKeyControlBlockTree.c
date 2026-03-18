/*
 * XREFs of CmpSearchKeyControlBlockTree @ 0x14082ACA0
 * Callers:
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14082B648 (CmKeyBodyReplicateToVirtual.c)
 * Callees:
 *     CmpSearchKeyControlBlockTreeEx @ 0x14082ACBC (CmpSearchKeyControlBlockTreeEx.c)
 */

__int64 __fastcall CmpSearchKeyControlBlockTree(__int64 a1)
{
  return CmpSearchKeyControlBlockTreeEx(a1);
}
