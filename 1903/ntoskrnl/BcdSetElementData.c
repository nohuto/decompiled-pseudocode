/*
 * XREFs of BcdSetElementData @ 0x14092EC80
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140340BBC (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x1408B681C (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14092FC10 (BiBindEfiBootManager.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x14073D70C (BcdSetElementDataWithFlags.c)
 */

__int64 __fastcall BcdSetElementData(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  return BcdSetElementDataWithFlags(a1, a2, a3, a3, a4);
}
