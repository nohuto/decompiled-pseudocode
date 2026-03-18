/*
 * XREFs of ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C006F4AC
 * Callers:
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z @ 0x1C006F3E0 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@11PEAPEAUHWND__@@2@Z.c)
 * Callees:
 *     ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C006C050 (-GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     CalcForegroundInsertAfter @ 0x1C006E5D8 (CalcForegroundInsertAfter.c)
 *     GetLastTopMostWindow @ 0x1C006E748 (GetLastTopMostWindow.c)
 *     ?IsLastTopMostWindow@@YAHPEBUtagWND@@@Z @ 0x1C010E090 (-IsLastTopMostWindow@@YAHPEBUtagWND@@@Z.c)
 */

__int64 __fastcall TrackBackground(
        struct tagWINDOWPOS *a1,
        struct tagWND *a2,
        struct tagWND *a3,
        struct tagWND *a4,
        struct tagWND *a5,
        struct tagWND *a6)
{
  __int64 v6; // rbx
  __int64 *LastTopMostWindow; // r9
  __int64 v11; // rdx

  v6 = 0LL;
  if ( !a3
    || *((_QWORD *)a2 + 2) == gptiForeground
    || ((*(_BYTE *)(*((_QWORD *)a3 + 5) + 19LL) & 4 ^ (*(unsigned __int8 *)(*((_QWORD *)a3 + 5) + 24LL) >> 1) & 4) & 0xFFFFFFFC) == 0
    || (*(_BYTE *)(*((_QWORD *)a2 + 5) + 24LL) & 8) != 0 )
  {
    return 0LL;
  }
  if ( a4 || (a4 = CalcForegroundInsertAfter((__int64)a2)) != 0LL )
  {
    if ( !a6 || *(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) != gpqForeground || !(unsigned int)IsLastTopMostWindow(a4) )
    {
      if ( !(unsigned int)IsLastTopMostWindow(a4) && a5 == GetRootOwner(a2) )
      {
        v11 = *((_QWORD *)a5 + 2);
        if ( *(_QWORD *)(v11 + 1376) )
        {
          if ( *(_QWORD *)(v11 + 424) == gpqForeground && a5 == *(struct tagWND **)(gpqForeground + 120LL) )
            LastTopMostWindow = (__int64 *)GetLastTopMostWindow((__int64)a2);
        }
      }
      if ( LastTopMostWindow )
        v6 = *LastTopMostWindow;
      goto LABEL_12;
    }
    return 0LL;
  }
LABEL_12:
  *((_QWORD *)a1 + 1) = v6;
  return 1LL;
}
