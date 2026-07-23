/*
 * XREFs of KiLockExtendedServiceTable @ 0x1401AA168
 * Callers:
 *     KiLockServiceTable @ 0x14017A9A0 (KiLockServiceTable.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x140006530 (PsGetCurrentProcess.c)
 *     MmGetSessionIdEx @ 0x14003F4F0 (MmGetSessionIdEx.c)
 *     RtlImageNtHeader @ 0x14005EDB0 (RtlImageNtHeader.c)
 *     MmIsSessionAddress @ 0x14009EE80 (MmIsSessionAddress.c)
 *     RtlLookupFunctionTable @ 0x14013AE10 (RtlLookupFunctionTable.c)
 *     RtlpConvertFunctionEntry @ 0x14018E8D0 (RtlpConvertFunctionEntry.c)
 *     RtlCaptureImageExceptionValues @ 0x14019C11C (RtlCaptureImageExceptionValues.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
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
  int v96; // eax
  __int64 *v97; // rax
  __int64 v98; // rcx
  unsigned __int64 v99; // r14
  unsigned __int64 v100; // r13
  __int64 v101; // rbx
  unsigned __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rax
  char v105; // r11
  __int64 v106; // rcx
  unsigned int v107; // r9d
  _QWORD *v108; // r12
  unsigned __int64 v109; // rcx
  _QWORD *v110; // r10
  const char *v111; // rax
  __int64 *v112; // r8
  unsigned int v113; // r15d
  __int64 v114; // rax
  unsigned __int64 v115; // r8
  _QWORD *v116; // r10
  __int64 v117; // r8
  unsigned __int64 v118; // rcx
  char v119; // al
  int v120; // eax
  unsigned int v121; // r9d
  unsigned __int64 v122; // rax
  __int64 v123; // rax
  unsigned __int64 v124; // rax
  signed __int32 v126[6]; // [rsp+8h] [rbp-100h] BYREF
  __int64 v127; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v128; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v129; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v130; // [rsp+50h] [rbp-B8h]
  __int64 v131; // [rsp+58h] [rbp-B0h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A8h]
  __int64 v133; // [rsp+68h] [rbp-A0h] BYREF
  char *v134; // [rsp+70h] [rbp-98h]
  unsigned int *v135; // [rsp+78h] [rbp-90h] BYREF
  __int128 v136; // [rsp+80h] [rbp-88h]
  __int128 v137; // [rsp+90h] [rbp-78h]
  __int64 v138; // [rsp+B0h] [rbp-58h] BYREF
  unsigned __int64 v139; // [rsp+C0h] [rbp-48h]
  __int64 v140; // [rsp+C8h] [rbp-40h]
  __int64 *v141; // [rsp+D0h] [rbp-38h]
  __int64 v142; // [rsp+F8h] [rbp-10h]
  __int64 v143; // [rsp+100h] [rbp-8h]
  __int64 v144; // [rsp+108h] [rbp+0h]
  char v147; // [rsp+170h] [rbp+68h]
  int v148; // [rsp+170h] [rbp+68h]

  v147 = a4;
  v4 = a3;
  v5 = a4;
  v6 = BugCheckParameter1;
  if ( a4 )
  {
    CurrentProcess = PsGetCurrentProcess();
    SessionId = MmGetSessionIdEx((__int64)CurrentProcess);
    if ( dword_1404281B8 == SessionId
      || (*(_QWORD *)&v9 = (unsigned int)_InterlockedCompareExchange(&dword_1404281B8, SessionId, -1), (_DWORD)v9 == -1) )
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
          v142 = (v21 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v22 = v11 ^ v142 ^ v21;
          LOBYTE(v11) = 1;
          v23 = v22 & 0x3F;
          if ( v23 )
            LOBYTE(v11) = v23;
          --v15;
        }
        while ( v15 );
        v5 = v147;
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
          v143 = (v36 * (unsigned __int128)0x7010008004002001uLL) >> 64;
          v37 = v29 ^ v143 ^ v36;
          v29 = 1;
          *(_QWORD *)&v9 = v37 & 0x3F;
          if ( (_DWORD)v9 )
            v29 = v9;
          --v31;
        }
        while ( v31 );
        v5 = v147;
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
        v148 = 0;
        v43 = 0LL;
        qword_14042BCC0[0] = (__int64)v41[6];
        v131 = 0LL;
        do
        {
          v44 = (void *)qword_14042BCC0[v43];
          v128 = (__int64)v44;
          if ( !v44 )
            break;
          v45 = v40 & 0x3F;
          LODWORD(v129) = v40 & 0x3F;
          v46 = RtlImageNtHeader(v44);
          v130 = (unsigned __int64)v46;
          if ( !v46 )
            KeBugCheckEx(0x43u, BugCheckParameter1, a2, BugCheckParameter3, 1uLL);
          v47 = (char *)&v46->OptionalHeader + v46->FileHeader.SizeOfOptionalHeader;
          v134 = &v47[40 * v46->FileHeader.NumberOfSections];
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
              v136 = *(_OWORD *)VfExcludeSections;
              v137 = *(_OWORD *)off_140428020;
              while ( 1 )
              {
                v53 = v52[v47 - VfExcludeSections[0]];
                v54 = *v52++;
                if ( v53 != v54 )
                  break;
                if ( !--v51 )
                  goto LABEL_72;
              }
              v55 = (char *)*((_QWORD *)&v136 + 1);
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
              v62 = (char *)v137;
              v63 = 4;
              while ( 1 )
              {
                v64 = v47[(_QWORD)v62 - v137];
                v65 = *v62++;
                if ( v64 != v65 )
                  break;
                if ( !--v63 )
                  goto LABEL_72;
              }
              v66 = (char *)*((_QWORD *)&v137 + 1);
              v67 = 6;
              while ( 1 )
              {
                v68 = v47[(_QWORD)v66 - *((_QWORD *)&v137 + 1)];
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
              v72 = (_QWORD *)(v128 + *((unsigned int *)v47 + 3));
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
                  v144 = (v82 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v83 = v71 ^ v144 ^ v82;
                  v71 = 1;
                  v84 = v83 & 0x3F;
                  if ( v84 )
                    v71 = v84;
                  --v77;
                }
                while ( v77 );
                v45 = v129;
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
          while ( v47 != v134 );
          v88 = v148;
          if ( !v148 )
          {
            v89 = v128;
            v90 = *(unsigned int *)(v130 + 148);
            if ( (unsigned int)v90 >= 0x14 )
            {
              v91 = *(unsigned int *)(v130 + 144);
              v92 = v91 + v90 + v128;
              v93 = v91 + v128;
              if ( v91 + v128 != v92 )
              {
                do
                {
                  if ( !*(_DWORD *)(v93 + 12) )
                    break;
                  v94 = *(unsigned int *)(v93 + 16);
                  if ( !(_DWORD)v94 )
                    break;
                  v95 = *(_QWORD *)(v94 + v89);
                  if ( v95 )
                  {
                    LOBYTE(v96) = MmIsSessionAddress(*(_QWORD *)(v94 + v89));
                    if ( v96 )
                    {
                      if ( RtlLookupFunctionTable(v95, &v128, &v133) )
                      {
                        v97 = qword_14042BCC0;
                        v98 = 0LL;
                        while ( *v97 != v128 )
                        {
                          if ( !*v97 )
                          {
                            qword_14042BCC0[v98] = v128;
                            break;
                          }
                          v98 = (unsigned int)(v98 + 1);
                          ++v97;
                          if ( (unsigned int)v98 >= 0x10 )
                            break;
                        }
                        if ( (_DWORD)v98 == 16 )
                          goto LABEL_112;
                      }
                    }
                  }
                  v93 += 20LL;
                }
                while ( v93 != v92 );
                v88 = 0;
              }
            }
          }
          v43 = v131 + 1;
          v148 = v88 + 1;
          ++v131;
        }
        while ( (unsigned int)(v88 + 1) < 0x10 );
LABEL_112:
        *(_QWORD *)&v9 = memset(qword_14042BCC0, 0, sizeof(qword_14042BCC0));
        if ( v40 == qword_14042BBC0 || !v40 )
        {
          *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
          v40 ^= 0x95EA5DE843D5D824uLL;
        }
        _InterlockedOr(v126, 0);
        qword_14042BBC0 = v40;
      }
    }
  }
  else
  {
    v99 = (unsigned __int64)&qword_14042BBD0;
    v100 = (unsigned __int64)&qword_14042BBD0 & 0x3F;
    v130 = (unsigned __int64)&qword_14042BBD0 & 0x3F;
    RtlImageNtHeader((PVOID)0x140000000LL);
    RtlCaptureImageExceptionValues(0x140000000uLL, (__int64)&v138, (__int64)&v127);
    v101 = v138;
    v102 = 0x140000000uLL;
    LODWORD(v127) = (unsigned int)v127 / 0xC;
    v139 = 0x140000000uLL;
    v103 = v138 + 12LL * (unsigned int)v127;
    v140 = v103;
    v141 = (__int64 *)&v135;
    while ( v101 && v101 != v103 )
    {
      v104 = RtlpConvertFunctionEntry(v101, v102);
      v105 = v100;
      *v141 = v104;
      v101 = v138 + 12;
      v138 += 12LL;
      v106 = *v135;
      v107 = v135[1] - v106;
      v108 = (_QWORD *)(0x140000000LL + v106);
      v109 = 0x140000000LL + v106 + v107;
      v110 = v108;
      v111 = (const char *)v108;
      if ( (unsigned __int64)v108 < v109 )
      {
        do
        {
          _mm_prefetch(v111, 0);
          v111 += 64;
        }
        while ( (unsigned __int64)v111 < v109 );
      }
      v112 = (__int64 *)v99;
      v113 = v107 >> 7;
      if ( v107 >> 7 )
      {
        do
        {
          v114 = 8LL;
          do
          {
            v115 = *v110 ^ (unsigned __int64)v112;
            v116 = v110 + 1;
            v117 = *v116 ^ __ROL8__(v115, v105);
            v110 = v116 + 1;
            v112 = (__int64 *)__ROL8__(v117, v105);
            --v114;
          }
          while ( v114 );
          v118 = __ROL8__(v99 ^ ((char *)v110 - (char *)v108), 17) ^ v99 ^ ((char *)v110 - (char *)v108);
          v119 = v105 ^ ((v118 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v118;
          v105 = 1;
          v120 = v119 & 0x3F;
          if ( v120 )
            v105 = v120;
          --v113;
        }
        while ( v113 );
        LOBYTE(v100) = v130;
      }
      v121 = v107 & 0x7F;
      if ( v121 >= 8 )
      {
        v122 = (unsigned __int64)v121 >> 3;
        do
        {
          v112 = (__int64 *)__ROL8__(*v110++ ^ (unsigned __int64)v112, v105);
          v121 -= 8;
          --v122;
        }
        while ( v122 );
      }
      for ( ; v121; --v121 )
      {
        v123 = *(unsigned __int8 *)v110;
        v110 = (_QWORD *)((char *)v110 + 1);
        v112 = (__int64 *)__ROL8__(v123 ^ (unsigned __int64)v112, v105);
      }
      v103 = v140;
      v102 = v139;
      v99 = (unsigned __int64)v112;
    }
    qword_14042BBD0 = v99;
    if ( qword_14042BBC0 )
      KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    v124 = __rdtsc();
    v9 = (__ROR8__(v124, 3) ^ v124) * (unsigned __int128)0x7010008004002001uLL;
    qword_14042BBC0 = v9 ^ *((_QWORD *)&v9 + 1);
    if ( (unsigned __int64)v9 == *((_QWORD *)&v9 + 1) )
    {
      *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
      qword_14042BBC0 = 0x95EA5DE843D5D824uLL;
    }
  }
  return v9;
}
