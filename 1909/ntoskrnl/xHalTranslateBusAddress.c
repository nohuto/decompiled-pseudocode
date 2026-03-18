/*
 * XREFs of xHalTranslateBusAddress @ 0x1402845C0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __noreturn xHalTranslateBusAddress()
{
  KeBugCheckEx(0x5Cu, 0LL, 0LL, 0LL, 7uLL);
}
