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
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 *     RtlEqualSid @ 0x1400A7D30 (RtlEqualSid.c)
 *     SepLocateTokenTrustLevel @ 0x1400A8F44 (SepLocateTokenTrustLevel.c)
 *     SepSidInTokenSidHash @ 0x1400AAAA0 (SepSidInTokenSidHash.c)
 *     RtlSidDominatesForTrust @ 0x1400AD0E0 (RtlSidDominatesForTrust.c)
 *     SeLogAccessFailure @ 0x140118F70 (SeLogAccessFailure.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401215CC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     memcmp @ 0x140196340 (memcmp.c)
 *     SepBuildCapeSecurityDescriptor @ 0x1402FEB4C (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x1402FECA4 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x1402FEDF0 (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x1402FEF34 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x140300D50 (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeUnlockSubjectContext @ 0x1405E72C0 (SeUnlockSubjectContext.c)
 *     SeLockSubjectContext @ 0x1405E7300 (SeLockSubjectContext.c)
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
        NTSTATUS *a11,
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
  char *ClientToken; // r13
  int v28; // eax
  int v29; // edx
  bool v30; // dl
  char v31; // cl
  int v32; // eax
  char v33; // dl
  char v34; // r14
  unsigned __int8 *v35; // rdi
  unsigned int *v36; // rbx
  int v37; // eax
  __int64 v38; // r8
  unsigned int v39; // r9d
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  int v42; // ecx
  unsigned __int64 v43; // r12
  unsigned int v44; // eax
  char v45; // cl
  unsigned int v46; // r8d
  int v47; // r14d
  int v48; // edi
  PACCESS_TOKEN v49; // r9
  __int64 v50; // rdx
  char v51; // bl
  __int64 v52; // r9
  _DWORD *v53; // r14
  char v54; // di
  int *v55; // r8
  char v56; // r10
  int v57; // ebx
  bool result; // al
  int v59; // eax
  __int64 v60; // rdx
  const void **v61; // r12
  char v62; // bl
  __int16 v63; // ax
  __int64 v64; // rcx
  _WORD *SeOwnerRightsSid; // r14
  int v66; // ecx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rbx
  unsigned int v71; // edi
  int v72; // edx
  unsigned __int8 v73; // cl
  __int64 v74; // rcx
  _WORD *v75; // rcx
  unsigned __int64 v76; // rax
  char v77; // r11
  PSID *PrimaryToken; // rax
  _QWORD *v79; // r9
  struct _SECURITY_SUBJECT_CONTEXT *v80; // rcx
  int v81; // ecx
  int v82; // r13d
  void *v83; // r11
  void *v84; // rdi
  NTSTATUS v85; // eax
  char v86; // si
  int TokenTrustLevel; // r9d
  __int64 v88; // rax
  __int16 v89; // cx
  __int64 v90; // rax
  ACL *v91; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v94; // rdx
  __int64 v95; // rdx
  unsigned int v96; // ecx
  int v97; // eax
  int v98; // ecx
  __int64 v99; // r8
  __int64 v100; // r8
  int v101; // eax
  _QWORD *v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // r9
  __int64 v106; // r10
  int v107; // eax
  int v108; // ecx
  int v109; // edi
  _QWORD *v110; // rax
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __int64 v114; // r10
  int v115; // edx
  int v116; // r8d
  __int64 v117; // rcx
  __int64 v118; // rcx
  char v119; // [rsp+A0h] [rbp-80h]
  char v120; // [rsp+A1h] [rbp-7Fh]
  BOOLEAN DominatesTrust; // [rsp+A2h] [rbp-7Eh] BYREF
  char v122; // [rsp+A3h] [rbp-7Dh]
  _BYTE v123[4]; // [rsp+A4h] [rbp-7Ch] BYREF
  int v124; // [rsp+A8h] [rbp-78h]
  BOOLEAN v125; // [rsp+ACh] [rbp-74h] BYREF
  bool v126; // [rsp+ADh] [rbp-73h]
  int v127; // [rsp+B0h] [rbp-70h]
  int v128; // [rsp+B4h] [rbp-6Ch]
  BOOLEAN v129[4]; // [rsp+B8h] [rbp-68h] BYREF
  unsigned int v130; // [rsp+BCh] [rbp-64h]
  PVOID P; // [rsp+C0h] [rbp-60h] BYREF
  int v132; // [rsp+C8h] [rbp-58h]
  int v133; // [rsp+CCh] [rbp-54h]
  __int64 v134; // [rsp+D0h] [rbp-50h]
  __int64 v135; // [rsp+D8h] [rbp-48h]
  int v136; // [rsp+E0h] [rbp-40h] BYREF
  int v137; // [rsp+E4h] [rbp-3Ch] BYREF
  int v138; // [rsp+E8h] [rbp-38h] BYREF
  ACL *v139; // [rsp+F0h] [rbp-30h]
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
  PSID *v155; // [rsp+1F8h] [rbp+D8h]
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
      DominatesTrust = 0;
      v125 = 0;
      while ( (v18 & 0x10) != 0 )
      {
        if ( v18 < 0 )
        {
          v68 = *(unsigned int *)(a1 + 12);
          if ( !(_DWORD)v68 )
            break;
          v20 = a1 + v68;
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
          if ( !v21 || (v82 = *(_DWORD *)(v21 + 4), v83 = (void *)(v21 + 8), v21 == -8) )
          {
LABEL_20:
            v132 = -1;
            *a11 = 0;
            goto LABEL_21;
          }
          if ( !v17->ClientToken )
            goto LABEL_184;
          v84 = (void *)*((_QWORD *)v17->ClientToken + 138);
          v85 = RtlSidDominatesForTrust(*((PSID *)a3->PrimaryToken + 138), v84, &v125);
          if ( v85 >= 0 )
          {
            if ( !v125 )
            {
              v17 = a3;
LABEL_184:
              v84 = (void *)*((_QWORD *)v17->PrimaryToken + 138);
            }
            v85 = RtlSidDominatesForTrust(v84, v83, &DominatesTrust);
            if ( v85 >= 0 )
            {
              if ( !DominatesTrust )
                v14 = v82 | 0x1000000;
              v132 = v14;
            }
          }
          *a11 = v85;
          if ( v85 < 0 )
          {
            if ( a4 )
              return 0;
            v80 = a3;
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
          ClientToken = (char *)a3->ClientToken;
          if ( v25 != (a5 & 0xFDFFFFFF) )
          {
            if ( !ClientToken )
              ClientToken = (char *)a3->PrimaryToken;
            v86 = v124 | a5;
            TokenTrustLevel = SepLocateTokenTrustLevel(a3, v21, v19);
            goto LABEL_198;
          }
          if ( !ClientToken )
            ClientToken = (char *)a3->PrimaryToken;
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
              v86 = v124 | a5;
              TokenTrustLevel = 0;
              *a11 = -1073741790;
LABEL_198:
              SeLogAccessFailure((_DWORD)ClientToken, v29, v19, TokenTrustLevel, a1, v86, 0, 0);
            }
LABEL_199:
            if ( a4 )
              return 0;
LABEL_150:
            v80 = a3;
LABEL_151:
            SeUnlockSubjectContext(v80);
            return 0;
          }
LABEL_30:
          v30 = (a2 & 2) != 0 && (*((_DWORD *)ClientToken + 50) & 0x2000) != 0;
          v126 = v30;
          v122 = 0;
          if ( !SepAllowAccessUponLogoff && (*((_DWORD *)ClientToken + 50) & 0x20) == 0 )
          {
            v88 = *((_QWORD *)ClientToken + 27);
            if ( v88 )
            {
              if ( (*(_DWORD *)(v88 + 32) & 0x20) != 0 )
              {
                *a10 = 0;
                *a11 = -1073741790;
                goto LABEL_199;
              }
            }
          }
          v31 = a12;
          if ( !v30 )
          {
            LOBYTE(v19) = (a2 & 2) != 0;
            v32 = SepMandatoryIntegrityCheck(a8, a1, v19, (_DWORD)ClientToken, 0, a12, (__int64)&v140);
            *a11 = v32;
            if ( v32 < 0 )
              goto LABEL_199;
            if ( (_DWORD)v141 && (v24 & (unsigned int)v140) != v24 )
            {
              *a11 = -1073741790;
              if ( (*((_DWORD *)ClientToken + 50) & 0x4000) == 0 || HIDWORD(v141) > 0x2000 )
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
              if ( (a5 & 0x2000000) != 0 && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 )
              {
                v31 = a12;
                if ( HIDWORD(v141) <= 0x2000 )
                  v122 = 1;
                goto LABEL_39;
              }
            }
            v31 = a12;
          }
LABEL_39:
          if ( !SepRmEnforceCap )
          {
LABEL_40:
            v33 = 0;
LABEL_41:
            v34 = a2 & 1;
            if ( v34 && (a5 & 0x2060000) == 0 && !v33 )
            {
              v46 = v127;
              v45 = 0;
              v47 = v124;
              v119 = 0;
              goto LABEL_51;
            }
            if ( *(__int16 *)(a1 + 2) < 0 )
            {
              v67 = *(unsigned int *)(a1 + 4);
              if ( (_DWORD)v67 )
                v35 = (unsigned __int8 *)(a1 + v67);
              else
                v35 = 0LL;
            }
            else
            {
              v35 = *(unsigned __int8 **)(a1 + 8);
            }
            v36 = (unsigned int *)(ClientToken + 232);
            if ( v31 && v35 && RtlEqualSid(SeAliasAdminsSid, v35) )
            {
              v62 = 0;
              v119 = 0;
              goto LABEL_84;
            }
            if ( ClientToken == (char *)-232LL || !v35 )
              goto LABEL_50;
            v37 = v35[1];
            v38 = *(unsigned __int16 *)v35;
            v148 = v38;
            v39 = 4 * v37 + 8;
            v130 = v39;
            v40 = (unsigned __int64)v35[4 * ((unsigned __int64)(unsigned int)v38 >> 8) + 4] >> 4;
            v41 = v35[4 * ((unsigned __int64)(unsigned int)v38 >> 8) + 4] & 0xF;
            LOBYTE(v42) = 0;
            DominatesTrust = 0;
            v43 = *(_QWORD *)&v36[2 * v41 + 4] & *(_QWORD *)&v36[2 * v40 + 36];
            if ( !v43 )
              goto LABEL_48;
            while ( 2 )
            {
              LOBYTE(v59) = v43;
              v128 = (unsigned __int8)v43;
              if ( !(_BYTE)v43 )
                goto LABEL_139;
              v60 = *((_QWORD *)ClientToken + 30);
              v42 = (unsigned __int8)v42;
              i = v60;
              v133 = (unsigned __int8)v42;
LABEL_76:
              LODWORD(v134) = SidHashByteToIndexLookupTable[(unsigned __int8)v59];
              v149 = (const void **)(v60 + 16LL * (unsigned int)(v42 + v134));
              if ( *(_WORD *)*v149 == (_WORD)v38 )
              {
                if ( !memcmp(v35, *v149, v39) )
                {
                  v61 = v149;
LABEL_79:
                  if ( v61 == *((const void ***)ClientToken + 30) && ((_DWORD)v61[1] & 0x10) == 0
                    || ((_DWORD)v61[1] & 4) != 0 )
                  {
                    v62 = 1;
                    v119 = 1;
                    if ( *((_DWORD *)ClientToken + 32) )
                    {
                      v62 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(ClientToken + 504), 1, 0, a12);
                      v119 = v62;
                    }
                  }
                  else
                  {
                    v62 = 0;
                    v119 = 0;
                  }
                  v12 = a11;
LABEL_84:
                  if ( v62 && (a5 & 0x2060000) != 0 )
                  {
                    if ( !v34 )
                    {
                      v63 = *(_WORD *)(a1 + 2);
                      if ( (v63 & 4) != 0 )
                      {
                        if ( v63 >= 0 )
                        {
                          v64 = *(_QWORD *)(a1 + 32);
                        }
                        else
                        {
                          v69 = *(unsigned int *)(a1 + 16);
                          v64 = (_DWORD)v69 ? a1 + v69 : 0LL;
                        }
                      }
                      else
                      {
                        v64 = 0LL;
                      }
                      SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
                      if ( v64 )
                      {
                        v70 = v64 + 8;
                        v157 = *(unsigned __int16 *)(v64 + 4);
                        v71 = 0;
                        if ( *(_WORD *)(v64 + 4) )
                        {
                          v72 = 104928;
                          do
                          {
                            if ( (*(_BYTE *)(v70 + 1) & 8) == 0 )
                            {
                              v73 = *(_BYTE *)v70;
                              if ( *(_BYTE *)v70 <= 0x10u && _bittest(&v72, v73) )
                              {
                                v74 = 16LL * (*(_DWORD *)(v70 + 8) & 1) + ((8LL * (*(_DWORD *)(v70 + 8) & 2)) | 0xC);
                              }
                              else if ( v73 == 4 )
                              {
                                v74 = 12LL;
                              }
                              else
                              {
                                if ( v73 >= 0xBu && (unsigned __int8)(v73 - 13) > 1u )
                                  goto LABEL_132;
                                v74 = 8LL;
                              }
                              v75 = (_WORD *)(v70 + v74);
                              if ( v75 && *v75 == *SeOwnerRightsSid )
                              {
                                if ( !memcmp(
                                        v75,
                                        SeOwnerRightsSid,
                                        4 * ((unsigned __int64)(unsigned __int16)*v75 >> 8) + 8) )
                                  goto LABEL_112;
                                v72 = 104928;
                              }
                            }
LABEL_132:
                            ++v71;
                            v70 += *(unsigned __int16 *)(v70 + 2);
                          }
                          while ( v71 < v157 );
                        }
                      }
                    }
                    v26 = a3;
                    v46 = 393216;
                    v66 = 393216;
                    if ( (a5 & 0x2000000) == 0 )
                      v66 = a5 & 0x60000;
                    v124 |= v66;
                    v33 = v120;
                    v47 = v124;
                    if ( (a5 & 0x2000000) == 0 )
                      v46 = a5 & 0x60000;
                    v13 = a5 & 0xFFF9FFFF;
                    if ( !v120 )
                    {
                      v45 = 0;
                      v119 = 0;
                      goto LABEL_51;
                    }
                  }
                  else
                  {
LABEL_112:
                    v33 = v120;
                    v47 = v124;
                    v46 = v127;
                    v26 = a3;
                  }
                  v45 = v119;
                  goto LABEL_51;
                }
                LOWORD(v38) = v148;
                v39 = v130;
                v42 = v133;
              }
              v59 = (unsigned __int8)v128 ^ (1 << v134);
              v60 = i;
              v128 = v59;
              if ( !(_BYTE)v59 )
              {
                LOBYTE(v42) = DominatesTrust;
LABEL_139:
                v76 = v43;
                LOBYTE(v42) = v42 + 8;
                v43 >>= 8;
                DominatesTrust = v42;
                if ( v76 < 0x100 )
                {
LABEL_48:
                  v44 = *v36;
                  LODWORD(v134) = v44;
                  if ( v44 > 0x40 )
                  {
                    v95 = *((_QWORD *)ClientToken + 30);
                    v96 = 64;
                    v128 = 64;
                    for ( i = v95; ; v95 = i )
                    {
                      v61 = (const void **)(v95 + 16LL * v96);
                      if ( *(_WORD *)*v61 == (_WORD)v38 )
                      {
                        if ( !memcmp(v35, *v61, v39) )
                          goto LABEL_79;
                        LOWORD(v38) = v148;
                        v44 = v134;
                        v39 = v130;
                        v96 = v128;
                      }
                      v128 = ++v96;
                      if ( v96 >= v44 )
                        break;
                    }
                  }
                  v12 = a11;
LABEL_50:
                  v26 = a3;
                  v45 = 0;
                  v46 = v127;
                  v47 = v124;
                  v33 = v120;
                  v119 = 0;
LABEL_51:
                  if ( !v13 && !v33 && ((*((_DWORD *)ClientToken + 50) & 0x2000) != 0 || !v46) )
                  {
                    if ( !a4 )
                      SeUnlockSubjectContext(v26);
                    *a10 = v47;
                    result = 1;
                    *v12 = 0;
                    return result;
                  }
                  v48 = (int)a10;
                  v49 = v26->ClientToken;
                  v143 = 0LL;
                  v144 = 0LL;
                  v145 = 0;
                  v142 = v46;
                  v51 = SepAccessCheck(
                          a1,
                          0,
                          v26->PrimaryToken,
                          (_DWORD)v49,
                          v13,
                          0LL,
                          0,
                          a8,
                          v47,
                          a9,
                          (__int64)a10,
                          (__int64)a7,
                          (__int64)v12,
                          0,
                          v45,
                          (__int64)&v142,
                          (__int64)&P,
                          (__int64)v123,
                          0LL,
                          a12);
                  v156 = v51;
                  if ( SepRmEnforceCap && (v97 = *v12, v130 = v97, v97 >= 0) && v120 )
                  {
                    v98 = *a10;
                    v99 = v135;
                    LOBYTE(v48) = 0;
                    v50 = 0LL;
                    v154 = 0;
                    v127 = *a10;
                    v128 = v48;
                    v133 = 0;
                    if ( *(_DWORD *)(v135 + 60) )
                    {
                      v53 = P;
                      while ( 1 )
                      {
                        v100 = *(_QWORD *)(v99 + 8LL * (unsigned int)v50 + 64);
                        v134 = v100;
                        if ( !*(_QWORD *)(v100 + 24) )
                          goto LABEL_267;
                        if ( !v53 )
                        {
                          v101 = AuthzBasepInitializeResourceClaimsFromSacl(v139, &P);
                          v53 = P;
                          v100 = v134;
                          v48 = (unsigned __int8)v48;
                          if ( v101 < 0 )
                            v48 = 1;
                          v128 = v48;
                        }
                        v102 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                        if ( v102 )
                        {
                          v103 = v102[75];
                          v104 = v102[73];
                          v105 = v102[74];
                          v106 = v102[72];
                        }
                        else
                        {
                          v103 = 0LL;
                          v104 = 0LL;
                          v105 = 0LL;
                          LODWORD(v106) = 0;
                        }
                        v107 = AuthzBasepEvaluateAceCondition(
                                 (_DWORD)ClientToken,
                                 *((_QWORD *)ClientToken + 97),
                                 (_DWORD)v53,
                                 v106,
                                 v105,
                                 v104,
                                 v103,
                                 *(_QWORD *)(v100 + 24),
                                 *(_DWORD *)(v100 + 16),
                                 1,
                                 0,
                                 (__int64)&v136);
                        v108 = v136;
                        v109 = v107;
                        if ( v136 == 1 )
                          goto LABEL_267;
                        if ( v107 < 0 )
                        {
                          if ( !a4 )
                            SeUnlockSubjectContext(a3);
                          if ( *(_QWORD *)(v135 + 32) )
LABEL_287:
                            ((void (*)(void))SepRmDereferenceCapTable)();
LABEL_288:
                          *a10 = 0;
                          *v12 = v109;
                          SepFreeResourceInfo(v53);
                          return 0;
                        }
                        if ( (*((_DWORD *)ClientToken + 50) & 0x10) != 0 )
                        {
                          v110 = (_QWORD *)*((_QWORD *)ClientToken + 137);
                          if ( v110 )
                          {
                            v111 = v110[75];
                            v112 = v110[73];
                            v113 = v110[74];
                            v114 = v110[72];
                          }
                          else
                          {
                            v111 = 0LL;
                            v112 = 0LL;
                            v113 = 0LL;
                            LODWORD(v114) = 0;
                          }
                          v109 = AuthzBasepEvaluateAceCondition(
                                   (_DWORD)ClientToken,
                                   *((_QWORD *)ClientToken + 97),
                                   (_DWORD)v53,
                                   v114,
                                   v113,
                                   v112,
                                   v111,
                                   *(_QWORD *)(v134 + 24),
                                   *(_DWORD *)(v134 + 16),
                                   1,
                                   1,
                                   (__int64)&v136);
                          if ( v109 < 0 )
                          {
                            if ( !a4 )
                              SeUnlockSubjectContext(a3);
                            if ( *(_QWORD *)(v135 + 32) )
                              goto LABEL_287;
                            goto LABEL_288;
                          }
                          v108 = v136;
                        }
                        LOBYTE(v48) = v128;
                        if ( (_BYTE)v128 || v108 == 1 )
                        {
LABEL_267:
                          v109 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
                          if ( v109 < 0 )
                          {
                            if ( !a4 )
                              SeUnlockSubjectContext(a3);
                            if ( *(_QWORD *)(v135 + 32) )
                              goto LABEL_287;
                            goto LABEL_288;
                          }
                          v115 = v13;
                          if ( (*(_DWORD *)(v134 + 48) & 1) != 0 )
                          {
                            v116 = 0;
                            if ( (v13 & 0x2000000) == 0 )
                              v115 = v124 | v13;
                          }
                          else
                          {
                            v116 = v124;
                          }
                          v156 = SepAccessCheck(
                                   (unsigned int)SecurityDescriptor,
                                   0,
                                   a3->PrimaryToken,
                                   a3->ClientToken,
                                   v115,
                                   0LL,
                                   0,
                                   a8,
                                   v116,
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
                            v98 = v137 & v127;
                          else
                            v98 = v137;
                          v127 = v98;
                          if ( !v98 )
                          {
                            v53 = P;
                            v97 = -1073741790;
LABEL_280:
                            v51 = v156;
                            goto LABEL_281;
                          }
                          v97 = v138;
                          v130 = v138;
                          v154 = 1;
                          if ( v138 < 0 )
                          {
                            v51 = v156;
                            break;
                          }
                          v53 = P;
                          LOBYTE(v48) = v128;
                        }
                        else
                        {
                          v97 = v130;
                          v98 = v127;
                        }
                        v99 = v135;
                        v50 = (unsigned int)(v133 + 1);
                        v133 = v50;
                        if ( (unsigned int)v50 >= *(_DWORD *)(v135 + 60) )
                          goto LABEL_280;
                      }
                    }
                    v53 = P;
LABEL_281:
                    v55 = a10;
                    v54 = v123[0];
                    *v12 = v97;
                    *a10 &= v98;
                    if ( *v12 < 0 )
                      v54 = 0;
                  }
                  else
                  {
                    v53 = P;
                    v54 = v123[0];
                    v55 = a10;
                  }
                  if ( !v126 && (v13 & 0x2000000) != 0 )
                  {
                    if ( (!v122 || !*(_WORD *)((char *)&v144 + 5))
                      && (_DWORD)v141
                      && (!BYTE4(v140) || !BYTE5(v140) || !BYTE6(v140)) )
                    {
                      v81 = *v55 & v140;
                      if ( v81 != *v55 )
                      {
                        *v55 = v81;
                        if ( v81 )
                        {
                          *v12 = 0;
                          v54 = 1;
                        }
                        else
                        {
                          *v12 = -1073741790;
LABEL_158:
                          v54 = 0;
                        }
                      }
                    }
                  }
                  else if ( v122 && !*(_WORD *)((char *)&v144 + 5) )
                  {
                    *v12 = -1073741790;
                    *v55 = 0;
                    goto LABEL_158;
                  }
                  LOBYTE(v52) = 0;
                  if ( (v13 & 0x2000000) != 0 )
                  {
                    if ( v132 != -1 )
                    {
                      v50 = v132 & (unsigned int)*v55;
                      if ( (_DWORD)v50 != *v55 )
                      {
                        *v55 = v50;
                        LOBYTE(v52) = 1;
                        if ( (_DWORD)v50 )
                        {
                          *v12 = 0;
                          v54 = 1;
                        }
                        else
                        {
                          *v12 = -1073741790;
                          v54 = 0;
                        }
                      }
                    }
                    v56 = 0;
                    if ( v146 != -1 )
                    {
                      v50 = v146 & (unsigned int)*v55;
                      if ( (_DWORD)v50 != *v55 )
                      {
                        *v55 = v50;
                        v56 = 1;
                        if ( (_DWORD)v50 )
                        {
                          *v12 = 0;
                          v54 = 1;
                        }
                        else
                        {
                          *v12 = -1073741790;
                          v54 = 0;
                        }
                      }
                    }
                  }
                  else
                  {
                    v56 = 0;
                  }
                  if ( ClientToken )
                  {
                    if ( (_BYTE)v52 || v56 )
                    {
                      v57 = HIDWORD(v143);
LABEL_142:
                      v77 = *v12 >= 0;
                      PrimaryToken = (PSID *)a3->PrimaryToken;
                      v155 = PrimaryToken;
                      v153 = a3->ClientToken;
                      if ( a3->ClientToken )
                      {
                        RtlSidDominatesForTrust(PrimaryToken[138], *((PSID *)a3->ClientToken + 138), v129);
                        if ( v129[0] )
                          v79 = v153;
                        else
                          v79 = v155;
                      }
                      else
                      {
                        v79 = a3->PrimaryToken;
                      }
                      SeLogAccessFailure((_DWORD)ClientToken, v50, (_DWORD)v55, v79[138], a1, v124 | v13, v77, 0);
                    }
                    else
                    {
                      v57 = HIDWORD(v143);
                      if ( !HIDWORD(v143) && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 && (*v12 < 0 || HIBYTE(v144)) )
                        goto LABEL_142;
                    }
                    if ( *v12 < 0 && !v57 && (*((_DWORD *)ClientToken + 50) & 0x4000) != 0 )
                    {
                      if ( (_BYTE)v145 )
                      {
                        v117 = v13 & ~(HIDWORD(v142) | (unsigned int)v143 | 0x2000000);
                        if ( ((unsigned int)v117 & (unsigned int)v144) == (_DWORD)v117 )
                          SepLogLpacAccessFailure(v117, v50, v55);
                      }
                    }
                    v51 = v156;
                  }
                  if ( v120 )
                  {
                    v118 = *(_QWORD *)(v135 + 32);
                    if ( v118 )
                      SepRmDereferenceCapTable(v118, v50, v55, v52);
                  }
                  if ( !a4 )
                    SeUnlockSubjectContext(a3);
                  if ( v53 )
                  {
                    AuthzBasepFreeSecurityAttributesList(v53);
                    ExFreePoolWithTag(v53, 0);
                  }
                  return v51 && v54;
                }
                continue;
              }
              goto LABEL_76;
            }
          }
          v89 = *(_WORD *)(a1 + 2);
          if ( (v89 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
          {
            if ( v89 >= 0 )
            {
              v91 = *(ACL **)(a1 + 24);
            }
            else
            {
              v90 = *(unsigned int *)(a1 + 12);
              if ( !(_DWORD)v90 )
              {
                v139 = 0LL;
                goto LABEL_221;
              }
              v91 = (ACL *)(a1 + v90);
            }
            v139 = v91;
            if ( v91 )
            {
              ScopedPolicySid = (void *)SepGetScopedPolicySid(v91);
              if ( ScopedPolicySid )
              {
                Cap = SepRmReferenceFindCap(ScopedPolicySid);
                v94 = v135;
                if ( Cap < 0 )
                  v94 = SepRmDefaultCap;
                v31 = a12;
                v135 = v94;
                v33 = 1;
                v120 = 1;
                goto LABEL_41;
              }
            }
          }
LABEL_221:
          v31 = a12;
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
