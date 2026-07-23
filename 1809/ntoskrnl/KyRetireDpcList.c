/*
 * XREFs of KyRetireDpcList @ 0x1401C4400
 * Callers:
 *     KiDispatchInterrupt @ 0x1401C41B0 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x1400C6400 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x1401C41F0LL);
}
