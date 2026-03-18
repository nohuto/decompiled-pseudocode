/*
 * XREFs of BuildShrinkAAInfo @ 0x1C0001B40
 * Callers:
 *     <none>
 * Callees:
 *     _ALIGN_MEM @ 0x1C0015FFC (_ALIGN_MEM.c)
 *     BuildRepData @ 0x1C00E67F0 (BuildRepData.c)
 */

_DWORD *BuildShrinkAAInfo(__int64 a1, __int64 a2, int *a3, int *a4, int a5, int a6, int a7, int *a8, int *a9, ...)
{
  int v9; // eax
  int v10; // ecx
  int v11; // r15d
  unsigned int v12; // r8d
  unsigned int v13; // r12d
  int v14; // edx
  int v15; // r14d
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ebp
  unsigned int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // r13
  unsigned __int64 v26; // rax
  __int16 v27; // r11
  int v28; // r10d
  bool v29; // cf
  unsigned int v30; // esi
  int v31; // r10d
  _DWORD *v32; // rax
  _DWORD *v33; // rbx
  int *v34; // rdi
  __int64 v35; // rax
  int v36; // esi
  int v37; // r9d
  _DWORD *v38; // r8
  unsigned __int64 v39; // r11
  int v40; // eax
  int *v41; // rcx
  int v42; // ebp
  int v43; // eax
  _WORD *v44; // r8
  __int16 v45; // dx
  int v46; // r13d
  int v47; // edi
  int v48; // r10d
  int v49; // ecx
  unsigned int v50; // ecx
  __int64 v51; // r9
  unsigned int v52; // ecx
  __int16 v53; // r10
  int v54; // ecx
  int v55; // eax
  __int64 v56; // rcx
  __int16 v57; // r11
  __int16 v58; // cx
  int v59; // r11d
  _WORD *v60; // r8
  _WORD *v61; // r9
  int v62; // r10d
  int v63; // edx
  int v64; // eax
  int v65; // ecx
  int v67; // r10d
  __int16 v68; // ax
  unsigned __int64 v69; // rax
  __int16 v70; // r11
  __int64 v71; // rax
  __int128 v72; // xmm1
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm1
  __int128 v76; // xmm0
  __int128 v77; // xmm1
  unsigned int v78; // [rsp+20h] [rbp-98h] BYREF
  int v79; // [rsp+24h] [rbp-94h]
  int v80; // [rsp+28h] [rbp-90h]
  unsigned __int64 v81; // [rsp+30h] [rbp-88h] BYREF
  int v82; // [rsp+38h] [rbp-80h]
  int v83; // [rsp+3Ch] [rbp-7Ch]
  int v84; // [rsp+40h] [rbp-78h]
  int v85; // [rsp+44h] [rbp-74h]
  int v86; // [rsp+48h] [rbp-70h]
  __int64 v87; // [rsp+50h] [rbp-68h]
  int v88; // [rsp+58h] [rbp-60h]
  int v89; // [rsp+5Ch] [rbp-5Ch]
  int v90; // [rsp+60h] [rbp-58h]
  __int64 v91; // [rsp+68h] [rbp-50h]
  unsigned __int64 v92; // [rsp+70h] [rbp-48h]
  __int64 v93; // [rsp+78h] [rbp-40h]
  int v96; // [rsp+E8h] [rbp+30h]
  __int64 v97; // [rsp+108h] [rbp+50h] BYREF
  va_list va; // [rsp+108h] [rbp+50h]
  va_list va1; // [rsp+110h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v97 = va_arg(va1, _QWORD);
  v9 = *a3;
  v10 = *a4;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  LODWORD(v87) = v9;
  if ( v10 < v9 )
    return 0LL;
  v11 = a6;
  if ( a7 <= a6 )
    return 0LL;
  v96 = 0;
  v12 = v10 - v9;
  v13 = a7 - v11;
  v82 = v10 - v9;
  v14 = 0;
  if ( v9 >= 0 )
    v14 = v9;
  if ( v10 > a5 )
    v10 = a5;
  v15 = -1;
  v83 = v10;
  v89 = v14;
  v90 = *a8;
  v88 = -1;
  v16 = v90 - 1;
  v80 = v90 - 1;
  v17 = *a9;
  v79 = v17;
  if ( v90 - 1 >= v17 )
    return 0LL;
  if ( v12 <= v13 )
    return 0LL;
  v18 = v17 - v16;
  v19 = v17 - v16 + 1;
  if ( v18 + 1 < v18 )
    return 0LL;
  v20 = v12;
  v21 = v12 * (unsigned __int64)v19;
  v93 = v12;
  if ( v21 > 0xFFFFFFFF )
    return 0LL;
  v22 = v21 + v13 - 1;
  if ( v22 < (unsigned int)v21 )
    return 0LL;
  v23 = v22 / v13;
  v24 = v22 / v13 + 4;
  if ( v23 + 4 < v23 )
    return 0LL;
  v25 = v12;
  if ( v24 <= v12 )
    v25 = v24;
  if ( (int)ALIGN_MEM(&v81, 2048LL) < 0 )
    return 0LL;
  if ( (int)v25 + 1 < (unsigned int)v25 )
    return 0LL;
  v26 = 2LL * (unsigned int)(v25 + 1);
  if ( v26 > 0xFFFFFFFF || (int)ALIGN_MEM(&v78, (unsigned int)v26) < 0 )
    return 0LL;
  v28 = -1;
  v29 = v78 + (unsigned int)v81 < v78;
  if ( v78 + (unsigned int)v81 >= v78 )
    v28 = v78 + v81;
  v78 = v28;
  if ( v29 )
    return 0LL;
  v92 = ((unsigned __int64)v13 << 13) / v20;
  if ( (v27 & 0x4A80) != 0 )
  {
    if ( v18 + 4 < v18 )
      return 0LL;
    v69 = 2LL * (v18 + 4);
    if ( v69 > 0xFFFFFFFF || (int)ALIGN_MEM(&v81, (unsigned int)v69) < 0 )
      return 0LL;
    v30 = v81;
    if ( (v70 & 0x200) != 0 )
      v78 = 0;
  }
  else
  {
    v30 = 0;
  }
  if ( (int)ALIGN_MEM((__int64 *)va, (unsigned int)v97) >= 0
    && v30 + v31 >= v30
    && v30 + v31 + (unsigned int)v97 >= v30 + v31
    && v30 + v31 + (unsigned int)v97 + 240 >= v30 + v31 + (unsigned int)v97 )
  {
    v32 = EngAllocMem(1u, v30 + v31 + (unsigned int)v97 + 240, 0x35355448u);
    v33 = v32;
    if ( !v32 )
      return v33;
    v34 = v32 + 60;
    v35 = (unsigned int)v97;
    if ( (_DWORD)v97 )
    {
      *((_QWORD *)v33 + 4) = v34;
      v34 = (int *)((char *)v34 + v35);
    }
    if ( v30 )
    {
      v33[12] = v82;
      v33[16] = v89;
      v33[17] = v83;
      v33[18] = v90;
      v33[19] = v79;
      *((_QWORD *)v33 + 11) = v34;
      v33[13] = v13;
      *((_QWORD *)v33 + 12) = (char *)v34 + 2 * (int)(v18 + 1);
      v71 = (int)v30;
      v36 = v87;
      v34 = (int *)((char *)v34 + v71);
      if ( !(unsigned int)BuildRepData(v33 + 12, (unsigned int)v87, (unsigned int)v11) )
      {
LABEL_98:
        EngFreeMem(v33);
        return 0LL;
      }
      v72 = *((_OWORD *)v33 + 4);
      *((_OWORD *)v33 + 7) = *((_OWORD *)v33 + 3);
      v73 = *((_OWORD *)v33 + 5);
      *((_OWORD *)v33 + 8) = v72;
      v74 = *((_OWORD *)v33 + 6);
      v15 = v88;
      *((_OWORD *)v33 + 9) = v73;
      *((_OWORD *)v33 + 10) = v74;
      v75 = *((_OWORD *)v33 + 8);
      *((_OWORD *)v33 + 11) = *((_OWORD *)v33 + 7);
      v76 = *((_OWORD *)v33 + 9);
      *((_OWORD *)v33 + 12) = v75;
      v77 = *((_OWORD *)v33 + 10);
      *((_OWORD *)v33 + 13) = v76;
      *((_OWORD *)v33 + 14) = v77;
    }
    else
    {
      v36 = v87;
    }
    if ( !v78 )
    {
      v63 = v33[17] - 1;
      v15 = v33[16];
      v65 = v33[19] - 1;
      v62 = v33[18];
LABEL_70:
      *a3 = v15;
      *a4 = v63;
      *a8 = v62;
      *a9 = v65;
      *v33 = v63 - v15 + 1;
      v33[1] = v65 - v62 + 1;
      return v33;
    }
    v37 = v92;
    v38 = v34 + 512;
    *((_QWORD *)v33 + 3) = v34;
    *((_WORD *)v33 + 6) = 1;
    v39 = (unsigned __int64)v34 + 2 * v25 + 2048;
    v81 = v39;
    *((_QWORD *)v33 + 5) = v34 + 512;
    v40 = -v37;
    v41 = v34 + 256;
    v42 = ~v37;
    do
    {
      v40 += v37;
      v42 += v37 + 1;
      *v34 = v40;
      v34[256] = v42;
      ++v34;
    }
    while ( v34 < v41 );
    v43 = v82;
    v44 = (_WORD *)v38 - 1;
    v91 = 0LL;
    v45 = 0;
    v87 = 0LL;
    v46 = v82;
    v47 = v82;
    if ( v82 )
    {
      v48 = -v82;
      v88 = -v82;
      v49 = -v82;
      while ( 1 )
      {
        v50 = v13 + v49;
        LODWORD(v51) = v47;
        v47 -= v13;
        v78 = v50;
        --v46;
        if ( v47 > 0 )
        {
          LODWORD(v51) = v13;
          v53 = 0;
        }
        else
        {
          v42 = v50;
          v47 += v43;
          v52 = v48 + v50;
          v53 = 0x4000;
          v78 = v52;
          ++v11;
        }
        v54 = v80;
        v55 = v79;
        if ( v11 >= v80 - 1 && v11 <= v79 )
        {
          v56 = (__int64)(int)v51 << 13;
          v51 = (v56 + v91) / v93;
          v91 = (v56 + v91) % v93;
          v57 = v53 | 0x8000;
          if ( (int)v51 <= (int)v92 )
            v57 = v53;
          v45 = v51 + v87;
          v87 = (unsigned int)(v51 + v87);
          v53 = v57;
          if ( (v57 & 0x4000) != 0 )
          {
            v87 = ((__int64)v42 << 13) / v93;
            v91 = ((__int64)v42 << 13) % v93;
            v42 = 0;
            v53 = v57 | 0x8000;
            v45 = v87;
            if ( (int)v87 + (int)v51 <= (int)v92 )
              v53 = v57 & 0x7FFF;
          }
          v54 = v80;
          v39 = v81;
          v55 = v79;
        }
        if ( v11 >= v54 && v11 <= v55 )
          break;
        if ( v15 != -1 )
        {
          v84 = v36;
          if ( (unsigned __int64)(v44 + 1) < v39 )
            ++v44;
          *v44 = (0x2000 - v45) | 0x4000;
LABEL_77:
          v46 = 0;
          ++v96;
        }
LABEL_57:
        v49 = v78;
        ++v36;
        v43 = v82;
        v48 = v88;
        v39 = v81;
        if ( !v46 )
          goto LABEL_58;
      }
      if ( v36 < v89 || v36 >= v83 )
      {
        if ( v15 == -1 )
          goto LABEL_57;
        if ( (unsigned __int64)(v44 + 1) < v39 )
          ++v44;
        if ( (v53 & 0x4000) == 0 )
          LOWORD(v51) = 0x2000 - v45 + v51;
        *v44 = v53 | v51 | 0x4000;
        goto LABEL_77;
      }
      v58 = v53 & 0x4000;
      v59 = ((v53 & 0x4000) != 0) + v96;
      v96 = v59;
      if ( (unsigned __int64)(v44 + 1) < v81 )
        ++v44;
      *v44 = v53 | v51;
      if ( v15 != -1 )
      {
        v86 = v11;
LABEL_56:
        v84 = v36;
        goto LABEL_57;
      }
      v85 = v11;
      v15 = v36;
      v67 = v11;
      if ( v58 )
      {
        if ( v11 == v80 )
        {
          *((_WORD *)v33 + 7) = v45;
          *((_WORD *)v33 + 5) = 1;
          v96 = v59 - 1;
          --v44;
LABEL_81:
          v86 = v67;
          goto LABEL_56;
        }
        v67 = v11 - 1;
        v68 = 0x2000;
        v85 = v11 - 1;
      }
      else
      {
        v68 = v45;
      }
      *((_WORD *)v33 + 7) = v68 - v51;
      goto LABEL_81;
    }
LABEL_58:
    v60 = v44 + 1;
    if ( v15 != -1 )
    {
      v61 = (_WORD *)*((_QWORD *)v33 + 5);
      if ( v60 != v61 )
      {
        v62 = v85;
        v63 = v83 - 1;
        v64 = v90;
        if ( v84 < v83 )
          v63 = v84;
        if ( v85 < v90 )
        {
          ++*((_WORD *)v33 + 6);
          v62 = v64;
        }
        v65 = v79 - 1;
        if ( v86 < v79 )
          v65 = v86;
        if ( *((_WORD *)v33 + 5) )
        {
          if ( !*((_WORD *)v33 + 7) )
          {
            *((_WORD *)v33 + 5) = 0;
            ++v15;
          }
        }
        v33[4] = v60 - v61;
        v33[5] = v96;
        *v60 = 0;
        goto LABEL_70;
      }
    }
    goto LABEL_98;
  }
  return 0LL;
}
