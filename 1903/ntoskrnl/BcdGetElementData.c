/*
 * XREFs of BcdGetElementData @ 0x14073BD08
 * Callers:
 *     WheaPersistOfflinedPage @ 0x140340BBC (WheaPersistOfflinedPage.c)
 *     PopBcdEstablishResumeObject @ 0x14073B9C0 (PopBcdEstablishResumeObject.c)
 *     BiResolveLocateDevice @ 0x14092EE3C (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x14073D8EC (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(int a1, int a2, int a3, __int64 a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}
