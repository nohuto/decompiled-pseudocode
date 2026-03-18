/*
 * XREFs of ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1C0068B4C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0065250 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C00589F4 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C00AA41C (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C01014BC (bFToL.c)
 */

__int64 __fastcall ESTROBJ::bOpaqueArea(ESTROBJ *this, struct _POINTFIX *a2, struct _RECTL *a3)
{
  int v6; // edx
  LONG v7; // r8d
  __int64 v8; // rax
  int v9; // edx
  _QWORD *v11; // rax
  EFLOAT *v12; // r15
  __int64 v13; // rbx
  EFLOAT *v14; // r8
  __int64 v15; // r14
  int v16; // edx
  LONG v17; // edx
  int v18; // edx
  LONG v19; // edx
  __int64 v20; // rcx
  int v21; // edx
  LONG v22; // edx
  int v23; // edx
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // edx
  int v40; // r8d
  FIX v41; // ebx
  int v42; // r11d
  int v43; // edx
  FIX v44; // r11d
  int v45; // r10d
  int v46; // r8d
  FIX v47; // r10d
  int v48; // ecx
  int v49; // edx
  int v50; // ecx
  FIX v51; // eax
  int v52; // ecx
  unsigned __int64 v53; // rcx
  FIX y; // eax
  __int64 v55; // rcx
  LONG v56; // ecx
  int v57; // eax
  int v58; // [rsp+20h] [rbp-20h] BYREF
  int v59; // [rsp+24h] [rbp-1Ch] BYREF
  int v60; // [rsp+28h] [rbp-18h] BYREF
  int v61; // [rsp+2Ch] [rbp-14h] BYREF
  int v62; // [rsp+30h] [rbp-10h] BYREF
  _DWORD v63[3]; // [rsp+34h] [rbp-Ch] BYREF
  int v64; // [rsp+70h] [rbp+30h] BYREF
  int v65; // [rsp+88h] [rbp+48h] BYREF

  if ( (*((_DWORD *)this + 1) & 2) != 0 )
  {
    v6 = (*((_DWORD *)this + 18) + 8) >> 4;
    a3->left = v6 + (*((int *)this + 24) >> 4);
    v7 = v6 + ((*((_DWORD *)this + 26) + 15) >> 4);
    a3->right = v7;
    v8 = *((_QWORD *)this + 7);
    if ( (*(_DWORD *)(*(_QWORD *)v8 + 12LL) & 0x2000) != 0 && (*(_DWORD *)(*(_QWORD *)v8 + 716LL) & 6) != 0 )
    {
      a3->right = v7 + 1;
      *((_DWORD *)this + 1) &= ~0x10u;
    }
    v9 = (*((_DWORD *)this + 19) + 8) >> 4;
    a3->top = v9 - ((*((_DWORD *)this + 25) + 15) >> 4);
    a3->bottom = v9 - (*((int *)this + 27) >> 4);
    return 0LL;
  }
  v11 = (_QWORD *)*((_QWORD *)this + 7);
  v12 = (EFLOAT *)(*v11 + 400LL);
  v13 = *v11 + 416LL;
  v15 = 0LL;
  if ( (unsigned int)EFLOAT::bIsZero(v12) && (unsigned int)EFLOAT::bIsZero((EFLOAT *)v13) )
  {
    v16 = (*((_DWORD *)this + 18) + 8) >> 4;
    if ( *(float *)v14 < 0.0 )
    {
      a3->left = v16 - ((*((_DWORD *)this + 26) + 15) >> 4);
      v17 = v16 - (*((int *)this + 24) >> 4);
    }
    else
    {
      a3->left = v16 + (*((int *)this + 24) >> 4);
      v17 = ((*((_DWORD *)this + 26) + 15) >> 4) + v16;
    }
    a3->right = v17;
    v18 = (*((_DWORD *)this + 19) + 8) >> 4;
    if ( *(float *)(v13 + 4) >= 0.0 )
    {
      a3->top = v18 + (*((int *)this + 27) >> 4);
      v19 = ((*((_DWORD *)this + 25) + 15) >> 4) + v18;
    }
    else
    {
      a3->top = v18 - ((*((_DWORD *)this + 25) + 15) >> 4);
      v19 = v18 - (*((int *)this + 27) >> 4);
    }
    a3->bottom = v19;
    ++a3->right;
    return 0LL;
  }
  if ( (unsigned int)EFLOAT::bIsZero(v14) && (unsigned int)EFLOAT::bIsZero((EFLOAT *)(v13 + 4)) )
  {
    v21 = (*((_DWORD *)this + 18) + 8) >> 4;
    if ( *(float *)v13 >= 0.0 )
    {
      a3->left = v21 + (*((int *)this + 27) >> 4);
      v22 = ((*((_DWORD *)this + 25) + 15) >> 4) + v21;
    }
    else
    {
      a3->left = v21 - ((*((_DWORD *)this + 25) + 15) >> 4);
      v22 = v21 - (*((int *)this + 27) >> 4);
    }
    a3->right = v22;
    v23 = (*((_DWORD *)this + 19) + 8) >> 4;
    if ( *(float *)v12 >= 0.0 )
    {
      a3->top = v23 + (*((int *)this + 24) >> 4);
      v24 = ((*((_DWORD *)this + 26) + 15) >> 4) + v23;
    }
    else
    {
      a3->top = v23 - ((*((_DWORD *)this + 26) + 15) >> 4);
      v24 = v23 - (*((int *)this + 24) >> 4);
    }
    a3->bottom = v24 + 1;
    return 0LL;
  }
  v65 = 0;
  bFToL(v20, &v65, 0LL);
  v61 = 0;
  bFToL(v25, &v61, v26);
  v58 = 0;
  bFToL(v27, &v58, v28);
  v62 = 0;
  bFToL(v29, &v62, v30);
  v64 = 0;
  bFToL(v31, &v64, v32);
  v60 = 0;
  bFToL(v33, &v60, v34);
  v59 = 0;
  bFToL(v35, &v59, v36);
  v63[0] = 0;
  bFToL(v37, v63, v38);
  v39 = v64;
  v40 = v58;
  v41 = v65 + v64 + *((_DWORD *)this + 18);
  a2->x = v41;
  v42 = v39 + v40;
  v43 = v59;
  v44 = *((_DWORD *)this + 18) + v42;
  a2[1].x = v44;
  v45 = v43 + v40;
  v46 = v61;
  v47 = *((_DWORD *)this + 18) + v45;
  a2[2].x = v47;
  v48 = v43 + *((_DWORD *)this + 18);
  v49 = v62;
  a2[3].x = v65 + v48;
  v50 = v60;
  a2->y = *((_DWORD *)this + 19) + v60 + v46;
  v51 = *((_DWORD *)this + 19) + v50 + v49;
  v52 = v63[0];
  a2[1].y = v51;
  a2[2].y = *((_DWORD *)this + 19) + v52 + v49;
  a2[3].y = *((_DWORD *)this + 19) + v52 + v46;
  v53 = (v44 <= v41) ^ (unsigned __int64)(v44 > v47);
  a3->left = a2[v53].x;
  a3->right = a2[v53 + 2].x;
  y = a2[1].y;
  LOBYTE(v15) = y <= a2[2].y;
  v55 = v15 ^ (y > a2->y);
  a3->top = a2[v55].y;
  a3->bottom = a2[v55 + 2].y;
  ERECTL::vOrder((ERECTL *)a3);
  v56 = a3->left >> 4;
  a3->top = (a3->top >> 4) - 2;
  v57 = a3->right + 15;
  a3->left = v56 - 2;
  a3->right = (v57 >> 4) + 2;
  a3->bottom = ((a3->bottom + 15) >> 4) + 2;
  return 1LL;
}
