/*
 * XREFs of MNDestroyAnimationBitmap @ 0x1C01D5070
 * Callers:
 *     xxxMNEndMenuStateInternal @ 0x1C01D54B0 (xxxMNEndMenuStateInternal.c)
 *     MNAnimate @ 0x1C02081FC (MNAnimate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MNDestroyAnimationBitmap(__int64 a1)
{
  __int64 StockObject; // rax
  __int64 result; // rax

  StockObject = GreGetStockObject(21LL);
  GreSelectBitmap(*(_QWORD *)(a1 + 136), StockObject);
  result = GreDeleteObject(*(_QWORD *)(a1 + 128));
  *(_QWORD *)(a1 + 128) = 0LL;
  return result;
}
