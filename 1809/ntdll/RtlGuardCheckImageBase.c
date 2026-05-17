/*
 * XREFs of RtlGuardCheckImageBase @ 0x180078EC4
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180007CB0 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveProcedureAddress @ 0x18000922C (LdrpResolveProcedureAddress.c)
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 *     LdrControlFlowGuardEnforced @ 0x180041DE0 (LdrControlFlowGuardEnforced.c)
 *     LdrIsEnclaveAddress @ 0x1800CEE1C (LdrIsEnclaveAddress.c)
 */

unsigned __int64 __fastcall RtlGuardCheckImageBase(unsigned __int64 a1, char a2)
{
  unsigned __int64 result; // rax
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  result = LdrControlFlowGuardEnforced();
  if ( (_DWORD)result )
  {
    if ( a1 < *((_QWORD *)&xmmword_180178500 + 1)
      || (result = *((_QWORD *)&xmmword_180178500 + 1) + (unsigned int)qword_180178510, a1 >= result) )
    {
      result = RtlpxLookupFunctionTable(a1, (__int64 *)&v5);
    }
    else
    {
      v5 = xmmword_180178500;
    }
    if ( *((_QWORD *)&v5 + 1) != a1 )
    {
      if ( !a2 || (result = LdrIsEnclaveAddress(a1), !(_BYTE)result) )
        __fastfail(0x18u);
    }
  }
  return result;
}
