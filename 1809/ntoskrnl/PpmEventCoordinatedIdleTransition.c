/*
 * XREFs of PpmEventCoordinatedIdleTransition @ 0x1402E56D8
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x14005F330 (PpmExitCoordinatedIdle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PpmEventCoordinatedIdleTransition(char a1, int a2, __int64 a3)
{
  __int64 v3; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]
  int v5; // [rsp+3Ch] [rbp-1Ch]

  if ( a2 && *(_BYTE *)(PpmPlatformStates + 12) && (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
  {
    v5 = 0;
    v3 = a3;
    v4 = 4 * a2;
    EtwTraceKernelEvent((__int64)&v3, 1u, 0x40008000u, 4672 - (a1 != 0), 0x602u);
  }
}
