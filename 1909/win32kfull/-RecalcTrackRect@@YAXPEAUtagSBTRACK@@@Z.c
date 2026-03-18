/*
 * XREFs of ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C0240D08
 * Callers:
 *     DrawThumb2 @ 0x1C00EAF30 (DrawThumb2.c)
 *     ?InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z @ 0x1C0240C6C (-InvertScrollHilite@@YAXPEAUtagWND@@PEAUtagSBTRACK@@@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241688 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 *     xxxTrackBox @ 0x1C0242EE0 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C0243050 (xxxTrackThumb.c)
 * Callees:
 *     CalcSBStuff @ 0x1C004B584 (CalcSBStuff.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C02405D8 (-CalcTrackDragRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall RecalcTrackRect(struct tagSBTRACK *a1)
{
  unsigned int v2; // eax
  __int128 *v3; // r8
  __int128 *v4; // rcx
  _DWORD *v5; // rdx
  __int64 v6; // r8
  int v7; // eax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF

  v8 = 0uLL;
  v2 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    CalcSBStuff(*((_QWORD *)a1 + 1), *((int **)a1 + 12), (v2 >> 1) & 1);
    v2 = *(_DWORD *)a1;
  }
  v3 = &v8;
  v4 = (__int128 *)((char *)&v8 + 4);
  if ( (v2 & 2) == 0 )
  {
    v3 = (__int128 *)((char *)&v8 + 4);
    v4 = &v8;
  }
  v5 = (_DWORD *)*((_QWORD *)a1 + 12);
  *(_DWORD *)v3 = v5[6];
  *(_DWORD *)v4 = v5[4];
  *((_DWORD *)v3 + 2) = v5[7];
  v6 = *((unsigned int *)a1 + 14);
  *((_DWORD *)v4 + 2) = v5[5];
  if ( !(_DWORD)v6 )
  {
    LODWORD(v6) = 0;
    *((_DWORD *)v4 + 2) = v5[9];
    goto LABEL_16;
  }
  if ( (_DWORD)v6 == 1 )
  {
    *(_DWORD *)v4 = v5[10];
  }
  else
  {
    if ( (_DWORD)v6 == 2 )
    {
      *(_DWORD *)v4 = v5[9];
      v7 = v5[13];
    }
    else
    {
      if ( (_DWORD)v6 != 3 )
      {
        if ( (_DWORD)v6 == 4 )
        {
          CalcTrackDragRect(a1, (__int64)v5, v6);
          LODWORD(v6) = *((_DWORD *)a1 + 14);
        }
LABEL_16:
        if ( (_DWORD)v6 == 4 )
          return;
        goto LABEL_17;
      }
      *(_DWORD *)v4 = v5[12];
      v7 = v5[10];
    }
    *((_DWORD *)v4 + 2) = v7;
  }
LABEL_17:
  *((_OWORD *)a1 + 2) = v8;
}
