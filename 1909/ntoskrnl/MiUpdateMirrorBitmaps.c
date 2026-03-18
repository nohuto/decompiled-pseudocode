/*
 * XREFs of MiUpdateMirrorBitmaps @ 0x14072B30C
 * Callers:
 *     MmDuplicateMemory @ 0x14059D3EC (MmDuplicateMemory.c)
 *     MiInitializeMirroring @ 0x1409F1634 (MiInitializeMirroring.c)
 * Callees:
 *     MiActOnMirrorBitmap @ 0x14072B34C (MiActOnMirrorBitmap.c)
 */

__int64 MiUpdateMirrorBitmaps()
{
  unsigned int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap(&qword_140465F50[2 * v0], 0LL) )
  {
    if ( ++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
