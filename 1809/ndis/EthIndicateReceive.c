/*
 * XREFs of EthIndicateReceive @ 0x1C006D290
 * Callers:
 *     <none>
 * Callees:
 *     ndisLWM5IndicateReceive @ 0x1C006D5E0 (ndisLWM5IndicateReceive.c)
 */

__int64 __fastcall EthIndicateReceive(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6,
        int a7,
        int a8)
{
  return ndisLWM5IndicateReceive(a1, a2, a4, a5, a6, a7, a8);
}
