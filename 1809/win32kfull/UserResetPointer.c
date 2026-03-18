/*
 * XREFs of UserResetPointer @ 0x1C00BD440
 * Callers:
 *     <none>
 * Callees:
 *     SetPointer @ 0x1C00BD490 (SetPointer.c)
 */

__int64 UserResetPointer()
{
  char v0; // bl
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( ExIsResourceAcquiredSharedLite(gpresUser) )
  {
    v0 = 0;
  }
  else
  {
    v0 = 1;
    EnterSharedCrit(0LL, 1LL);
  }
  SetPointer(0LL);
  result = SetPointer(1LL);
  if ( v0 )
    return UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
  return result;
}
