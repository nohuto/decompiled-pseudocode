/*
 * XREFs of SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0
 * Callers:
 *     SeAccessCheckWithHint @ 0x1400157C0 (SeAccessCheckWithHint.c)
 *     SeAccessCheck @ 0x140051640 (SeAccessCheck.c)
 * Callees:
 *     SepFreeResourceInfo @ 0x14001311C (SepFreeResourceInfo.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140021130 (AuthzBasepFreeSecurityAttributesList.c)
 *     SepMandatoryIntegrityCheck @ 0x140052270 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x140052760 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x1400528F0 (SepAccessCheck.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A62E0 (AuthzBasepEvaluateAceCondition.c)
 *     RtlEqualSid @ 0x1400A7DD0 (RtlEqualSid.c)
 *     SepLocateTokenTrustLevel @ 0x1400A8FE4 (SepLocateTokenTrustLevel.c)
 *     SepSidInTokenSidHash @ 0x1400AAB40 (SepSidInTokenSidHash.c)
 *     RtlSidDominatesForTrust @ 0x1400AD180 (RtlSidDominatesForTrust.c)
 *     SeLogAccessFailure @ 0x140118EE0 (SeLogAccessFailure.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401214DC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     memcmp @ 0x1401961E0 (memcmp.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402FE85C (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x1402FE9B4 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x1402FEB00 (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x1402FEC44 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x140300A60 (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     SeUnlockSubjectContext @ 0x1405E62C0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1405E6300 (SeLockSubjectContext.c)
 */

