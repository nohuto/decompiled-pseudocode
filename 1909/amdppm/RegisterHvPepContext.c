/*
 * XREFs of RegisterHvPepContext @ 0x1C00208B0
 * Callers:
 *     RegisterHvLpiStates @ 0x1C00206A4 (RegisterHvLpiStates.c)
 *     RegisterVmIdleStates @ 0x1C00215C8 (RegisterVmIdleStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000DE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000E300 (memset.c)
 */

NTSTATUS __fastcall RegisterHvPepContext(__int64 a1)
{
  NTSTATUS result; // eax
  _QWORD v3[20]; // [rsp+20h] [rbp-B8h] BYREF

  memset(v3, 0, 0x98uLL);
  result = KeGetProcessorNumberFromIndex(*(_DWORD *)(a1 + 56), (PPROCESSOR_NUMBER)v3 + 1);
  if ( result >= 0 )
  {
    LODWORD(v3[0]) = 62;
    v3[1] = a1 + 1104;
    BYTE3(v3[2]) = 1;
    HIDWORD(v3[14]) = 1;
    return ((__int64 (__fastcall *)(_QWORD *))qword_1C0013648)(v3);
  }
  return result;
}
