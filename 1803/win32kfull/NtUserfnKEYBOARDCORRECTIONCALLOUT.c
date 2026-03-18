/*
 * XREFs of NtUserfnKEYBOARDCORRECTIONCALLOUT @ 0x1C01F9110
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserfnKEYBOARDCORRECTIONCALLOUT(__int64 a1, __int64 a2)
{
  UserSetLastError(5LL, a2);
  return 0LL;
}
