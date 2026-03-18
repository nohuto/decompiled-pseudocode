/*
 * XREFs of _ChildWindowFromPointEx @ 0x1C014FF1C
 * Callers:
 *     NtUserChildWindowFromPointEx @ 0x1C014FEA0 (NtUserChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C022EFE0 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     LayerHitTest @ 0x1C0005498 (LayerHitTest.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 */

__int64 __fastcall ChildWindowFromPointEx(__int64 a1, __int64 a2, char a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // r8
  unsigned int v12; // r9d
  unsigned int v13; // r10d
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rbx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned __int64 v21; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp+28h] BYREF

  v22 = a2;
  if ( a1 )
  {
    v5 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2) + 480);
    if ( (*(_BYTE *)(v5 + 224) & 1) == 0 )
    {
      v7 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5) + 480);
      if ( (*(_BYTE *)(v7 + 224) & 0x20) == 0 )
      {
        v8 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
        if ( (((unsigned __int16)(v8 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                v7,
                                                                                v6) >> 8)) & 0x1FF) != 0 )
          TransformPointBetweenCoordinateSpaces(&v22, &v22, a1, 0LL);
      }
    }
  }
  if ( a1 != GetDesktopWindow(a1) )
  {
    if ( (*(_BYTE *)(v9 + 26) & 0x40) != 0 )
      v10 = *(_DWORD *)(v9 + 112) - v22;
    else
      v10 = *(_DWORD *)(v9 + 104) + v22;
    LODWORD(v22) = v10;
    HIDWORD(v22) += *(_DWORD *)(v9 + 108);
  }
  v21 = v22;
  if ( !PtInRect((_DWORD *)(v9 + 104), v22) )
    return 0LL;
  v14 = *(_QWORD *)(v11 + 168);
  if ( v14 )
  {
    if ( !(unsigned int)GrePtInRegion(v14, v12, v13) )
      return 0LL;
  }
  v15 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v15 + 26) & 8) != 0 && (*(_DWORD *)(v15 + 232) & 0x20) == 0 && !LayerHitTest(a1, v22) )
    return 0LL;
  v16 = *(_QWORD *)(a1 + 88);
  if ( !v16 )
    return a1;
  while ( 1 )
  {
    TransformPointBetweenCoordinateSpaces(&v22, &v21, v16, a1);
    if ( (a3 & 1) != 0
      && ((*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 0x10) == 0
       || (unsigned int)IsWindowDesktopComposed(v16) && (unsigned int)GetWindowCloakState(v16))
      || (a3 & 2) != 0 && (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 31LL) & 8) != 0
      || (a3 & 4) != 0 && (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 24LL) & 0x20) != 0
      || !PtInRect((_DWORD *)(*(_QWORD *)(v16 + 40) + 88LL), v22) )
    {
      goto LABEL_18;
    }
    v20 = *(_QWORD *)(v19 + 168);
    if ( !v20 )
      break;
    if ( (unsigned int)GrePtInRegion(v20, (unsigned int)v22, HIDWORD(v22)) )
    {
      v18 = v22;
      break;
    }
LABEL_18:
    v16 = *(_QWORD *)(v16 + 64);
    if ( !v16 )
      return a1;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(v16 + 40) + 26LL) & 8) != 0
    && (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x20) == 0
    && !LayerHitTest(v16, v18) )
  {
    goto LABEL_18;
  }
  return v16;
}
