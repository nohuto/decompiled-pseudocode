/*
 * XREFs of ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C02806F8
 * Callers:
 *     GreRectangle @ 0x1C00F6F20 (GreRectangle.c)
 *     NtGdiEllipse @ 0x1C0270080 (NtGdiEllipse.c)
 *     NtGdiRoundRect @ 0x1C02702C0 (NtGdiRoundRect.c)
 *     NtGdiArcInternal @ 0x1C02818C0 (NtGdiArcInternal.c)
 * Callees:
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C0096D7C (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C009C134 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00A512C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C01144F8 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

EBOX *__fastcall EBOX::EBOX(EBOX *this, struct DCOBJ *a2, struct _RECTL *a3, struct _LINEATTRS *a4, int a5)
{
  __int128 v5; // xmm0
  ERECTL *v6; // rdi
  int *v7; // r8
  __int64 v10; // rdx
  int v12; // ecx
  __int64 v13; // rax
  int v14; // r9d
  int v15; // eax
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // r15
  int v19; // r14d
  int v20; // ecx
  _DWORD *v21; // r15
  FIX v22; // r11d
  FIX v23; // r13d
  FIX y; // r9d
  FIX x; // r10d
  int v26; // r12d
  float v27; // xmm2_4
  int v28; // r9d
  int v29; // r11d
  __int64 v30; // rcx
  signed int v31; // r11d
  FIX v32; // ecx
  FIX v33; // r9d
  FIX v34; // r8d
  FIX v35; // r10d
  int v36; // edx
  int v37; // eax
  int v38; // edi
  int *v39; // rsi
  int v40; // r11d
  int v41; // r9d
  int v42; // r8d
  int v43; // r10d
  int v44; // ecx
  int v45; // r8d
  int v46; // edx
  int v47; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // edx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rcx
  int v55; // edx
  float v57; // [rsp+20h] [rbp-40h] BYREF
  float v58; // [rsp+24h] [rbp-3Ch] BYREF
  int v59; // [rsp+28h] [rbp-38h] BYREF
  int v60; // [rsp+2Ch] [rbp-34h]
  int v61; // [rsp+30h] [rbp-30h]
  int v62; // [rsp+34h] [rbp-2Ch]
  _BYTE v63[16]; // [rsp+38h] [rbp-28h] BYREF
  struct _POINTFIX v64; // [rsp+48h] [rbp-18h] BYREF
  FIX v65; // [rsp+50h] [rbp-10h]
  FIX v66; // [rsp+54h] [rbp-Ch]

  v5 = (__int128)*a3;
  *(_DWORD *)this = 0;
  v6 = (EBOX *)((char *)this + 64);
  *((_DWORD *)this + 1) = 0;
  v7 = (int *)((char *)this + 72);
  *((_OWORD *)this + 4) = v5;
  v10 = *(_QWORD *)a2;
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 80) + 312LL) & 1) != 0 )
  {
    --*(_DWORD *)v6;
    --*v7;
    v10 = *(_QWORD *)a2;
    v12 = *(_DWORD *)v6;
  }
  else
  {
    v12 = *((_DWORD *)this + 16);
  }
  v13 = *(_QWORD *)(v10 + 80);
  if ( *(_DWORD *)(v13 + 68) == 2 )
  {
    ERECTL::vOrder(v6);
    goto LABEL_16;
  }
  v14 = *(_DWORD *)(v13 + 352) & 0x100;
  if ( v14 && (v15 = *v7, v12 < *v7) || !v14 && (v15 = *((_DWORD *)this + 18), v12 > v15) )
  {
    *(_DWORD *)v6 = v15;
    *v7 = v12;
    v10 = *(_QWORD *)a2;
  }
  v16 = *((_DWORD *)this + 19);
  v17 = *((_DWORD *)this + 17);
  if ( (*(_DWORD *)(*(_QWORD *)(v10 + 80) + 352LL) & 0x200) == 0 )
  {
    if ( v17 <= v16 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( v17 < v16 )
  {
LABEL_15:
    *((_DWORD *)this + 19) = v17;
    *((_DWORD *)this + 17) = v16;
  }
LABEL_16:
  v18 = *(_QWORD *)a2;
  v19 = 4;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 256LL) & 4) != 0 )
  {
    v20 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 17) = *((_DWORD *)this + 19);
    *((_DWORD *)this + 19) = v20;
    v18 = *(_QWORD *)a2;
  }
  v64 = *(struct _POINTFIX *)v6;
  v65 = *((_DWORD *)v6 + 2);
  v66 = *((_DWORD *)v6 + 3);
  v21 = *(_DWORD **)(v18 + 152);
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v63, a2, 516);
  v22 = v66;
  v23 = v65;
  y = v64.y;
  x = v64.x;
  if ( (v21[10] & 0x10000) == 0 || (a4->fl & 1) == 0 )
    goto LABEL_25;
  v26 = 1;
  v27 = (float)(v21[42] >> 1);
  if ( (v21[42] & 1) != 0 )
    v27 = FP_0_5 + v27;
  LODWORD(v57) = efHalfDiff(v64.x, v65);
  LODWORD(v58) = efHalfDiff(v28, v29);
  EFLOAT::vAbs((EFLOAT *)&v57);
  EFLOAT::vAbs((EFLOAT *)&v58);
  if ( v27 > v57 || v27 > v58 )
  {
    *((_DWORD *)this + 1) = 1;
LABEL_25:
    v26 = 0;
  }
  v30 = *(_QWORD *)(*(_QWORD *)a2 + 80LL);
  if ( *(_DWORD *)(v30 + 68) == 2 || v26 || *((_DWORD *)this + 1) || (*(_DWORD *)(v30 + 352) & 0x20) != 0 )
  {
    v39 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = y;
    *((_DWORD *)this + 5) = y;
    *((_DWORD *)this + 2) = v23;
    *((_DWORD *)this + 4) = x;
    *((_DWORD *)this + 6) = x;
    *((_DWORD *)this + 7) = v22;
    EXFORMOBJ::bXformRound((EXFORMOBJ *)v63, (struct _POINTL *)this + 1, (struct _POINTFIX *)this + 1, 3uLL);
    if ( a5 )
    {
      if ( v21[44] == 5 )
      {
        v40 = *v39;
        v41 = *((_DWORD *)this + 3);
        v42 = *((_DWORD *)this + 6);
        v43 = *((_DWORD *)this + 7);
        if ( (((unsigned __int8)v43 | (unsigned __int8)(v42 | v41 | *(_BYTE *)v39)) & 0xF) == 0 )
        {
          v44 = 4;
          if ( v40 <= v42 )
            v44 = -4;
          *((_DWORD *)this + 4) -= v44;
          *((_DWORD *)this + 6) = v42 - v44;
          if ( v43 <= v41 )
            v19 = -4;
          *v39 = v40 + v44;
          *((_DWORD *)this + 5) -= v19;
          *((_DWORD *)this + 3) = v41 - v19;
          *((_DWORD *)this + 7) = v19 + v43;
        }
      }
    }
    if ( v26 )
    {
      v45 = v21[42];
      v46 = v45;
      v47 = *(_DWORD *)v6;
      v61 = v45;
      if ( *((_DWORD *)this + 18) < v47 )
      {
        v46 = -v45;
        v61 = -v45;
      }
      if ( *((_DWORD *)this + 19) < *((_DWORD *)this + 17) )
        v45 = -v45;
      v59 = -v46;
      v62 = v45;
      v60 = v45;
      EXFORMOBJ::bXform((EXFORMOBJ *)v63, (struct _VECTORL *)&v59, (struct _VECTORFX *)&v59, 2uLL);
      v48 = v61;
      v49 = v60 + 1;
      v50 = (v59 + 1) >> 1;
      *v39 += v50;
      v49 >>= 1;
      *((_DWORD *)this + 3) += v49;
      *((_DWORD *)this + 4) += (v48 + 1) >> 1;
      *((_DWORD *)this + 5) += (v62 + 1) >> 1;
      *((_DWORD *)this + 6) -= v50;
      *((_DWORD *)this + 7) -= v49;
    }
    goto LABEL_63;
  }
  EXFORMOBJ::bXformRound((EXFORMOBJ *)v63, (struct _POINTL *)&v64, &v64, 2uLL);
  v31 = 16;
  if ( a5 && v21[44] == 5 )
  {
    v32 = v64.y;
    v33 = v66;
    v34 = v64.x;
    v35 = v65;
    if ( (((unsigned __int8)v65 | (unsigned __int8)(LOBYTE(v64.x) | v66 | LOBYTE(v64.y))) & 0xF) == 0 )
    {
      v36 = -4;
      v37 = -4;
      v31 = 32;
      if ( v65 > v64.x )
        v37 = 4;
      v35 = v37 + v65;
      v34 = v64.x - v37;
      if ( v66 > v64.y )
        v36 = 4;
      v32 = v64.y - v36;
      v33 = v36 + v66;
    }
  }
  else
  {
    v33 = v66;
    v35 = v65;
    v32 = v64.y;
    v34 = v64.x;
  }
  v38 = v33 - v32;
  if ( (int)abs32(v35 - v34) >= v31 && (int)abs32(v38) >= v31 )
  {
    if ( v35 - v34 <= 0 )
      v34 -= v31;
    else
      v35 -= v31;
    if ( v38 <= 0 )
      v32 -= v31;
    else
      v33 -= v31;
    v39 = (int *)((char *)this + 8);
    *((_DWORD *)this + 3) = v32;
    *((_DWORD *)this + 2) = v35;
    *((_DWORD *)this + 4) = v34;
    *((_DWORD *)this + 5) = v32;
    *((_DWORD *)this + 6) = v34;
    *((_DWORD *)this + 7) = v33;
LABEL_63:
    v51 = *(_QWORD *)v39;
    *((_QWORD *)this + 6) = *(_QWORD *)v39;
    *((_DWORD *)this + 12) = v51 - *((_DWORD *)this + 4);
    *((_DWORD *)this + 13) -= *((_DWORD *)this + 5);
    v52 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 7) = v52;
    *((_DWORD *)this + 14) = v52 - *((_DWORD *)this + 6);
    *((_DWORD *)this + 15) -= *((_DWORD *)this + 7);
    v53 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 4) = v53;
    *((_DWORD *)this + 8) = *((_DWORD *)this + 12) + v53;
    *((_DWORD *)this + 9) += *((_DWORD *)this + 13);
    *((_DWORD *)this + 12) = (*((_DWORD *)this + 12) + 1) >> 1;
    *((_DWORD *)this + 13) = (*((_DWORD *)this + 13) + 1) >> 1;
    *((_DWORD *)this + 14) = (*((_DWORD *)this + 14) + 1) >> 1;
    *((_DWORD *)this + 15) = (*((_DWORD *)this + 15) + 1) >> 1;
    v54 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 5) = v54;
    v55 = v54 + *((_DWORD *)this + 12);
    *((_DWORD *)this + 10) = v55;
    *((_DWORD *)this + 11) += *((_DWORD *)this + 13);
    *((_DWORD *)this + 10) = *((_DWORD *)this + 14) + v55;
    *((_DWORD *)this + 11) += *((_DWORD *)this + 15);
    return this;
  }
  *(_DWORD *)this = 1;
  return this;
}
