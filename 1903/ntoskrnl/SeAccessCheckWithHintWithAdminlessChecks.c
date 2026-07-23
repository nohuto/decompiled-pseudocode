/*
 * XREFs of SeAccessCheckWithHintWithAdminlessChecks @ 0x1400C8790
 * Callers:
 *     SeAccessCheck @ 0x1400C6350 (SeAccessCheck.c)
 *     SeAccessCheckWithHint @ 0x1400C8720 (SeAccessCheckWithHint.c)
 * Callees:
 *     RtlEqualSid @ 0x1400053E0 (RtlEqualSid.c)
 *     SepLocateTokenTrustLevel @ 0x14000AC44 (SepLocateTokenTrustLevel.c)
 *     SepFreeResourceInfo @ 0x14000C198 (SepFreeResourceInfo.c)
 *     RtlSidDominatesForTrust @ 0x14000CA20 (RtlSidDominatesForTrust.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1400795E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140085130 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepSidInTokenSidHash @ 0x140086AE4 (SepSidInTokenSidHash.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140092EE0 (AuthzBasepEvaluateAceCondition.c)
 *     SepMandatoryIntegrityCheck @ 0x1400C9360 (SepMandatoryIntegrityCheck.c)
 *     SepFilterCheck @ 0x1400C9850 (SepFilterCheck.c)
 *     SepAccessCheck @ 0x1400C9F50 (SepAccessCheck.c)
 *     SeLogAccessFailure @ 0x140126C7C (SeLogAccessFailure.c)
 *     memcmp @ 0x1401A09F0 (memcmp.c)
 *     SepBuildCapeSecurityDescriptor @ 0x14031CB6C (SepBuildCapeSecurityDescriptor.c)
 *     SepGetScopedPolicySid @ 0x14031CCC4 (SepGetScopedPolicySid.c)
 *     SepLogLpacAccessFailure @ 0x14031CE14 (SepLogLpacAccessFailure.c)
 *     SepRmDereferenceCapTable @ 0x14031CF78 (SepRmDereferenceCapTable.c)
 *     SepRmReferenceFindCap @ 0x14031EDD4 (SepRmReferenceFindCap.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeLockSubjectContext @ 0x1405F5DB0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x1405F5E10 (SeUnlockSubjectContext.c)
 */

