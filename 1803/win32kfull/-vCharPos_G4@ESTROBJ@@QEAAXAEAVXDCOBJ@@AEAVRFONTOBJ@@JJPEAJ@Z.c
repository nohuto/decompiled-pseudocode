/*
 * XREFs of ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x1C028CC4C
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0094D40 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00031C0 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00DDEAC (bFToL.c)
 *     ?bIs16@EFLOAT@@QEBAHXZ @ 0x1C0119908 (-bIs16@EFLOAT@@QEBAHXZ.c)
 *     ?vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z @ 0x1C028D348 (-vGenWidths@@YAXPEAJ0AEAVEFLOAT@@1JJJJ@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G4(ESTROBJ *this, struct XDCOBJ *a2, float **a3, LONG a4, LONG a5, int *a6)
{
  float *v6; // r10
  unsigned int v7; // r12d
  float v11; // xmm12_4
  float v12; // xmm13_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm8_4
  float v16; // xmm9_4
  float v17; // xmm10_4
  float v18; // xmm11_4
  _BOOL8 v19; // rdi
  BOOL v20; // eax
  struct _GLYPHPOS *v21; // r8
  unsigned __int16 *v22; // r9
  int v23; // r15d
  __int64 v24; // r10
  POINTL *p_ptl; // r13
  int v26; // r14d
  struct RFONTOBJ *v27; // rdx
  RFONTOBJ *v28; // r11
  _DWORD *v29; // rdi
  int v30; // ebx
  float v31; // xmm2_4
  char v32; // r8
  int v33; // edx
  int v34; // eax
  int v35; // r8d
  int v36; // ecx
  int v37; // eax
  int v38; // edx
  int v39; // ebx
  int v40; // edx
  int v41; // eax
  int v42; // ecx
  int v43; // ecx
  int v44; // eax
  char v45; // r8
  char v46; // r8
  char v47; // r8
  char v48; // r8
  int v49; // eax
  int *v50; // rbx
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  char v55; // r8
  char v56; // r8
  char v57; // r8
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
  _BOOL8 v73; // [rsp+90h] [rbp-78h]
  float v74; // [rsp+168h] [rbp+60h] BYREF
  LONG v75; // [rsp+170h] [rbp+68h]

  v75 = a4;
  v6 = *a3;
  v7 = 0;
  if ( !*((_DWORD *)*a3 + 157) )
  {
    v11 = v6[110];
    v12 = v6[111];
    v13 = v6[108];
    v14 = v6[103];
    v15 = v6[106];
    v16 = v6[107];
    v17 = v6[101];
    v18 = v6[102];
    v68 = v11;
    v69 = v12;
    v74 = v13;
    v62 = v14;
    v19 = EFLOAT::bIs16((EFLOAT *)&v74);
    v20 = EFLOAT::bIs16((EFLOAT *)&v62);
    v21 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v22 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v72 = v20;
    v23 = 0;
    v64 = *(_DWORD *)(v24 + 300);
    p_ptl = &v21->ptl;
    v71 = *(_DWORD *)(v24 + 304);
    v21->ptl.y = a5;
    v21->ptl.x = a4;
    v26 = 0;
    v66 = 0x7FFFFFFF;
    *(_QWORD *)v67 = 0x7FFFFFFF80000000LL;
    *(_DWORD *)&v67[12] = 0x80000000;
    v65 = 0x80000000;
    *(_DWORD *)&v67[8] = 0x80000000;
    v27 = (struct RFONTOBJ *)*(unsigned int *)this;
    v63 = 0x7FFFFFFF;
    *(_DWORD *)&v67[16] = 0x7FFFFFFF;
    v74 = 0.0;
    v62 = 0.0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(v28, v27, v21, v22, &v60, a2, this) )
    {
      if ( v60 )
      {
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = *((_QWORD *)this + 8);
      }
      if ( *(_DWORD *)this )
      {
        v73 = v19;
        do
        {
          v29 = (_DWORD *)p_ptl[-1];
          v30 = v29[3];
          vGenWidths(&v70, &v60, (struct EFLOAT *)&v69, (struct EFLOAT *)&v68, v30, v29[6], v29[7], v64);
          v61 = 0;
          v31 = (float)(v23 + v70);
          bFToL(v31 * v12, &v61, 0);
          v33 = v63;
          if ( v26 + v61 + v71 < v63 )
            v33 = v26 + v61 + v71;
          v34 = v65;
          v63 = v33;
          *(_DWORD *)&v67[16] = v33;
          if ( v64 + v26 + v61 > v65 )
            v34 = v64 + v26 + v61;
          v61 = 0;
          v65 = v34;
          *(_DWORD *)&v67[8] = v34;
          bFToL(v31 * v11, &v61, v32);
          v36 = v29[4];
          v38 = v30 >> 31;
          v37 = v30;
          v60 = 0;
          v39 = v35 + 2;
          v40 = v61 - __SPAIR64__(v38, v37) / (v35 + 2);
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
          bFToL(v31 * v15, &v60, v35);
          v61 = 0;
          bFToL((float)v26 * v17, &v61, v45);
          p_ptl->x = v75 + v60 + v61 - v29[13] / v39;
          v61 = 0;
          bFToL(v31 * v16, &v61, v46);
          v60 = 0;
          bFToL((float)v26 * v18, &v60, v47);
          v49 = v29[15] / v39;
          v50 = a6;
          v51 = v60 - v49;
          v52 = LODWORD(v62);
          p_ptl->y = a5 + v61 + v51;
          v53 = v50[1] + LODWORD(v74);
          v54 = *v50 + v52;
          v62 = *(float *)&v54;
          v74 = *(float *)&v53;
          if ( v73 )
          {
            v23 = 16 * v54;
          }
          else
          {
            v60 = 0;
            bFToL((float)v54 * v13, &v60, v48);
            v53 = LODWORD(v74);
            v23 = v60;
          }
          if ( v72 )
          {
            v26 = 16 * v53;
          }
          else
          {
            v60 = 0;
            bFToL((float)v53 * v14, &v60, 0);
            v26 = v60;
          }
          ++v7;
          p_ptl += 3;
          a6 = v50 + 2;
        }
        while ( v7 < *(_DWORD *)this );
      }
      v74 = 0.0;
      bFToL((float)v23 * v15, (int *)&v74, 0);
      v62 = 0.0;
      bFToL((float)v26 * v17, (int *)&v62, v55);
      *((_DWORD *)this + 20) = LODWORD(v74) + LODWORD(v62);
      v74 = 0.0;
      bFToL((float)v23 * v16, (int *)&v74, v56);
      v62 = 0.0;
      bFToL((float)v26 * v18, (int *)&v62, v57);
      v58 = LODWORD(v74) + LODWORD(v62);
      v59 = *(_OWORD *)&v67[4];
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 21) = v58;
      *((_OWORD *)this + 6) = v59;
    }
  }
}
