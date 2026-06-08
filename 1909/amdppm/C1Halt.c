/*
 * XREFs of C1Halt @ 0x1C000DF70
 * Callers:
 *     C1Idle @ 0x1C000A890 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C000A8D0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
