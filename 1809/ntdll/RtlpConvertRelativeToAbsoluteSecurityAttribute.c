/*
 * XREFs of RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x1800EA9A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthW @ 0x18004B140 (RtlStringCbLengthW.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall RtlpConvertRelativeToAbsoluteSecurityAttribute(
        unsigned int *a1,
        unsigned int a2,
        _QWORD *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r13
  unsigned int v8; // ebx
  unsigned int v9; // eax
  unsigned int v10; // r12d
  unsigned int v11; // eax
  int v12; // ebp
  int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // r11d
  unsigned int v16; // r9d
  __int64 v17; // r8
  unsigned int v18; // ecx
  unsigned __int64 v19; // rax
  unsigned __int16 v20; // ax
  int v21; // edx
  unsigned __int64 v22; // rax
  unsigned int v23; // edx
  unsigned int v24; // ecx
  int v25; // eax
  unsigned int v26; // r10d
  unsigned int *v27; // r9
  __int64 v28; // rcx
  unsigned int v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // eax
  int v32; // r12d
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // edx
  int v36; // edx
  unsigned __int64 v37; // rax
  unsigned int v38; // edx
  unsigned int v39; // ecx
  int v40; // eax
  int v41; // ebp
  __int64 v42; // rcx
  unsigned int v43; // r11d
  unsigned int v44; // ecx
  unsigned int v45; // eax
  int v46; // edx
  unsigned int v47; // ecx
  unsigned int v48; // edx
  int v49; // eax
  int v50; // edx
  unsigned __int64 v51; // rax
  unsigned int v52; // edx
  unsigned int v53; // ecx
  int v54; // eax
  unsigned int v55; // edx
  _DWORD *v56; // rcx
  unsigned int v57; // ecx
  unsigned int v58; // eax
  unsigned int v59; // ebp
  char *v60; // rdx
  unsigned __int16 v61; // ax
  unsigned int v62; // r8d
  int v63; // ecx
  unsigned __int64 v64; // rax
  unsigned int v65; // eax
  unsigned int v66; // r12d
  unsigned int v67; // eax
  char *v68; // rbp
  __int64 v69; // r13
  unsigned int v70; // ecx
  unsigned int *v71; // r9
  unsigned int v72; // edx
  unsigned int v73; // eax
  unsigned int v74; // eax
  int v75; // r12d
  __int64 v76; // r13
  unsigned int v77; // r8d
  int v78; // ecx
  unsigned __int64 v79; // rax
  unsigned int v80; // eax
  unsigned int v81; // r12d
  unsigned int v82; // eax
  char *v83; // rbp
  unsigned __int64 v84; // rdx
  __int64 v85; // r13
  unsigned int v86; // r11d
  unsigned int v87; // edx
  unsigned int v88; // eax
  unsigned int v89; // ecx
  unsigned int v90; // eax
  unsigned int v91; // r12d
  unsigned int v92; // r8d
  int v93; // ecx
  unsigned __int64 v94; // rax
  __int64 v95; // rdx
  unsigned int v97; // [rsp+20h] [rbp-48h]
  unsigned __int64 i; // [rsp+20h] [rbp-48h]
  _QWORD v99[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v100; // [rsp+70h] [rbp+8h]
  unsigned int v101; // [rsp+70h] [rbp+8h]

  v4 = 0;
  v5 = a2;
  v99[0] = 0LL;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  if ( a2 < 0x14 )
    return (unsigned int)-1073741705;
  if ( a2 < *a1 )
    return (unsigned int)-1073741705;
  v9 = a2 - *a1;
  if ( v9 < 4 )
    return (unsigned int)-1073741705;
  v8 = RtlStringCbLengthW((unsigned int *)((char *)a1 + *a1), v9, v99);
  if ( (v8 & 0x80000000) != 0 )
    return v8;
  v10 = LODWORD(v99[0]) + 2;
  if ( (unsigned int)(LODWORD(v99[0]) + 2) < LODWORD(v99[0]) )
    return (unsigned int)-1073741675;
  v11 = LODWORD(v99[0]) + 5;
  v12 = -1;
  v13 = -1;
  if ( LODWORD(v99[0]) + 5 >= (unsigned int)(LODWORD(v99[0]) + 2) )
    v13 = LODWORD(v99[0]) + 5;
  v8 = v11 < v10 ? 0xC0000095 : 0;
  if ( v11 < v10 )
    return v8;
  v14 = v13 & 0xFFFFFFFC;
  v15 = -1;
  if ( v14 < 0xFFFFFFE0 )
    v15 = v14 + 32;
  v8 = v14 >= 0xFFFFFFE0 ? 0xC0000095 : 0;
  v16 = v15;
  if ( v14 + 32 < 0x20 )
    return v8;
  v17 = a1[3];
  v18 = -1;
  v19 = 4 * v17;
  if ( (unsigned __int64)(4 * v17) <= 0xFFFFFFFF )
    v18 = 4 * v17;
  v8 = v19 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v19 > 0xFFFFFFFF )
    return v8;
  if ( (int)v5 - 16 < v18 )
    return (unsigned int)-1073741705;
  v20 = *((_WORD *)a1 + 2);
  if ( !v20 )
    goto LABEL_69;
  if ( v20 <= 2u )
  {
LABEL_71:
    v50 = -1;
    v51 = 8 * v17;
    if ( (unsigned __int64)(8 * v17) <= 0xFFFFFFFF )
      v50 = 8 * v17;
    v8 = v51 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v51 > 0xFFFFFFFF )
      return v8;
    v52 = v15 + v50;
    v53 = v15;
    v54 = -1;
    if ( v52 >= v15 )
      v54 = v52;
    v15 = v54;
    v8 = v52 < v53 ? 0xC0000095 : 0;
    if ( v52 < v16 )
      return v8;
    v55 = 0;
    if ( (_DWORD)v17 )
    {
      v56 = a1 + 4;
      while ( (unsigned int)v5 >= *v56 && (unsigned int)(v5 - *v56) >= 8 )
      {
        ++v55;
        ++v56;
        if ( v55 >= (unsigned int)v17 )
          goto LABEL_69;
      }
      return (unsigned int)-1073741705;
    }
    goto LABEL_69;
  }
  if ( v20 != 3 )
  {
    if ( v20 == 5 )
    {
LABEL_25:
      v21 = -1;
      v22 = 16 * v17;
      if ( (unsigned __int64)(16 * v17) <= 0xFFFFFFFF )
        v21 = 16 * v17;
      v8 = v22 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v22 > 0xFFFFFFFF )
        return v8;
      v23 = v15 + v21;
      v24 = v15;
      v25 = -1;
      if ( v23 >= v15 )
        v25 = v23;
      v15 = v25;
      v8 = v23 < v24 ? 0xC0000095 : 0;
      if ( v23 < v16 )
        return v8;
      v26 = 0;
      if ( (_DWORD)v17 )
      {
        v27 = a1 + 4;
        while ( 1 )
        {
          v28 = *v27;
          if ( (unsigned int)v5 < (unsigned int)v28 || (unsigned int)(v5 - v28) < 4 )
            return (unsigned int)-1073741705;
          v29 = *(unsigned int *)((char *)a1 + v28);
          v30 = v28 + 4;
          if ( (int)v28 + 4 >= (unsigned int)v28 )
            v12 = v28 + 4;
          v8 = v30 < (unsigned int)v28 ? 0xC0000095 : 0;
          if ( v30 < (unsigned int)v28 )
            return v8;
          if ( (int)v5 - v12 < v29 )
            return (unsigned int)-1073741705;
          v31 = v29 + 3;
          v12 = -1;
          v32 = -1;
          if ( v29 + 3 >= v29 )
            v32 = v29 + 3;
          v8 = v31 < v29 ? 0xC0000095 : 0;
          if ( v31 < v29 )
            return v8;
          v33 = v15;
          v34 = -1;
          v35 = (v32 & 0xFFFFFFFC) + v15;
          if ( v35 >= v15 )
            v34 = (v32 & 0xFFFFFFFC) + v15;
          v15 = v34;
          v8 = v35 < v33 ? 0xC0000095 : 0;
          if ( v35 < v33 )
            return v8;
          ++v26;
          ++v27;
          if ( v26 >= (unsigned int)v17 )
          {
            v10 = LODWORD(v99[0]) + 2;
            goto LABEL_69;
          }
        }
      }
      goto LABEL_69;
    }
    if ( v20 != 6 )
    {
      if ( v20 != 16 )
        goto LABEL_69;
      goto LABEL_25;
    }
    goto LABEL_71;
  }
  v36 = -1;
  v37 = 8 * v17;
  if ( (unsigned __int64)(8 * v17) <= 0xFFFFFFFF )
    v36 = 8 * v17;
  v8 = v37 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v37 > 0xFFFFFFFF )
    return v8;
  v38 = v15 + v36;
  v39 = v15;
  v40 = -1;
  if ( v38 >= v15 )
    v40 = v38;
  v15 = v40;
  v8 = v38 < v39 ? 0xC0000095 : 0;
  if ( v38 < v16 )
    return v8;
  v41 = 0;
  if ( (_DWORD)v17 )
  {
    do
    {
      v42 = a1[v41 + 4];
      if ( (unsigned int)v5 < (unsigned int)v42 || (unsigned int)(v5 - v42) < 2 )
        return (unsigned int)-1073741705;
      v8 = RtlStringCbLengthW((unsigned int *)((char *)a1 + v42), (unsigned int)(v5 - v42), v99);
      if ( (v8 & 0x80000000) != 0 )
        return v8;
      v44 = LODWORD(v99[0]) + 2;
      if ( (unsigned int)(LODWORD(v99[0]) + 2) < LODWORD(v99[0]) )
      {
        v44 = -1;
        v8 = -1073741675;
      }
      else
      {
        v8 = 0;
      }
      if ( (v8 & 0x80000000) != 0 )
        return v8;
      v45 = v44 + 3;
      v46 = -1;
      if ( v44 + 3 >= v44 )
        v46 = v44 + 3;
      v8 = v45 < v44 ? 0xC0000095 : 0;
      if ( v45 < v44 )
        return v8;
      v47 = v43;
      v48 = v43 + (v46 & 0xFFFFFFFC);
      v49 = -1;
      if ( v48 >= v43 )
        v49 = v48;
      v15 = v49;
      v8 = v48 < v47 ? 0xC0000095 : 0;
      if ( v48 < v47 )
        return v8;
    }
    while ( ++v41 < a1[3] );
  }
  v12 = -1;
LABEL_69:
  if ( *a4 < v15 )
  {
    *a4 = v15;
    return (unsigned int)-1073741789;
  }
  if ( !a3 )
    return (unsigned int)-1073741811;
  *a4 = v15;
  memset(a3, 0, v15);
  v57 = -1;
  *((_WORD *)a3 + 4) = *((_WORD *)a1 + 2);
  *((_WORD *)a3 + 5) = *((_WORD *)a1 + 3);
  *((_DWORD *)a3 + 3) = a1[2];
  *((_DWORD *)a3 + 4) = a1[3];
  if ( v10 < 0xFFFFFFE0 )
    v57 = v10 + 32;
  v8 = v10 >= 0xFFFFFFE0 ? 0xC0000095 : 0;
  if ( v10 + 32 >= 0x20 )
  {
    v58 = v57 + 3;
    if ( v57 + 3 >= v57 )
      v12 = v57 + 3;
    v8 = v58 < v57 ? 0xC0000095 : 0;
    if ( v58 >= v57 )
    {
      v59 = v12 & 0xFFFFFFFC;
      memmove(a3 + 4, (char *)a1 + *a1, v10);
      *a3 = a3 + 4;
      v60 = (char *)a3 + v59;
      v61 = *((_WORD *)a3 + 4);
      if ( !v61 )
        return (unsigned int)-1073741705;
      if ( v61 <= 2u )
      {
LABEL_132:
        v92 = *((_DWORD *)a3 + 4);
        v93 = -1;
        v94 = 8LL * v92;
        if ( v94 <= 0xFFFFFFFF )
          v93 = 8 * v92;
        v8 = v94 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v94 <= 0xFFFFFFFF )
        {
          v8 = v93 + v59 < v59 ? 0xC0000095 : 0;
          if ( v93 + v59 >= v59 )
          {
            a3[3] = v60;
            if ( v92 )
            {
              do
              {
                v95 = v4++;
                *(_QWORD *)(a3[3] + 8 * v95) = *(_QWORD *)((char *)a1 + a1[v95 + 4]);
              }
              while ( v4 < *((_DWORD *)a3 + 4) );
            }
          }
        }
        return v8;
      }
      if ( v61 != 3 )
      {
        if ( v61 == 5 )
        {
LABEL_96:
          v62 = *((_DWORD *)a3 + 4);
          v63 = -1;
          v64 = 16LL * v62;
          if ( v64 <= 0xFFFFFFFF )
            v63 = 16 * v62;
          v8 = v64 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v64 <= 0xFFFFFFFF )
          {
            v65 = v63 + v59;
            v66 = -1;
            if ( v63 + v59 >= v59 )
              v66 = v63 + v59;
            v8 = v65 < v59 ? 0xC0000095 : 0;
            if ( v65 >= v59 )
            {
              v67 = 0;
              v68 = (char *)a3 + v66;
              a3[3] = v60;
              v100 = 0;
              if ( v62 )
              {
                do
                {
                  v69 = v67;
                  v70 = -1;
                  v71 = &a1[v67];
                  v72 = *(unsigned int *)((char *)a1 + v71[4]);
                  v97 = v72;
                  v73 = v72 + v66;
                  if ( v72 + v66 >= v66 )
                    v70 = v72 + v66;
                  v8 = v73 < v66 ? 0xC0000095 : 0;
                  if ( v73 < v66 )
                    break;
                  v74 = v70 + 3;
                  v75 = -1;
                  if ( v70 + 3 >= v70 )
                    v75 = v70 + 3;
                  v8 = v74 < v70 ? 0xC0000095 : 0;
                  if ( v74 < v70 )
                    break;
                  v76 = 2 * v69;
                  v66 = v75 & 0xFFFFFFFC;
                  *(_QWORD *)(a3[3] + 8 * v76) = 0LL;
                  if ( v72 )
                  {
                    memmove(v68, (char *)a1 + v71[4] + 4, v72);
                    v72 = v97;
                    *(_QWORD *)(a3[3] + 8 * v76) = v68;
                  }
                  v68 = (char *)a3 + v66;
                  *(_DWORD *)(a3[3] + 8 * v76 + 8) = v72;
                  v67 = v100 + 1;
                  v100 = v67;
                }
                while ( v67 < *((_DWORD *)a3 + 4) );
              }
            }
          }
          return v8;
        }
        if ( v61 != 6 )
        {
          if ( v61 == 16 )
            goto LABEL_96;
          return (unsigned int)-1073741705;
        }
        goto LABEL_132;
      }
      v77 = *((_DWORD *)a3 + 4);
      v78 = -1;
      v79 = 8LL * v77;
      if ( v79 <= 0xFFFFFFFF )
        v78 = 8 * v77;
      v8 = v79 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v79 <= 0xFFFFFFFF )
      {
        v80 = v78 + v59;
        v81 = -1;
        if ( v78 + v59 >= v59 )
          v81 = v78 + v59;
        v8 = v80 < v59 ? 0xC0000095 : 0;
        if ( v80 >= v59 )
        {
          v82 = 0;
          v83 = (char *)a3 + v81;
          a3[3] = v60;
          v101 = 0;
          if ( v77 )
          {
            v84 = v5;
            for ( i = v5; ; v84 = i )
            {
              v85 = v82;
              v8 = RtlStringCbLengthW((unsigned int *)((char *)a1 + a1[v82 + 4]), v84, v99);
              if ( (v8 & 0x80000000) != 0 )
                break;
              v87 = LODWORD(v99[0]) + 2;
              if ( (unsigned int)(LODWORD(v99[0]) + 2) < LODWORD(v99[0]) )
                return (unsigned int)-1073741675;
              v88 = v87 + v81;
              v89 = v86;
              if ( v87 + v81 >= v81 )
                v89 = v87 + v81;
              v8 = v88 < v81 ? 0xC0000095 : 0;
              if ( v88 < v81 )
                return v8;
              v90 = v89 + 3;
              v91 = v86;
              if ( v89 + 3 >= v89 )
                v91 = v89 + 3;
              v8 = v90 < v89 ? 0xC0000095 : 0;
              if ( v90 < v89 )
                return v8;
              v81 = v91 & 0xFFFFFFFC;
              memmove(v83, (char *)a1 + a1[v85 + 4], v87);
              *(_QWORD *)(a3[3] + 8 * v85) = v83;
              v82 = v101 + 1;
              v83 = (char *)a3 + v81;
              v101 = v82;
              if ( v82 >= *((_DWORD *)a3 + 4) )
                return v8;
            }
          }
        }
      }
    }
  }
  return v8;
}
