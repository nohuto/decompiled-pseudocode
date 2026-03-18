/*
 * XREFs of ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C0135350
 * Callers:
 *     <none>
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0014980 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0027140 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CheckGrantedAccess @ 0x1C005FC14 (CheckGrantedAccess.c)
 *     CheckWinstaAttributeAccess @ 0x1C00889B0 (CheckWinstaAttributeAccess.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00ED088 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C01352D8 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall CheckCursorClipAccess(int a1, int a2)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  struct tagTHREADINFO *v5; // rbx
  int v6; // edi
  __int64 v7; // rcx
  _QWORD *v9; // rdx
  bool v10; // zf
  struct tagRECT v12; // [rsp+20h] [rbp-28h] BYREF

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v5 = CurrentLogicalCursorThread;
  if ( a1 )
  {
    v6 = a1 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 1LL;
      if ( (unsigned int)IsDesktopApp(*((_QWORD *)CurrentLogicalCursorThread + 52)) )
        return 0LL;
      if ( !*(_DWORD *)(*((_QWORD *)v5 + 52) + 876LL) )
        return 0LL;
      if ( !InForegroundQueue((__int64 **)v5, 0) )
        return 0LL;
      v7 = *(_QWORD *)(*((_QWORD *)v5 + 52) + 824LL);
      if ( !v7 )
        return 0LL;
      v10 = (*(_DWORD *)(v7 + 100) & 1) == 0;
    }
    else
    {
      v10 = (unsigned int)CheckGrantedAccess(*(_DWORD *)(*((_QWORD *)CurrentLogicalCursorThread + 52) + 680LL), 2u) == 0;
    }
    if ( v10 )
      return 0LL;
  }
  else
  {
    v9 = (_QWORD *)*((_QWORD *)CurrentLogicalCursorThread + 52);
    if ( *v9 != gpepCSRSS
      && !(unsigned int)CheckWinstaAttributeAccess(16LL, (__int64)v9)
      && (!(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v5 + 52))
       || !(unsigned int)IsGpqForegroundAccessibleExplicit(
                           1,
                           v5,
                           *(_QWORD *)(*((_QWORD *)v5 + 52) + 872LL),
                           *(_DWORD *)(*((_QWORD *)v5 + 52) + 12LL) & 0x80000000)) )
    {
      return 0LL;
    }
    CCursorClip::GetClip(gpCursorClip, &v12);
    if ( *((_QWORD *)v5 + 53) != gpqForeground && !a2 && IsRectEmptyInl(&v12) )
      return 0LL;
  }
  return 1LL;
}
