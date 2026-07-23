/*
 * XREFs of PpmEventIdleStateChange @ 0x14011FD08
 * Callers:
 *     PoIdle @ 0x14005D6B0 (PoIdle.c)
 *     PpmTracePerfIdleRundown @ 0x1402E3550 (PpmTracePerfIdleRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PpmEventIdleStateChange(int a1, int a2)
{
  _DWORD v2[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 GroupSetMember; // [rsp+38h] [rbp-30h]
  _DWORD *v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  if ( (xmmword_140542350 & 0x8000) != 0 )
  {
    v2[0] = a1;
    v2[1] = a2;
    v6 = 0;
    v5 = 16;
    GroupSetMember = KeGetCurrentPrcb()->GroupSetMember;
    v4 = v2;
    EtwTraceKernelEvent((__int64)&v4, 1u, 0x80008000, 0x1235u, 0x602u);
  }
}
