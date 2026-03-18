/*
 * XREFs of BcdGetElementData @ 0x14073DC08
 * Callers:
 *     WheaPersistOfflinedPage @ 0x14034061C (WheaPersistOfflinedPage.c)
 *     PopBcdEstablishResumeObject @ 0x14073D8C0 (PopBcdEstablishResumeObject.c)
 *     BiResolveLocateDevice @ 0x14092E8B0 (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x14073F7EC (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(int a1, int a2, int a3, __int64 a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}
