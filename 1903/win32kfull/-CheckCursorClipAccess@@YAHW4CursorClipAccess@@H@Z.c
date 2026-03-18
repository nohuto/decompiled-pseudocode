/*
 * XREFs of ?CheckCursorClipAccess@@YAHW4CursorClipAccess@@H@Z @ 0x1C0127140
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0031B80 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     CheckWinstaAttributeAccess @ 0x1C0089140 (CheckWinstaAttributeAccess.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0091FF0 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     CheckGrantedAccess @ 0x1C00BE534 (CheckGrantedAccess.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C0112468 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 *     ?InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z @ 0x1C0127258 (-InForegroundQueue@@YAHPEBUtagTHREADINFO@@H@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall CheckCursorClipAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  int v5; // edi
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rax
  struct tagTHREADINFO *v7; // rbx
  int v8; // edi
  __int64 v9; // rcx
  _QWORD *v11; // rdx
  bool v12; // zf
  struct tagRECT v14; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  v5 = a1;
  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread(a1, a2, a3, a4);
  v7 = CurrentLogicalCursorThread;
  if ( v5 )
  {
    v8 = v5 - 1;
    if ( v8 )
    {
      if ( v8 != 1 )
        return 1LL;
      if ( (unsigned int)IsDesktopApp(*((_QWORD *)CurrentLogicalCursorThread + 52)) )
        return 0LL;
      if ( !*(_DWORD *)(*((_QWORD *)v7 + 52) + 876LL) )
        return 0LL;
      if ( !(unsigned int)InForegroundQueue(v7, 0) )
        return 0LL;
      v9 = *(_QWORD *)(*((_QWORD *)v7 + 52) + 824LL);
      if ( !v9 )
        return 0LL;
      v12 = (*(_DWORD *)(v9 + 100) & 1) == 0;
    }
    else
    {
      v12 = (unsigned int)CheckGrantedAccess(*(_DWORD *)(*((_QWORD *)CurrentLogicalCursorThread + 52) + 680LL), 2u) == 0;
    }
    if ( v12 )
      return 0LL;
  }
  else
  {
    v11 = (_QWORD *)*((_QWORD *)CurrentLogicalCursorThread + 52);
    if ( *v11 != gpepCSRSS
      && !(unsigned int)CheckWinstaAttributeAccess(16LL, (__int64)v11)
      && (!(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)v7 + 52))
       || !(unsigned int)IsGpqForegroundAccessibleExplicit(
                           1,
                           v7,
                           *(_QWORD *)(*((_QWORD *)v7 + 52) + 872LL),
                           *(_DWORD *)(*((_QWORD *)v7 + 52) + 12LL) & 0x80000000)) )
    {
      return 0LL;
    }
    CCursorClip::GetClip(gpCursorClip, &v14);
    if ( *((_QWORD *)v7 + 53) != gpqForeground && !v4 && IsRectEmptyInl(&v14) )
      return 0LL;
  }
  return 1LL;
}
