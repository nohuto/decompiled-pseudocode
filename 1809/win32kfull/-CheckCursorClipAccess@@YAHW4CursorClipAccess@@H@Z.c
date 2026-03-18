/*
 * XREFs of ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C00D8060
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C006B480 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C007AA94 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C00A56F0 (CheckWinstaAttributeAccess.c)
 *     CheckGrantedAccess @ 0x1C00AA204 (CheckGrantedAccess.c)
 *     IsGpqForegroundAccessibleForPti @ 0x1C00AFFE8 (IsGpqForegroundAccessibleForPti.c)
 *     InForegroundQueue @ 0x1C00D7FE0 (InForegroundQueue.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall CheckCursorClipAccess(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // edi
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  __int64 v5; // rbx
  int v6; // edi
  __int64 v8; // rcx
  bool v9; // zf
  struct tagRECT v10; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  v3 = a1;
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread(a1, a2);
  v5 = (__int64)CurrentLogicalCursorThread;
  if ( v3 )
  {
    v6 = v3 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 1LL;
      if ( (unsigned int)IsDesktopApp(*((_QWORD *)CurrentLogicalCursorThread + 53)) )
        return 0LL;
      if ( !*(_DWORD *)(*(_QWORD *)(v5 + 424) + 884LL) )
        return 0LL;
      if ( !InForegroundQueue((__int64 **)v5, 0) )
        return 0LL;
      v8 = *(_QWORD *)(*(_QWORD *)(v5 + 424) + 832LL);
      if ( !v8 )
        return 0LL;
      v9 = (*(_DWORD *)(v8 + 100) & 1) == 0;
    }
    else
    {
      v9 = (unsigned int)CheckGrantedAccess(*(_DWORD *)(*((_QWORD *)CurrentLogicalCursorThread + 53) + 688LL), 2u) == 0;
    }
    if ( v9 )
      return 0LL;
  }
  else
  {
    if ( **((_QWORD **)CurrentLogicalCursorThread + 53) != gpepCSRSS
      && !(unsigned int)CheckWinstaAttributeAccess(16LL)
      && (!(unsigned int)IsImmersiveAppRestricted(*(_QWORD *)(v5 + 424))
       || !(unsigned int)IsGpqForegroundAccessibleForPti(v5, 1)) )
    {
      return 0LL;
    }
    CCursorClip::GetClip(gpCursorClip, &v10);
    if ( *(_QWORD *)(v5 + 432) != gpqForeground && !v2 && IsRectEmptyInl(&v10) )
      return 0LL;
  }
  return 1LL;
}
