/*
 * XREFs of _LockWindowStation @ 0x1C013A5E4
 * Callers:
 *     NtUserLockWindowStation @ 0x1C013A570 (NtUserLockWindowStation.c)
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall LockWindowStation(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ecx
  _QWORD *i; // rax

  v2 = 0;
  if ( PsGetCurrentProcessId() == (HANDLE)gpidLogon )
  {
    *(_DWORD *)(a1 + 32) |= 1u;
    v5 = *(_DWORD *)(a1 + 32);
    for ( i = *(_QWORD **)(a1 + 16); i; i = (_QWORD *)i[4] )
    {
      if ( i != grpdeskLogon && *(i - 5) )
      {
        v2 = 1;
        break;
      }
    }
    if ( (v5 & 8) != 0 )
      *(_DWORD *)(a1 + 32) = v5 | 2;
    return 2 - (unsigned int)(v2 != 0);
  }
  else
  {
    UserSetLastError(5LL, gpidLogon, v3, v4);
    return 0LL;
  }
}
