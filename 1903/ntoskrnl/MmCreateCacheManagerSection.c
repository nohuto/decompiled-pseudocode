/*
 * XREFs of MmCreateCacheManagerSection @ 0x1406CF8E8
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 * Callees:
 *     MiCreateSection @ 0x1405D6FB0 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateCacheManagerSection(_QWORD *a1, int a2, char a3, __int64 a4)
{
  return MiCreateSection(a1, 0, a2, 4, 0x8000000, 4 * (a3 & 1u) + 2, 0LL, 0, 0LL, a4, 0, -1, 0LL);
}
