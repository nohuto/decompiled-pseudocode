/*
 * XREFs of SepAccessCheck @ 0x1400C9F50
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B0B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400C8790 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140005340 (SepPrivilegeCheck.c)
 *     SepMaximumAccessCheck @ 0x1400862C0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheck @ 0x1400C7500 (SepNormalAccessCheck.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SepAssemblePrivileges @ 0x1406CDE50 (SepAssemblePrivileges.c)
 */

__int64 __fastcall SepAccessCheck(
        __int64 a1,
        unsigned __int8 *a2,
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
        __int64 *a17,
        char *a18,
        char *a19,
        char a20)
{
  unsigned int v20; // ebp
  _QWORD *v21; // r12
  __int64 v23; // r9
  unsigned int v25; // r8d
  unsigned int v26; // r10d
  unsigned int v27; // esi
  __int16 v28; // cx
  __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // r12
  int v32; // edx
  unsigned int v33; // r8d
  _QWORD *v34; // rcx
  int v35; // edi
  _QWORD *v36; // r8
  __int64 v37; // r9
  int v38; // eax
  int v39; // eax
  unsigned int v40; // ecx
  int v41; // eax
  unsigned __int8 v42; // cl
  int v43; // ebx
  unsigned __int8 v44; // r12
  __int64 v46; // rcx
  int v47; // edi
  int v48; // edx
  int v49; // eax
  int v50; // edx
  int v51; // eax
  _DWORD *v52; // r8
  int v53; // edx
  int v54; // r10d
  char v55; // al
  int v56; // eax
  int v57; // edx
  unsigned __int8 v58; // r8
  _DWORD *v59; // rax
  int v60; // ecx
  char v61; // dl
  char v62; // r9
  int v63; // r10d
  unsigned int v64; // r10d
  bool v65; // zf
  char *v66; // rdi
  int *v67; // rcx
  __int64 v68; // r12
  int v69; // eax
  unsigned int v70; // r10d
  unsigned int v71; // esi
  __int64 v72; // rax
  __int64 v73; // rax
  int *v74; // rdi
  unsigned __int64 k; // rcx
  char *v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  int *v80; // rdi
  unsigned __int64 i; // rcx
  unsigned int *v82; // rdi
  unsigned __int64 j; // rcx
  unsigned int *v84; // rcx
  __int64 v85; // rax
  char v86; // [rsp+70h] [rbp-E8h]
  unsigned __int8 v87; // [rsp+71h] [rbp-E7h]
  char v88; // [rsp+72h] [rbp-E6h]
  unsigned __int8 v89; // [rsp+73h] [rbp-E5h]
  unsigned __int8 v90; // [rsp+74h] [rbp-E4h]
  int v91; // [rsp+78h] [rbp-E0h]
  unsigned int v92; // [rsp+7Ch] [rbp-DCh]
  int v93; // [rsp+7Ch] [rbp-DCh]
  unsigned int v94; // [rsp+80h] [rbp-D8h]
  _QWORD *v95; // [rsp+98h] [rbp-C0h]
  __int64 v98; // [rsp+C8h] [rbp-90h] BYREF
  int v99; // [rsp+D0h] [rbp-88h]
  _QWORD v100[2]; // [rsp+D8h] [rbp-80h] BYREF
  __int64 v101; // [rsp+E8h] [rbp-70h]
  __int64 v102; // [rsp+F0h] [rbp-68h]
  __int64 v103; // [rsp+F8h] [rbp-60h]
  __int64 v104; // [rsp+100h] [rbp-58h]

  v20 = 0;
  v21 = a12;
  v23 = (__int64)a16;
  v95 = a6;
  v100[0] = 0LL;
  if ( !a4 )
    a4 = a3;
  v100[1] = 0LL;
  v25 = a5;
  v26 = a5;
  v101 = 0LL;
  v102 = 0LL;
  v103 = 0LL;
  v104 = 0LL;
  v91 = 0;
  v90 = 0;
  v87 = 0;
  v89 = 0;
  v92 = a5;
  v94 = 1;
  if ( (a5 & 0x1000000) != 0 )
  {
    v98 = (__int64)SeSecurityPrivilege;
    v99 = 0;
    if ( !SepPrivilegeCheck(a4, (__int64)&v98, 1u, 1, a10) )
    {
      v27 = 0;
      v43 = -1073741727;
      v44 = v58;
LABEL_33:
      if ( a14 )
      {
        if ( a7 )
        {
          if ( a7 >= 4 )
          {
            v78 = a7 - 1;
            if ( a11 > (unsigned int *)&a13[v78] || &a11[v78] < (unsigned int *)a13 )
            {
              v79 = a7 & 0xFFFFFFFC;
              do
                v20 += 4;
              while ( v20 < (unsigned int)v79 );
              v80 = a13;
              for ( i = (unsigned __int64)(4 * v79) >> 2; i; --i )
                *v80++ = v43;
              v82 = a11;
              for ( j = (unsigned __int64)(4 * v79) >> 2; j; --j )
                *v82++ = v27;
            }
          }
          if ( v20 < a7 )
          {
            v84 = &a11[v20];
            v85 = a7 - v20;
            do
            {
              *(unsigned int *)((char *)v84 + (char *)a13 - (char *)a11) = v43;
              *v84++ = v27;
              --v85;
            }
            while ( v85 );
          }
        }
        goto LABEL_35;
      }
LABEL_34:
      *a13 = v43;
      *a11 = v27;
LABEL_35:
      if ( v43 < 0 )
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
      return v44;
    }
    v25 = a5;
    v32 = 1;
    v91 = 1;
    v26 = a5 & 0xFEFFFFFF;
    v90 = 1;
    v27 = a9 | 0x1000000;
    v92 = a5 & 0xFEFFFFFF;
    if ( (a5 & 0xFEFFFFFF) == 0 )
      goto LABEL_46;
    v23 = (__int64)a16;
  }
  else
  {
    v27 = a9;
  }
  v28 = *(_WORD *)(a1 + 2);
  if ( (v28 & 4) != 0 )
  {
    if ( v28 >= 0 )
    {
      v30 = *(_QWORD *)(a1 + 32);
    }
    else
    {
      v29 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v29 )
        v30 = a1 + v29;
      else
        v30 = 0LL;
    }
  }
  else
  {
    v30 = 0LL;
  }
  if ( (v28 & 0x10) != 0 )
  {
    if ( v28 < 0 )
    {
      v46 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v46 )
        v31 = a1 + v46;
      else
        v31 = 0LL;
    }
    else
    {
      v31 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    v31 = 0LL;
  }
  if ( (*(_WORD *)(a1 + 2) & 4) == 0 || !v30 )
  {
    v27 |= v25;
    if ( (v25 & 0x2000000) != 0 )
      v27 = a8[3] | v27 & 0xFDFFFFFF;
    if ( (*(_DWORD *)(a4 + 200) & 0x4000) != 0 )
    {
      v27 = 0;
      *(_DWORD *)(v23 + 4) = 0;
      *(_BYTE *)(v23 + 21) = 0;
      goto LABEL_57;
    }
    v32 = v91;
LABEL_45:
    v21 = a12;
LABEL_46:
    v42 = 0;
    goto LABEL_29;
  }
  if ( (v26 & 0x80000) == 0 )
  {
    v32 = v91;
LABEL_16:
    v33 = 1;
    goto LABEL_17;
  }
  v98 = SeTakeOwnershipPrivilege;
  v99 = 0;
  if ( SepPrivilegeCheck(a4, (__int64)&v98, 1u, 1, a10) )
  {
    v27 |= 0x80000u;
    v26 = v92 & 0xFFF7FFFF;
    v32 = v91 + 1;
    v92 = v26;
    ++v91;
    v42 = 1;
    v87 = 1;
    if ( !v26 )
    {
      v21 = a12;
      goto LABEL_29;
    }
    goto LABEL_16;
  }
  v98 = SeRelabelPrivilege;
  v99 = 0;
  v55 = SepPrivilegeCheck(a4, (__int64)&v98, 1u, 1, a10);
  v26 = v92;
  v32 = v91;
  if ( v55 )
  {
    v26 = v92 & 0xFFF7FFFF;
    v89 = v33;
    v32 = v91 + 1;
    v92 = v26;
    v27 |= 0x80000u;
    ++v91;
    if ( !v26 )
      goto LABEL_45;
  }
