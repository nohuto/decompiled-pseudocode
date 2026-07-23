/*
 * XREFs of KiLockExtendedServiceTable @ 0x1401AA888
 * Callers:
 *     KiLockServiceTable @ 0x14017B090 (KiLockServiceTable.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x1400065C0 (PsGetCurrentProcess.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     MmIsSessionAddress @ 0x1400C6CC0 (MmIsSessionAddress.c)
 *     RtlLookupFunctionTable @ 0x14013B260 (RtlLookupFunctionTable.c)
 *     RtlpConvertFunctionEntry @ 0x14018F1E0 (RtlpConvertFunctionEntry.c)
 *     RtlCaptureImageExceptionValues @ 0x14019C89C (RtlCaptureImageExceptionValues.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall KiLockExtendedServiceTable(ULONG_PTR BugCheckParameter1, ULONG_PTR a2, unsigned int a3, int a4)
{
  ULONG_PTR v4; // rbx
  char v5; // r12
  ULONG_PTR v6; // r13
  _KPROCESS *CurrentProcess; // rax
  signed __int32 SessionId; // r8d
  unsigned __int128 v9; // rax
  unsigned int v10; // r9d
  unsigned __int64 v11; // r11
  ULONG_PTR v12; // rcx
  _QWORD *v13; // r10
  const char *v14; // rax
  unsigned int v15; // r15d
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 *v19; // r10
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  char v22; // al
  int v23; // eax
  unsigned int v24; // r9d
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r11
  _QWORD *v28; // r9
  char v29; // r10
  __int64 v30; // r8
  unsigned int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 *v34; // r9
  __int64 v35; // r8
  unsigned __int64 v36; // rcx
  char v37; // al
  unsigned int v38; // ebx
  unsigned __int64 v39; // rdx
  ULONG_PTR v40; // rbx
  PVOID *v41; // rdx
  ULONG_PTR v42; // r8
  __int64 v43; // rax
  void *v44; // rcx
  char v45; // r13
  PIMAGE_NT_HEADERS v46; // rax
  char *v47; // r9
  int v48; // r11d
  int v49; // ecx
  __int16 v50; // ax
  int v51; // r10d
  char *v52; // rdx
  char v53; // cl
  char v54; // al
  char *v55; // r8
  unsigned int v56; // edx
  char *v57; // r10
  __int64 v58; // rcx
  __int64 v59; // rax
  char v60; // cl
  char v61; // al
  char *v62; // rdx
  int v63; // r10d
  char v64; // cl
  char v65; // al
  char *v66; // rdx
  int v67; // r10d
  char v68; // cl
  char v69; // al
  unsigned int v70; // r10d
  char v71; // r14
  _QWORD *v72; // r12
  _QWORD *v73; // r11
  unsigned __int64 v74; // rcx
  const char *v75; // rax
  ULONG_PTR v76; // r8
  unsigned int v77; // r15d
  __int64 v78; // rax
  ULONG_PTR v79; // r8
  _QWORD *v80; // r11
  __int64 v81; // r8
  ULONG_PTR v82; // rcx
  char v83; // al
  int v84; // eax
  unsigned int v85; // r10d
  unsigned __int64 v86; // rax
  ULONG_PTR v87; // rax
  int v88; // edx
  __int64 v89; // r13
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // r15
  __int64 v93; // r14
  __int64 v94; // rax
  unsigned __int64 v95; // r12
  __int64 *v96; // rax
  __int64 v97; // rcx
  unsigned __int64 v98; // r14
  unsigned __int64 v99; // r13
  __int64 v100; // rbx
  unsigned __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // rax
  char v104; // r11
  __int64 v105; // rcx
  unsigned int v106; // r9d
  _QWORD *v107; // r12
  unsigned __int64 v108; // rcx
  _QWORD *v109; // r10
  const char *v110; // rax
  __int64 *v111; // r8
  unsigned int v112; // r15d
  __int64 v113; // rax
  unsigned __int64 v114; // r8
  _QWORD *v115; // r10
  __int64 v116; // r8
  unsigned __int64 v117; // rcx
  char v118; // al
  int v119; // eax
  unsigned int v120; // r9d
  unsigned __int64 v121; // rax
  __int64 v122; // rax
  unsigned __int64 v123; // rax
  signed __int32 v125[6]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v126; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v127; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v128; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v129; // [rsp+50h] [rbp-B8h]
  __int64 v130; // [rsp+58h] [rbp-B0h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A8h]
  __int64 v132; // [rsp+68h] [rbp-A0h] BYREF
  char *v133; // [rsp+70h] [rbp-98h]
  unsigned int *v134; // [rsp+78h] [rbp-90h] BYREF
  __int128 v135; // [rsp+80h] [rbp-88h]
  __int128 v136; // [rsp+90h] [rbp-78h]
  __int64 v137; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v138; // [rsp+C0h] [rbp-48h]
  __int64 v139; // [rsp+C8h] [rbp-40h]
  __int64 *v140; // [rsp+D0h] [rbp-38h]
  __int64 v141; // [rsp+F8h] [rbp-10h]
  __int64 v142; // [rsp+100h] [rbp-8h]
  __int64 v143; // [rsp+108h] [rbp+0h]
  char v146; // [rsp+170h] [rbp+68h]
  int v147; // [rsp+170h] [rbp+68h]

  v146 = a4;
  v4 = a3;
  v5 = a4;
  v6 = BugCheckParameter1;
  if ( a4 )
  {
    CurrentProcess = PsGetCurrentProcess();
    SessionId = MmGetSessionIdEx((__int64)CurrentProcess);
    if ( dword_1404281C8 == SessionId
      || (*(_QWORD *)&v9 = (unsigned int)_InterlockedCompareExchange(&dword_1404281C8, SessionId, -1), (_DWORD)v9 == -1) )
    {
      v10 = 4 * v4;
      v11 = ((unsigned __int64)&qword_14042BBC0 ^ qword_14042BBC8) & 0x3F;
      v12 = v6 + (unsigned int)(4 * v4);
      v13 = (_QWORD *)v6;
      v14 = (const char *)v6;
      if ( v6 < v12 )
      {
        do
        {
          _mm_prefetch(v14, 0);
          v14 += 64;
        }
        while ( (unsigned __int64)v14 < v12 );
      }
      v15 = v10 >> 7;
      v16 = (unsigned __int64)&qword_14042BBC0 ^ qword_14042BBC8;
      if ( v10 >> 7 )
      {
        do
        {
          v17 = 8LL;
          do
          {
            v18 = v16 ^ *v13;
            v19 = v13 + 1;
            v20 = *v19;
            v13 = v19 + 1;
            v16 = __ROL8__(__ROL8__(v18, v11) ^ v20, v11);
            --v17;
          }
          while ( v17 );
          v21 = __ROL8__((unsigned __int64)&qword_14042BBC0 ^ qword_14042BBC8 ^ ((unsigned __int64)v13 - v6), 17) ^ (unsigned __int64)&qword_14042BBC0 ^ qword_14042BBC8 ^ ((unsigned __int64)v13 - v6);
          v141 = (v21 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v22 = v11 ^ v141 ^ v21;
          LOBYTE(v11) = 1;
          v23 = v22 & 0x3F;
          if ( v23 )
            LOBYTE(v11) = v23;
          --v15;
        }
        while ( v15 );
        v5 = v146;
      }
      v24 = v10 & 0x7F;
      if ( v24 >= 8 )
      {
        v25 = (unsigned __int64)v24 >> 3;
        do
        {
          v16 = __ROL8__(*v13++ ^ v16, v11);
          v24 -= 8;
          --v25;
        }
        while ( v25 );
      }
      for ( ; v24; --v24 )
      {
        v26 = *(unsigned __int8 *)v13;
        v13 = (_QWORD *)((char *)v13 + 1);
        v16 = __ROL8__(v26 ^ v16, v11);
      }
      v27 = v16 ^ qword_14042BBC0;
      BugCheckParameter3 = v4;
      v28 = (_QWORD *)a2;
      v29 = (v16 ^ qword_14042BBC0) & 0x3F;
      *(_QWORD *)&v9 = a2;
      if ( a2 < a2 + v4 )
      {
        do
        {
          _mm_prefetch((const char *)v9, 0);
          *(_QWORD *)&v9 = v9 + 64;
        }
        while ( (unsigned __int64)v9 < a2 + v4 );
      }
      v30 = v16 ^ qword_14042BBC0;
      v31 = (unsigned int)v4 >> 7;
      if ( (unsigned int)v4 >> 7 )
      {
        do
        {
          v32 = 8LL;
          do
          {
            v33 = v30 ^ *v28;
            v34 = v28 + 1;
            v35 = *v34;
            v28 = v34 + 1;
            v30 = __ROL8__(__ROL8__(v33, v29) ^ v35, v29);
            --v32;
          }
          while ( v32 );
          v36 = __ROL8__(v27 ^ ((unsigned __int64)v28 - a2), 17) ^ v27 ^ ((unsigned __int64)v28 - a2);
          v142 = (v36 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v37 = v29 ^ v142 ^ v36;
          v29 = 1;
          *(_QWORD *)&v9 = v37 & 0x3F;
          if ( (_DWORD)v9 )
            v29 = v9;
          --v31;
        }
        while ( v31 );
        v5 = v146;
        v6 = BugCheckParameter1;
      }
      v38 = v4 & 0x7F;
      if ( v38 >= 8 )
      {
        v39 = (unsigned __int64)v38 >> 3;
        do
        {
          v30 = __ROL8__(*v28++ ^ v30, v29);
          v38 -= 8;
          --v39;
        }
        while ( v39 );
      }
      for ( ; v38; --v38 )
      {
        *(_QWORD *)&v9 = *(unsigned __int8 *)v28;
        v28 = (_QWORD *)((char *)v28 + 1);
        v30 = __ROL8__(v9 ^ v30, v29);
      }
      v40 = v6 ^ v30 ^ BugCheckParameter3;
      if ( (v5 & 2) != 0 )
      {
        qword_14042BBC8 = v6 ^ v30 ^ BugCheckParameter3;
      }
      else
      {
        v41 = (PVOID *)PsLoadedModuleList;
        if ( PsLoadedModuleList == &PsLoadedModuleList )
          goto LABEL_138;
        while ( 1 )
        {
          v42 = (ULONG_PTR)v41[6];
          if ( v6 >= v42 && v6 < v42 + *((unsigned int *)v41 + 16) )
            break;
          v41 = (PVOID *)*v41;
          if ( v41 == &PsLoadedModuleList )
            goto LABEL_138;
        }
        if ( !v42 )
LABEL_138:
          KeBugCheckEx(0x43u, v6, a2, BugCheckParameter3, 0LL);
        v147 = 0;
        v43 = 0LL;
        qword_14042BCC0[0] = (__int64)v41[6];
        v130 = 0LL;
        do
        {
          v44 = (void *)qword_14042BCC0[v43];
          v127 = (__int64)v44;
          if ( !v44 )
            break;
          v45 = v40 & 0x3F;
          LODWORD(v128) = v40 & 0x3F;
          v46 = RtlImageNtHeader(v44);
          v129 = (unsigned __int64)v46;
          if ( !v46 )
            KeBugCheckEx(0x43u, BugCheckParameter1, a2, BugCheckParameter3, 1uLL);
          v47 = (char *)&v46->OptionalHeader + v46->FileHeader.SizeOfOptionalHeader;
          v133 = &v47[40 * v46->FileHeader.NumberOfSections];
          do
          {
            v48 = 0;
            if ( (*((_DWORD *)v47 + 9) & 0x2000000) != 0
              || (v49 = *(_DWORD *)v47, *(_DWORD *)v47 == 1414090313) && *((_DWORD *)v47 + 1) == 1195525195
              || v49 == 1162297680 && ((v50 = *((_WORD *)v47 + 2), v50 == 30839) || v50 == 29303 || v50 == 30583)
              || v49 == 1095914053 && *((_WORD *)v47 + 2) == 16724 )
            {
LABEL_72:
              v48 = 1;
            }
            else
            {
              v51 = 7;
              v52 = VfExcludeSections[0];
              v135 = *(_OWORD *)VfExcludeSections;
              v136 = *(_OWORD *)off_140428020;
              while ( 1 )
              {
                v53 = v52[v47 - VfExcludeSections[0]];
                v54 = *v52++;
                if ( v53 != v54 )
                  break;
                if ( !--v51 )
                  goto LABEL_72;
              }
              v55 = (char *)*((_QWORD *)&v135 + 1);
              v56 = 8;
              v57 = v47;
              while ( 1 )
              {
                v58 = *(_QWORD *)v57;
                v57 += 8;
                v59 = *(_QWORD *)v55;
                v55 += 8;
                if ( v58 != v59 )
                  break;
                v56 -= 8;
                if ( v56 < 8 )
                {
                  if ( !v56 )
                    goto LABEL_72;
                  while ( 1 )
                  {
                    v60 = *v57++;
                    v61 = *v55++;
                    if ( v60 != v61 )
                      goto LABEL_65;
                    if ( !--v56 )
                      goto LABEL_72;
                  }
                }
              }
LABEL_65:
              v62 = (char *)v136;
              v63 = 4;
              while ( 1 )
              {
                v64 = v47[(_QWORD)v62 - v136];
                v65 = *v62++;
                if ( v64 != v65 )
                  break;
                if ( !--v63 )
                  goto LABEL_72;
              }
              v66 = (char *)*((_QWORD *)&v136 + 1);
              v67 = 6;
              while ( 1 )
              {
                v68 = v47[(_QWORD)v66 - *((_QWORD *)&v136 + 1)];
                v69 = *v66++;
                if ( v68 != v69 )
                  break;
                if ( !--v67 )
                  goto LABEL_72;
              }
            }
            v70 = *((_DWORD *)v47 + 4);
            if ( *((int *)v47 + 9) < 0 )
              v48 = 1;
            if ( !v48 )
            {
              v71 = v45;
              if ( v70 <= *((_DWORD *)v47 + 2) )
                v70 = *((_DWORD *)v47 + 2);
              v72 = (_QWORD *)(v127 + *((unsigned int *)v47 + 3));
              v73 = v72;
              v74 = (unsigned __int64)v72 + v70;
              v75 = (const char *)v72;
              if ( (unsigned __int64)v72 < v74 )
              {
                do
                {
                  _mm_prefetch(v75, 0);
                  v75 += 64;
                }
                while ( (unsigned __int64)v75 < v74 );
              }
              v76 = v40;
              v77 = v70 >> 7;
              if ( v70 >> 7 )
              {
                do
                {
                  v78 = 8LL;
                  do
                  {
                    v79 = *v73 ^ v76;
                    v80 = v73 + 1;
                    v81 = *v80 ^ __ROL8__(v79, v71);
                    v73 = v80 + 1;
                    v76 = __ROL8__(v81, v71);
                    --v78;
                  }
                  while ( v78 );
                  v82 = __ROL8__(v40 ^ ((char *)v73 - (char *)v72), 17) ^ v40 ^ ((char *)v73 - (char *)v72);
                  v143 = (v82 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v83 = v71 ^ v143 ^ v82;
                  v71 = 1;
                  v84 = v83 & 0x3F;
                  if ( v84 )
                    v71 = v84;
                  --v77;
                }
                while ( v77 );
                v45 = v128;
              }
              v85 = v70 & 0x7F;
              if ( v85 >= 8 )
              {
                v86 = (unsigned __int64)v85 >> 3;
                do
                {
                  v76 = __ROL8__(*v73++ ^ v76, v71);
                  v85 -= 8;
                  --v86;
                }
                while ( v86 );
              }
              for ( ; v85; --v85 )
              {
                v87 = v76 ^ *(unsigned __int8 *)v73;
                v73 = (_QWORD *)((char *)v73 + 1);
                v76 = __ROL8__(v87, v71);
              }
              v40 = v76;
            }
            v47 += 40;
          }
          while ( v47 != v133 );
          v88 = v147;
          if ( !v147 )
          {
            v89 = v127;
            v90 = *(unsigned int *)(v129 + 148);
            if ( (unsigned int)v90 >= 0x14 )
            {
              v91 = *(unsigned int *)(v129 + 144);
              v92 = v91 + v90 + v127;
              v93 = v91 + v127;
              if ( v91 + v127 != v92 )
              {
                do
                {
                  if ( !*(_DWORD *)(v93 + 12) )
                    break;
                  v94 = *(unsigned int *)(v93 + 16);
                  if ( !(_DWORD)v94 )
                    break;
                  v95 = *(_QWORD *)(v94 + v89);
                  if ( v95 && MmIsSessionAddress(*(_QWORD *)(v94 + v89)) && RtlLookupFunctionTable(v95, &v127, &v132) )
                  {
                    v96 = qword_14042BCC0;
                    v97 = 0LL;
                    while ( *v96 != v127 )
                    {
                      if ( !*v96 )
                      {
                        qword_14042BCC0[v97] = v127;
                        break;
                      }
                      v97 = (unsigned int)(v97 + 1);
                      ++v96;
                      if ( (unsigned int)v97 >= 0x10 )
                        break;
                    }
                    if ( (_DWORD)v97 == 16 )
                      goto LABEL_112;
                  }
                  v93 += 20LL;
                }
                while ( v93 != v92 );
                v88 = 0;
              }
            }
          }
          v43 = v130 + 1;
          v147 = v88 + 1;
          ++v130;
        }
        while ( (unsigned int)(v88 + 1) < 0x10 );
LABEL_112:
        *(_QWORD *)&v9 = memset(qword_14042BCC0, 0, sizeof(qword_14042BCC0));
        if ( v40 == qword_14042BBC0 || !v40 )
        {
          *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
          v40 ^= 0x95EA5DE843D5D824uLL;
        }
        _InterlockedOr(v125, 0);
        qword_14042BBC0 = v40;
      }
    }
  }
  else
  {
    v98 = (unsigned __int64)&qword_14042BBD0;
    v99 = (unsigned __int64)&qword_14042BBD0 & 0x3F;
    v129 = (unsigned __int64)&qword_14042BBD0 & 0x3F;
    RtlImageNtHeader((PVOID)0x140000000LL);
    RtlCaptureImageExceptionValues(0x140000000uLL, (__int64)&v137, (__int64)&v126);
    v100 = v137;
    v101 = 0x140000000uLL;
    LODWORD(v126) = (unsigned int)v126 / 0xC;
    v138 = 0x140000000uLL;
    v102 = v137 + 12LL * (unsigned int)v126;
    v139 = v102;
    v140 = (__int64 *)&v134;
    while ( v100 && v100 != v102 )
    {
      v103 = RtlpConvertFunctionEntry(v100, v101);
      v104 = v99;
      *v140 = v103;
      v100 = v137 + 12;
      v137 += 12LL;
      v105 = *v134;
      v106 = v134[1] - v105;
      v107 = (_QWORD *)(0x140000000LL + v105);
      v108 = 0x140000000LL + v105 + v106;
      v109 = v107;
      v110 = (const char *)v107;
      if ( (unsigned __int64)v107 < v108 )
      {
        do
        {
          _mm_prefetch(v110, 0);
          v110 += 64;
        }
        while ( (unsigned __int64)v110 < v108 );
      }
      v111 = (__int64 *)v98;
      v112 = v106 >> 7;
      if ( v106 >> 7 )
      {
        do
        {
          v113 = 8LL;
          do
          {
            v114 = *v109 ^ (unsigned __int64)v111;
            v115 = v109 + 1;
            v116 = *v115 ^ __ROL8__(v114, v104);
            v109 = v115 + 1;
            v111 = (__int64 *)__ROL8__(v116, v104);
            --v113;
          }
          while ( v113 );
          v117 = __ROL8__(v98 ^ ((char *)v109 - (char *)v107), 17) ^ v98 ^ ((char *)v109 - (char *)v107);
          v118 = v104 ^ ((v117 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v117;
          v104 = 1;
          v119 = v118 & 0x3F;
          if ( v119 )
            v104 = v119;
          --v112;
        }
        while ( v112 );
        LOBYTE(v99) = v129;
      }
      v120 = v106 & 0x7F;
      if ( v120 >= 8 )
      {
        v121 = (unsigned __int64)v120 >> 3;
        do
        {
          v111 = (__int64 *)__ROL8__(*v109++ ^ (unsigned __int64)v111, v104);
          v120 -= 8;
          --v121;
        }
        while ( v121 );
      }
      for ( ; v120; --v120 )
      {
        v122 = *(unsigned __int8 *)v109;
        v109 = (_QWORD *)((char *)v109 + 1);
        v111 = (__int64 *)__ROL8__(v122 ^ (unsigned __int64)v111, v104);
      }
      v102 = v139;
      v101 = v138;
      v98 = (unsigned __int64)v111;
    }
    qword_14042BBD0 = v98;
    if ( qword_14042BBC0 )
      KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    v123 = __rdtsc();
    v9 = (__ROR8__(v123, 3) ^ v123) * (unsigned __int128)0x7010008004002001uLL;
    qword_14042BBC0 = v9 ^ *((_QWORD *)&v9 + 1);
    if ( (unsigned __int64)v9 == *((_QWORD *)&v9 + 1) )
    {
      *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
      qword_14042BBC0 = 0x95EA5DE843D5D824uLL;
    }
  }
  return v9;
}
