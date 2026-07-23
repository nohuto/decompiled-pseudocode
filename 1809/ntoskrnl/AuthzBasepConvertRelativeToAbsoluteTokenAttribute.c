/*
 * XREFs of AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x140324564
 * Callers:
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401215CC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14011CB38 (RtlStringCbLengthW.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  size_t v5; // r13
  unsigned int v8; // ebx
  __int64 v9; // rcx
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
  unsigned int v50; // eax
  int v51; // edx
  unsigned __int64 v52; // rax
  unsigned int v53; // edx
  unsigned int v54; // ecx
  int v55; // eax
  unsigned int v56; // edx
  _DWORD *v57; // rcx
  unsigned int v58; // ecx
  unsigned int v59; // eax
  unsigned int v60; // ebp
  char *v61; // rdx
  unsigned __int16 v62; // ax
  unsigned int v63; // r8d
  int v64; // ecx
  unsigned __int64 v65; // rax
  unsigned int v66; // eax
  unsigned int v67; // r12d
  unsigned int v68; // eax
  char *v69; // rbp
  __int64 v70; // r13
  unsigned int v71; // ecx
  unsigned int *v72; // r9
  unsigned int v73; // edx
  unsigned int v74; // eax
  unsigned int v75; // eax
  int v76; // r12d
  __int64 v77; // r13
  unsigned int v78; // r8d
  int v79; // ecx
  unsigned __int64 v80; // rax
  unsigned int v81; // eax
  unsigned int v82; // r12d
  unsigned int v83; // eax
  char *v84; // rbp
  size_t v85; // rdx
  __int64 v86; // r13
  unsigned int v87; // r11d
  unsigned int v88; // edx
  unsigned int v89; // eax
  unsigned int v90; // ecx
  unsigned int v91; // eax
  unsigned int v92; // r12d
  __int64 v93; // r13
  unsigned int v94; // r8d
  int v95; // ecx
  unsigned __int64 v96; // rax
  __int64 v97; // rdx
  unsigned int v99; // [rsp+20h] [rbp-58h]
  __int16 v100; // [rsp+20h] [rbp-58h]
  size_t pcbLength; // [rsp+28h] [rbp-50h] BYREF
  size_t i; // [rsp+30h] [rbp-48h]
  unsigned int v103; // [rsp+80h] [rbp+8h]
  unsigned int v104; // [rsp+80h] [rbp+8h]

  v4 = 0;
  v5 = a2;
  pcbLength = 0LL;
  if ( !a1 || !a3 || !a4 )
    return (unsigned int)-1073741811;
  if ( a2 < 0x14 )
    return (unsigned int)-1073741705;
  if ( !a1[3] )
    return (unsigned int)-1073741705;
  v9 = *a1;
  if ( a2 < (unsigned int)v9 || a2 - (unsigned int)v9 < 4 )
    return (unsigned int)-1073741705;
  v8 = RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v9), a2 - (unsigned int)v9, &pcbLength);
  if ( (v8 & 0x80000000) != 0 )
    return v8;
  v10 = pcbLength + 2;
  if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
    return (unsigned int)-1073741675;
  v11 = pcbLength + 5;
  v12 = -1;
  v13 = -1;
  if ( (int)pcbLength + 5 >= (unsigned int)(pcbLength + 2) )
    v13 = pcbLength + 5;
  v8 = v11 < v10 ? 0xC0000095 : 0;
  if ( v11 < v10 )
    return v8;
  v14 = v13 & 0xFFFFFFFC;
  v15 = -1;
  if ( v14 < 0xFFFFFFD8 )
    v15 = v14 + 40;
  v8 = v14 >= 0xFFFFFFD8 ? 0xC0000095 : 0;
  v16 = v15;
  if ( v14 + 40 < 0x28 )
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
  if ( v20 )
  {
    if ( v20 <= 2u )
      goto LABEL_73;
    switch ( v20 )
    {
      case 3u:
        v36 = -1;
        v37 = 16 * v17;
        if ( (unsigned __int64)(16 * v17) <= 0xFFFFFFFF )
          v36 = 16 * v17;
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
            v8 = RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + v42), (unsigned int)(v5 - v42), &pcbLength);
            if ( (v8 & 0x80000000) != 0 )
              return v8;
            v44 = pcbLength + 2;
            if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
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
        break;
      case 5u:
        goto LABEL_27;
      case 6u:
LABEL_73:
        v51 = -1;
        v52 = 8 * v17;
        if ( (unsigned __int64)(8 * v17) <= 0xFFFFFFFF )
          v51 = 8 * v17;
        v8 = v52 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v52 > 0xFFFFFFFF )
          return v8;
        v53 = v15 + v51;
        v54 = v15;
        v55 = -1;
        if ( v53 >= v15 )
          v55 = v53;
        v15 = v55;
        v8 = v53 < v54 ? 0xC0000095 : 0;
        if ( v53 < v16 )
          return v8;
        v56 = 0;
        if ( (_DWORD)v17 )
        {
          v57 = a1 + 4;
          while ( (unsigned int)v5 >= *v57 && (unsigned int)(v5 - *v57) >= 8 )
          {
            ++v56;
            ++v57;
            if ( v56 >= (unsigned int)v17 )
              goto LABEL_71;
          }
          return (unsigned int)-1073741705;
        }
        break;
      case 0x10u:
LABEL_27:
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
              v10 = pcbLength + 2;
              goto LABEL_71;
            }
          }
        }
        break;
    }
  }
LABEL_71:
  v50 = *a4;
  *a4 = v15;
  if ( v50 < v15 )
    return (unsigned int)-1073741789;
  memset(a3, 0, v15);
  v58 = -1;
  *((_WORD *)a3 + 8) = *((_WORD *)a1 + 2);
  *((_WORD *)a3 + 9) = *((_WORD *)a1 + 3);
  a3[5] = a1[2];
  a3[6] = a1[3];
  if ( v10 < 0xFFFFFFD8 )
    v58 = v10 + 40;
  v8 = v10 >= 0xFFFFFFD8 ? 0xC0000095 : 0;
  if ( v10 + 40 >= 0x28 )
  {
    v59 = v58 + 3;
    if ( v58 + 3 >= v58 )
      v12 = v58 + 3;
    v8 = v59 < v58 ? 0xC0000095 : 0;
    if ( v59 >= v58 )
    {
      v60 = v12 & 0xFFFFFFFC;
      memmove(a3 + 10, (char *)a1 + *a1, v10);
      *((_QWORD *)a3 + 1) = a3 + 10;
      *((_WORD *)a3 + 1) = v10;
      v61 = (char *)a3 + v60;
      *(_WORD *)a3 = v10 - 2;
      v62 = *((_WORD *)a3 + 8);
      if ( !v62 )
        return (unsigned int)-1073741705;
      if ( v62 <= 2u )
      {
LABEL_133:
        v94 = a3[6];
        v95 = -1;
        v96 = 8LL * v94;
        if ( v96 <= 0xFFFFFFFF )
          v95 = 8 * v94;
        v8 = v96 > 0xFFFFFFFF ? 0xC0000095 : 0;
        if ( v96 <= 0xFFFFFFFF )
        {
          v8 = v95 + v60 < v60 ? 0xC0000095 : 0;
          if ( v95 + v60 >= v60 )
          {
            *((_QWORD *)a3 + 4) = v61;
            if ( v94 )
            {
              do
              {
                v97 = v4++;
                *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v97) = *(_QWORD *)((char *)a1 + a1[v97 + 4]);
              }
              while ( v4 < a3[6] );
            }
          }
        }
        return v8;
      }
      if ( v62 != 3 )
      {
        if ( v62 == 5 )
        {
LABEL_97:
          v63 = a3[6];
          v64 = -1;
          v65 = 16LL * v63;
          if ( v65 <= 0xFFFFFFFF )
            v64 = 16 * v63;
          v8 = v65 > 0xFFFFFFFF ? 0xC0000095 : 0;
          if ( v65 <= 0xFFFFFFFF )
          {
            v66 = v64 + v60;
            v67 = -1;
            if ( v64 + v60 >= v60 )
              v67 = v64 + v60;
            v8 = v66 < v60 ? 0xC0000095 : 0;
            if ( v66 >= v60 )
            {
              v68 = 0;
              v69 = (char *)a3 + v67;
              *((_QWORD *)a3 + 4) = v61;
              v103 = 0;
              if ( v63 )
              {
                do
                {
                  v70 = v68;
                  v71 = -1;
                  v72 = &a1[v68];
                  v73 = *(unsigned int *)((char *)a1 + v72[4]);
                  v99 = v73;
                  v74 = v73 + v67;
                  if ( v73 + v67 >= v67 )
                    v71 = v73 + v67;
                  v8 = v74 < v67 ? 0xC0000095 : 0;
                  if ( v74 < v67 )
                    break;
                  v75 = v71 + 3;
                  v76 = -1;
                  if ( v71 + 3 >= v71 )
                    v76 = v71 + 3;
                  v8 = v75 < v71 ? 0xC0000095 : 0;
                  if ( v75 < v71 )
                    break;
                  v77 = 2 * v70;
                  v67 = v76 & 0xFFFFFFFC;
                  *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v77) = 0LL;
                  if ( v73 )
                  {
                    memmove(v69, (char *)a1 + v72[4] + 4, v73);
                    v73 = v99;
                    *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v77) = v69;
                  }
                  v69 = (char *)a3 + v67;
                  *(_DWORD *)(*((_QWORD *)a3 + 4) + 8 * v77 + 8) = v73;
                  v68 = v103 + 1;
                  v103 = v68;
                }
                while ( v68 < a3[6] );
              }
            }
          }
          return v8;
        }
        if ( v62 != 6 )
        {
          if ( v62 == 16 )
            goto LABEL_97;
          return (unsigned int)-1073741705;
        }
        goto LABEL_133;
      }
      v78 = a3[6];
      v79 = -1;
      v80 = 16LL * v78;
      if ( v80 <= 0xFFFFFFFF )
        v79 = 16 * v78;
      v8 = v80 > 0xFFFFFFFF ? 0xC0000095 : 0;
      if ( v80 <= 0xFFFFFFFF )
      {
        v81 = v79 + v60;
        v82 = -1;
        if ( v79 + v60 >= v60 )
          v82 = v79 + v60;
        v8 = v81 < v60 ? 0xC0000095 : 0;
        if ( v81 >= v60 )
        {
          v83 = 0;
          v84 = (char *)a3 + v82;
          *((_QWORD *)a3 + 4) = v61;
          v104 = 0;
          if ( v78 )
          {
            v85 = v5;
            for ( i = v5; ; v85 = i )
            {
              v86 = v83;
              v8 = RtlStringCbLengthW((STRSAFE_PCNZWCH)((char *)a1 + a1[v83 + 4]), v85, &pcbLength);
              if ( (v8 & 0x80000000) != 0 )
                break;
              v88 = pcbLength + 2;
              v100 = pcbLength + 2;
              if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
                return (unsigned int)-1073741675;
              v89 = v88 + v82;
              v90 = v87;
              if ( v88 + v82 >= v82 )
                v90 = v88 + v82;
              v8 = v89 < v82 ? 0xC0000095 : 0;
              if ( v89 < v82 )
                return v8;
              v91 = v90 + 3;
              v92 = v87;
              if ( v90 + 3 >= v90 )
                v92 = v90 + 3;
              v8 = v91 < v90 ? 0xC0000095 : 0;
              if ( v91 < v90 )
                return v8;
              v82 = v92 & 0xFFFFFFFC;
              memmove(v84, (char *)a1 + a1[v86 + 4], v88);
              v93 = 2 * v86;
              *(_QWORD *)(*((_QWORD *)a3 + 4) + 8 * v93 + 8) = v84;
              v84 = (char *)a3 + v82;
              *(_WORD *)(*((_QWORD *)a3 + 4) + 8 * v93) = v100 - 2;
              *(_WORD *)(*((_QWORD *)a3 + 4) + 8 * v93 + 2) = v100;
              v83 = v104 + 1;
              v104 = v83;
              if ( v83 >= a3[6] )
                return v8;
            }
          }
        }
      }
    }
  }
  return v8;
}
