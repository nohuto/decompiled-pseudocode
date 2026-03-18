/*
 * XREFs of EtwTraceShouldYieldProcessor @ 0x14032E3AC
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1400494A0 (MiWalkPageTablesRecursively.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x140057740 (MiDecommitPages.c)
 *     MiProbeAndLockPages @ 0x14008E9A0 (MiProbeAndLockPages.c)
 *     MiQueryAddressState @ 0x1400C63D0 (MiQueryAddressState.c)
 *     MiDispatchFault @ 0x1400CBFD0 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x1400CF700 (MiGetPageChain.c)
 *     KeShouldYieldProcessor @ 0x140109950 (KeShouldYieldProcessor.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140120D40 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

void __fastcall EtwTraceShouldYieldProcessor(int a1, int a2, int a3)
{
  _DWORD v3[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v3[0] = a1;
  v3[1] = a2;
  v4 = v3;
  v6 = 0;
  v3[2] = a3;
  v5 = 12;
  EtwTraceKernelEvent((__int64)&v4, 1u, 0x24000000u, 0xF6Du, 0x400A02u);
}
