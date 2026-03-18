/*
 * XREFs of KyRetireDpcList @ 0x1401CB6A0
 * Callers:
 *     KiDispatchInterrupt @ 0x1401CB450 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x1400A1C50 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x1401CB490LL);
}
