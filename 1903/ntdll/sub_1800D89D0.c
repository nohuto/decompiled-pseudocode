/*
 * XREFs of sub_1800D89D0 @ 0x1800D89D0
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x18001AEC0 (LdrGetProcedureAddressForCaller.c)
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 *     sub_1800CF3AC @ 0x1800CF3AC (sub_1800CF3AC.c)
 * Callees:
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_180054D90 @ 0x180054D90 (sub_180054D90.c)
 *     sub_18005521C @ 0x18005521C (sub_18005521C.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D89D0(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  PVOID BaseAddress[3]; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  if ( (int)sub_180054D90(a1, (unsigned __int64 *)BaseAddress, 0LL) < 0 )
  {
    v9 = a1;
  }
  else
  {
    if ( BaseAddress[0] != (PVOID)qword_1801653A0 && (*((_DWORD *)BaseAddress[0] + 26) & 0x400) == 0 )
      v9 = *((_QWORD *)BaseAddress[0] + 6);
    sub_18001B678((char *)BaseAddress[0]);
  }
  if ( v9 )
  {
    v10 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, _QWORD))(__ROR8__(
                                                                                  qword_18017A2A0,
                                                                                  64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
            v9,
            a2,
            a3,
            a4);
    if ( v10 != a3 )
      sub_18005521C(a3, 1u, BaseAddress);
  }
  else
  {
    v10 = a3;
  }
  *a5 = v10;
  return 0LL;
}