LABEL_17:
  if ( !*(_WORD *)(v30 + 4) )
  {
    v59 = a16;
    a16[3] = v26;
    v60 = *(_DWORD *)(a4 + 200);
    if ( (v60 & 0x4000) != 0 )
    {
      v27 &= ~*a16;
      v59 = a16;
    }
    if ( v26 == 0x2000000 )
    {
      if ( v27 )
      {
LABEL_105:
        v21 = a12;
        v42 = v87;
        goto LABEL_29;
      }
    }
    else if ( !v26 && *v59 && v27 && (v60 & 0x6000) == 0 )
    {
      goto LABEL_105;
    }
    v27 = 0;
    goto LABEL_57;
  }
  if ( a7 )
  {
    v34 = a6;
    v33 = a7;
    v94 = a7;
  }
  else
  {
    v34 = v100;
    HIDWORD(v101) = -1;
    v95 = v100;
  }
  v35 = a5 & 0x2000000;
  if ( (a5 & 0x2000000) == 0 && !a14 )
  {
    SepNormalAccessCheck(v26, a4, a3, v30, v31, a17, a2, v33, (__int64)v34, a7, 0, a15, (__int64)a16, a20);
    v36 = v95;
    v37 = (__int64)a16;
    a16[3] = *((_DWORD *)v95 + 6);
    if ( *((_DWORD *)v95 + 6) )
      goto LABEL_62;
    v38 = *(_DWORD *)(a4 + 200);
    if ( (v38 & 0x10) != 0 )
    {
      if ( (v38 & 8) != 0 )
        v54 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
      else
        v54 = a8[3] | 0x1FFFFF;
      v40 = a5;
      v39 = 0;
      if ( (v54 & a5) == 0 )
      {
LABEL_26:
        *(_DWORD *)(v37 + 12) = v39;
        if ( *((_DWORD *)v36 + 6) )
          goto LABEL_62;
        v41 = *(_DWORD *)(a4 + 200);
        if ( (v41 & 0x2000) != 0 )
        {
LABEL_28:
          v32 = v91;
          v27 |= v40;
          v42 = v87;
          v21 = a12;
          goto LABEL_29;
        }
        v47 = v40 | v92;
        if ( (v41 & 0x4000) != 0 )
        {
          v48 = ~(*(_DWORD *)(v37 + 4) | *(_DWORD *)(v37 + 8));
          v49 = v47 | *(_DWORD *)v37;
        }
        else
        {
          if ( !*(_BYTE *)(v37 + 20) )
          {
            v50 = 0;
LABEL_61:
            *((_DWORD *)v36 + 6) = v50;
            if ( !v50 )
              goto LABEL_28;
LABEL_62:
            v43 = -1073741790;
            v27 = 0;
            v44 = 1;
            goto LABEL_34;
          }
          v48 = v47 | *(_DWORD *)v37;
          v49 = ~*(_DWORD *)(v37 + 4);
        }
        v50 = v49 & v48;
        goto LABEL_61;
      }
      SepNormalAccessCheck(v54 & v92, a4, a3, v30, v31, a17, a2, v94, (__int64)v95, a7, 1, a15, (__int64)a16, a20);
      v36 = v95;
      v37 = (__int64)a16;
      v39 = *((_DWORD *)v95 + 6);
    }
    else
    {
      v39 = 0;
    }
    v40 = a5;
    goto LABEL_26;
  }
  SepMaximumAccessCheck(a4, a3, v30, v31, a17, (__int64)a2, v33, (__int64)v34, a7, 0, 0, a15, a16, a20);
  v51 = *(_DWORD *)(a4 + 200);
  if ( (v51 & 0x10) != 0 )
  {
    if ( (v51 & 8) != 0 )
      v57 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
    else
      v57 = a8[3] | 0x1FFFFF;
    SepMaximumAccessCheck(a4, a3, v30, v31, a17, (__int64)a2, v94, (__int64)v95, a7, v57, 1, a15, a16, a20);
    v51 = *(_DWORD *)(a4 + 200);
  }
  v52 = (_DWORD *)v95 + 7;
  v53 = *((_DWORD *)v95 + 7);
  if ( (v51 & 0x2000) == 0 )
  {
    if ( (v51 & 0x4000) != 0 )
    {
      v56 = *a16;
      v53 &= a16[1] | a16[2];
    }
    else
    {
      if ( !*((_BYTE *)a16 + 20) )
        goto LABEL_65;
      v53 &= a16[1];
      v56 = *a16;
    }
    v27 &= ~v56;
  }
