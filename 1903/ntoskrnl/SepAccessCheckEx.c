/*
 * XREFs of SepAccessCheckEx @ 0x140156320
 * Callers:
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140155C04 (SepCommonAccessCheckExWithAdminlessChecks.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140005340 (SepPrivilegeCheck.c)
 *     AuthzBasepSetTypeListAccessReasons @ 0x140156698 (AuthzBasepSetTypeListAccessReasons.c)
 *     SepMaximumAccessCheckEx @ 0x1401566F8 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheckEx @ 0x140156818 (SepNormalAccessCheckEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SepAssemblePrivileges @ 0x1406CDE50 (SepAssemblePrivileges.c)
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
        bool *a20,
        __int64 a21,
        char a22)
{
  char v25; // r13
  unsigned int v27; // r10d
  unsigned int v28; // esi
  unsigned int v29; // r12d
  _QWORD *v30; // rax
  __int64 v31; // rcx
  unsigned int v32; // edi
  __int64 v33; // rdx
  __int16 v34; // ax
  unsigned int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // r15
  int v38; // eax
  int v39; // r9d
  int v40; // ecx
  int v41; // ebx
  int v43; // eax
  int v44; // eax
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // rax
  char v48; // al
  int v49; // r9d
  int v50; // r8d
  int v51; // ecx
  int v52; // edx
  unsigned int v53; // r8d
  int v54; // ecx
  int v55; // r10d
  int v56; // esi
  int v57; // ecx
  int v58; // ecx
  int v59; // edx
  unsigned int v60; // [rsp+20h] [rbp-E0h]
  int v61; // [rsp+28h] [rbp-D8h]
  int v62; // [rsp+28h] [rbp-D8h]
  char v63; // [rsp+80h] [rbp-80h]
  char v64; // [rsp+81h] [rbp-7Fh]
  char v65; // [rsp+82h] [rbp-7Eh]
  int v66; // [rsp+84h] [rbp-7Ch]
  __int64 v67; // [rsp+88h] [rbp-78h]
  int v69; // [rsp+90h] [rbp-70h]
  int v70; // [rsp+A0h] [rbp-60h]
  LUID v71; // [rsp+C8h] [rbp-38h] BYREF
  int v72; // [rsp+D0h] [rbp-30h]
  __int64 v73; // [rsp+D8h] [rbp-28h] BYREF
  int v74; // [rsp+E0h] [rbp-20h]
  _DWORD v75[12]; // [rsp+E8h] [rbp-18h] BYREF

  v25 = 1;
  v70 = a3;
  v66 = 0;
  v63 = 0;
  v65 = 0;
  v64 = 0;
  memset(v75, 0, sizeof(v75));
  v27 = a5;
  if ( !a4 )
    a4 = a3;
  v28 = a5;
  v67 = a4;
  if ( a7 )
  {
    v29 = a7;
  }
  else
  {
    v75[5] = -1;
    a6 = v75;
    v29 = 1;
  }
  v30 = a6 + 10;
  v31 = v29;
  do
  {
    *v30 = a14;
    a14 += 128LL;
    v30 += 6;
    --v31;
  }
  while ( v31 );
  if ( (a5 & 0x1000000) == 0 )
  {
    v32 = a9;
    goto LABEL_9;
  }
  v71 = SeSecurityPrivilege;
  v72 = 0;
  v48 = SepPrivilegeCheck(a4, (__int64)&v71, 1u, 1, a10);
  v49 = (int)a6;
  v60 = v29;
  v50 = 8;
  if ( !v48 )
  {
    v32 = 0;
    v41 = -1073741727;
    v51 = 0x1000000;
    v52 = 0x100000;
    goto LABEL_54;
  }
  v32 = a9 | 0x1000000;
  AuthzBasepSetTypeListAccessReasons(0x1000000, 0x200000, 8, (_DWORD)a6, v29, 0);
  v39 = 0;
  v40 = 1;
  v66 = 1;
  LOBYTE(v33) = 1;
  v63 = 1;
  v28 = a5 & 0xFEFFFFFF;
  if ( (a5 & 0xFEFFFFFF) != 0 )
  {
    v27 = a5;
LABEL_9:
    v33 = a1;
    v34 = *(_WORD *)(a1 + 2);
    v35 = (unsigned __int16)v34;
    LOWORD(v35) = v34 & 4;
    if ( (v34 & 4) != 0 )
    {
      if ( v34 >= 0 )
      {
        v37 = *(_QWORD *)(a1 + 32);
        goto LABEL_13;
      }
      v36 = *(unsigned int *)(a1 + 16);
      if ( (_DWORD)v36 )
      {
        v37 = a1 + v36;
LABEL_13:
        v69 = v37;
        goto LABEL_14;
      }
    }
    v37 = 0LL;
    v69 = 0;
LABEL_14:
    if ( (v34 & 0x10) == 0 )
    {
LABEL_15:
      v71 = 0LL;
LABEL_16:
      if ( !(_WORD)v35 || !v37 )
      {
        v32 |= v27;
        if ( (v27 & 0x2000000) != 0 )
        {
          v32 = a8[3] | v32 & 0xFDFFFFFF;
          AuthzBasepSetTypeListAccessReasons(v32, 5242880, 0, (_DWORD)a6, v29, 0);
          v39 = 0;
          LODWORD(v33) = *(_DWORD *)(v67 + 200);
          if ( (v33 & 0x4000) == 0 )
            goto LABEL_26;
          v32 = 0;
          AuthzBasepSetTypeListAccessReasons(0, 5242880, v35, (_DWORD)a6, v29, 1);
        }
        else
        {
          AuthzBasepSetTypeListAccessReasons(v27, 5242880, 0, (_DWORD)a6, v29, 0);
          LODWORD(v33) = *(_DWORD *)(v67 + 200);
          if ( (v33 & 0x4000) == 0 )
          {
LABEL_25:
            v39 = 0;
LABEL_26:
            v40 = v66;
LABEL_27:
            LOBYTE(v33) = v63;
            goto LABEL_28;
          }
          v32 = 0;
          AuthzBasepSetTypeListAccessReasons(0, 5242880, v35, (_DWORD)a6, v29, 0);
        }
        *(_BYTE *)(a18 + 21) = 0;
        *(_DWORD *)(a18 + 4) = 0;
        goto LABEL_99;
      }
      if ( (v28 & 0x80000) == 0 )
        goto LABEL_19;
      v73 = SeTakeOwnershipPrivilege;
      v74 = 0;
      if ( SepPrivilegeCheck(v67, (__int64)&v73, 1u, 1, a10) )
      {
        v32 |= 0x80000u;
        AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 9, (_DWORD)a6, v29, 0);
        v65 = 1;
      }
      else
      {
        v73 = SeRelabelPrivilege;
        v74 = 0;
        if ( !SepPrivilegeCheck(v67, (__int64)&v73, v53, 1, a10) )
        {
LABEL_19:
          if ( *(_WORD *)(v37 + 4) )
          {
            if ( (a5 & 0x2000000) != 0 )
            {
              SepMaximumAccessCheckEx(
                v67,
                v70,
                v69,
                v71.LowPart,
                a19,
                v61,
                v29,
                (__int64)a6,
                a7,
                0,
                0,
                a16,
                a17,
                a18,
                a22);
              AuthzBasepSetTypeListAccessReasons(-1, 0x800000, 0, (_DWORD)a6, v29, 0);
              v38 = *(_DWORD *)(v67 + 200);
              if ( (v38 & 0x10) != 0 )
              {
                if ( (v38 & 8) != 0 )
                  v59 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
                else
                  v59 = a8[3] | 0x1FFFFF;
                SepMaximumAccessCheckEx(
                  v67,
                  v70,
                  v69,
                  v71.LowPart,
                  a19,
                  v62,
                  v29,
                  (__int64)a6,
                  a7,
                  v59,
                  1,
                  a16,
                  a17,
                  a18,
                  a22);
                v38 = *(_DWORD *)(v67 + 200);
              }
              LODWORD(v33) = a6[7];
              if ( (v38 & 0x2000) == 0 )
              {
                if ( (v38 & 0x4000) != 0 )
                {
                  LODWORD(v33) = (*(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8)) & v33;
                  v32 &= ~*(_DWORD *)a18;
                }
                else if ( *(_BYTE *)(a18 + 20) )
                {
                  LODWORD(v33) = *(_DWORD *)(a18 + 4) & v33;
                  v32 &= ~*(_DWORD *)a18;
                }
              }
              if ( (~((unsigned int)v33 | 0x2000000) & v28) != 0 )
              {
                v41 = -1073741790;
                v32 = 0;
                goto LABEL_31;
              }
              v32 |= v33;
              goto LABEL_25;
            }
            SepNormalAccessCheckEx(v28, v67, v70, v69, *(_QWORD *)&v71, a19);
            *(_DWORD *)(a18 + 12) = a6[6];
            if ( a6[6] )
            {
LABEL_35:
              v41 = -1073741790;
LABEL_36:
              v32 = 0;
              goto LABEL_31;
            }
            v33 = v67;
            v43 = *(_DWORD *)(v67 + 200);
            if ( (v43 & 0x10) != 0 )
            {
              if ( (v43 & 8) != 0 )
                v55 = a8[1] & ~(*a8 | a8[2]) | 0x10D0000;
              else
                v55 = a8[3] | 0x1FFFFF;
              v35 = a5;
              v44 = 0;
              if ( (v55 & a5) == 0 )
              {
LABEL_41:
                *(_DWORD *)(a18 + 12) = v44;
                if ( a6[6] )
                  goto LABEL_35;
                v45 = *(_DWORD *)(v33 + 200);
                if ( (v45 & 0x2000) != 0 )
                {
                  v39 = 0;
LABEL_44:
                  v32 |= v35;
                  goto LABEL_26;
                }
                v56 = v35 | v28;
                if ( (v45 & 0x4000) != 0 )
                {
                  v57 = *(_DWORD *)(a18 + 4) | *(_DWORD *)(a18 + 8);
                }
                else
                {
                  v58 = 0;
                  if ( !*(_BYTE *)(a18 + 20) )
                    goto LABEL_84;
                  v57 = *(_DWORD *)(a18 + 4);
                }
                v58 = (*(_DWORD *)a18 | v56) & ~v57;
LABEL_84:
                v39 = 0;
                a6[6] = v58;
                if ( v58 )
                {
                  v41 = -1073741790;
                  v32 = 0;
                  goto LABEL_31;
                }
                goto LABEL_44;
              }
              SepNormalAccessCheckEx(v28 & v55, v67, v70, v69, *(_QWORD *)&v71, a19);
              v44 = a6[6];
              v33 = v67;
            }
            else
            {
              v44 = 0;
            }
            v35 = a5;
            goto LABEL_41;
          }
          *(_DWORD *)(a18 + 12) = v28;
          v54 = *(_DWORD *)(v67 + 200);
          if ( (v54 & 0x4000) != 0 )
            v32 &= ~*(_DWORD *)a18;
          v39 = 0;
          if ( v28 == 0x2000000 )
          {
            if ( v32 )
              goto LABEL_26;
          }
          else if ( !v28 && *(_DWORD *)a18 && v32 && (v54 & 0x6000) == 0 )
          {
            goto LABEL_26;
          }
          v32 = 0;
          v60 = v29;
          v49 = (int)a6;
          v41 = -1073741790;
          v50 = 0;
          v52 = 6291456;
          v51 = -33554433;
LABEL_54:
          AuthzBasepSetTypeListAccessReasons(v51, v52, v50, v49, v60, 0);
          goto LABEL_31;
        }
        v32 |= 0x80000u;
        AuthzBasepSetTypeListAccessReasons(0x80000, 0x200000, 32, (_DWORD)a6, v29, 0);
        v64 = 1;
      }
      v39 = 0;
      v40 = ++v66;
      v28 &= ~0x80000u;
      if ( !v28 )
        goto LABEL_27;
      goto LABEL_19;
    }
    if ( v34 >= 0 )
    {
      v47 = *(_QWORD *)(v33 + 24);
    }
    else
    {
      v46 = *(unsigned int *)(v33 + 12);
      if ( !(_DWORD)v46 )
        goto LABEL_15;
      v47 = v33 + v46;
    }
    v71 = (LUID)v47;
    goto LABEL_16;
  }
LABEL_28:
  if ( !v32 )
  {
LABEL_99:
    v41 = -1073741790;
    goto LABEL_31;
  }
  v41 = 0;
  if ( KeGetCurrentIrql() < 2u )
  {
    v41 = 0;
    if ( v40 )
    {
      LOBYTE(v39) = v64;
      LOBYTE(v35) = v65;
      SepAssemblePrivileges(v40, v33, v35, v39, (__int64)a12);
      if ( a12 )
      {
        if ( !*a12 )
        {
          v25 = 0;
          v41 = -1073741801;
          goto LABEL_36;
        }
      }
    }
  }
LABEL_31:
  *a13 = v41;
  *a11 = v32;
  if ( a20 )
    *a20 = v41 >= 0;
  return v25;
}
