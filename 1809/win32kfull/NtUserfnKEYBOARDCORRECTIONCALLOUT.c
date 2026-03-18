/*
 * XREFs of NtUserfnKEYBOARDCORRECTIONCALLOUT @ 0x1C0220C90
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserfnKEYBOARDCORRECTIONCALLOUT(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  UserSetLastError(5LL, a2, a3, a4);
  return 0LL;
}
