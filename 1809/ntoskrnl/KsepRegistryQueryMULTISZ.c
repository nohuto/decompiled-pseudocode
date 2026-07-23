/*
 * XREFs of KsepRegistryQueryMULTISZ @ 0x140729440
 * Callers:
 *     KsepMatchInitBiosInfo @ 0x1409B02B4 (KsepMatchInitBiosInfo.c)
 * Callees:
 *     KsepRegistryQuerySZ @ 0x14072946C (KsepRegistryQuerySZ.c)
 */

__int64 __fastcall KsepRegistryQueryMULTISZ(void *a1, const WCHAR *a2, __int64 a3, __int64 a4, __int64 a5)
{
  return KsepRegistryQuerySZ(a1, a2, a4, a5);
}
