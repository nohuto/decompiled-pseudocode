/*
 * XREFs of ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z @ 0x1C029FD78
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C005B6A0 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     bFToL @ 0x1C00F7FB8 (bFToL.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C01140EC (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G1(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        float **a3,
        LONG a4,
        LONG a5,
        const int *a6,
        int *a7)
{
  float *v9; // rax
  struct _GLYPHPOS *v11; // r14
  int v12; // esi
  float v13; // xmm8_4
  float v14; // xmm6_4
  int v15; // r13d
  float v16; // xmm7_4
  int v17; // edi
  unsigned __int16 *v18; // r9
  int v19; // edx
  __int64 v20; // rax
  int v21; // r15d
  GLYPHDEF **p_pgdf; // rax
  GLYPHDEF *v25; // rdx
  int v26; // ecx
  int v27; // ecx
  unsigned int v28; // r8d
  bool v29; // zf
  float v30; // xmm1_4
  float v31; // xmm0_4
  int v32; // eax
  unsigned int v33; // r8d
  GLYPHDEF **v34; // rcx
  int v35; // r8d
  int v36; // ecx
  char v37; // [rsp+48h] [rbp-41h]
  int v38; // [rsp+4Ch] [rbp-3Dh] BYREF
  int v39; // [rsp+50h] [rbp-39h] BYREF
  GLYPHDEF **v40; // [rsp+58h] [rbp-31h]

  v9 = *a3;
  if ( *((_DWORD *)*a3 + 160) )
    return;
  v11 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
  v12 = 0;
  v13 = v9[101];
  v14 = v9[99];
  v15 = 0;
  v16 = v9[100];
  v17 = 0;
  v18 = (unsigned __int16 *)*((_QWORD *)this + 5);
  v11->ptl.y = a5;
  v11->ptl.x = a4;
  if ( !(unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(
                        (RFONTOBJ *)a3,
                        (struct RFONTOBJ *)*(unsigned int *)this,
                        v11,
                        v18,
                        &v39,
                        a2,
                        this) )
    return;
  v19 = *((_DWORD *)this + 58);
  if ( v39 )
  {
    v20 = *((_QWORD *)this + 8);
    v19 |= 2u;
    *((_DWORD *)this + 58) = v19;
    *((_QWORD *)this + 4) = v20;
  }
  if ( ((_DWORD)(*a3)[69] & 0x10) == 0 || (v37 = 1, (v19 & 0x1400) != 0) )
    v37 = 0;
  v21 = 0;
  v39 = *(_DWORD *)this;
  p_pgdf = &v11->pgdf;
  v40 = p_pgdf;
  while ( 1 )
  {
    v25 = *p_pgdf;
    if ( v37 )
    {
      v26 = v17 + HIDWORD(v25[1].ppo);
      if ( v17 >= v12 )
        v17 = v12;
      v12 = v17;
      if ( v26 <= v15 )
        v26 = v15;
LABEL_18:
      v15 = v26;
      goto LABEL_19;
    }
    v27 = v17 + LODWORD(v25[2].pgb);
    if ( v27 >= v12 )
      v27 = v12;
    v12 = v27;
    v26 = v17 + HIDWORD(v25[2].ppo);
    if ( v26 > v15 )
      goto LABEL_18;
LABEL_19:
    v21 += *a6++;
    if ( a7 )
      *a7++ = v21;
    v38 = 0;
    bFToL((float)v21 * v13, &v38, 0);
    v29 = v39-- == 1;
    v17 = v38;
    v30 = (float)v38;
    v31 = (float)v38 * v14;
    if ( v29 )
      break;
    v40 += 3;
    v38 &= v28;
    bFToL(v31, &v38, v28);
    v32 = v38 + a4;
    v38 &= v33;
    *((_DWORD *)v40 + 2) = v32;
    bFToL(v30 * v16, &v38, v33);
    v34 = v40;
    *((_DWORD *)v40 + 3) = v38 + a5;
    p_pgdf = v34;
  }
  v39 &= v28;
  bFToL(v31, &v39, v28);
  v35 = v39;
  v39 = 0;
  *((_DWORD *)this + 20) = v35;
  bFToL(v30 * v16, &v39, 0);
  *((_DWORD *)this + 21) = v39;
  if ( v17 <= v15 )
    v17 = v15;
  *((_DWORD *)this + 26) = v17;
  *((_DWORD *)this + 24) = v12;
  *((float *)this + 25) = (*a3)[79];
  v36 = *((_DWORD *)*a3 + 80);
  *((_DWORD *)this + 58) |= 4u;
  *((_DWORD *)this + 27) = v36;
}
