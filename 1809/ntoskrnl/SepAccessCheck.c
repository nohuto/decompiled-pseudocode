/*
 * XREFs of SepAccessCheck @ 0x1400528F0
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1400A7C90 (SepPrivilegeCheck.c)
 *     SepMaximumAccessCheck @ 0x1400AACE0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400AB2B0 (SepNormalAccessCheck.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SepAssemblePrivileges @ 0x1406B33C4 (SepAssemblePrivileges.c)
 */

__int64 __fastcall SepAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned int a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        unsigned int *a11,
        _QWORD *a12,
        int *a13,
        char a14,
        char a15,
        int *a16,
        __int64 a17,
        char *a18,
        char *a19,
        char a20)
{
  unsigned int v20; // ebp
  _QWORD *v21; // r15
  __int64 v23; // r9
  unsigned __int8 v25; // r13
  unsigned int v26; // r8d
  unsigned int v27; // r11d
  unsigned int v28; // esi
  __int16 v29; // cx
  __int64 v30; // rdx
  __int64 v31; // r15
  __int64 v32; // rbx
  int v33; // r8d
  int v34; // edx
  __int64 v35; // rdi
  _QWORD *v36; // rcx
  int v37; // edi
  _QWORD *v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  unsigned __int8 v44; // cl
  unsigned __int8 v45; // r10
  int v46; // ebx
  unsigned __int8 v47; // r8
  __int64 v49; // rcx
  int v50; // eax
  _DWORD *v51; // r8
  int v52; // edx
  int v53; // edx
  int v54; // ecx
  int v55; // eax
  int v56; // ecx
  int v57; // r10d
  char v58; // al
  int v59; // eax
  int v60; // edx
  _DWORD *v61; // rax
  int v62; // ecx
  char v63; // dl
  char v64; // r9
  int v65; // r10d
  unsigned int v66; // r10d
  int *v67; // rcx
  __int64 v68; // rdi
  bool v69; // zf
  int v70; // eax
  char *v71; // rdi
  unsigned int v72; // r10d
  unsigned int v73; // esi
  __int64 v74; // rax
  unsigned int v75; // eax
  int *v76; // rdi
  unsigned __int64 k; // rcx
  char *v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rax
  unsigned int v81; // eax
  int *v82; // rdi
  unsigned __int64 i; // rcx
  unsigned int *v84; // rdi
  unsigned __int64 j; // rcx
  unsigned int *v86; // rcx
  __int64 v87; // rax
  unsigned __int8 v88; // [rsp+70h] [rbp-F8h]
  char v89; // [rsp+71h] [rbp-F7h]
  unsigned __int8 v90; // [rsp+72h] [rbp-F6h]
  char v91; // [rsp+73h] [rbp-F5h]
  unsigned __int8 v92; // [rsp+74h] [rbp-F4h]
  int v93; // [rsp+78h] [rbp-F0h]
  unsigned int v94; // [rsp+7Ch] [rbp-ECh]
  int v95; // [rsp+7Ch] [rbp-ECh]
  unsigned int v96; // [rsp+80h] [rbp-E8h]
  __int64 v97; // [rsp+88h] [rbp-E0h]
  _QWORD *v98; // [rsp+A8h] [rbp-C0h]
  int v100; // [rsp+C8h] [rbp-A0h]
  __int64 v101; // [rsp+D0h] [rbp-98h] BYREF
  int v102; // [rsp+D8h] [rbp-90h]
  _QWORD v103[6]; // [rsp+E0h] [rbp-88h] BYREF

  v20 = 0;
  v21 = a12;
  v23 = (__int64)a16;
  if ( !a4 )
    a4 = a3;
  v25 = 1;
  v98 = a6;
  v100 = a3;
  v26 = a5;
  v27 = a5;
  v93 = 0;
  v88 = 0;
  v90 = 0;
  v92 = 0;
  v97 = a4;
  v94 = a5;
  v96 = 1;
  if ( (a5 & 0x1000000) != 0 )
  {
    v101 = (__int64)SeSecurityPrivilege;
    v102 = 0;
    if ( !(unsigned __int8)SepPrivilegeCheck(a4, (unsigned int)&v101, 1, 1, a10) )
    {
      v28 = 0;
      v46 = -1073741727;
LABEL_31:
      if ( a14 )
      {
        if ( a7 )
        {
          if ( a7 >= 4 )
          {
            v80 = a7 - 1;
            if ( a11 > (unsigned int *)&a13[v80] || &a11[v80] < (unsigned int *)a13 )
            {
              v81 = a7 & 0xFFFFFFFC;
              do
                v20 += 4;
              while ( v20 < v81 );
              v82 = a13;
              for ( i = (4 * (unsigned __int64)v81) >> 2; i; --i )
                *v82++ = v46;
              v84 = a11;
              for ( j = (4 * (unsigned __int64)v81) >> 2; j; --j )
                *v84++ = v28;
            }
          }
          if ( v20 < a7 )
          {
            v86 = &a11[v20];
            v87 = a7 - v20;
            do
            {
              *(unsigned int *)((char *)v86 + (char *)a13 - (char *)a11) = v46;
              *v86++ = v28;
              --v87;
            }
            while ( v87 );
          }
        }
        goto LABEL_33;
      }
LABEL_32:
      *a13 = v46;
      *a11 = v28;
LABEL_33:
      if ( v46 < 0 )
      {
        if ( a18 )
          *a18 = 0;
        if ( a19 )
          *a19 = 1;
      }
      else
      {
        if ( a18 )
          *a18 = 1;
        if ( a19 )
          *a19 = 0;
      }
      return v47;
    }
    v26 = a5;
    v34 = 1;
    v27 = a5 & 0xFEFFFFFF;
    v93 = 1;
    v28 = a9 | 0x1000000;
    v94 = a5 & 0xFEFFFFFF;
    v88 = 1;
    v45 = 1;
    if ( (a5 & 0xFEFFFFFF) == 0 )
      goto LABEL_45;
    a4 = v97;
    v23 = (__int64)a16;
  }
  else
  {
    v28 = a9;
  }
  v29 = *(_WORD *)(a1 + 2);
  if ( (v29 & 4) != 0 )
  {
    if ( v29 >= 0 )
    {
      v31 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v30 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v30 )
        v31 = a1 + v30;
      else
        v31 = 0LL;
    }
  }
  else
  {
    v31 = 0LL;
  }
  if ( (v29 & 0x10) != 0 )
  {
    if ( v29 < 0 )
    {
      v49 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v49 )
        v32 = a1 + v49;
      else
        v32 = 0LL;
    }
    else
    {
      v32 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    v32 = 0LL;
  }
  if ( (*(_WORD *)(a1 + 2) & 4) == 0 || !v31 )
  {
    v28 |= v26;
    if ( (v26 & 0x2000000) != 0 )
      v28 = a8[3] | v28 & 0xFDFFFFFF;
    if ( (*(_DWORD *)(a4 + 200) & 0x4000) != 0 )
    {
      v28 = 0;
      *(_DWORD *)(v23 + 4) = 0;
      *(_BYTE *)(v23 + 21) = 0;
      goto LABEL_54;
    }
    v34 = v93;
LABEL_44:
    v45 = v88;
    v21 = a12;
LABEL_45:
    v44 = 0;
    goto LABEL_27;
  }
  v33 = 1;
  if ( (v27 & 0x80000) == 0 )
  {
    v34 = v93;
LABEL_16:
    v35 = v97;
    goto LABEL_17;
  }
  v101 = SeTakeOwnershipPrivilege;
  v102 = 0;
  if ( (unsigned __int8)SepPrivilegeCheck(a4, (unsigned int)&v101, 1, 1, a10) )
  {
    v28 |= 0x80000u;
    v27 = v94 & 0xFFF7FFFF;
    v34 = v93 + 1;
    v94 = v27;
    ++v93;
    v44 = v33;
    v90 = v33;
    if ( !v27 )
    {
      v21 = a12;
      v45 = v88;
      goto LABEL_27;
    }
    goto LABEL_16;
  }
  v35 = v97;
  v101 = SeRelabelPrivilege;
  v102 = 0;
  v58 = SepPrivilegeCheck(v97, (unsigned int)&v101, v33, v33, a10);
  v27 = v94;
  v34 = v93;
  if ( v58 )
  {
    v27 = v94 & 0xFFF7FFFF;
    v92 = v33;
    v34 = v93 + 1;
    v94 = v27;
    v28 |= 0x80000u;
    ++v93;
    if ( !v27 )
      goto LABEL_44;
  }
