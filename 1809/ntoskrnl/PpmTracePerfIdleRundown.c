/*
 * XREFs of PpmTracePerfIdleRundown @ 0x1402E3550
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     PpmEventIdleStateChange @ 0x14011FD08 (PpmEventIdleStateChange.c)
 *     PpmPerfGetCurrentState @ 0x140131E94 (PpmPerfGetCurrentState.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall PpmTracePerfIdleRundown(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp-30h] BYREF
  __int64 v5; // [rsp+38h] [rbp-28h]
  __int64 v6; // [rsp+40h] [rbp-20h]
  __int64 *v7; // [rsp+48h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp-10h]
  int v9; // [rsp+54h] [rbp-Ch]

  if ( a1[3022] )
  {
    v4 = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    PpmPerfGetCurrentState((__int64)a1, (_DWORD *)&v4 + 1, 0LL, 0LL, &v4, 0LL);
    v9 = 0;
    LODWORD(v5) = HIDWORD(v4);
    v6 = a1[25];
    v7 = &v4;
    v8 = 24;
    EtwTraceKernelEvent((__int64)&v7, 1u, 0x80008000, 0x1233u, 0x401802u);
  }
  v2 = a1[2976];
  if ( v2 )
    PpmEventIdleStateChange(*(_DWORD *)(v2 + 16), *(_DWORD *)(v2 + 16));
  return 0LL;
}
