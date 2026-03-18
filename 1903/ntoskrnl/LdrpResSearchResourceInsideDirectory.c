/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x14067B598
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400AFFDC (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlULongLongSub @ 0x1400B2BD0 (RtlULongLongSub.c)
 *     LdrpResCompareResourceNames @ 0x14067C158 (LdrpResCompareResourceNames.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x1406E6034 (LdrpSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        __int64 a2,
        ULONGLONG a3,
        ULONGLONG a4,
        __int64 a5,
        ULONGLONG ullSubtrahendb,
        unsigned __int64 a7,
        int a8,
        signed __int16 *a9,
        unsigned __int64 *a10,
        _QWORD *a11,
        unsigned int a12,
        _WORD *a13)
{
  ULONGLONG v14; // r11
  unsigned int v16; // ebx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  int v19; // r15d
  int v20; // r10d
  int v21; // ecx
  unsigned __int64 v22; // rdi
  unsigned int *v23; // r14
  int v24; // eax
  int v25; // ecx
  int v26; // r8d
  char *v27; // r10
  char *v28; // rcx
  unsigned __int64 v29; // r10
  char v30; // al
  int v31; // ecx
  __int64 result; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // r8
  __int64 v35; // r8
  int v36; // edx
  unsigned __int64 v37; // rdi
  ULONGLONG v38; // rsi
  int v39; // r10d
  ULONGLONG v40; // r11
  ULONGLONG v41; // r8
  ULONGLONG v42; // r12
  __int64 v43; // rdx
  ULONGLONG v44; // r9
  unsigned __int64 v45; // r8
  unsigned __int64 v46; // rcx
  int v47; // r8d
  __int16 v48; // ax
  unsigned int v49; // r10d
  __int64 v50; // rsi
  __int64 v51; // rax
  int v52; // r8d
  int v53; // r9d
  __int64 v54; // rax
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rax
  __int64 v58; // r11
  __int64 v59; // rax
  unsigned int v60; // r8d
  unsigned __int64 v61; // rdx
  int v62; // eax
  unsigned __int64 v63; // r15
  int v64; // r8d
  unsigned __int64 v65; // r13
  int v66; // [rsp+40h] [rbp-F8h]
  ULONGLONG pullResult; // [rsp+48h] [rbp-F0h] BYREF
  unsigned int v68; // [rsp+50h] [rbp-E8h]
  int v69; // [rsp+54h] [rbp-E4h]
  unsigned int *v70; // [rsp+58h] [rbp-E0h]
  int v71; // [rsp+60h] [rbp-D8h] BYREF
  int v72; // [rsp+64h] [rbp-D4h]
  unsigned __int64 v73; // [rsp+68h] [rbp-D0h]
  __int16 v74; // [rsp+70h] [rbp-C8h]
  int v75; // [rsp+74h] [rbp-C4h]
  int v76; // [rsp+78h] [rbp-C0h]
  unsigned __int64 v77; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v78; // [rsp+88h] [rbp-B0h]
  unsigned __int64 v79; // [rsp+90h] [rbp-A8h]
  int v80; // [rsp+98h] [rbp-A0h]
  unsigned __int64 v81; // [rsp+A0h] [rbp-98h]
  char *v82; // [rsp+A8h] [rbp-90h]
  __int64 v83; // [rsp+B0h] [rbp-88h]
  __int16 v84; // [rsp+B8h] [rbp-80h]
  __int64 v85; // [rsp+C0h] [rbp-78h]
  unsigned __int64 v86; // [rsp+C8h] [rbp-70h]
  int v87; // [rsp+D0h] [rbp-68h]
  __int64 v88; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v89; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v90; // [rsp+F0h] [rbp-48h]
  char v91; // [rsp+148h] [rbp+10h]
  ULONGLONG v92; // [rsp+150h] [rbp+18h]
  char v93; // [rsp+158h] [rbp+20h]
  unsigned int v94; // [rsp+158h] [rbp+20h]
  signed __int16 ullSubtrahend; // [rsp+168h] [rbp+30h]
  unsigned int ullSubtrahenda; // [rsp+168h] [rbp+30h]

  v92 = a3;
  v14 = a3;
  v88 = 0LL;
  v16 = 0;
  ullSubtrahend = 0;
  LOWORD(a3) = 0;
  v75 = 0;
  if ( a4 )
  {
    if ( a5 )
    {
      v17 = a7;
      if ( a7 )
      {
        if ( (unsigned int)(a8 - 1) <= 3 )
        {
          v18 = a12;
          v68 = a12;
          if ( (a12 & 0x8000) == 0 )
          {
            v19 = a12 & 0x1000;
            v80 = v19;
            v91 = v19 != 0;
            v20 = a12 & 0x8800;
            v72 = v20;
            if ( ((a12 & 0x1000) == 0 || v14) && v20 != 34816 && a1 )
            {
              v21 = a8;
              v76 = a8;
              v22 = a4;
              v23 = 0LL;
              v77 = 0LL;
              if ( a13 )
                *a13 = 0;
LABEL_12:
              if ( v22 )
              {
                v24 = v21;
                v25 = v21 - 1;
                v76 = v25;
                v87 = v25;
                if ( v24 )
                {
                  v17 = *(_QWORD *)v17;
                  v79 = v17;
                  v78 = v17;
                  if ( !v25 && a8 == 3 )
                  {
                    v77 = v22;
                    v89 = v22;
                    if ( !a9 )
                      return (unsigned int)-1073741811;
                    ullSubtrahend = *a9;
                    v84 = *a9;
                    v75 = 0;
                    v74 = 0;
                    if ( (~(_BYTE)v18 & 4) != 0 )
                    {
                      v17 = (unsigned __int16)a9[2];
                      v79 = v17;
                      v78 = v17;
                    }
                  }
                  if ( v20 == 34816 )
                  {
                    v26 = WORD2(v88);
                  }
                  else
                  {
                    if ( v19 )
                    {
                      if ( v22 + 24 < v22 )
                        goto LABEL_154;
                      pullResult = v22 + 24;
                      if ( v22 + 24 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
                        return (unsigned int)-1073741701;
                    }
                    v26 = *(unsigned __int16 *)(v22 + 12);
                  }
                  v69 = v26;
                  if ( v26 && v19 )
                  {
                    v83 = 8LL * (unsigned int)v26;
                    v35 = (unsigned int)(8 * v26);
                    if ( v35 + v22 + 16 < v22 )
                      goto LABEL_154;
                    pullResult = v35 + v22 + 16;
                    if ( pullResult > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
                      return (unsigned int)-1073741701;
                    v26 = v69;
                  }
                  v27 = (char *)(v22 + 16);
                  v83 = v22 + 16;
                  v82 = (char *)(v22 + 16);
                  if ( (v17 & 0xFFFFFFFFFFFF0000uLL) == 0 )
                  {
                    if ( v26 )
                    {
                      if ( v19 )
                      {
                        if ( &v27[v26] < v27 )
                          goto LABEL_154;
                        pullResult = (ULONGLONG)&v27[v26];
                      }
                      v27 += 8 * v26;
                      v83 = (__int64)v27;
                      v82 = v27;
                    }
                    v26 = HIWORD(v88);
                    if ( v72 != 34816 )
                      v26 = *(unsigned __int16 *)(v22 + 14);
                    v69 = v26;
                    if ( v19 )
                    {
                      v85 = 8LL * (unsigned int)v26;
                      v28 = &v27[8 * v26];
                      if ( v28 < v27 )
                        goto LABEL_154;
                      pullResult = (ULONGLONG)&v27[8 * v26];
                      v69 = v26;
                      if ( (unsigned __int64)v28 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
                        return (unsigned int)-1073741701;
                    }
                  }
                  if ( !v26 )
                  {
                    v73 = 0LL;
LABEL_114:
                    switch ( a8 - v76 )
                    {
                      case 1:
                        return (unsigned int)-1073741686;
                      case 2:
                        return (unsigned int)-1073741685;
                      case 3:
                        return (unsigned int)-1073741308;
                    }
                    return (unsigned int)-1073741811;
                  }
                  while ( !v77 || (v18 & 0x20) == 0 )
                  {
                    while ( 2 )
                    {
                      v22 = 0LL;
                      v73 = 0LL;
                      v17 = (unsigned __int64)v27;
                      v82 = v27;
                      v29 = (unsigned __int64)&v27[8 * v26 - 8];
                      v86 = v29;
                      v30 = v26;
                      while ( 1 )
                      {
                        if ( v17 > v29 )
                          goto LABEL_43;
                        v31 = v26 >> 1;
                        LODWORD(v78) = v26 >> 1;
                        if ( !(v26 >> 1) )
                          break;
                        v81 = v17;
                        v93 = v30 & 1;
                        if ( (v30 & 1) != 0 )
                        {
                          v34 = v17 + 8LL * v31;
                          v81 = v34;
                          LODWORD(v85) = v31 - 1;
                        }
                        else
                        {
                          LODWORD(v85) = v31 - 1;
                          v34 = v17 + 8LL * (v31 - 1);
                          v81 = v34;
                        }
                        result = LdrpResCompareResourceNames(a1, v18, v14, v79, a4, v34, v18, &v71, v66);
                        v66 = result;
                        if ( (int)result < 0 )
                          return result;
                        if ( !v71 )
                        {
                          v33 = *(unsigned int *)(v81 + 4);
                          if ( (int)v33 >= 0 )
                          {
                            v22 = 0LL;
                            v73 = 0LL;
LABEL_51:
                            if ( v19 )
                            {
                              if ( v77 )
                              {
                                v23 = (unsigned int *)(a4 + v33);
                                if ( a4 + v33 >= a4 )
                                {
                                  pullResult = a4 + v33;
                                  goto LABEL_55;
                                }
LABEL_154:
                                pullResult = -1LL;
                              }
                              return (unsigned int)-1073741701;
                            }
                            v23 = (unsigned int *)(a4 + v33);
LABEL_55:
                            v70 = v23;
                            goto LABEL_42;
                          }
LABEL_37:
                          if ( v19 )
                          {
                            if ( v77 )
                              return (unsigned int)-1073741701;
                            LODWORD(v33) = v33 & 0x7FFFFFFF;
                            v22 = v33 + a4;
                            if ( v33 + a4 < a4 )
                              goto LABEL_154;
                            pullResult = v33 + a4;
                          }
                          else
                          {
                            v22 = a4 + (v33 & 0xFFFFFFFF7FFFFFFFuLL);
                          }
                          v73 = v22;
                          goto LABEL_42;
                        }
                        if ( v71 < 0 )
                        {
                          v29 = v81 - 8;
                          v86 = v81 - 8;
                          if ( v93 )
                          {
                            v30 = v78;
                            v26 = v78;
                          }
                          else
                          {
                            v30 = v85;
                            v26 = v85;
                          }
                          v17 = (unsigned __int64)v82;
                        }
                        else
                        {
                          v17 = v81 + 8;
                          v82 = (char *)(v81 + 8);
                          v30 = v78;
                          v26 = v78;
                          v29 = v86;
                        }
                        v18 = v68;
                        v14 = v92;
                      }
                      if ( !v26 )
                        goto LABEL_43;
                      result = LdrpResCompareResourceNames(a1, v18, v14, v79, a4, v17, v18, &v71, v66);
                      v66 = result;
                      if ( (int)result < 0 )
                        return result;
                      if ( !v71 )
                      {
                        v33 = *((unsigned int *)v82 + 1);
                        if ( (int)v33 >= 0 )
                          goto LABEL_51;
                        goto LABEL_37;
                      }
LABEL_42:
                      v18 = v68;
                      v14 = v92;
LABEL_43:
                      if ( !v77 || v23 )
                      {
LABEL_44:
                        v17 = a7 + 8;
                        a7 = v17;
                        v90 = v17;
                        LOWORD(a3) = v79;
                        v20 = v72;
                        v21 = v76;
                        goto LABEL_12;
                      }
                      if ( (v18 & 4) != 0 )
                      {
                        LOWORD(a3) = v79;
                        goto LABEL_76;
                      }
                      HIWORD(v64) = HIWORD(v75);
                      LOWORD(v64) = v75 + 1;
                      v75 = v64;
                      v74 = v64;
                      if ( (unsigned __int16)v64 < ullSubtrahend )
                      {
                        v79 = (unsigned __int16)a9[4 * (unsigned __int16)v64 + 2];
                        v78 = v79;
                        v26 = v69;
                        v27 = (char *)v83;
                        continue;
                      }
                      break;
                    }
                    if ( *((_BYTE *)a9 + 516) )
                      goto LABEL_44;
                    v18 = (unsigned int)v18 | 0x20;
                    v68 = v18;
                    v26 = v69;
                    v27 = (char *)v83;
                  }
                  v22 = 0LL;
                  v73 = 0LL;
                  v23 = (unsigned int *)(a4 + *((unsigned int *)v27 + 1));
                  if ( v19 )
                  {
                    if ( (unsigned __int64)v23 < a4 )
                      goto LABEL_154;
                    pullResult = a4 + *((unsigned int *)v27 + 1);
                  }
                  v70 = v23;
                  LODWORD(a3) = *(_DWORD *)v27;
                  v78 = *(unsigned int *)v27;
LABEL_76:
                  v20 = v72;
                }
              }
              if ( v23 )
              {
                v36 = v18 & 2;
                if ( !v36 )
                {
                  if ( v19
                    && ((unsigned __int64)v23 <= a4 || (unsigned __int64)(v23 + 4) > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)) )
                  {
                    goto LABEL_164;
                  }
                  if ( a13 )
                    *a13 = a3;
                  v37 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( (a1 & 1) == 0 && v20 != 34816 )
                  {
                    v38 = 0LL;
                    goto LABEL_87;
                  }
                  v47 = a5;
                  v48 = *(_WORD *)(a5 + 24);
                  if ( v48 == 267 )
                  {
                    v49 = *(_DWORD *)(a5 + 136);
                  }
                  else if ( v48 == 523 )
                  {
                    v49 = *(_DWORD *)(a5 + 152);
                  }
                  else
                  {
                    v49 = 0;
                  }
                  if ( v49 )
                  {
                    v50 = v49;
                    if ( v19 )
                    {
                      if ( v49 + v37 < v37 )
                        goto LABEL_154;
                      pullResult = v49 + v37;
                      if ( RtlULongLongSub(pullResult, a4, &pullResult) < 0 )
                        return (unsigned int)-1073741701;
                      v47 = a5;
                    }
                    v38 = v37 + v50 - a4;
                    v51 = LdrpSectionTableFromVirtualAddress((unsigned int)a1 & 0xFFFFFFFC, v14, v47, v17, v49, v91);
                    if ( !v51 )
                      goto LABEL_164;
                    if ( *v23 > *(_DWORD *)(v51 + 8) )
                    {
                      ullSubtrahenda = *(_DWORD *)(v51 + 12);
                      v54 = LdrpSectionTableFromVirtualAddress((unsigned int)a1 & 0xFFFFFFFC, v92, v52, v53, *v23, v91);
                      if ( !v54 )
                        goto LABEL_164;
                      v94 = *(_DWORD *)(v54 + 12);
                      v57 = LdrpSectionTableFromVirtualAddress((unsigned int)a1 & 0xFFFFFFFC, v92, v55, v56, v94, v91);
                      v58 = v57;
                      v39 = -1073741675;
                      if ( v57 )
                      {
                        if ( v19 )
                        {
                          v59 = *(unsigned int *)(v57 + 12);
                          v60 = v94;
                          v61 = v37 + v94 - v59;
                          if ( v61 < v37 )
                          {
                            pullResult = -1LL;
                            v62 = -1073741675;
                            v61 = -1LL;
                          }
                          else
                          {
                            pullResult = v37 + v94 - v59;
                            v62 = 0;
                          }
                          if ( v62 < 0 )
                            return (unsigned int)-1073741701;
                          if ( v61 + *(unsigned int *)(v58 + 20) < v61 )
                            goto LABEL_154;
                          pullResult = v61 + *(unsigned int *)(v58 + 20);
                        }
                        else
                        {
                          v60 = v94;
                        }
                        v63 = v37 + *(unsigned int *)(v58 + 20) - (unsigned __int64)*(unsigned int *)(v58 + 12) + v60;
                      }
                      else
                      {
                        v63 = 0LL;
                      }
                      if ( v80
                        && (RtlULongLongSub(*(unsigned int *)(v58 + 12), ullSubtrahenda, &pullResult) < 0
                         || RtlULongLongSub(pullResult, v63 - a4, &pullResult) < 0) )
                      {
                        return (unsigned int)-1073741701;
                      }
                      v38 += a4 + *(unsigned int *)(v58 + 12) - (unsigned __int64)ullSubtrahenda - v63;
                      v19 = v80;
                      goto LABEL_88;
                    }
LABEL_87:
                    v39 = -1073741675;
LABEL_88:
                    if ( !v19 )
                    {
                      v41 = 0LL;
                      v43 = v23[1];
                      v42 = v92;
                      goto LABEL_95;
                    }
                    if ( RtlULongLongSub(*v23, v38, &pullResult) < 0 )
                      return (unsigned int)-1073741701;
                    v41 = pullResult;
                    if ( pullResult >= a4 - a1 )
                    {
                      v42 = v92;
                      if ( pullResult <= v92 )
                      {
                        if ( (_DWORD)v40 )
                        {
                          v43 = (unsigned int)v40;
                          if ( v40 <= v92 && pullResult + v40 <= v92 )
                          {
LABEL_95:
                            if ( a10 )
                            {
                              if ( v19 )
                              {
                                v44 = v41 + v37;
                                if ( v41 + v37 < v37 )
                                {
                                  pullResult = -1LL;
                                  v45 = -1LL;
                                }
                                else
                                {
                                  pullResult = v41 + v37;
                                  v39 = 0;
                                  v45 = v41 + v37;
                                }
                                if ( v39 < 0 || v45 < v37 || v45 > v42 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
                                  return (unsigned int)-1073741701;
                                *a10 = v44;
                              }
                              else
                              {
                                *a10 = v37 + *v23 - v38;
                              }
                            }
                            if ( a11 )
                            {
                              if ( v19 && a10 )
                              {
                                v46 = *a10 + v43;
                                if ( v46 < *a10 )
                                  goto LABEL_154;
                                pullResult = *a10 + v43;
                                if ( v46 > v37 + v42 )
                                  return (unsigned int)-1073741701;
                              }
                              *a11 = v43;
                            }
                            return v16;
                          }
                        }
                      }
                    }
LABEL_164:
                    v70 = 0LL;
                    return (unsigned int)-1073741701;
                  }
                  v70 = 0LL;
                  return (unsigned int)-1073741687;
                }
              }
              else
              {
                v36 = v18 & 2;
              }
              if ( v22 && v36 )
              {
                if ( v19 )
                {
                  if ( v22 + 24 < v22 )
                  {
                    pullResult = -1LL;
LABEL_152:
                    v73 = 0LL;
                    return (unsigned int)-1073741701;
                  }
                  pullResult = v22 + 24;
                  v65 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( v22 + 24 > v14 + v65 )
                    goto LABEL_152;
                }
                else
                {
                  v65 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
                }
                if ( a10 )
                {
                  if ( v19 && (v22 < v65 || v22 > v14 + v65) )
                    return (unsigned int)-1073741701;
                  *a10 = v22;
                }
                return v16;
              }
              goto LABEL_114;
            }
          }
        }
      }
    }
  }
  return 3221225485LL;
}
