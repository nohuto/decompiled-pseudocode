/*
 * XREFs of KyRetireDpcList @ 0x1401C4280
 * Callers:
 *     KiDispatchInterrupt @ 0x1401C4030 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x1400C64A0 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x1401C4070LL);
}
