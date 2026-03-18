/*
 * XREFs of ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C006DAE0
 * Callers:
 *     <none>
 * Callees:
 *     _GetCurrentLogicalCursorThread @ 0x1C0015808 (_GetCurrentLogicalCursorThread.c)
 *     IsGpqForegroundAccessibleForPti @ 0x1C005DF90 (IsGpqForegroundAccessibleForPti.c)
 *     CheckGrantedAccess @ 0x1C005E558 (CheckGrantedAccess.c)
 *     CheckWinstaAttributeAccess @ 0x1C006A910 (CheckWinstaAttributeAccess.c)
 *     InForegroundQueue @ 0x1C006DBF0 (InForegroundQueue.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00733F0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall CheckCursorClipAccess(int a1, int a2)
{
  __int64 CurrentLogicalCursorThread; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v8; // rcx
  bool v9; // zf
  struct tagRECT v11; // [rsp+20h] [rbp-28h] BYREF

  CurrentLogicalCursorThread = GetCurrentLogicalCursorThread();
  v5 = CurrentLogicalCursorThread;
  if ( a1 )
  {
    v6 = a1 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 1LL;
      if ( (unsigned int)IsDesktopApp(*(_QWORD *)(CurrentLogicalCursorThread + 416)) )
        return 0LL;
      if ( !*(_DWORD *)(*(_QWORD *)(v5 + 416) + 876LL) )
        return 0LL;
      if ( !(unsigned int)InForegroundQueue((struct tagTHREADINFO *)v5, 0) )
        return 0LL;
      v8 = *(_QWORD *)(*(_QWORD *)(v5 + 416) + 824LL);
      if ( !v8 )
        return 0LL;
      v9 = (*(_DWORD *)(v8 + 100) & 1) == 0;
    }
    else
    {
      v9 = (unsigned int)CheckGrantedAccess(*(_DWORD *)(*(_QWORD *)(CurrentLogicalCursorThread + 416) + 680LL), 2u) == 0;
    }
    if ( v9 )
      return 0LL;
  }
  else
  {
    if ( **(_QWORD **)(CurrentLogicalCursorThread + 416) != gpepCSRSS
      && !(unsigned int)CheckWinstaAttributeAccess(16LL)
      && (!(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v5 + 416))
       || !(unsigned int)IsGpqForegroundAccessibleForPti(v5, 1)) )
    {
      return 0LL;
    }
    CCursorClip::GetClip(gpCursorClip, &v11);
    if ( *(_QWORD *)(v5 + 424) != gpqForeground && !a2 )
    {
      if ( (unsigned int)IsRectEmptyInl(&v11) )
        return 0LL;
    }
  }
  return 1LL;
}
