/*
 * XREFs of _ChildWindowFromPointEx @ 0x1C015BF0C
 * Callers:
 *     NtUserChildWindowFromPointEx @ 0x1C015BE90 (NtUserChildWindowFromPointEx.c)
 *     ?xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z @ 0x1C0247108 (-xxxQueryDropObject@@YAPEAUtagCURSOR@@PEAUtagWND@@PEAUtagDROPSTRUCT@@@Z.c)
 * Callees:
 *     LayerHitTest @ 0x1C0007D84 (LayerHitTest.c)
 *     PtInRect @ 0x1C002D424 (PtInRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     GetWindowCloakState @ 0x1C006A29C (GetWindowCloakState.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

_QWORD *__fastcall ChildWindowFromPointEx(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r14
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
  int v18; // eax
  __int64 v19; // r8
  int v20; // r9d
  __int64 v21; // r8
  unsigned int v22; // r9d
  unsigned int v23; // r10d
  __int64 v24; // rcx
  __int64 v25; // rcx
  _QWORD *v26; // rbx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  unsigned __int64 v31; // [rsp+40h] [rbp+20h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp+28h] BYREF

  v32 = a2;
  v3 = a3;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) + 472) + 224LL) & 1) == 0 )
    {
      v8 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6) + 472);
      if ( (*(_BYTE *)(v8 + 224) & 0x20) == 0 )
      {
        v10 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
        if ( (((unsigned __int16)(v10 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                 v8,
                                                                                 v7,
                                                                                 v9) >> 8)) & 0x1FF) != 0
          || ((v13 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL),
               (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) & 0xF) != 2)
           || (v13 & 0x20000000) == 0
            ? (v14 = 0)
            : (v14 = 1),
              (W32GetCurrentThreadDpiAwarenessContext(v13, v11, v12) & 0xF) != 2
           || (W32GetCurrentThreadDpiAwarenessContext(v16, v15, v17) & 0x20000000) == 0
            ? (v18 = 0)
            : (v18 = 1),
              v14 != v18) )
        {
          TransformPointBetweenCoordinateSpaces(&v32, &v32, a1, 0LL);
        }
      }
    }
  }
  if ( a1 != GetDesktopWindow(a1) )
  {
    if ( (*(_BYTE *)(v19 + 26) & 0x40) != 0 )
      v20 = *(_DWORD *)(v19 + 112) - v32;
    else
      v20 = *(_DWORD *)(v19 + 104) + v32;
    LODWORD(v32) = v20;
    HIDWORD(v32) += *(_DWORD *)(v19 + 108);
  }
  v31 = v32;
  if ( !PtInRect((_DWORD *)(v19 + 104), v32) )
    return 0LL;
  v24 = *(_QWORD *)(v21 + 168);
  if ( v24 )
  {
    if ( !(unsigned int)GrePtInRegion(v24, v22, v23) )
      return 0LL;
  }
  v25 = *(_QWORD *)(a1 + 40);
  if ( (*(_BYTE *)(v25 + 26) & 8) != 0 && (*(_DWORD *)(v25 + 232) & 0x20) == 0 && !LayerHitTest(a1, v32) )
    return 0LL;
  v26 = *(_QWORD **)(a1 + 112);
  if ( !v26 )
    return (_QWORD *)a1;
  while ( 1 )
  {
    TransformPointBetweenCoordinateSpaces(&v32, &v31, v26, a1);
    if ( (v3 & 1) != 0
      && ((*(_BYTE *)(v26[5] + 31LL) & 0x10) == 0
       || (unsigned int)IsWindowDesktopComposed(v26) && (unsigned int)GetWindowCloakState(v26))
      || (v3 & 2) != 0 && (*(_BYTE *)(v26[5] + 31LL) & 8) != 0
      || (v3 & 4) != 0 && (*(_BYTE *)(v26[5] + 24LL) & 0x20) != 0
      || !PtInRect((_DWORD *)(v26[5] + 88LL), v32) )
    {
      goto LABEL_27;
    }
    v30 = *(_QWORD *)(v29 + 168);
    if ( !v30 )
      break;
    if ( (unsigned int)GrePtInRegion(v30, (unsigned int)v32, HIDWORD(v32)) )
    {
      v28 = v32;
      break;
    }
LABEL_27:
    v26 = (_QWORD *)v26[11];
    if ( !v26 )
      return (_QWORD *)a1;
  }
  if ( (*(_BYTE *)(v26[5] + 26LL) & 8) != 0
    && (*(_DWORD *)(*(_QWORD *)(a1 + 40) + 232LL) & 0x20) == 0
    && !LayerHitTest((__int64)v26, v28) )
  {
    goto LABEL_27;
  }
  return v26;
}
