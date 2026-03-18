/*
 * XREFs of EtwTraceShouldYieldProcessor @ 0x14032DE0C
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x140049540 (MiWalkPageTablesRecursively.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400577E0 (MiDecommitPages.c)
 *     MiQueryAddressState @ 0x1400A6250 (MiQueryAddressState.c)
 *     MiDispatchFault @ 0x1400ABE50 (MiDispatchFault.c)
 *     MiGetPageChain @ 0x1400AF580 (MiGetPageChain.c)
 *     MiProbeAndLockPages @ 0x1400CBF90 (MiProbeAndLockPages.c)
 *     KeShouldYieldProcessor @ 0x140108920 (KeShouldYieldProcessor.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140121B90 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
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
