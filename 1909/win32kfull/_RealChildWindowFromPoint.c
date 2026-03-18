/*
 * XREFs of _RealChildWindowFromPoint @ 0x1C0244854
 * Callers:
 *     NtUserRealChildWindowFromPoint @ 0x1C0232E70 (NtUserRealChildWindowFromPoint.c)
 * Callees:
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowCloakState @ 0x1C006A29C (GetWindowCloakState.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall RealChildWindowFromPoint(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  unsigned int v20; // r9d
  unsigned int v21; // r10d
  __int64 v22; // rcx
  _QWORD *v23; // rbx
  _QWORD *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // rcx
  unsigned __int64 v28; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp+28h] BYREF

  v29 = a2;
  if ( a1 )
  {
    v4 = 1;
    v5 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 472);
    if ( (*(_BYTE *)(v5 + 224) & 1) == 0 )
    {
      v8 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6) + 472);
      if ( (*(_BYTE *)(v8 + 224) & 0x20) == 0 )
      {
        v10 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
        if ( (((unsigned __int16)(v10 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                 v8,
                                                                                 v7,
                                                                                 v9) >> 8)) & 0x1FF) != 0 )
          goto LABEL_13;
        v13 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL);
        v14 = (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) == 2 && (v13 & 0x20000000) != 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v13, v11, v12) & 0xF) != 2
          || (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17) & 0x20000000) == 0 )
        {
          v4 = 0;
        }
        if ( v14 != v4 )
LABEL_13:
          TransformPointBetweenCoordinateSpaces(&v29, &v29, a1, 0LL);
      }
    }
  }
  if ( a1 != GetDesktopWindow(a1) )
  {
    LODWORD(v29) = *(_DWORD *)(v18 + 104) + v29;
    HIDWORD(v29) += *(_DWORD *)(v18 + 108);
  }
  if ( !PtInRect((_DWORD *)(v18 + 104), v29) )
    return 0LL;
  v22 = *(_QWORD *)(v19 + 168);
  if ( v22 )
  {
    if ( !(unsigned int)GrePtInRegion(v22, v20, v21) )
      return 0LL;
  }
  v23 = *(_QWORD **)(a1 + 112);
  v24 = 0LL;
  v28 = v29;
  if ( !v23 )
    return (_QWORD *)a1;
  do
  {
    if ( (*(_BYTE *)(v23[5] + 31LL) & 0x10) != 0
      && (!(unsigned int)IsWindowDesktopComposed(v23) || !(unsigned int)GetWindowCloakState(v23)) )
    {
      TransformPointBetweenCoordinateSpaces(&v29, &v28, v23, a1);
      if ( PtInRect((_DWORD *)(v23[5] + 88LL), v29) )
      {
        v26 = *(_QWORD *)(v25 + 168);
        if ( !v26 || (unsigned int)GrePtInRegion(v26, (unsigned int)v29, HIDWORD(v29)) )
        {
          if ( *(_WORD *)(gpsi + 868LL) != *(_WORD *)(*(_QWORD *)(v23[17] + 8LL) + 2LL)
            || (*(_BYTE *)(v23[5] + 28LL) & 0xF) != 7 )
          {
            return v23;
          }
          v24 = v23;
        }
      }
    }
    v23 = (_QWORD *)v23[11];
  }
  while ( v23 );
  if ( !v24 )
    return (_QWORD *)a1;
  return v24;
}
