/*
 * XREFs of CalcForegroundInsertAfter @ 0x1C0089474
 * Callers:
 *     ?CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0089448 (-CalcForegroundInsertAfterComponentUIAware@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z @ 0x1C0089D9C (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@1111@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C008A204 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C008E698 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     ?CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1C01E1998 (-CheckOnTop@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@I@Z.c)
 * Callees:
 *     GetLastTopMostWindow @ 0x1C00895E4 (GetLastTopMostWindow.c)
 *     ?GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z @ 0x1C008C564 (-GetLastNonBottomMostWindow@@YAPEAUtagWND@@PEAU1@H@Z.c)
 */

struct tagWND *__fastcall CalcForegroundInsertAfter(__int64 a1)
{
  struct tagWND *LastNonBottomMostWindow; // rax
  __int64 v3; // r11
  struct tagWND *v4; // r8
  __int64 v5; // rcx
  __int64 v7; // rdi
  struct tagWND *v8; // rcx
  struct tagWND *v9; // rdx
  struct tagWND *v10; // rsi
  _BYTE *v11; // r10
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r9

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 20LL) & 0x20) != 0 )
  {
    LastNonBottomMostWindow = GetLastNonBottomMostWindow((struct tagWND *)a1, 1);
  }
  else
  {
    LastNonBottomMostWindow = (struct tagWND *)GetLastTopMostWindow();
    v3 = *(_QWORD *)(a1 + 40);
  }
  v4 = LastNonBottomMostWindow;
  if ( (*(_BYTE *)(v3 + 31) & 0xC0) == 0x40
    || (v5 = *(_QWORD *)(a1 + 16), (*(_DWORD *)(v5 + 480) & 0x20) == 0)
    && (*(_DWORD *)(*(_QWORD *)(v5 + 416) + 12LL) & 0x80100) == 0 )
  {
    if ( gpqForeground )
    {
      v7 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(v7 + 424) != gpqForeground )
      {
        v8 = LastNonBottomMostWindow ? LastNonBottomMostWindow : *(struct tagWND **)(*(_QWORD *)(a1 + 104) + 112LL);
        v9 = LastNonBottomMostWindow;
        if ( !v8 )
          goto LABEL_22;
        do
        {
          v10 = v8;
          if ( v8 == (struct tagWND *)a1 )
            break;
          v11 = (_BYTE *)*((_QWORD *)v8 + 5);
          if ( (v11[20] & 0x20) != 0
            || *((_QWORD *)v8 + 2) == v7 && (v11[24] & 8) == 0 && ((v11[31] & 0xC0) == 0x40 || (v11[31] & 0x10) != 0) )
          {
            break;
          }
          v8 = (struct tagWND *)*((_QWORD *)v8 + 11);
          v4 = v10;
        }
        while ( v8 );
        if ( !v8 || (*(_BYTE *)(*((_QWORD *)v8 + 5) + 20LL) & 0x20) != 0 )
        {
LABEL_22:
          v4 = LastNonBottomMostWindow;
          if ( !LastNonBottomMostWindow )
            v9 = *(struct tagWND **)(*(_QWORD *)(a1 + 104) + 112LL);
          v12 = *(_QWORD *)(gpqForeground + 128LL);
          v13 = 0LL;
          if ( v12 )
            v13 = *(_QWORD *)(v12 + 16);
          while ( v9 )
          {
            v14 = *((_QWORD *)v9 + 5);
            if ( (*(_BYTE *)(v14 + 20) & 0x20) != 0 )
              break;
            if ( *((_QWORD *)v9 + 2) == v13 )
            {
              if ( *((_QWORD *)v9 + 15) )
              {
                v4 = v9;
              }
              else if ( (*(_BYTE *)(v14 + 31) & 0x10) != 0 )
              {
                v4 = v9;
              }
            }
            v9 = (struct tagWND *)*((_QWORD *)v9 + 11);
          }
        }
      }
    }
  }
  return v4;
}
