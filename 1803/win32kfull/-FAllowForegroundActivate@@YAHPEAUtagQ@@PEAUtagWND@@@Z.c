/*
 * XREFs of ?FAllowForegroundActivate@@YAHPEAUtagQ@@PEAUtagWND@@@Z @ 0x1C006D4A8
 * Callers:
 *     xxxSetFocus @ 0x1C005E8B0 (xxxSetFocus.c)
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 * Callees:
 *     FRemoveForegroundActivate @ 0x1C006D5D4 (FRemoveForegroundActivate.c)
 *     IsForegroundLocked @ 0x1C006DCE8 (IsForegroundLocked.c)
 *     ?CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1C006DD10 (-CheckImmersiveForegroundAccess@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     IAMThreadAccessGranted @ 0x1C0070890 (IAMThreadAccessGranted.c)
 *     IsImmersiveBandOrShellManaged @ 0x1C010A808 (IsImmersiveBandOrShellManaged.c)
 */

__int64 __fastcall FAllowForegroundActivate(struct tagQ *a1, struct tagWND *a2)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // rcx

  v4 = *(_QWORD *)(gptiCurrent + 416LL);
  v5 = 0;
  if ( !(unsigned int)FRemoveForegroundActivate(gptiCurrent) )
    return 0LL;
  if ( *(_QWORD *)(gptiCurrent + 448LL) != grpdeskRitInput )
    return 0LL;
  if ( (struct tagQ *)gpqForeground == a1 )
    return 0LL;
  if ( (unsigned int)IsForegroundLocked() )
    return 0LL;
  v7 = *((_QWORD *)a2 + 5);
  if ( (*(_BYTE *)(v7 + 27) & 8) != 0 || *(_DWORD *)(v7 + 236) == 15 )
    return 0LL;
  if ( (unsigned int)IAMThreadAccessGranted(gptiCurrent) || *(int *)(v4 + 12) < 0 )
    return 1LL;
  if ( (unsigned int)IsImmersiveBroker(v4)
    && (unsigned int)IsImmersiveBandOrShellManaged(a2)
    && (*(_BYTE *)(*((_QWORD *)a2 + 5) + 234LL) & 0x10) == 0 )
  {
    return 0LL;
  }
  if ( (unsigned int)IsImmersiveBroker(v4) )
  {
    if ( gpqForeground )
    {
      v8 = *(_QWORD *)(gpqForeground + 120LL);
      if ( v8 )
      {
        if ( (unsigned int)IsImmersiveBandOrShellManaged(v8) )
          return 0LL;
      }
    }
  }
  LOBYTE(v5) = (unsigned int)CheckImmersiveForegroundAccess((struct tagPROCESSINFO *)v4, a2) != 0;
  return v5;
}
