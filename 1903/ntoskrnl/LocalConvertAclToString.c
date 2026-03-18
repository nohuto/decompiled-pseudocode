/*
 * XREFs of LocalConvertAclToString @ 0x1405B28CC
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1405B22DC (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x1401A4FE0 (_ultow_s.c)
 *     wcscpy_s @ 0x1401A6530 (wcscpy_s.c)
 *     SddlpFree @ 0x1405B2F4C (SddlpFree.c)
 *     LookupAceFlagsInTable @ 0x1405B2F68 (LookupAceFlagsInTable.c)
 *     LocalGetAceCondition @ 0x1405B3018 (LocalGetAceCondition.c)
 *     RtlNtStatusToDosError @ 0x1406BCDF0 (RtlNtStatusToDosError.c)
 *     LookupSidInTable @ 0x1406DC7D4 (LookupSidInTable.c)
 *     LookupAccessMaskInTable @ 0x1406DD874 (LookupAccessMaskInTable.c)
 *     LookupAceTypeInTable @ 0x1406EA660 (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x1406EC2DC (SddlpAlloc.c)
 *     LocalConvertSidToStringSidW @ 0x1408E3814 (LocalConvertSidToStringSidW.c)
 *     SddlpFreeUuidString @ 0x1408E3FD0 (SddlpFreeUuidString.c)
 *     SddlpUuidToString @ 0x1408E415C (SddlpUuidToString.c)
 */

