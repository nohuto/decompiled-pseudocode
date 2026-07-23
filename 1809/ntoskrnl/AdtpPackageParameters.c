/*
 * XREFs of AdtpPackageParameters @ 0x140188EDC
 * Callers:
 *     AdtpWriteToEtwEx @ 0x140325BC0 (AdtpWriteToEtwEx.c)
 *     AdtpWriteToEtw @ 0x14074E754 (AdtpWriteToEtw.c)
 * Callees:
 *     AdtpIsCorrectlyFormedUnicodeString @ 0x140189400 (AdtpIsCorrectlyFormedUnicodeString.c)
 *     AdtpBuildMultiSzStringListString @ 0x14018941C (AdtpBuildMultiSzStringListString.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140325DDC (AdtpBuildAccessReasonAuditString.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlValidSid @ 0x140632590 (RtlValidSid.c)
 *     AdtpEtwBuildDashString @ 0x1406D1E00 (AdtpEtwBuildDashString.c)
 *     AdtpEtwBuildString @ 0x14074EB50 (AdtpEtwBuildString.c)
 *     AdtpSubstituteDriveLetter @ 0x14074EC14 (AdtpSubstituteDriveLetter.c)
 *     AdtpBuildMessageString @ 0x14074ED44 (AdtpBuildMessageString.c)
 *     AdtpBuildLogonIdStrings @ 0x14074EDF8 (AdtpBuildLogonIdStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x1408F0254 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x1408F0714 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1408F07E0 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x1408F09E8 (AdtpBuildSidListString.c)
 *     AdtpBuildSockAddrString @ 0x1408F0C50 (AdtpBuildSockAddrString.c)
 *     AdtpBuildStringListString @ 0x1408F0D0C (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x1408F0E74 (AdtpBuildUlongString.c)
 *     AdtpBuildAccessesString @ 0x1408F116C (AdtpBuildAccessesString.c)
 *     AdtpBuildObjectTypeStrings @ 0x1408F1608 (AdtpBuildObjectTypeStrings.c)
 *     AdtpBuildUserAccountControlString @ 0x1408F188C (AdtpBuildUserAccountControlString.c)
 */

__int64 __fastcall AdtpPackageParameters(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 *a7,
        __int64 a8)
{
  __int64 v8; // rdi
  UNICODE_STRING *v9; // r9
  unsigned __int16 v10; // si
  unsigned __int16 v11; // r11
  unsigned int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // r15
  __int64 v15; // rdx
  unsigned int v16; // ecx
  __int64 v17; // r13
  __int64 v18; // r8
  void *v19; // r10
  __int64 v20; // r12
  int v21; // ebx
  UNICODE_STRING *v22; // rdx
  unsigned __int16 *v23; // rdi
  int v24; // eax
  unsigned __int8 *v25; // r8
  char v26; // r9
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r9
  int v32; // edx
  __int64 v33; // r8
  unsigned __int16 v34; // r11
  unsigned __int16 v35; // si
  __int64 v36; // r10
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // edx
  unsigned __int16 v41; // si
  __int64 v42; // rax
  __int64 v43; // rbx
  int v44; // edx
  int v45; // eax
  int v47; // ebx
  int v48; // ebx
  int v49; // ebx
  __int64 v50; // rcx
  int v51; // ecx
  int v52; // ecx
  __int64 v53; // rcx
  unsigned __int16 v54; // si
  int v55; // eax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rbx
  unsigned int v59; // edi
  BOOLEAN valid; // al
  __int64 v61; // rax
  bool v62; // zf
  unsigned int v63; // eax
  __int64 v64; // rdx
  unsigned int *v65; // r10
  unsigned int v66; // ecx
  unsigned int v67; // eax
  int v68; // ebx
  int v69; // ebx
  void *v70; // rcx
  __int64 v71; // rax
  unsigned int v72; // eax
  __int64 v73; // r10
  unsigned __int16 *v74; // rbx
  __int64 v75; // rdi
  __int16 v76; // r11
  int v77; // ecx
  int v78; // ecx
  int v79; // ecx
  int v80; // ecx
  int v81; // eax
  __int64 v82; // r8
  unsigned __int16 *v83; // rdi
  int v84; // eax
  __int64 v85; // rbx
  __int64 v86; // r10
  int v87; // ecx
  unsigned __int16 v88; // r11
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rdx
  __int64 v92; // rdx
  int v93; // eax
  __int64 v94; // r8
  __int64 v95; // r10
  __int64 v96; // rax
  __int64 v97; // rcx
  int v98; // edx
  __int64 v99; // rax
  __int64 v100; // rcx
  __int64 v101; // rdx
  int v102; // ecx
  __int64 v103; // rax
  __int64 v104; // r8
  unsigned int v105; // eax
  __int64 v106; // rdx
  unsigned __int16 *v107; // rdi
  int v108; // eax
  __int64 v109; // rbx
  unsigned int v110; // ecx
  PUNICODE_STRING Destination; // [rsp+20h] [rbp-60h]
  PUNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h]
  char v113; // [rsp+60h] [rbp-20h] BYREF
  __int16 v114; // [rsp+62h] [rbp-1Eh]
  int v115; // [rsp+64h] [rbp-1Ch] BYREF
  unsigned int v116; // [rsp+68h] [rbp-18h]
  unsigned int v117; // [rsp+6Ch] [rbp-14h]
  __int64 v118; // [rsp+70h] [rbp-10h]
  unsigned __int8 *v119; // [rsp+78h] [rbp-8h] BYREF
  char v120; // [rsp+C0h] [rbp+40h] BYREF
  int v121; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v122; // [rsp+D8h] [rbp+58h]

  v122 = a4;
  v121 = a3;
  v8 = a4;
  v9 = 0LL;
  v114 = 0;
  v10 = 0;
  v115 = 0;
  v11 = 0;
  v12 = 0;
  if ( a1 )
  {
    if ( !a2 )
    {
      v13 = *(_DWORD *)(a1 + 8);
      v14 = a1 + 24;
      goto LABEL_4;
    }
LABEL_69:
    v12 = -1073741811;
    goto LABEL_39;
  }
  if ( !a2 )
    goto LABEL_69;
  v13 = *(_DWORD *)(a2 + 12);
  v14 = a2 + 32;
