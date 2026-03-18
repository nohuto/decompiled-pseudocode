/*
 * XREFs of KeInitializeCatRegisters @ 0x1401438C0
 * Callers:
 *     KiRestoreFeatureBits @ 0x140143784 (KiRestoreFeatureBits.c)
 *     KeInitSystem @ 0x1409C4988 (KeInitSystem.c)
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
