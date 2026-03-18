/*
 * XREFs of SepNormalAccessCheck @ 0x1400A7380
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
 *     SepCanTokenMatchAllPackageSid @ 0x1400CF6A0 (SepCanTokenMatchAllPackageSid.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400D0200 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepAddAccessTypeList @ 0x140112744 (AuthzBasepAddAccessTypeList.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 *     RtlCompareMemory @ 0x1401CCD70 (RtlCompareMemory.c)
 *     AuthzBasepObjectInTypeList @ 0x14034623C (AuthzBasepObjectInTypeList.c)
 */

__int64 __fastcall SepNormalAccessCheck(
        int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
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
  __int64 v42; // rbx
  unsigned __int64 v43; // rax
  int v44; // eax
  int v45; // r14d
  int v46; // eax
  int v47; // ebx
  char CanTokenMatchAllPackageSid; // al
  _DWORD *v49; // rcx
  int v50; // eax
  unsigned __int16 v51; // cx
  unsigned int v52; // ebx
  _QWORD *v53; // rax
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r10
  int v57; // eax
  BOOLEAN v58; // al
  _DWORD *v59; // rbx
  int v60; // eax
  __int64 v61; // rax
  unsigned int v62; // r12d
  int v63; // eax
  __int64 v64; // rbx
  __int64 v65; // rcx
  int v66; // [rsp+60h] [rbp-78h]
  unsigned int v67; // [rsp+64h] [rbp-74h]
  int v68; // [rsp+68h] [rbp-70h]
  unsigned int v69; // [rsp+6Ch] [rbp-6Ch] BYREF
  unsigned int v70; // [rsp+70h] [rbp-68h]
  int v71; // [rsp+74h] [rbp-64h]
  int v72; // [rsp+78h] [rbp-60h] BYREF
  unsigned int v73; // [rsp+7Ch] [rbp-5Ch]
  int v74; // [rsp+80h] [rbp-58h]
  int v75; // [rsp+84h] [rbp-54h]
  int v76; // [rsp+88h] [rbp-50h]
  __int64 v77; // [rsp+90h] [rbp-48h]
  __int64 v78; // [rsp+98h] [rbp-40h]
  unsigned __int8 v81; // [rsp+F8h] [rbp+20h]
  __int64 v82; // [rsp+F8h] [rbp+20h]

  LODWORD(v14) = 0;
  v15 = a8;
  v16 = *(_DWORD *)(a2 + 200) & 0x2000;
  result = *(unsigned __int16 *)(a4 + 4);
  v18 = a2;
  v66 = 0;
  v20 = 0;
  v72 = -1;
  v73 = result;
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
    result = v73;
  }
  v23 = a11;
  if ( !v16 && !a11 )
  {
    v20 = a1 | *(_DWORD *)a13;
    v66 = v20;
  }
  v68 = v20;
  v24 = a4 + 8;
  v74 = v20;
  v67 = 0;
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
          v63 = *(_DWORD *)(v24 + 8);
          v64 = v24 + 12;
          if ( (v63 & 1) == 0 )
            v64 = 0LL;
          if ( v64 )
          {
            if ( a10 )
            {
              if ( (unsigned __int8)SepSidInToken(
                                      v18,
                                      v25,
                                      v24 + ((8LL * (v63 & 2)) | 0xC) + 16LL * (v63 & 1),
                                      0LL,
                                      v23,
                                      a12,
                                      a14)
                && (unsigned __int8)AuthzBasepObjectInTypeList(v64, a9, v15, &v69) )
              {
                AuthzBasepAddAccessTypeList(a9, v15, v69, v67, *(_DWORD *)(v24 + 4), 0);
              }
              goto LABEL_32;
            }
            goto LABEL_34;
          }
          if ( !(unsigned __int8)SepSidInToken(
                                   v18,
                                   v25,
                                   v24 + ((8LL * (v63 & 2)) | 0xC) + 16LL * (v63 & 1),
                                   0LL,
                                   v23,
                                   a12,
                                   a14) )
            goto LABEL_32;
          v57 = *(_DWORD *)(v24 + 4);
          if ( v15 == 1 )
          {
            *(_DWORD *)(a9 + 24) &= ~v57;
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
          v57 = *(_DWORD *)(v24 + 4);
          if ( v15 == 1 )
          {
            *(_DWORD *)(a9 + 24) &= ~v57;
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
          v65 = v24 + 12;
          LODWORD(v14) = 0;
          if ( (*(_DWORD *)(v24 + 8) & 1) == 0 )
            v65 = 0LL;
          if ( v65 && a10 )
          {
            if ( !(unsigned __int8)AuthzBasepObjectInTypeList(v65, a9, v15, &v69) )
              goto LABEL_32;
            result = *(unsigned int *)(a9 + 48LL * v69 + 24);
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
      v51 = *(_WORD *)(v24 + 2);
      v52 = 4 * *(unsigned __int8 *)(v24 + 9) + 8;
      if ( v51 - v52 == 8 )
        goto LABEL_34;
      if ( a5 && !*a6 )
      {
        AuthzBasepInitializeResourceClaimsFromSacl(a5, a6);
        v51 = *(_WORD *)(v24 + 2);
        LODWORD(v14) = 0;
      }
      v53 = *(_QWORD **)(v18 + 1096);
      if ( v53 )
      {
        v54 = v53[75];
        v55 = v53[73];
        v56 = v53[74];
        v14 = v53[72];
      }
      else
      {
        v54 = 0LL;
        v55 = 0LL;
        v56 = 0LL;
      }
      AuthzBasepEvaluateAceCondition(
        v18,
        *(_QWORD *)(v18 + 776),
        *a6,
        v14,
        v56,
        v55,
        v54,
        v24 + v52 + 8LL,
        v51 - v52 - 8,
        0,
        v23,
        (__int64)&v72);
      if ( v72 != 1 )
        goto LABEL_32;
      if ( !v16 && !v23 && v20 )
      {
        if ( SepIsPackageSid(v24 + 8) )
        {
          v59 = (_DWORD *)(a13 + 4);
          SepMatchPackage(
            a2,
            v68,
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
          v59 = (_DWORD *)(a13 + 8);
          SepMatchCapability(a2, v68, v24 + 8, *(_DWORD *)(v24 + 4), (_BYTE *)(a13 + 22), (_DWORD *)(a13 + 8));
        }
        v60 = ~*v59;
        v20 &= v60;
        v66 = v20;
        *(_DWORD *)a13 &= v60;
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
      v57 = *(_DWORD *)(v24 + 4);
LABEL_91:
      AuthzBasepAddAccessTypeList(a9, v15, 0, v67, v57, 0);
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
        v44 = *(_DWORD *)(v24 + 16);
        if ( v44 == *(_DWORD *)(v41 + 8) )
        {
          v45 = *(_DWORD *)(v24 + 4);
          if ( v44 == 2 && *(_BYTE *)(v24 + 9) == 2 )
          {
            v46 = *(_DWORD *)(v24 + 20);
            if ( v46 == 1 )
            {
              v47 = v45 & v74;
              CanTokenMatchAllPackageSid = SepCanTokenMatchAllPackageSid(a2);
              v49 = (_DWORD *)a13;
              if ( CanTokenMatchAllPackageSid )
              {
                *(_DWORD *)(a13 + 4) |= v47;
                *(_BYTE *)(a13 + 21) = 1;
              }
              else
              {
                *(_DWORD *)(a13 + 16) |= v47;
                *(_BYTE *)(a13 + 24) = 1;
              }
            }
            else
            {
              v49 = (_DWORD *)a13;
              if ( v46 == 2 )
              {
                *(_DWORD *)(a13 + 4) |= v45 & v68;
                *(_BYTE *)(a13 + 21) = 1;
              }
            }
          }
          else
          {
            *(_BYTE *)(a13 + 20) = 1;
            if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
            {
              v58 = RtlEqualSid(*(PSID *)(a2 + 784), (PSID)(v24 + 8));
              v49 = (_DWORD *)a13;
              if ( v58 )
              {
                *(_DWORD *)(a13 + 4) |= v45 & v68;
                *(_BYTE *)(a13 + 21) = 1;
              }
            }
            else
            {
              v49 = (_DWORD *)a13;
            }
          }
          v15 = a8;
          v50 = ~v49[1];
          v20 &= v50;
          *v49 &= v50;
          v66 = v20;
          goto LABEL_32;
        }
      }
      v42 = SeCapabilityPrefixSid;
      if ( *(_BYTE *)(v24 + 9) >= 2u
        && *(_BYTE *)(v24 + 8) == *(_BYTE *)SeCapabilityPrefixSid
        && RtlCompareMemory((const void *)(v24 + 10), (const void *)(SeCapabilityPrefixSid + 2), 6uLL) == 6
        && *(_DWORD *)(v24 + 16) == *(_DWORD *)(v42 + 8) )
      {
        goto LABEL_96;
      }
      v18 = a2;
    }
    v27 = *(_DWORD *)(a9 + 24);
    v71 = v27;
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
        v20 = v66;
        *(_DWORD *)(a9 + 24) = v27 & ~v39;
      }
      else
      {
        AuthzBasepAddAccessTypeList(a9, a8, 0, v67, v39, 0);
        v20 = v66;
      }
      goto LABEL_32;
    }
    if ( !v30 )
    {
      v20 = v66;
      v25 = (__int64)a7;
      v15 = a8;
LABEL_149:
      LODWORD(v14) = 0;
      goto LABEL_34;
    }
    if ( !v28 )
    {
      v20 = v66;
      v25 = (__int64)a7;
      v15 = a8;
      LODWORD(v14) = 0;
      goto LABEL_34;
    }
    v31 = v28[1];
    v32 = 0;
    a4 = *(unsigned __int16 *)v28;
    v77 = a4;
    v81 = 0;
    v33 = 4 * v31 + 8;
    v70 = v33;
    v34 = *(_QWORD *)(v30 + 8LL * (v28[4 * ((unsigned __int64)(unsigned int)a4 >> 8) + 4] & 0xF) + 16) & *(_QWORD *)(v30 + 8 * ((unsigned __int64)v28[4 * ((unsigned __int64)(unsigned int)a4 >> 8) + 4] >> 4) + 144);
    if ( !v34 )
    {
LABEL_38:
      v40 = *(_DWORD *)v30;
      if ( *(_DWORD *)v30 <= 0x40u )
        goto LABEL_39;
      v61 = *(_QWORD *)(v30 + 8);
      v62 = 64;
      v82 = v61;
      do
      {
        v38 = v61 + 16LL * v62;
        if ( **(_WORD **)v38 == (_WORD)a4 )
        {
          if ( !memcmp(v28, *(const void **)v38, v33) )
            goto LABEL_26;
          v61 = v82;
          a4 = v77;
          v33 = v70;
        }
        ++v62;
      }
      while ( v62 < v40 );
      v20 = v66;
      v23 = a11;
      goto LABEL_40;
    }
    while ( 1 )
    {
      LOBYTE(v35) = v34;
      if ( (_BYTE)v34 )
        break;
LABEL_58:
      v43 = v34;
      v32 += 8;
      v34 >>= 8;
      v81 = v32;
      if ( v43 < 0x100 )
      {
        v23 = a11;
        goto LABEL_38;
      }
    }
    v36 = *(_QWORD *)(v30 + 8);
    v37 = v32;
    v78 = v36;
    v76 = v32;
    while ( 1 )
    {
      v75 = SidHashByteToIndexLookupTable[(unsigned __int8)v35];
      v38 = v36 + 16LL * (unsigned int)(v37 + v75);
      if ( **(_WORD **)v38 == (_WORD)a4 )
        break;
LABEL_61:
      v37 = v76;
      v35 = (unsigned __int8)v35 ^ (1 << v75);
      if ( !(_BYTE)v35 )
      {
        v32 = v81;
        goto LABEL_58;
      }
    }
    if ( memcmp(v28, *(const void **)v38, v33) )
    {
      v36 = v78;
      a4 = v77;
      v33 = v70;
      goto LABEL_61;
    }
LABEL_26:
    v23 = a11;
    if ( !a11 && v38 == *(_QWORD *)(v30 + 8) && (*(_DWORD *)(v38 + 8) & 0x10) == 0 || (*(_DWORD *)(v38 + 8) & 4) != 0 )
    {
      v27 = v71;
      goto LABEL_30;
    }
LABEL_39:
    v20 = v66;
LABEL_40:
    v15 = a8;
LABEL_32:
    LODWORD(v14) = 0;
LABEL_33:
    v25 = (__int64)a7;
LABEL_34:
    result = *(unsigned __int16 *)(v24 + 2);
    v18 = a2;
    v24 += result;
    ++v67;
  }
  while ( v67 < v73 );
  return result;
}
