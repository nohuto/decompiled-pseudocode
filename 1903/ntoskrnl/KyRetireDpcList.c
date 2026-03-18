/*
 * XREFs of KyRetireDpcList @ 0x1401CAB20
 * Callers:
 *     KiDispatchInterrupt @ 0x1401CA8D0 (KiDispatchInterrupt.c)
 * Callees:
 *     KiRetireDpcList @ 0x1400C1DD0 (KiRetireDpcList.c)
 */

void __fastcall KyRetireDpcList(__int64 a1)
{
  KiRetireDpcList(a1);
  JUMPOUT(0x1401CA910LL);
}
