/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x1406E0D6C
 * Callers:
 *     MmDuplicateMemory @ 0x14056D274 (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x1409BDF88 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x1406E0DAC (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap(&qword_14043B870[2 * v0], 0LL) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
