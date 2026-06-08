/*
 * XREFs of C1Halt @ 0x1C0004330
 * Callers:
 *     C1Idle @ 0x1C000D390 (C1Idle.c)
 *     IoHaltC1Idle @ 0x1C000D5F0 (IoHaltC1Idle.c)
 * Callees:
 *     <none>
 */

void __noreturn C1Halt()
{
  _enable();
  __halt();
}
