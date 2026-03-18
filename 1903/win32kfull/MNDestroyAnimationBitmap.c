/*
 * XREFs of MNDestroyAnimationBitmap @ 0x1C02108D4
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C0210D60 (xxxMNEndMenuStateInternal.c)
 *     MNAnimate @ 0x1C024A048 (MNAnimate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNDestroyAnimationBitmap(__int64 a1)
{
  __int64 result; // rax

  GreGetStockObject(21LL);
  GreSelectBitmap(*(_QWORD *)(a1 + 136));
  result = GreDeleteObject(*(_QWORD *)(a1 + 128));
  *(_QWORD *)(a1 + 128) = 0LL;
  return result;
}
