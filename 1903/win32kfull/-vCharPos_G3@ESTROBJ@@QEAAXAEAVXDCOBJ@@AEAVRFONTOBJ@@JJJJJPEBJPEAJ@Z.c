/*
 * XREFs of ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x1C02B6C38
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0068D50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C01014BC (bFToL.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0109D98 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x1C011DF8C (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02B75D0 (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G3(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        int a7,
        unsigned int a8,
        const int *a9,
        int *a10)
{
  __int64 v13; // rax
  float v14; // xmm8_4
  float v15; // xmm9_4
  int v16; // r15d
  float v17; // xmm6_4
  float v18; // xmm7_4
  float v19; // xmm10_4
  float v20; // xmm11_4
  _DWORD *v21; // rdi
  int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // r14
  int v25; // ecx
  struct _GLYPHPOS *v26; // r8
  signed int v27; // r15d
  unsigned __int16 *v28; // r9
  int v29; // r14d
  POINTL *p_ptl; // r13
  int v31; // r12d
  __int64 v32; // rax
  struct RFONTOBJ *v33; // rdx
  int v34; // edi
  int v35; // esi
  int *v36; // rdi
  int v37; // r12d
  unsigned int v38; // r8d
  float v39; // xmm5_4
  int v40; // ecx
  int v41; // ecx
  float v42; // xmm5_4
  int v43; // edx
  int v44; // ecx
  signed int v45; // ecx
  float v46; // xmm5_4
  int v47; // eax
  int v48; // ecx
  unsigned int v49; // r8d
  const int *v50; // rax
  int v51; // ecx
  int v52; // eax
  int v53; // r8d
  __int128 v54; // xmm0
  int v55; // [rsp+30h] [rbp-C1h]
  int v56; // [rsp+38h] [rbp-B9h]
  int v57; // [rsp+48h] [rbp-A9h] BYREF
  int v58; // [rsp+4Ch] [rbp-A5h] BYREF
  int v59; // [rsp+50h] [rbp-A1h] BYREF
  int v60; // [rsp+54h] [rbp-9Dh]
  int v61; // [rsp+58h] [rbp-99h]
  float v62; // [rsp+5Ch] [rbp-95h] BYREF
  float v63; // [rsp+60h] [rbp-91h] BYREF
  int v64; // [rsp+64h] [rbp-8Dh]
  int v65; // [rsp+68h] [rbp-89h]
  signed int v66; // [rsp+6Ch] [rbp-85h]
  int v67[4]; // [rsp+70h] [rbp-81h]
  int v68; // [rsp+80h] [rbp-71h]
  int v69; // [rsp+84h] [rbp-6Dh]
  _DWORD *v70; // [rsp+88h] [rbp-69h]
  int v72; // [rsp+148h] [rbp+57h] BYREF
  LONG v73; // [rsp+150h] [rbp+5Fh]

  v73 = a4;
  v13 = *(_QWORD *)a3;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 640LL) )
  {
    v14 = *(float *)(v13 + 452);
    v15 = *(float *)(v13 + 456);
    v16 = *(_DWORD *)(v13 + 316);
    v17 = *(float *)(v13 + 436);
    v18 = *(float *)(v13 + 440);
    v19 = *(float *)(v13 + 444);
    v20 = *(float *)(v13 + 448);
    v62 = v14;
    v63 = v15;
    v65 = v16;
    if ( a9 )
    {
      v61 = v72;
    }
    else
    {
      v21 = (_DWORD *)((char *)this + 120);
      *((_DWORD *)this + 29) = 0;
      v22 = a6;
      *v21 = 0;
      v61 = 0;
      if ( v22 )
      {
        v23 = *(_QWORD *)a3;
        v72 = 0;
        bFToL((float)v22 * *(float *)(v23 + 444), &v72, 0);
        *((_DWORD *)this + 29) = v72;
      }
      if ( bCalcBreakExtra(*(_DWORD *)(*(_QWORD *)a3 + 444LL), a7, a8, (__int64)v21) )
      {
        v24 = *(_QWORD *)a3;
        vGenWidths(
          &v59,
          &v58,
          (struct EFLOAT *)&v63,
          (struct EFLOAT *)&v62,
          *(_DWORD *)(*(_QWORD *)a3 + 468LL),
          v16,
          0,
          v16);
        v25 = *((_DWORD *)this + 29);
        if ( v58 + v59 + v25 + *v21 < 0 )
        {
          *v21 = -(v58 + v25 + v59);
          v24 = *(_QWORD *)a3;
        }
        v61 = *(_DWORD *)(v24 + 464);
      }
    }
    v26 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v27 = 0x80000000;
    v28 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v29 = 0x7FFFFFFF;
    v26->ptl.y = a5;
    p_ptl = &v26->ptl;
    v26->ptl.x = a4;
    v31 = 0;
    v32 = *(_QWORD *)a3;
    v33 = (struct RFONTOBJ *)*(unsigned int *)this;
    v67[0] = 0x7FFFFFFF;
    v68 = *(_DWORD *)(v32 + 320);
    v66 = 0x80000000;
    *(_QWORD *)&v67[1] = 0x8000000080000000uLL;
    v64 = 0x7FFFFFFF;
    v67[3] = 0x7FFFFFFF;
    v60 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v33, v26, v28, &v72, a2, this) )
    {
      v34 = *((_DWORD *)this + 58);
      if ( v72 )
      {
        v34 |= 2u;
        *((_QWORD *)this + 4) = *((_QWORD *)this + 8);
        *((_DWORD *)this + 58) = v34;
      }
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 276LL) & 0x10) == 0 || (LOBYTE(v72) = 1, (v34 & 0x1400) != 0) )
        LOBYTE(v72) = 0;
      v35 = 0;
      if ( *(_DWORD *)this )
      {
        v36 = a10;
        while ( 1 )
        {
          v70 = (_DWORD *)p_ptl[-1];
          v56 = v70[7];
          v55 = v70[6];
          v69 = v70[3];
          vGenWidths(&v59, &v58, (struct EFLOAT *)&v63, (struct EFLOAT *)&v62, v69, v55, v56, v65);
          v37 = v59 + v31;
          v57 = 0;
          bFToL((float)v37 * v15, &v57, 0);
          v40 = v64;
          if ( v57 + v68 < v64 )
            v40 = v57 + v68;
          v64 = v40;
          v67[3] = v40;
          v41 = v66;
          if ( v57 + v65 > v66 )
            v41 = v57 + v65;
          v57 &= v38;
          v66 = v41;
          v67[1] = v41;
          bFToL(v39 * v14, &v57, v38);
          v43 = v57 - v69 / 2;
          if ( (_BYTE)v72 )
          {
            if ( v43 - 4 < v29 )
              v29 = v43 - 4;
            v67[0] = v29;
            if ( v43 + v69 + 4 > v27 )
            {
              v27 = v43 + v69 + 4;
              v67[2] = v27;
            }
          }
          else
          {
            if ( v43 + v70[4] - 4 < v29 )
              v29 = v43 + v70[4] - 4;
            v44 = v70[5] + 4;
            v67[0] = v29;
            v45 = v43 + v44;
            if ( v45 > v27 )
              v27 = v45;
            v67[2] = v27;
          }
          v57 = 0;
          bFToL(v42 * v17, &v57, 0);
          v47 = v70[13] / 2;
          v48 = v57;
          v57 = 0;
          p_ptl->x = v73 + v48 - v47;
          bFToL(v46 * v18, &v57, 0);
          v50 = a9;
          p_ptl->y = a5 + v57 - v70[15] / (int)(v49 + 2);
          if ( !v50 )
            break;
          v51 = *v50 + v60;
          v57 &= v49;
          v60 = v51;
          a9 = v50 + 1;
          bFToL((float)v51 * v19, &v57, v49);
          v31 = v57;
          if ( v36 )
          {
            *v36 = v60;
LABEL_40:
            ++v36;
          }
LABEL_41:
          p_ptl += 3;
          if ( (unsigned int)++v35 >= *(_DWORD *)this )
          {
            v34 = *((_DWORD *)this + 58);
            goto LABEL_43;
          }
        }
        v31 = v58 + *((_DWORD *)this + 29) + v37;
        v52 = *((_DWORD *)this + 30);
        if ( v52 )
        {
          if ( p_ptl[-2].x == v61 )
            v31 += v52;
        }
        if ( !v36 )
          goto LABEL_41;
        v57 &= v49;
        bFToL((float)v31 * v20, &v57, v49);
        *v36 = v57;
        goto LABEL_40;
      }
LABEL_43:
      v72 = 0;
      bFToL((float)v31 * v17, &v72, 0);
      v53 = v72;
      v72 = 0;
      *((_DWORD *)this + 20) = v53;
      bFToL((float)v31 * v18, &v72, 0);
      v54 = *(_OWORD *)v67;
      *((_DWORD *)this + 21) = v72;
      *((_OWORD *)this + 6) = v54;
      *((_DWORD *)this + 58) = v34 | 4;
    }
  }
}
