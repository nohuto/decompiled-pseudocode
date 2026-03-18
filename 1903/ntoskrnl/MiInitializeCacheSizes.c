/*
 * XREFs of MiInitializeCacheSizes @ 0x1409F3CA8
 * Callers:
 *     MiInitializeColors @ 0x1409F3C20 (MiInitializeColors.c)
 * Callees:
 *     MiInitializeLargePageColorSizes @ 0x140188E34 (MiInitializeLargePageColorSizes.c)
 */

__int64 MiInitializeCacheSizes()
{
  unsigned int SecondLevelCacheSize; // r8d
  unsigned __int8 SecondLevelCacheAssociativity; // al
  unsigned int v2; // ecx
  unsigned int v3; // eax
  int v5; // ecx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 CacheCount; // rdx
  _CACHE_DESCRIPTOR *Cache; // rcx
  __int64 result; // rax

  SecondLevelCacheSize = KeGetPcr()->SecondLevelCacheSize;
  dword_140465A94 = SecondLevelCacheSize;
  SecondLevelCacheAssociativity = KeGetPcr()->SecondLevelCacheAssociativity;
  if ( SecondLevelCacheAssociativity )
    SecondLevelCacheSize /= SecondLevelCacheAssociativity;
  if ( SecondLevelCacheSize )
  {
    _BitScanReverse(&v2, SecondLevelCacheSize);
    SecondLevelCacheSize = 1 << v2;
  }
  if ( SecondLevelCacheSize - 8 > 0xF8 )
  {
    if ( qword_14046A350 < 0x80000 )
      SecondLevelCacheSize = qword_14046A350 < 0x40000 ? 64 : 128;
    else
      SecondLevelCacheSize = 256;
  }
  dword_140465AB4 = SecondLevelCacheSize;
  dword_140465AB0 = SecondLevelCacheSize - 1;
  v3 = SecondLevelCacheSize >> 4;
  if ( (SecondLevelCacheSize & 0xF) != 0 )
    ++v3;
  if ( _BitScanReverse((unsigned int *)&v5, v3) )
    v3 = 1 << v5;
  dword_140465B48 = v3;
  MiInitializeLargePageColorSizes();
  CurrentPrcb = KeGetCurrentPrcb();
  CacheCount = CurrentPrcb->CacheCount;
  Cache = CurrentPrcb->Cache;
  if ( (_DWORD)CacheCount )
  {
    do
    {
      if ( Cache->Level == 1 && (Cache->Type & 0xFFFFFFFD) == 0 )
        dword_140465A98 = Cache->Size;
      ++Cache;
      --CacheCount;
    }
    while ( CacheCount );
  }
  result = 0x4000LL;
  if ( (unsigned int)dword_140465A98 < 0x4000 )
    dword_140465A98 = 0x4000;
  dword_140465AC4 = 256;
  return result;
}
