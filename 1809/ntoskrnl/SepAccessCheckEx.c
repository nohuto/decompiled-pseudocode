/*
 * XREFs of SepAccessCheckEx @ 0x14015BED8
 * Callers:
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B7C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1400A7C90 (SepPrivilegeCheck.c)
 *     AuthzBasepSetTypeListAccessReasons @ 0x14015C254 (AuthzBasepSetTypeListAccessReasons.c)
 *     SepMaximumAccessCheckEx @ 0x14015C2B4 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x14015C3D4 (SepNormalAccessCheckEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SepAssemblePrivileges @ 0x1406B33C4 (SepAssemblePrivileges.c)
 */

char __fastcall SepAccessCheckEx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6,
        unsigned int a7,
        _DWORD *a8,
        unsigned int a9,
        char a10,
        unsigned int *a11,
        _QWORD *a12,
        int *a13,
        __int64 a14,
        __int64 a15,
        char a16,
        char a17,
        __int64 a18,
        __int64 a19,
        _BYTE *a20,
        __int64 a21,
        char a22)
{
  __int64 v22; // r15
  _QWORD *v23; // r13
  unsigned int v24; // r10d
  unsigned int v25; // r14d
  unsigned int v28; // r12d
  _QWORD *v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // edi
  __int16 v32; // ax
  int v33; // r8d
  unsigned int v34; // edx
  __int64 v35; // rdx
  __int64 v36; // r13
  int v37; // eax
  int v38; // ecx
  int v39; // ebx
  char v40; // cl
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int v47; // r8d
  char v48; // al
  int v49; // ecx
  int v50; // r10d
  int v51; // r14d
  int v52; // ecx
  int v53; // edx
  int v54; // [rsp+28h] [rbp-D8h]
  int v55; // [rsp+28h] [rbp-D8h]
  char v56; // [rsp+28h] [rbp-D8h]
  char v57; // [rsp+81h] [rbp-7Fh]
  char v58; // [rsp+82h] [rbp-7Eh]
  char v59; // [rsp+83h] [rbp-7Dh]
  int v60; // [rsp+84h] [rbp-7Ch]
  __int64 v62; // [rsp+88h] [rbp-78h]
  int v63; // [rsp+A8h] [rbp-58h]
  __int64 v64; // [rsp+C8h] [rbp-38h] BYREF
  int v65; // [rsp+D0h] [rbp-30h]
  _DWORD v66[12]; // [rsp+D8h] [rbp-28h] BYREF

  v22 = a4;
  v23 = a12;
  v24 = a5;
  v25 = a5;
  if ( !a4 )
    v22 = a3;
  v63 = a3;
  v60 = 0;
  v57 = 0;
  v59 = 0;
  v58 = 0;
  if ( a7 )
  {
    v28 = a7;
  }
  else
  {
    v28 = 1;
    a6 = v66;
    memset(v66, 0, sizeof(v66));
    v66[5] = -1;
    v24 = a5;
  }
  v29 = a6 + 10;
  v30 = v28;
  do
  {
    *v29 = a14;
    a14 += 128LL;
    v29 += 6;
    --v30;
  }
  while ( v30 );
  if ( (v24 & 0x1000000) == 0 )
  {
    v31 = a9;
    goto LABEL_9;
  }
  v64 = (__int64)SeSecurityPrivilege;
  v65 = 0;
  if ( !SepPrivilegeCheck(v22, (__int64)&v64, 1u, 1, a10) )
  {
    v31 = 0;
    v39 = -1073741727;
    AuthzBasepSetTypeListAccessReasons(0x1000000, 0x100000, 8, (_DWORD)a6, v28, 0);
    goto LABEL_29;
  }
  v31 = a9 | 0x1000000;
  AuthzBasepSetTypeListAccessReasons(0x1000000, 0x200000, 8, (_DWORD)a6, v28, 0);
  v38 = 1;
  v60 = 1;
  LOBYTE(v34) = 1;
  v57 = 1;
  v25 = a5 & 0xFEFFFFFF;
  if ( (a5 & 0xFEFFFFFF) != 0 )
  {
    v24 = a5;
LABEL_9:
    v32 = *(_WORD *)(a1 + 2);
    v33 = (unsigned __int16)v32;
    LOWORD(v33) = v32 & 4;
    if ( (v32 & 4) != 0 )
    {
      v34 = 0;
      if ( v32 >= 0 )
      {
        v36 = *(_QWORD *)(a1 + 32);
        goto LABEL_13;
      }
      v35 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v35 )
      {
        v36 = a1 + v35;
        v34 = 0;
        goto LABEL_13;
      }
    }
    v34 = 0;
    v36 = 0LL;
LABEL_13:
    if ( (v32 & 0x10) == 0 )
    {
LABEL_14:
      v62 = 0LL;
LABEL_15:
      if ( (_WORD)v33 && v36 )
      {
        if ( (v25 & 0x80000) == 0 )
          goto LABEL_18;
        v64 = SeTakeOwnershipPrivilege;
        v65 = 0;
        if ( SepPrivilegeCheck(v22, (__int64)&v64, 1u, 1, a10) )
        {
          v31 |= 0x80000u;
          AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 9, (_DWORD)a6, v28, 0);
          v59 = 1;
        }
        else
        {
          v64 = SeRelabelPrivilege;
          v65 = 0;
          v48 = SepPrivilegeCheck(v22, (__int64)&v64, v47, v47, a10);
          v34 = 0;
          if ( !v48 )
            goto LABEL_18;
          v31 |= 0x80000u;
          AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 32, (_DWORD)a6, v28, 0);
          v58 = 1;
        }
        v34 = 0;
        v38 = ++v60;
        v25 &= ~0x80000u;
        if ( !v25 )
          goto LABEL_25;
LABEL_18:
        if ( !*(_WORD *)(v36 + 4) )
        {
          *(_DWORD *)(a18 + 12) = v25;
          v49 = *(_DWORD *)(v22 + 200);
          if ( (v49 & 0x4000) != 0 )
            v31 &= ~*(_DWORD *)a18;
          if ( v25 == 0x2000000 )
          {
            if ( v31 )
              goto LABEL_24;
          }
          else if ( !v25 && *(_DWORD *)a18 && v31 && (v49 & 0x6000) == 0 )
          {
            goto LABEL_24;
          }
          v31 = 0;
          v39 = -1073741790;
          AuthzBasepSetTypeListAccessReasons(-33554433, 6291456, 0, (_DWORD)a6, v28, 0);
LABEL_29:
          v40 = 1;
          goto LABEL_30;
        }
        if ( (a5 & 0x2000000) != 0 )
        {
          SepMaximumAccessCheckEx(v22, v63, v36, v62, a19, v54, v28, (__int64)a6, a7, 0, 0, a16, a17, a18, a22);
          AuthzBasepSetTypeListAccessReasons(-1, 0x800000, 0, (_DWORD)a6, v28, 0);
          v37 = *(_DWORD *)(v22 + 200);
          if ( (v37 & 0x10) != 0 )
          {
            if ( (v37 & 8) != 0 )
              v53 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
            else
              v53 = a8[3] | 0x1FFFFF;
            SepMaximumAccessCheckEx(v22, v63, v36, v62, a19, v55, v28, (__int64)a6, a7, v53, 1, a16, a17, a18, a22);
            v37 = *(_DWORD *)(v22 + 200);
          }
          v34 = a6[7];
          if ( (v37 & 0x2000) == 0 )
          {
            if ( (v37 & 0x4000) != 0 )
            {
              v34 &= *(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8);
            }
            else
            {
              if ( !*(_BYTE *)(a18 + 20) )
                goto LABEL_22;
              v34 &= *(_DWORD *)(a18 + 4);
            }
            v31 &= ~*(_DWORD *)a18;
          }
LABEL_22:
          if ( (~(v34 | 0x2000000) & v25) == 0 )
          {
            v31 |= v34;
LABEL_24:
            v38 = v60;
LABEL_25:
            LOBYTE(v34) = v57;
            v23 = a12;
            goto LABEL_26;
          }
          goto LABEL_35;
        }
        SepNormalAccessCheckEx(v25, v22, v63, v36, v62, a19);
        *(_DWORD *)(a18 + 12) = a6[6];
        if ( a6[6] )
        {
LABEL_35:
          v39 = -1073741790;
          v31 = 0;
          goto LABEL_29;
        }
        v42 = *(_DWORD *)(v22 + 200);
        v43 = 0;
        if ( (v42 & 0x10) != 0 )
        {
          if ( (v42 & 8) != 0 )
            v50 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
          else
            v50 = a8[3] | 0x1FFFFF;
          v43 = 0;
          v34 = a5;
          if ( (v50 & a5) == 0 )
            goto LABEL_41;
          SepNormalAccessCheckEx(v25 & v50, v22, v63, v36, v62, a19);
          v43 = a6[6];
        }
        v34 = a5;
LABEL_41:
        LODWORD(a4) = 0;
        *(_DWORD *)(a18 + 12) = v43;
        if ( a6[6] )
          goto LABEL_35;
        v44 = *(_DWORD *)(v22 + 200);
        if ( (v44 & 0x2000) == 0 )
        {
          v51 = v34 | v25;
          if ( (v44 & 0x4000) != 0 )
            v52 = (v51 | *(_DWORD *)a18) & ~(*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8));
          else
            v52 = *(_BYTE *)(a18 + 20) ? ~*(_DWORD *)(a18 + 4) & (v51 | *(_DWORD *)a18) : 0;
          a6[6] = v52;
          if ( v52 )
            goto LABEL_35;
        }
        v31 |= v34;
        goto LABEL_44;
      }
      v31 |= v24;
      if ( (v24 & 0x2000000) != 0 )
      {
        v31 = a8[3] | v31 & 0xFDFFFFFF;
        AuthzBasepSetTypeListAccessReasons(v31, 5242880, 0, (_DWORD)a6, v28, 0);
        v34 = *(_DWORD *)(v22 + 200);
        if ( (v34 & 0x4000) != 0 )
        {
          v56 = 1;
LABEL_96:
          v31 = 0;
          AuthzBasepSetTypeListAccessReasons(0, 5242880, v33, (_DWORD)a6, v28, v56);
          *(_BYTE *)(a18 + 21) = 0;
          *(_DWORD *)(a18 + 4) = 0;
          goto LABEL_97;
        }
      }
      else
      {
        AuthzBasepSetTypeListAccessReasons(v24, 5242880, 0, (_DWORD)a6, v28, 0);
        v34 = *(_DWORD *)(v22 + 200);
        if ( (v34 & 0x4000) != 0 )
        {
          v56 = 0;
          goto LABEL_96;
        }
      }
LABEL_44:
      v38 = v60;
      v23 = a12;
      LOBYTE(v34) = v57;
      goto LABEL_26;
    }
    if ( v32 >= 0 )
    {
      v46 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      v45 = *(unsigned int *)(a1 + 12);
      if ( !(_DWORD)v45 )
        goto LABEL_14;
      v46 = a1 + v45;
    }
    v62 = v46;
    goto LABEL_15;
  }
LABEL_26:
  if ( !v31 )
  {
LABEL_97:
    v39 = -1073741790;
    goto LABEL_29;
  }
  v39 = 0;
  if ( KeGetCurrentIrql() >= 2u )
    goto LABEL_29;
  if ( !v38 )
    goto LABEL_29;
  LOBYTE(a4) = v58;
  LOBYTE(v33) = v59;
  SepAssemblePrivileges(v38, v34, v33, a4, (__int64)v23);
  if ( !v23 || *v23 )
    goto LABEL_29;
  v40 = 0;
  v39 = -1073741801;
  v31 = 0;
LABEL_30:
  *a13 = v39;
  *a11 = v31;
  if ( v39 < 0 )
  {
    if ( a20 )
      *a20 = 0;
  }
  else if ( a20 )
  {
    *a20 = 1;
  }
  return v40;
}
