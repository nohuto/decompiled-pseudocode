/*
 * XREFs of Control_EvtDmaCallback @ 0x1C002A320
 * Callers:
 *     <none>
 * Callees:
 *     Control_Transfer_MapIntoRing @ 0x1C002BC30 (Control_Transfer_MapIntoRing.c)
 */

__int64 __fastcall Control_EvtDmaCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_QWORD *)(*(_QWORD *)(a4 + 344) + 96LL) = a3;
  return Control_Transfer_MapIntoRing(a4, 0LL);
}
