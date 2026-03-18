/*
 * XREFs of _anonymous_namespace_::CheckImmersiveForegroundAccess @ 0x1C00D7DC0
 * Callers:
 *     ?CanSetForegroundWindow@@YA?AW4ForegroundRightCheck@@PEBUtagWND@@@Z @ 0x1C00D7AF4 (-CanSetForegroundWindow@@YA-AW4ForegroundRightCheck@@PEBUtagWND@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C00D82B0 (_anonymous_namespace_--FAllowForegroundActivate.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C00CEDF0 (IsNonImmersiveBand.c)
 */

bool __fastcall anonymous_namespace_::CheckImmersiveForegroundAccess(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int64 v5; // rcx
  bool v6; // zf
  __int64 v8; // rdx
  __int64 v9; // rax

  if ( (*(_DWORD *)(a1 + 820) & 0x100) != 0 )
    return 1;
  v4 = *(_DWORD *)(a1 + 884);
  if ( v4 )
  {
    if ( v4 != *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 16) + 424LL) + 884LL)
      && !(unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) )
    {
      return 0;
    }
    if ( !(unsigned int)IsImmersiveAppRestricted(a1) || !gpqForeground )
      return 1;
    v8 = *(_QWORD *)(gpqForeground + 120LL);
    v9 = v8 ? *(_QWORD *)(v8 + 16) : *(_QWORD *)(gpqForeground + 96LL);
    if ( *(_DWORD *)(*(_QWORD *)(v9 + 424) + 884LL) == *(_DWORD *)(a1 + 884) )
      return 1;
    v6 = (unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) == 0;
  }
  else
  {
    if ( !(unsigned int)IsDesktopApp(a1) )
      return 1;
    if ( !gpqForeground )
      return 1;
    v5 = *(_QWORD *)(gpqForeground + 120LL);
    if ( !v5 )
      return 1;
    v6 = !IsNonImmersiveBand(v5);
  }
  return !v6;
}