bool __fastcall SeAccessCheckWithHintWithAdminlessChecks(
        __int64 a1,
        char a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        char a4,
        unsigned int a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        char a9,
        int *a10,
        int *a11,
        char a12)
{
  int *v12; // r12
  unsigned int v13; // esi
  int v14; // ebx
  struct _SECURITY_SUBJECT_CONTEXT *v17; // rdi
  __int16 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // r10d
  int v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // ecx
  struct _SECURITY_SUBJECT_CONTEXT *v26; // rbx
  _DWORD *ClientToken; // r13
  int v28; // eax
  char v29; // cl
  int v30; // eax
  char v31; // dl
  char v32; // r14
  unsigned __int8 *v33; // rdi
  unsigned int *v34; // rbx
  int v35; // eax
  __int64 v36; // r8
  unsigned int v37; // r9d
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  int v40; // ecx
  unsigned __int64 v41; // r12
  unsigned int v42; // eax
  char v43; // cl
  unsigned int v44; // r8d
  int v45; // r14d
  int v46; // edi
  PACCESS_TOKEN v47; // r9
  __int64 v48; // rdx
  char v49; // bl
  __int64 v50; // r9
  _DWORD *v51; // r14
  char v52; // di
  int *v53; // r8
  char v54; // r10
  int v55; // ebx
  bool result; // al
  int v57; // eax
  __int64 v58; // rdx
  const void **v59; // r12
  char v60; // bl
  __int16 v61; // ax
  __int64 v62; // rcx
  _WORD *SeOwnerRightsSid; // r14
  int v64; // ecx
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rbx
  unsigned int v69; // edi
  int v70; // edx
  unsigned __int8 v71; // cl
  __int64 v72; // rcx
  _WORD *v73; // rcx
  unsigned __int64 v74; // rax
  char v75; // r11
  _QWORD *v76; // r9
  struct _SECURITY_SUBJECT_CONTEXT *v77; // rcx
  int v78; // ecx
  int v79; // r13d
  __int64 v80; // r11
  __int64 v81; // rdi
  int v82; // eax
  char v83; // si
  int TokenTrustLevel; // r9d
  __int64 v85; // rax
  __int16 v86; // cx
  __int64 v87; // rax
  __int64 v88; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v91; // rdx
  __int64 v92; // rdx
  unsigned int v93; // ecx
  int v94; // eax
  int v95; // ecx
  __int64 v96; // r8
  __int64 v97; // r8
  int v98; // eax
  _QWORD *v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // r9
  __int64 v103; // r10
  int v104; // eax
  int v105; // ecx
  int v106; // edi
  _QWORD *v107; // rax
  __int64 v108; // rdx
  __int64 v109; // r8
  __int64 v110; // r9
  __int64 v111; // r10
  int v112; // edx
  int v113; // r8d
  __int64 v114; // rcx
  __int64 v115; // rcx
  int v116; // [rsp+20h] [rbp-100h]
  int v117; // [rsp+28h] [rbp-F8h]
  int v118; // [rsp+30h] [rbp-F0h]
  char v119; // [rsp+A0h] [rbp-80h]
  char v120; // [rsp+A1h] [rbp-7Fh]
  char v121; // [rsp+A2h] [rbp-7Eh] BYREF
  char v122; // [rsp+A3h] [rbp-7Dh]
  _BYTE v123[4]; // [rsp+A4h] [rbp-7Ch] BYREF
  int v124; // [rsp+A8h] [rbp-78h]
  char v125; // [rsp+ACh] [rbp-74h] BYREF
  char v126; // [rsp+ADh] [rbp-73h]
  int v127; // [rsp+B0h] [rbp-70h]
  int v128; // [rsp+B4h] [rbp-6Ch]
  char v129[4]; // [rsp+B8h] [rbp-68h] BYREF
  unsigned int v130; // [rsp+BCh] [rbp-64h]
  PVOID P; // [rsp+C0h] [rbp-60h] BYREF
  int v132; // [rsp+C8h] [rbp-58h]
  int v133; // [rsp+CCh] [rbp-54h]
  __int64 v134; // [rsp+D0h] [rbp-50h]
  __int64 v135; // [rsp+D8h] [rbp-48h]
  int v136; // [rsp+E0h] [rbp-40h] BYREF
  int v137; // [rsp+E4h] [rbp-3Ch] BYREF
  int v138; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v139; // [rsp+F0h] [rbp-30h]
  __int64 v140; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v141; // [rsp+100h] [rbp-20h]
  __int64 v142; // [rsp+108h] [rbp-18h] BYREF
  __int64 v143; // [rsp+110h] [rbp-10h]
  __int64 v144; // [rsp+118h] [rbp-8h]
  int v145; // [rsp+120h] [rbp+0h]
  int v146; // [rsp+128h] [rbp+8h] BYREF
  __int64 i; // [rsp+130h] [rbp+10h]
  __int64 v148; // [rsp+138h] [rbp+18h]
  const void **v149; // [rsp+140h] [rbp+20h]
  _QWORD SecurityDescriptor[11]; // [rsp+148h] [rbp+28h] BYREF
  _QWORD *v153; // [rsp+1E0h] [rbp+C0h]
  char v154; // [rsp+1E0h] [rbp+C0h]
  _QWORD *PrimaryToken; // [rsp+1F8h] [rbp+D8h]
  char v156; // [rsp+200h] [rbp+E0h]
  unsigned int v157; // [rsp+200h] [rbp+E0h]

  v12 = a11;
  v13 = a5;
  v140 = 0LL;
  v14 = -1;
  v141 = 0LL;
  v139 = 0LL;
  v17 = a3;
  v124 = a6;
  *a10 = 0;
  *a11 = -1073741790;
  memset(SecurityDescriptor, 0, 40);
  v135 = 0LL;
  v120 = 0;
  v127 = 0;
  P = 0LL;
  v137 = 0;
  v138 = -1073741790;
  v132 = -1;
  v146 = -1;
  if ( a7 )
    *a7 = 0LL;
  if ( a9 )
  {
    if ( !a1 )
      goto LABEL_313;
    if ( a3->ClientToken && a3->ImpersonationLevel < SecurityImpersonation )
    {
      *a11 = -1073741659;
      return 0;
    }
    if ( a5 )
    {
      if ( !a4 )
        SeLockSubjectContext(a3);
      v18 = *(_WORD *)(a1 + 2);
      LODWORD(v19) = 0;
      v121 = 0;
      v125 = 0;
      while ( (v18 & 0x10) != 0 )
      {
        if ( v18 < 0 )
        {
          v66 = *(unsigned int *)(a1 + 12);
          if ( !(_DWORD)v66 )
            break;
          v20 = a1 + v66;
        }
        else
        {
          v20 = *(_QWORD *)(a1 + 24);
        }
        if ( !v20 )
          break;
        v21 = v20 + 8;
        v22 = 0;
        if ( !*(_WORD *)(v20 + 4) )
          break;
        while ( v22 < (unsigned int)v19 || *(_BYTE *)v21 != 20 )
        {
          ++v22;
          v21 += *(unsigned __int16 *)(v21 + 2);
          if ( v22 >= *(unsigned __int16 *)(v20 + 4) )
            goto LABEL_18;
        }
        v19 = v22;
        if ( (*(_BYTE *)(v21 + 1) & 8) == 0 )
        {
          if ( !v21 || (v79 = *(_DWORD *)(v21 + 4), v80 = v21 + 8, v21 == -8) )
          {
LABEL_20:
            v132 = -1;
            *a11 = 0;
            goto LABEL_21;
          }
          if ( !v17->ClientToken )
            goto LABEL_184;
          v81 = *((_QWORD *)v17->ClientToken + 138);
          v82 = RtlSidDominatesForTrust(*((_QWORD *)a3->PrimaryToken + 138), v81, &v125);
          if ( v82 >= 0 )
          {
            if ( !v125 )
            {
              v17 = a3;
LABEL_184:
              v81 = *((_QWORD *)v17->PrimaryToken + 138);
            }
            v82 = RtlSidDominatesForTrust(v81, v80, &v121);
            if ( v82 >= 0 )
            {
              if ( !v121 )
                v14 = v79 | 0x1000000;
              v132 = v14;
            }
          }
          *a11 = v82;
          if ( v82 < 0 )
          {
            if ( a4 )
              return 0;
            v77 = a3;
            goto LABEL_151;
          }
LABEL_21:
          v23 = 0;
          v24 = a5 & 0xFDFFFFFF;
          v25 = v14 & a5 & 0xFDFFFFFF;
          v26 = a3;
          if ( v25 != (a5 & 0xFDFFFFFF) )
            v23 = -1073741790;
          *a11 = v23;
          ClientToken = a3->ClientToken;
          if ( v25 != (a5 & 0xFDFFFFFF) )
          {
            if ( !ClientToken )
              ClientToken = a3->PrimaryToken;
            v83 = v124 | a5;
            TokenTrustLevel = SepLocateTokenTrustLevel(a3, v21, v19);
            goto LABEL_198;
          }
          if ( !ClientToken )
            ClientToken = a3->PrimaryToken;
          if ( (a2 & 4) == 0 )
          {
            v28 = SepFilterCheck(a1, (unsigned int)&P, (_DWORD)ClientToken, 0, (__int64)&v146);
            *a11 = v28;
            if ( v28 >= 0 )
            {
              if ( (v146 & v24) == v24 )
              {
                *a11 = 0;
                goto LABEL_30;
              }
              v83 = v124 | a5;
              TokenTrustLevel = 0;
              *a11 = -1073741790;
LABEL_198:
              SeLogAccessFailure((_DWORD)ClientToken, v21, v19, TokenTrustLevel, a1, v83, 0, 0);
            }
LABEL_199:
            if ( a4 )
              return 0;
LABEL_150:
            v77 = a3;
LABEL_151:
            SeUnlockSubjectContext(v77);
            return 0;
          }
LABEL_30:
          LOBYTE(v19) = (a2 & 2) != 0;
          LOBYTE(v21) = (a2 & 2) != 0 && (ClientToken[50] & 0x2000) != 0;
          v126 = v21;
          v122 = 0;
          if ( !SepAllowAccessUponLogoff && (ClientToken[50] & 0x20) == 0 )
          {
            v85 = *((_QWORD *)ClientToken + 27);
            if ( v85 )
            {
              if ( (*(_DWORD *)(v85 + 32) & 0x20) != 0 )
              {
                *a10 = 0;
                *a11 = -1073741790;
                goto LABEL_199;
              }
            }
          }
          v29 = a12;
          if ( !(_BYTE)v21 )
          {
            v30 = SepMandatoryIntegrityCheck(a8, a1, v19, (_DWORD)ClientToken, 0, a12, (__int64)&v140);
            *a11 = v30;
            if ( v30 < 0 )
              goto LABEL_199;
            if ( (_DWORD)v141 && (v24 & (unsigned int)v140) != v24 )
            {
              *a11 = -1073741790;
              if ( (ClientToken[50] & 0x4000) == 0 || HIDWORD(v141) > 0x2000 )
              {
                if ( a4 )
                  return 0;
                goto LABEL_150;
              }
              v122 = 1;
            }
            else
            {
              *a11 = 0;
              if ( (a5 & 0x2000000) != 0 && (ClientToken[50] & 0x4000) != 0 )
              {
                v29 = a12;
                if ( HIDWORD(v141) <= 0x2000 )
                  v122 = 1;
                goto LABEL_39;
              }
            }
            v29 = a12;
          }
LABEL_39:
          if ( !SepRmEnforceCap )
          {
LABEL_40:
            v31 = 0;
LABEL_41:
            v32 = a2 & 1;
            if ( v32 && (a5 & 0x2060000) == 0 && !v31 )
            {
              v44 = v127;
              v43 = 0;
              v45 = v124;
              v119 = 0;
              goto LABEL_51;
            }
            if ( *(__int16 *)(a1 + 2) < 0 )
            {
              v65 = *(unsigned int *)(a1 + 4);
              if ( (_DWORD)v65 )
                v33 = (unsigned __int8 *)(a1 + v65);
              else
                v33 = 0LL;
            }
            else
            {
              v33 = *(unsigned __int8 **)(a1 + 8);
            }
            v34 = ClientToken + 58;
            if ( v29 && v33 && RtlEqualSid(SeAliasAdminsSid, v33) )
            {
              v60 = 0;
              v119 = 0;
              goto LABEL_84;
            }
            if ( ClientToken == (_DWORD *)-232LL || !v33 )
              goto LABEL_50;
            v35 = v33[1];
            v36 = *(unsigned __int16 *)v33;
            v148 = v36;
            v37 = 4 * v35 + 8;
            v130 = v37;
            v38 = (unsigned __int64)v33[4 * ((unsigned __int64)(unsigned int)v36 >> 8) + 4] >> 4;
            v39 = v33[4 * ((unsigned __int64)(unsigned int)v36 >> 8) + 4] & 0xF;
            LOBYTE(v40) = 0;
            v121 = 0;
            v41 = *(_QWORD *)&v34[2 * v39 + 4] & *(_QWORD *)&v34[2 * v38 + 36];
            if ( !v41 )
              goto LABEL_48;
            while ( 2 )
            {
              LOBYTE(v57) = v41;
              v128 = (unsigned __int8)v41;
              if ( !(_BYTE)v41 )
                goto LABEL_139;
              v58 = *((_QWORD *)ClientToken + 30);
              v40 = (unsigned __int8)v40;
              i = v58;
              v133 = (unsigned __int8)v40;
LABEL_76:
              LODWORD(v134) = SidHashByteToIndexLookupTable[(unsigned __int8)v57];
              v149 = (const void **)(v58 + 16LL * (unsigned int)(v40 + v134));
              if ( *(_WORD *)*v149 == (_WORD)v36 )
              {
                if ( !memcmp(v33, *v149, v37) )
                {
                  v59 = v149;
LABEL_79:
                  if ( v59 == *((const void ***)ClientToken + 30) && ((_DWORD)v59[1] & 0x10) == 0
                    || ((_DWORD)v59[1] & 4) != 0 )
                  {
                    v60 = 1;
                    v119 = 1;
                    if ( ClientToken[32] )
                    {
                      LOBYTE(v118) = a12;
                      LOBYTE(v117) = 0;
                      LOBYTE(v116) = 1;
                      v60 = SepSidInTokenSidHash(ClientToken + 126, 0LL, v33, 0LL, v116, v117, v118);
                      v119 = v60;
                    }
                  }
                  else
                  {
                    v60 = 0;
                    v119 = 0;
                  }
                  v12 = a11;
LABEL_84:
                  if ( v60 && (a5 & 0x2060000) != 0 )
                  {
                    if ( !v32 )
                    {
                      v61 = *(_WORD *)(a1 + 2);
                      if ( (v61 & 4) != 0 )
                      {
                        if ( v61 >= 0 )
                        {
                          v62 = *(_QWORD *)(a1 + 32);
                        }
                        else
                        {
                          v67 = *(unsigned int *)(a1 + 16);
                          v62 = (_DWORD)v67 ? a1 + v67 : 0LL;
                        }
                      }
                      else
                      {
                        v62 = 0LL;
                      }
                      SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
                      if ( v62 )
                      {
                        v68 = v62 + 8;
                        v157 = *(unsigned __int16 *)(v62 + 4);
                        v69 = 0;
                        if ( *(_WORD *)(v62 + 4) )
                        {
                          v70 = 104928;
                          do
                          {
                            if ( (*(_BYTE *)(v68 + 1) & 8) == 0 )
                            {
                              v71 = *(_BYTE *)v68;
                              if ( *(_BYTE *)v68 <= 0x10u && _bittest(&v70, v71) )
                              {
                                v72 = 16LL * (*(_DWORD *)(v68 + 8) & 1) + ((8LL * (*(_DWORD *)(v68 + 8) & 2)) | 0xC);
                              }
                              else if ( v71 == 4 )
                              {
                                v72 = 12LL;
                              }
                              else
                              {
                                if ( v71 >= 0xBu && (unsigned __int8)(v71 - 13) > 1u )
                                  goto LABEL_132;
                                v72 = 8LL;
                              }
                              v73 = (_WORD *)(v68 + v72);
                              if ( v73 && *v73 == *SeOwnerRightsSid )
                              {
                                if ( !memcmp(
                                        v73,
                                        SeOwnerRightsSid,
                                        4 * ((unsigned __int64)(unsigned __int16)*v73 >> 8) + 8) )
                                  goto LABEL_112;
                                v70 = 104928;
                              }
                            }
LABEL_132:
                            ++v69;
                            v68 += *(unsigned __int16 *)(v68 + 2);
                          }
                          while ( v69 < v157 );
                        }
                      }
                    }
                    v26 = a3;
                    v44 = 393216;
                    v64 = 393216;
                    if ( (a5 & 0x2000000) == 0 )
                      v64 = a5 & 0x60000;
                    v124 |= v64;
                    v31 = v120;
                    v45 = v124;
                    if ( (a5 & 0x2000000) == 0 )
                      v44 = a5 & 0x60000;
                    v13 = a5 & 0xFFF9FFFF;
                    if ( !v120 )
                    {
                      v43 = 0;
                      v119 = 0;
                      goto LABEL_51;
                    }
                  }
                  else
                  {
LABEL_112:
                    v31 = v120;
                    v45 = v124;
                    v44 = v127;
                    v26 = a3;
                  }
                  v43 = v119;
                  goto LABEL_51;
                }
                LOWORD(v36) = v148;
                v37 = v130;
                v40 = v133;
              }
              v57 = (unsigned __int8)v128 ^ (1 << v134);
              v58 = i;
              v128 = v57;
              if ( !(_BYTE)v57 )
              {
                LOBYTE(v40) = v121;
LABEL_139:
                v74 = v41;
                LOBYTE(v40) = v40 + 8;
                v41 >>= 8;
                v121 = v40;
                if ( v74 < 0x100 )
                {
LABEL_48:
                  v42 = *v34;
                  LODWORD(v134) = v42;
                  if ( v42 > 0x40 )
                  {
                    v92 = *((_QWORD *)ClientToken + 30);
                    v93 = 64;
                    v128 = 64;
                    for ( i = v92; ; v92 = i )
                    {
                      v59 = (const void **)(v92 + 16LL * v93);
                      if ( *(_WORD *)*v59 == (_WORD)v36 )
                      {
                        if ( !memcmp(v33, *v59, v37) )
                          goto LABEL_79;
                        LOWORD(v36) = v148;
                        v42 = v134;
                        v37 = v130;
                        v93 = v128;
                      }
                      v128 = ++v93;
                      if ( v93 >= v42 )
                        break;
                    }
                  }
                  v12 = a11;
LABEL_50:
                  v26 = a3;
                  v43 = 0;
                  v44 = v127;
                  v45 = v124;
                  v31 = v120;
                  v119 = 0;
LABEL_51:
                  if ( !v13 && !v31 && ((ClientToken[50] & 0x2000) != 0 || !v44) )
                  {
                    if ( !a4 )
                      SeUnlockSubjectContext(v26);
                    *a10 = v45;
                    result = 1;
                    *v12 = 0;
                    return result;
                  }
                  v46 = (int)a10;
                  v47 = v26->ClientToken;
                  v143 = 0LL;
                  v144 = 0LL;
                  v145 = 0;
                  v142 = v44;
                  v49 = SepAccessCheck(
                          a1,
                          0,
                          v26->PrimaryToken,
                          (_DWORD)v47,
                          v13,
                          0LL,
                          0,
                          a8,
                          v45,
                          a9,
                          (__int64)a10,
                          (__int64)a7,
                          (__int64)v12,
                          0,
                          v43,
                          (__int64)&v142,
                          (__int64)&P,
                          (__int64)v123,
                          0LL,
                          a12);
                  v156 = v49;
                  if ( SepRmEnforceCap && (v94 = *v12, v130 = v94, v94 >= 0) && v120 )
                  {
                    v95 = *a10;
                    v96 = v135;
                    LOBYTE(v46) = 0;
                    v48 = 0LL;
                    v154 = 0;
                    v127 = *a10;
                    v128 = v46;
                    v133 = 0;
                    if ( *(_DWORD *)(v135 + 60) )
                    {
                      v51 = P;
                      while ( 1 )
                      {
                        v97 = *(_QWORD *)(v96 + 8LL * (unsigned int)v48 + 64);
                        v134 = v97;
                        if ( !*(_QWORD *)(v97 + 24) )
                          goto LABEL_267;
                        if ( !v51 )
                        {
                          v98 = AuthzBasepInitializeResourceClaimsFromSacl(v139, &P);
                          v51 = P;
                          v97 = v134;
                          v46 = (unsigned __int8)v46;
                          if ( v98 < 0 )
                            v46 = 1;
                          v128 = v46;
                        }
                        v99 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                        if ( v99 )
                        {
                          v100 = v99[75];
                          v101 = v99[73];
                          v102 = v99[74];
                          v103 = v99[72];
                        }
                        else
                        {
                          v100 = 0LL;
                          v101 = 0LL;
                          v102 = 0LL;
                          LODWORD(v103) = 0;
                        }
                        v104 = AuthzBasepEvaluateAceCondition(
                                 (_DWORD)ClientToken,
                                 *((_QWORD *)ClientToken + 97),
                                 (_DWORD)v51,
                                 v103,
                                 v102,
                                 v101,
                                 v100,
                                 *(_QWORD *)(v97 + 24),
                                 *(_DWORD *)(v97 + 16),
                                 1,
                                 0,
                                 (__int64)&v136);
                        v105 = v136;
                        v106 = v104;
                        if ( v136 == 1 )
                          goto LABEL_267;
                        if ( v104 < 0 )
                        {
                          if ( !a4 )
                            SeUnlockSubjectContext(a3);
                          if ( *(_QWORD *)(v135 + 32) )
LABEL_287:
                            ((void (*)(void))SepRmDereferenceCapTable)();
LABEL_288:
                          *a10 = 0;
                          *v12 = v106;
                          SepFreeResourceInfo(v51);
                          return 0;
                        }
                        if ( (ClientToken[50] & 0x10) != 0 )
                        {
                          v107 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                          if ( v107 )
                          {
                            v108 = v107[75];
                            v109 = v107[73];
                            v110 = v107[74];
                            v111 = v107[72];
                          }
                          else
                          {
                            v108 = 0LL;
                            v109 = 0LL;
                            v110 = 0LL;
                            LODWORD(v111) = 0;
                          }
                          v106 = AuthzBasepEvaluateAceCondition(
                                   (_DWORD)ClientToken,
                                   *((_QWORD *)ClientToken + 97),
                                   (_DWORD)v51,
                                   v111,
                                   v110,
                                   v109,
                                   v108,
                                   *(_QWORD *)(v134 + 24),
                                   *(_DWORD *)(v134 + 16),
                                   1,
                                   1,
                                   (__int64)&v136);
                          if ( v106 < 0 )
                          {
                            if ( !a4 )
                              SeUnlockSubjectContext(a3);
                            if ( *(_QWORD *)(v135 + 32) )
                              goto LABEL_287;
                            goto LABEL_288;
                          }
                          v105 = v136;
                        }
                        LOBYTE(v46) = v128;
                        if ( (_BYTE)v128 || v105 == 1 )
                        {
LABEL_267:
                          v106 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
                          if ( v106 < 0 )
                          {
                            if ( !a4 )
                              SeUnlockSubjectContext(a3);
                            if ( *(_QWORD *)(v135 + 32) )
                              goto LABEL_287;
                            goto LABEL_288;
                          }
                          v112 = v13;
                          if ( (*(_DWORD *)(v134 + 48) & 1) != 0 )
                          {
                            v113 = 0;
                            if ( (v13 & 0x2000000) == 0 )
                              v112 = v124 | v13;
                          }
                          else
                          {
                            v113 = v124;
                          }
                          v156 = SepAccessCheck(
                                   (unsigned int)SecurityDescriptor,
                                   0,
                                   a3->PrimaryToken,
                                   a3->ClientToken,
                                   v112,
                                   0LL,
                                   0,
                                   a8,
                                   v113,
                                   a9,
                                   (__int64)&v137,
                                   0LL,
                                   (__int64)&v138,
                                   0,
                                   v119,
                                   (__int64)&v142,
                                   (__int64)&P,
                                   (__int64)v123,
                                   0LL,
                                   a12);
                          if ( v154 )
                            v95 = v137 & v127;
                          else
                            v95 = v137;
                          v127 = v95;
                          if ( !v95 )
                          {
                            v51 = P;
                            v94 = -1073741790;
LABEL_280:
                            v49 = v156;
                            goto LABEL_281;
                          }
                          v94 = v138;
                          v130 = v138;
                          v154 = 1;
                          if ( v138 < 0 )
                          {
                            v49 = v156;
                            break;
                          }
                          v51 = P;
                          LOBYTE(v46) = v128;
                        }
                        else
                        {
                          v94 = v130;
                          v95 = v127;
                        }
                        v96 = v135;
                        v48 = (unsigned int)(v133 + 1);
                        v133 = v48;
                        if ( (unsigned int)v48 >= *(_DWORD *)(v135 + 60) )
                          goto LABEL_280;
                      }
                    }
                    v51 = P;
LABEL_281:
                    v53 = a10;
                    v52 = v123[0];
                    *v12 = v94;
                    *a10 &= v95;
                    if ( *v12 < 0 )
                      v52 = 0;
                  }
                  else
                  {
                    v51 = P;
                    v52 = v123[0];
                    v53 = a10;
                  }
                  if ( !v126 && (v13 & 0x2000000) != 0 )
                  {
                    if ( (!v122 || !*(_WORD *)((char *)&v144 + 5))
                      && (_DWORD)v141
                      && (!BYTE4(v140) || !BYTE5(v140) || !BYTE6(v140)) )
                    {
                      v78 = *v53 & v140;
                      if ( v78 != *v53 )
                      {
                        *v53 = v78;
                        if ( v78 )
                        {
                          *v12 = 0;
                          v52 = 1;
                        }
                        else
                        {
                          *v12 = -1073741790;
LABEL_158:
                          v52 = 0;
                        }
                      }
                    }
                  }
                  else if ( v122 && !*(_WORD *)((char *)&v144 + 5) )
                  {
                    *v12 = -1073741790;
                    *v53 = 0;
                    goto LABEL_158;
                  }
                  LOBYTE(v50) = 0;
                  if ( (v13 & 0x2000000) != 0 )
                  {
                    if ( v132 != -1 )
                    {
                      v48 = v132 & (unsigned int)*v53;
                      if ( (_DWORD)v48 != *v53 )
                      {
                        *v53 = v48;
                        LOBYTE(v50) = 1;
                        if ( (_DWORD)v48 )
                        {
                          *v12 = 0;
                          v52 = 1;
                        }
                        else
                        {
                          *v12 = -1073741790;
                          v52 = 0;
                        }
                      }
                    }
                    v54 = 0;
                    if ( v146 != -1 )
                    {
                      v48 = v146 & (unsigned int)*v53;
                      if ( (_DWORD)v48 != *v53 )
                      {
                        *v53 = v48;
                        v54 = 1;
                        if ( (_DWORD)v48 )
                        {
                          *v12 = 0;
                          v52 = 1;
                        }
                        else
                        {
                          *v12 = -1073741790;
                          v52 = 0;
                        }
                      }
                    }
                  }
                  else
                  {
                    v54 = 0;
                  }
                  if ( ClientToken )
                  {
                    if ( (_BYTE)v50 || v54 )
                    {
                      v55 = HIDWORD(v143);
LABEL_142:
                      v75 = *v12 >= 0;
                      PrimaryToken = a3->PrimaryToken;
                      v153 = a3->ClientToken;
                      if ( a3->ClientToken )
                      {
                        RtlSidDominatesForTrust(
                          *((_QWORD *)a3->PrimaryToken + 138),
                          *((_QWORD *)a3->ClientToken + 138),
                          v129);
                        if ( v129[0] )
                          v76 = v153;
                        else
                          v76 = PrimaryToken;
                      }
                      else
                      {
                        v76 = a3->PrimaryToken;
                      }
                      SeLogAccessFailure((_DWORD)ClientToken, v48, (_DWORD)v53, v76[138], a1, v124 | v13, v75, 0);
                    }
                    else
                    {
                      v55 = HIDWORD(v143);
                      if ( !HIDWORD(v143) && (ClientToken[50] & 0x4000) != 0 && (*v12 < 0 || HIBYTE(v144)) )
                        goto LABEL_142;
                    }
                    if ( *v12 < 0 && !v55 && (ClientToken[50] & 0x4000) != 0 )
                    {
                      if ( (_BYTE)v145 )
                      {
                        v114 = v13 & ~(HIDWORD(v142) | (unsigned int)v143 | 0x2000000);
                        if ( ((unsigned int)v114 & (unsigned int)v144) == (_DWORD)v114 )
                          SepLogLpacAccessFailure(v114, v48, v53);
                      }
                    }
                    v49 = v156;
                  }
                  if ( v120 )
                  {
                    v115 = *(_QWORD *)(v135 + 32);
                    if ( v115 )
                      SepRmDereferenceCapTable(v115, v48, v53, v50);
                  }
                  if ( !a4 )
                    SeUnlockSubjectContext(a3);
                  if ( v51 )
                  {
                    AuthzBasepFreeSecurityAttributesList(v51);
                    ExFreePoolWithTag(v51, 0);
                  }
                  return v49 && v52;
                }
                continue;
              }
              goto LABEL_76;
            }
          }
          v86 = *(_WORD *)(a1 + 2);
          if ( (v86 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
          {
            if ( v86 >= 0 )
            {
              v88 = *(_QWORD *)(a1 + 24);
            }
            else
            {
              v87 = *(unsigned int *)(a1 + 12);
              if ( !(_DWORD)v87 )
              {
                v139 = 0LL;
                goto LABEL_221;
              }
              v88 = a1 + v87;
            }
            v139 = v88;
            if ( v88 )
            {
              ScopedPolicySid = (void *)SepGetScopedPolicySid(v88, v21, v19);
              if ( ScopedPolicySid )
              {
                Cap = SepRmReferenceFindCap(ScopedPolicySid);
                v91 = v135;
                if ( Cap < 0 )
                  v91 = SepRmDefaultCap;
                v29 = a12;
                v135 = v91;
                v31 = 1;
                v120 = 1;
                goto LABEL_41;
              }
            }
          }
LABEL_221:
          v29 = a12;
          goto LABEL_40;
        }
LABEL_19:
        v19 = (unsigned int)(v19 + 1);
        if ( !v21 )
          goto LABEL_20;
      }
LABEL_18:
      v21 = 0LL;
      goto LABEL_19;
    }
    if ( !a6 )
    {
LABEL_313:
      *a11 = -1073741790;
      return 0;
    }
    *a10 = a6;
    *a11 = 0;
    if ( a7 )
      *a7 = 0LL;
    return 1;
  }
  else
  {
    if ( (a5 & 0x2000000) != 0 )
      v13 = *(_DWORD *)(a8 + 12) | a5 & 0xFDFFFFFF;
    result = 1;
    *a10 = a6 | v13;
    *a11 = 0;
  }
  return result;
}
