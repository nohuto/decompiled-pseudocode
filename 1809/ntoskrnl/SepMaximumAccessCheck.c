/*
 * XREFs of SepMaximumAccessCheck @ 0x1400AACE0
 * Callers:
 *     SepAccessCheck @ 0x1400528F0 (SepAccessCheck.c)
 * Callees:
 *     SepSidInToken @ 0x140013310 (SepSidInToken.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     SepMatchPackage @ 0x1400ABB0C (SepMatchPackage.c)
 *     AuthzBasepAddAccessTypeList @ 0x14011472C (AuthzBasepAddAccessTypeList.c)
 *     SepIsPackageSid @ 0x14011F570 (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140120E2C (SepIsCapabilitySid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401215CC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepMatchCapability @ 0x140122730 (SepMatchCapability.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     AuthzBasepObjectInTypeList @ 0x140325140 (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepMaximumAccessCheck(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
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
  __int64 v15; // rbp
  int v16; // esi
  char v17; // di
  __int64 result; // rax
  char *v19; // rbx
  unsigned int v20; // r14d
  __int64 v21; // r15
  char v22; // al
  unsigned __int8 *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // eax
  unsigned __int8 v27; // r13
  __int64 v28; // r8
  unsigned int v29; // r9d
  unsigned __int64 v30; // rbp
  int v31; // r12d
  __int64 v32; // rcx
  int v33; // edx
  __int64 v34; // r15
  unsigned __int64 v35; // rax
  unsigned int v36; // ebp
  __int64 v37; // rdx
  unsigned int *v38; // rcx
  unsigned int *v39; // rcx
  __int64 v40; // r8
  unsigned int v41; // eax
  char v42; // al
  int v43; // ecx
  unsigned __int16 v44; // cx
  unsigned int v45; // edi
  _QWORD *v46; // rax
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r10
  __int64 v50; // r11
  unsigned int v51; // edx
  __int64 v52; // rcx
  __int64 v53; // r13
  unsigned int v54; // r12d
  int v55; // eax
  char *v56; // rdi
  char v57; // al
  unsigned int v58; // edx
  unsigned int v59; // r8d
  char *v60; // rcx
  int v61; // [rsp+28h] [rbp-B0h]
  int v62; // [rsp+60h] [rbp-78h] BYREF
  unsigned int v63; // [rsp+64h] [rbp-74h]
  int v64; // [rsp+68h] [rbp-70h] BYREF
  int v65; // [rsp+6Ch] [rbp-6Ch]
  unsigned int v66; // [rsp+70h] [rbp-68h]
  __int64 v67; // [rsp+78h] [rbp-60h]
  __int64 v68; // [rsp+80h] [rbp-58h]
  int v71; // [rsp+F0h] [rbp+18h]
  __int64 v72; // [rsp+F8h] [rbp+20h]

  v72 = a4;
  v14 = a7;
  v15 = a1;
  v16 = *(_DWORD *)(a1 + 200) & 0x2000;
  v17 = a11;
  v71 = v16;
  v64 = -1;
  if ( a11 && a7 )
  {
    v37 = a7;
    v38 = (unsigned int *)(a8 + 28);
    do
    {
      *(_QWORD *)(v38 - 1) = *v38;
      v38 += 12;
      --v37;
    }
    while ( v37 );
  }
  result = *(unsigned __int16 *)(a3 + 4);
  v19 = (char *)(a3 + 8);
  v66 = result;
  v20 = 0;
  if ( !(_DWORD)result )
    goto LABEL_33;
  v21 = a6;
  do
  {
    if ( (v19[1] & 8) != 0 )
      goto LABEL_32;
    v22 = *v19;
    if ( *v19 )
    {
      switch ( v22 )
      {
        case 5:
          v55 = *((_DWORD *)v19 + 2);
          v56 = v19 + 12;
          if ( (v55 & 1) == 0 )
            v56 = 0LL;
          if ( v56 )
          {
            if ( !a9 )
              goto LABEL_114;
            if ( !(unsigned __int8)SepSidInToken(
                                     v15,
                                     v21,
                                     (__int64)&v19[16 * (v55 & 1) + ((8LL * (v55 & 2)) | 0xC)],
                                     0LL,
                                     a11,
                                     a12,
                                     a14) )
              goto LABEL_29;
            if ( (unsigned __int8)AuthzBasepObjectInTypeList(v56, a8, a7, &v62) )
            {
              AuthzBasepAddAccessTypeList(a8, a7, v62, v20, *((_DWORD *)v19 + 1), 1);
              goto LABEL_29;
            }
            v17 = a11;
            goto LABEL_116;
          }
          v17 = a11;
          v57 = SepSidInToken(v15, v21, (__int64)&v19[16 * (v55 & 1) + ((8LL * (v55 & 2)) | 0xC)], 0LL, a11, a12, a14);
          break;
        case 4:
          if ( !(unsigned __int8)SepSidInToken(
                                   v15,
                                   v21,
                                   (__int64)&v19[4 * (unsigned __int8)v19[13] + 20],
                                   0LL,
                                   v17,
                                   a12,
                                   a14) )
            goto LABEL_30;
          v57 = SepSidInToken(a2, 0LL, (__int64)(v19 + 12), 0LL, 0, a12, a14);
          break;
        case 1:
          LOBYTE(a4) = 1;
          v42 = SepSidInToken(v15, v21, (__int64)(v19 + 8), a4, v17, a12, 0);
          v14 = a7;
          if ( !v42 )
            goto LABEL_31;
          goto LABEL_58;
        case 6:
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(
                                   v15,
                                   v21,
                                   (__int64)&v19[16 * (*((_DWORD *)v19 + 2) & 1)
                                               + ((8LL * (*((_DWORD *)v19 + 2) & 2)) | 0xC)],
                                   a4,
                                   v17,
                                   a12,
                                   0) )
            goto LABEL_30;
          v60 = v19 + 12;
          if ( (*((_DWORD *)v19 + 2) & 1) == 0 )
            v60 = 0LL;
          if ( !v60 )
          {
            v14 = a7;
LABEL_58:
            v43 = a8;
            if ( v14 == 1 )
            {
              *(_DWORD *)(a8 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 28);
              goto LABEL_31;
            }
            v61 = 2;
LABEL_89:
            v58 = v14;
            goto LABEL_90;
          }
          if ( !a9 )
          {
            *(_DWORD *)(a8 + 32) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 28);
            goto LABEL_30;
          }
          if ( (unsigned __int8)AuthzBasepObjectInTypeList(v60, a8, a7, &v62) )
          {
            AuthzBasepAddAccessTypeList(a8, a7, v62, v20, *((_DWORD *)v19 + 1), 2);
            goto LABEL_30;
          }
LABEL_116:
          v14 = v59;
          goto LABEL_31;
        case 9:
          v44 = *((_WORD *)v19 + 1);
          v45 = 4 * (unsigned __int8)v19[9] + 8;
          if ( (int)(v44 - v45 - 8) > 0 )
          {
            if ( a4 && !*a5 )
            {
              AuthzBasepInitializeResourceClaimsFromSacl(a4, a5);
              v44 = *((_WORD *)v19 + 1);
            }
            v46 = *(_QWORD **)(v15 + 1096);
            if ( v46 )
            {
              v47 = v46[75];
              v48 = v46[73];
              v49 = v46[74];
              v50 = v46[72];
            }
            else
            {
              v47 = 0LL;
              v48 = 0LL;
              v49 = 0LL;
              v50 = 0LL;
            }
            v51 = v44 - v45 - 8;
            v52 = v45;
            v17 = a11;
            AuthzBasepEvaluateAceCondition(
              v15,
              *(_QWORD *)(v15 + 776),
              *a5,
              v50,
              v49,
              v48,
              v47,
              &v19[v52 + 8],
              v51,
              0,
              a11,
              &v64);
            if ( v64 != 1 )
              goto LABEL_30;
            if ( !v16 && !a11 )
            {
              if ( (unsigned __int8)SepIsPackageSid(v19 + 8) )
              {
LABEL_43:
                SepMatchPackage(
                  v15,
                  0xFFFFFFFFLL,
                  v19 + 8,
                  *((unsigned int *)v19 + 1),
                  (char *)a13 + 21,
                  a13 + 1,
                  a13 + 5,
                  a13 + 4,
                  a13 + 6);
                *a13 &= ~a13[1];
                goto LABEL_28;
              }
              if ( (unsigned __int8)SepIsCapabilitySid(v19 + 8) )
              {
LABEL_40:
                SepMatchCapability(
                  v15,
                  -1,
                  (_DWORD)v19 + 8,
                  *((_DWORD *)v19 + 1),
                  (__int64)a13 + 22,
                  (__int64)(a13 + 2));
                *a13 &= ~a13[2];
                goto LABEL_28;
              }
              v16 = v71;
            }
            if ( !(unsigned __int8)SepSidInToken(v15, v21, (__int64)(v19 + 8), 0LL, a11, a12, a14) )
              goto LABEL_30;
            v58 = a7;
            v43 = a8;
            v61 = 1;
LABEL_90:
            AuthzBasepAddAccessTypeList(v43, v58, 0, v20, *((_DWORD *)v19 + 1), v61);
            goto LABEL_30;
          }
LABEL_114:
          v17 = a11;
          goto LABEL_32;
        default:
          goto LABEL_32;
      }
      v14 = a7;
      if ( !v57 )
        goto LABEL_31;
      v43 = a8;
      if ( a7 == 1 )
      {
        *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
        goto LABEL_31;
      }
      v61 = 1;
      goto LABEL_89;
    }
    if ( !v16 && !v17 )
    {
      if ( (unsigned __int8)SepIsPackageSid(v19 + 8) )
        goto LABEL_43;
      if ( (unsigned __int8)SepIsCapabilitySid(v19 + 8) )
        goto LABEL_40;
    }
    v23 = (unsigned __int8 *)(v19 + 8);
    v24 = 504LL;
    if ( !v17 )
      v24 = 232LL;
    v25 = v24 + v15;
    if ( a14 && v19 != (char *)-8LL && RtlEqualSid(SeAliasAdminsSid, v19 + 8) )
      goto LABEL_28;
    if ( v21 && RtlEqualSid(SePrincipalSelfSid, v19 + 8) )
      v23 = (unsigned __int8 *)v21;
    if ( a12 && RtlEqualSid(SeOwnerRightsSid, v23) )
    {
LABEL_22:
      v14 = a7;
      if ( a7 != 1 )
      {
        AuthzBasepAddAccessTypeList(a8, a7, 0, v20, *((_DWORD *)v19 + 1), 1);
        goto LABEL_28;
      }
      v17 = a11;
      *(_DWORD *)(a8 + 28) |= *((_DWORD *)v19 + 1) & ~*(_DWORD *)(a8 + 32);
      v16 = v71;
      goto LABEL_31;
    }
    if ( !v25 || !v23 )
      goto LABEL_28;
    v26 = v23[1];
    v27 = 0;
    v28 = *(unsigned __int16 *)v23;
    v67 = v28;
    v29 = 4 * v26 + 8;
    v63 = v29;
    v30 = *(_QWORD *)(v25 + 8LL * (v23[4 * ((unsigned __int64)(unsigned int)v28 >> 8) + 4] & 0xF) + 16) & *(_QWORD *)(v25 + 8 * ((unsigned __int64)v23[4 * ((unsigned __int64)(unsigned int)v28 >> 8) + 4] >> 4) + 144);
    if ( !v30 )
    {
LABEL_27:
      v36 = *(_DWORD *)v25;
      if ( *(_DWORD *)v25 > 0x40u )
      {
        v53 = *(_QWORD *)(v25 + 8);
        v54 = 64;
        do
        {
          v34 = v53 + 16LL * v54;
          if ( **(_WORD **)v34 == (_WORD)v28 )
          {
            if ( !memcmp(v23, *(const void **)v34, v29) )
              goto LABEL_19;
            LOWORD(v28) = v67;
            v29 = v63;
          }
          ++v54;
        }
        while ( v54 < v36 );
      }
      goto LABEL_28;
    }
    while ( 1 )
    {
      LOBYTE(v31) = v30;
      if ( (_BYTE)v30 )
        break;
LABEL_26:
      v35 = v30;
      v27 += 8;
      v30 >>= 8;
      if ( v35 < 0x100 )
        goto LABEL_27;
    }
    v32 = *(_QWORD *)(v25 + 8);
    v68 = v32;
    v33 = v27;
    while ( 1 )
    {
      v65 = SidHashByteToIndexLookupTable[(unsigned __int8)v31];
      v34 = v32 + 16LL * (unsigned int)(v33 + v65);
      if ( **(_WORD **)v34 == (_WORD)v28 )
        break;
LABEL_25:
      v31 = (unsigned __int8)v31 ^ (1 << v65);
      v33 = v27;
      if ( !(_BYTE)v31 )
        goto LABEL_26;
    }
    if ( memcmp(v23, *(const void **)v34, v29) )
    {
      LOWORD(v28) = v67;
      v32 = v68;
      v29 = v63;
      goto LABEL_25;
    }
LABEL_19:
    if ( !a11 && v34 == *(_QWORD *)(v25 + 8) && (*(_DWORD *)(v34 + 8) & 0x10) == 0 || (*(_DWORD *)(v34 + 8) & 4) != 0 )
      goto LABEL_22;
LABEL_28:
    v16 = v71;
LABEL_29:
    v17 = a11;
LABEL_30:
    v14 = a7;
LABEL_31:
    a4 = v72;
LABEL_32:
    result = *((unsigned __int16 *)v19 + 1);
    ++v20;
    v15 = a1;
    v19 += result;
    v21 = a6;
  }
  while ( v20 < v66 );
LABEL_33:
  if ( v17 && v14 )
  {
    v39 = (unsigned int *)(a8 + 28);
    v40 = v14;
    do
    {
      v41 = *v39;
      v39 += 12;
      result = *(v39 - 13) & (~a10 | v41);
      *(v39 - 12) = result;
      --v40;
    }
    while ( v40 );
  }
  return result;
}
