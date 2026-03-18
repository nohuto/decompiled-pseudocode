/*
 * XREFs of ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C02B7154
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0068D50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C01014BC (bFToL.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0109D98 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bIs16@EFLOAT@@QEBAHXZ @ 0x1C0149188 (-bIs16@EFLOAT@@QEBAHXZ.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C02B75D0 (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G4(ESTROBJ *this, struct XDCOBJ *a2, float **a3, LONG a4, LONG a5, int *a6)
{
  float *v6; // r10
  float v10; // xmm12_4
  float v11; // xmm13_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm8_4
  float v15; // xmm9_4
  float v16; // xmm10_4
  float v17; // xmm11_4
  BOOL v18; // eax
  struct _GLYPHPOS *v19; // r8
  unsigned __int16 *v20; // r9
  __int64 v21; // r10
  POINTL *p_ptl; // r13
  int v23; // eax
  int v24; // r14d
  int v25; // r15d
  struct RFONTOBJ *v26; // rdx
  RFONTOBJ *v27; // r11
  unsigned int i; // r12d
  _DWORD *v29; // rdi
  int v30; // ebx
  float v31; // xmm2_4
  unsigned int v32; // r8d
  int v33; // edx
  int v34; // eax
  unsigned int v35; // r8d
  int v36; // ecx
  int v37; // eax
  int v38; // edx
  signed int v39; // ebx
  int v40; // edx
  int v41; // eax
  int v42; // ecx
  int v43; // ecx
  int v44; // eax
  unsigned int v45; // r8d
  unsigned int v46; // r8d
  unsigned int v47; // r8d
  unsigned int v48; // r8d
  int v49; // eax
  int *v50; // rbx
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  unsigned int v55; // r8d
  unsigned int v56; // r8d
  unsigned int v57; // r8d
  int v58; // ecx
  __int128 v59; // xmm0
  int v60; // [rsp+48h] [rbp-C0h] BYREF
  int v61; // [rsp+4Ch] [rbp-BCh] BYREF
  float v62; // [rsp+50h] [rbp-B8h] BYREF
  int v63; // [rsp+54h] [rbp-B4h]
  int v64; // [rsp+58h] [rbp-B0h]
  int v65; // [rsp+5Ch] [rbp-ACh]
  int v66; // [rsp+60h] [rbp-A8h]
  _BYTE v67[20]; // [rsp+64h] [rbp-A4h]
  float v68; // [rsp+78h] [rbp-90h] BYREF
  float v69; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v70; // [rsp+80h] [rbp-88h] BYREF
  int v71; // [rsp+84h] [rbp-84h]
  BOOL v72; // [rsp+88h] [rbp-80h]
  BOOL v73; // [rsp+8Ch] [rbp-7Ch]
  float v74; // [rsp+168h] [rbp+60h] BYREF
  LONG v75; // [rsp+170h] [rbp+68h]

  v75 = a4;
  v6 = *a3;
  if ( !*((_DWORD *)*a3 + 160) )
  {
    v10 = v6[113];
    v11 = v6[114];
    v12 = v6[111];
    v13 = v6[106];
    v14 = v6[109];
    v15 = v6[110];
    v16 = v6[104];
    v17 = v6[105];
    v68 = v10;
    v69 = v11;
    v74 = v12;
    v62 = v13;
    v72 = EFLOAT::bIs16((EFLOAT *)&v74);
    v18 = EFLOAT::bIs16((EFLOAT *)&v62);
    v19 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v20 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v73 = v18;
    p_ptl = &v19->ptl;
    v64 = *(_DWORD *)(v21 + 316);
    v23 = *(_DWORD *)(v21 + 320);
    v19->ptl.y = a5;
    v19->ptl.x = a4;
    v71 = v23;
    v24 = 0;
    v66 = 0x7FFFFFFF;
    v25 = 0;
    v63 = 0x7FFFFFFF;
    *(_DWORD *)&v67[16] = 0x7FFFFFFF;
    *(_QWORD *)v67 = 0x7FFFFFFF80000000LL;
    *(_DWORD *)&v67[12] = 0x80000000;
    v65 = 0x80000000;
    *(_DWORD *)&v67[8] = 0x80000000;
    v26 = (struct RFONTOBJ *)*(unsigned int *)this;
    v74 = 0.0;
    v62 = 0.0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(v27, v26, v19, v20, &v60, a2, this) )
    {
      if ( v60 )
      {
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = *((_QWORD *)this + 8);
      }
      for ( i = 0; i < *(_DWORD *)this; a6 = v50 + 2 )
      {
        v29 = (_DWORD *)p_ptl[-1];
        v30 = v29[3];
        vGenWidths(&v70, &v60, (struct EFLOAT *)&v69, (struct EFLOAT *)&v68, v30, v29[6], v29[7], v64);
        v61 = 0;
        v31 = (float)(v25 + v70);
        bFToL(v31 * v11, &v61, 0);
        v33 = v63;
        if ( v24 + v61 + v71 < v63 )
          v33 = v24 + v61 + v71;
        v34 = v65;
        v63 = v33;
        *(_DWORD *)&v67[16] = v33;
        if ( v64 + v24 + v61 > v65 )
          v34 = v64 + v24 + v61;
        v61 = 0;
        v65 = v34;
        *(_DWORD *)&v67[8] = v34;
        bFToL(v31 * v10, &v61, v32);
        v36 = v29[4];
        v38 = v30 >> 31;
        v37 = v30;
        v60 = 0;
        v39 = v35 + 2;
        v40 = v61 - __SPAIR64__(v38, v37) / (int)(v35 + 2);
        v41 = v66;
        v42 = v40 + v36 - 4;
        if ( v42 < v66 )
          v41 = v42;
        v43 = v29[5] + v40 + 4;
        v66 = v41;
        *(_DWORD *)&v67[4] = v41;
        v44 = *(_DWORD *)v67;
        if ( v43 > *(int *)v67 )
          v44 = v43;
        *(_DWORD *)v67 = v44;
        *(_DWORD *)&v67[12] = v44;
        bFToL(v31 * v14, &v60, v35);
        v61 = 0;
        bFToL((float)v24 * v16, &v61, v45);
        p_ptl->x = v75 + v60 + v61 - v29[13] / v39;
        v61 = 0;
        bFToL(v31 * v15, &v61, v46);
        v60 = 0;
        bFToL((float)v24 * v17, &v60, v47);
        v49 = v29[15] / v39;
        v50 = a6;
        v51 = v60 - v49;
        v52 = LODWORD(v62);
        p_ptl->y = a5 + v61 + v51;
        v53 = v50[1] + LODWORD(v74);
        v54 = *v50 + v52;
        v62 = *(float *)&v54;
        v74 = *(float *)&v53;
        if ( v72 )
        {
          v25 = 16 * v54;
        }
        else
        {
          v60 = 0;
          bFToL((float)v54 * v12, &v60, v48);
          v53 = LODWORD(v74);
          v25 = v60;
        }
        if ( v73 )
        {
          v24 = 16 * v53;
        }
        else
        {
          v60 = 0;
          bFToL((float)v53 * v13, &v60, 0);
          v24 = v60;
        }
        ++i;
        p_ptl += 3;
      }
      v74 = 0.0;
      bFToL((float)v25 * v14, (int *)&v74, 0);
      v62 = 0.0;
      bFToL((float)v24 * v16, (int *)&v62, v55);
      *((_DWORD *)this + 20) = LODWORD(v74) + LODWORD(v62);
      v74 = 0.0;
      bFToL((float)v25 * v15, (int *)&v74, v56);
      v62 = 0.0;
      bFToL((float)v24 * v17, (int *)&v62, v57);
      v58 = LODWORD(v74) + LODWORD(v62);
      v59 = *(_OWORD *)&v67[4];
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 21) = v58;
      *((_OWORD *)this + 6) = v59;
    }
  }
}
