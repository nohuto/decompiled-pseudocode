/*
 * XREFs of _UnlockWindowStation @ 0x1C010E11C
 * Callers:
 *     NtUserUnlockWindowStation @ 0x1C010E0C0 (NtUserUnlockWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall UnlockWindowStation(__int64 a1)
{
  unsigned int v2; // ecx
  __int64 result; // rax

  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    if ( (*(_DWORD *)(a1 + 32) & 8) != 0 )
      v2 = gdwLocks & 0xFFFFFFFE;
    else
      v2 = gdwLocks & 0xFFFFFFFC;
    *(_DWORD *)(a1 + 32) &= (*(_DWORD *)(a1 + 32) & 8) != 0 ? -2 : -4;
    result = 1LL;
    gdwLocks = v2;
  }
  else
  {
    UserSetLastError(5LL, gpidLogon);
    return 0LL;
  }
  return result;
}