LABEL_17:
  if ( !*(_WORD *)(v31 + 4) )
  {
    v61 = a16;
    a16[3] = v27;
    v62 = *(_DWORD *)(v35 + 200);
    if ( (v62 & 0x4000) != 0 )
    {
      v28 &= ~*a16;
      v61 = a16;
    }
    if ( v27 == 0x2000000 )
    {
      if ( v28 )
      {
LABEL_103:
        v21 = a12;
        v44 = v90;
        v45 = v88;
        goto LABEL_27;
      }
    }
    else if ( !v27 && *v61 && v28 && (v62 & 0x6000) == 0 )
    {
      goto LABEL_103;
    }
    v28 = 0;
    goto LABEL_54;
  }
  if ( a7 )
  {
    v36 = a6;
    v33 = a7;
    v96 = a7;
  }
  else
  {
    v36 = v103;
    v103[2] = 0xFFFFFFFF00000000uLL;
    v98 = v103;
    v103[0] = 0LL;
    v103[1] = 0LL;
    memset(&v103[3], 0, 24);
  }
  v37 = a5 & 0x2000000;
  if ( (a5 & 0x2000000) == 0 && !a14 )
  {
    SepNormalAccessCheck(v27, v97, v100, v31, v32, a17, a2, v33, (__int64)v36, a7, 0, a15, (__int64)a16, a20);
    v38 = v98;
    v39 = (__int64)a16;
    a16[3] = *((_DWORD *)v98 + 6);
    if ( *((_DWORD *)v98 + 6) )
      goto LABEL_64;
    v40 = v97;
    v41 = 0;
    v42 = *(_DWORD *)(v97 + 200);
    if ( (v42 & 0x10) != 0 )
    {
      v57 = (v42 & 8) != 0 ? a8[1] & ~(*a8 | a8[2]) | 0x10D0000 : a8[3] | 0x1FFFFF;
      v41 = 0;
      if ( (v57 & a5) != 0 )
      {
        SepNormalAccessCheck(v94 & v57, v97, v100, v31, v32, a17, a2, v96, (__int64)v98, a7, 1, a15, (__int64)a16, a20);
        v38 = v98;
        v40 = v97;
        v39 = (__int64)a16;
        v41 = *((_DWORD *)v98 + 6);
      }
    }
    *(_DWORD *)(v39 + 12) = v41;
    if ( *((_DWORD *)v38 + 6) )
      goto LABEL_64;
    v43 = *(_DWORD *)(v40 + 200);
    if ( (v43 & 0x2000) != 0 )
    {
LABEL_26:
      v28 |= a5;
      v34 = v93;
      v21 = a12;
      v44 = v90;
      v45 = v88;
      goto LABEL_27;
    }
    v53 = a5 | v94;
    if ( (v43 & 0x4000) != 0 )
    {
      v54 = ~(*(_DWORD *)(v39 + 4) | *(_DWORD *)(v39 + 8));
      v55 = v53 | *(_DWORD *)v39;
    }
    else
    {
      if ( !*(_BYTE *)(v39 + 20) )
      {
        v56 = 0;
LABEL_63:
        *((_DWORD *)v38 + 6) = v56;
        if ( !v56 )
          goto LABEL_26;
LABEL_64:
        v46 = -1073741790;
        v28 = 0;
        v47 = 1;
        goto LABEL_32;
      }
      v54 = v53 | *(_DWORD *)v39;
      v55 = ~*(_DWORD *)(v39 + 4);
    }
    v56 = v55 & v54;
    goto LABEL_63;
  }
  SepMaximumAccessCheck(v97, v100, v31, v32, a17, a2, v33, (__int64)v36, a7, 0, 0, a15, (__int64)a16, a20);
  v50 = *(_DWORD *)(v97 + 200);
  if ( (v50 & 0x10) != 0 )
  {
    if ( (v50 & 8) != 0 )
      v60 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
    else
      v60 = a8[3] | 0x1FFFFF;
    SepMaximumAccessCheck(v97, v100, v31, v32, a17, a2, v96, (__int64)v98, a7, v60, 1, a15, (__int64)a16, a20);
    v50 = *(_DWORD *)(v97 + 200);
  }
  v51 = (_DWORD *)v98 + 7;
  v52 = *((_DWORD *)v98 + 7);
  if ( (v50 & 0x2000) == 0 )
  {
    if ( (v50 & 0x4000) != 0 )
    {
      v59 = *a16;
      v52 &= a16[1] | a16[2];
    }
    else
    {
      if ( !*((_BYTE *)a16 + 20) )
        goto LABEL_57;
      v52 &= a16[1];
      v59 = *a16;
    }
    v28 &= ~v59;
  }
