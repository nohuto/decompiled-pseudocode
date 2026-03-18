/*
 * XREFs of ?bNext@BEZIER64@@QEAAHPEAU_POINTFIX@@@Z @ 0x1C00C6B80
 * Callers:
 *     ?pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z @ 0x1C001B64C (-pprFlattenRec@EPATHOBJ@@IEAAPEAU_PATHRECORD@@PEAU2@@Z.c)
 * Callees:
 *     ?vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z @ 0x1C0060768 (-vBoundBox@@YAXPEAU_POINTFIX@@PEAU_RECTFX@@@Z.c)
 *     ?bIntersect@@YA_NPEAU_RECTFX@@0@Z @ 0x1C00C6B50 (-bIntersect@@YA_NPEAU_RECTFX@@0@Z.c)
 *     ?vInit@HFDBASIS64@@QEAAXJJJJ@Z @ 0x1C00C72B4 (-vInit@HFDBASIS64@@QEAAXJJJJ@Z.c)
 *     ?vParentError@HFDBASIS64@@QEBAXPEA_J@Z @ 0x1C00C734C (-vParentError@HFDBASIS64@@QEBAXPEA_J@Z.c)
 *     ?vUntransform@HFDBASIS64@@QEAAXPEAJ@Z @ 0x1C00C73CC (-vUntransform@HFDBASIS64@@QEAAXPEAJ@Z.c)
 */

