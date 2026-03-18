/*
 * XREFs of DrawThumb2 @ 0x1C012F804
 * Callers:
 *     ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C012F608 (-xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C01FFC28 (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0200154 (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C02003FC (-xxxMoveThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     xxxSBWndProc @ 0x1C0201660 (xxxSBWndProc.c)
 * Callees:
 *     DrawPushButton @ 0x1C0010CEC (DrawPushButton.c)
 *     NtGdiPatBlt @ 0x1C009DAD0 (NtGdiPatBlt.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C012F934 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z @ 0x1C01FFE90 (-RecalcTrackRect@@YAXPEAUtagSBTRACK@@@Z.c)
 */

void __fastcall DrawThumb2(__int64 a1, _DWORD *a2, HDC a3, HBRUSH a4, int a5, char a6)
{
  LONG v10; // edx
  LONG v11; // r8d
  struct tagRECT *p_top; // rdi
  struct tagRECT *v13; // rax
  LONG v14; // ecx
  LONG v15; // edx
  LONG v16; // eax
  LONG v17; // r8d
  LONG v18; // eax
  __int64 v19; // rdi
  int v20; // ecx
  unsigned int *v21; // rdi
  int *v22; // rax
  int v23; // edx
  int v24; // ecx
  struct tagRECT v25; // [rsp+30h] [rbp-48h] BYREF

  if ( a2[4] < a2[5] )
  {
    v10 = a2[6];
    v11 = a2[7];
    if ( v10 < v11 )
    {
      p_top = &v25;
      if ( a5 )
        p_top = (struct tagRECT *)&v25.top;
      v13 = (struct tagRECT *)&v25.top;
      if ( a5 )
        v13 = &v25;
      v13->left = v10;
      v13->right = v11;
      if ( (a6 & 3) == 3 || (v14 = a2[10], v15 = a2[9], v14 - v15 < a2[8]) )
      {
        p_top->left = a2[9];
        p_top->right = a2[10];
        DrawGroove(a3, a4, &v25, a5);
      }
      else
      {
        v16 = a2[13];
        if ( v15 < v16 )
        {
          p_top->left = v15;
          p_top->right = v16;
          DrawGroove(a3, a4, &v25, a5);
          v14 = a2[10];
        }
        v17 = a2[12];
        if ( v17 < v14 )
        {
          p_top->left = v17;
          p_top->right = v14;
          DrawGroove(a3, a4, &v25, a5);
          v17 = a2[12];
        }
        v18 = a2[13];
        p_top->right = v17;
        p_top->left = v18;
        DrawPushButton(a3, &v25, 0, 0);
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 704LL);
        if ( v19 )
        {
          v20 = *(_DWORD *)(v19 + 56);
          if ( (unsigned int)(v20 - 2) <= 1 && a1 == *(_QWORD *)(v19 + 8) && ((*(_DWORD *)v19 >> 1) & 1) == a5 )
          {
            if ( (*(_DWORD *)v19 & 8) != 0 )
            {
              RecalcTrackRect((struct tagSBTRACK *)v19);
              *(_DWORD *)v19 &= ~8u;
              v20 = *(_DWORD *)(v19 + 56);
            }
            v21 = (unsigned int *)(v19 + 32);
            v22 = (int *)(v21 + 1);
            if ( !a5 )
              v22 = (int *)v21;
            if ( v20 == 2 )
            {
              v23 = a2[13];
              v24 = *v22;
              v22[2] = v23;
            }
            else
            {
              v24 = a2[12];
              v23 = v22[2];
              *v22 = v24;
            }
            if ( v24 < v23 )
              NtGdiPatBlt(a3, *v21, v21[1], v21[2] - *v21, v21[3] - v21[1], 5570569);
          }
        }
      }
    }
  }
}
