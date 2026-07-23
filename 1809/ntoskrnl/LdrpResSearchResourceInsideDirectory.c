/*
 * XREFs of LdrpResSearchResourceInsideDirectory @ 0x14068A66C
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1400FDA8C (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlULongLongSub @ 0x1400FE0E4 (RtlULongLongSub.c)
 *     LdrpResCompareResourceNames @ 0x14068B1E0 (LdrpResCompareResourceNames.c)
 *     LdrpSectionTableFromVirtualAddress @ 0x14068C6EC (LdrpSectionTableFromVirtualAddress.c)
 */

__int64 __fastcall LdrpResSearchResourceInsideDirectory(
        __int64 a1,
        __int64 a2,
        ULONGLONG a3,
        ULONGLONG a4,
        __int64 a5,
        ULONGLONG ullSubtrahendb,
        _QWORD *a7,
        int a8,
        signed __int16 *a9,
        unsigned __int64 *a10,
        _QWORD *a11,
        int a12,
        _WORD *a13)
{
  ULONGLONG v14; // r11
  unsigned int v16; // ebx
  __int64 v17; // r10
  _QWORD *v18; // r8
  int v19; // r9d
  int v20; // r15d
  int v21; // edx
  int v22; // ecx
  unsigned __int64 v23; // rdi
  unsigned int *v24; // rsi
  int v25; // eax
  int v26; // ecx
  int v27; // edx
  unsigned int *v28; // r8
  int v29; // ecx
  __int64 v30; // rax
  unsigned int *v31; // rdx
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  __int64 result; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // r9d
  unsigned __int64 v38; // rdi
  ULONGLONG v39; // r14
  int v40; // r10d
  ULONGLONG v41; // r11
  ULONGLONG v42; // r8
  ULONGLONG v43; // r12
  __int64 v44; // rdx
  ULONGLONG v45; // r9
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // edx
  int v50; // r8d
  __int16 v51; // ax
  unsigned int v52; // r10d
  __int64 v53; // r14
  __int64 v54; // rax
  int v55; // r8d
  int v56; // r9d
  __int64 v57; // rax
  int v58; // r8d
  int v59; // r9d
  __int64 v60; // rax
  __int64 v61; // r11
  __int64 v62; // rax
  unsigned int v63; // r8d
  unsigned __int64 v64; // rdx
  int v65; // eax
  unsigned __int64 v66; // r15
  unsigned __int64 v67; // r13
  int v68; // [rsp+40h] [rbp-F8h]
  ULONGLONG pullResult; // [rsp+48h] [rbp-F0h] BYREF
  int v70; // [rsp+50h] [rbp-E8h]
  int v71; // [rsp+54h] [rbp-E4h]
  __int64 v72; // [rsp+58h] [rbp-E0h]
  unsigned int *v73; // [rsp+60h] [rbp-D8h]
  int v74; // [rsp+68h] [rbp-D0h] BYREF
  int v75; // [rsp+6Ch] [rbp-CCh]
  unsigned __int64 v76; // [rsp+70h] [rbp-C8h]
  __int16 v77; // [rsp+78h] [rbp-C0h]
  int v78; // [rsp+7Ch] [rbp-BCh]
  int v79; // [rsp+80h] [rbp-B8h]
  unsigned __int64 v80; // [rsp+88h] [rbp-B0h]
  int v81; // [rsp+90h] [rbp-A8h]
  __int64 v82; // [rsp+98h] [rbp-A0h]
  unsigned int *v83; // [rsp+A0h] [rbp-98h]
  unsigned int *v84; // [rsp+A8h] [rbp-90h]
  unsigned int *v85; // [rsp+B0h] [rbp-88h]
  __int16 v86; // [rsp+B8h] [rbp-80h]
  __int64 v87; // [rsp+C0h] [rbp-78h]
  unsigned __int64 v88; // [rsp+C8h] [rbp-70h]
  int v89; // [rsp+D0h] [rbp-68h]
  __int64 v90; // [rsp+E0h] [rbp-58h]
  unsigned __int64 v91; // [rsp+E8h] [rbp-50h]
  _QWORD *v92; // [rsp+F0h] [rbp-48h]
  char v93; // [rsp+148h] [rbp+10h]
  char v95; // [rsp+158h] [rbp+20h]
  unsigned int v96; // [rsp+158h] [rbp+20h]
  signed __int16 ullSubtrahend; // [rsp+168h] [rbp+30h]
  unsigned int ullSubtrahenda; // [rsp+168h] [rbp+30h]

  v14 = a3;
  v90 = 0LL;
  v16 = 0;
  ullSubtrahend = 0;
  LOWORD(v17) = 0;
  v78 = 0;
  if ( a4 )
  {
    if ( a5 )
    {
      v18 = a7;
      if ( a7 )
      {
        if ( (unsigned int)(a8 - 1) <= 3 )
        {
          v19 = a12;
          v70 = a12;
          if ( (a12 & 0x8000) == 0 )
          {
            v20 = a12 & 0x1000;
            v81 = v20;
            v93 = v20 != 0;
            v21 = a12 & 0x8800;
            v75 = v21;
            if ( ((a12 & 0x1000) == 0 || v14) && v21 != 34816 && a1 )
            {
              v22 = a8;
              v79 = a8;
              v23 = a4;
              v24 = 0LL;
              v80 = 0LL;
              if ( a13 )
                *a13 = 0;
LABEL_12:
              if ( v23 )
              {
                v25 = v22;
                v26 = v22 - 1;
                v79 = v26;
                v89 = v26;
                if ( v25 )
                {
                  v17 = *v18;
                  v72 = v17;
                  v82 = v17;
                  if ( !v26 && a8 == 3 )
                  {
                    v80 = v23;
                    v91 = v23;
                    if ( !a9 )
                      return (unsigned int)-1073741811;
                    ullSubtrahend = *a9;
                    v86 = *a9;
                    v78 = 0;
                    v77 = 0;
                    if ( (~(_BYTE)v19 & 4) != 0 )
                    {
                      v17 = (unsigned __int16)a9[2];
                      v72 = v17;
                      v82 = v17;
                    }
                  }
                  if ( v21 == 34816 )
                  {
                    v27 = WORD2(v90);
                  }
                  else
                  {
                    if ( (a12 & 0x1000) != 0 )
                    {
                      if ( v23 + 24 < v23 )
                        goto LABEL_154;
                      pullResult = v23 + 24;
                      if ( v23 + 24 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
                        return (unsigned int)-1073741701;
                    }
                    v27 = *(unsigned __int16 *)(v23 + 12);
                  }
                  if ( v27 && (a12 & 0x1000) != 0 )
                  {
                    v48 = 8LL * (unsigned int)v27;
                    v85 = (unsigned int *)v48;
                    if ( v48 + v23 + 16 < v23 )
                      goto LABEL_154;
                    pullResult = v48 + v23 + 16;
                    if ( v23 + v48 + 16 > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
                      return (unsigned int)-1073741701;
                  }
                  v28 = (unsigned int *)(v23 + 16);
                  v85 = (unsigned int *)(v23 + 16);
                  v84 = (unsigned int *)(v23 + 16);
                  v29 = v27;
                  v71 = v27;
                  if ( (v17 & 0xFFFFFFFFFFFF0000uLL) == 0 )
                  {
                    if ( v27 )
                    {
                      if ( (a12 & 0x1000) != 0 )
                      {
                        if ( (unsigned int *)((char *)v28 + v27) < v28 )
                          goto LABEL_154;
                        pullResult = (ULONGLONG)v28 + v27;
                      }
                      v28 += 2 * v27;
                      v85 = v28;
                      v84 = v28;
                    }
                    v27 = HIWORD(v90);
                    if ( v75 != 34816 )
                      v27 = *(unsigned __int16 *)(v23 + 14);
                    v29 = v27;
                    v71 = v27;
                    if ( (a12 & 0x1000) != 0 )
                    {
                      v30 = 2LL * (unsigned int)v27;
                      v87 = v30 * 4;
                      if ( &v28[v30] < v28 )
                        goto LABEL_154;
                      pullResult = (ULONGLONG)&v28[v30];
                      v71 = v27;
                      if ( (unsigned __int64)&v28[v30] > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
                        return (unsigned int)-1073741701;
                      v29 = v27;
                    }
                  }
                  if ( !v27 )
                  {
                    v76 = 0LL;
LABEL_115:
                    switch ( a8 - v79 )
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
                  while ( !v80 || (v19 & 0x20) == 0 )
                  {
                    while ( 2 )
                    {
                      v23 = 0LL;
                      v76 = 0LL;
                      v31 = v28;
                      v84 = v28;
                      v32 = (unsigned __int64)&v28[2 * v29 - 2];
                      v88 = v32;
                      while ( 1 )
                      {
                        if ( (unsigned __int64)v31 > v32 )
                          goto LABEL_44;
                        LODWORD(v33) = v29 >> 1;
                        LODWORD(v87) = v29 >> 1;
                        if ( !(v29 >> 1) )
                          break;
                        v83 = v31;
                        v95 = v29 & 1;
                        LODWORD(v82) = v33 - 1;
                        v33 = (int)v33;
                        if ( (v29 & 1) == 0 )
                          v33 = (int)v33 - 1;
                        v83 = &v31[2 * v33];
                        result = LdrpResCompareResourceNames(a1, v31, v14, v17, a4, v83, v19, &v74, v68);
                        v68 = result;
                        if ( (int)result < 0 )
                          return result;
                        if ( !v74 )
                        {
                          v35 = v83[1];
                          if ( (int)v35 >= 0 )
                          {
                            v23 = 0LL;
                            v76 = 0LL;
LABEL_52:
                            if ( (a12 & 0x1000) != 0 )
                            {
                              if ( v80 )
                              {
                                v24 = (unsigned int *)(a4 + v35);
                                if ( a4 + v35 >= a4 )
                                {
                                  pullResult = a4 + v35;
                                  goto LABEL_56;
                                }
LABEL_154:
                                pullResult = -1LL;
                              }
                              return (unsigned int)-1073741701;
                            }
                            v24 = (unsigned int *)(a4 + v35);
LABEL_56:
                            v73 = v24;
                            goto LABEL_43;
                          }
LABEL_38:
                          if ( (a12 & 0x1000) != 0 )
                          {
                            if ( v80 )
                              return (unsigned int)-1073741701;
                            LODWORD(v35) = v35 & 0x7FFFFFFF;
                            v23 = v35 + a4;
                            if ( v35 + a4 < a4 )
                              goto LABEL_154;
                            pullResult = v35 + a4;
                          }
                          else
                          {
                            v23 = a4 + (v35 & 0xFFFFFFFF7FFFFFFFuLL);
                          }
                          v76 = v23;
                          goto LABEL_43;
                        }
                        if ( v74 < 0 )
                        {
                          v32 = (unsigned __int64)(v83 - 2);
                          v88 = (unsigned __int64)(v83 - 2);
                          if ( v95 )
                            v29 = v87;
                          else
                            v29 = v82;
                          v31 = v84;
                        }
                        else
                        {
                          v31 = v83 + 2;
                          v84 = v83 + 2;
                          v29 = v87;
                          v32 = v88;
                        }
                        v14 = a3;
                        v19 = v70;
                        v17 = v72;
                      }
                      if ( !v29 )
                        goto LABEL_44;
                      result = LdrpResCompareResourceNames(a1, v31, v14, v17, a4, v31, v19, &v74, v68);
                      v68 = result;
                      if ( (int)result < 0 )
                        return result;
                      if ( !v74 )
                      {
                        v35 = v84[1];
                        if ( (int)v35 >= 0 )
                          goto LABEL_52;
                        goto LABEL_38;
                      }
LABEL_43:
                      v14 = a3;
                      v19 = v70;
                      v17 = v72;
LABEL_44:
                      if ( !v80 || v24 )
                        goto LABEL_45;
                      if ( (v19 & 4) != 0 )
                        goto LABEL_66;
                      HIWORD(v49) = HIWORD(v78);
                      LOWORD(v49) = v78 + 1;
                      v78 = v49;
                      v77 = v49;
                      if ( (unsigned __int16)v49 < ullSubtrahend )
                      {
                        v17 = (unsigned __int16)a9[4 * (unsigned __int16)v49 + 2];
                        v72 = v17;
                        v82 = v17;
                        v28 = v85;
                        v29 = v71;
                        continue;
                      }
                      break;
                    }
                    if ( *((_BYTE *)a9 + 516) )
                    {
LABEL_45:
                      v18 = a7 + 1;
                      a7 = v18;
                      v92 = v18;
                      v21 = v75;
                      v22 = v79;
                      goto LABEL_12;
                    }
                    v19 |= 0x20u;
                    v70 = v19;
                    v28 = v85;
                    v29 = v71;
                  }
                  v23 = 0LL;
                  v76 = 0LL;
                  v36 = v28[1];
                  v24 = (unsigned int *)(a4 + v36);
                  if ( (a12 & 0x1000) != 0 )
                  {
                    if ( (unsigned __int64)v24 < a4 )
                      goto LABEL_154;
                    pullResult = a4 + v36;
                  }
                  v73 = (unsigned int *)(a4 + v36);
                  LODWORD(v17) = *v28;
                  v82 = *v28;
LABEL_66:
                  v21 = v75;
                }
              }
              v37 = v19 & 2;
              if ( v24 && !v37 )
              {
                if ( (a12 & 0x1000) != 0
                  && ((unsigned __int64)v24 <= a4 || (unsigned __int64)(v24 + 4) > v14 + (a1 & 0xFFFFFFFFFFFFFFFCuLL)) )
                {
                  goto LABEL_162;
                }
                if ( a13 )
                  *a13 = v17;
                v38 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
                if ( (a1 & 1) != 0 || v21 == 34816 )
                {
                  v50 = a5;
                  v51 = *(_WORD *)(a5 + 24);
                  if ( v51 == 267 )
                  {
                    v52 = *(_DWORD *)(a5 + 136);
                  }
                  else if ( v51 == 523 )
                  {
                    v52 = *(_DWORD *)(a5 + 152);
                  }
                  else
                  {
                    v52 = 0;
                  }
                  if ( !v52 )
                  {
                    v73 = 0LL;
                    return (unsigned int)-1073741687;
                  }
                  v53 = v52;
                  if ( (a12 & 0x1000) != 0 )
                  {
                    if ( v52 + v38 < v38 )
                      goto LABEL_154;
                    pullResult = v52 + v38;
                    if ( RtlULongLongSub(pullResult, a4, &pullResult) < 0 )
                      return (unsigned int)-1073741701;
                    v50 = a5;
                  }
                  v39 = v38 + v53 - a4;
                  v54 = LdrpSectionTableFromVirtualAddress((unsigned int)a1 & 0xFFFFFFFC, v14, v50, v37, v52, v93);
                  if ( !v54 )
                    goto LABEL_162;
                  if ( *v24 > *(_DWORD *)(v54 + 8) )
                  {
                    ullSubtrahenda = *(_DWORD *)(v54 + 12);
                    v57 = LdrpSectionTableFromVirtualAddress((unsigned int)a1 & 0xFFFFFFFC, a3, v55, v56, *v24, v93);
                    if ( !v57 )
                      goto LABEL_162;
                    v96 = *(_DWORD *)(v57 + 12);
                    v60 = LdrpSectionTableFromVirtualAddress((unsigned int)a1 & 0xFFFFFFFC, a3, v58, v59, v96, v93);
                    v61 = v60;
                    v40 = -1073741675;
                    if ( v60 )
                    {
                      if ( (a12 & 0x1000) != 0 )
                      {
                        v62 = *(unsigned int *)(v60 + 12);
                        v63 = v96;
                        v64 = v38 + v96 - v62;
                        if ( v64 < v38 )
                        {
                          pullResult = -1LL;
                          v65 = -1073741675;
                          v64 = -1LL;
                        }
                        else
                        {
                          pullResult = v38 + v96 - v62;
                          v65 = 0;
                        }
                        if ( v65 < 0 )
                          return (unsigned int)-1073741701;
                        if ( v64 + *(unsigned int *)(v61 + 20) < v64 )
                          goto LABEL_154;
                        pullResult = v64 + *(unsigned int *)(v61 + 20);
                      }
                      else
                      {
                        v63 = v96;
                      }
                      v66 = v38 + *(unsigned int *)(v61 + 20) - (unsigned __int64)*(unsigned int *)(v61 + 12) + v63;
                    }
                    else
                    {
                      v66 = 0LL;
                    }
                    if ( v81
                      && (RtlULongLongSub(*(unsigned int *)(v61 + 12), ullSubtrahenda, &pullResult) < 0
                       || RtlULongLongSub(pullResult, v66 - a4, &pullResult) < 0) )
                    {
                      return (unsigned int)-1073741701;
                    }
                    v39 += a4 + *(unsigned int *)(v61 + 12) - (unsigned __int64)ullSubtrahenda - v66;
                    v20 = v81;
                    goto LABEL_78;
                  }
                }
                else
                {
                  v39 = 0LL;
                }
                v40 = -1073741675;
LABEL_78:
                if ( !v20 )
                {
                  v42 = 0LL;
                  v44 = v24[1];
                  v43 = a3;
                  goto LABEL_85;
                }
                if ( RtlULongLongSub(*v24, v39, &pullResult) < 0 )
                  return (unsigned int)-1073741701;
                v42 = pullResult;
                if ( pullResult >= a4 - a1 )
                {
                  v43 = a3;
                  if ( pullResult <= a3 )
                  {
                    if ( (_DWORD)v41 )
                    {
                      v44 = (unsigned int)v41;
                      if ( v41 <= a3 && v41 + pullResult <= a3 )
                      {
LABEL_85:
                        if ( a10 )
                        {
                          if ( v20 )
                          {
                            v45 = v42 + v38;
                            if ( v42 + v38 < v38 )
                            {
                              pullResult = -1LL;
                              v46 = -1LL;
                            }
                            else
                            {
                              pullResult = v42 + v38;
                              v40 = 0;
                              v46 = v42 + v38;
                            }
                            if ( v40 < 0 || v46 < v38 || v46 > v43 + (a1 & 0xFFFFFFFFFFFFFFFCuLL) )
                              return (unsigned int)-1073741701;
                            *a10 = v45;
                          }
                          else
                          {
                            *a10 = v38 + *v24 - v39;
                          }
                        }
                        if ( a11 )
                        {
                          if ( v20 && a10 )
                          {
                            v47 = *a10 + v44;
                            if ( v47 < *a10 )
                              goto LABEL_154;
                            pullResult = *a10 + v44;
                            if ( v47 > v38 + v43 )
                              return (unsigned int)-1073741701;
                          }
                          *a11 = v44;
                        }
                        return v16;
                      }
                    }
                  }
                }
LABEL_162:
                v73 = 0LL;
                return (unsigned int)-1073741701;
              }
              if ( v23 && v37 )
              {
                if ( (a12 & 0x1000) != 0 )
                {
                  if ( v23 + 24 < v23 )
                  {
                    pullResult = -1LL;
LABEL_152:
                    v76 = 0LL;
                    return (unsigned int)-1073741701;
                  }
                  pullResult = v23 + 24;
                  v67 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
                  if ( v23 + 24 > v14 + v67 )
                    goto LABEL_152;
                }
                else
                {
                  v67 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
                }
                if ( a10 )
                {
                  if ( (a12 & 0x1000) != 0 && (v23 < v67 || v23 > v14 + v67) )
                    return (unsigned int)-1073741701;
                  *a10 = v23;
                }
                return v16;
              }
              goto LABEL_115;
            }
          }
        }
      }
    }
  }
  return 3221225485LL;
}
