/*
 * XREFs of AVrfCallAPILookupCallback @ 0x1800DAB40
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180007CB0 (LdrpHandleProtectedDelayload.c)
 *     LdrGetProcedureAddressForCaller @ 0x1800094D0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpResolveDelayloadAddress @ 0x1800D0B9C (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18002B1F4 (RtlGuardGrantSuppressedCallAccess.c)
 *     LdrpFindLoadedDllByAddress @ 0x180034CB0 (LdrpFindLoadedDllByAddress.c)
 *     _guard_dispatch_icall_nop @ 0x1800A3CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AVrfCallAPILookupCallback(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 *a5)
{
  unsigned int v7; // ebp
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v7 = a4;
  v9 = 0LL;
  if ( (int)LdrpFindLoadedDllByAddress(a1, v12, 0LL, a4) < 0 )
  {
    v9 = a1;
  }
  else
  {
    if ( v12[0] != LdrpNtDllDataTableEntry && (*(_DWORD *)(v12[0] + 104) & 0x400) == 0 )
      v9 = *(_QWORD *)(v12[0] + 48);
    LdrpDereferenceModule(v12[0]);
  }
  if ( v9 )
  {
    v10 = ((__int64 (__fastcall *)(unsigned __int64, __int64, unsigned __int64, _QWORD))(__ROR8__(
                                                                                           AvrfpAPILookupCallbackRoutine,
                                                                                           64
                                                                                         - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
            v9,
            a2,
            a3,
            v7);
    if ( v10 != a3 )
      RtlGuardGrantSuppressedCallAccess(a3, 1u, v12);
  }
  else
  {
    v10 = a3;
  }
  *a5 = v10;
  return 0LL;
}
