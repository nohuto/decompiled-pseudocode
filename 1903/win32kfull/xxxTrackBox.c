/*
 * XREFs of xxxTrackBox @ 0x1C0243620
 * Callers:
 *     ?xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0241420 (-xxxContScroll@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     PtInRect @ 0x1C0026FB4 (PtInRect.c)
 *     _SetSystemTimer @ 0x1C008C7D4 (_SetSystemTimer.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0241328 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C024150C (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241CA8 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxEndScroll @ 0x1C024239C (xxxEndScroll.c)
 */

void __fastcall xxxTrackBox(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  int v5; // edi
  unsigned int *v7; // rbx
  __int64 v8; // r8
  BOOL v9; // eax
  char v10; // r8
  BOOL v11; // ebp
  int v12; // r8d
  int v13; // edi
  int v14; // edi
  __int64 v15; // rax
  struct tagWND *v16; // rdx
  unsigned __int64 v17; // [rsp+40h] [rbp+8h]

  v4 = a4;
  v5 = a2;
  v7 = *(unsigned int **)(*((_QWORD *)a1 + 2) + 712LL);
  if ( v7 && (!(_DWORD)a2 || BYTE1(a2) == 2) )
  {
    v8 = *v7;
    if ( (v8 & 8) != 0 )
    {
      RecalcTrackRect((struct tagSBTRACK *)v7, a2, v8, a4);
      *v7 &= ~8u;
    }
    LODWORD(v17) = (__int16)v4;
    HIDWORD(v17) = SHIWORD(v4);
    v9 = PtInRect(v7 + 8, v17);
    v11 = v9;
    if ( v9 == (v10 & 1)
      || (zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v7, v9, v7[14]),
          v7 == *(unsigned int **)(*((_QWORD *)a1 + 2) + 712LL)) )
    {
      v12 = *(_DWORD *)(gpsi + 4976LL) >> 3;
      v13 = v5 - 512;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 == 1 )
            xxxEndScroll(a1, 0);
LABEL_17:
          if ( v7 == *(unsigned int **)(*((_QWORD *)a1 + 2) + 712LL) )
            *v7 ^= (v11 ^ (unsigned __int8)*v7) & 1;
          return;
        }
        *((_QWORD *)v7 + 8) = 0LL;
        v12 = *(_DWORD *)(gpsi + 4976LL);
      }
      if ( v11 )
      {
        if ( v11 != (*v7 & 1) )
        {
          v15 = SetSystemTimer((__int64)a1, 65534, v12, (int)xxxContScroll, 0);
          v16 = (struct tagWND *)*((_QWORD *)v7 + 3);
          *((_QWORD *)v7 + 8) = v15;
          if ( v16 )
            xxxDoScroll(*((struct tagWND **)v7 + 2), v16, v7[14], 0LL, (*v7 >> 1) & 1);
        }
      }
      goto LABEL_17;
    }
  }
}