LABEL_65:
  if ( !a14 )
  {
    if ( (~(v53 | 0x2000000) & v92) != 0 )
      goto LABEL_62;
    v21 = a12;
    v27 |= v53;
    v32 = v91;
    v42 = v87;
LABEL_29:
    if ( v27 )
    {
      v43 = 0;
      if ( KeGetCurrentIrql() < 2u )
      {
        if ( v32 )
        {
          SepAssemblePrivileges(v91, v90, v42, v89, (__int64)v21);
          if ( v21 )
          {
            if ( !*v21 )
            {
              v44 = 0;
              v43 = -1073741801;
              v27 = 0;
              goto LABEL_33;
            }
          }
        }
      }
LABEL_32:
      v44 = 1;
      goto LABEL_33;
    }
LABEL_57:
    v43 = -1073741790;
    goto LABEL_32;
  }
  v61 = 0;
  v62 = 0;
  v63 = v27 | a5;
  if ( v35 )
    v63 = -33554433;
  v93 = v63;
  v64 = (v27 | a5) & 0xFDFFFFFF;
  v65 = v35 == 0;
  v66 = (char *)a11;
  if ( v65 )
    v64 = v27 | a5;
  v67 = a13;
  v68 = v94;
  do
  {
    v65 = (v93 & (v27 | *v52)) == 0;
    v69 = v93 & (v27 | *v52);
    *(int *)((char *)v67 + (char *)a11 - (char *)a13) = v69;
    if ( v65 )
    {
      *v67 = -1073741790;
      v62 = 1;
    }
    else if ( (~v69 & v64) != 0 )
    {
      *v67 = -1073741790;
      v62 = 1;
    }
    else
    {
      *v67 = 0;
      v61 = 1;
    }
    v52 += 12;
    ++v67;
    --v68;
  }
  while ( v68 );
  v86 = v62;
  v88 = v61;
  if ( KeGetCurrentIrql() < 2u && v61 && v91 )
  {
    SepAssemblePrivileges(v91, v90, v87, v89, (__int64)a12);
    if ( a12 && !*a12 )
    {
      v70 = v94;
      v44 = 0;
      v61 = 0;
      v62 = 1;
      v71 = 0;
      if ( v94 >= 4 )
      {
        v72 = v94 - 1;
        if ( a11 > (unsigned int *)&a13[v72] || &a11[v72] < (unsigned int *)a13 )
        {
          v73 = v94 & 0xFFFFFFFC;
          do
            v71 += 4;
          while ( v71 < (unsigned int)v73 );
          v74 = a13;
          for ( k = (unsigned __int64)(4 * v73) >> 2; k; --k )
            *v74++ = -1073741801;
          v66 = (char *)a11;
          memset(a11, 0, 4 * v73);
          v62 = 1;
          v61 = 0;
          v70 = v94;
        }
      }
      if ( v71 < v70 )
      {
        v76 = &v66[4 * v71];
        v77 = v70 - v71;
        do
        {
          *(_DWORD *)&v76[(char *)a13 - v66] = -1073741801;
          *(_DWORD *)v76 = 0;
          v76 += 4;
          --v77;
        }
        while ( v77 );
      }
      goto LABEL_143;
    }
    v62 = v86;
    v61 = v88;
  }
  v44 = 1;
LABEL_143:
  if ( a18 )
    *a18 = v61;
  if ( a19 )
    *a19 = v62;
  return v44;
}
