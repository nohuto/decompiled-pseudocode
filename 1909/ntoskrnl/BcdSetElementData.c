/*
 * XREFs of BcdSetElementData @ 0x14092E6F4
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14034061C (WheaPersistOfflinedPage.c)
 *     PopBcdRegenerateResumeObject @ 0x1408B60EC (PopBcdRegenerateResumeObject.c)
 *     BiBindEfiBootManager @ 0x14092F684 (BiBindEfiBootManager.c)
 * Callees:
 *     BcdSetElementDataWithFlags @ 0x14073F60C (BcdSetElementDataWithFlags.c)
 */

__int64 __fastcall BcdSetElementData(void *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  return BcdSetElementDataWithFlags(a1, a2, a3, a3, a4);
}
