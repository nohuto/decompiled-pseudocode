/*
 * XREFs of IoHaltC1Idle @ 0x1C000D5F0
 * Callers:
 *     <none>
 * Callees:
 *     C1Halt @ 0x1C0004330 (C1Halt.c)
 *     ReadGenAddr @ 0x1C00082E0 (ReadGenAddr.c)
 */

void __fastcall __noreturn IoHaltC1Idle(__int64 a1, int a2)
{
  if ( a2 )
    __writemsr(0x48u, 0LL);
  ReadGenAddr(a1);
  C1Halt();
}
