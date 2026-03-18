/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x1406DFAEC
 * Callers:
 *     MmDuplicateMemory @ 0x14056C274 (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x1409BCF88 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x1406DFB2C (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap(&qword_14043A7B0[2 * v0], 0LL) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
