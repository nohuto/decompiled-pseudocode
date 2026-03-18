/*
 * XREFs of _RealChildWindowFromPoint @ 0x1C0244F94
 * Callers:
 *     NtUserRealChildWindowFromPoint @ 0x1C0233490 (NtUserRealChildWindowFromPoint.c)
 * Callees:
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowCloakState @ 0x1C00C8BCC (GetWindowCloakState.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 */

_QWORD *__fastcall RealChildWindowFromPoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r8
  unsigned int v25; // r9d
  unsigned int v26; // r10d
  __int64 v27; // rcx
  _QWORD *v28; // rbx
  _QWORD *v29; // rsi
  __int64 v30; // r8
  __int64 v31; // rcx
  unsigned __int64 v33; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp+28h] BYREF

  v34 = a2;
  if ( a1 )
  {
    v5 = 1;
    v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 472);
    if ( (*(_BYTE *)(v6 + 224) & 1) == 0 )
    {
      v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8) + 472);
      if ( (*(_BYTE *)(v10 + 224) & 0x20) == 0 )
      {
        v13 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
        if ( (((unsigned __int16)(v13 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                 v10,
                                                                                 v9,
                                                                                 v11,
                                                                                 v12) >> 8)) & 0x1FF) != 0 )
          goto LABEL_13;
        v17 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL);
        v18 = (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) == 2 && (v17 & 0x20000000) != 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v17, v14, v15, v16) & 0xF) != 2
          || (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0x20000000) == 0 )
        {
          v5 = 0;
        }
        if ( v18 != v5 )
LABEL_13:
          TransformPointBetweenCoordinateSpaces(&v34, &v34, a1, 0LL);
      }
    }
  }
  if ( a1 != GetDesktopWindow(a1) )
  {
    LODWORD(v34) = *(_DWORD *)(v23 + 104) + v34;
    HIDWORD(v34) += *(_DWORD *)(v23 + 108);
  }
  if ( !PtInRect((_DWORD *)(v23 + 104), v34) )
    return 0LL;
  v27 = *(_QWORD *)(v24 + 168);
  if ( v27 )
  {
    if ( !(unsigned int)GrePtInRegion(v27, v25, v26) )
      return 0LL;
  }
  v28 = *(_QWORD **)(a1 + 112);
  v29 = 0LL;
  v33 = v34;
  if ( !v28 )
    return (_QWORD *)a1;
  do
  {
    if ( (*(_BYTE *)(v28[5] + 31LL) & 0x10) != 0
      && (!(unsigned int)IsWindowDesktopComposed(v28) || !(unsigned int)GetWindowCloakState(v28)) )
    {
      TransformPointBetweenCoordinateSpaces(&v34, &v33, v28, a1);
      if ( PtInRect((_DWORD *)(v28[5] + 88LL), v34) )
      {
        v31 = *(_QWORD *)(v30 + 168);
        if ( !v31 || (unsigned int)GrePtInRegion(v31, (unsigned int)v34, HIDWORD(v34)) )
        {
          if ( *(_WORD *)(gpsi + 868LL) != *(_WORD *)(*(_QWORD *)(v28[17] + 8LL) + 2LL)
            || (*(_BYTE *)(v28[5] + 28LL) & 0xF) != 7 )
          {
            return v28;
          }
          v29 = v28;
        }
      }
    }
    v28 = (_QWORD *)v28[11];
  }
  while ( v28 );
  if ( !v29 )
    return (_QWORD *)a1;
  return v29;
}
