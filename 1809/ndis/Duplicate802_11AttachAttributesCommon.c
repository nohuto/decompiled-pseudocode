/*
 * XREFs of Duplicate802_11AttachAttributesCommon @ 0x1C00829C0
 * Callers:
 *     Duplicate802_11AttachAttributes @ 0x1C008299C (Duplicate802_11AttachAttributes.c)
 * Callees:
 *     NdisAllocateMemoryWithTag @ 0x1C0024A30 (NdisAllocateMemoryWithTag.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

__int64 __fastcall Duplicate802_11AttachAttributesCommon(
        unsigned __int16 a1,
        __int128 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        size_t a6,
        int a7,
        size_t a8,
        _QWORD *a9)
{
  unsigned int v10; // r12d
  __int64 v11; // r13
  char v12; // al
  unsigned int v13; // r11d
  __int64 v14; // rax
  UINT v15; // ebx
  int v16; // edx
  unsigned __int64 v17; // rcx
  unsigned int v18; // r10d
  unsigned int v19; // edi
  __int64 v20; // rsi
  UINT v21; // r9d
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned int v24; // r10d
  __int64 v25; // rax
  unsigned int v26; // r8d
  unsigned __int64 v27; // rax
  int v28; // r15d
  unsigned int v29; // ecx
  int v30; // eax
  __int64 v31; // rax
  unsigned int v32; // r8d
  unsigned __int64 v33; // rax
  int v34; // r15d
  unsigned int v35; // ecx
  int v36; // eax
  __int64 v37; // rax
  unsigned int v38; // r8d
  unsigned __int64 v39; // rax
  int v40; // r15d
  unsigned int v41; // ecx
  int v42; // eax
  __int64 v43; // rax
  unsigned int v44; // r8d
  unsigned __int64 v45; // rax
  int v46; // r15d
  unsigned int v47; // ecx
  int v48; // eax
  unsigned int v49; // r8d
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  int v52; // r15d
  unsigned int v53; // ecx
  int v54; // eax
  unsigned int v55; // ecx
  int v56; // eax
  UINT v57; // r8d
  int v58; // eax
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // rax
  __int64 v62; // rcx
  int v63; // eax
  unsigned __int64 v64; // rcx
  unsigned int v65; // eax
  int v66; // r15d
  UINT v67; // ecx
  int v68; // eax
  UINT v69; // r9d
  __int64 v70; // rax
  unsigned int v71; // r15d
  unsigned __int64 v72; // rcx
  bool v73; // cc
  int v74; // eax
  unsigned int v75; // eax
  __int64 v76; // rax
  unsigned int v77; // r8d
  unsigned __int64 v78; // rax
  int v79; // ecx
  unsigned int v80; // ecx
  int v81; // eax
  __int64 v82; // rax
  unsigned int v83; // r8d
  unsigned __int64 v84; // rax
  int v85; // ecx
  unsigned int v86; // ecx
  int v87; // eax
  unsigned int v88; // ecx
  int v89; // eax
  UINT v90; // r10d
  int v91; // eax
  __int64 v92; // r8
  int v93; // eax
  __int64 v94; // rax
  unsigned int v95; // r11d
  unsigned __int64 v96; // rcx
  int v97; // eax
  unsigned int v98; // eax
  __int64 v99; // rax
  unsigned int v100; // r9d
  __int64 v101; // rcx
  int v102; // eax
  unsigned __int64 v103; // rcx
  unsigned int v104; // ecx
  int v105; // eax
  unsigned int v106; // eax
  _DWORD *v107; // r15
  __int128 v108; // xmm0
  char *v109; // rcx
  unsigned int v110; // r12d
  _QWORD *v111; // r14
  char *v112; // rax
  char *v113; // rax
  char *v114; // rax
  unsigned int v115; // ecx
  __int64 v116; // rbx
  char *v117; // rax
  unsigned int v118; // ecx
  __int64 v119; // rbx
  char *v120; // rax
  unsigned int v121; // ecx
  __int64 v122; // rbx
  unsigned int v123; // ecx
  __int64 v124; // rbx
  __int64 v125; // rdx
  char v126; // al
  size_t v127; // rsi
  _BYTE *v128; // r14
  _BYTE *v129; // rbx
  __int64 v130; // r15
  _QWORD *v131; // rsi
  unsigned int v132; // ecx
  char *v133; // rax
  __int64 v134; // rbx
  char *v135; // rax
  unsigned int v136; // ecx
  __int64 v137; // rbx
  char *v138; // rax
  unsigned int v139; // ecx
  __int64 v140; // rbx
  __int64 v141; // rdx
  _QWORD *v142; // rsi
  unsigned int v143; // ecx
  char *v144; // rax
  __int64 v145; // rbx
  char *v146; // rax
  unsigned int v147; // ecx
  PVOID VirtualAddress; // [rsp+20h] [rbp-58h] BYREF
  size_t v150; // [rsp+28h] [rbp-50h]
  size_t v151; // [rsp+30h] [rbp-48h]
  size_t v152; // [rsp+38h] [rbp-40h]
  size_t v153; // [rsp+40h] [rbp-38h]
  int v154; // [rsp+48h] [rbp-30h]
  NDIS_STATUS v155; // [rsp+4Ch] [rbp-2Ch]
  __int64 v156; // [rsp+50h] [rbp-28h]
  __int64 v157; // [rsp+58h] [rbp-20h]
  __int64 v158; // [rsp+60h] [rbp-18h]
  _DWORD *v159; // [rsp+68h] [rbp-10h]
  unsigned int Size; // [rsp+C8h] [rbp+50h]
  unsigned int v162; // [rsp+D0h] [rbp+58h]
  unsigned int v163; // [rsp+D8h] [rbp+60h]
  int v164; // [rsp+E0h] [rbp+68h]
  unsigned int v165; // [rsp+E8h] [rbp+70h]
  int v166; // [rsp+F0h] [rbp+78h]
  unsigned int v167; // [rsp+F8h] [rbp+80h]

  Size = 0;
  v10 = 0;
  v165 = 0;
  v11 = 0LL;
  v167 = 0;
  v150 = 0LL;
  v151 = 0LL;
  v164 = 0;
  v152 = 0LL;
  v153 = 0LL;
  v162 = 0;
  v166 = 0;
  v154 = 0;
  v156 = 0LL;
  v158 = 0LL;
  v157 = 0LL;
  VirtualAddress = 0LL;
  if ( !a2 || !a9 || *(_BYTE *)a2 != 0xA1 )
    return (unsigned int)-1073741811;
  *a9 = 0LL;
  v12 = *((_BYTE *)a2 + 1);
  if ( v12 == 1 )
  {
    if ( *((_WORD *)a2 + 1) < 0x28u )
      return (unsigned int)-1073741811;
    v13 = 1;
  }
  else if ( v12 == 2 )
  {
    if ( *((_WORD *)a2 + 1) < 0x38u )
      return (unsigned int)-1073741811;
    v13 = 2;
  }
  else
  {
    if ( v12 != 3 || *((_WORD *)a2 + 1) < 0x40u )
      return (unsigned int)-1073741811;
    v13 = 3;
  }
  v14 = *((unsigned int *)a2 + 5);
  v15 = 64;
  v163 = v13;
  v16 = -1;
  if ( (_DWORD)v14 && *((_QWORD *)a2 + 3) )
  {
    v17 = 1092 * v14;
    v18 = -1;
    if ( (unsigned __int64)(1092 * v14) <= 0xFFFFFFFF )
      v18 = 1092 * v14;
    Size = v18;
    v19 = v17 > 0xFFFFFFFF ? 0xC0010015 : 0;
    if ( v17 > 0xFFFFFFFF )
      return v19;
    v15 = -1;
    if ( v18 + 64 >= 0x40 )
      v15 = v18 + 64;
    v19 = v18 >= 0xFFFFFFC0 ? 0xC0010015 : 0;
    if ( v18 + 64 < 0x40 )
      return v19;
  }
  v20 = *((_QWORD *)a2 + 4);
  v21 = v15;
  if ( v20 )
  {
    v22 = *(unsigned int *)(v20 + 48);
    v10 = 160;
    if ( (_DWORD)v22 )
    {
      if ( *(_QWORD *)(v20 + 56) )
      {
        v23 = 3 * v22;
        v24 = -1;
        if ( (unsigned __int64)(3 * v22) <= 0xFFFFFFFF )
          v24 = 3 * v22;
        v165 = v24;
        v19 = v23 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v23 > 0xFFFFFFFF )
          return v19;
        v10 = -1;
        if ( v24 + 160 >= 0xA0 )
          v10 = v24 + 160;
        v19 = v24 >= 0xFFFFFF60 ? 0xC0010015 : 0;
        if ( v24 + 160 < 0xA0 )
          return v19;
      }
    }
    v25 = *(unsigned int *)(v20 + 64);
    v26 = v10;
    if ( (_DWORD)v25 )
    {
      if ( *(_QWORD *)(v20 + 72) )
      {
        v27 = 8 * v25;
        v28 = -1;
        if ( v27 <= 0xFFFFFFFF )
          v28 = v27;
        v167 = v28;
        v19 = v27 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v27 > 0xFFFFFFFF )
          return v19;
        v29 = v28 + v10;
        v30 = -1;
        if ( v28 + v10 >= v10 )
          v30 = v28 + v10;
        v10 = v30;
        v19 = v29 < v26 ? 0xC0010015 : 0;
        if ( v29 < v26 )
          return v19;
      }
    }
    v31 = *(unsigned int *)(v20 + 80);
    v32 = v10;
    if ( (_DWORD)v31 )
    {
      if ( *(_QWORD *)(v20 + 88) )
      {
        v33 = 8 * v31;
        v34 = -1;
        if ( v33 <= 0xFFFFFFFF )
          v34 = v33;
        LODWORD(v150) = v34;
        v19 = v33 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v33 > 0xFFFFFFFF )
          return v19;
        v35 = v34 + v10;
        v36 = -1;
        if ( v34 + v10 >= v10 )
          v36 = v34 + v10;
        v10 = v36;
        v19 = v35 < v32 ? 0xC0010015 : 0;
        if ( v35 < v32 )
          return v19;
      }
    }
    v37 = *(unsigned int *)(v20 + 96);
    v38 = v10;
    if ( (_DWORD)v37 )
    {
      if ( *(_QWORD *)(v20 + 104) )
      {
        v39 = 8 * v37;
        v40 = -1;
        if ( v39 <= 0xFFFFFFFF )
          v40 = v39;
        HIDWORD(v150) = v40;
        v19 = v39 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v39 > 0xFFFFFFFF )
          return v19;
        v41 = v40 + v10;
        v42 = -1;
        if ( v40 + v10 >= v10 )
          v42 = v40 + v10;
        v10 = v42;
        v19 = v41 < v38 ? 0xC0010015 : 0;
        if ( v41 < v38 )
          return v19;
      }
    }
    v43 = *(unsigned int *)(v20 + 112);
    v44 = v10;
    if ( (_DWORD)v43 )
    {
      if ( *(_QWORD *)(v20 + 120) )
      {
        v45 = 8 * v43;
        v46 = -1;
        if ( v45 <= 0xFFFFFFFF )
          v46 = v45;
        LODWORD(v151) = v46;
        v19 = v45 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v45 > 0xFFFFFFFF )
          return v19;
        v47 = v46 + v10;
        v48 = -1;
        if ( v46 + v10 >= v10 )
          v48 = v46 + v10;
        v10 = v48;
        v19 = v47 < v44 ? 0xC0010015 : 0;
        if ( v47 < v44 )
          return v19;
      }
    }
    v49 = v10;
    if ( v13 >= 3 )
    {
      v50 = *(unsigned int *)(v20 + 140);
      if ( (_DWORD)v50 )
      {
        if ( *(_QWORD *)(v20 + 144) && *(_BYTE *)(v20 + 1) >= 3u )
        {
          v51 = 8 * v50;
          v52 = -1;
          if ( v51 <= 0xFFFFFFFF )
            v52 = v51;
          HIDWORD(v151) = v52;
          v19 = v51 > 0xFFFFFFFF ? 0xC0010015 : 0;
          if ( v51 > 0xFFFFFFFF )
            return v19;
          v53 = v52 + v10;
          v54 = -1;
          if ( v52 + v10 >= v10 )
            v54 = v52 + v10;
          v10 = v54;
          v19 = v53 < v49 ? 0xC0010015 : 0;
          if ( v53 < v49 )
            return v19;
        }
      }
    }
    v55 = v10 + v15;
    v56 = -1;
    if ( v10 + v15 >= v15 )
      v56 = v10 + v15;
    v15 = v56;
    v19 = v55 < v21 ? 0xC0010015 : 0;
    if ( v55 < v21 )
      return v19;
  }
  v57 = v15;
  if ( v13 >= 2 )
  {
    v58 = *((_DWORD *)a2 + 1);
    v59 = *((_QWORD *)a2 + 5);
    v11 = *((_QWORD *)a2 + 6);
    v156 = v59;
    v158 = v11;
    v60 = v58 & 0x28;
    if ( v60 && !v11 || v11 && !v60 )
      return (unsigned int)-1073741811;
    if ( v59 )
    {
      v61 = *(unsigned int *)(v59 + 4);
      if ( (_DWORD)v61 )
      {
        v62 = 3 * v61;
        v63 = -1;
        v64 = 8 * v62;
        if ( v64 <= 0xFFFFFFFF )
          v63 = v64;
        v19 = v64 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v64 > 0xFFFFFFFF )
          return v19;
      }
      else
      {
        v63 = 16;
      }
      v65 = v63 + 8;
      v66 = -1;
      if ( v65 >= 8 )
        v66 = v65;
      v19 = v65 < 8 ? 0xC0010015 : 0;
      v162 = v66;
      if ( v65 < 8 )
        return v19;
      v67 = v66 + v15;
      v68 = -1;
      if ( v66 + v15 >= v15 )
        v68 = v66 + v15;
      v15 = v68;
      v19 = v67 < v57 ? 0xC0010015 : 0;
      if ( v67 < v57 )
        return v19;
    }
  }
  v69 = v15;
  if ( v11 )
  {
    v70 = *(unsigned int *)(v11 + 32);
    v71 = 80;
    v164 = 80;
    if ( (_DWORD)v70 )
    {
      if ( *(_QWORD *)(v11 + 40) )
      {
        v72 = 3 * v70;
        v73 = (unsigned __int64)(3 * v70) <= 0xFFFFFFFF;
        v74 = -1;
        if ( v73 )
          v74 = v72;
        LODWORD(v152) = v74;
        v19 = v72 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v72 > 0xFFFFFFFF )
          return v19;
        v75 = v74 + 80;
        v71 = -1;
        if ( v75 >= 0x50 )
          v71 = v75;
        v19 = v75 < 0x50 ? 0xC0010015 : 0;
        v164 = v71;
        if ( v75 < 0x50 )
          return v19;
      }
    }
    v76 = *(unsigned int *)(v11 + 48);
    v77 = v71;
    if ( (_DWORD)v76 )
    {
      if ( *(_QWORD *)(v11 + 56) )
      {
        v78 = 8 * v76;
        v79 = -1;
        if ( v78 <= 0xFFFFFFFF )
          v79 = v78;
        HIDWORD(v152) = v79;
        v19 = v78 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v78 > 0xFFFFFFFF )
          return v19;
        v80 = v71 + v79;
        v81 = -1;
        if ( v80 >= v71 )
          v81 = v80;
        v71 = v81;
        v164 = v81;
        v19 = v80 < v77 ? 0xC0010015 : 0;
        if ( v80 < v77 )
          return v19;
      }
    }
    v82 = *(unsigned int *)(v11 + 64);
    v83 = v71;
    if ( (_DWORD)v82 )
    {
      if ( *(_QWORD *)(v11 + 72) )
      {
        v84 = 8 * v82;
        v85 = -1;
        if ( v84 <= 0xFFFFFFFF )
          v85 = v84;
        LODWORD(v153) = v85;
        v19 = v84 > 0xFFFFFFFF ? 0xC0010015 : 0;
        if ( v84 > 0xFFFFFFFF )
          return v19;
        v86 = v71 + v85;
        v87 = -1;
        if ( v86 >= v71 )
          v87 = v86;
        v71 = v87;
        v164 = v87;
        v19 = v86 < v83 ? 0xC0010015 : 0;
        if ( v86 < v83 )
          return v19;
      }
    }
    v88 = v71 + v15;
    v89 = -1;
    if ( v71 + v15 >= v15 )
      v89 = v71 + v15;
    v15 = v89;
    v19 = v88 < v69 ? 0xC0010015 : 0;
    if ( v88 < v69 )
      return v19;
  }
  v90 = v15;
  if ( v13 < 3 )
    goto LABEL_145;
  v91 = *((_DWORD *)a2 + 1);
  v92 = *((_QWORD *)a2 + 7);
  v157 = v92;
  v93 = v91 & 0x70;
  if ( v93 && !v92 )
    return (unsigned int)-1073741811;
  if ( !v92 )
    goto LABEL_145;
  if ( !v93 )
    return (unsigned int)-1073741811;
  v94 = *(unsigned int *)(v92 + 48);
  v95 = 72;
  v166 = 72;
  if ( !(_DWORD)v94 || !*(_QWORD *)(v92 + 56) )
    goto LABEL_227;
  v96 = 3 * v94;
  v97 = -1;
  if ( v96 <= 0xFFFFFFFF )
    v97 = v96;
  HIDWORD(v153) = v97;
  v19 = v96 > 0xFFFFFFFF ? 0xC0010015 : 0;
  if ( v96 <= 0xFFFFFFFF )
  {
    v98 = v97 + 72;
    v95 = -1;
    if ( v98 >= 0x48 )
      v95 = v98;
    v19 = v98 < 0x48 ? 0xC0010015 : 0;
    v166 = v95;
    if ( v98 >= 0x48 )
    {
LABEL_227:
      v99 = *(unsigned int *)(v92 + 32);
      v100 = v95;
      if ( !(_DWORD)v99 || !*(_QWORD *)(v92 + 40) )
        goto LABEL_228;
      v101 = 3 * v99;
      v102 = -1;
      v103 = 2 * v101;
      if ( v103 <= 0xFFFFFFFF )
        v102 = v103;
      v154 = v102;
      v19 = v103 > 0xFFFFFFFF ? 0xC0010015 : 0;
      if ( v103 <= 0xFFFFFFFF )
      {
        v104 = v102 + v95;
        v105 = -1;
        if ( v104 >= v95 )
          v105 = v104;
        v95 = v105;
        v166 = v105;
        v19 = v104 < v100 ? 0xC0010015 : 0;
        if ( v104 >= v100 )
        {
LABEL_228:
          v106 = v95 + v15;
          if ( v95 + v15 >= v15 )
            v16 = v95 + v15;
          v15 = v16;
          v19 = v106 < v90 ? 0xC0010015 : 0;
          if ( v106 >= v90 )
          {
LABEL_145:
            v155 = NdisAllocateMemoryWithTag(&VirtualAddress, v15, 0x6D61444Eu);
            v19 = v155;
            if ( v155 )
              return v19;
            memset(VirtualAddress, 0, v15);
            v107 = VirtualAddress;
            v108 = *a2;
            v159 = VirtualAddress;
            *(_OWORD *)VirtualAddress = v108;
            *a9 = v107;
            v107[4] = *((_DWORD *)a2 + 4);
            VirtualAddress = (char *)VirtualAddress + 64;
            *v107 = 4195233;
            if ( Size && *((_DWORD *)a2 + 5) )
            {
              *((_QWORD *)v107 + 3) = VirtualAddress;
              v107[5] = *((_DWORD *)a2 + 5);
              memmove(VirtualAddress, *((const void **)a2 + 3), Size);
              v109 = (char *)VirtualAddress + Size;
              VirtualAddress = v109;
            }
            else
            {
              *((_QWORD *)v107 + 3) = 0LL;
              v107[5] = 0;
              v109 = (char *)VirtualAddress;
            }
            if ( v10 )
            {
              v110 = 0;
              if ( v20 )
              {
                *((_QWORD *)v107 + 4) = v109;
                v111 = VirtualAddress;
                *(_OWORD *)v109 = *(_OWORD *)v20;
                *((_OWORD *)v109 + 1) = *(_OWORD *)(v20 + 16);
                *((_OWORD *)v109 + 2) = *(_OWORD *)(v20 + 32);
                v112 = (char *)VirtualAddress + 160;
                VirtualAddress = (char *)VirtualAddress + 160;
                if ( v165 && *(_DWORD *)(v20 + 48) )
                {
                  v111[7] = v112;
                  *((_DWORD *)v111 + 12) = *(_DWORD *)(v20 + 48);
                  memmove(VirtualAddress, *(const void **)(v20 + 56), v165);
                  v113 = (char *)VirtualAddress + v165;
                  VirtualAddress = v113;
                }
                else
                {
                  v111[7] = 0LL;
                  *((_DWORD *)v111 + 12) = 0;
                  v113 = (char *)VirtualAddress;
                }
                if ( v167 && *(_DWORD *)(v20 + 64) )
                {
                  v111[9] = v113;
                  *((_DWORD *)v111 + 16) = *(_DWORD *)(v20 + 64);
                  memmove(VirtualAddress, *(const void **)(v20 + 72), v167);
                  v114 = (char *)VirtualAddress + v167;
                  VirtualAddress = v114;
                }
                else
                {
                  v111[9] = 0LL;
                  *((_DWORD *)v111 + 16) = 0;
                  v114 = (char *)VirtualAddress;
                }
                v115 = v150;
                if ( (_DWORD)v150 && *(_DWORD *)(v20 + 80) )
                {
                  v111[11] = v114;
                  v116 = v115;
                  *((_DWORD *)v111 + 20) = *(_DWORD *)(v20 + 80);
                  memmove(VirtualAddress, *(const void **)(v20 + 88), v115);
                  v117 = (char *)VirtualAddress + v116;
                  VirtualAddress = (char *)VirtualAddress + v116;
                }
                else
                {
                  v111[11] = 0LL;
                  *((_DWORD *)v111 + 20) = 0;
                  v117 = (char *)VirtualAddress;
                }
                v118 = HIDWORD(v150);
                if ( HIDWORD(v150) && *(_DWORD *)(v20 + 96) )
                {
                  v111[13] = v117;
                  v119 = v118;
                  *((_DWORD *)v111 + 24) = *(_DWORD *)(v20 + 96);
                  memmove(VirtualAddress, *(const void **)(v20 + 104), v118);
                  v120 = (char *)VirtualAddress + v119;
                  VirtualAddress = (char *)VirtualAddress + v119;
                }
                else
                {
                  v111[13] = 0LL;
                  *((_DWORD *)v111 + 24) = 0;
                  v120 = (char *)VirtualAddress;
                }
                v121 = v151;
                if ( (_DWORD)v151 && *(_DWORD *)(v20 + 112) )
                {
                  v111[15] = v120;
                  v122 = v121;
                  *((_DWORD *)v111 + 28) = *(_DWORD *)(v20 + 112);
                  memmove(VirtualAddress, *(const void **)(v20 + 120), v121);
                  v109 = (char *)VirtualAddress + v122;
                  VirtualAddress = (char *)VirtualAddress + v122;
                }
                else
                {
                  v111[15] = 0LL;
                  *((_DWORD *)v111 + 28) = 0;
                  v109 = (char *)VirtualAddress;
                }
                if ( v163 >= 3 )
                {
                  *(_BYTE *)(*((_QWORD *)v107 + 4) + 128LL) = *(_BYTE *)(v20 + 128);
                  *(_DWORD *)(*((_QWORD *)v107 + 4) + 132LL) = *(_DWORD *)(v20 + 132);
                  *(_BYTE *)(*((_QWORD *)v107 + 4) + 136LL) = *(_BYTE *)(v20 + 136);
                  if ( *(_DWORD *)(v20 + 140) && *(_QWORD *)(v20 + 144) && *(_BYTE *)(v20 + 1) >= 3u )
                  {
                    v123 = HIDWORD(v151);
                    if ( HIDWORD(v151) )
                    {
                      v124 = HIDWORD(v151);
                      v111[18] = VirtualAddress;
                      *((_DWORD *)v111 + 35) = *(_DWORD *)(v20 + 140);
                      memmove(VirtualAddress, *(const void **)(v20 + 144), v123);
                      v109 = (char *)VirtualAddress + v124;
                      VirtualAddress = (char *)VirtualAddress + v124;
                      goto LABEL_180;
                    }
                    v111[18] = 0LL;
                    *((_DWORD *)v111 + 35) = 0;
                  }
                  v109 = (char *)VirtualAddress;
LABEL_180:
                  if ( *(_BYTE *)(v20 + 1) >= 4u )
                  {
                    *(_BYTE *)(*((_QWORD *)v107 + 4) + 152LL) = *(_BYTE *)(v20 + 152);
                    *(_BYTE *)(*((_QWORD *)v107 + 4) + 153LL) = *(_BYTE *)(v20 + 153);
                    *(_BYTE *)(*((_QWORD *)v107 + 4) + 154LL) = *(_BYTE *)(v20 + 154);
                    *(_BYTE *)(*((_QWORD *)v107 + 4) + 155LL) = *(_BYTE *)(v20 + 155);
                    *(_BYTE *)(*((_QWORD *)v107 + 4) + 156LL) = *(_BYTE *)(v20 + 156);
                    v109 = (char *)VirtualAddress;
                  }
                }
              }
            }
            else
            {
              v110 = 0;
            }
            if ( v162 )
            {
              v125 = v156;
              if ( v156 )
              {
                *((_QWORD *)v107 + 5) = v109;
                *(_QWORD *)v109 = *(_QWORD *)v125;
                if ( *(_DWORD *)(v125 + 4) )
                {
                  v126 = *(_BYTE *)(v125 + 9);
                  if ( v126 == 3 )
                  {
                    v127 = 24LL;
                  }
                  else if ( v126 == 2 )
                  {
                    v127 = 20LL;
                  }
                  else
                  {
                    v127 = 0LL;
                    if ( v126 == 1 )
                      v127 = 16LL;
                  }
                  v128 = (_BYTE *)(v125 + 8);
                  v129 = (_BYTE *)(*((_QWORD *)v107 + 5) + 8LL);
                  v130 = v125;
                  do
                  {
                    memmove(v129, v128, v127);
                    if ( a1 >= 0x61Eu )
                      *((_DWORD *)v129 + 4) = 0;
                    ++v110;
                    *v129 = *v128;
                    v128 += v127;
                    v129[1] = 3;
                    *((_WORD *)v129 + 1) = 24;
                    v129 += 24;
                  }
                  while ( v110 < *(_DWORD *)(v130 + 4) );
                  v19 = v155;
                  v107 = v159;
                  v11 = v158;
                }
                v109 = (char *)VirtualAddress + v162;
                VirtualAddress = v109;
              }
            }
            if ( v164 && v11 )
            {
              *((_QWORD *)v107 + 6) = v109;
              v131 = VirtualAddress;
              *(_OWORD *)v109 = *(_OWORD *)v11;
              *((_OWORD *)v109 + 1) = *(_OWORD *)(v11 + 16);
              v132 = v152;
              v133 = (char *)VirtualAddress + 80;
              VirtualAddress = (char *)VirtualAddress + 80;
              if ( (_DWORD)v152 && *(_DWORD *)(v11 + 32) )
              {
                v131[5] = v133;
                v134 = v132;
                *((_DWORD *)v131 + 8) = *(_DWORD *)(v11 + 32);
                memmove(VirtualAddress, *(const void **)(v11 + 40), v132);
                v135 = (char *)VirtualAddress + v134;
                VirtualAddress = (char *)VirtualAddress + v134;
              }
              else
              {
                v131[5] = 0LL;
                *((_DWORD *)v131 + 8) = 0;
                v135 = (char *)VirtualAddress;
              }
              v136 = HIDWORD(v152);
              if ( HIDWORD(v152) && *(_DWORD *)(v11 + 48) )
              {
                v131[7] = v135;
                v137 = v136;
                *((_DWORD *)v131 + 12) = *(_DWORD *)(v11 + 48);
                memmove(VirtualAddress, *(const void **)(v11 + 56), v136);
                v138 = (char *)VirtualAddress + v137;
                VirtualAddress = (char *)VirtualAddress + v137;
              }
              else
              {
                v131[7] = 0LL;
                *((_DWORD *)v131 + 12) = 0;
                v138 = (char *)VirtualAddress;
              }
              v139 = v153;
              if ( (_DWORD)v153 && *(_DWORD *)(v11 + 64) )
              {
                v131[9] = v138;
                v140 = v139;
                *((_DWORD *)v131 + 16) = *(_DWORD *)(v11 + 64);
                memmove(VirtualAddress, *(const void **)(v11 + 72), v139);
                v109 = (char *)VirtualAddress + v140;
                VirtualAddress = (char *)VirtualAddress + v140;
              }
              else
              {
                v131[9] = 0LL;
                *((_DWORD *)v131 + 16) = 0;
                v109 = (char *)VirtualAddress;
              }
            }
            if ( v166 )
            {
              v141 = v157;
              if ( v157 )
              {
                *((_QWORD *)v107 + 7) = v109;
                v142 = VirtualAddress;
                *(_OWORD *)v109 = *(_OWORD *)v141;
                *((_OWORD *)v109 + 1) = *(_OWORD *)(v141 + 16);
                *((_OWORD *)v109 + 2) = *(_OWORD *)(v141 + 32);
                *((_OWORD *)v109 + 3) = *(_OWORD *)(v141 + 48);
                *((_QWORD *)v109 + 8) = *(_QWORD *)(v141 + 64);
                v143 = HIDWORD(v153);
                v144 = (char *)VirtualAddress + 72;
                VirtualAddress = (char *)VirtualAddress + 72;
                if ( HIDWORD(v153) && *(_DWORD *)(v141 + 48) )
                {
                  v142[7] = v144;
                  v145 = v143;
                  *((_DWORD *)v142 + 12) = *(_DWORD *)(v141 + 48);
                  memmove(VirtualAddress, *(const void **)(v141 + 56), v143);
                  v141 = v157;
                  v146 = (char *)VirtualAddress + v145;
                  VirtualAddress = (char *)VirtualAddress + v145;
                }
                else
                {
                  v142[7] = 0LL;
                  *((_DWORD *)v142 + 12) = 0;
                  v146 = (char *)VirtualAddress;
                }
                v147 = v154;
                if ( v154 && *(_DWORD *)(v141 + 32) )
                {
                  v142[5] = v146;
                  *((_DWORD *)v142 + 8) = *(_DWORD *)(v141 + 32);
                  memmove(VirtualAddress, *(const void **)(v141 + 40), v147);
                }
                else
                {
                  v142[5] = 0LL;
                  *((_DWORD *)v142 + 8) = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return v19;
}