LABEL_57:
  if ( !a14 )
  {
    if ( (~(v52 | 0x2000000) & v94) != 0 )
      goto LABEL_64;
    v21 = a12;
    v28 |= v52;
    v34 = v93;
    v44 = v90;
    v45 = v88;
LABEL_27:
    if ( v28 )
    {
      v46 = 0;
      if ( KeGetCurrentIrql() < 2u )
      {
        if ( v34 )
        {
          SepAssemblePrivileges(v93, v45, v44, v92, (__int64)v21);
          if ( v21 )
          {
            if ( !*v21 )
            {
              v47 = 0;
              v46 = -1073741801;
              v28 = 0;
              goto LABEL_31;
            }
          }
        }
      }
LABEL_30:
      v47 = 1;
      goto LABEL_31;
    }
LABEL_54:
    v46 = -1073741790;
    goto LABEL_30;
  }
  v63 = 0;
  v64 = 0;
  v65 = v28 | a5;
  if ( v37 )
    v65 = -33554433;
  v95 = v65;
  v66 = (v28 | a5) & 0xFDFFFFFF;
  if ( !v37 )
    v66 = v28 | a5;
  v67 = a13;
  v68 = v96;
  do
  {
    v69 = (v95 & (v28 | *v51)) == 0;
    v70 = v95 & (v28 | *v51);
    *(int *)((char *)v67 + (char *)a11 - (char *)a13) = v70;
    if ( v69 )
    {
      *v67 = -1073741790;
      v64 = 1;
    }
    else if ( (~v70 & v66) != 0 )
    {
      *v67 = -1073741790;
      v64 = 1;
    }
    else
    {
      *v67 = 0;
      v63 = 1;
    }
    v51 += 12;
    ++v67;
    --v68;
  }
  while ( v68 );
  v89 = v64;
  v91 = v63;
  v71 = (char *)a11;
  if ( KeGetCurrentIrql() < 2u && v63 && v93 )
  {
    SepAssemblePrivileges(v93, v88, v90, v92, (__int64)a12);
    if ( !a12 || *a12 )
    {
      v64 = v89;
      v63 = v91;
    }
    else
    {
      v72 = v96;
      v25 = 0;
      v63 = 0;
      v64 = 1;
      v73 = 0;
      if ( v96 >= 4 )
      {
        v74 = v96 - 1;
        if ( a11 > (unsigned int *)&a13[v74] || &a11[v74] < (unsigned int *)a13 )
        {
          v75 = v96 & 0xFFFFFFFC;
          do
            v73 += 4;
          while ( v73 < v75 );
          v76 = a13;
          for ( k = (4 * (unsigned __int64)v75) >> 2; k; --k )
            *v76++ = -1073741801;
          v71 = (char *)a11;
          memset(a11, 0, 4LL * v75);
          v64 = 1;
          v63 = 0;
          v72 = v96;
        }
      }
      if ( v73 < v72 )
      {
        v78 = &v71[4 * v73];
        v79 = v72 - v73;
        do
        {
          *(_DWORD *)&v78[(char *)a13 - v71] = -1073741801;
          *(_DWORD *)v78 = 0;
          v78 += 4;
          --v79;
        }
        while ( v79 );
      }
    }
  }
  if ( a18 )
    *a18 = v63;
  if ( a19 )
    *a19 = v64;
  return v25;
}
