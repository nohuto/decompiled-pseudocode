/*
 * XREFs of PpmEventIdleStateChange @ 0x14011E37C
 * Callers:
 *     PoIdle @ 0x140031020 (PoIdle.c)
 *     PpmTracePerfIdleRundown @ 0x1403000D0 (PpmTracePerfIdleRundown.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

__int64 __fastcall PpmEventIdleStateChange(int a1, int a2)
{
  __int64 result; // rax
  _DWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 GroupSetMember; // [rsp+38h] [rbp-30h]
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  GroupSetMember = 0LL;
  if ( (xmmword_140572410 & 0x8000) != 0 )
  {
    v3[0] = a1;
    v3[1] = a2;
    v7 = 0;
    v6 = 16;
    GroupSetMember = KeGetCurrentPrcb()->GroupSetMember;
    v5 = v3;
    return EtwTraceKernelEvent((unsigned int)&v5, 1, -2147450880, 4661, 1538);
  }
  return result;
}
