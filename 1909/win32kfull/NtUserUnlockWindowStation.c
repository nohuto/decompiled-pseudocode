/*
 * XREFs of NtUserUnlockWindowStation @ 0x1C0115910
 * Callers:
 *     <none>
 * Callees:
 *     _UnlockWindowStation @ 0x1C0115984 (_UnlockWindowStation.c)
 */

__int64 __fastcall NtUserUnlockWindowStation(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // ebx
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 1;
  v3 = ValidateHwinsta(a1, v2, 0LL, &Object);
  v5 = 0;
  if ( v3 >= 0 )
  {
    v5 = UnlockWindowStation(Object);
    ObfDereferenceObject(Object);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
