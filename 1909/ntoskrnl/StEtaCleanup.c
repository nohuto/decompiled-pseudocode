/*
 * XREFs of StEtaCleanup @ 0x14011C114
 * Callers:
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011B868 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmcCacheCleanup @ 0x1408EB2AC (SmcCacheCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall StEtaCleanup(__int64 a1)
{
  PVOID *v1; // rbx
  __int64 v2; // rdi

  v1 = (PVOID *)(a1 + 16);
  v2 = 2LL;
  do
  {
    if ( *v1 )
      ExFreePoolWithTag(*v1, 0);
    ++v1;
    --v2;
  }
  while ( v2 );
}
