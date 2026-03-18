/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x1407278D4
 * Callers:
 *     MmDuplicateMemory @ 0x14059BE8C (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x1409F1724 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x140727914 (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap(&qword_140466250[2 * v0], 0LL) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
