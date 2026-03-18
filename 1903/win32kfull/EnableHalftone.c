/*
 * XREFs of EnableHalftone @ 0x1C013E170
 * Callers:
 *     <none>
 * Callees:
 *     HT_InitSaneLimits @ 0x1C013E1FC (HT_InitSaneLimits.c)
 */

__int64 EnableHalftone()
{
  qword_1C032C6A8 = EngCreateSemaphore();
  if ( !qword_1C032C6A8 )
    return 0LL;
  Src = 0LL;
  qword_1C032C6CC = 0LL;
  dword_1C032C6C8 = 0;
  qword_1C032C698 = EngCreateSemaphore();
  if ( !qword_1C032C698 )
    return 0LL;
  word_1C032C6D4 = 0;
  hsem = EngCreateSemaphore();
  if ( !hsem )
    return 0LL;
  word_1C032C6D6 = 0;
  HT_InitSaneLimits();
  return 1LL;
}
