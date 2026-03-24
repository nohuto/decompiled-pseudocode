/*
 * XREFs of BcdGetElementData @ 0x1408F0FE4
 * Callers:
 *     WheaPersistOfflinedPage @ 0x1403205A4 (WheaPersistOfflinedPage.c)
 *     BiResolveLocateDevice @ 0x1408F11C0 (BiResolveLocateDevice.c)
 * Callees:
 *     BcdGetElementDataWithFlags @ 0x140713550 (BcdGetElementDataWithFlags.c)
 */

__int64 __fastcall BcdGetElementData(__int64 a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  return BcdGetElementDataWithFlags(a1, a2, a3, a3, a4);
}
