/*
 * XREFs of ImeSetTopmost @ 0x1C0071AA8
 * Callers:
 *     ImeCheckTopmost @ 0x1C0070E5C (ImeCheckTopmost.c)
 * Callees:
 *     LinkWindow @ 0x1C002E120 (LinkWindow.c)
 *     UnlinkWindow @ 0x1C002FDB0 (UnlinkWindow.c)
 *     ?GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0072128 (-GetLastTopMostWindowNoIME@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 */

void __fastcall ImeSetTopmost(__int64 a1, int a2, __int64 a3)
{
  __int64 *v3; // r14
  struct tagWND *LastTopMostWindowNoIME; // rbx
  __int64 v8; // rdi
  __int64 v9; // r8
  struct tagWND *v10; // r15
  struct tagWND *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rcx
  bool v16; // zf
  struct tagWND *i; // rdx
  __int64 v18; // r9

  v3 = *(__int64 **)(a1 + 80);
  LastTopMostWindowNoIME = 0LL;
  if ( !v3 )
    return;
  v8 = v3[11];
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
        v15 = *((_QWORD *)LastTopMostWindowNoIME + 8);
        if ( v15 == a3 )
          break;
        v16 = LastTopMostWindowNoIME == (struct tagWND *)a1;
        LastTopMostWindowNoIME = (struct tagWND *)*((_QWORD *)LastTopMostWindowNoIME + 8);
        if ( v16 )
          v14 = 1;
      }
      while ( v15 );
      if ( !LastTopMostWindowNoIME || v14 )
        return;
    }
    v9 = *(_QWORD *)(a1 + 96);
    if ( (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 20LL) & 0x20) != 0 )
    {
      for ( i = LastTopMostWindowNoIME; i; i = (struct tagWND *)*((_QWORD *)i + 8) )
      {
        if ( i == (struct tagWND *)v9 )
          break;
        v18 = *(_QWORD *)(*((_QWORD *)i + 14) + 8LL);
        if ( (*(_BYTE *)(v18 + 10) & 1) == 0 && *(_WORD *)v18 != *(_WORD *)(gpsi + 898LL) )
          LastTopMostWindowNoIME = i;
      }
    }
  }
  v10 = LastTopMostWindowNoIME;
  while ( v8 )
  {
    v11 = *(struct tagWND **)(v8 + 64);
    if ( *(_QWORD *)(v8 + 16) == *(_QWORD *)(a1 + 16) )
    {
      v12 = *(_QWORD *)(*(_QWORD *)(v8 + 112) + 8LL);
      if ( ((*(_BYTE *)(v12 + 10) & 1) != 0 || *(_WORD *)v12 == *(_WORD *)(gpsi + 898LL))
        && (struct tagWND *)v8 != LastTopMostWindowNoIME )
      {
        v13 = v8;
        while ( v13 != a1
             || LastTopMostWindowNoIME && *((_QWORD *)LastTopMostWindowNoIME + 10) != *(_QWORD *)(v8 + 80)
             || *(__int64 **)(v8 + 80) != v3 )
        {
          v13 = *(_QWORD *)(v13 + 96);
          if ( !v13 )
            goto LABEL_7;
        }
        UnlinkWindow((struct tagTERMINAL *)v8, (__int64)v3);
        SetOrClrWF(a2 != 0, v8, 2056LL, 1LL);
        LinkWindow((struct tagWND *)v8, LastTopMostWindowNoIME, v3);
        LastTopMostWindowNoIME = (struct tagWND *)v8;
      }
    }
LABEL_7:
    v8 = (__int64)v11;
    if ( !v11 )
      break;
    if ( v11 == v10 )
      v8 = *((_QWORD *)LastTopMostWindowNoIME + 8);
  }
}
