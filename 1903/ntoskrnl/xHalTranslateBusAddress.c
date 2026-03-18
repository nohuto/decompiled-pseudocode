/*
 * XREFs of xHalTranslateBusAddress @ 0x140284860
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 */

void __noreturn xHalTranslateBusAddress()
{
  KeBugCheckEx(0x5Cu, 0LL, 0LL, 0LL, 7uLL);
}
