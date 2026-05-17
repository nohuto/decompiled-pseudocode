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

unsigned __int64 __fastcall RtlGuardCheckImageBase(unsigned __int64 a1, char a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // r9
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF

  result = LdrControlFlowGuardEnforced();
  if ( (_DWORD)result )
  {
    if ( a1 < *((_QWORD *)&xmmword_18017A500 + 1)
      || (result = *((_QWORD *)&xmmword_18017A500 + 1) + (unsigned int)qword_18017A510, a1 >= result) )
    {
      result = RtlpxLookupFunctionTable(a1, (signed __int64)&v7, v5, v6);
    }
    else
    {
      v7 = xmmword_18017A500;
    }
    if ( *((_QWORD *)&v7 + 1) != a1 )
    {
      if ( !a2 || (result = LdrIsEnclaveAddress(a1), !(_BYTE)result) )
        __fastfail(0x18u);
    }
  }
  return result;
}
