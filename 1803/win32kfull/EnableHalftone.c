/*
 * XREFs of EnableHalftone @ 0x1C01100B0
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1C0110128 (HT_InitSaneLimits.c)
 */

__int64 EnableHalftone()
{
  qword_1C0326FD8 = EngCreateSemaphore();
  if ( !qword_1C0326FD8 )
    return 0LL;
  Src = 0LL;
  qword_1C0326FFC = 0LL;
  dword_1C0326FF8 = 0;
  qword_1C0326FC8 = EngCreateSemaphore();
  if ( !qword_1C0326FC8 )
    return 0LL;
  word_1C0327004 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0LL;
  word_1C0327006 = 0;
  HT_InitSaneLimits();
  return 1LL;
}