LABEL_4:
  v15 = 2LL;
  v118 = v14;
  v117 = v13;
  v16 = 2;
  v116 = 2;
  if ( v13 > 2 )
  {
    v17 = a6;
    v18 = 1LL;
    v19 = &AdtpNullSid;
    do
    {
      if ( v10 >= 0x2Au || v11 >= 0xEu )
        goto LABEL_69;
      v20 = 32LL * v16;
      v21 = *(_DWORD *)(v20 + v14);
      if ( v21 > 16 )
      {
        if ( v21 <= 27 )
        {
          switch ( v21 )
          {
            case 27:
              goto LABEL_118;
            case 17:
              v45 = AdtpBuildSidListString(
                      *(_QWORD *)(v20 + v14 + 24),
                      v15,
                      (unsigned int)v17 + 16 * v10,
                      v8,
                      (__int64)&v115,
                      v10 + a8);
              goto LABEL_35;
            case 18:
              v99 = 2LL * v10;
              *(_QWORD *)(v17 + 8 * v99) = &v120;
              *(_QWORD *)(v17 + 8 * v99 + 8) = 8LL;
              goto LABEL_52;
            case 19:
              v93 = AdtpBuildUserAccountControlString(
                      *(_DWORD *)(v20 + v14 + 8),
                      (PUNICODE_STRING)(a5 + 16LL * ((unsigned int)v11 + 1)),
                      a8 + (unsigned int)v10 + 1,
                      (PUNICODE_STRING)(a5 + 16LL * ((unsigned int)v11 + 2)),
                      a8 + (unsigned int)v10 + 2);
              v9 = 0LL;
              v12 = v93;
              if ( v93 < 0 )
                goto LABEL_39;
              v11 = v114;
              v94 = 3LL;
              v95 = a5;
              do
              {
                v96 = v11++;
                v96 *= 2LL;
                v97 = 2LL * v10++;
                v98 = *(unsigned __int16 *)(v95 + 8 * v96);
                *(_QWORD *)(v17 + 8 * v97) = *(_QWORD *)(v95 + 8 * v96 + 8);
                *(_QWORD *)(v17 + 8 * v97 + 8) = (unsigned int)(v98 + 2);
                --v94;
              }
              while ( v94 );
              v14 = v118;
              v15 = 2LL;
              v18 = 1LL;
              goto LABEL_30;
            case 20:
              v91 = 3LL;
              do
              {
                AdtpEtwBuildDashString(v17 + 16LL * v10, v91, v18);
                v10 += v18;
                v91 = v92 - v18;
              }
              while ( v91 );
              goto LABEL_64;
            case 21:
              v45 = AdtpBuildMessageString(
                      *(_DWORD *)(v20 + v14 + 8),
                      v15,
                      (unsigned int)v17 + 16 * v10,
                      v8,
                      (__int64)&v115,
                      v10 + a8);
              goto LABEL_35;
          }
          v78 = v21 - 21 - v15;
          if ( !v78 )
          {
            v82 = v10 + a8;
            v83 = (unsigned __int16 *)(a5 + 16LL * v11);
            LODWORD(Destination) = v82 + 1;
            v84 = AdtpBuildSockAddrString(*(_QWORD *)(v20 + v14 + 24), v83, v82, v83 + 8);
            v9 = 0LL;
            v12 = v84;
            if ( v84 < 0 )
              break;
            v18 = 1LL;
            v85 = 2LL * v10;
            v86 = a5;
            v87 = *v83 + 2;
            v41 = v10 + 1;
            v88 = v114 + 1;
            *(_QWORD *)(v17 + 8 * v85) = *((_QWORD *)v83 + 1);
            *(_DWORD *)(v17 + 8 * v85 + 8) = v87;
            *(_DWORD *)(v17 + 8 * v85 + 12) = 0;
            v89 = 2LL * v41;
            v90 = *(_QWORD *)(v86 + 16LL * v88 + 8);
            *(_DWORD *)(v17 + 8 * v89 + 8) = *(unsigned __int16 *)(v86 + 16LL * v88) + 2;
            v11 = v88 + 1;
            *(_QWORD *)(v17 + 8 * v89) = v90;
            *(_DWORD *)(v17 + 8 * v89 + 12) = 0;
            goto LABEL_29;
          }
          v79 = v78 - 1;
          if ( !v79 )
          {
            v80 = *(_DWORD *)(v20 + v14 + 8);
            ++v116;
            v8 = v122;
            v81 = AdtpBuildSecurityDescriptorChangeString(
                    v80,
                    *(_QWORD *)(v20 + v14 + 24),
                    *(_QWORD *)(32LL * v116 + v14 + 24),
                    (unsigned int)v17 + 16 * (v10 + 1),
                    v17 + 16LL * v10,
                    v10 + a8,
                    (_DWORD)DestinationString,
                    v17 + 16 * (v10 + 1LL),
                    v10 + 1LL + a8,
                    v122,
                    (__int64)&v115);
            v9 = 0LL;
            v12 = v81;
            if ( v81 < 0 )
              break;
            v11 = v114;
            v15 = 2LL;
            v10 += 2;
            v18 = 1LL;
            goto LABEL_37;
          }
          v62 = v79 == (_DWORD)v15;
          goto LABEL_71;
        }
        switch ( v21 )
        {
          case 28:
            LODWORD(Destination) = (_DWORD)v9;
            v107 = (unsigned __int16 *)(a5 + 16LL * v11);
            v108 = AdtpBuildSockAddrString(*(_QWORD *)(v20 + v14 + 24), v107, v10 + a8, 0LL);
            v9 = 0LL;
            v12 = v108;
            if ( v108 < 0 )
              goto LABEL_39;
            v18 = 1LL;
            v15 = 2LL;
            v109 = 2LL * v10;
            v110 = *v107 + 2;
            ++v10;
            v11 = v114 + 1;
            *(_QWORD *)(v17 + 8 * v109) = *((_QWORD *)v107 + 1);
            *(_QWORD *)(v17 + 8 * v109 + 8) = v110;
            goto LABEL_30;
          case 29:
            goto LABEL_130;
          case 30:
            if ( *(UNICODE_STRING **)(v20 + v14 + 8) != v9 || *(UNICODE_STRING **)(v20 + v14 + 16) != v9 )
              goto LABEL_69;
LABEL_130:
            v104 = *(_QWORD *)(v20 + v14 + 24);
            v105 = *(_DWORD *)(v104 + 132);
            if ( v105 >= v116 )
              goto LABEL_69;
            v106 = 32LL * v105;
            if ( *(_DWORD *)(v106 + v14) != 1 )
              goto LABEL_69;
            LOBYTE(v9) = v21 == 30;
            v45 = AdtpBuildAccessReasonAuditString(
                    *(_QWORD *)(v14 + 56),
                    *(_QWORD *)(v106 + v14 + 24),
                    v104,
                    (_DWORD)v9,
                    (_DWORD)Destination,
                    v17 + 16LL * v10,
                    v8,
                    (__int64)&v115,
                    v10 + a8);
            goto LABEL_35;
          case 31:
            if ( *(_DWORD *)(v20 + v14 + 8) != 32 || *(UNICODE_STRING **)(v20 + v14 + 16) != v9 )
              goto LABEL_69;
            v45 = AdtpBuildSecurityDescriptorUnicodeString(
                    32,
                    *(_QWORD *)(v20 + v14 + 24),
                    0,
                    (unsigned int)v17 + 16 * v10,
                    v8,
                    (__int64)&v115,
                    v10 + a8);
            goto LABEL_35;
        }
        v51 = v21 - 31 - v15;
        if ( v51 )
        {
          v52 = v51 - 1;
          if ( !v52 )
          {
            v45 = AdtpBuildMultiSzStringListString(*(_QWORD *)(v20 + v14 + 24), v17 + 16LL * v10, v10 + a8);
            goto LABEL_35;
          }
          v62 = v52 == 1;
LABEL_71:
          if ( !v62 )
            goto LABEL_69;
        }
      }
      else
      {
        if ( v21 == 16 )
        {
          v45 = AdtpBuildStringListString(
                  *(_QWORD *)(v20 + v14 + 24),
                  v15,
                  (unsigned int)v17 + 16 * v10,
                  v8,
                  (__int64)&v115,
                  v10 + a8);
          goto LABEL_35;
        }
        if ( v21 > 8 )
        {
          v47 = v21 - 9;
          if ( v47 )
          {
            v48 = v47 - 1;
            if ( v48 )
            {
              v49 = v48 - 1;
              if ( !v49 )
                goto LABEL_51;
              v68 = v49 - 1;
              if ( !v68 )
                goto LABEL_51;
              v69 = v68 - 1;
              if ( v69 )
              {
                if ( (unsigned int)(v69 - 1) > 1 )
                  goto LABEL_69;
LABEL_51:
                v50 = 2LL * v10;
                *(_QWORD *)(v17 + 8 * v50) = v20 + v14 + 8;
                *(_QWORD *)(v17 + 8 * v50 + 8) = 8LL;
              }
              else
              {
                v70 = &AdtpNullGuid;
                if ( *(_QWORD *)(v20 + v14 + 24) )
                  v70 = *(void **)(v20 + v14 + 24);
                v71 = 2LL * v10;
                *(_QWORD *)(v17 + 8 * v71) = v70;
                *(_QWORD *)(v17 + 8 * v71 + 8) = 16LL;
              }
            }
            else
            {
LABEL_118:
              v100 = 2LL * v10;
              *(_QWORD *)(v17 + 8 * v100) = v20 + v14 + 8;
              *(_QWORD *)(v17 + 8 * v100 + 8) = 4LL;
            }
LABEL_52:
            v10 += v18;
            goto LABEL_38;
          }
          v72 = *(_DWORD *)(v20 + v14 + 16);
          if ( v72 >= v16 )
            goto LABEL_69;
          v73 = 32LL * v72;
          if ( *(_DWORD *)(v73 + v14) != (_DWORD)v18 )
            goto LABEL_69;
          v74 = (unsigned __int16 *)(a5 + 16LL * v11);
          LODWORD(Destination) = a5 + 16 * v11;
          AdtpBuildObjectTypeStrings(
            *(_QWORD *)(v14 + 56),
            *(_QWORD *)(v73 + v14 + 24),
            *(_QWORD *)(v20 + v14 + 24),
            *(_DWORD *)(v20 + v14 + 4) / 0x18u);
          v75 = 2LL * v10;
          v15 = 2LL;
          v76 = v114;
          v77 = *v74 + 2;
          v9 = 0LL;
          *(_QWORD *)(v17 + 8 * v75) = *((_QWORD *)v74 + 1);
          v18 = 1LL;
          *(_DWORD *)(v17 + 8 * v75 + 8) = v77;
          v11 = v76 + 1;
          *(_DWORD *)(v17 + 8 * v75 + 12) = 0;
          ++v10;
          goto LABEL_30;
        }
        switch ( v21 )
        {
          case 8:
            v65 = *(unsigned int **)(v20 + v14 + 24);
            if ( !v65 )
              goto LABEL_69;
            v66 = *v65;
            v67 = *v65 ? 12 * v66 + 8 : 8;
            if ( *(_DWORD *)(v20 + v14 + 4) < v67 || v66 > 0x42 )
              goto LABEL_69;
            Destination = (PUNICODE_STRING)&v115;
            v45 = AdtpBuildPrivilegeAuditString(*(_QWORD *)(v20 + v14 + 24), 0LL, v17 + 16LL * v10, v8);
            goto LABEL_35;
          case 0:
            AdtpEtwBuildDashString(v17 + 16LL * v10, v15, v18);
            goto LABEL_52;
          case 1:
            if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(*(_QWORD *)(v20 + v14 + 24)) )
              goto LABEL_69;
LABEL_34:
            v45 = AdtpEtwBuildString((unsigned int)v17 + 16 * v10, v44, v8, (unsigned int)&v115, v10 + a8);
LABEL_35:
            v9 = 0LL;
            v12 = v45;
            if ( v45 < 0 )
              goto LABEL_39;
            v11 = v114;
            v18 = 1LL;
            ++v10;
            v15 = 2LL;
            goto LABEL_37;
          case 2:
            v43 = *(_QWORD *)(v20 + v14 + 24);
            if ( !(unsigned __int8)AdtpIsCorrectlyFormedUnicodeString(v43) )
              goto LABEL_69;
            AdtpSubstituteDriveLetter();
            v44 = v43;
            goto LABEL_34;
          case 3:
            v45 = AdtpBuildUlongString(*(_DWORD *)(v20 + v14 + 8), (__int64)&v115, v10 + a8);
            goto LABEL_35;
          case 4:
            v58 = *(_QWORD *)(v20 + v14 + 24);
            v59 = 4 * *(unsigned __int8 *)(v58 + 1) + 8;
            if ( *(_DWORD *)(v20 + v14 + 4) < v59 || (valid = RtlValidSid(*(PSID *)(v20 + v14 + 24)), v9 = 0LL, !valid) )
            {
              v12 = -1073741704;
              goto LABEL_39;
            }
            v11 = v114;
            v18 = 1LL;
            v15 = 2LL;
            v61 = 2LL * v10++;
            *(_QWORD *)(v17 + 8 * v61) = v58;
            *(_DWORD *)(v17 + 8 * v61 + 8) = v59;
            *(_DWORD *)(v17 + 8 * v61 + 12) = 0;
            goto LABEL_31;
        }
        if ( v21 != 5 )
        {
          if ( v21 == 6 )
          {
            v53 = 2LL * v10;
            v54 = v18 + v10;
            v55 = 4 * (unsigned __int8)byte_14096F931 + 8;
            *(_QWORD *)(v17 + 8 * v53) = v19;
            *(_DWORD *)(v17 + 8 * v53 + 8) = v55;
            *(_DWORD *)(v17 + 8 * v53 + 12) = (_DWORD)v9;
            do
            {
              AdtpEtwBuildDashString(v17 + 16LL * v54, v15, v18);
              v54 += v18;
              v15 = v56 - v18;
            }
            while ( v15 );
            v57 = 2LL * v54;
            v10 = v18 + v54;
            *(_QWORD *)(v17 + 8 * v57) = &AdtpNullLuid;
            *(_QWORD *)(v17 + 8 * v57 + 8) = 8LL;
LABEL_64:
            v15 = 2LL;
            goto LABEL_38;
          }
          if ( v21 != 7 )
            goto LABEL_69;
          v63 = *(_DWORD *)(v20 + v14 + 16);
          if ( v63 >= v116 )
            goto LABEL_69;
          v64 = 32LL * v63;
          if ( *(_DWORD *)(v64 + v14) != (_DWORD)v18 )
            goto LABEL_69;
          v45 = AdtpBuildAccessesString(
                  *(_QWORD *)(v14 + 56),
                  *(_QWORD *)(v64 + v14 + 24),
                  *(_DWORD *)(v20 + v14 + 8),
                  0,
                  v9,
                  v17 + 16LL * v10,
                  v8,
                  (__int64)&v115,
                  v10 + a8);
          goto LABEL_35;
        }
      }
      DestinationString = (PUNICODE_STRING)&v113;
      v22 = (UNICODE_STRING *)&v119;
      v23 = (unsigned __int16 *)(a5 + 16LL * v11);
      LOBYTE(v121) = (_BYTE)v9;
      v120 = (char)v9;
      v113 = (char)v9;
      v119 = (unsigned __int8 *)v9;
      if ( v21 != 35 )
        v22 = v9;
      Destination = (PUNICODE_STRING)&v120;
      v24 = AdtpBuildLogonIdStrings(v20 + v14 + 8, v22, &v121, a5 + 16LL * v11);
      v12 = v24;
      if ( v21 == 35 )
      {
        v26 = v121;
        v25 = v119;
      }
      else
      {
        v25 = *(unsigned __int8 **)(v14 + 24);
        v26 = 0;
      }
      if ( v24 < 0 )
        break;
      v27 = *(_DWORD *)(v20 + v14);
      if ( v27 == 5 || v27 == 35 )
      {
        if ( !v25 )
        {
          v25 = (unsigned __int8 *)&AdtpNullSid;
          v26 = 0;
        }
        v28 = 4 * v25[1] + 8;
        v29 = v17 + 16LL * v10;
        *(_DWORD *)(v29 + 12) = 0;
        *(_QWORD *)v29 = v25;
        *(_DWORD *)(v29 + 8) = v28;
        *(_BYTE *)(v10 + a8) = v26;
      }
      else
      {
        if ( v21 != 33 )
        {
          if ( v26 && v25 )
            ExFreePoolWithTag(v25, 0);
          goto LABEL_28;
        }
        v101 = *(_QWORD *)(v20 + v14 + 24);
        v102 = 4 * *(unsigned __int8 *)(v101 + 1) + 8;
        v103 = v17 + 16LL * v10;
        *(_DWORD *)(v103 + 12) = 0;
        *(_QWORD *)v103 = v101;
        *(_DWORD *)(v103 + 8) = v102;
        *(_BYTE *)(v10 + a8) = v26;
      }
      ++v10;
LABEL_28:
      v30 = *((_QWORD *)v23 + 1);
      v31 = a8;
      v32 = *v23 + 2;
      v33 = v10;
      v34 = v114 + 1;
      v35 = v10 + 1;
      v36 = a5;
      v37 = v17 + 16LL * (unsigned int)v33;
      *(_DWORD *)(v37 + 12) = 0;
      *(_QWORD *)v37 = v30;
      LOBYTE(v30) = v120;
      *(_DWORD *)(v37 + 8) = v32;
      *(_BYTE *)(v33 + v31) = v30;
      v38 = v17 + 16LL * v35;
      v39 = *(_QWORD *)(v36 + 16LL * v34 + 8);
      v40 = *(unsigned __int16 *)(v36 + 16LL * v34) + 2;
      *(_DWORD *)(v38 + 12) = 0;
      *(_QWORD *)v38 = v39;
      LOBYTE(v39) = v113;
      *(_DWORD *)(v38 + 8) = v40;
      *(_BYTE *)(v35 + v31) = v39;
      v18 = 1LL;
      v41 = v35 + 1;
      v11 = v34 + 1;
      v42 = 2LL * v41;
      v9 = 0LL;
      *(_QWORD *)(v17 + 8 * v42) = v20 + v14 + 8;
      *(_QWORD *)(v17 + 8 * v42 + 8) = 8LL;
LABEL_29:
      v10 = v41 + 1;
      v15 = 2LL;
LABEL_30:
      v114 = v11;
LABEL_31:
      v8 = v122;
LABEL_37:
      v19 = &AdtpNullSid;
LABEL_38:
      v16 = v18 + v116;
      v116 = v16;
    }
    while ( v16 < v117 );
  }
LABEL_39:
  *a7 = v10;
  return v12;
}
