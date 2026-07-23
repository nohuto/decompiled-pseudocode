/*
 * XREFs of KiLockExtendedServiceTable @ 0x14019F9A8
 * Callers:
 *     KiLockServiceTable @ 0x1401739E4 (KiLockServiceTable.c)
 * Callees:
 *     MmIsSessionAddress @ 0x1400245B0 (MmIsSessionAddress.c)
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     PsGetCurrentProcess @ 0x1400F13B0 (PsGetCurrentProcess.c)
 *     RtlLookupFunctionTable @ 0x1401376E0 (RtlLookupFunctionTable.c)
 *     RtlpConvertFunctionEntry @ 0x1401850A0 (RtlpConvertFunctionEntry.c)
 *     RtlCaptureImageExceptionValues @ 0x140193110 (RtlCaptureImageExceptionValues.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
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
  __int64 v41; // rax
  void *v42; // rcx
  char v43; // r13
  PIMAGE_NT_HEADERS v44; // rax
  char *v45; // r8
  int v46; // r11d
  int v47; // ecx
  __int16 v48; // ax
  int v49; // r10d
  char *v50; // rdx
  char v51; // cl
  char v52; // al
  char *v53; // r9
  unsigned int v54; // edx
  char *v55; // r10
  __int64 v56; // rcx
  __int64 v57; // rax
  char v58; // cl
  char v59; // al
  char *v60; // rdx
  int v61; // r10d
  char v62; // cl
  char v63; // al
  char *v64; // rdx
  int v65; // r10d
  char v66; // cl
  char v67; // al
  unsigned int v68; // r9d
  char v69; // r14
  _QWORD *v70; // r12
  _QWORD *v71; // r11
  unsigned __int64 v72; // rcx
  const char *v73; // rax
  ULONG_PTR v74; // r10
  unsigned int v75; // r15d
  __int64 v76; // rdx
  ULONG_PTR v77; // rax
  __int64 *v78; // r11
  __int64 v79; // r10
  ULONG_PTR v80; // rcx
  char v81; // al
  int v82; // eax
  unsigned int v83; // r9d
  unsigned __int64 v84; // rdx
  ULONG_PTR v85; // rax
  ULONG_PTR v86; // rax
  int v87; // edx
  __int64 v88; // r13
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // r15
  __int64 v92; // r14
  __int64 v93; // rax
  unsigned __int64 v94; // r12
  int v95; // eax
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
  __int64 v113; // rdx
  unsigned __int64 v114; // rax
  __int64 *v115; // r10
  __int64 v116; // r8
  unsigned __int64 v117; // rcx
  char v118; // al
  int v119; // eax
  unsigned int v120; // r9d
  unsigned __int64 v121; // rdx
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
  __int64 v133; // [rsp+70h] [rbp-98h] BYREF
  char *v134; // [rsp+78h] [rbp-90h]
  unsigned int *v135; // [rsp+80h] [rbp-88h] BYREF
  __int128 v136; // [rsp+88h] [rbp-80h]
  __int128 v137; // [rsp+98h] [rbp-70h]
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
    if ( dword_140402EB8 == SessionId
      || (*(_QWORD *)&v9 = (unsigned int)_InterlockedCompareExchange(&dword_140402EB8, SessionId, -1), (_DWORD)v9 == -1) )
    {
      v10 = 4 * v4;
      v11 = ((unsigned __int64)&qword_140406680 ^ qword_140406688) & 0x3F;
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
      v16 = (unsigned __int64)&qword_140406680 ^ qword_140406688;
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
          v21 = __ROL8__((unsigned __int64)&qword_140406680 ^ qword_140406688 ^ ((unsigned __int64)v13 - v6), 17) ^ (unsigned __int64)&qword_140406680 ^ qword_140406688 ^ ((unsigned __int64)v13 - v6);
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
      v27 = v16 ^ qword_140406680;
      BugCheckParameter3 = v4;
      v28 = (_QWORD *)a2;
      v29 = (v16 ^ qword_140406680) & 0x3F;
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
      v30 = v16 ^ qword_140406680;
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
        qword_140406688 = v6 ^ v30 ^ BugCheckParameter3;
      }
      else
      {
        if ( !RtlLookupFunctionTable(v6, &v133, &v132) )
          KeBugCheckEx(0x43u, v6, a2, BugCheckParameter3, 0LL);
        v148 = 0;
        qword_140406780[0] = v133;
        v41 = 0LL;
        v130 = 0LL;
        do
        {
          v42 = (void *)qword_140406780[v41];
          v127 = (__int64)v42;
          if ( !v42 )
            break;
          v43 = v40 & 0x3F;
          LODWORD(v128) = v40 & 0x3F;
          v44 = RtlImageNtHeader(v42);
          v129 = (unsigned __int64)v44;
          if ( !v44 )
            KeBugCheckEx(0x43u, BugCheckParameter1, a2, BugCheckParameter3, 1uLL);
          v45 = (char *)&v44->OptionalHeader + v44->FileHeader.SizeOfOptionalHeader;
          v134 = &v45[40 * v44->FileHeader.NumberOfSections];
          do
          {
            v46 = 0;
            if ( (*((_DWORD *)v45 + 9) & 0x2000000) != 0
              || (v47 = *(_DWORD *)v45, *(_DWORD *)v45 == 1414090313) && *((_DWORD *)v45 + 1) == 1195525195
              || v47 == 1162297680 && ((v48 = *((_WORD *)v45 + 2), v48 == 30839) || v48 == 29303 || v48 == 30583)
              || v47 == 1095914053 && *((_WORD *)v45 + 2) == 16724 )
            {
LABEL_67:
              v46 = 1;
            }
            else
            {
              v49 = 7;
              v50 = VfExcludeSections[0];
              v136 = *(_OWORD *)VfExcludeSections;
              v137 = *(_OWORD *)off_140402D70;
              while ( 1 )
              {
                v51 = v50[v45 - VfExcludeSections[0]];
                v52 = *v50++;
                if ( v51 != v52 )
                  break;
                if ( !--v49 )
                  goto LABEL_67;
              }
              v53 = (char *)*((_QWORD *)&v136 + 1);
              v54 = 8;
              v55 = v45;
              while ( 1 )
              {
                v56 = *(_QWORD *)v55;
                v55 += 8;
                v57 = *(_QWORD *)v53;
                v53 += 8;
                if ( v56 != v57 )
                  break;
                v54 -= 8;
                if ( v54 < 8 )
                {
                  if ( !v54 )
                    goto LABEL_67;
                  while ( 1 )
                  {
                    v58 = *v55++;
                    v59 = *v53++;
                    if ( v58 != v59 )
                      goto LABEL_60;
                    if ( !--v54 )
                      goto LABEL_67;
                  }
                }
              }
LABEL_60:
              v60 = (char *)v137;
              v61 = 4;
              while ( 1 )
              {
                v62 = v45[(_QWORD)v60 - v137];
                v63 = *v60++;
                if ( v62 != v63 )
                  break;
                if ( !--v61 )
                  goto LABEL_67;
              }
              v64 = (char *)*((_QWORD *)&v137 + 1);
              v65 = 6;
              while ( 1 )
              {
                v66 = v45[(_QWORD)v64 - *((_QWORD *)&v137 + 1)];
                v67 = *v64++;
                if ( v66 != v67 )
                  break;
                if ( !--v65 )
                  goto LABEL_67;
              }
            }
            v68 = *((_DWORD *)v45 + 4);
            if ( *((int *)v45 + 9) < 0 )
              v46 = 1;
            if ( !v46 )
            {
              v69 = v43;
              if ( v68 <= *((_DWORD *)v45 + 2) )
                v68 = *((_DWORD *)v45 + 2);
              v70 = (_QWORD *)(v127 + *((unsigned int *)v45 + 3));
              v71 = v70;
              v72 = (unsigned __int64)v70 + v68;
              v73 = (const char *)v70;
              if ( (unsigned __int64)v70 < v72 )
              {
                do
                {
                  _mm_prefetch(v73, 0);
                  v73 += 64;
                }
                while ( (unsigned __int64)v73 < v72 );
              }
              v74 = v40;
              v75 = v68 >> 7;
              if ( v68 >> 7 )
              {
                do
                {
                  v76 = 8LL;
                  do
                  {
                    v77 = v74 ^ *v71;
                    v78 = v71 + 1;
                    v79 = *v78;
                    v71 = v78 + 1;
                    v74 = __ROL8__(__ROL8__(v77, v69) ^ v79, v69);
                    --v76;
                  }
                  while ( v76 );
                  v80 = __ROL8__(v40 ^ ((char *)v71 - (char *)v70), 17) ^ v40 ^ ((char *)v71 - (char *)v70);
                  v144 = (v80 * (unsigned __int128)0x7010008004002001uLL) >> 64;
                  v81 = v69 ^ v144 ^ v80;
                  v69 = 1;
                  v82 = v81 & 0x3F;
                  if ( v82 )
                    v69 = v82;
                  --v75;
                }
                while ( v75 );
                v43 = v128;
              }
              v83 = v68 & 0x7F;
              if ( v83 >= 8 )
              {
                v84 = (unsigned __int64)v83 >> 3;
                do
                {
                  v85 = v74 ^ *v71++;
                  v83 -= 8;
                  v74 = __ROL8__(v85, v69);
                  --v84;
                }
                while ( v84 );
              }
              for ( ; v83; --v83 )
              {
                v86 = v74 ^ *(unsigned __int8 *)v71;
                v71 = (_QWORD *)((char *)v71 + 1);
                v74 = __ROL8__(v86, v69);
              }
              v40 = v74;
            }
            v45 += 40;
          }
          while ( v45 != v134 );
          v87 = v148;
          if ( !v148 )
          {
            v88 = v127;
            v89 = *(unsigned int *)(v129 + 148);
            if ( (unsigned int)v89 >= 0x14 )
            {
              v90 = *(unsigned int *)(v129 + 144);
              v91 = v90 + v89 + v127;
              v92 = v90 + v127;
              if ( v90 + v127 != v91 )
              {
                do
                {
                  if ( !*(_DWORD *)(v92 + 12) )
                    break;
                  v93 = *(unsigned int *)(v92 + 16);
                  if ( !(_DWORD)v93 )
                    break;
                  v94 = *(_QWORD *)(v93 + v88);
                  if ( v94 )
                  {
                    LOBYTE(v95) = MmIsSessionAddress(*(_QWORD *)(v93 + v88));
                    if ( v95 )
                    {
                      if ( RtlLookupFunctionTable(v94, &v127, (_DWORD *)&v132 + 1) )
                      {
                        v96 = qword_140406780;
                        v97 = 0LL;
                        while ( *v96 != v127 )
                        {
                          if ( !*v96 )
                          {
                            qword_140406780[v97] = v127;
                            break;
                          }
                          v97 = (unsigned int)(v97 + 1);
                          ++v96;
                          if ( (unsigned int)v97 >= 0x10 )
                            break;
                        }
                        if ( (_DWORD)v97 == 16 )
                          goto LABEL_107;
                      }
                    }
                  }
                  v92 += 20LL;
                }
                while ( v92 != v91 );
                v87 = 0;
              }
            }
          }
          v41 = v130 + 1;
          v148 = v87 + 1;
          ++v130;
        }
        while ( (unsigned int)(v87 + 1) < 0x10 );
LABEL_107:
        *(_QWORD *)&v9 = memset(qword_140406780, 0, 0x80uLL);
        if ( v40 == qword_140406680 || !v40 )
        {
          *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
          v40 ^= 0x95EA5DE843D5D824uLL;
        }
        _InterlockedOr(v125, 0);
        qword_140406680 = v40;
      }
    }
  }
  else
  {
    v98 = (unsigned __int64)&qword_140406690;
    v99 = (unsigned __int64)&qword_140406690 & 0x3F;
    v129 = (unsigned __int64)&qword_140406690 & 0x3F;
    RtlImageNtHeader((PVOID)0x140000000LL);
    RtlCaptureImageExceptionValues(0x140000000uLL, (__int64)&v138, (__int64)&v126);
    v100 = v138;
    v101 = 0x140000000uLL;
    LODWORD(v126) = (unsigned int)v126 / 0xC;
    v139 = 0x140000000uLL;
    v102 = v138 + 12LL * (unsigned int)v126;
    v140 = v102;
    v141 = (__int64 *)&v135;
    while ( v100 && v100 != v102 )
    {
      v103 = RtlpConvertFunctionEntry(v100, v101);
      v104 = v99;
      *v141 = v103;
      v100 = v138 + 12;
      v138 += 12LL;
      v105 = *v135;
      v106 = v135[1] - v105;
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
            v114 = (unsigned __int64)v111 ^ *v109;
            v115 = v109 + 1;
            v116 = *v115;
            v109 = v115 + 1;
            v111 = (__int64 *)__ROL8__(__ROL8__(v114, v104) ^ v116, v104);
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
      v102 = v140;
      v101 = v139;
      v98 = (unsigned __int64)v111;
    }
    qword_140406690 = v98;
    if ( qword_140406680 )
      KeBugCheckEx(0x31u, 0xFFFFFFFFC0000001uLL, 0LL, 0LL, 0LL);
    v123 = __rdtsc();
    v9 = (__ROR8__(v123, 3) ^ v123) * (unsigned __int128)0x7010008004002001uLL;
    qword_140406680 = v9 ^ *((_QWORD *)&v9 + 1);
    if ( (unsigned __int64)v9 == *((_QWORD *)&v9 + 1) )
    {
      *(_QWORD *)&v9 = 0x95EA5DE843D5D824uLL;
      qword_140406680 = 0x95EA5DE843D5D824uLL;
    }
  }
  return v9;
}
