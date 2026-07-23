/*
 * XREFs of PerfInfoLogVirtualAlloc @ 0x1408BA3C0
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405EE650 (MiAllocateVirtualMemory.c)
 *     MiFinishPlaceholderVadReplacement @ 0x14085D9CC (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     PsGetProcessServerSilo @ 0x14004D260 (PsGetProcessServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x1400891D0 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall PerfInfoLogVirtualAlloc(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  __int64 ProcessServerSilo; // rax
  _QWORD v7[2]; // [rsp+30h] [rbp-38h] BYREF
  int v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+44h] [rbp-24h]
  _QWORD *v10; // [rsp+48h] [rbp-20h] BYREF
  int v11; // [rsp+50h] [rbp-18h]
  int v12; // [rsp+54h] [rbp-14h]

  v4 = *(_DWORD *)(a3 + 736);
  v7[0] = a1;
  v7[1] = a2;
  v8 = v4;
  v10 = v7;
  v12 = 0;
  v11 = 24;
  v9 = a4;
  ProcessServerSilo = PsGetProcessServerSilo(a3);
  return EtwTraceSiloKernelEvent(ProcessServerSilo, (int)&v10, 1, 0x20008000u, 610, 5249282);
}
