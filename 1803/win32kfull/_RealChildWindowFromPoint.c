/*
 * XREFs of _RealChildWindowFromPoint @ 0x1C02034F8
 * Callers:
 *     NtUserRealChildWindowFromPoint @ 0x1C01F3C90 (NtUserRealChildWindowFromPoint.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 */

_QWORD *__fastcall RealChildWindowFromPoint(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned int v9; // r9d
  unsigned int v10; // r10d
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  _QWORD *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v17; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp+28h] BYREF

  v18 = a2;
  if ( a1 )
  {
    v3 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 472);
    if ( (*(_BYTE *)(v3 + 224) & 1) == 0 )
    {
      v5 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3) + 472);
      if ( (*(_BYTE *)(v5 + 224) & 0x20) == 0 )
      {
        v6 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
        if ( (((unsigned __int16)(v6 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                v5,
                                                                                v4) >> 8)) & 0x1FF) != 0 )
          TransformPointBetweenCoordinateSpaces(&v18, &v18, a1, 0LL);
      }
    }
  }
  if ( a1 != GetDesktopWindow(a1) )
  {
    LODWORD(v18) = *(_DWORD *)(v7 + 104) + v18;
    HIDWORD(v18) += *(_DWORD *)(v7 + 108);
  }
  if ( !PtInRect((_DWORD *)(v7 + 104), v18) )
    return 0LL;
  v11 = *(_QWORD *)(v8 + 168);
  if ( v11 )
  {
    if ( !(unsigned int)GrePtInRegion(v11, v9, v10) )
      return 0LL;
  }
  v12 = *(_QWORD **)(a1 + 88);
  v13 = 0LL;
  v17 = v18;
  if ( !v12 )
    return (_QWORD *)a1;
  do
  {
    if ( (*(_BYTE *)(v12[5] + 31LL) & 0x10) != 0
      && (!(unsigned int)IsWindowDesktopComposed(v12) || !(unsigned int)GetWindowCloakState(v12)) )
    {
      TransformPointBetweenCoordinateSpaces(&v18, &v17, v12, a1);
      if ( PtInRect((_DWORD *)(v12[5] + 88LL), v18) )
      {
        v15 = *(_QWORD *)(v14 + 168);
        if ( !v15 || (unsigned int)GrePtInRegion(v15, (unsigned int)v18, HIDWORD(v18)) )
        {
          if ( *(_WORD *)(gpsi + 868LL) != *(_WORD *)(*(_QWORD *)(v12[14] + 8LL) + 2LL)
            || (*(_BYTE *)(v12[5] + 28LL) & 0xF) != 7 )
          {
            return v12;
          }
          v13 = v12;
        }
      }
    }
    v12 = (_QWORD *)v12[8];
  }
  while ( v12 );
  if ( !v13 )
    return (_QWORD *)a1;
  return v13;
}
