/*
 * XREFs of SepMaximumAccessCheck @ 0x1400866E0
 * Callers:
 *     SepAccessCheck @ 0x1400A9DD0 (SepAccessCheck.c)
 * Callees:
 *     RtlEqualSid @ 0x140005470 (RtlEqualSid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140085530 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepIsPackageSid @ 0x140086D2C (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140086D84 (SepIsCapabilitySid.c)
 *     SepMatchPackage @ 0x140086DDC (SepMatchPackage.c)
 *     SepMatchCapability @ 0x140086E64 (SepMatchCapability.c)
 *     SepSidInToken @ 0x140086EB8 (SepSidInToken.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400D0200 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepAddAccessTypeList @ 0x140112744 (AuthzBasepAddAccessTypeList.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x14034623C (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        unsigned int a7,
        __int64 a8,
        int a9,
        int a10,
        char a11,
        char a12,
        _DWORD *a13,
        char a14)
{
  unsigned int v14; // r10d
  __int64 v15; // r11
  __int64 v16; // rbp
  int v17; // esi
  char v18; // di
  int v19; // r13d
  __int64 result; // rax
  char *v21; // rbx
  unsigned int v22; // r14d
  __int64 v23; // r15
  char v24; // al
  unsigned __int8 *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rdi
  __int16 v28; // r13
  size_t v29; // r8
  unsigned __int64 v30; // rax
  int v31; // ecx
  unsigned __int64 v32; // rbp
  int v33; // r12d
  __int64 v34; // rdx
  __int64 v35; // r15
  unsigned __int64 v36; // rax
  unsigned int v37; // ebp
  __int64 v38; // rdx
  unsigned int *v39; // rcx
  unsigned int *v40; // rcx
  __int64 v41; // r8
  unsigned int v42; // eax
  unsigned __int16 v43; // cx
  unsigned int v44; // edi
  _QWORD *v45; // rax
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r10
  int v49; // edx
  __int64 v50; // rcx
  unsigned int v51; // edx
  int v52; // ecx
  char v53; // al
  __int64 v54; // rax
  unsigned int v55; // r12d
  int v56; // eax
  char *v57; // rdi
  int v58; // ecx
  char v59; // al
  unsigned int v60; // r8d
  char *v61; // rcx
  int v62; // [rsp+28h] [rbp-B0h]
  int v63; // [rsp+60h] [rbp-78h] BYREF
  unsigned int Size; // [rsp+64h] [rbp-74h]
  int Size_4; // [rsp+68h] [rbp-70h] BYREF
  int v66; // [rsp+6Ch] [rbp-6Ch]
  int v67; // [rsp+70h] [rbp-68h]
  unsigned int v68; // [rsp+74h] [rbp-64h]
  int v69; // [rsp+78h] [rbp-60h]
  __int64 v70; // [rsp+80h] [rbp-58h]
  char v73; // [rsp+F0h] [rbp+18h]
  __int64 v74; // [rsp+F0h] [rbp+18h]
  __int64 v75; // [rsp+F8h] [rbp+20h]

  v75 = a4;
  v14 = a7;
  LODWORD(v15) = 0;
  v16 = a1;
  v17 = *(_DWORD *)(a1 + 200) & 0x2000;
  v18 = a11;
  v19 = a2;
  v69 = v17;
  Size_4 = -1;
  if ( a11 && a7 )
  {
    v38 = a7;
    v39 = (unsigned int *)(a8 + 28);
    do
    {
      *(_QWORD *)(v39 - 1) = *v39;
      v39 += 12;
      --v38;
    }
    while ( v38 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v21 = (char *)(a3 + 8);
  v68 = result;
  v22 = 0;
  if ( !(_DWORD)result )
    goto LABEL_34;
  v23 = a6;
  do
  {
    if ( (v21[1] & 8) != 0 )
      goto LABEL_33;
    v24 = *v21;
    if ( *v21 )
    {
      switch ( v24 )
      {
        case 5:
          v56 = *((_DWORD *)v21 + 2);
          v57 = v21 + 12;
          v58 = v56 & 1;
          if ( (v56 & 1) == 0 )
            v57 = 0LL;
          if ( v57 )
          {
            if ( !a9 )
              goto LABEL_114;
            if ( !(unsigned __int8)SepSidInToken(
                                     v16,
                                     v23,
                                     (unsigned int)v21 + ((8 * (v56 & 2)) | 0xC) + 16 * v58,
                                     0,
                                     a11,
                                     a12,
                                     a14) )
              goto LABEL_29;
            if ( (unsigned __int8)AuthzBasepObjectInTypeList(v57, a8, a7, &v63) )
            {
              AuthzBasepAddAccessTypeList(a8, a7, v63, v22, *((_DWORD *)v21 + 1), 1);
              goto LABEL_29;
            }
            v18 = a11;
            goto LABEL_116;
          }
          v18 = a11;
          v59 = SepSidInToken(v16, v23, (unsigned int)v21 + ((8 * (v56 & 2)) | 0xC) + 16 * v58, 0, a11, a12, a14);
          break;
        case 4:
          if ( !(unsigned __int8)SepSidInToken(
                                   v16,
                                   v23,
                                   (unsigned int)v21 + 4 * ((unsigned __int8)v21[13] + 5),
                                   0,
                                   v18,
                                   a12,
                                   a14) )
            goto LABEL_30;
          v59 = SepSidInToken(v19, 0, (int)v21 + 12, 0, 0, a12, a14);
          break;
        case 1:
          LOBYTE(a4) = 1;
          v53 = SepSidInToken(v16, v23, (int)v21 + 8, a4, v18, a12, 0);
          v14 = a7;
          if ( !v53 )
            goto LABEL_31;
          v52 = a8;
          if ( a7 == 1 )
          {
            *(_DWORD *)(a8 + 32) |= *((_DWORD *)v21 + 1) & ~*(_DWORD *)(a8 + 28);
            goto LABEL_31;
          }
LABEL_95:
          v62 = 2;
LABEL_96:
          v51 = v14;
          goto LABEL_71;
        case 6:
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(
                                   v16,
                                   v23,
                                   (_DWORD)v21
                                 + ((8 * (*((_DWORD *)v21 + 2) & 2)) | 0xC)
                                 + 16 * (*((_DWORD *)v21 + 2) & 1u),
                                   a4,
                                   v18,
                                   a12,
                                   0) )
            goto LABEL_30;
          v61 = v21 + 12;
          LODWORD(v15) = 0;
          if ( (*((_DWORD *)v21 + 2) & 1) == 0 )
            v61 = 0LL;
          if ( !v61 )
          {
            v14 = a7;
            v52 = a8;
            if ( a7 == 1 )
            {
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v21 + 1) & ~*(_DWORD *)(a8 + 28);
              goto LABEL_32;
            }
            goto LABEL_95;
          }
          if ( !a9 )
          {
            v14 = a7;
            *(_DWORD *)(a8 + 32) |= *((_DWORD *)v21 + 1) & ~*(_DWORD *)(a8 + 28);
            goto LABEL_32;
          }
          if ( (unsigned __int8)AuthzBasepObjectInTypeList(v61, a8, a7, &v63) )
          {
            AuthzBasepAddAccessTypeList(a8, a7, v63, v22, *((_DWORD *)v21 + 1), 2);
            goto LABEL_30;
          }
LABEL_116:
          v14 = v60;
          goto LABEL_31;
        case 9:
          v43 = *((_WORD *)v21 + 1);
          v44 = 4 * (unsigned __int8)v21[9] + 8;
          if ( (int)(v43 - v44 - 8) > 0 )
          {
            if ( a4 && !*a5 )
            {
              AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
              v43 = *((_WORD *)v21 + 1);
              LODWORD(v15) = 0;
            }
            v45 = *(_QWORD **)(v16 + 1096);
            if ( v45 )
            {
              v46 = v45[75];
              v47 = v45[73];
              v48 = v45[74];
              v15 = v45[72];
            }
            else
            {
              v46 = 0LL;
              v47 = 0LL;
              v48 = 0LL;
            }
            v49 = v43 - v44 - 8;
            v50 = v44;
            v18 = a11;
            AuthzBasepEvaluateAceCondition(
              v16,
              *(_QWORD *)(v16 + 776),
              *a5,
              v15,
              v48,
              v47,
              v46,
              (__int64)&v21[v50 + 8],
              v49,
              0,
              a11,
              (__int64)&Size_4);
            if ( Size_4 != 1 )
              goto LABEL_30;
            if ( !v17 && !a11 )
            {
              if ( (unsigned __int8)SepIsPackageSid(v21 + 8) )
              {
LABEL_44:
                SepMatchPackage(
                  v16,
                  0xFFFFFFFFLL,
                  v21 + 8,
                  *((unsigned int *)v21 + 1),
                  (char *)a13 + 21,
                  a13 + 1,
                  a13 + 5,
                  a13 + 4,
                  a13 + 6);
                *a13 &= ~a13[1];
                goto LABEL_29;
              }
              if ( (unsigned __int8)SepIsCapabilitySid(v21 + 8) )
              {
LABEL_39:
                SepMatchCapability(
                  v16,
                  -1,
                  (_DWORD)v21 + 8,
                  *((_DWORD *)v21 + 1),
                  (__int64)a13 + 22,
                  (__int64)(a13 + 2));
                *a13 &= ~a13[2];
                goto LABEL_29;
              }
            }
            if ( !(unsigned __int8)SepSidInToken(v16, v23, (int)v21 + 8, 0, a11, a12, a14) )
              goto LABEL_30;
            v51 = a7;
            v52 = a8;
            v62 = 1;
LABEL_71:
            AuthzBasepAddAccessTypeList(v52, v51, 0, v22, *((_DWORD *)v21 + 1), v62);
            goto LABEL_30;
          }
LABEL_114:
          v18 = a11;
          goto LABEL_33;
        default:
          goto LABEL_33;
      }
      v14 = a7;
      if ( !v59 )
        goto LABEL_31;
      v52 = a8;
      if ( a7 == 1 )
      {
        *(_DWORD *)(a8 + 28) |= *((_DWORD *)v21 + 1) & ~*(_DWORD *)(a8 + 32);
        goto LABEL_31;
      }
      v62 = 1;
      goto LABEL_96;
    }
    if ( !v17 && !v18 )
    {
      if ( (unsigned __int8)SepIsPackageSid(v21 + 8) )
        goto LABEL_44;
      if ( (unsigned __int8)SepIsCapabilitySid(v21 + 8) )
        goto LABEL_39;
    }
    v25 = (unsigned __int8 *)(v21 + 8);
    v26 = 504LL;
    if ( !v18 )
      v26 = 232LL;
    v27 = v26 + v16;
    if ( a14 && v21 != (char *)-8LL && RtlEqualSid(SeAliasAdminsSid, v21 + 8) )
      goto LABEL_29;
    if ( v23 && RtlEqualSid(SePrincipalSelfSid, v21 + 8) )
      v25 = (unsigned __int8 *)v23;
    if ( a12 && RtlEqualSid(SeOwnerRightsSid, v25) )
    {
LABEL_22:
      v14 = a7;
      if ( a7 != 1 )
      {
        AuthzBasepAddAccessTypeList(a8, a7, 0, v22, *((_DWORD *)v21 + 1), 1);
        goto LABEL_29;
      }
      v18 = a11;
      *(_DWORD *)(a8 + 28) |= *((_DWORD *)v21 + 1) & ~*(_DWORD *)(a8 + 32);
      goto LABEL_31;
    }
    if ( !v27 || !v25 )
      goto LABEL_29;
    v28 = *(_WORD *)v25;
    v29 = 4 * (unsigned int)v25[1] + 8;
    v30 = (unsigned __int64)*(unsigned __int16 *)v25 >> 8;
    Size = 4 * v25[1] + 8;
    LOBYTE(v31) = 0;
    v73 = 0;
    v32 = *(_QWORD *)(v27 + 8LL * (v25[4 * v30 + 4] & 0xF) + 16) & *(_QWORD *)(v27
                                                                             + 8
                                                                             * ((unsigned __int64)v25[4 * v30 + 4] >> 4)
                                                                             + 144);
    if ( !v32 )
    {
LABEL_28:
      v37 = *(_DWORD *)v27;
      if ( *(_DWORD *)v27 > 0x40u )
      {
        v54 = *(_QWORD *)(v27 + 8);
        v55 = 64;
        v74 = v54;
        do
        {
          v35 = v54 + 16LL * v55;
          if ( **(_WORD **)v35 == v28 )
          {
            if ( !memcmp(v25, *(const void **)v35, v29) )
              goto LABEL_19;
            v29 = Size;
            v54 = v74;
          }
          ++v55;
        }
        while ( v55 < v37 );
      }
      goto LABEL_29;
    }
    while ( 1 )
    {
      LOBYTE(v33) = v32;
      if ( (_BYTE)v32 )
        break;
LABEL_27:
      v36 = v32;
      LOBYTE(v31) = v31 + 8;
      v32 >>= 8;
      v73 = v31;
      if ( v36 < 0x100 )
        goto LABEL_28;
    }
    v34 = *(_QWORD *)(v27 + 8);
    v31 = (unsigned __int8)v31;
    v70 = v34;
    v66 = (unsigned __int8)v31;
    while ( 1 )
    {
      v67 = SidHashByteToIndexLookupTable[(unsigned __int8)v33];
      v35 = v34 + 16LL * (unsigned int)(v31 + v67);
      if ( **(_WORD **)v35 == v28 )
        break;
LABEL_25:
      v34 = v70;
      v33 = (unsigned __int8)v33 ^ (1 << v67);
      if ( !(_BYTE)v33 )
      {
        LOBYTE(v31) = v73;
        goto LABEL_27;
      }
    }
    if ( memcmp(v25, *(const void **)v35, v29) )
    {
      v29 = Size;
      v31 = v66;
      goto LABEL_25;
    }
LABEL_19:
    if ( !a11 && v35 == *(_QWORD *)(v27 + 8) && (*(_DWORD *)(v35 + 8) & 0x10) == 0 || (*(_DWORD *)(v35 + 8) & 4) != 0 )
      goto LABEL_22;
LABEL_29:
    v18 = a11;
LABEL_30:
    v14 = a7;
LABEL_31:
    LODWORD(v15) = 0;
LABEL_32:
    a4 = v75;
LABEL_33:
    result = *((unsigned __int16 *)v21 + 1);
    ++v22;
    v17 = v69;
    v21 += result;
    v16 = a1;
    v23 = a6;
    v19 = a2;
  }
  while ( v22 < v68 );
LABEL_34:
  if ( v18 && v14 )
  {
    v40 = (unsigned int *)(a8 + 28);
    v41 = v14;
    do
    {
      v42 = *v40;
      v40 += 12;
      result = *(v40 - 13) & (~a10 | v42);
      *(v40 - 12) = result;
      --v41;
    }
    while ( v41 );
  }
  return result;
}