bool __fastcall SeAccessCheckWithHintWithAdminlessChecks(
        __int64 a1,
        char a2,
        int *a3,
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
  NTSTATUS *v12; // r15
  unsigned int v13; // r14d
  int v17; // ebx
  __int16 v18; // r9
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // r10d
  unsigned int v23; // edi
  __int64 v24; // r13
  int v25; // eax
  int v26; // edx
  NTSTATUS *v27; // rcx
  char v28; // dl
  char v29; // cl
  int v30; // eax
  char v31; // r8
  unsigned __int8 *v32; // rsi
  unsigned int *v33; // rdi
  int v34; // eax
  __int64 v35; // r8
  unsigned int v36; // r9d
  unsigned __int64 v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // ecx
  unsigned __int64 v40; // r15
  unsigned int v41; // eax
  char v42; // si
  int v43; // edx
  int v44; // edi
  __int64 v45; // r9
  __int64 v46; // r8
  char v47; // di
  __int64 v48; // r9
  int *v49; // r8
  _DWORD *v50; // r15
  char v51; // si
  int *v52; // rdx
  char v53; // r10
  char v54; // r11
  int v55; // edi
  bool result; // al
  int v57; // eax
  __int64 v58; // rdx
  const void **v59; // r15
  __int16 v60; // ax
  __int64 v61; // rcx
  const void **SeOwnerRightsSid; // rdx
  int v63; // eax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdi
  unsigned int v68; // r15d
  int v69; // r8d
  unsigned __int8 v70; // cl
  __int64 v71; // rcx
  _WORD *v72; // rcx
  char v73; // bl
  int v74; // eax
  int v75; // edx
  int v76; // r8d
  unsigned __int64 v77; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v78; // rcx
  int v79; // ecx
  int v80; // r15d
  void *v81; // r11
  void *v82; // rdi
  NTSTATUS v83; // eax
  bool v84; // zf
  __int64 v85; // rbx
  char v86; // r14
  int TokenTrustLevel; // eax
  int v88; // edx
  int v89; // r8d
  int v90; // eax
  __int64 v91; // r8
  int v92; // ecx
  unsigned int v93; // edx
  __int64 v94; // rax
  __int16 v95; // cx
  __int64 v96; // rax
  ACL *v97; // rax
  void *ScopedPolicySid; // rax
  int Cap; // eax
  __int64 v100; // rdx
  __int64 v101; // rdx
  unsigned int v102; // ecx
  __int64 v103; // r8
  int v104; // eax
  int v105; // r9d
  _QWORD *v106; // rax
  __int64 v107; // rcx
  __int64 v108; // rdx
  __int64 v109; // r9
  __int64 v110; // r10
  int v111; // eax
  int v112; // ecx
  _QWORD *v113; // rax
  __int64 v114; // rdx
  __int64 v115; // r8
  __int64 v116; // r9
  __int64 v117; // r10
  int v118; // edi
  int v119; // r8d
  int v120; // edx
  int v121; // ecx
  int v122; // eax
  __int64 v123; // rcx
  __int64 v124; // rcx
  BOOLEAN DominatesTrust; // [rsp+A0h] [rbp-80h] BYREF
  BOOLEAN v126; // [rsp+A1h] [rbp-7Fh] BYREF
  char v127; // [rsp+A2h] [rbp-7Eh]
  char v128; // [rsp+A3h] [rbp-7Dh] BYREF
  int v129; // [rsp+A4h] [rbp-7Ch]
  unsigned int v130; // [rsp+A8h] [rbp-78h]
  char v131; // [rsp+ACh] [rbp-74h]
  int v132; // [rsp+B0h] [rbp-70h]
  int v133; // [rsp+B4h] [rbp-6Ch]
  unsigned int v134; // [rsp+B8h] [rbp-68h]
  PVOID P; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v136; // [rsp+C8h] [rbp-58h]
  __int64 v137; // [rsp+D0h] [rbp-50h]
  int v138; // [rsp+D8h] [rbp-48h] BYREF
  int v139; // [rsp+DCh] [rbp-44h] BYREF
  int v140; // [rsp+E0h] [rbp-40h]
  __int64 v141; // [rsp+E8h] [rbp-38h]
  int v142; // [rsp+F0h] [rbp-30h] BYREF
  ACL *v143; // [rsp+F8h] [rbp-28h]
  __int64 v144; // [rsp+100h] [rbp-20h] BYREF
  __int64 v145; // [rsp+108h] [rbp-18h]
  int v146; // [rsp+110h] [rbp-10h] BYREF
  __int128 v147; // [rsp+114h] [rbp-Ch]
  __int64 v148; // [rsp+124h] [rbp+4h]
  int v149; // [rsp+130h] [rbp+10h] BYREF
  __int64 i; // [rsp+138h] [rbp+18h]
  const void **v151; // [rsp+140h] [rbp+20h]
  _QWORD SecurityDescriptor[11]; // [rsp+148h] [rbp+28h] BYREF
  char v153; // [rsp+1B8h] [rbp+98h]
  char v156; // [rsp+1E0h] [rbp+C0h]
  char v157; // [rsp+1F0h] [rbp+D0h]

  v12 = a11;
  v13 = a5;
  v144 = 0LL;
  v145 = 0LL;
  memset(SecurityDescriptor, 0, 40);
  v153 = 0;
  v17 = -1;
  v149 = -1;
  *a10 = 0;
  v129 = a6;
  v143 = 0LL;
  v137 = 0LL;
  v132 = 0;
  P = 0LL;
  *a11 = -1073741790;
  v139 = 0;
  v142 = -1073741790;
  v140 = a2 & 8;
  if ( a7 )
    *a7 = 0LL;
  if ( a9 )
  {
    if ( !a1 )
      goto LABEL_309;
    if ( *(_QWORD *)a3 && a3[2] < 2 )
    {
      *a11 = -1073741659;
      return 0;
    }
    if ( a5 )
    {
      if ( !a4 )
        SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
      v18 = *(_WORD *)(a1 + 2);
      v19 = 0;
      DominatesTrust = 0;
      v126 = 0;
      while ( (v18 & 0x10) != 0 )
      {
        if ( v18 < 0 )
        {
          v65 = *(unsigned int *)(a1 + 12);
          if ( !(_DWORD)v65 )
            break;
          v20 = a1 + v65;
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
        while ( v22 < v19 || *(_BYTE *)v21 != 20 )
        {
          ++v22;
          v21 += *(unsigned __int16 *)(v21 + 2);
          if ( v22 >= *(unsigned __int16 *)(v20 + 4) )
            goto LABEL_18;
        }
        v19 = v22;
        if ( (*(_BYTE *)(v21 + 1) & 8) == 0 )
        {
          if ( v21 )
          {
            v80 = *(_DWORD *)(v21 + 4);
            v81 = (void *)(v21 + 8);
            if ( v21 == -8 )
            {
              v12 = a11;
            }
            else
            {
              if ( !*(_QWORD *)a3 )
                goto LABEL_180;
              v82 = *(void **)(*(_QWORD *)a3 + 1104LL);
              v83 = RtlSidDominatesForTrust(*(PSID *)(*((_QWORD *)a3 + 2) + 1104LL), v82, &v126);
              if ( v83 >= 0 )
              {
                if ( !v126 )
LABEL_180:
                  v82 = *(void **)(*((_QWORD *)a3 + 2) + 1104LL);
                v83 = RtlSidDominatesForTrust(v82, v81, &DominatesTrust);
                if ( v83 >= 0 )
                {
                  v17 = v80 | 0x1000000;
                  if ( DominatesTrust )
                    v17 = -1;
                }
              }
              v12 = a11;
              *a11 = v83;
              if ( v83 < 0 )
              {
                if ( a4 )
                  return 0;
LABEL_186:
                v78 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
LABEL_146:
                SeUnlockSubjectContext(v78);
                return 0;
              }
            }
          }
LABEL_20:
          v23 = a5 & 0xFDFFFFFF;
          if ( (v17 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
          {
            v84 = v140 == 0;
            *v12 = -1073741790;
            if ( v84 )
            {
              v85 = *(_QWORD *)a3;
              if ( !*(_QWORD *)a3 )
                v85 = *((_QWORD *)a3 + 2);
              v86 = v129 | a5;
              TokenTrustLevel = SepLocateTokenTrustLevel((__int64 *)a3);
              SeLogAccessFailure(v85, v88, v89, TokenTrustLevel, a1, v86, 0, 0);
            }
            if ( a4 )
              return 0;
            goto LABEL_186;
          }
          *v12 = 0;
          v24 = *(_QWORD *)a3;
          if ( !v24 )
            v24 = *((_QWORD *)a3 + 2);
          if ( (a2 & 4) == 0 )
          {
            v25 = SepFilterCheck(a1, (unsigned int)&P, v24, 0, (__int64)&v149);
            v27 = a11;
            *a11 = v25;
            if ( v25 >= 0 )
            {
              if ( (v149 & v23) == v23 )
              {
                *a11 = 0;
                goto LABEL_27;
              }
              v84 = v140 == 0;
              *a11 = -1073741790;
              if ( v84 )
                SeLogAccessFailure(v24, v26, v19, 0, a1, v129 | a5, 0, 0);
            }
LABEL_144:
            if ( a4 )
              return 0;
            v78 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
            goto LABEL_146;
          }
          v27 = a11;
LABEL_27:
          if ( (a2 & 2) == 0 )
          {
            LOBYTE(v19) = 0;
            goto LABEL_29;
          }
          LOBYTE(v19) = 1;
          if ( (*(_DWORD *)(v24 + 200) & 0x2000) != 0 )
            v28 = 1;
          else
LABEL_29:
            v28 = 0;
          v131 = v28;
          v127 = 0;
          if ( !SepAllowAccessUponLogoff && (*(_DWORD *)(v24 + 200) & 0x20) == 0 )
          {
            v94 = *(_QWORD *)(v24 + 216);
            if ( v94 )
            {
              if ( (*(_DWORD *)(v94 + 32) & 0x20) != 0 )
              {
                *a10 = 0;
                *v27 = -1073741790;
                if ( a4 )
                  return 0;
                v78 = (struct _SECURITY_SUBJECT_CONTEXT *)a3;
                goto LABEL_146;
              }
            }
          }
          v29 = a12;
          if ( !v28 )
          {
            v30 = SepMandatoryIntegrityCheck(a8, a1, v19, v24, 0, a12, (__int64)&v144);
            *a11 = v30;
            if ( v30 < 0 )
              goto LABEL_144;
            if ( (_DWORD)v145 && (v23 & (unsigned int)v144) != v23 )
            {
              *a11 = -1073741790;
              if ( (*(_DWORD *)(v24 + 200) & 0x4000) == 0 || HIDWORD(v145) > 0x2000 )
                goto LABEL_144;
              v29 = a12;
              v127 = 1;
            }
            else
            {
              *a11 = 0;
              if ( (a5 & 0x2000000) != 0 && (*(_DWORD *)(v24 + 200) & 0x4000) != 0 && HIDWORD(v145) <= 0x2000 )
                v127 = 1;
              v29 = a12;
            }
          }
          if ( !SepRmEnforceCap )
          {
LABEL_38:
            v31 = 0;
            goto LABEL_39;
          }
          v95 = *(_WORD *)(a1 + 2);
          if ( (v95 & 0x10) != 0 && KeGetCurrentIrql() < 2u )
          {
            if ( v95 >= 0 )
            {
              v97 = *(ACL **)(a1 + 24);
            }
            else
            {
              v96 = *(unsigned int *)(a1 + 12);
              if ( !(_DWORD)v96 )
              {
                v143 = 0LL;
                goto LABEL_219;
              }
              v97 = (ACL *)(a1 + v96);
            }
            v143 = v97;
            if ( v97 )
            {
              ScopedPolicySid = (void *)SepGetScopedPolicySid(v97);
              if ( ScopedPolicySid )
              {
                Cap = SepRmReferenceFindCap(ScopedPolicySid);
                v100 = v137;
                v31 = 1;
                if ( Cap < 0 )
                  v100 = SepRmDefaultCap;
                v153 = 1;
                v29 = a12;
                v137 = v100;
              }
              else
              {
                v29 = a12;
                v31 = 0;
              }
LABEL_39:
              if ( (a2 & 1) != 0 )
              {
                v126 = 1;
                if ( (a5 & 0x2060000) == 0 && !v31 )
                {
                  v42 = 0;
                  goto LABEL_50;
                }
              }
              else
              {
                v126 = 0;
              }
              if ( *(__int16 *)(a1 + 2) < 0 )
              {
                v64 = *(unsigned int *)(a1 + 4);
                if ( (_DWORD)v64 )
                  v32 = (unsigned __int8 *)(a1 + v64);
                else
                  v32 = 0LL;
              }
              else
              {
                v32 = *(unsigned __int8 **)(a1 + 8);
              }
              v33 = (unsigned int *)(v24 + 232);
              if ( v29 && v32 && RtlEqualSid(SeAliasAdminsSid, v32) )
              {
                v42 = 0;
                goto LABEL_83;
              }
              if ( v24 == -232 || !v32 )
                goto LABEL_48;
              v34 = v32[1];
              v35 = *(unsigned __int16 *)v32;
              v141 = v35;
              v36 = 4 * v34 + 8;
              v134 = v36;
              v37 = (unsigned __int64)v32[4 * ((unsigned __int64)(unsigned int)v35 >> 8) + 4] >> 4;
              v38 = v32[4 * ((unsigned __int64)(unsigned int)v35 >> 8) + 4] & 0xF;
              LOBYTE(v39) = 0;
              DominatesTrust = 0;
              v40 = *(_QWORD *)&v33[2 * v38 + 4] & *(_QWORD *)&v33[2 * v37 + 36];
              if ( !v40 )
                goto LABEL_47;
LABEL_74:
              LOBYTE(v57) = v40;
              v133 = (unsigned __int8)v40;
              if ( !(_BYTE)v40 )
                goto LABEL_142;
              v58 = *(_QWORD *)(v24 + 240);
              v39 = (unsigned __int8)v39;
              i = v58;
              v130 = (unsigned __int8)v39;
              while ( 1 )
              {
                v136 = SidHashByteToIndexLookupTable[(unsigned __int8)v57];
                v151 = (const void **)(v58 + 16LL * (v39 + v136));
                if ( *(_WORD *)*v151 == (_WORD)v35 )
                {
                  if ( !memcmp(v32, *v151, v36) )
                  {
                    v59 = v151;
LABEL_79:
                    if ( v59 == *(const void ***)(v24 + 240) && ((_DWORD)v59[1] & 0x10) == 0
                      || ((_DWORD)v59[1] & 4) != 0 )
                    {
                      if ( *(_DWORD *)(v24 + 128) )
                        v42 = SepSidInTokenSidHash((PSID_AND_ATTRIBUTES_HASH)(v24 + 504), 0LL, v32, 0, 1, 0, a12);
                      else
                        v42 = 1;
                    }
                    else
                    {
                      v42 = 0;
                    }
LABEL_83:
                    if ( !v42 || (a5 & 0x2060000) == 0 )
                      goto LABEL_49;
                    if ( v126 )
                      goto LABEL_89;
                    v60 = *(_WORD *)(a1 + 2);
                    if ( (v60 & 4) != 0 )
                    {
                      if ( v60 >= 0 )
                      {
                        v61 = *(_QWORD *)(a1 + 32);
                      }
                      else
                      {
                        v66 = *(unsigned int *)(a1 + 16);
                        v61 = (_DWORD)v66 ? a1 + v66 : 0LL;
                      }
                    }
                    else
                    {
                      v61 = 0LL;
                    }
                    SeOwnerRightsSid = (const void **)SeExports->SeOwnerRightsSid;
                    v151 = SeOwnerRightsSid;
                    if ( !v61 || (v67 = v61 + 8, v130 = *(unsigned __int16 *)(v61 + 4), v68 = 0, !v130) )
                    {
LABEL_89:
                      v31 = v153;
                      v43 = 393216;
                      if ( (a5 & 0x2000000) == 0 )
                        v43 = a5 & 0x60000;
                      v13 = a5 & 0xFFF9FFFF;
                      v63 = v129 | v43;
                      v129 = v63;
                      v44 = v63;
                      if ( !v153 )
                      {
                        v42 = 0;
                        v129 = v63;
                      }
                      goto LABEL_51;
                    }
                    v69 = 104928;
                    while ( 2 )
                    {
                      if ( (*(_BYTE *)(v67 + 1) & 8) != 0 )
                        goto LABEL_127;
                      v70 = *(_BYTE *)v67;
                      if ( *(_BYTE *)v67 <= 0x10u && _bittest(&v69, v70) )
                      {
                        v71 = 16LL * (*(_DWORD *)(v67 + 8) & 1) + ((8LL * (*(_DWORD *)(v67 + 8) & 2)) | 0xC);
                      }
                      else
                      {
                        if ( v70 != 4 )
                        {
                          if ( v70 < 0xBu || (unsigned __int8)(v70 - 13) <= 1u )
                          {
                            v71 = 8LL;
                            break;
                          }
LABEL_127:
                          ++v68;
                          v67 += *(unsigned __int16 *)(v67 + 2);
                          if ( v68 >= v130 )
                            goto LABEL_89;
                          continue;
                        }
                        v71 = 12LL;
                      }
                      break;
                    }
                    v72 = (_WORD *)(v67 + v71);
                    if ( v72 && *v72 == *(_WORD *)SeOwnerRightsSid )
                    {
                      if ( !memcmp(v72, SeOwnerRightsSid, 4 * ((unsigned __int64)(unsigned __int16)*v72 >> 8) + 8) )
                        goto LABEL_49;
                      SeOwnerRightsSid = v151;
                      v69 = 104928;
                    }
                    goto LABEL_127;
                  }
                  LOWORD(v35) = v141;
                  v36 = v134;
                  v39 = v130;
                }
                v57 = (unsigned __int8)v133 ^ (1 << v136);
                v58 = i;
                v133 = v57;
                if ( !(_BYTE)v57 )
                {
                  LOBYTE(v39) = DominatesTrust;
LABEL_142:
                  v77 = v40;
                  LOBYTE(v39) = v39 + 8;
                  v40 >>= 8;
                  DominatesTrust = v39;
                  if ( v77 < 0x100 )
                  {
LABEL_47:
                    v41 = *v33;
                    v130 = v41;
                    if ( v41 > 0x40 )
                    {
                      v101 = *(_QWORD *)(v24 + 240);
                      v102 = 64;
                      v133 = 64;
                      for ( i = v101; ; v101 = i )
                      {
                        v59 = (const void **)(v101 + 16LL * v102);
                        if ( *(_WORD *)*v59 == (_WORD)v35 )
                        {
                          if ( !memcmp(v32, *v59, v36) )
                            goto LABEL_79;
                          LOWORD(v35) = v141;
                          v41 = v130;
                          v36 = v134;
                          v102 = v133;
                        }
                        v133 = ++v102;
                        if ( v102 >= v41 )
                          break;
                      }
                    }
LABEL_48:
                    v42 = 0;
LABEL_49:
                    v31 = v153;
LABEL_50:
                    v43 = v132;
                    v44 = v129;
LABEL_51:
                    if ( !v13 && !v31 && ((*(_DWORD *)(v24 + 200) & 0x2000) != 0 || !v43) )
                    {
                      if ( !a4 )
                        SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
                      result = 1;
                      *a10 = v44;
                      *a11 = 0;
                      return result;
                    }
                    v148 = 0LL;
                    v45 = *(_QWORD *)a3;
                    v46 = *((_QWORD *)a3 + 2);
                    v146 = v43;
                    v147 = 0LL;
                    v47 = SepAccessCheck(
                            a1,
                            0,
                            v46,
                            v45,
                            v13,
                            0LL,
                            0,
                            a8,
                            v44,
                            a9,
                            (__int64)a10,
                            (__int64)a7,
                            (__int64)a11,
                            0,
                            v42,
                            (__int64)&v146,
                            (__int64)&P,
                            (__int64)&v128,
                            0LL,
                            a12);
                    v49 = a11;
                    v156 = v47;
                    if ( SepRmEnforceCap && (v90 = *a11, v134 = v90, v90 >= 0) && v153 )
                    {
                      v91 = v137;
                      v92 = *a10;
                      v93 = 0;
                      DominatesTrust = 0;
                      v132 = v92;
                      LOBYTE(v133) = 0;
                      v136 = 0;
                      if ( *(_DWORD *)(v137 + 60) )
                      {
                        v50 = P;
                        while ( 1 )
                        {
                          v103 = *(_QWORD *)(v91 + 8LL * v93 + 64);
                          v141 = v103;
                          if ( !*(_QWORD *)(v103 + 24) )
                            goto LABEL_262;
                          if ( !v50 )
                          {
                            v104 = AuthzBasepInitializeResourceClaimsFromSacl((__int64)v143, &P);
                            v50 = P;
                            v103 = v141;
                            v105 = (unsigned __int8)v133;
                            if ( v104 < 0 )
                              v105 = 1;
                            v133 = v105;
                          }
                          v106 = *(_QWORD **)(v24 + 1096);
                          if ( v106 )
                          {
                            v107 = v106[75];
                            v108 = v106[73];
                            v109 = v106[74];
                            v110 = v106[72];
                          }
                          else
                          {
                            v107 = 0LL;
                            v108 = 0LL;
                            v109 = 0LL;
                            v110 = 0LL;
                          }
                          v111 = AuthzBasepEvaluateAceCondition(
                                   v24,
                                   *(_QWORD *)(v24 + 776),
                                   (__int64)v50,
                                   v110,
                                   v109,
                                   v108,
                                   v107,
                                   *(_DWORD **)(v103 + 24),
                                   *(_DWORD *)(v103 + 16),
                                   1u,
                                   0,
                                   &v138);
                          v112 = v138;
                          v130 = v111;
                          if ( v138 == 1 )
                            goto LABEL_262;
                          if ( v111 < 0 )
                          {
                            if ( !a4 )
                            {
                              SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
                              v111 = v130;
                            }
                            if ( *(_QWORD *)(v137 + 32) )
                            {
LABEL_281:
                              ((void (*)(void))SepRmDereferenceCapTable)();
                              v111 = v130;
                            }
LABEL_282:
                            *a10 = 0;
                            *a11 = v111;
LABEL_284:
                            SepFreeResourceInfo(v50);
                            return 0;
                          }
                          if ( (*(_DWORD *)(v24 + 200) & 0x10) != 0 )
                          {
                            v113 = *(_QWORD **)(v24 + 1096);
                            if ( v113 )
                            {
                              v114 = v113[75];
                              v115 = v113[73];
                              v116 = v113[74];
                              v117 = v113[72];
                            }
                            else
                            {
                              v114 = 0LL;
                              v115 = 0LL;
                              v116 = 0LL;
                              v117 = 0LL;
                            }
                            v111 = AuthzBasepEvaluateAceCondition(
                                     v24,
                                     *(_QWORD *)(v24 + 776),
                                     (__int64)v50,
                                     v117,
                                     v116,
                                     v115,
                                     v114,
                                     *(_DWORD **)(v141 + 24),
                                     *(_DWORD *)(v141 + 16),
                                     1u,
                                     1u,
                                     &v138);
                            v130 = v111;
                            if ( v111 < 0 )
                            {
                              if ( !a4 )
                              {
                                SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
                                v111 = v130;
                              }
                              if ( *(_QWORD *)(v137 + 32) )
                                goto LABEL_281;
                              goto LABEL_282;
                            }
                            v112 = v138;
                          }
                          if ( (_BYTE)v133 || v112 == 1 )
                          {
LABEL_262:
                            v118 = SepBuildCapeSecurityDescriptor(SecurityDescriptor);
                            if ( v118 < 0 )
                            {
                              if ( !a4 )
                                SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
                              if ( *(_QWORD *)(v137 + 32) )
                                ((void (*)(void))SepRmDereferenceCapTable)();
                              *a10 = 0;
                              *a11 = v118;
                              goto LABEL_284;
                            }
                            if ( (*(_DWORD *)(v141 + 48) & 1) != 0 )
                            {
                              v119 = 0;
                              v120 = v13;
                              if ( (v13 & 0x2000000) == 0 )
                                v120 = v129 | v13;
                            }
                            else
                            {
                              v119 = v129;
                              v120 = v13;
                            }
                            v47 = SepAccessCheck(
                                    (unsigned int)SecurityDescriptor,
                                    0,
                                    *((_QWORD *)a3 + 2),
                                    *(_QWORD *)a3,
                                    v120,
                                    0LL,
                                    0,
                                    a8,
                                    v119,
                                    a9,
                                    (__int64)&v139,
                                    0LL,
                                    (__int64)&v142,
                                    0,
                                    v42,
                                    (__int64)&v146,
                                    (__int64)&P,
                                    (__int64)&v128,
                                    0LL,
                                    a12);
                            v156 = v47;
                            if ( DominatesTrust )
                              v92 = v139 & v132;
                            else
                              v92 = v139;
                            v132 = v92;
                            if ( !v92 )
                            {
                              v90 = -1073741790;
                              break;
                            }
                            v90 = v142;
                            v134 = v142;
                            DominatesTrust = 1;
                            if ( v142 < 0 )
                              break;
                            v50 = P;
                          }
                          else
                          {
                            v90 = v134;
                            v92 = v132;
                          }
                          v91 = v137;
                          v93 = v136 + 1;
                          v136 = v93;
                          if ( v93 >= *(_DWORD *)(v137 + 60) )
                            goto LABEL_275;
                        }
                      }
                      v50 = P;
LABEL_275:
                      v49 = a11;
                      v52 = a10;
                      v51 = v128;
                      *a11 = v90;
                      *a10 &= v92;
                      if ( *a11 < 0 )
                        v51 = 0;
                    }
                    else
                    {
                      v50 = P;
                      v51 = v128;
                      v52 = a10;
                    }
                    if ( !v131 && (v13 & 0x2000000) != 0 )
                    {
                      if ( (!v127 || !*(_WORD *)((char *)&v148 + 1))
                        && (_DWORD)v145
                        && (!BYTE4(v144) || !BYTE5(v144) || !BYTE6(v144)) )
                      {
                        v79 = *v52 & v144;
                        if ( v79 != *v52 )
                        {
                          *v52 = v79;
                          if ( v79 )
                          {
                            *v49 = 0;
                            v51 = 1;
                          }
                          else
                          {
                            *v49 = -1073741790;
LABEL_154:
                            v51 = 0;
                          }
                        }
                      }
                    }
                    else if ( v127 && !*(_WORD *)((char *)&v148 + 1) )
                    {
                      *v49 = -1073741790;
                      *v52 = 0;
                      goto LABEL_154;
                    }
                    v53 = 0;
                    if ( (v13 & 0x2000000) != 0 )
                    {
                      v48 = 0xFFFFFFFFLL;
                      if ( v17 != -1 )
                      {
                        v121 = v17 & *v52;
                        if ( v121 != *v52 )
                        {
                          *v52 = v121;
                          v53 = 1;
                          if ( v121 )
                          {
                            *v49 = 0;
                            v51 = 1;
                          }
                          else
                          {
                            *v49 = -1073741790;
                            v51 = 0;
                          }
                        }
                      }
                      v54 = 0;
                      if ( v149 != -1 )
                      {
                        v122 = *v52;
                        v52 = (int *)(v149 & (unsigned int)*v52);
                        if ( (_DWORD)v52 != v122 )
                        {
                          v48 = (__int64)a10;
                          v54 = 1;
                          *a10 = (int)v52;
                          if ( (_DWORD)v52 )
                          {
                            v52 = 0LL;
                            v51 = 1;
                            *v49 = 0;
                          }
                          else
                          {
                            *v49 = -1073741790;
                            v51 = 0;
                          }
                        }
                      }
                    }
                    else
                    {
                      v54 = 0;
                    }
                    if ( v24 )
                    {
                      if ( v53 || v54 )
                      {
                        v55 = DWORD2(v147);
LABEL_137:
                        if ( !v140 )
                        {
                          v157 = *v49 >= 0;
                          v73 = v129 | v13;
                          v74 = SepLocateTokenTrustLevel((__int64 *)a3);
                          SeLogAccessFailure(v24, v75, v76, v74, a1, v73, v157, 0);
                          v49 = a11;
                        }
                      }
                      else
                      {
                        v55 = DWORD2(v147);
                        if ( !DWORD2(v147) && (*(_DWORD *)(v24 + 200) & 0x4000) != 0 && (*v49 < 0 || BYTE3(v148)) )
                          goto LABEL_137;
                      }
                      if ( *v49 < 0 && !v55 && (*(_DWORD *)(v24 + 200) & 0x4000) != 0 )
                      {
                        if ( BYTE4(v148) )
                        {
                          v123 = v13 & ~((unsigned int)v147 | DWORD1(v147) | 0x2000000);
                          if ( ((unsigned int)v123 & HIDWORD(v147)) == (_DWORD)v123 )
                            SepLogLpacAccessFailure(v123, v52, v49, v48);
                        }
                      }
                      v47 = v156;
                    }
                    if ( v153 )
                    {
                      v124 = *(_QWORD *)(v137 + 32);
                      if ( v124 )
                        SepRmDereferenceCapTable(v124, v52, v49);
                    }
                    if ( !a4 )
                      SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)a3);
                    if ( v50 )
                    {
                      AuthzBasepFreeSecurityAttributesList(v50);
                      ExFreePoolWithTag(v50, 0);
                    }
                    return v47 && v51;
                  }
                  goto LABEL_74;
                }
              }
            }
          }
LABEL_219:
          v29 = a12;
          goto LABEL_38;
        }
LABEL_19:
        ++v19;
        if ( !v21 )
          goto LABEL_20;
      }
LABEL_18:
      v21 = 0LL;
      goto LABEL_19;
    }
    if ( !a6 )
    {
LABEL_309:
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
