/*
 * XREFs of C1Halt @ 0x1C000CB00
 * Callers:
 *     C1Idle @ 0x1C0004E90 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C0004ED0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
