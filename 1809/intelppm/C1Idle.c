/*
 * XREFs of C1Idle @ 0x1C000CCB0
 * Callers:
 *     <none>
 * Callees:
 *     C1Halt @ 0x1C0004C30 (C1Halt.c)
 */

void __fastcall __noreturn C1Idle(__int64 a1, int a2)
{
  if ( a2 )
    __writemsr(0x48u, 0LL);
  C1Halt();
}
