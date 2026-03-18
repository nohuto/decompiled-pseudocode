/*
 * XREFs of ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C006DD10
 * Callers:
 *     ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C006D4A8 (-FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z.c)
 *     CheckForegroundRight @ 0x1C006DE0C (CheckForegroundRight.c)
 * Callees:
 *     IsNonImmersiveBand @ 0x1C005F640 (IsNonImmersiveBand.c)
 */

_BOOL8 __fastcall CheckImmersiveForegroundAccess(struct tagPROCESSINFO *a1, struct tagWND *a2)
{
  int v4; // edx
  __int64 v5; // rcx
  bool v6; // zf
  __int64 v8; // rdx
  __int64 v9; // rax

  if ( (*((_DWORD *)a1 + 203) & 0x100) != 0 )
    return 1LL;
  v4 = *((_DWORD *)a1 + 219);
  if ( v4 )
  {
    if ( v4 != *(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 416LL) + 876LL)
      && !(unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) )
    {
      return 0LL;
    }
    if ( !(unsigned int)IsImmersiveAppRestricted(a1) || !gpqForeground )
      return 1LL;
    v8 = *(_QWORD *)(gpqForeground + 120LL);
    v9 = v8 ? *(_QWORD *)(v8 + 16) : *(_QWORD *)(gpqForeground + 96LL);
    if ( *(_DWORD *)(*(_QWORD *)(v9 + 416) + 876LL) == *((_DWORD *)a1 + 219) )
      return 1LL;
    v6 = (unsigned __int8)SeIsParentOfChildAppContainer(gSessionId) == 0;
  }
  else
  {
    if ( !(unsigned int)IsDesktopApp(a1) )
      return 1LL;
    if ( !gpqForeground )
      return 1LL;
    v5 = *(_QWORD *)(gpqForeground + 120LL);
    if ( !v5 )
      return 1LL;
    v6 = !IsNonImmersiveBand(v5);
  }
  return !v6;
}
