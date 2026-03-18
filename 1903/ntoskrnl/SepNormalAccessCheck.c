/*
 * XREFs of SepNormalAccessCheck @ 0x1400C7500
 * Callers:
 *     SepAccessCheck @ 0x1400C9F50 (SepAccessCheck.c)
 * Callees:
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140085130 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepIsPackageSid @ 0x14008690C (SepIsPackageSid.c)
 *     SepIsCapabilitySid @ 0x140086964 (SepIsCapabilitySid.c)
 *     SepMatchPackage @ 0x1400869BC (SepMatchPackage.c)
 *     SepMatchCapability @ 0x140086A44 (SepMatchCapability.c)
 *     SepSidInToken @ 0x140086A98 (SepSidInToken.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140092380 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140092EE0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepAddAccessTypeList @ 0x140113154 (AuthzBasepAddAccessTypeList.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     RtlCompareMemory @ 0x1401CC1F0 (RtlCompareMemory.c)
 *     AuthzBasepObjectInTypeList @ 0x1403467DC (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepNormalAccessCheck(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned __int8 *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        char a11,
        char a12,
        __int64 a13,
        char a14)
{
  __int64 v14; // r11
  unsigned int v15; // r14d
  int v16; // r13d
  __int64 result; // rax
  __int64 v18; // rbp
  int v20; // r15d
  _DWORD *v21; // rax
  __int64 v22; // rcx
  char v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rdx
  char v26; // al
  int v27; // ebx
  unsigned __int8 *v28; // r15
  __int64 v29; // rax
  __int64 v30; // r14
  int v31; // eax
  unsigned __int8 v32; // r8
  unsigned int v33; // r10d
  unsigned __int64 v34; // rbp
  int v35; // r12d
  __int64 v36; // rcx
  int v37; // edx
  __int64 v38; // rbx
  int v39; // eax
  unsigned int v40; // ebp
  __int64 v41; // rbx
  __int64 v42; // rdx
  struct _KTHREAD *v43; // r8
  __int64 v44; // rbx
  unsigned __int64 v45; // rax
  int v46; // eax
  int v47; // r14d
  int v48; // eax
  int v49; // ebx
  bool CanTokenMatchAllPackageSid; // al
  _DWORD *v51; // rcx
  int v52; // eax
  unsigned __int16 v53; // cx
  unsigned int v54; // ebx
  _QWORD *v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r10
  int v59; // eax
  BOOLEAN v60; // al
  _DWORD *v61; // rbx
  int v62; // eax
  __int64 v63; // rax
  unsigned int v64; // r12d
  int v65; // eax
  __int64 v66; // rbx
  __int64 v67; // rcx
  int v68; // [rsp+60h] [rbp-78h]
  unsigned int v69; // [rsp+64h] [rbp-74h]
  int v70; // [rsp+68h] [rbp-70h]
  unsigned int v71; // [rsp+6Ch] [rbp-6Ch] BYREF
  unsigned int v72; // [rsp+70h] [rbp-68h]
  int v73; // [rsp+74h] [rbp-64h]
  int v74; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v75; // [rsp+7Ch] [rbp-5Ch]
  int v76; // [rsp+80h] [rbp-58h]
  int v77; // [rsp+84h] [rbp-54h]
  int v78; // [rsp+88h] [rbp-50h]
  __int64 v79; // [rsp+90h] [rbp-48h]
  __int64 v80; // [rsp+98h] [rbp-40h]
  unsigned __int8 v83; // [rsp+F8h] [rbp+20h]
  __int64 v84; // [rsp+F8h] [rbp+20h]

  v14 = 0LL;
  v15 = a8;
  v16 = *(_DWORD *)(a2 + 200) & 0x2000;
  result = *(unsigned __int16 *)(a4 + 4);
  v18 = a2;
  v68 = 0;
  v20 = 0;
  v74 = -1;
  v75 = result;
  if ( a8 )
  {
    v21 = (_DWORD *)(a9 + 24);
    v22 = a8;
    do
    {
      *v21 = a1;
      v21 += 12;
      --v22;
    }
    while ( v22 );
    result = v75;
  }
  v23 = a11;
  if ( !v16 && !a11 )
  {
    v20 = a1 | *(_DWORD *)a13;
    v68 = v20;
  }
  v70 = v20;
  v24 = a4 + 8;
  v76 = v20;
  v69 = 0;
  if ( !(_DWORD)result )
    return result;
  v25 = (__int64)a7;
  do
  {
    result = *(unsigned int *)(a9 + 24);
    if ( !(_DWORD)result && !v20 )
      return result;
    if ( (*(_BYTE *)(v24 + 1) & 8) != 0 )
      goto LABEL_34;
    if ( (_DWORD)result )
      goto LABEL_11;
    if ( *(_BYTE *)v24 )
    {
      if ( *(_BYTE *)v24 != 9 )
        goto LABEL_34;
LABEL_11:
      v26 = *(_BYTE *)v24;
      if ( !*(_BYTE *)v24 )
        goto LABEL_12;
      switch ( v26 )
      {
        case 5:
          v65 = *(_DWORD *)(v24 + 8);
          v66 = v24 + 12;
          if ( (v65 & 1) == 0 )
            v66 = 0LL;
          if ( v66 )
          {
            if ( a10 )
            {
              if ( (unsigned __int8)SepSidInToken(
                                      v18,
                                      v25,
                                      v24 + ((8LL * (v65 & 2)) | 0xC) + 16LL * (v65 & 1),
                                      0LL,
                                      v23,
                                      a12,
                                      a14)
                && (unsigned __int8)AuthzBasepObjectInTypeList(v66, a9, v15, &v71) )
              {
                AuthzBasepAddAccessTypeList(a9, v15, v71, v69, *(_DWORD *)(v24 + 4), 0);
              }
              goto LABEL_32;
            }
            goto LABEL_34;
          }
          if ( !(unsigned __int8)SepSidInToken(
                                   v18,
                                   v25,
                                   v24 + ((8LL * (v65 & 2)) | 0xC) + 16LL * (v65 & 1),
                                   0LL,
                                   v23,
                                   a12,
                                   a14) )
            goto LABEL_32;
          v59 = *(_DWORD *)(v24 + 4);
          if ( v15 == 1 )
          {
            *(_DWORD *)(a9 + 24) &= ~v59;
            goto LABEL_32;
          }
          goto LABEL_91;
        case 4:
          if ( !(unsigned __int8)SepSidInToken(
                                   v18,
                                   v25,
                                   v24 + 4 * (*(unsigned __int8 *)(v24 + 13) + 5LL),
                                   0LL,
                                   v23,
                                   a12,
                                   a14)
            || !(unsigned __int8)SepSidInToken(a3, 0LL, v24 + 12, 0LL, v23, a12, a14) )
          {
            goto LABEL_32;
          }
          v59 = *(_DWORD *)(v24 + 4);
          if ( v15 == 1 )
          {
            *(_DWORD *)(a9 + 24) &= ~v59;
            goto LABEL_32;
          }
          goto LABEL_91;
        case 1:
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(v18, v25, v24 + 8, a4, v23, a12, 0) )
            goto LABEL_32;
          result = *(unsigned int *)(v24 + 4);
          if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
            goto LABEL_32;
          return result;
        case 6:
          LOBYTE(a4) = 1;
          if ( !(unsigned __int8)SepSidInToken(
                                   v18,
                                   v25,
                                   v24 + ((8LL * (*(_DWORD *)(v24 + 8) & 2)) | 0xC) + 16LL * (*(_DWORD *)(v24 + 8) & 1),
                                   a4,
                                   v23,
                                   a12,
                                   0) )
            goto LABEL_32;
          v67 = v24 + 12;
          v14 = 0LL;
          if ( (*(_DWORD *)(v24 + 8) & 1) == 0 )
            v67 = 0LL;
          if ( v67 && a10 )
          {
            if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v67, a9, v15, &v71) )
              goto LABEL_32;
            result = *(unsigned int *)(a9 + 48LL * v71 + 24);
            if ( ((unsigned int)result & *(_DWORD *)(v24 + 4)) == 0 )
              goto LABEL_32;
          }
          else
          {
            result = *(unsigned int *)(v24 + 4);
            if ( ((unsigned int)result & *(_DWORD *)(a9 + 24)) == 0 )
              goto LABEL_33;
          }
          return result;
      }
      if ( v26 != 9 )
        goto LABEL_34;
      v53 = *(_WORD *)(v24 + 2);
      v54 = 4 * *(unsigned __int8 *)(v24 + 9) + 8;
      if ( v53 - v54 == 8 )
        goto LABEL_34;
      if ( a5 && !*a6 )
      {
        AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
        v53 = *(_WORD *)(v24 + 2);
        v14 = 0LL;
      }
      v55 = *(_QWORD **)(v18 + 1096);
      if ( v55 )
      {
        v56 = v55[75];
        v57 = v55[73];
        v58 = v55[74];
        v14 = v55[72];
      }
      else
      {
        v56 = 0LL;
        v57 = 0LL;
        v58 = 0LL;
      }
      AuthzBasepEvaluateAceCondition(
        v18,
        *(_QWORD *)(v18 + 776),
        *a6,
        v14,
        v58,
        v57,
        v56,
        (_DWORD *)(v24 + v54 + 8LL),
        v53 - v54 - 8,
        0,
        v23,
        &v74);
      if ( v74 != 1 )
        goto LABEL_32;
      if ( !v16 && !v23 && v20 )
      {
        if ( SepIsPackageSid(v24 + 8) )
        {
          v61 = (_DWORD *)(a13 + 4);
          SepMatchPackage(
            a2,
            v70,
            v24 + 8,
            *(_DWORD *)(v24 + 4),
            (_BYTE *)(a13 + 21),
            (_DWORD *)(a13 + 4),
            (_BYTE *)(a13 + 20),
            (_DWORD *)(a13 + 16),
            (_BYTE *)(a13 + 24));
        }
        else
        {
          if ( !SepIsCapabilitySid(v24 + 8) )
          {
            v18 = a2;
            goto LABEL_88;
          }
LABEL_96:
          v61 = (_DWORD *)(a13 + 8);
          SepMatchCapability(a2, v70, v24 + 8, *(_DWORD *)(v24 + 4), (_BYTE *)(a13 + 22), (_DWORD *)(a13 + 8));
        }
        v62 = ~*v61;
        v20 &= v62;
        v68 = v20;
        *(_DWORD *)a13 &= v62;
        goto LABEL_32;
      }
LABEL_88:
      if ( !*(_DWORD *)(a9 + 24) )
        goto LABEL_32;
      if ( !(unsigned __int8)SepSidInToken(v18, (__int64)a7, v24 + 8, 0LL, v23, a12, a14) )
      {
        v25 = (__int64)a7;
        goto LABEL_149;
      }
      v59 = *(_DWORD *)(v24 + 4);
LABEL_91:
      AuthzBasepAddAccessTypeList(a9, v15, 0, v69, v59, 0);
      goto LABEL_32;
    }
LABEL_12:
    if ( !v16 && !v23 && v20 )
    {
      v41 = SePackagePrefixSid;
      if ( *(_BYTE *)(v24 + 9) >= 2u
        && *(_BYTE *)(v24 + 8) == *(_BYTE *)SePackagePrefixSid
        && RtlCompareMemory((const void *)(v24 + 10), (const void *)(SePackagePrefixSid + 2), 6uLL) == 6 )
      {
        v46 = *(_DWORD *)(v24 + 16);
        if ( v46 == *(_DWORD *)(v41 + 8) )
        {
          v47 = *(_DWORD *)(v24 + 4);
          if ( v46 == 2 && *(_BYTE *)(v24 + 9) == 2 )
          {
            v48 = *(_DWORD *)(v24 + 20);
            if ( v48 == 1 )
            {
              v49 = v47 & v76;
              CanTokenMatchAllPackageSid = SepCanTokenMatchAllPackageSid(a2, v42, v43);
              v51 = (_DWORD *)a13;
              if ( CanTokenMatchAllPackageSid )
              {
                *(_DWORD *)(a13 + 4) |= v49;
                *(_BYTE *)(a13 + 21) = 1;
              }
              else
              {
                *(_DWORD *)(a13 + 16) |= v49;
                *(_BYTE *)(a13 + 24) = 1;
              }
            }
            else
            {
              v51 = (_DWORD *)a13;
              if ( v48 == 2 )
              {
                *(_DWORD *)(a13 + 4) |= v47 & v70;
                *(_BYTE *)(a13 + 21) = 1;
              }
            }
          }
          else
          {
            *(_BYTE *)(a13 + 20) = 1;
            if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
            {
              v60 = RtlEqualSid(*(PSID *)(a2 + 784), (PSID)(v24 + 8));
              v51 = (_DWORD *)a13;
              if ( v60 )
              {
                *(_DWORD *)(a13 + 4) |= v47 & v70;
                *(_BYTE *)(a13 + 21) = 1;
              }
            }
            else
            {
              v51 = (_DWORD *)a13;
            }
          }
          v15 = a8;
          v52 = ~v51[1];
          v20 &= v52;
          *v51 &= v52;
          v68 = v20;
          goto LABEL_32;
        }
      }
      v44 = SeCapabilityPrefixSid;
      if ( *(_BYTE *)(v24 + 9) >= 2u
        && *(_BYTE *)(v24 + 8) == *(_BYTE *)SeCapabilityPrefixSid
        && RtlCompareMemory((const void *)(v24 + 10), (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
        && *(_DWORD *)(v24 + 16) == *(_DWORD *)(v44 + 8) )
      {
        goto LABEL_96;
      }
      v18 = a2;
    }
    v27 = *(_DWORD *)(a9 + 24);
    v73 = v27;
    if ( !v27 )
      goto LABEL_32;
    v28 = (unsigned __int8 *)(v24 + 8);
    v29 = 504LL;
    if ( !v23 )
      v29 = 232LL;
    v30 = v29 + v18;
    if ( a14 && v24 != -8 && RtlEqualSid(SeAliasAdminsSid, (PSID)(v24 + 8)) )
      goto LABEL_39;
    if ( a7 && RtlEqualSid(SePrincipalSelfSid, (PSID)(v24 + 8)) )
      v28 = a7;
    if ( a12
      && *(_WORD *)SeOwnerRightsSid == *(_WORD *)v28
      && !memcmp(SeOwnerRightsSid, v28, 4 * ((unsigned __int64)*(unsigned __int16 *)SeOwnerRightsSid >> 8) + 8) )
    {
LABEL_30:
      v15 = a8;
      v39 = *(_DWORD *)(v24 + 4);
      if ( a8 == 1 )
      {
        v20 = v68;
        *(_DWORD *)(a9 + 24) = v27 & ~v39;
      }
      else
      {
        AuthzBasepAddAccessTypeList(a9, a8, 0, v69, v39, 0);
        v20 = v68;
      }
      goto LABEL_32;
    }
    if ( !v30 )
    {
      v20 = v68;
      v25 = (__int64)a7;
      v15 = a8;
LABEL_149:
      v14 = 0LL;
      goto LABEL_34;
    }
    if ( !v28 )
    {
      v20 = v68;
      v25 = (__int64)a7;
      v15 = a8;
      v14 = 0LL;
      goto LABEL_34;
    }
    v31 = v28[1];
    v32 = 0;
    a4 = *(unsigned __int16 *)v28;
    v79 = a4;
    v83 = 0;
    v33 = 4 * v31 + 8;
    v72 = v33;
    v34 = *(_QWORD *)(v30 + 8LL * (v28[4 * ((unsigned __int64)(unsigned int)a4 >> 8) + 4] & 0xF) + 16) & *(_QWORD *)(v30 + 8 * ((unsigned __int64)v28[4 * ((unsigned __int64)(unsigned int)a4 >> 8) + 4] >> 4) + 144);
    if ( !v34 )
    {
LABEL_38:
      v40 = *(_DWORD *)v30;
      if ( *(_DWORD *)v30 <= 0x40u )
        goto LABEL_39;
      v63 = *(_QWORD *)(v30 + 8);
      v64 = 64;
      v84 = v63;
      do
      {
        v38 = v63 + 16LL * v64;
        if ( **(_WORD **)v38 == (_WORD)a4 )
        {
          if ( !memcmp(v28, *(const void **)v38, v33) )
            goto LABEL_26;
          v63 = v84;
          a4 = v79;
          v33 = v72;
        }
        ++v64;
      }
      while ( v64 < v40 );
      v20 = v68;
      v23 = a11;
      goto LABEL_40;
    }
    while ( 1 )
    {
      LOBYTE(v35) = v34;
      if ( (_BYTE)v34 )
        break;
LABEL_58:
      v45 = v34;
      v32 += 8;
      v34 >>= 8;
      v83 = v32;
      if ( v45 < 0x100 )
      {
        v23 = a11;
        goto LABEL_38;
      }
    }
    v36 = *(_QWORD *)(v30 + 8);
    v37 = v32;
    v80 = v36;
    v78 = v32;
    while ( 1 )
    {
      v77 = SidHashByteToIndexLookupTable[(unsigned __int8)v35];
      v38 = v36 + 16LL * (unsigned int)(v37 + v77);
      if ( **(_WORD **)v38 == (_WORD)a4 )
        break;
LABEL_61:
      v37 = v78;
      v35 = (unsigned __int8)v35 ^ (1 << v77);
      if ( !(_BYTE)v35 )
      {
        v32 = v83;
        goto LABEL_58;
      }
    }
    if ( memcmp(v28, *(const void **)v38, v33) )
    {
      v36 = v80;
      a4 = v79;
      v33 = v72;
      goto LABEL_61;
    }
LABEL_26:
    v23 = a11;
    if ( !a11 && v38 == *(_QWORD *)(v30 + 8) && (*(_DWORD *)(v38 + 8) & 0x10) == 0 || (*(_DWORD *)(v38 + 8) & 4) != 0 )
    {
      v27 = v73;
      goto LABEL_30;
    }
LABEL_39:
    v20 = v68;
LABEL_40:
    v15 = a8;
LABEL_32:
    v14 = 0LL;
LABEL_33:
    v25 = (__int64)a7;
LABEL_34:
    result = *(unsigned __int16 *)(v24 + 2);
    v18 = a2;
    v24 += result;
    ++v69;
  }
  while ( v69 < v75 );
  return result;
}
