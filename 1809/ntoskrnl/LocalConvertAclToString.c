/*
 * XREFs of LocalConvertAclToString @ 0x1408A61B0
 * Callers:
 *     LocalConvertSDToStringSD_Rev1 @ 0x1408A6C20 (LocalConvertSDToStringSD_Rev1.c)
 * Callees:
 *     _ultow_s @ 0x14019A8B0 (_ultow_s.c)
 *     wcscpy_s @ 0x14019BE00 (wcscpy_s.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlNtStatusToDosError @ 0x140624F00 (RtlNtStatusToDosError.c)
 *     LookupAccessMaskInTable @ 0x1406B14B4 (LookupAccessMaskInTable.c)
 *     LookupSidInTable @ 0x1406B1640 (LookupSidInTable.c)
 *     LookupAceTypeInTable @ 0x1406B177C (LookupAceTypeInTable.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 *     LocalConvertSidToStringSidW @ 0x1408A71F4 (LocalConvertSidToStringSidW.c)
 *     LocalGetAceCondition @ 0x1408A7298 (LocalGetAceCondition.c)
 *     LookupAceFlagsInTable @ 0x1408A75F8 (LookupAceFlagsInTable.c)
 *     SddlpUuidToString @ 0x1408A8038 (SddlpUuidToString.c)
 */

