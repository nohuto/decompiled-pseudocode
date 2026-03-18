/*
 * XREFs of NtUserCanBrokerForceForeground @ 0x1C0007DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C0017788 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 */

__int64 __fastcall NtUserCanBrokerForceForeground(_DWORD *a1)
{
  int v2; // ebx
  int v3; // edx
  __int64 v5; // [rsp+58h] [rbp+10h]

  v5 = EnterSharedCrit(0LL, 1LL);
  v2 = 0;
  if ( (unsigned int)IsImmersiveBroker(*(_QWORD *)(v5 + 416)) )
  {
    v3 = (unsigned __int8)CheckCanonicalForegroundAccess(0LL);
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
