/*
 * XREFs of PepProcessorIdleVeto @ 0x1C000F004
 * Callers:
 *     PepDevicePowerControlCallback @ 0x1C000FD00 (PepDevicePowerControlCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall PepProcessorIdleVeto(__int64 a1, __int64 a2)
{
  ULONG v3; // ecx
  NTSTATUS result; // eax
  int v5; // [rsp+20h] [rbp-28h] BYREF
  struct _PROCESSOR_NUMBER ProcNumber[4]; // [rsp+24h] [rbp-24h] BYREF

  if ( !*(_QWORD *)(a1 + 696) || !*(_QWORD *)(a1 + 1136) && (*(_QWORD *)(a1 + 264) & 0x100000000000LL) == 0 )
    return -1073741637;
  v3 = *(_DWORD *)(a1 + 56);
  v5 = 62;
  *(_OWORD *)&ProcNumber[0].Group = 0LL;
  result = KeGetProcessorNumberFromIndex(v3, ProcNumber);
  if ( result >= 0 )
  {
    ProcNumber[1] = *(struct _PROCESSOR_NUMBER *)a2;
    ProcNumber[2] = *(struct _PROCESSOR_NUMBER *)(a2 + 4);
    LOBYTE(ProcNumber[3].Group) = *(_BYTE *)(a2 + 8);
    return ((__int64 (__fastcall *)(int *))qword_1C001B5F8)(&v5);
  }
  return result;
}
