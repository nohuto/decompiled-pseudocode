/*
 * XREFs of _UnlockWindowStation @ 0x1C012FB64
 * Callers:
 *     NtUserUnlockWindowStation @ 0x1C012FAF0 (NtUserUnlockWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall UnlockWindowStation(__int64 a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  int v4; // ecx
  int v5; // edx
  unsigned int v6; // eax

  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    v4 = *(_DWORD *)(a1 + 32);
    v5 = -2;
    v6 = gdwLocks;
    if ( (v4 & 8) == 0 )
      v5 = -4;
    *(_DWORD *)(a1 + 32) = v5 & v4;
    gdwLocks = v5 & v6;
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL, gpidLogon, v2, v3);
    return 0LL;
  }
}
