/*
 * XREFs of KeInitializeCatRegisters @ 0x140181FC8
 * Callers:
 *     KiRestoreFeatureBits @ 0x14015F518 (KiRestoreFeatureBits.c)
 *     KeInitSystem @ 0x1409FD23C (KeInitSystem.c)
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
