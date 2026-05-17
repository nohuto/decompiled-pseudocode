/*
 * XREFs of RtlRbRemoveNode @ 0x180039FA0
 * Callers:
 *     sub_180006330 @ 0x180006330 (sub_180006330.c)
 *     sub_18002ECFC @ 0x18002ECFC (sub_18002ECFC.c)
 *     sub_180036634 @ 0x180036634 (sub_180036634.c)
 *     sub_180036F20 @ 0x180036F20 (sub_180036F20.c)
 *     sub_180039500 @ 0x180039500 (sub_180039500.c)
 *     sub_180039740 @ 0x180039740 (sub_180039740.c)
 *     sub_18004DE5C @ 0x18004DE5C (sub_18004DE5C.c)
 *     sub_18004E180 @ 0x18004E180 (sub_18004E180.c)
 *     sub_180050744 @ 0x180050744 (sub_180050744.c)
 *     sub_1800538F4 @ 0x1800538F4 (sub_1800538F4.c)
 *     sub_180068574 @ 0x180068574 (sub_180068574.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlRbRemoveNode(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // rbp
  char v7; // r11
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rax
  BOOL v12; // esi
  __int64 v13; // r8
  char v14; // r8
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r10
  unsigned __int64 v23; // rax
  char v24; // r11
  unsigned __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned __int64 v27; // rax
  char v28; // r8
  unsigned __int64 v29; // r8
  char v30; // cl
  unsigned __int64 v31; // r9
  char v32; // cl
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  char v37; // r9
  unsigned __int64 v38; // r11
  __int64 v39; // rax
  unsigned __int64 *v40; // r11
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rcx
  unsigned __int64 v43; // rax
  char v44; // cl
  unsigned __int64 v45; // r15
  __int64 v46; // r11
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  _QWORD *v49; // r8
  __int64 v50; // r8
  char v51; // cl
  __int64 v52; // rax
  char v53; // al
  char v54; // cl
  unsigned __int64 v55; // rcx
  char v56; // cl
  unsigned __int64 v57; // r8
  _QWORD *v58; // r10
  unsigned __int64 v59; // r14
  unsigned __int64 v60; // rax
  int v61; // r8d
  __int64 v62; // rax
  unsigned __int64 v63; // r9
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // r9
  unsigned __int64 *v67; // rsi
  unsigned __int64 v68; // r9
  _BOOL8 v69; // rcx
  unsigned __int64 v70; // rax
  int v71; // r8d
  _BOOL8 v72; // r10
  __int64 *v73; // r12
  __int64 v74; // rax
  __int64 v75; // rax
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rcx
  unsigned __int64 *v79; // r14
  unsigned __int64 v80; // r10
  unsigned __int64 v81; // rax
  bool v82; // zf
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // r9
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  unsigned __int64 v89; // rax
  unsigned __int64 v90; // r13
  unsigned __int64 v91; // rcx
  int v92; // r14d
  unsigned __int64 v93; // r10
  __int64 v94; // rax
  unsigned __int64 v95; // rax
  unsigned __int64 *v96; // r10
  unsigned __int64 v97; // r9
  unsigned __int64 v98; // rax
  unsigned __int64 v99; // rcx
  __int64 v100; // r15
  unsigned __int64 v101; // rax
  unsigned __int64 v102; // rcx
  __int64 v103; // r15
  unsigned __int64 v104; // rax
  unsigned __int64 v105; // rcx
  __int64 v106; // rax
  unsigned __int64 v107; // rax
  __int64 v108; // r12
  unsigned __int64 v109; // rax
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // rcx
  bool v112; // zf

  v3 = *(_QWORD *)a2;
  if ( (a1[1] & 1) != 0 && v3 )
    v3 ^= a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( (a1[1] & 1) != 0 && v4 )
    v4 ^= a2;
  v5 = v4;
  if ( v3 )
    v5 = v3;
  v6 = 0LL;
  v7 = a1[1] & 1;
  v8 = 0LL;
  if ( v3 )
    v8 = v4;
  if ( v8 )
  {
    v20 = *(_QWORD *)v4;
    v10 = v4;
    v9 = v4;
    v12 = 1;
    if ( *(_QWORD *)v4 )
    {
      v12 = 0;
      do
      {
        v9 = v10;
        if ( v7 && v20 )
          v10 ^= v20;
        else
          v10 = v20;
        v20 = *(_QWORD *)v10;
      }
      while ( *(_QWORD *)v10 );
    }
    if ( v7 && v3 )
      v21 = v3 ^ v10;
    else
      v21 = v3;
    *(_QWORD *)v10 = v21;
    v22 = *(_QWORD *)(v3 + 16);
    v23 = v22 & 0xFFFFFFFFFFFFFFFCuLL;
    v24 = a1[1] & 1;
    if ( v24 && v23 )
      v23 ^= v3;
    if ( v23 != a2 )
      goto LABEL_200;
    v25 = v10;
    if ( v24 )
      v25 = v3 ^ v10;
    *(_QWORD *)(v3 + 16) = v25 | v22 & 3;
    v26 = *(_QWORD *)(v4 + 16);
    v27 = v26 & 0xFFFFFFFFFFFFFFFCuLL;
    v28 = a1[1] & 1;
    if ( v28 && v27 )
      v27 ^= v4;
    if ( v27 != a2 )
      goto LABEL_200;
    if ( v28 )
      v29 = v4 ^ v10;
    else
      v29 = v10;
    *(_QWORD *)(v4 + 16) = v29 | v26 & 3;
    v5 = *(_QWORD *)(v10 + 8);
    v30 = a1[1] & 1;
    if ( v30 && v5 )
      v5 ^= v10;
    v13 = *(_QWORD *)(v10 + 16);
    if ( v30 )
      v4 ^= v10;
    *(_QWORD *)(v10 + 8) = v4;
    v31 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
    v32 = a1[1] & 1;
    if ( v32 && v31 )
      v33 = v10 ^ v31;
    else
      v33 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v33 == v9 )
      goto LABEL_48;
    if ( v32 )
    {
      if ( !v31 )
        goto LABEL_218;
      v31 ^= v10;
    }
    if ( v31 )
      goto LABEL_200;
LABEL_218:
    if ( v10 != v9 )
      goto LABEL_200;
LABEL_48:
    v34 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v32 )
    {
      if ( v34 )
        v34 ^= a2;
      if ( v34 )
        v34 ^= v10;
    }
    v35 = v34 | v13 & 3;
    *(_QWORD *)(v10 + 16) = v35;
    *(_BYTE *)(v10 + 16) = v35 ^ (*(_BYTE *)(a2 + 16) ^ v35) & 1;
    v36 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v36 )
    {
      v37 = a1[1] & 1;
      if ( v37 )
        v36 ^= a2;
      v38 = *(_QWORD *)(v36 + 8);
      if ( v37 && v38 )
        v38 ^= v36;
      v39 = 0LL;
      if ( v38 == a2 )
        v39 = 8LL;
      v40 = (unsigned __int64 *)(v39 + v36);
      v41 = *(_QWORD *)(v39 + v36);
      if ( v37 && v41 )
        v41 ^= v36;
      if ( v41 != a2 )
        goto LABEL_200;
      v42 = v10 ^ v36;
      v43 = v10;
      if ( v37 )
        v43 = v42;
      *v40 = v43;
    }
    else
    {
      v84 = a1[1];
      v85 = *a1;
      if ( (v84 & 1) != 0 )
      {
        if ( v85 )
          v85 ^= (unsigned __int64)a1;
        else
          v85 = 0LL;
      }
      if ( v85 != a2 )
        goto LABEL_200;
      v86 = v10;
      if ( (v84 & 1) != 0 )
        v86 = (unsigned __int64)a1 ^ v10;
      *a1 = v86;
    }
    goto LABEL_14;
  }
  v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v7 && v9 )
    v9 ^= a2;
  v10 = a2;
  if ( !v9 )
  {
    if ( v5 )
      *(_QWORD *)(v5 + 16) = 0LL;
    v16 = a1[1];
    v55 = *a1;
    if ( (v16 & 1) != 0 )
    {
      if ( v55 )
        v55 ^= (unsigned __int64)a1;
      else
        v55 = 0LL;
    }
    if ( v55 != a2 )
      goto LABEL_200;
    if ( (v16 & 1) != 0 )
    {
      v111 = 0LL;
      LOBYTE(v16) = v5 ^ (unsigned __int8)a1;
      if ( v5 )
        v111 = v5 ^ (unsigned __int64)a1;
      a1[1] = v111;
      v56 = v111 | 1;
      *((_BYTE *)a1 + 8) = v56;
    }
    else
    {
      a1[1] = v5;
      v56 = v5;
    }
    if ( (v56 & 1) != 0 )
    {
      v16 = v5 ^ (unsigned __int64)a1;
      v112 = v5 == 0;
      goto LABEL_329;
    }
    v6 = v5;
LABEL_85:
    *a1 = v6;
    return v16;
  }
  v11 = *(_QWORD *)(v9 + 8);
  if ( v7 && v11 )
    v11 ^= v9;
  if ( v11 == a2 )
  {
    v12 = 1;
  }
  else
  {
    v17 = *(_QWORD *)v9;
    if ( v7 && v17 )
      v17 ^= v9;
    if ( v17 != a2 )
      goto LABEL_200;
    v18 = a1[1];
    v12 = 0;
    if ( (v18 & 1) != 0 )
    {
      if ( v18 == 1 )
        v19 = 0LL;
      else
        v19 = v18 ^ ((unsigned __int64)a1 | 1);
    }
    else
    {
      v19 = a1[1];
    }
    if ( v19 == a2 )
    {
      if ( v5 )
      {
        if ( (v18 & 1) != 0 )
        {
          a1[1] = (unsigned __int64)a1 ^ v5;
          *((_BYTE *)a1 + 8) = (unsigned __int8)a1 ^ v5 | 1;
        }
        else
        {
          a1[1] = v5;
        }
      }
      else if ( (v18 & 1) != 0 )
      {
        a1[1] = (unsigned __int64)a1 ^ v9;
        *((_BYTE *)a1 + 8) = (unsigned __int8)a1 ^ v9 | 1;
      }
      else
      {
        a1[1] = v9;
      }
    }
  }
  LOBYTE(v13) = *(_BYTE *)(a2 + 16);
LABEL_14:
  v14 = v13 & 1;
  if ( (a1[1] & 1) != 0 && v5 )
    v15 = v5 ^ v9;
  else
    v15 = v5;
  LOBYTE(v16) = v12;
  *(_QWORD *)(v9 + 8LL * v12) = v15;
  if ( !v5 )
  {
    if ( v14 )
      return v16;
    v44 = *((_BYTE *)a1 + 8);
    while ( 1 )
    {
      v45 = v9;
      v46 = !v12;
      v47 = *(_QWORD *)(v9 + 8 * v46);
      if ( (v44 & 1) != 0 && v47 )
        v48 = v9 ^ v47;
      else
        v48 = *(_QWORD *)(v9 + 8 * v46);
      v49 = (_QWORD *)(v48 + 16);
      if ( (*(_BYTE *)(v48 + 16) & 1) == 0 )
        goto LABEL_64;
      v90 = *a1;
      if ( (a1[1] & 1) != 0 )
      {
        if ( v90 )
          v90 ^= (unsigned __int64)a1;
        else
          v90 = 0LL;
      }
      v91 = *v49 & 0xFFFFFFFFFFFFFFFCuLL;
      v92 = a1[1] & 1;
      if ( (a1[1] & 1) != 0 && v91 )
        v91 ^= v48;
      if ( v91 != v9 )
        goto LABEL_200;
      if ( (a1[1] & 1) != 0 && v47 )
        v47 ^= v9;
      if ( v47 != v48 )
        goto LABEL_200;
      v93 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (a1[1] & 1) != 0 )
      {
        if ( !v93 )
        {
LABEL_198:
          if ( v90 != v9 )
            goto LABEL_200;
          v90 = v48;
          goto LABEL_164;
        }
        v93 ^= v9;
      }
      if ( !v93 )
        goto LABEL_198;
      v94 = *(_QWORD *)(v93 + 8);
      if ( (a1[1] & 1) != 0 && v94 )
        v94 ^= v93;
      if ( v94 == v9 )
      {
        v95 = v48;
        if ( (a1[1] & 1) != 0 )
          v95 = v48 ^ v93;
        *(_QWORD *)(v93 + 8) = v95;
      }
      else
      {
        v106 = *(_QWORD *)v93;
        if ( (a1[1] & 1) != 0 && v106 )
          v106 ^= v93;
        if ( v106 != v9 )
          goto LABEL_200;
        v107 = v48;
        if ( (a1[1] & 1) != 0 )
          v107 = v48 ^ v93;
        *(_QWORD *)v93 = v107;
      }
LABEL_164:
      if ( v92 && v93 )
        v93 ^= v48;
      *v49 &= 3uLL;
      *v49 |= v93;
      v96 = (unsigned __int64 *)(v48 + 8LL * v12);
      v97 = *v96;
      if ( !v92 )
        goto LABEL_166;
      if ( v97 )
      {
        v97 ^= v48;
LABEL_166:
        if ( v97 )
        {
          v108 = *(_QWORD *)(v97 + 16);
          v109 = v108 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v92 && v109 )
            v109 ^= v97;
          if ( v109 != v48 )
            goto LABEL_200;
          v110 = v9;
          if ( v92 )
            v110 = v9 ^ v97;
          *(_QWORD *)(v97 + 16) = v110 | v108 & 3;
        }
      }
      if ( v92 && v97 )
        v97 ^= v9;
      *(_QWORD *)(v9 + 8 * v46) = v97;
      v98 = v9;
      if ( v92 )
      {
        v98 = v48 ^ v9;
        v48 ^= v9;
      }
      *v96 = v98;
      *(_QWORD *)(v9 + 16) &= 3uLL;
      *(_QWORD *)(v9 + 16) |= v48;
      if ( (a1[1] & 1) != 0 )
      {
        v99 = 0LL;
        if ( v90 )
          v99 = v90 ^ (unsigned __int64)a1;
      }
      else
      {
        v99 = v90;
      }
      *a1 = v99;
      *(_BYTE *)v49 &= ~1u;
      *(_BYTE *)(v9 + 16) |= 1u;
      v44 = *((_BYTE *)a1 + 8);
      v48 = *(_QWORD *)(v9 + 8 * v46);
      if ( (v44 & 1) != 0 && v48 )
        v48 ^= v9;
LABEL_64:
      v50 = *(_QWORD *)v48;
      v51 = v44 & 1;
      if ( *(_QWORD *)v48 )
      {
        if ( v51 )
          v50 ^= v48;
        if ( (*(_BYTE *)(v50 + 16) & 1) != 0 )
          goto LABEL_89;
      }
      v52 = *(_QWORD *)(v48 + 8);
      if ( v52 )
      {
        if ( v51 )
          v52 ^= v48;
        if ( (*(_BYTE *)(v52 + 16) & 1) != 0 )
        {
LABEL_89:
          v57 = *(_QWORD *)(v48 + 8 * v46);
          if ( v51 )
          {
            if ( v57 )
            {
              v57 ^= v48;
              goto LABEL_90;
            }
          }
          else
          {
LABEL_90:
            if ( v57 && (*(_BYTE *)(v57 + 16) & 1) != 0 )
              goto LABEL_92;
          }
          v68 = *(_QWORD *)(v48 + 8LL * v12);
          if ( v51 && v68 )
            v68 ^= v48;
          *(_BYTE *)(v68 + 16) &= ~1u;
          v69 = !v12;
          v70 = *(_QWORD *)(v68 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          v71 = a1[1] & 1;
          if ( (a1[1] & 1) != 0 && v70 )
            v70 ^= v68;
          if ( v70 != v48 )
            goto LABEL_200;
          v72 = v69;
          v73 = (__int64 *)(v48 + 8LL * v12);
          v74 = *v73;
          if ( (a1[1] & 1) != 0 && v74 )
            v74 ^= v48;
          if ( v74 != v68 )
            goto LABEL_200;
          v75 = *(_QWORD *)(v9 + 8 * v69);
          if ( (a1[1] & 1) != 0 && v75 )
            v75 ^= v9;
          if ( v75 != v48 )
            goto LABEL_200;
          v76 = *(_QWORD *)(v48 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (a1[1] & 1) != 0 && v76 )
            v76 ^= v48;
          if ( v76 != v9 )
            goto LABEL_200;
          v77 = v68;
          v78 = v9 ^ v68;
          if ( (a1[1] & 1) != 0 )
            v77 = v9 ^ v68;
          *(_QWORD *)(v9 + 8 * v72) = v77;
          if ( !v71 || !v9 )
            v78 = v9;
          *(_QWORD *)(v68 + 16) &= 3uLL;
          v79 = (unsigned __int64 *)(v68 + 8 * v72);
          *(_QWORD *)(v68 + 16) |= v78;
          v80 = *v79;
          if ( !v71 )
          {
LABEL_130:
            if ( !v80 )
              goto LABEL_131;
            v103 = *(_QWORD *)(v80 + 16);
            v104 = v103 & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v71 && v104 )
              v104 ^= v80;
            if ( v104 == v68 )
            {
              v105 = v48;
              if ( v71 )
                v105 = v48 ^ v80;
              *(_QWORD *)(v80 + 16) = v105 | v103 & 3;
              goto LABEL_131;
            }
            goto LABEL_200;
          }
          if ( v80 )
          {
            v80 ^= v68;
            goto LABEL_130;
          }
LABEL_131:
          if ( v71 && v80 )
            v80 ^= v48;
          *v73 = v80;
          v81 = v48;
          v82 = v71 == 0;
          v57 = v48;
          if ( !v82 )
            v81 = v48 ^ v68;
          *v79 = v81;
          v83 = v68;
          if ( !v82 )
            v83 = v48 ^ v68;
          *(_QWORD *)(v48 + 16) &= 3uLL;
          *(_QWORD *)(v48 + 16) |= v83;
          v48 = v68;
LABEL_92:
          v58 = (_QWORD *)(v9 + 16);
          *(_BYTE *)(v48 + 16) ^= (*(_BYTE *)(v9 + 16) ^ *(_BYTE *)(v48 + 16)) & 1;
          *(_BYTE *)(v9 + 16) &= ~1u;
          *(_BYTE *)(v57 + 16) &= ~1u;
          v59 = *a1;
          if ( (a1[1] & 1) != 0 )
          {
            if ( v59 )
              v59 ^= (unsigned __int64)a1;
            else
              v59 = 0LL;
          }
          v60 = *(_QWORD *)(v48 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          v61 = a1[1] & 1;
          if ( (a1[1] & 1) != 0 && v60 )
            v60 ^= v48;
          if ( v60 != v9 )
            goto LABEL_200;
          v62 = *(_QWORD *)(v9 + 8 * v46);
          if ( (a1[1] & 1) != 0 && v62 )
            v62 ^= v9;
          if ( v62 != v48 )
LABEL_200:
            __fastfail(0x1Du);
          v63 = *v58 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( (a1[1] & 1) != 0 )
          {
            if ( v63 )
            {
              v63 ^= v9;
              goto LABEL_98;
            }
          }
          else
          {
LABEL_98:
            if ( v63 )
            {
              v64 = *(_QWORD *)(v63 + 8);
              if ( (a1[1] & 1) != 0 && v64 )
                v64 ^= v63;
              if ( v64 == v9 )
              {
                v65 = v48;
                if ( (a1[1] & 1) != 0 )
                  v65 = v48 ^ v63;
                *(_QWORD *)(v63 + 8) = v65;
              }
              else
              {
                v88 = *(_QWORD *)v63;
                if ( (a1[1] & 1) != 0 && v88 )
                  v88 ^= v63;
                if ( v88 != v9 )
                  goto LABEL_200;
                v89 = v48;
                if ( (a1[1] & 1) != 0 )
                  v89 = v48 ^ v63;
                *(_QWORD *)v63 = v89;
              }
LABEL_104:
              if ( v61 && v63 )
                v63 ^= v48;
              *(_QWORD *)(v48 + 16) &= 3uLL;
              *(_QWORD *)(v48 + 16) |= v63;
              v66 = *(_QWORD *)(v48 + 8LL * v12);
              v67 = (unsigned __int64 *)(v48 + 8LL * v12);
              if ( v61 )
              {
                if ( v66 )
                {
                  v66 ^= v48;
                  goto LABEL_106;
                }
              }
              else
              {
LABEL_106:
                if ( v66 )
                {
                  v100 = *(_QWORD *)(v66 + 16);
                  v101 = v100 & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( v61 && v101 )
                    v101 ^= v66;
                  if ( v101 != v48 )
                    goto LABEL_200;
                  v102 = v9;
                  if ( v61 )
                    v102 = v9 ^ v66;
                  *(_QWORD *)(v66 + 16) = v102 | v100 & 3;
                }
              }
              if ( v61 && v66 )
                v66 ^= v9;
              *(_QWORD *)(v9 + 8 * v46) = v66;
              v16 = v48 ^ v9;
              if ( v61 )
              {
                v9 ^= v48;
                v48 = v16;
              }
              *v67 = v9;
              *v58 &= 3uLL;
              *v58 |= v48;
              if ( (a1[1] & 1) == 0 )
              {
                *a1 = v59;
                return v16;
              }
              v16 = v59 ^ (unsigned __int64)a1;
              v112 = v59 == 0;
LABEL_329:
              if ( !v112 )
                v6 = v16;
              goto LABEL_85;
            }
          }
          if ( v59 != v9 )
            goto LABEL_200;
          v59 = v48;
          goto LABEL_104;
        }
      }
      v53 = *(_BYTE *)(v9 + 16);
      if ( (v53 & 1) != 0 )
      {
        LOBYTE(v16) = v53 & 0xFE;
        *(_BYTE *)(v9 + 16) = v16;
        *(_BYTE *)(v48 + 16) |= 1u;
        return v16;
      }
      *(_BYTE *)(v48 + 16) |= 1u;
      v44 = *((_BYTE *)a1 + 8);
      v16 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (v44 & 1) != 0 && v16 )
        v9 ^= v16;
      else
        v9 = *(_QWORD *)(v9 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !v9 )
        return v16;
      v87 = *(_QWORD *)(v9 + 8);
      if ( (v44 & 1) != 0 && v87 )
        v87 ^= v9;
      v12 = v87 == v45;
    }
  }
  v16 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  v54 = a1[1] & 1;
  if ( v54 && v16 )
    v16 ^= v5;
  if ( v16 != v10 )
    goto LABEL_200;
  if ( v54 && v9 )
    v9 ^= v5;
  *(_QWORD *)(v5 + 16) = v9;
  return v16;
}
