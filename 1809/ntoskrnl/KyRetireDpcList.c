/*
 * XREFs of KyRetireDpcList @ 0x1401C42A0
 * Callers:
 *     KiDispatchInterrupt @ 0x1401C4050 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x1400C64C0 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x1401C4090LL);
}
