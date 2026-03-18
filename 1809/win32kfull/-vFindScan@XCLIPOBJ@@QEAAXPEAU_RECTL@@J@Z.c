/*
 * XREFs of ?vFindScan@XCLIPOBJ@@QEAAXPEAU_RECTL@@J@Z @ 0x1C00F21E4
 * Callers:
 *     ?vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00E77E0 (-vStrWrite32@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C00F1D20 (-vStrWrite01@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C01383D0 (-vStrWrite24@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02A5960 (-vStrWrite04@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02A5E50 (-vStrWrite08@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02A6170 (-vStrWrite16@@YAXPEAU_STRRUN@@PEAU_XRUNLEN@@PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite16@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BB990 (-vPlgWrite16@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BBBB0 (-vPlgWrite1@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BBF70 (-vPlgWrite24@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BC1A0 (-vPlgWrite32@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BC3B0 (-vPlgWrite4@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWrite8@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BC750 (-vPlgWrite8@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BC9E0 (-vPlgWriteAND@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1C02BCD90 (-vPlgWriteOR@@YAXPEAU_PLGRUN@@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall XCLIPOBJ::vFindScan(XCLIPOBJ *this, struct _RECTL *a2, LONG a3)
{
  _DWORD *v5; // rdx
  LONG v7; // r8d
  LONG v8; // eax
  LONG v9; // ecx
  LONG v10; // eax
  LONG right; // eax
  int v12; // eax
  __int64 v13; // rcx
  LONG v14; // r8d
  LONG v15; // ecx
  LONG v16; // eax

  v5 = (_DWORD *)*((_QWORD *)this + 10);
  if ( a3 >= v5[1] )
  {
    if ( a3 < v5[2] )
      return;
    do
    {
      v5 = (_DWORD *)((char *)v5 + (unsigned int)(4 * *v5 + 16));
      *((_QWORD *)this + 10) = v5;
      v7 = v5[2];
    }
    while ( a3 >= v7 );
    v8 = *((_DWORD *)this + 2);
    v9 = v5[1];
    if ( v9 <= v8 )
      v9 = v8;
    v10 = *((_DWORD *)this + 4);
    a2->top = v9;
    if ( v7 >= v10 )
      v7 = v10;
    right = a2->right;
    a2->bottom = v7;
    a2->left = right;
    if ( v9 >= v7 )
    {
      a2->bottom = 0x7FFFFFFF;
    }
    else if ( v7 != 0x7FFFFFFF )
    {
      return;
    }
    a2->top = 0x7FFFFFFF;
    return;
  }
  do
  {
    v12 = *(v5 - 1);
    v13 = (__int64)v5 - (unsigned int)(4 * v12 + 16) - 4;
    v5 = (_DWORD *)((char *)v5 - (unsigned int)(4 * v12 + 16));
    *((_QWORD *)this + 10) = v5;
    v14 = v5[1];
  }
  while ( a3 < v14 );
  v15 = *(_DWORD *)(v13 + 12);
  if ( v14 <= *((_DWORD *)this + 2) )
    v14 = *((_DWORD *)this + 2);
  v16 = *((_DWORD *)this + 4);
  a2->top = v14;
  if ( v15 >= v16 )
    v15 = v16;
  a2->left = a2->right;
  a2->bottom = v15;
  if ( v14 >= v15 )
  {
    a2->top = 0x80000000;
    v14 = 0x80000000;
  }
  if ( v14 == 0x80000000 )
    a2->bottom = 0x80000000;
}
