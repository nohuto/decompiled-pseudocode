/*
 * XREFs of ?bAllocateCache@RFONTOBJ@@QEAAHPEAV1@@Z @ 0x1C007FC6C
 * Callers:
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1C005B1C0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C005B6A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z @ 0x1C0080FC8 (-bInsertGlyphbits@RFONTOBJ@@QEAAHPEAU_GLYPHDATA@@K@Z.c)
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1C00811F0 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0082A64 (-bInsertMetricsPlus@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C008350C (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0083C88 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ @ 0x1C00C51A0 (-pgdDefault@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@XZ.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C00C6130 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C01140EC (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C01484DC (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C028A8D8 (-bInsertMetrics@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C028A970 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00800BC (PALLOCMEM2.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall RFONTOBJ::bAllocateCache(RFONTOBJ *this, struct RFONTOBJ *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // r15
  unsigned int v6; // edi
  unsigned int v7; // r12d
  unsigned int *v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rdx
  unsigned int v11; // edx
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r14
  char *v16; // r13
  __int64 v17; // rdx
  unsigned __int16 *v18; // rcx
  __int64 v19; // r14
  __int64 v20; // rax
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edx
  int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int16 *v33; // rsi
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  size_t Size; // [rsp+28h] [rbp-60h]
  __int64 v39; // [rsp+30h] [rbp-58h]
  int v41; // [rsp+98h] [rbp+10h]
  unsigned int v42; // [rsp+A0h] [rbp+18h]
  int v43; // [rsp+A8h] [rbp+20h]

  v2 = *(_QWORD *)this;
  v3 = 0LL;
  v4 = 0LL;
  v6 = 2 * *(_DWORD *)(*(_QWORD *)this + 632LL);
  v41 = *(_DWORD *)(*(_QWORD *)this + 84LL) & 2;
  if ( v41 )
  {
    v4 = *(_QWORD *)(v2 + 472);
    v7 = *(_DWORD *)(v4 + 12);
    v8 = (unsigned int *)(v4 + 8);
  }
  else
  {
    v30 = *(_QWORD *)(v2 + 120);
    v3 = *(_QWORD *)(v30 + 72);
    if ( !v3 )
      return 0LL;
    v7 = *(_DWORD *)(v3 + 4);
    v8 = *(unsigned int **)(v30 + 72);
  }
  v9 = 16LL * v7;
  v43 = *v8;
  if ( v9 > 0xFFFFFFFF )
    return 0LL;
  v10 = 8LL * *v8;
  Size = v10;
  if ( v10 > 0xFFFFFFFF || (unsigned int)(v9 + 16) < 0x10 || (int)v9 + 16 + (int)v10 < (unsigned int)(v9 + 16) )
    return 0LL;
  v11 = (v9 + 16 + v10 + 7) & 0xFFFFFFF8;
  v42 = v11;
  v12 = v11 + (*(_DWORD *)(v2 + 640) != 0 ? 768 : 2048);
  if ( v12 + 8 > 0xC00 )
  {
    v12 = (v11 + 4095) & 0xFFFFF000;
    if ( v12 - v11 < 0x80 )
      v12 += 4096;
  }
  v13 = PALLOCMEM2(v12);
  v14 = *(_QWORD *)this;
  v39 = v13;
  if ( !v13 )
  {
    *(_DWORD *)(v14 + 84) |= 8u;
    return 0LL;
  }
  *(_QWORD *)(v14 + 480) = v13;
  v15 = *(_QWORD *)(*(_QWORD *)this + 480LL);
  v16 = (char *)(v15 + v9 + 16);
  *(_QWORD *)(v15 + 8) = 0LL;
  *(_DWORD *)v15 = v7;
  memset(v16, 0, Size);
  if ( v41 )
  {
    if ( v7 )
    {
      v17 = v7;
      v18 = (unsigned __int16 *)(v4 + 18);
      v19 = v15 - v4;
      do
      {
        *(_QWORD *)((char *)v18 + v19 + 6) = v16;
        *(_DWORD *)((char *)v18 + v19 - 2) = *(v18 - 1);
        v20 = *v18;
        *(_DWORD *)((char *)v18 + v19 + 2) = v20;
        v18 += 8;
        v16 += 8 * v20;
        --v17;
      }
      while ( v17 );
    }
  }
  else if ( v7 )
  {
    v31 = v7;
    v32 = v15 + 20;
    v33 = (unsigned __int16 *)(v3 + 8);
    do
    {
      *(_QWORD *)(v32 + 4) = v16;
      v34 = *v33;
      v33 += 2;
      *(_DWORD *)(v32 - 4) = v34;
      v35 = *(v33 - 1);
      *(_DWORD *)v32 = v35;
      v32 += 16LL;
      v16 += 8 * v35;
      --v31;
    }
    while ( v31 );
  }
  v21 = (_QWORD *)(v39 + v42);
  *(_QWORD *)(v2 + 536) = v21;
  *v21 = 0LL;
  v22 = *(_QWORD *)(v2 + 536) + 16LL;
  v23 = v39 + v12;
  *(_QWORD *)(v2 + 528) = v23;
  *(_QWORD *)(v2 + 520) = v23;
  *(_QWORD *)(v2 + 512) = v22;
  v24 = *(_QWORD *)this;
  v25 = *(_DWORD *)(*(_QWORD *)this + 88LL);
  if ( !v25 || (*(_DWORD *)(*(_QWORD *)this + 84LL) & 1) != 0 )
    goto LABEL_22;
  if ( v25 == 2 )
    goto LABEL_35;
  v26 = *(_DWORD *)(v2 + 632);
  v6 = 16 * v26;
  v27 = (16 * v26 + 4095) & 0xFFFFF000;
  if ( v27 <= 0x2000 )
  {
    if ( v6 >= 0xC00 )
      v6 = (v6 + 4095) & 0xFFFFF000;
    goto LABEL_21;
  }
  if ( (unsigned int)(8 * v26) > 0x2000 )
  {
    v6 = 0x10000;
    if ( ((8 * v26 + 4095) & 0xFFFFF000) < 0x10000 )
      v6 = (8 * v26 + 4095) & 0xFFFFF000;
LABEL_35:
    v27 = v6;
    goto LABEL_21;
  }
  v6 = 0x2000;
  v27 = 0x2000;
LABEL_21:
  *(_DWORD *)(v2 + 552) = v27;
  *(_DWORD *)(v2 + 548) = v6;
  *(_DWORD *)(v2 + 556) = ((unsigned int)(v43 + 1023) >> 10 << 16) / *(_DWORD *)(v2 + 552);
  v24 = *(_QWORD *)this;
LABEL_22:
  v28 = **(int **)(v24 + 480);
  if ( (unsigned int)v28 > 0xC8 )
  {
    *(_DWORD *)(v2 + 604) = v28 - 1;
    v36 = v28 - 1;
    if ( (((_DWORD)v28 - 1) & 0xF000) != 0 )
    {
      v37 = (unsigned int)acBits[(v36 >> 12) & 0xF] + 12;
    }
    else if ( (((_WORD)v28 - 1) & 0xF00) != 0 )
    {
      v37 = (unsigned int)acBits[(v36 >> 8) & 0xF] + 8;
    }
    else if ( (((_BYTE)v28 - 1) & 0xF0) != 0 )
    {
      v37 = (unsigned int)acBits[(v36 >> 4) & 0xF] + 4;
    }
    else
    {
      v37 = acBits[v36 & 0xF];
    }
    *(_DWORD *)(v2 + 612) = v37;
    *(_DWORD *)(v2 + 608) = *((_DWORD *)&aiStart + v37);
  }
  else
  {
    *(_DWORD *)(v2 + 604) = 0;
  }
  return 1LL;
}