__int64 __fastcall LocalConvertAclToString(
        __int64 a1,
        char a2,
        char a3,
        PVOID *a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        int a8,
        char a9)
{
  _QWORD *v9; // rsi
  unsigned int v11; // edi
  wchar_t *v13; // rax
  unsigned int v14; // ecx
  unsigned __int16 v15; // ax
  PVOID v16; // rcx
  __int64 v17; // r13
  unsigned __int8 *v18; // r15
  wchar_t **v19; // rax
  wchar_t *v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // ebx
  int v23; // edi
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int8 v27; // al
  bool v28; // cc
  unsigned int v29; // r10d
  unsigned int v30; // eax
  int v31; // r8d
  __int64 v32; // r9
  unsigned __int8 *v33; // rbx
  unsigned __int8 *v34; // rax
  int v35; // edi
  ULONG AceCondition; // r14d
  int v37; // r8d
  int v38; // ebx
  wchar_t **v39; // rax
  __int64 v40; // r9
  __int64 v41; // rbx
  unsigned int v42; // eax
  int v43; // edi
  int v44; // r8d
  wchar_t **v45; // rax
  wchar_t *v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rax
  wchar_t **v49; // rbx
  wchar_t *v50; // rax
  NTSTATUS v51; // eax
  __int64 v52; // rcx
  __int64 v53; // rax
  unsigned __int64 v54; // rbx
  _WORD *v55; // rax
  _WORD *v56; // rdi
  unsigned __int64 v57; // rbx
  unsigned __int8 *v58; // rcx
  int v59; // r14d
  wchar_t *v60; // rdi
  rsize_t v61; // rbx
  wchar_t **v62; // rax
  wchar_t **v63; // rsi
  __int64 v64; // rax
  unsigned __int8 *v65; // r15
  unsigned int v66; // esi
  wchar_t *v67; // rdi
  rsize_t v68; // rbx
  const wchar_t **v69; // rax
  const wchar_t **v70; // r14
  __int64 v71; // rax
  __int64 v72; // r15
  unsigned __int8 *v73; // r14
  rsize_t v74; // rbx
  wchar_t *v75; // rdi
  __int64 v76; // r12
  unsigned __int8 v77; // al
  int v78; // ecx
  unsigned int v79; // r8d
  __int64 v80; // rdx
  unsigned int v81; // esi
  int v82; // eax
  __int64 v83; // rax
  int v84; // r8d
  wchar_t **v85; // rax
  wchar_t **v86; // rsi
  unsigned __int8 *v87; // r12
  int v88; // r13d
  unsigned int v89; // eax
  int v90; // r8d
  wchar_t **v91; // rax
  wchar_t **v92; // r15
  __int64 v93; // rax
  rsize_t v94; // rbx
  wchar_t *v95; // rdi
  wchar_t *v96; // r15
  __int64 v97; // rsi
  rsize_t v98; // rbx
  wchar_t *v99; // rdi
  int v100; // eax
  wchar_t *v101; // r15
  __int64 v102; // rsi
  _QWORD *v103; // r12
  __int64 v104; // r15
  rsize_t v105; // rbx
  wchar_t *v106; // rdi
  const wchar_t *v107; // rsi
  __int64 v108; // rax
  const wchar_t *v109; // rsi
  wchar_t *v110; // rdi
  unsigned __int64 v111; // rbx
  rsize_t v112; // rbx
  wchar_t *v113; // rdi
  __int64 v114; // rax
  unsigned __int8 *v115; // rcx
  unsigned int v116; // r15d
  unsigned int v117; // ebx
  _BYTE *v118; // rsi
  void *v119; // rcx
  unsigned int Val; // [rsp+58h] [rbp-69h]
  wchar_t Str2[2]; // [rsp+5Ch] [rbp-65h] BYREF
  int v122; // [rsp+60h] [rbp-61h]
  PVOID v123; // [rsp+68h] [rbp-59h]
  ULONG v124; // [rsp+70h] [rbp-51h] BYREF
  PVOID P; // [rsp+78h] [rbp-49h] BYREF
  PSID Sid; // [rsp+80h] [rbp-41h]
  unsigned __int8 *v127; // [rsp+88h] [rbp-39h]
  wchar_t *Src; // [rsp+90h] [rbp-31h] BYREF
  PVOID v129; // [rsp+98h] [rbp-29h]
  int v130; // [rsp+A0h] [rbp-21h]
  __int64 v131; // [rsp+A8h] [rbp-19h]
  PVOID v132; // [rsp+B0h] [rbp-11h]
  __int64 v133; // [rsp+B8h] [rbp-9h]
  unsigned int v136; // [rsp+140h] [rbp+7Fh]

  v9 = a4;
  v136 = 0;
  v130 = 0;
  v11 = 0;
  Val = 0;
  Sid = 0LL;
  Src = 0LL;
  P = 0LL;
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
    v13 = (wchar_t *)SddlpAlloc(0x24uLL);
    *v9 = v13;
    if ( v13 )
    {
      wcscpy(v13, L"NO_ACCESS_CONTROL");
      return 0LL;
    }
    v14 = 8;
    goto LABEL_12;
  }
  v15 = *(_WORD *)(a1 + 4);
  if ( !v15 )
  {
    *a4 = 0LL;
    v14 = 0;
LABEL_12:
    *a5 = 0;
    return v14;
  }
  v122 = 2 - (a3 != 0);
  v123 = SddlpAlloc(8LL * v15);
  if ( !v123 )
    return 8LL;
  v132 = SddlpAlloc(*(unsigned __int16 *)(a1 + 4));
  if ( !v132 )
  {
    v16 = v123;
LABEL_17:
    ExFreePoolWithTag(v16, 0);
    return 8LL;
  }
  v129 = SddlpAlloc(4LL * *(unsigned __int16 *)(a1 + 4));
  if ( !v129 )
  {
    ExFreePoolWithTag(v123, 0);
    v16 = v132;
    goto LABEL_17;
  }
  v127 = (unsigned __int8 *)(a1 + 8);
  v17 = 0LL;
  v18 = (unsigned __int8 *)(a1 + 8);
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_86;
  while ( 1 )
  {
    v11 += 2;
    v136 = v11;
    v19 = LookupAceTypeInTable(0LL, *v18, v122);
    if ( !v19 )
      break;
    v20 = *v19;
    v21 = -1LL;
    do
      ++v21;
    while ( v20[v21] );
    v22 = 0;
    v23 = v11 + 2 + 2 * v21;
    do
    {
      if ( (v18[1] & (unsigned __int8)(1 << v22)) != 0 )
      {
        v24 = (__int64 *)LookupAceFlagsInTable(0LL);
        if ( v24 )
        {
          v25 = *v24;
          v26 = -1LL;
          do
            ++v26;
          while ( *(_WORD *)(v25 + 2 * v26) );
          v23 += 2 * v26;
        }
      }
      ++v22;
    }
    while ( v22 < 8 );
    v27 = *v18;
    v11 = v23 + 2;
    v136 = v11;
    *(_DWORD *)Str2 = v11;
    if ( v27 > 0xBu )
    {
      if ( v27 != 13 )
      {
        if ( v27 <= 0x10u )
          break;
        v28 = v27 <= 0x15u;
        goto LABEL_57;
      }
LABEL_58:
      v35 = *((_DWORD *)v18 + 1);
      v33 = v18 + 8;
      Sid = v18 + 8;
      Val = v35;
      goto LABEL_45;
    }
    if ( v27 != 11 )
    {
      if ( v27 <= 3u )
        goto LABEL_58;
      if ( v27 <= 4u )
        break;
      if ( v27 > 8u )
      {
        v28 = v27 <= 0xAu;
LABEL_57:
        if ( !v28 )
          break;
        goto LABEL_58;
      }
    }
    v29 = *((_DWORD *)v18 + 1);
    v30 = *((_DWORD *)v18 + 2) & 1;
    Val = v29;
    v31 = *((_DWORD *)v18 + 2) & 2;
    v32 = 16LL * v30;
    v33 = &v18[v32 + (v31 != 0 ? 28LL : 12LL)];
    Sid = v33;
    if ( (-(__int64)(v30 != 0) & (unsigned __int64)(v18 + 12)) != 0 )
    {
      v11 += 72;
      *(_DWORD *)Str2 = v11;
    }
    if ( v31 )
      v34 = &v18[v32 + 12];
    else
      v34 = 0LL;
    if ( v34 )
      *(_DWORD *)Str2 = v11 + 72;
    v35 = v29;
LABEL_45:
    if ( P )
    {
      ExFreePoolWithTag(P, 0);
      P = 0LL;
    }
    v124 = 0;
    AceCondition = LocalGetAceCondition(v18, v33, &P, &v124);
    if ( AceCondition )
    {
      v11 = *(_DWORD *)Str2;
      v136 = *(_DWORD *)Str2;
      goto LABEL_85;
    }
    v37 = v122;
    v38 = 0;
    *((_DWORD *)v129 + (unsigned int)v17) = 0;
    if ( *v18 == 17 )
      v37 = 4;
    v39 = LookupAccessMaskInTable(0LL, v35, v37);
    if ( !v39 )
    {
      v42 = Val;
      v43 = 0;
      while ( 1 )
      {
        if ( (v42 & (1 << v43)) != 0 )
        {
          v44 = v122;
          if ( *v18 == 17 )
            v44 = 4;
          v45 = LookupAccessMaskInTable(0LL, v42 & (1 << v43), v44);
          if ( !v45 )
          {
            v38 = 20;
            *((_DWORD *)v129 + (unsigned int)v17) = 2;
            goto LABEL_70;
          }
          v46 = *v45;
          v47 = -1LL;
          do
            ++v47;
          while ( v46[v47] );
          v38 += 2 * v47;
          v42 = Val;
        }
        if ( (unsigned int)++v43 >= 0x20 )
          goto LABEL_70;
      }
    }
    v41 = -1LL;
    *((_DWORD *)v129 + (unsigned int)v17) = 1;
    do
      ++v41;
    while ( (*v39)[v41] );
    v38 = 2 * v41;
LABEL_70:
    v11 = v38 + *(_DWORD *)Str2 + 6;
    v136 = v11;
    v48 = LookupSidInTable(0LL, Sid, a6, v40, Str2, a9, &Src);
    v49 = (wchar_t **)((char *)v123 + 8 * (unsigned int)v17);
    if ( v48 )
    {
      v52 = v48 + 2;
      *v49 = (wchar_t *)(v48 + 2);
    }
    else
    {
      if ( Src )
      {
        v50 = (wchar_t *)SddlpAlloc(6uLL);
        *v49 = v50;
        if ( !v50 )
        {
          AceCondition = 8;
          goto LABEL_85;
        }
        wcscpy_s(v50, 3uLL, L"SA");
      }
      else
      {
        v51 = LocalConvertSidToStringSidW(Sid);
        if ( v51 < 0 )
        {
          AceCondition = RtlNtStatusToDosError(v51);
          goto LABEL_85;
        }
      }
      *((_BYTE *)v132 + (unsigned int)v17) = 1;
      v52 = (__int64)*v49;
    }
    v53 = -1LL;
    do
      ++v53;
    while ( *(_WORD *)(v52 + 2 * v53) );
    LODWORD(v17) = v17 + 1;
    v11 += 2 * v53 + 4;
    v18 += *((unsigned __int16 *)v18 + 1);
    v136 = v11;
    if ( (unsigned int)v17 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_85;
  }
  AceCondition = 1336;
LABEL_85:
  v9 = a4;
  v17 = 0LL;
  if ( !v11 )
LABEL_86:
    AceCondition = 1336;
  if ( !AceCondition )
  {
    if ( (v11 & 1) != 0 )
      v136 = ++v11;
    v54 = v11;
    v55 = SddlpAlloc(v11);
    *v9 = v55;
    v56 = v55;
    if ( !v55 )
    {
      AceCondition = 8;
      goto LABEL_172;
    }
    v57 = v54 >> 1;
    *(_DWORD *)Str2 = 0;
    if ( *(_WORD *)(a1 + 4) )
    {
      v58 = v127;
      while ( 1 )
      {
        if ( !v57 )
          goto LABEL_171;
        v59 = v122;
        *v56 = 40;
        v60 = v56 + 1;
        v61 = v57 - 1;
        v62 = LookupAceTypeInTable(0LL, *v58, v59);
        v63 = v62;
        if ( v62 )
        {
          wcscpy_s(v60, v61, *v62);
          v64 = *((unsigned int *)v63 + 2);
          v61 -= v64;
          v60 += v64;
        }
        if ( !v61 )
          goto LABEL_171;
        v65 = v127;
        *v60 = 59;
        v66 = 0;
        v67 = v60 + 1;
        v68 = v61 - 1;
        do
        {
          if ( ((unsigned __int8)(1 << v66) & v65[1]) != 0 )
          {
            v69 = (const wchar_t **)LookupAceFlagsInTable(0LL);
            v70 = v69;
            if ( v69 )
            {
              wcscpy_s(v67, v68, *v69);
              v71 = *((unsigned int *)v70 + 2);
              v68 -= v71;
              v67 += v71;
            }
          }
          ++v66;
        }
        while ( v66 < 8 );
        v72 = *(unsigned int *)Str2;
        if ( !v68 )
        {
LABEL_171:
          AceCondition = 1336;
          break;
        }
        v73 = v127;
        *v67 = 59;
        v74 = v68 - 1;
        v75 = v67 + 1;
        v133 = 0LL;
        v76 = 0LL;
        v131 = 0LL;
        v77 = *v73;
        if ( *v73 > 0xBu )
        {
          if ( v77 == 13 || v77 > 0x10u && v77 <= 0x15u )
          {
LABEL_118:
            Val = *((_DWORD *)v73 + 1);
            Sid = v73 + 8;
          }
        }
        else
        {
          if ( *v73 == 11 )
            goto LABEL_111;
          if ( v77 <= 3u )
            goto LABEL_118;
          if ( v77 <= 4u )
            goto LABEL_119;
          if ( v77 <= 8u )
          {
LABEL_111:
            v78 = *((_DWORD *)v73 + 2) & 2;
            v79 = *((_DWORD *)v73 + 2) & 1;
            v80 = 16LL * v79;
            Val = *((_DWORD *)v73 + 1);
            Sid = &v73[v80 + (v78 != 0 ? 28LL : 12LL)];
            if ( v78 )
              v17 = (__int64)&v73[v80 + 12];
            else
              v17 = 0LL;
            v131 = v17;
            v76 = (unsigned __int64)(v73 + 12) & -(__int64)(v79 != 0);
            v133 = v76;
          }
          else if ( v77 <= 0xAu )
          {
            goto LABEL_118;
          }
        }
LABEL_119:
        v81 = (unsigned int)P;
        if ( P )
        {
          ExFreePoolWithTag(P, 0);
          v81 = 0;
          P = 0LL;
        }
        v124 = v81;
        v124 = LocalGetAceCondition(v73, Sid, &P, &v124);
        AceCondition = v124;
        if ( v124 )
          break;
        v82 = *((_DWORD *)v129 + v72);
        if ( v82 == 2 )
        {
          wcscpy_s(v75, v74, L"0x");
          v75 += 2;
          v74 -= 2LL;
          ultow_s(Val, v75, v74, AceCondition + 16);
          v83 = -1LL;
          do
            ++v83;
          while ( v75[v83] != (_WORD)v81 );
          goto LABEL_131;
        }
        if ( v82 != 1 )
        {
          v87 = v127;
          v88 = v122;
          v89 = Val;
          do
          {
            if ( (v89 & (1 << v81)) != 0 )
            {
              v90 = v88;
              if ( *v87 == 17 )
                v90 = 4;
              v91 = LookupAccessMaskInTable(0LL, v89 & (1 << v81), v90);
              v92 = v91;
              if ( v91 )
              {
                wcscpy_s(v75, v74, *v91);
                v93 = *((unsigned int *)v92 + 2);
                v74 -= v93;
                v75 += v93;
              }
              v89 = Val;
            }
            ++v81;
          }
          while ( v81 < 0x20 );
          AceCondition = v124;
          v76 = v133;
          v17 = v131;
          goto LABEL_141;
        }
        v84 = v122;
        if ( *v127 == 17 )
          v84 = 4;
        v85 = LookupAccessMaskInTable(0LL, Val, v84);
        v86 = v85;
        if ( v85 )
        {
          wcscpy_s(v75, v74, *v85);
          v83 = *((unsigned int *)v86 + 2);
LABEL_131:
          v75 += v83;
          v74 -= v83;
        }
LABEL_141:
        if ( !v74 )
          goto LABEL_169;
        v94 = v74 - 1;
        *v75 = 59;
        v95 = v75 + 1;
        if ( v76 )
        {
          if ( !(unsigned int)SddlpUuidToString(v76, &Src) )
            break;
          v96 = Src;
          v97 = -1LL;
          do
            ++v97;
          while ( Src[v97] );
          wcscpy_s(v95, v94, Src);
          v94 -= v97;
          v95 += v97;
          if ( v96 )
            ExFreePoolWithTag(v96, 0);
        }
        if ( !v94 )
        {
LABEL_169:
          AceCondition = 1336;
          break;
        }
        *v95 = 59;
        v98 = v94 - 1;
        v99 = v95 + 1;
        if ( v17 )
        {
          v100 = SddlpUuidToString(v17, &Src);
          v17 = 0LL;
          if ( !v100 )
            break;
          v101 = Src;
          v102 = -1LL;
          do
            ++v102;
          while ( Src[v102] );
          wcscpy_s(v99, v98, Src);
          v98 -= v102;
          v99 += v102;
          if ( v101 )
            ExFreePoolWithTag(v101, 0);
        }
        v103 = v123;
        if ( !v98 )
          goto LABEL_167;
        v104 = *(unsigned int *)Str2;
        v105 = v98 - 1;
        *v99 = 59;
        v106 = v99 + 1;
        v107 = (const wchar_t *)v103[v104];
        wcscpy_s(v106, v105, v107);
        v108 = -1LL;
        do
          ++v108;
        while ( v107[v108] );
        v109 = (const wchar_t *)P;
        v110 = &v106[v108];
        v111 = v105 - v108;
        if ( P )
        {
          if ( !v111 )
            goto LABEL_167;
          v112 = v111 - 1;
          *v110 = 59;
          v113 = v110 + 1;
          wcscpy_s(v113, v112, v109);
          v114 = -1LL;
          do
            ++v114;
          while ( v109[v114] );
          v110 = &v113[v114];
          v111 = v112 - v114;
        }
        if ( v111 <= 1 )
        {
LABEL_167:
          AceCondition = 1336;
LABEL_168:
          v11 = v136;
          goto LABEL_174;
        }
        v115 = v127;
        *v110 = 41;
        v116 = v104 + 1;
        v56 = v110 + 1;
        *(_DWORD *)Str2 = v116;
        v57 = v111 - 1;
        *v56 = 0;
        v58 = &v115[*((unsigned __int16 *)v115 + 1)];
        v127 = v58;
        if ( v116 >= *(unsigned __int16 *)(a1 + 4) )
          goto LABEL_168;
      }
    }
LABEL_172:
    v11 = v136;
  }
  v103 = v123;
LABEL_174:
  v117 = 0;
  if ( *(_WORD *)(a1 + 4) )
  {
    v118 = v132;
    do
    {
      if ( v118[v117] )
      {
        v119 = (void *)v103[v117];
        if ( v119 )
          ExFreePoolWithTag(v119, 0);
      }
      ++v117;
    }
    while ( v117 < *(unsigned __int16 *)(a1 + 4) );
  }
  ExFreePoolWithTag(v103, 0);
  ExFreePoolWithTag(v132, 0);
  ExFreePoolWithTag(v129, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( AceCondition )
  {
    if ( *a4 )
      ExFreePoolWithTag(*a4, 0);
    *a4 = 0LL;
    *a5 = 0;
  }
  else
  {
    *a5 = v11;
  }
  return AceCondition;
}
