/*
 * XREFs of TraitsCompare @ 0x1406C6BD4
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1405C48F0 (EtwpSetProviderTraitsCommon.c)
 * Callees:
 *     memcmp @ 0x1401A1110 (memcmp.c)
 */

int __fastcall TraitsCompare(__int64 a1, __int64 a2)
{
  unsigned __int16 *v2; // rdx
  unsigned __int16 v3; // ax

  v2 = (unsigned __int16 *)(a2 + 28);
  v3 = *(_WORD *)(a1 + 28);
  if ( v3 < *v2 )
    return -1;
  if ( v3 > *v2 )
    return 1;
  return memcmp((const void *)(a1 + 28), v2, v3);
}
