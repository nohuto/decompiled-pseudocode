/*
 * XREFs of EnableHalftone @ 0x1C0118170
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1C01181FC (HT_InitSaneLimits.c)
 */

__int64 EnableHalftone()
{
  qword_1C032A698 = EngCreateSemaphore();
  if ( !qword_1C032A698 )
    return 0LL;
  Src = 0LL;
  qword_1C032A6BC = 0LL;
  dword_1C032A6B8 = 0;
  qword_1C032A688 = EngCreateSemaphore();
  if ( !qword_1C032A688 )
    return 0LL;
  word_1C032A6C4 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0LL;
  word_1C032A6C6 = 0;
  HT_InitSaneLimits();
  return 1LL;
}
