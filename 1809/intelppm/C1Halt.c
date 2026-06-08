/*
 * XREFs of C1Halt @ 0x1C0004C30
 * Callers:
 *     C1Idle @ 0x1C000CCB0 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C000CF10 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
