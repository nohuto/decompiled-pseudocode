/*
 * XREFs of NtUserLockWindowStation @ 0x1C012E1B0
 * Callers:
 *     <none>
 * Callees:
 *     _LockWindowStation @ 0x1C012E224 (_LockWindowStation.c)
 */

__int64 __fastcall NtUserLockWindowStation(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 1;
  v3 = ValidateHwinsta(a1, v2, 0LL, &Object);
  v8 = 0;
  if ( v3 >= 0 )
  {
    v8 = LockWindowStation(Object);
    ObfDereferenceObject(Object);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
