/*
 * XREFs of KeInitializeCatRegisters @ 0x1401439E0
 * Callers:
 *     KiRestoreFeatureBits @ 0x1401438A4 (KiRestoreFeatureBits.c)
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 KeInitializeCatRegisters()
{
  __int64 result; // rax

  if ( KiCacheIsoBitmap )
  {
    if ( (KeFeatureBits & 0x100000000000LL) != 0 )
    {
      result = (unsigned int)KiCacheIsoBitmap;
      __writemsr(0xC91u, (unsigned int)KiCacheIsoBitmap);
    }
  }
  return result;
}
