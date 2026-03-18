/*
 * XREFs of ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0241328
 * Callers:
 *     DrawThumb2 @ 0x1C000BDD0 (DrawThumb2.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C024128C (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241CA8 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxTrackBox @ 0x1C0243620 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C0243790 (xxxTrackThumb.c)
 * Callees:
 *     CalcSBStuff @ 0x1C00AA7A4 (CalcSBStuff.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0240BF8 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall RecalcTrackRect(struct tagSBTRACK *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // eax
  __int128 *v6; // r8
  __int128 *v7; // rcx
  _DWORD *v8; // rdx
  __int64 v9; // r8
  int v10; // eax
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF

  v11 = 0uLL;
  v5 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    CalcSBStuff(*((_QWORD *)a1 + 1), *((int **)a1 + 12), (v5 >> 1) & 1);
    v5 = *(_DWORD *)a1;
  }
  v6 = &v11;
  v7 = (__int128 *)((char *)&v11 + 4);
  if ( (v5 & 2) == 0 )
  {
    v6 = (__int128 *)((char *)&v11 + 4);
    v7 = &v11;
  }
  v8 = (_DWORD *)*((_QWORD *)a1 + 12);
  *(_DWORD *)v6 = v8[6];
  *(_DWORD *)v7 = v8[4];
  *((_DWORD *)v6 + 2) = v8[7];
  v9 = *((unsigned int *)a1 + 14);
  *((_DWORD *)v7 + 2) = v8[5];
  if ( !(_DWORD)v9 )
  {
    LODWORD(v9) = 0;
    *((_DWORD *)v7 + 2) = v8[9];
    goto LABEL_16;
  }
  if ( (_DWORD)v9 == 1 )
  {
    *(_DWORD *)v7 = v8[10];
  }
  else
  {
    if ( (_DWORD)v9 == 2 )
    {
      *(_DWORD *)v7 = v8[9];
      v10 = v8[13];
    }
    else
    {
      if ( (_DWORD)v9 != 3 )
      {
        if ( (_DWORD)v9 == 4 )
        {
          CalcTrackDragRect(a1, (__int64)v8, v9, a4);
          LODWORD(v9) = *((_DWORD *)a1 + 14);
        }
LABEL_16:
        if ( (_DWORD)v9 == 4 )
          return;
        goto LABEL_17;
      }
      *(_DWORD *)v7 = v8[12];
      v10 = v8[10];
    }
    *((_DWORD *)v7 + 2) = v10;
  }
LABEL_17:
  *((_OWORD *)a1 + 2) = v11;
}
