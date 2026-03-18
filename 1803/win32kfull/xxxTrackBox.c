/*
 * XREFs of xxxTrackBox @ 0x1C0202070
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01FFF80 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00647F0 (_SetSystemTimer.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C01FFE90 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0200084 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C02007D0 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C0200E84 (xxxEndScroll.c)
 */

void __fastcall xxxTrackBox(struct tagWND *a1, int a2, __int64 a3, int a4)
{
  __int64 v7; // rbx
  BOOL v8; // eax
  char v9; // r8
  BOOL v10; // ebp
  unsigned int v11; // r8d
  int v12; // edi
  int v13; // edi
  __int64 v14; // rax
  struct tagWND *v15; // rdx
  unsigned __int64 v16; // [rsp+40h] [rbp+8h]

  v7 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL);
  if ( v7 && (!a2 || BYTE1(a2) == 2) )
  {
    if ( (*(_DWORD *)v7 & 8) != 0 )
    {
      RecalcTrackRect((struct tagSBTRACK *)v7);
      *(_DWORD *)v7 &= ~8u;
    }
    LODWORD(v16) = (__int16)a4;
    HIDWORD(v16) = SHIWORD(a4);
    v8 = PtInRect((_DWORD *)(v7 + 32), v16);
    v10 = v8;
    if ( v8 == (v9 & 1)
      || (zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v7, v8, *(_DWORD *)(v7 + 56)),
          v7 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL)) )
    {
      v11 = *(_DWORD *)(gpsi + 4976LL) >> 3;
      v12 = a2 - 512;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 == 1 )
            xxxEndScroll(a1, 0);
LABEL_17:
          if ( v7 == *(_QWORD *)(*((_QWORD *)a1 + 2) + 704LL) )
            *(_DWORD *)v7 ^= (v10 ^ (unsigned __int8)*(_DWORD *)v7) & 1;
          return;
        }
        *(_QWORD *)(v7 + 64) = 0LL;
        v11 = *(_DWORD *)(gpsi + 4976LL);
      }
      if ( v10 )
      {
        if ( v10 != (*(_DWORD *)v7 & 1) )
        {
          v14 = SetSystemTimer((unsigned __int64)a1, 65534LL, v11, (__int64)xxxContScroll, 0);
          v15 = *(struct tagWND **)(v7 + 24);
          *(_QWORD *)(v7 + 64) = v14;
          if ( v15 )
            xxxDoScroll(*(struct tagWND **)(v7 + 16), v15, *(unsigned int *)(v7 + 56), 0LL, (*(_DWORD *)v7 >> 1) & 1);
        }
      }
      goto LABEL_17;
    }
  }
}
