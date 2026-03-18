/*
 * XREFs of ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C008A204
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C0089838 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00CDEA8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C0089474 (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C00895E4 (GetLastTopMostWindow.c)
 *     GetTopMostInsertAfter @ 0x1C01D411C (GetTopMostInsertAfter.c)
 */

__int64 __fastcall CheckTopmost(struct tagWINDOWPOS *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  int v4; // eax
  __int64 v6; // rax
  struct tagWND *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  char v12; // cl
  __int64 v13; // rcx
  bool v14; // zf
  __int64 *v15; // rax
  __int64 *LastTopMostWindow; // rax
  __int64 v17; // rax
  __int64 *TopMostInsertAfter; // rax
  _QWORD *v19; // rax

  v2 = (_QWORD *)_HMObjectFromHandle(*(_QWORD *)a1);
  v3 = 0LL;
  v4 = *((_DWORD *)a1 + 8);
  if ( (v4 & 0x14) == 0
    && *((_QWORD *)a1 + 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && v2 != *(_QWORD **)(*(_QWORD *)(v2[2] + 424LL) + 128LL) )
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
      v13 = v2[5];
      if ( (*(_BYTE *)(v13 + 24) & 8) != 0 )
      {
        LastTopMostWindow = (__int64 *)GetLastTopMostWindow((__int64)v2);
        if ( LastTopMostWindow )
          v17 = *LastTopMostWindow;
        else
          v17 = 0LL;
        *((_QWORD *)a1 + 1) = v17;
        if ( v17 != *(_QWORD *)a1 )
          return 2LL;
        v14 = (*(_WORD *)(v2[5] + 42LL) & 0x3FFF) == 669;
      }
      else
      {
        v14 = (*(_WORD *)(v13 + 42) & 0x3FFF) == 669;
      }
      if ( !v14 )
      {
        v15 = (__int64 *)v2[12];
        if ( v15 )
          v3 = *v15;
      }
      *((_QWORD *)a1 + 1) = v3;
      return 2LL;
    case -1LL:
      if ( gHardErrorHandler )
      {
        TopMostInsertAfter = (__int64 *)GetTopMostInsertAfter(v2);
        if ( TopMostInsertAfter )
          v3 = *TopMostInsertAfter;
      }
      *((_QWORD *)a1 + 1) = v3;
      return 1LL;
    case 0LL:
      if ( (*(_BYTE *)(v2[5] + 24LL) & 8) == 0 )
      {
        v7 = CalcForegroundInsertAfter((__int64)v2);
        if ( v7 )
          v3 = *(_QWORD *)v7;
        *((_QWORD *)a1 + 1) = v3;
        return 0LL;
      }
      goto LABEL_9;
  }
  v8 = (__int64 *)GetLastTopMostWindow((__int64)v2);
  if ( v8 )
    v9 = *v8;
  else
    v9 = 0LL;
  v10 = *((_QWORD *)a1 + 1);
  if ( v10 == v9 )
    return 0LL;
  v11 = _HMObjectFromHandle(v10);
  v12 = *(_BYTE *)(v2[5] + 24LL);
  if ( (*(_BYTE *)(*(_QWORD *)(v11 + 40) + 24LL) & 8) != 0 )
  {
    if ( (v12 & 8) != 0 )
    {
LABEL_9:
      if ( gHardErrorHandler )
      {
        v19 = (_QWORD *)GetTopMostInsertAfter(v2);
        if ( v19 )
          *((_QWORD *)a1 + 1) = *v19;
      }
      return 0LL;
    }
    return 1LL;
  }
  if ( (v12 & 8) == 0 )
    return 0LL;
  return 2LL;
}
