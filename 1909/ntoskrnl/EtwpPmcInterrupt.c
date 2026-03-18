/*
 * XREFs of EtwpPmcInterrupt @ 0x14032EE30
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

void __fastcall EtwpPmcInterrupt(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // r8
  unsigned int v3; // eax
  unsigned __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+38h] [rbp-30h]
  _QWORD v6[2]; // [rsp+40h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 360);
  v4 = 0LL;
  v5 = 0LL;
  v6[1] = 16LL;
  LODWORD(v5) = KeGetCurrentThread()[1].CurrentRunTime;
  v4 = v2;
  WORD2(v5) = a2;
  v6[0] = &v4;
  v3 = 34640386;
  if ( v2 > 0x7FFFFFFEFFFFLL )
    v3 = 34642434;
  EtwTraceKernelEvent((__int64)v6, 1u, 0x20000400u, 0xF2Fu, v3);
}
