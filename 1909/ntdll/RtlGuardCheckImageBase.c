/*
 * XREFs of RtlGuardCheckImageBase @ 0x18007358C
 * Callers:
 *     LdrpResolveProcedureAddress @ 0x18001B784 (LdrpResolveProcedureAddress.c)
 *     LdrpHandleProtectedDelayload @ 0x18001BB70 (LdrpHandleProtectedDelayload.c)
 * Callees:
 *     LdrControlFlowGuardEnforced @ 0x18001AE90 (LdrControlFlowGuardEnforced.c)
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     LdrIsEnclaveAddress @ 0x1800CD6C0 (LdrIsEnclaveAddress.c)
 */

char __fastcall RtlGuardCheckImageBase(PVOID BaseAddress, char a2)
{
  unsigned __int64 v4; // rax
  char *v5; // r8
  char *v6; // r9
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  LOBYTE(v4) = LdrControlFlowGuardEnforced();
  if ( (_DWORD)v4 )
  {
    if ( (unsigned __int64)BaseAddress < *((_QWORD *)&xmmword_18017A500 + 1)
      || (v4 = *((_QWORD *)&xmmword_18017A500 + 1) + (unsigned int)qword_18017A510, (unsigned __int64)BaseAddress >= v4) )
    {
      LOBYTE(v4) = RtlpxLookupFunctionTable((unsigned __int64)BaseAddress, (signed __int64)&v8, v5, v6);
    }
    else
    {
      v8 = xmmword_18017A500;
    }
    if ( *((PVOID *)&v8 + 1) != BaseAddress )
    {
      if ( !a2 || (LOBYTE(v4) = LdrIsEnclaveAddress(BaseAddress), !(_BYTE)v4) )
        __fastfail(0x18u);
    }
  }
  return v4;
}