__int64 __fastcall LocalConvertAclToString(
        __int64 a1,
        char a2,
        char a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  __int64 v10; // r14
  unsigned int v11; // edi
  unsigned __int16 v12; // ax
  __int64 v13; // r13
  char *v14; // r15
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned int v18; // ebx
  int v19; // edi
  unsigned __int8 v20; // al
  unsigned int v21; // edi
  char *v22; // rbx
  ULONG AceCondition; // esi
  int v24; // ebx
  _QWORD *v25; // rax
  unsigned int v26; // eax
  int v27; // edi
  __int64 *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  wchar_t **v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rax
  unsigned __int64 v38; // rbx
  __int64 *v39; // r15
  _WORD *v40; // rdi
  unsigned __int64 v41; // rbx
  wchar_t *v42; // rdi
  rsize_t v43; // rbx
  const wchar_t **v44; // rax
  const wchar_t **v45; // rsi
  __int64 v46; // rax
  char *v47; // r15
  unsigned int v48; // esi
  wchar_t *v49; // rdi
  rsize_t v50; // rbx
  __int64 v51; // r15
  char *v52; // rsi
  rsize_t v53; // rbx
  wchar_t *v54; // rdi
  __int64 v55; // r12
  unsigned __int8 v56; // al
  unsigned int v57; // r14d
  int v58; // eax
  __int64 v59; // rax
  rsize_t v60; // rbx
  wchar_t *v61; // rdi
  rsize_t v62; // rbx
  wchar_t *v63; // rdi
  __int64 v64; // r12
  rsize_t v65; // rbx
  const wchar_t *v66; // r14
  wchar_t *v67; // rdi
  __int64 v68; // rax
  wchar_t *v69; // r14
  wchar_t *v70; // rdi
  unsigned __int64 v71; // rbx
  char *v72; // rcx
  unsigned int v73; // r15d
  unsigned int v74; // ebx
  __int64 v75; // r15
  const wchar_t **v77; // rax
  const wchar_t **v78; // r14
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned int v81; // ecx
  __int64 v82; // rcx
  bool v83; // cc
  unsigned int v84; // eax
  int v85; // r8d
  __int64 v86; // r9
  __int64 v87; // rax
  __int64 v88; // rbx
  wchar_t *v89; // rax
  NTSTATUS v90; // eax
  int v91; // ecx
  unsigned int v92; // r8d
  __int64 v93; // rdx
  const wchar_t **v94; // rax
  const wchar_t **v95; // r14
  unsigned int v96; // eax
  const wchar_t **v97; // rax
  const wchar_t **v98; // r15
  __int64 v99; // rax
  __int64 v100; // r14
  int v101; // eax
  __int64 v102; // r14
  rsize_t v103; // rbx
  wchar_t *v104; // rdi
  __int64 v105; // rax
  unsigned int Val; // [rsp+58h] [rbp-69h]
  wchar_t Str2[2]; // [rsp+5Ch] [rbp-65h] BYREF
  int v108; // [rsp+60h] [rbp-61h]
  __int64 v109; // [rsp+68h] [rbp-59h]
  ULONG v110; // [rsp+70h] [rbp-51h] BYREF
  wchar_t *v111; // [rsp+78h] [rbp-49h] BYREF
  PSID Sid; // [rsp+80h] [rbp-41h]
  char *v113; // [rsp+88h] [rbp-39h]
  __int64 v114; // [rsp+90h] [rbp-31h] BYREF
  wchar_t *Src; // [rsp+98h] [rbp-29h] BYREF
  __int64 v116; // [rsp+A0h] [rbp-21h]
  int v117; // [rsp+A8h] [rbp-19h]
  __int64 v118; // [rsp+B0h] [rbp-11h]
  __int64 v119; // [rsp+B8h] [rbp-9h]
  __int64 v120; // [rsp+C0h] [rbp-1h]
  unsigned int v123; // [rsp+140h] [rbp+7Fh]

  v123 = 0;
  v10 = a1;
  v117 = 0;
  v11 = 0;
  Val = 0;
  Sid = 0LL;
  v114 = 0LL;
  v111 = 0LL;
  if ( !a4 || !a5 )
    return 87LL;
  if ( !a2 )
  {
    *a4 = 0LL;
    *a5 = 0;
    return 0LL;
  }
  if ( !a1 )
  {
    *a4 = 0LL;
    *a5 = 36;
    v80 = SddlpAlloc(0x24uLL);
    *a4 = v80;
    if ( !v80 )
    {
      v81 = 8;
LABEL_96:
      *a5 = 0;
      return v81;
    }
    *(_OWORD *)v80 = *(_OWORD *)L"NO_ACCESS_CONTROL";
    *(_OWORD *)(v80 + 16) = *(_OWORD *)L"S_CONTROL";
    *(_DWORD *)(v80 + 32) = *(_DWORD *)L"L";
    return 0LL;
  }
  v12 = *(_WORD *)(a1 + 4);
  if ( !v12 )
  {
    *a4 = 0LL;
    v81 = 0;
    goto LABEL_96;
  }
  v108 = 2 - (a3 != 0);
  v109 = SddlpAlloc(8LL * v12);
  if ( !v109 )
    return 8LL;
  v118 = SddlpAlloc(*(unsigned __int16 *)(v10 + 4));
  if ( !v118 )
  {
    v82 = v109;
LABEL_98:
    SddlpFree(v82);
    return 8LL;
  }
  v116 = SddlpAlloc(4LL * *(unsigned __int16 *)(v10 + 4));
  if ( !v116 )
  {
    SddlpFree(v109);
    v82 = v118;
    goto LABEL_98;
  }
  v13 = 0LL;
  v113 = (char *)(v10 + 8);
  v14 = (char *)(v10 + 8);
  if ( !*(_WORD *)(v10 + 4) )
  {
LABEL_130:
    AceCondition = 1336;
    goto LABEL_43;
  }
  while ( 1 )
  {
    v11 += 2;
    v123 = v11;
    v15 = (__int64 *)LookupAceTypeInTable(0LL);
    if ( !v15 )
    {
LABEL_116:
      AceCondition = 1336;
      goto LABEL_42;
    }
    v16 = *v15;
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(v16 + 2 * v17) );
    v18 = 0;
    v19 = v11 + 2 + 2 * v17;
    do
    {
      if ( ((unsigned __int8)v14[1] & (unsigned __int8)(1 << v18)) != 0 )
      {
        v31 = (__int64 *)LookupAceFlagsInTable(0LL);
        if ( v31 )
        {
          v32 = *v31;
          v33 = -1LL;
          do
            ++v33;
          while ( *(_WORD *)(v32 + 2 * v33) );
          v19 += 2 * v33;
        }
      }
      ++v18;
    }
    while ( v18 < 8 );
    v20 = *v14;
    v11 = v19 + 2;
    v123 = v11;
    *(_DWORD *)Str2 = v11;
    if ( v20 > 0xBu )
    {
      if ( v20 != 13 )
      {
        if ( v20 <= 0x10u )
          goto LABEL_116;
        v83 = v20 <= 0x15u;
        goto LABEL_115;
      }
LABEL_19:
      v21 = *((_DWORD *)v14 + 1);
      v22 = v14 + 8;
      Sid = v14 + 8;
      Val = v21;
      goto LABEL_20;
    }
    if ( v20 != 11 )
    {
      if ( v20 <= 3u )
        goto LABEL_19;
      if ( v20 <= 4u )
        goto LABEL_116;
      if ( v20 > 8u )
      {
        v83 = v20 <= 0xAu;
LABEL_115:
        if ( !v83 )
          goto LABEL_116;
        goto LABEL_19;
      }
    }
    v84 = *((_DWORD *)v14 + 2) & 1;
    Val = *((_DWORD *)v14 + 1);
    v85 = *((_DWORD *)v14 + 2) & 2;
    v86 = 16LL * v84;
    v22 = &v14[v86 + (v85 != 0 ? 28LL : 12LL)];
    Sid = v22;
    if ( (-(__int64)(v84 != 0) & (unsigned __int64)(v14 + 12)) != 0 )
    {
      v11 += 72;
      *(_DWORD *)Str2 = v11;
    }
    if ( v85 )
      v87 = (__int64)&v14[v86 + 12];
    else
      v87 = 0LL;
    if ( v87 )
      *(_DWORD *)Str2 = v11 + 72;
LABEL_20:
    if ( v111 )
    {
      SddlpFree(v111);
      v111 = 0LL;
    }
    v110 = 0;
    AceCondition = LocalGetAceCondition(v14, v22, &v111, &v110);
    if ( AceCondition )
      break;
    v24 = 0;
    *(_DWORD *)(v116 + 4LL * (unsigned int)v13) = 0;
    v25 = (_QWORD *)LookupAccessMaskInTable(0LL);
    if ( !v25 )
    {
      v26 = Val;
      v27 = 0;
      while ( 1 )
      {
        if ( (v26 & (1 << v27)) != 0 )
        {
          v28 = (__int64 *)LookupAccessMaskInTable(0LL);
          if ( !v28 )
          {
            v24 = 20;
            *(_DWORD *)(v116 + 4LL * (unsigned int)v13) = 2;
            goto LABEL_37;
          }
          v29 = *v28;
          v30 = -1LL;
          do
            ++v30;
          while ( *(_WORD *)(v29 + 2 * v30) );
          v24 += 2 * v30;
          v26 = Val;
        }
        if ( (unsigned int)++v27 >= 0x20 )
          goto LABEL_37;
      }
    }
    v88 = -1LL;
    *(_DWORD *)(v116 + 4LL * (unsigned int)v13) = 1;
    do
      ++v88;
    while ( *(_WORD *)(*v25 + 2 * v88) );
    v24 = 2 * v88;
LABEL_37:
    v11 = v24 + *(_DWORD *)Str2 + 6;
    v123 = v11;
    v34 = LookupSidInTable(0LL, Sid, Str2, a9, (__int64)&v114);
    v35 = (wchar_t **)(v109 + 8LL * (unsigned int)v13);
    if ( v34 )
    {
      v36 = v34 + 2;
      *v35 = (wchar_t *)(v34 + 2);
    }
    else
    {
      if ( v114 )
      {
        v89 = (wchar_t *)SddlpAlloc(6uLL);
        *v35 = v89;
        if ( !v89 )
        {
          AceCondition = 8;
          goto LABEL_129;
        }
        wcscpy_s(v89, 3uLL, L"SA");
      }
      else
      {
        v90 = LocalConvertSidToStringSidW(Sid);
        if ( v90 < 0 )
        {
          AceCondition = RtlNtStatusToDosError(v90);
          goto LABEL_129;
        }
      }
      *(_BYTE *)((unsigned int)v13 + v118) = 1;
      v36 = (__int64)*v35;
    }
    v37 = -1LL;
    do
      ++v37;
    while ( *(_WORD *)(v36 + 2 * v37) );
    v10 = a1;
    v11 += 2 * v37 + 4;
    v14 += *((unsigned __int16 *)v14 + 1);
    v123 = v11;
    LODWORD(v13) = v13 + 1;
    if ( (unsigned int)v13 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_42;
  }
  v11 = *(_DWORD *)Str2;
  v123 = *(_DWORD *)Str2;
LABEL_129:
  v10 = a1;
LABEL_42:
  v13 = 0LL;
  if ( !v11 )
    goto LABEL_130;
LABEL_43:
  if ( AceCondition )
    goto LABEL_172;
  if ( (v11 & 1) != 0 )
    v123 = ++v11;
  v38 = v11;
  v39 = a4;
  v40 = (_WORD *)SddlpAlloc(v11);
  *a4 = (__int64)v40;
  if ( !v40 )
  {
    v11 = v123;
    AceCondition = 8;
    goto LABEL_173;
  }
  v41 = v38 >> 1;
  *(_DWORD *)Str2 = 0;
  if ( !*(_WORD *)(v10 + 4) )
    goto LABEL_171;
  while ( 2 )
  {
    if ( !v41 )
      goto LABEL_170;
    *v40 = 40;
    v42 = v40 + 1;
    v43 = v41 - 1;
    v44 = (const wchar_t **)LookupAceTypeInTable(0LL);
    v45 = v44;
    if ( v44 )
    {
      wcscpy_s(v42, v43, *v44);
      v46 = *((unsigned int *)v45 + 2);
      v43 -= v46;
      v42 += v46;
    }
    if ( !v43 )
      goto LABEL_170;
    v47 = v113;
    *v42 = 59;
    v48 = v13;
    v49 = v42 + 1;
    v50 = v43 - 1;
    do
    {
      if ( ((unsigned __int8)(1 << v48) & (unsigned __int8)v47[1]) != 0 )
      {
        v77 = (const wchar_t **)LookupAceFlagsInTable(0LL);
        v78 = v77;
        if ( v77 )
        {
          wcscpy_s(v49, v50, *v77);
          v79 = *((unsigned int *)v78 + 2);
          v50 -= v79;
          v49 += v79;
        }
      }
      ++v48;
    }
    while ( v48 < 8 );
    v51 = *(unsigned int *)Str2;
    if ( !v50 )
    {
LABEL_170:
      AceCondition = 1336;
      goto LABEL_171;
    }
    v52 = v113;
    *v49 = 59;
    v53 = v50 - 1;
    v54 = v49 + 1;
    v119 = v13;
    v55 = v13;
    v114 = v13;
    v56 = *v52;
    if ( (unsigned __int8)*v52 > 0xBu )
    {
      if ( v56 == 13 || v56 > 0x10u && v56 <= 0x15u )
        goto LABEL_59;
    }
    else
    {
      if ( *v52 == 11 )
        goto LABEL_136;
      if ( v56 <= 3u )
        goto LABEL_59;
      if ( v56 > 4u )
      {
        if ( v56 > 8u )
        {
          if ( v56 > 0xAu )
            goto LABEL_60;
LABEL_59:
          Val = *((_DWORD *)v52 + 1);
          Sid = v52 + 8;
          goto LABEL_60;
        }
LABEL_136:
        v91 = *((_DWORD *)v52 + 2) & 2;
        v92 = *((_DWORD *)v52 + 2) & 1;
        v93 = 16LL * v92;
        Val = *((_DWORD *)v52 + 1);
        Sid = &v52[v93 + (v91 != 0 ? 28LL : 12LL)];
        if ( v91 )
          v13 = (__int64)&v52[v93 + 12];
        else
          v13 = 0LL;
        v114 = v13;
        v55 = (unsigned __int64)(v52 + 12) & -(__int64)(v92 != 0);
        v119 = v55;
      }
    }
LABEL_60:
    v57 = (unsigned int)v111;
    if ( v111 )
    {
      SddlpFree(v111);
      v57 = 0;
      v111 = 0LL;
    }
    v110 = v57;
    v110 = LocalGetAceCondition(v52, Sid, &v111, &v110);
    AceCondition = v110;
    if ( v110 )
      goto LABEL_169;
    v120 = v51;
    v58 = *(_DWORD *)(v116 + 4 * v51);
    if ( v58 == 2 )
    {
      wcscpy_s(v54, v53, L"0x");
      v54 += 2;
      v53 -= 2LL;
      ultow_s(Val, v54, v53, AceCondition + 16);
      v59 = -1LL;
      do
        ++v59;
      while ( v54[v59] != (_WORD)v57 );
LABEL_66:
      v54 += v59;
      v53 -= v59;
    }
    else if ( v58 == 1 )
    {
      v94 = (const wchar_t **)LookupAccessMaskInTable(0LL);
      v95 = v94;
      if ( v94 )
      {
        wcscpy_s(v54, v53, *v94);
        v59 = *((unsigned int *)v95 + 2);
        goto LABEL_66;
      }
    }
    else
    {
      v96 = Val;
      do
      {
        if ( (v96 & (1 << v57)) != 0 )
        {
          v97 = (const wchar_t **)LookupAccessMaskInTable(0LL);
          v98 = v97;
          if ( v97 )
          {
            wcscpy_s(v54, v53, *v97);
            v99 = *((unsigned int *)v98 + 2);
            v53 -= v99;
            v54 += v99;
          }
          v96 = Val;
        }
        ++v57;
      }
      while ( v57 < 0x20 );
      AceCondition = v110;
      v55 = v119;
      v13 = v114;
      v51 = v120;
    }
    if ( !v53 )
      break;
    v60 = v53 - 1;
    *v54 = 59;
    v61 = v54 + 1;
    if ( v55 )
    {
      if ( !(unsigned int)SddlpUuidToString(v55, &Src) )
        goto LABEL_169;
      v100 = -1LL;
      do
        ++v100;
      while ( Src[v100] );
      wcscpy_s(v61, v60, Src);
      v60 -= v100;
      v61 += v100;
      SddlpFreeUuidString(&Src);
    }
    if ( v60 )
    {
      *v61 = 59;
      v62 = v60 - 1;
      v63 = v61 + 1;
      if ( v13 )
      {
        v101 = SddlpUuidToString(v13, &Src);
        v13 = 0LL;
        if ( !v101 )
          goto LABEL_171;
        v102 = -1LL;
        do
          ++v102;
        while ( Src[v102] );
        wcscpy_s(v63, v62, Src);
        v62 -= v102;
        v63 += v102;
        SddlpFreeUuidString(&Src);
      }
      v64 = v109;
      if ( !v62 )
      {
LABEL_167:
        AceCondition = 1336;
LABEL_77:
        v11 = v123;
        v39 = a4;
        goto LABEL_78;
      }
      *v63 = 59;
      v65 = v62 - 1;
      v66 = *(const wchar_t **)(v64 + 8 * v51);
      v67 = v63 + 1;
      wcscpy_s(v67, v65, v66);
      v68 = -1LL;
      do
        ++v68;
      while ( v66[v68] != (_WORD)v13 );
      v69 = v111;
      v70 = &v67[v68];
      v71 = v65 - v68;
      if ( v111 )
      {
        if ( !v71 )
          goto LABEL_167;
        v103 = v71 - 1;
        *v70 = 59;
        v104 = v70 + 1;
        wcscpy_s(v104, v103, v69);
        v105 = -1LL;
        do
          ++v105;
        while ( v69[v105] != (_WORD)v13 );
        v70 = &v104[v105];
        v71 = v103 - v105;
      }
      if ( v71 <= 1 )
        goto LABEL_167;
      v72 = v113;
      v73 = *(_DWORD *)Str2;
      v41 = v71 - 1;
      *v70 = 41;
      ++v73;
      v40 = v70 + 1;
      *(_DWORD *)Str2 = v73;
      *v40 = v13;
      v113 = &v72[*((unsigned __int16 *)v72 + 1)];
      if ( v73 >= *(unsigned __int16 *)(a1 + 4) )
        goto LABEL_77;
      continue;
    }
    break;
  }
  AceCondition = 1336;
LABEL_169:
  v13 = 0LL;
LABEL_171:
  v11 = v123;
LABEL_172:
  v39 = a4;
LABEL_173:
  v64 = v109;
LABEL_78:
  v74 = v13;
  if ( (unsigned __int16)v13 < *(_WORD *)(a1 + 4) )
  {
    v75 = v118;
    do
    {
      if ( *(_BYTE *)(v74 + v75) != (_BYTE)v13 )
        SddlpFree(*(_QWORD *)(v64 + 8LL * v74));
      ++v74;
    }
    while ( v74 < *(unsigned __int16 *)(a1 + 4) );
    v39 = a4;
  }
  SddlpFree(v64);
  SddlpFree(v118);
  SddlpFree(v116);
  SddlpFree(v111);
  if ( AceCondition )
  {
    SddlpFree(*v39);
    *v39 = v13;
    *a5 = v13;
  }
  else
  {
    *a5 = v11;
  }
  return AceCondition;
}
