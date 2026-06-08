/*
 * XREFs of C1Idle @ 0x1C000A890
 * Callers:
 *     <none>
 * Callees:
 *     C1Halt @ 0x1C000DF70 (C1Halt.c)
 */

void __fastcall __noreturn C1Idle(__int64 a1, __int64 a2)
{
  if ( (_DWORD)a2 )
  {
    a2 = 0LL;
    a1 = 72LL;
    __writemsr(0x48u, 0LL);
  }
  C1Halt(a1, a2);
}
