/*
 * XREFs of ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C000F8E0
 * Callers:
 *     ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C000F030 (-ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z @ 0x1C00391F4 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     CalcForegroundInsertAfter @ 0x1C000FD34 (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C000FEA0 (GetLastTopMostWindow.c)
 *     GetTopMostInsertAfter @ 0x1C01C03A4 (GetTopMostInsertAfter.c)
 */

__int64 __fastcall CheckTopmost(struct tagWINDOWPOS *a1)
{
  __int64 v1; // rbx
  _QWORD *v3; // rsi
  int v4; // edx
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  bool v13; // zf
  __int64 *v14; // rax
  __int64 *LastTopMostWindow; // rax
  __int64 v16; // rax
  __int64 *v17; // rax
  _QWORD *TopMostInsertAfter; // rax

  v1 = 0LL;
  v3 = *(_QWORD **)(gpKernelHandleTable + 24LL * (unsigned __int16)*(_DWORD *)a1);
  v4 = *((_DWORD *)a1 + 8);
  if ( (v4 & 0x14) == 0
    && *((_QWORD *)a1 + 1) <= 0xFFFFFFFFFFFFFFFDuLL
    && v3 != *(_QWORD **)(*(_QWORD *)(v3[2] + 432LL) + 120LL) )
  {
    *((_QWORD *)a1 + 1) = 0LL;
  }
  if ( (v4 & 4) != 0 )
    return 0LL;
  v6 = *((_QWORD *)a1 + 1);
  if ( v6 == 1 )
    return 2LL;
  if ( v6 == -2 )
  {
    v12 = v3[5];
    if ( (*(_BYTE *)(v12 + 24) & 8) != 0 )
    {
      LastTopMostWindow = (__int64 *)GetLastTopMostWindow(v3);
      if ( LastTopMostWindow )
        v16 = *LastTopMostWindow;
      else
        v16 = 0LL;
      *((_QWORD *)a1 + 1) = v16;
      if ( v16 != *(_QWORD *)a1 )
        return 2LL;
      v13 = (*(_WORD *)(v3[5] + 42LL) & 0x2FFF) == 669;
    }
    else
    {
      v13 = (*(_WORD *)(v12 + 42) & 0x2FFF) == 669;
    }
    if ( !v13 )
    {
      v14 = (__int64 *)v3[9];
      if ( v14 )
        v1 = *v14;
    }
    *((_QWORD *)a1 + 1) = v1;
    return 2LL;
  }
  if ( v6 != -1 )
  {
    if ( !v6 )
    {
      if ( (*(_BYTE *)(v3[5] + 24LL) & 8) == 0 )
      {
        v7 = (__int64 *)CalcForegroundInsertAfter(v3);
        if ( v7 )
          v1 = *v7;
        *((_QWORD *)a1 + 1) = v1;
        return 0LL;
      }
      goto LABEL_9;
    }
    v8 = (__int64 *)GetLastTopMostWindow(v3);
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
          TopMostInsertAfter = (_QWORD *)GetTopMostInsertAfter(v3);
          if ( TopMostInsertAfter )
            *((_QWORD *)a1 + 1) = *TopMostInsertAfter;
        }
        return 0LL;
      }
      return 1LL;
    }
    if ( (*(_BYTE *)(v11 + 24) & 8) == 0 )
      return 0LL;
    return 2LL;
  }
  if ( gHardErrorHandler )
  {
    v17 = (__int64 *)GetTopMostInsertAfter(v3);
    if ( v17 )
      v1 = *v17;
  }
  *((_QWORD *)a1 + 1) = v1;
  return 1LL;
}
