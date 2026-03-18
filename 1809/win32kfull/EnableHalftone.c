/*
 * XREFs of EnableHalftone @ 0x1C0132EA0
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1C0132F2C (HT_InitSaneLimits.c)
 */

__int64 EnableHalftone()
{
  qword_1C0317698 = EngCreateSemaphore();
  if ( !qword_1C0317698 )
    return 0LL;
  Src = 0LL;
  qword_1C03176BC = 0LL;
  dword_1C03176B8 = 0;
  qword_1C0317688 = EngCreateSemaphore();
  if ( !qword_1C0317688 )
    return 0LL;
  word_1C03176C4 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0LL;
  word_1C03176C6 = 0;
  HT_InitSaneLimits();
  return 1LL;
}
