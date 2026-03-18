/*
 * XREFs of GetWindowFrameBounds @ 0x1C01BF5C0
 * Callers:
 *     CloneWindowPosAndArrangementAsync @ 0x1C019EAFC (CloneWindowPosAndArrangementAsync.c)
 *     PtInsideWindowFrameBounds @ 0x1C01BF640 (PtInsideWindowFrameBounds.c)
 * Callees:
 *     ReduceRectByWindowMargin @ 0x1C01BF6A0 (ReduceRectByWindowMargin.c)
 */

_OWORD *__fastcall GetWindowFrameBounds(_OWORD *a1, __int64 a2)
{
  __int128 v3; // xmm0
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_OWORD *)(*(_QWORD *)(a2 + 40) + 88LL);
  *a1 = v3;
  v5 = v3;
  ReduceRectByWindowMargin(a2, &v5, a1);
  return a1;
}
