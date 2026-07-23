/*
 * XREFs of LocalGetRelativeAttributeForString @ 0x1408AA564
 * Callers:
 *     LocalGetAclForString @ 0x1406B0F2C (LocalGetAclForString.c)
 * Callees:
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     iswspace @ 0x1401961B0 (iswspace.c)
 *     wcstoxq @ 0x140198288 (wcstoxq.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     LocalGetSidForString @ 0x1406B154C (LocalGetSidForString.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 *     DecodeAttributeName @ 0x1408A81F0 (DecodeAttributeName.c)
 *     GetDigitFromChar @ 0x1408A8910 (GetDigitFromChar.c)
 *     GetFlags @ 0x1408A898C (GetFlags.c)
 *     GetValueType @ 0x1408A9C6C (GetValueType.c)
 *     IsLegalAttributeChar2 @ 0x1408A9DCC (IsLegalAttributeChar2.c)
 */

__int64 __fastcall LocalGetRelativeAttributeForString(
        _WORD *a1,
        _QWORD *a2,
        unsigned int **a3,
        unsigned int *a4,
        __int64 a5,
        char a6,
        char a7,
        char a8)
{
  unsigned int *v8; // r12
  unsigned int v9; // esi
  bool v10; // zf
  unsigned int ValueType; // edi
  wint_t *v12; // rdi
  unsigned __int16 *v13; // rbx
  __int16 v14; // cx
  unsigned int v15; // r9d
  unsigned int v16; // ecx
  int v17; // eax
  wint_t *v18; // rbx
  __int64 v19; // rax
  unsigned int v20; // r12d
  unsigned int v21; // r14d
  wint_t *i; // rbx
  wint_t *v23; // rsi
  int v25; // r15d
  PWSTR v26; // rsi
  wint_t *v27; // rbx
  wint_t v28; // ax
  wint_t k; // cx
  unsigned int v30; // r8d
  wint_t v31; // r10
  unsigned int v32; // r11d
  unsigned int v33; // eax
  unsigned int v34; // eax
  wint_t m; // cx
  wint_t j; // cx
  PSID v37; // r14
  wint_t *v38; // rbx
  ULONG v39; // eax
  unsigned int v40; // ecx
  int v41; // edx
  unsigned __int64 v42; // rcx
  unsigned int *v43; // rax
  unsigned int v44; // r14d
  wint_t v45; // ax
  _WORD *v46; // rbx
  unsigned int v47; // edx
  unsigned int v48; // ecx
  int v49; // eax
  unsigned int v50; // ecx
  unsigned int v51; // edx
  int v52; // eax
  wint_t *v53; // rbx
  unsigned __int64 v54; // rax
  unsigned int v55; // ecx
  int v56; // eax
  bool v57; // cf
  wint_t v58; // ax
  unsigned __int64 v59; // rax
  wint_t *v60; // rbx
  unsigned __int64 v61; // rax
  wint_t *v62; // rbx
  unsigned __int64 v63; // rax
  unsigned int v64; // ecx
  unsigned int v65; // edx
  size_t v66; // r8
  unsigned int v67; // eax
  unsigned int v68; // r14d
  PVOID v69; // rdx
  unsigned __int64 *v70; // r12
  int v71; // r15d
  int v72; // r15d
  int v73; // r15d
  int v74; // r15d
  int v75; // r15d
  wint_t v76; // ax
  int v77; // ebx
  __int16 *ii; // r9
  unsigned int v79; // r8d
  wint_t *v80; // r9
  unsigned int v81; // r8d
  __int16 *v82; // r8
  __int64 v83; // r8
  __int64 v84; // r8
  __int64 v85; // r10
  __int64 v86; // r11
  _BYTE *v87; // r10
  wint_t v88; // cx
  int v89; // r15d
  wint_t n; // cx
  PSID v91; // rbx
  ULONG v92; // eax
  __int64 v93; // rcx
  WCHAR *v94; // r15
  unsigned int v95; // edx
  WCHAR v96; // cx
  WCHAR v97; // ax
  size_t v98; // rbx
  unsigned __int64 v99; // rax
  int v100; // r8d
  unsigned __int64 v101; // rax
  int v102; // r8d
  unsigned int *v103; // rcx
  int v104; // [rsp+30h] [rbp-61h]
  int v105; // [rsp+38h] [rbp-59h]
  unsigned int *v106; // [rsp+48h] [rbp-49h]
  unsigned int v107; // [rsp+50h] [rbp-41h]
  unsigned __int16 v108; // [rsp+54h] [rbp-3Dh] BYREF
  int v109; // [rsp+58h] [rbp-39h] BYREF
  int v110; // [rsp+5Ch] [rbp-35h]
  unsigned int v111; // [rsp+60h] [rbp-31h]
  PWSTR EndPointer; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v113[4]; // [rsp+70h] [rbp-21h] BYREF
  unsigned int v114; // [rsp+74h] [rbp-1Dh] BYREF
  unsigned int v115; // [rsp+78h] [rbp-19h]
  PSID Sid; // [rsp+80h] [rbp-11h] BYREF
  PVOID P; // [rsp+88h] [rbp-9h] BYREF
  __int64 v118; // [rsp+90h] [rbp-1h]
  char v119; // [rsp+D8h] [rbp+47h] BYREF
  _QWORD *v120; // [rsp+E0h] [rbp+4Fh]
  unsigned int **v121; // [rsp+E8h] [rbp+57h]
  unsigned int *v122; // [rsp+F0h] [rbp+5Fh]

  v122 = a4;
  v121 = a3;
  v120 = a2;
  EndPointer = 0LL;
  v8 = 0LL;
  v106 = 0LL;
  v9 = 0;
  P = 0LL;
  v108 = 0;
  v114 = 0;
  v107 = 0;
  v110 = 0;
  a6 = 0;
  v119 = 0;
  a7 = 0;
  Sid = 0LL;
  if ( !a1 || !a2 || !a3 || !a4 )
  {
    ValueType = 87;
    goto LABEL_43;
  }
  v10 = *a1 == 40;
  *a3 = 0LL;
  *a4 = 0;
  if ( !v10 )
    return 1336;
  v12 = a1 + 1;
  if ( iswspace(a1[1]) )
  {
    do
      ++v12;
    while ( iswspace(*v12) );
    v8 = 0LL;
  }
  if ( *v12 != 34 )
    return 1336;
  v13 = v12 + 1;
  while ( IsLegalAttributeChar2(*v13) && v14 )
  {
    v16 = v9 + 1;
    ++v13;
    v17 = -1;
    if ( v9 + 1 >= v9 )
      v17 = v9 + 1;
    v9 = v17;
    if ( v16 < v15 )
      return 534;
  }
  if ( v14 != 34 || !v9 )
    return 1336;
  v18 = v13 + 1;
  ValueType = DecodeAttributeName((__int64)(v12 + 1), 2 * v9, &P);
  if ( !ValueType )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *((_WORD *)P + v19) );
    v20 = -1;
    v118 = (unsigned int)(v19 + 1);
    if ( (unsigned int)(2 * v118) < 0xFFFFFFEC )
      v20 = 2 * v118 + 20;
    v111 = v20;
    v21 = v20;
    v115 = v20;
    if ( (unsigned int)(2 * v118) >= 0xFFFFFFEC )
      goto LABEL_26;
    while ( iswspace(*v18) )
      ++v18;
    if ( *v18 != 44 )
      goto LABEL_31;
    do
      ++v18;
    while ( iswspace(*v18) );
    ValueType = GetValueType(v18, &EndPointer, (__int16 *)&v108);
    if ( ValueType )
      goto LABEL_42;
    for ( i = EndPointer; iswspace(*i); ++i )
      ;
    if ( *i != 44 )
      goto LABEL_31;
    do
      ++i;
    while ( iswspace(*i) );
    ValueType = GetFlags(i, &EndPointer, &v114);
    if ( ValueType )
    {
LABEL_42:
      v8 = 0LL;
      goto LABEL_43;
    }
    v23 = EndPointer;
    if ( (v114 & 0xFFC0) != 0 )
    {
      ValueType = 1336;
      goto LABEL_42;
    }
    if ( iswspace(*EndPointer) )
    {
      do
        ++v23;
      while ( iswspace(*v23) );
    }
    if ( *v23 != 44 )
      goto LABEL_31;
    v25 = v108;
    v26 = v23 + 1;
    v27 = v26;
    if ( v108 == 1 )
    {
      v58 = *v26;
      if ( *v26 )
      {
        while ( 1 )
        {
          v109 = 0;
          v61 = wcstoxq(0LL, v27, &EndPointer, 0, 0, &v109);
          if ( EndPointer == v27 && !v61 )
            goto LABEL_149;
          if ( v109 )
          {
            ValueType = 534;
            goto LABEL_42;
          }
          ++v107;
          v62 = EndPointer;
          if ( iswspace(*EndPointer) )
          {
            do
              ++v62;
            while ( iswspace(*v62) );
            v20 = v21;
          }
          v58 = *v62;
          if ( *v62 != 44 )
            break;
          v27 = v62 + 1;
          if ( !*v27 )
            goto LABEL_31;
        }
      }
    }
    else
    {
      if ( v108 != 2 )
      {
        if ( v108 == 3 )
        {
          v44 = 0;
          v45 = *v26;
          if ( *v26 )
          {
            while ( 1 )
            {
              if ( iswspace(v45) )
              {
                do
                  ++v27;
                while ( iswspace(*v27) );
                v20 = v111;
              }
              if ( *v27 != 34 )
                goto LABEL_31;
              v46 = v27 + 1;
              while ( *v46 != 34 )
              {
                v47 = v44;
                if ( !*v46 )
                  break;
                v48 = v44 + 1;
                ++v46;
                v49 = -1;
                if ( v44 + 1 >= v44 )
                  v49 = v44 + 1;
                v44 = v49;
                if ( v48 < v47 )
                  goto LABEL_26;
              }
              v50 = v44 + 1;
              v51 = v44;
              v52 = -1;
              if ( v44 + 1 >= v44 )
                v52 = v44 + 1;
              v44 = v52;
              if ( v50 < v51 )
                goto LABEL_26;
              if ( *v46 != 34 )
                goto LABEL_31;
              ++v107;
              v53 = v46 + 1;
              if ( iswspace(*v53) )
              {
                do
                  ++v53;
                while ( iswspace(*v53) );
                v20 = v111;
              }
              v45 = *v53;
              if ( *v53 != 44 )
                break;
              v27 = v53 + 1;
              v45 = *v27;
              if ( !*v27 )
                goto LABEL_31;
            }
          }
          if ( v45 != 41 )
          {
LABEL_31:
            ValueType = 1336;
            goto LABEL_27;
          }
          v41 = -1;
          v54 = 2LL * v44;
          if ( v54 > 0xFFFFFFFF )
            goto LABEL_26;
          v55 = v20 + v54;
          v56 = -1;
          if ( v55 >= v20 )
            v56 = v55;
          v57 = v55 < v115;
          goto LABEL_155;
        }
        if ( v108 == 5 )
        {
          v28 = *v26;
          if ( *v26 )
          {
            while ( 1 )
            {
              for ( j = v28; iswspace(j); j = *v27 )
                ++v27;
              ValueType = LocalGetSidForString(v27, &Sid, &EndPointer, &a6, a5, v104, v105, a8);
              if ( ValueType )
                goto LABEL_42;
              v37 = Sid;
              if ( !Sid )
                goto LABEL_42;
              v38 = EndPointer;
              ++v107;
              v39 = RtlLengthSid(Sid);
              v40 = v39 + v20;
              if ( v39 + v20 < v20 || v40 + 4 < v40 )
                goto LABEL_26;
              v20 = v40 + 4;
              if ( a6 )
              {
                ExFreePoolWithTag(v37, 0);
                Sid = 0LL;
              }
              if ( iswspace(*v38) )
              {
                do
                  ++v38;
                while ( iswspace(*v38) );
                v25 = v108;
              }
              v28 = *v38;
              if ( *v38 != 44 )
                goto LABEL_92;
              v27 = v38 + 1;
              v28 = *v27;
              if ( !*v27 )
                goto LABEL_31;
            }
          }
          goto LABEL_92;
        }
        if ( v108 != 6 )
        {
          if ( v108 != 16 )
            goto LABEL_31;
          v28 = *v26;
          if ( *v26 )
          {
            while ( 1 )
            {
              for ( k = v28; iswspace(k); k = *v27 )
                ++v27;
              while ( GetDigitFromChar(*v27, v113) )
              {
                ++v27;
                if ( v30 < v32 )
                  goto LABEL_64;
              }
              ++v107;
              v33 = (v30 >> 1) + v20;
              if ( v33 < v20 || (v34 = v33 + 4, (v30 >> 1) + v20 + 4 < (v30 >> 1) + v20) )
              {
LABEL_64:
                ValueType = 534;
LABEL_65:
                v8 = 0LL;
                goto LABEL_43;
              }
              v20 = v34;
              for ( m = v31; iswspace(m); m = *v27 )
                ++v27;
              if ( *v27 != 44 )
                break;
              v28 = *++v27;
              if ( !*v27 )
                goto LABEL_31;
            }
            if ( *v27 != 41 )
            {
              ValueType = 1336;
              goto LABEL_65;
            }
LABEL_93:
            v41 = -1;
LABEL_94:
            v42 = 4LL * (v107 - 1);
            if ( v42 <= 0xFFFFFFFF && v20 + (unsigned int)v42 >= v20 )
            {
              if ( v20 + (unsigned int)v42 + 3 < v20 + (unsigned int)v42 )
                ValueType = 534;
              else
                v41 = v20 + v42 + 3;
              v115 = v41 & 0xFFFFFFFC;
              v43 = (unsigned int *)SddlpAlloc(v41 & 0xFFFFFFFC);
              v106 = v43;
              v8 = v43;
              if ( !v43 )
              {
                ValueType = 8;
                goto LABEL_43;
              }
              v65 = v118;
              *((_WORD *)v43 + 2) = v108;
              *((_WORD *)v43 + 3) = 0;
              v43[2] = v114;
              v66 = 2LL * v65;
              v67 = 4 * v107 + 16;
              v8[3] = v107;
              v68 = v67 + 2 * v65;
              v69 = P;
              *v8 = v67;
              v111 = v68;
              memmove((char *)v8 + v67, v69, v66);
              v70 = (unsigned __int64 *)((char *)v106 + v68);
              v71 = v25 - 1;
              if ( !v71 )
              {
                v76 = *v26;
                if ( *v26 )
                {
                  while ( 1 )
                  {
                    v109 = 0;
                    v101 = wcstoxq(0LL, v26, &EndPointer, 0, 0, &v109);
                    if ( EndPointer == v26 && !v101 )
                      goto LABEL_31;
                    if ( v109 )
                    {
LABEL_240:
                      ValueType = 534;
                      goto LABEL_27;
                    }
                    v102 = v110;
                    v106[v110 + 4] = v68;
                    v68 += 8;
                    *v70 = v101;
                    v26 = EndPointer;
                    v70 = (unsigned __int64 *)((char *)v106 + v68);
                    v110 = v102 + 1;
                    while ( iswspace(*v26) )
                      ++v26;
                    v76 = *v26;
                    if ( *v26 != 44 )
                      goto LABEL_238;
                    if ( !*++v26 )
                      goto LABEL_31;
                  }
                }
                goto LABEL_238;
              }
              v72 = v71 - 1;
              if ( !v72 )
                goto LABEL_218;
              v73 = v72 - 1;
              if ( !v73 )
              {
                v76 = *v26;
                if ( *v26 )
                {
                  while ( 1 )
                  {
                    if ( iswspace(v76) )
                    {
                      do
                        ++v26;
                      while ( iswspace(*v26) );
                      v68 = v111;
                    }
                    if ( *v26 != 34 )
                      goto LABEL_31;
                    v94 = v26 + 1;
                    v95 = 0;
                    if ( v26[1] != 34 )
                    {
                      v96 = v26[1];
                      do
                      {
                        v97 = v96;
                        if ( !v96 )
                          break;
                        ++v94;
                        ++v95;
                        v97 = *v94;
                        v96 = *v94;
                      }
                      while ( *v94 != 34 );
                      if ( v97 != 34 )
                        goto LABEL_31;
                    }
                    v106[v110 + 4] = v68;
                    v68 += 2 * v95 + 2;
                    v111 = v68;
                    v98 = 2LL * v95;
                    memmove(v70, v26 + 1, v98);
                    ++v110;
                    v26 = v94 + 1;
                    *(_WORD *)((char *)v70 + v98) = 0;
                    v70 = (unsigned __int64 *)((char *)v106 + v68);
                    if ( iswspace(v94[1]) )
                    {
                      do
                        ++v26;
                      while ( iswspace(*v26) );
                      v68 = v111;
                    }
                    v76 = *v26;
                    if ( *v26 != 44 )
                      goto LABEL_238;
                    v76 = *++v26;
                    if ( !*v26 )
                      goto LABEL_31;
                  }
                }
                goto LABEL_238;
              }
              v74 = v73 - 2;
              if ( !v74 )
              {
                v76 = *v26;
                if ( *v26 )
                {
                  v89 = 0;
                  while ( 1 )
                  {
                    for ( n = v76; iswspace(n); n = *v26 )
                      ++v26;
                    ValueType = LocalGetSidForString(v26, &Sid, &EndPointer, &a6, a5, v104, v105, a8);
                    if ( ValueType )
                      goto LABEL_27;
                    v91 = Sid;
                    if ( !Sid )
                      goto LABEL_27;
                    v92 = RtlLengthSid(Sid);
                    v106[v89 + 4] = v68;
                    v93 = v68 + 4;
                    v68 = v92 + v93;
                    v111 = v92 + v93;
                    *(_DWORD *)v70 = v92;
                    memmove((char *)v106 + v93, v91, v92);
                    ++v89;
                    v70 = (unsigned __int64 *)((char *)v106 + v68);
                    v26 = EndPointer;
                    if ( a6 )
                    {
                      ExFreePoolWithTag(v91, 0);
                      Sid = 0LL;
                    }
                    if ( iswspace(*v26) )
                    {
                      do
                        ++v26;
                      while ( iswspace(*v26) );
                      v68 = v111;
                    }
                    v76 = *v26;
                    if ( *v26 != 44 )
                      goto LABEL_238;
                    v76 = *++v26;
                    if ( !*v26 )
                      goto LABEL_31;
                  }
                }
                goto LABEL_238;
              }
              v75 = v74 - 1;
              if ( v75 )
              {
                if ( v75 != 10 )
                  goto LABEL_31;
                v76 = *v26;
                if ( *v26 )
                {
                  v77 = 0;
                  while ( 2 )
                  {
                    if ( iswspace(v76) )
                    {
                      do
                        ++v26;
                      while ( iswspace(*v26) );
                      v77 = v110;
                    }
                    for ( ii = (__int16 *)v26; GetDigitFromChar(*ii, v113); ii = (__int16 *)(v80 + 1) )
                      ;
                    v81 = v79 >> 1;
                    v106[v77 + 4] = v68;
                    *(_DWORD *)v70 = v81;
                    v68 += v81 + 4;
                    v8 = v106;
                    v82 = (__int16 *)(v80 - 1);
                    while ( v82 > (__int16 *)v26 )
                    {
                      if ( !GetDigitFromChar(*v82, &v119) || !GetDigitFromChar(*(_WORD *)(v83 - 2), &a7) )
                        goto LABEL_186;
                      v82 = (__int16 *)(v84 - 4);
                      *(_BYTE *)(v86 + v85) = v119 | (16 * a7);
                    }
                    if ( v82 == (__int16 *)v26 )
                    {
                      if ( !GetDigitFromChar(*v82, &v119) )
                      {
LABEL_186:
                        ValueType = 1336;
                        goto LABEL_43;
                      }
                      *v87 = v119;
                    }
                    v88 = *v80;
                    v26 = v80;
                    v70 = (unsigned __int64 *)((char *)v106 + v68);
                    v110 = ++v77;
                    while ( iswspace(v88) )
                      v88 = *++v26;
                    v76 = *v26;
                    if ( *v26 == 44 )
                    {
                      v76 = *++v26;
                      if ( *v26 )
                        continue;
                      goto LABEL_31;
                    }
                    break;
                  }
                }
              }
              else
              {
LABEL_218:
                v76 = *v26;
                if ( *v26 )
                {
                  while ( 1 )
                  {
                    v109 = 0;
                    v99 = wcstoxq(0LL, v26, &EndPointer, 0, 1, &v109);
                    if ( EndPointer == v26 && !v99 )
                      goto LABEL_31;
                    if ( v109 )
                      goto LABEL_240;
                    v100 = v110;
                    v106[v110 + 4] = v68;
                    v68 += 8;
                    *v70 = v99;
                    v26 = EndPointer;
                    v70 = (unsigned __int64 *)((char *)v106 + v68);
                    v110 = v100 + 1;
                    while ( iswspace(*v26) )
                      ++v26;
                    v76 = *v26;
                    if ( *v26 != 44 )
                      break;
                    if ( !*++v26 )
                      goto LABEL_31;
                  }
                }
              }
LABEL_238:
              if ( v76 == 41 )
              {
                v103 = v122;
                v8 = v106;
                *v121 = v106;
                *v103 = v115;
                *v120 = v26 + 1;
                goto LABEL_43;
              }
              goto LABEL_31;
            }
LABEL_26:
            ValueType = 534;
LABEL_27:
            v8 = v106;
            goto LABEL_43;
          }
LABEL_92:
          if ( v28 != 41 )
            goto LABEL_31;
          goto LABEL_93;
        }
      }
      v58 = *v26;
      if ( *v26 )
      {
        while ( 1 )
        {
          v109 = 0;
          v59 = wcstoxq(0LL, v27, &EndPointer, 0, 1, &v109);
          if ( EndPointer == v27 && !v59 )
            break;
          if ( v109 )
            goto LABEL_26;
          if ( v108 == 6 && v59 > 1 )
            goto LABEL_31;
          ++v107;
          v60 = EndPointer;
          if ( iswspace(*EndPointer) )
          {
            do
              ++v60;
            while ( iswspace(*v60) );
            v20 = v21;
          }
          v58 = *v60;
          if ( *v60 != 44 )
            goto LABEL_150;
          v27 = v60 + 1;
          if ( !*v27 )
            goto LABEL_31;
        }
LABEL_149:
        ValueType = 1336;
        v8 = 0LL;
        goto LABEL_43;
      }
    }
LABEL_150:
    if ( v58 != 41 )
      goto LABEL_31;
    v41 = -1;
    v63 = 8LL * v107;
    if ( v63 > 0xFFFFFFFF )
      goto LABEL_26;
    v64 = v20 + v63;
    v56 = -1;
    if ( v64 >= v20 )
      v56 = v64;
    v57 = v64 < v21;
LABEL_155:
    v20 = v56;
    if ( v57 )
      goto LABEL_26;
    goto LABEL_94;
  }
LABEL_43:
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( ValueType && v8 )
    ExFreePoolWithTag(v8, 0);
  return ValueType;
}
