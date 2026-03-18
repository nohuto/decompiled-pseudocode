/*
 * XREFs of NtUserCanBrokerForceForeground @ 0x1C0005560
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NXZ @ 0x1C00D7EC8 (-CheckCanonicalForegroundAccess@@YA_NXZ.c)
 */

__int64 __fastcall NtUserCanBrokerForceForeground(_DWORD *a1)
{
  int v2; // ebx
  BOOL v3; // edx
  __int64 v5; // [rsp+58h] [rbp+10h]

  v5 = EnterSharedCrit(0LL, 1LL);
  v2 = 0;
  if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(v5 + 424)) )
  {
    v3 = CheckCanonicalForegroundAccess();
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      a1 = (_DWORD *)MmUserProbeAddress;
    *a1 = v3;
    v2 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
