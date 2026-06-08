/*
 * XREFs of IoHaltC1Idle @ 0x1C000A8D0
 * Callers:
 *     <none>
 * Callees:
 *     ReadGenAddr @ 0x1C00021B8 (ReadGenAddr.c)
 *     C1Halt @ 0x1C000DF70 (C1Halt.c)
 */

void __fastcall __noreturn IoHaltC1Idle(__int64 a1, __int64 a2)
{
  __int64 v2; // r8

  v2 = a1;
  if ( (_DWORD)a2 )
  {
    a2 = 0LL;
    a1 = 72LL;
    __writemsr(0x48u, 0LL);
  }
  if ( v2 )
    ReadGenAddr(v2);
  C1Halt(a1, a2);
}