__int64 __fastcall BEZIER64::bNext(BEZIER64 *this, struct _POINTFIX *a2)
{
  HFDBASIS64 *v4; // rdi
  struct _RECTFX *v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r11
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r10
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  int v51; // r11d
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rax
  _RECTFX v74; // [rsp+30h] [rbp-30h] BYREF
  struct _POINTFIX v75; // [rsp+40h] [rbp-20h] BYREF
  int v76; // [rsp+48h] [rbp-18h]
  int v77; // [rsp+4Ch] [rbp-14h]
  int v78; // [rsp+50h] [rbp-10h]
  int v79; // [rsp+54h] [rbp-Ch]
  int v80; // [rsp+58h] [rbp-8h]
  int v81; // [rsp+5Ch] [rbp-4h]
  __int64 v82; // [rsp+90h] [rbp+30h] BYREF

  if ( !*((_DWORD *)this + 41) )
  {
    v4 = (BEZIER64 *)((char *)this + 64);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 64), (int *)&v75);
    HFDBASIS64::vUntransform((BEZIER64 *)((char *)this + 96), &v75.y);
    HFDBASIS64::vInit(this, v75.x, v76, v78, v80);
    HFDBASIS64::vInit((BEZIER64 *)((char *)this + 32), v75.y, v77, v79, v81);
    v5 = (struct _RECTFX *)*((_QWORD *)this + 17);
    *((_DWORD *)this + 41) = 1;
    if ( !v5 || (vBoundBox(&v75, &v74), bIntersect(&v74, v5)) )
    {
      v6 = *((_QWORD *)this + 6);
      v7 = *((_QWORD *)this + 7);
      while ( 1 )
      {
        v8 = *((_QWORD *)this + 2);
        v9 = *((_QWORD *)this + 3);
        v10 = -v8;
        v11 = -v8;
        v12 = -v9;
        if ( v9 >= 0 )
          v12 = *((_QWORD *)this + 3);
        if ( v8 >= 0 )
          v11 = *((_QWORD *)this + 2);
        if ( v11 <= v12 )
        {
          v10 = -*((_QWORD *)this + 3);
          if ( v9 >= 0 )
            v10 = *((_QWORD *)this + 3);
        }
        else if ( v8 >= 0 )
        {
          v10 = *((_QWORD *)this + 2);
        }
        v13 = *((_QWORD *)this + 16);
        if ( v10 <= v13 )
        {
          v14 = -v6;
          v15 = -v6;
          v16 = -v7;
          if ( v6 >= 0 )
            v15 = v6;
          if ( v7 >= 0 )
            v16 = v7;
          if ( v15 <= v16 )
          {
            v14 = v7;
            if ( v7 < 0 )
              v14 = -v7;
          }
          else if ( v6 >= 0 )
          {
            v14 = v6;
          }
          if ( v14 <= v13 )
            break;
        }
        *((_DWORD *)this + 41) *= 2;
        v17 = *((_QWORD *)this + 3);
        v18 = *((_QWORD *)this + 1);
        v19 = v17 + *((_QWORD *)this + 2);
        *((_QWORD *)this + 3) = v17 >> 2;
        v19 >>= 3;
        *((_QWORD *)this + 2) = v19;
        *((_QWORD *)this + 1) = (v18 - v19) >> 1;
        v20 = *((_QWORD *)this + 7);
        v6 = (v20 + *((_QWORD *)this + 6)) >> 3;
        v21 = *((_QWORD *)this + 5) - v6;
        *((_QWORD *)this + 6) = v6;
        v7 = v20 >> 2;
        *((_QWORD *)this + 7) = v7;
        *((_QWORD *)this + 5) = v21 >> 1;
      }
    }
    if ( (*((_DWORD *)this + 40))-- != 1 )
    {
      v23 = *((_QWORD *)v4 + 2);
      v24 = *((_QWORD *)v4 + 1);
      *(_QWORD *)v4 += v24;
      *((_QWORD *)v4 + 1) = v23 + v24;
      *((_QWORD *)v4 + 2) = 2 * v23 - *((_QWORD *)v4 + 3);
      *((_QWORD *)v4 + 3) = v23;
      v25 = *((_QWORD *)this + 14);
      v26 = *((_QWORD *)this + 13);
      *((_QWORD *)this + 12) += v26;
      *((_QWORD *)this + 13) = v25 + v26;
      v27 = 2 * v25 - *((_QWORD *)this + 15);
      *((_QWORD *)this + 15) = v25;
      *((_QWORD *)this + 14) = v27;
      v28 = *((_QWORD *)v4 + 2);
      v29 = *((_QWORD *)v4 + 3);
      v30 = -v28;
      v31 = -v28;
      v32 = -v29;
      if ( v29 >= 0 )
        v32 = *((_QWORD *)v4 + 3);
      if ( v28 >= 0 )
        v31 = *((_QWORD *)v4 + 2);
      if ( v31 <= v32 )
      {
        v30 = *((_QWORD *)v4 + 3);
        if ( v29 < 0 )
          v30 = -*((_QWORD *)v4 + 3);
      }
      else if ( v28 >= 0 )
      {
        v30 = *((_QWORD *)v4 + 2);
      }
      v82 = v30;
      if ( v30 > geqErrorHigh )
        goto LABEL_51;
      v33 = *((_QWORD *)this + 15);
      v34 = -v27;
      v35 = -v27;
      v36 = -v33;
      if ( v27 >= 0 )
        v35 = v27;
      if ( v33 >= 0 )
        v36 = *((_QWORD *)this + 15);
      if ( v35 <= v36 )
      {
        v34 = *((_QWORD *)this + 15);
        if ( v33 < 0 )
          v34 = -*((_QWORD *)this + 15);
      }
      else if ( v27 >= 0 )
      {
        v34 = v27;
      }
      v82 = v34;
      if ( v34 > geqErrorHigh )
      {
LABEL_51:
        *((_DWORD *)this + 40) *= 2;
        v37 = *((_QWORD *)v4 + 3);
        v38 = (v37 + *((_QWORD *)v4 + 2)) >> 3;
        v39 = *((_QWORD *)v4 + 1) - v38;
        *((_QWORD *)v4 + 2) = v38;
        *((_QWORD *)v4 + 1) = v39 >> 1;
        *((_QWORD *)v4 + 3) = v37 >> 2;
        v40 = *((_QWORD *)this + 15);
        v41 = (v40 + *((_QWORD *)this + 14)) >> 3;
        v42 = *((_QWORD *)this + 13) - v41;
        *((_QWORD *)this + 14) = v41;
        *((_QWORD *)this + 15) = v40 >> 2;
        *((_QWORD *)this + 13) = v42 >> 1;
      }
      while ( (*((_DWORD *)this + 40) & 1) == 0 )
      {
        HFDBASIS64::vParentError(v4, &v82);
        v43 = geqErrorHigh;
        if ( v82 > geqErrorHigh )
          break;
        HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 96), &v82);
        if ( v82 > v43 )
          break;
        v44 = *((_QWORD *)v4 + 2);
        *((_QWORD *)v4 + 3) *= 4LL;
        *((_QWORD *)v4 + 1) = v44 + 2LL * *((_QWORD *)v4 + 1);
        *((_QWORD *)v4 + 2) = 8 * v44 - *((_QWORD *)v4 + 3);
        v45 = *((_QWORD *)this + 14);
        v46 = *((_QWORD *)this + 13);
        *((_QWORD *)this + 15) *= 4LL;
        *((_QWORD *)this + 13) = v45 + 2 * v46;
        *((_QWORD *)this + 14) = 8 * v45 - *((_QWORD *)this + 15);
        *((int *)this + 40) >>= 1;
      }
    }
  }
  v47 = *((_QWORD *)this + 2);
  v48 = *((_QWORD *)this + 1);
  *(_QWORD *)this += v48;
  *((_QWORD *)this + 1) = v47 + v48;
  *((_QWORD *)this + 2) = 2 * v47 - *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = v47;
  v49 = *((_QWORD *)this + 6);
  v50 = *((_QWORD *)this + 5);
  *((_QWORD *)this + 4) += v50;
  *((_QWORD *)this + 5) = v49 + v50;
  *((_QWORD *)this + 6) = 2 * v49 - *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v49;
  a2->x = (*(_QWORD *)this + 0x8000000LL) >> 28;
  a2->y = (*((_QWORD *)this + 4) + 0x8000000LL) >> 28;
  v51 = *((_DWORD *)this + 41) - 1;
  *((_DWORD *)this + 41) = v51;
  if ( !v51 && !*((_DWORD *)this + 40) )
    return 0LL;
  v53 = *((_QWORD *)this + 2);
  v54 = *((_QWORD *)this + 3);
  v55 = -v53;
  v56 = -v53;
  v57 = -v54;
  if ( v54 >= 0 )
    v57 = *((_QWORD *)this + 3);
  if ( v53 >= 0 )
    v56 = *((_QWORD *)this + 2);
  if ( v56 <= v57 )
  {
    v55 = *((_QWORD *)this + 3);
    if ( v54 < 0 )
      v55 = -*((_QWORD *)this + 3);
  }
  else if ( v53 >= 0 )
  {
    v55 = *((_QWORD *)this + 2);
  }
  v58 = *((_QWORD *)this + 16);
  v82 = v55;
  if ( v55 > v58 )
    goto LABEL_81;
  v59 = *((_QWORD *)this + 6);
  v60 = *((_QWORD *)this + 7);
  v61 = -v59;
  v62 = -v59;
  v63 = -v60;
  if ( v60 >= 0 )
    v63 = *((_QWORD *)this + 7);
  if ( v59 >= 0 )
    v62 = *((_QWORD *)this + 6);
  if ( v62 <= v63 )
  {
    v61 = *((_QWORD *)this + 7);
    if ( v60 < 0 )
      v61 = -*((_QWORD *)this + 7);
  }
  else if ( v59 >= 0 )
  {
    v61 = *((_QWORD *)this + 6);
  }
  v82 = v61;
  if ( v61 > v58 )
  {
LABEL_81:
    *((_DWORD *)this + 41) = 2 * v51;
    v64 = *((_QWORD *)this + 3);
    v65 = *((_QWORD *)this + 1);
    v66 = (v64 + *((_QWORD *)this + 2)) >> 3;
    *((_QWORD *)this + 2) = v66;
    *((_QWORD *)this + 1) = (v65 - v66) >> 1;
    *((_QWORD *)this + 3) = v64 >> 2;
    v67 = *((_QWORD *)this + 7);
    v68 = (v67 + *((_QWORD *)this + 6)) >> 3;
    v69 = *((_QWORD *)this + 5) - v68;
    *((_QWORD *)this + 6) = v68;
    *((_QWORD *)this + 7) = v67 >> 2;
    *((_QWORD *)this + 5) = v69 >> 1;
    v51 = *((_DWORD *)this + 41);
  }
  if ( (v51 & 1) == 0 )
  {
    do
    {
      HFDBASIS64::vParentError(this, &v82);
      v70 = *((_QWORD *)this + 16);
      if ( v82 > v70 )
        break;
      HFDBASIS64::vParentError((BEZIER64 *)((char *)this + 32), &v82);
      if ( v82 > v70 )
        break;
      *((_QWORD *)this + 3) *= 4LL;
      v71 = *((_QWORD *)this + 2);
      *((_QWORD *)this + 1) = v71 + 2LL * *((_QWORD *)this + 1);
      *((_QWORD *)this + 2) = 8 * v71 - *((_QWORD *)this + 3);
      v72 = *((_QWORD *)this + 6);
      *((_QWORD *)this + 7) *= 4LL;
      v73 = *((_QWORD *)this + 5);
      *((_QWORD *)this + 6) = 8 * v72 - *((_QWORD *)this + 7);
      *((_QWORD *)this + 5) = v72 + 2 * v73;
      *((int *)this + 41) >>= 1;
    }
    while ( (*((_DWORD *)this + 41) & 1) == 0 );
  }
  return 1LL;
}
