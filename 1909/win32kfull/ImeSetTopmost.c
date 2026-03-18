/*
 * XREFs of ImeSetTopmost @ 0x1C0036530
 * Callers:
 *     ImeCheckTopmost @ 0x1C001AC54 (ImeCheckTopmost.c)
 * Callees:
 *     UnlinkWindow @ 0x1C006A598 (UnlinkWindow.c)
 *     LinkWindow @ 0x1C006BF20 (LinkWindow.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00E0250 (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

void __fastcall ImeSetTopmost(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r14
  struct tagWND *LastTopMostWindowNoIME; // rbx
  struct tagWND *v8; // rdi
  __int64 v9; // r8
  struct tagWND *v10; // r15
  struct tagWND *v11; // rbp
  __int64 v12; // rdx
  struct tagWND *v13; // rcx
  char v14; // al
  __int64 v15; // rcx
  bool v16; // zf
  struct tagWND *i; // rdx
  __int64 v18; // r9

  v3 = *(_QWORD *)(a1 + 104);
  LastTopMostWindowNoIME = 0LL;
  if ( !v3 )
    return;
  v8 = *(struct tagWND **)(v3 + 112);
  if ( !a2 )
  {
    LastTopMostWindowNoIME = GetLastTopMostWindowNoIME((struct tagWND *)a1);
    if ( a3 )
    {
      v14 = 0;
      if ( !LastTopMostWindowNoIME )
        return;
      do
      {
        v15 = *((_QWORD *)LastTopMostWindowNoIME + 11);
        if ( v15 == a3 )
          break;
        v16 = LastTopMostWindowNoIME == (struct tagWND *)a1;
        LastTopMostWindowNoIME = (struct tagWND *)*((_QWORD *)LastTopMostWindowNoIME + 11);
        if ( v16 )
          v14 = 1;
      }
      while ( v15 );
      if ( !LastTopMostWindowNoIME || v14 )
        return;
    }
    v9 = *(_QWORD *)(a1 + 120);
    if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 20LL) & 0x20) != 0 )
    {
      for ( i = LastTopMostWindowNoIME; i; i = (struct tagWND *)*((_QWORD *)i + 11) )
      {
        if ( i == (struct tagWND *)v9 )
          break;
        v18 = *(_QWORD *)(*((_QWORD *)i + 17) + 8LL);
        if ( (*(_BYTE *)(v18 + 10) & 1) == 0 && *(_WORD *)v18 != *(_WORD *)(gpsi + 898LL) )
          LastTopMostWindowNoIME = i;
      }
    }
  }
  v10 = LastTopMostWindowNoIME;
  while ( v8 )
  {
    v11 = (struct tagWND *)*((_QWORD *)v8 + 11);
    if ( *((_QWORD *)v8 + 2) == *(_QWORD *)(a1 + 16) )
    {
      v12 = *(_QWORD *)(*((_QWORD *)v8 + 17) + 8LL);
      if ( ((*(_BYTE *)(v12 + 10) & 1) != 0 || *(_WORD *)v12 == *(_WORD *)(gpsi + 898LL))
        && v8 != LastTopMostWindowNoIME )
      {
        v13 = v8;
        while ( v13 != (struct tagWND *)a1
             || LastTopMostWindowNoIME && *((_QWORD *)LastTopMostWindowNoIME + 13) != *((_QWORD *)v8 + 13)
             || *((_QWORD *)v8 + 13) != v3 )
        {
          v13 = (struct tagWND *)*((_QWORD *)v13 + 15);
          if ( !v13 )
            goto LABEL_7;
        }
        UnlinkWindow(v8, v3);
        SetOrClrWF(a2 != 0, v8, 2056LL, 1LL);
        LinkWindow(v8);
        LastTopMostWindowNoIME = v8;
      }
    }
LABEL_7:
    v8 = v11;
    if ( !v11 )
      break;
    if ( v11 == v10 )
      v8 = (struct tagWND *)*((_QWORD *)LastTopMostWindowNoIME + 11);
  }
}
