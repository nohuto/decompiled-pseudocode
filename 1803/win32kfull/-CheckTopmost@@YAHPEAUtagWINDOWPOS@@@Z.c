/*
 * XREFs of ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C006F7A8
 * Callers:
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00274E8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C006EF3C (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C006E5D8 (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C006E748 (GetLastTopMostWindow.c)
 *     GetTopMostInsertAfter @ 0x1C019EE14 (GetTopMostInsertAfter.c)
 */

__int64 __fastcall CheckTopmost(struct tagWINDOWPOS *a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rsi
  int v4; // edx
  __int64 v6; // rax
  struct tagWND *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  __int64 *v14; // rax
  __int64 *LastTopMostWindow; // rax
  __int64 v16; // rax
  __int64 *TopMostInsertAfter; // rax
  _QWORD *v18; // rax

  v1 = 0LL;
  v3 = *(_QWORD **)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)a1);
  v4 = *((_DWORD *)a1 + 8);
  if ( (v4 & 0x14) == 0
    && *((_QWORD *)a1 + 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && v3 != *(_QWORD **)(*(_QWORD *)(v3[2] + 424LL) + 120LL) )
  {
    *((_QWORD *)a1 + 1) = 0LL;
  }
  if ( (v4 & 4) != 0 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 1);
  switch ( v6 )
  {
    case 1LL:
      return 2LL;
    case -2LL:
      v12 = v3[5];
      if ( (*(_BYTE *)(v12 + 24) & 8) != 0 )
      {
        LastTopMostWindow = (__int64 *)GetLastTopMostWindow((__int64)v3);
        if ( LastTopMostWindow )
          v16 = *LastTopMostWindow;
        else
          v16 = 0LL;
        *((_QWORD *)a1 + 1) = v16;
        if ( v16 != *(_QWORD *)a1 )
          return 2LL;
        v13 = (*(_WORD *)(v3[5] + 42LL) & 0x3FFF) == 669;
      }
      else
      {
        v13 = (*(_WORD *)(v12 + 42) & 0x3FFF) == 669;
      }
      if ( !v13 )
      {
        v14 = (__int64 *)v3[9];
        if ( v14 )
          v1 = *v14;
      }
      *((_QWORD *)a1 + 1) = v1;
      return 2LL;
    case -1LL:
      if ( gHardErrorHandler )
      {
        TopMostInsertAfter = (__int64 *)GetTopMostInsertAfter(v3);
        if ( TopMostInsertAfter )
          v1 = *TopMostInsertAfter;
      }
      *((_QWORD *)a1 + 1) = v1;
      return 1LL;
    case 0LL:
      if ( (*(_BYTE *)(v3[5] + 24LL) & 8) == 0 )
      {
        v7 = CalcForegroundInsertAfter((__int64)v3);
        if ( v7 )
          v1 = *(_QWORD *)v7;
        *((_QWORD *)a1 + 1) = v1;
        return 0LL;
      }
      goto LABEL_9;
  }
  v8 = (__int64 *)GetLastTopMostWindow((__int64)v3);
  if ( v8 )
    v9 = *v8;
  else
    v9 = 0LL;
  v10 = *((_QWORD *)a1 + 1);
  if ( v10 == v9 )
    return 0LL;
  v11 = v3[5];
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(gpKernelHandleTable + 24LL * (unsigned __int16)v10) + 40LL) + 24LL) & 8) != 0 )
  {
    if ( (*(_BYTE *)(v11 + 24) & 8) != 0 )
    {
LABEL_9:
      if ( gHardErrorHandler )
      {
        v18 = (_QWORD *)GetTopMostInsertAfter(v3);
        if ( v18 )
          *((_QWORD *)a1 + 1) = *v18;
      }
      return 0LL;
    }
    return 1LL;
  }
  if ( (*(_BYTE *)(v11 + 24) & 8) == 0 )
    return 0LL;
  return 2LL;
}
