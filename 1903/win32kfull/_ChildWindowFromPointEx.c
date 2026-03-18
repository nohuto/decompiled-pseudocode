/*
 * XREFs of _ChildWindowFromPointEx @ 0x1C015AF5C
 * Callers:
 *     NtUserChildWindowFromPointEx @ 0x1C015AEE0 (NtUserChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247848 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     LayerHitTest @ 0x1C0007D84 (LayerHitTest.c)
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowCloakState @ 0x1C00C8BCC (GetWindowCloakState.c)
 *     _GetDesktopWindow @ 0x1C00CADE0 (_GetDesktopWindow.c)
 */

_QWORD *__fastcall ChildWindowFromPointEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r14
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
  int v23; // eax
  __int64 v24; // r8
  int v25; // r9d
  __int64 v26; // r8
  unsigned int v27; // r9d
  unsigned int v28; // r10d
  __int64 v29; // rcx
  __int64 v30; // rcx
  _QWORD *v31; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  unsigned __int64 v36; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v37; // [rsp+48h] [rbp+28h] BYREF

  v37 = a2;
  v4 = a3;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4) + 472) + 224LL) & 1) == 0 )
    {
      v10 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8) + 472);
      if ( (*(_BYTE *)(v10 + 224) & 0x20) == 0 )
      {
        v13 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
        if ( (((unsigned __int16)(v13 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                 v10,
                                                                                 v9,
                                                                                 v11,
                                                                                 v12) >> 8)) & 0x1FF) != 0
          || ((v17 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL),
               (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) != 2)
           || (v17 & 0x20000000) == 0
            ? (v18 = 0)
            : (v18 = 1),
              (W32GetCurrentThreadDpiAwarenessContext(v17, v14, v15, v16) & 0xF) != 2
           || (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v21, v22) & 0x20000000) == 0
            ? (v23 = 0)
            : (v23 = 1),
              v18 != v23) )
        {
          TransformPointBetweenCoordinateSpaces(&v37, &v37, a1, 0LL);
        }
      }
    }
  }
  if ( a1 != GetDesktopWindow(a1) )
  {
    if ( (*(_BYTE *)(v24 + 26) & 0x40) != 0 )
      v25 = *(_DWORD *)(v24 + 112) - v37;
    else
      v25 = *(_DWORD *)(v24 + 104) + v37;
    LODWORD(v37) = v25;
    HIDWORD(v37) += *(_DWORD *)(v24 + 108);
  }
  v36 = v37;
  if ( !PtInRect((_DWORD *)(v24 + 104), v37) )
    return 0LL;
  v29 = *(_QWORD *)(v26 + 168);
  if ( v29 )
  {
    if ( !(unsigned int)GrePtInRegion(v29, v27, v28) )
      return 0LL;
  }
  v30 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v30 + 26) & 8) != 0 && (*(_DWORD *)(v30 + 232) & 0x20) == 0 && !LayerHitTest(a1, v37) )
    return 0LL;
  v31 = *(_QWORD **)(a1 + 112);
  if ( !v31 )
    return (_QWORD *)a1;
  while ( 1 )
  {
    TransformPointBetweenCoordinateSpaces(&v37, &v36, v31, a1);
    if ( (v4 & 1) != 0
      && ((*(_BYTE *)(v31[5] + 31LL) & 0x10) == 0
       || (unsigned int)IsWindowDesktopComposed(v31) && (unsigned int)GetWindowCloakState(v31))
      || (v4 & 2) != 0 && (*(_BYTE *)(v31[5] + 31LL) & 8) != 0
      || (v4 & 4) != 0 && (*(_BYTE *)(v31[5] + 24LL) & 0x20) != 0
      || !PtInRect((_DWORD *)(v31[5] + 88LL), v37) )
    {
      goto LABEL_27;
    }
    v35 = *(_QWORD *)(v34 + 168);
    if ( !v35 )
      break;
    if ( (unsigned int)GrePtInRegion(v35, (unsigned int)v37, HIDWORD(v37)) )
    {
      v33 = v37;
      break;
    }
LABEL_27:
    v31 = (_QWORD *)v31[11];
    if ( !v31 )
      return (_QWORD *)a1;
  }
  if ( (*(_BYTE *)(v31[5] + 26LL) & 8) != 0
    && (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x20) == 0
    && !LayerHitTest((__int64)v31, v33) )
  {
    goto LABEL_27;
  }
  return v31;
}
